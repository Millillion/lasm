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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1109_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___x_1110_ = lean_unsigned_to_nat(46u);
v___x_1111_ = lean_unsigned_to_nat(193u);
v___x_1112_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4));
v___x_1113_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3));
v___x_1114_ = l_mkPanicMessageWithDecl(v___x_1113_, v___x_1112_, v___x_1111_, v___x_1110_, v___x_1109_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(lean_object* v_context_1116_, lean_object* v_d_1117_){
_start:
{
lean_object* v_received_1120_; 
if (lean_obj_tag(v_d_1117_) == 9)
{
lean_object* v_value_1134_; lean_object* v___x_1135_; 
v_value_1134_ = lean_ctor_get(v_d_1117_, 0);
lean_inc(v_value_1134_);
lean_dec_ref_known(v_d_1117_, 2);
v___x_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1135_, 0, v_value_1134_);
return v___x_1135_;
}
else
{
if (lean_obj_tag(v_d_1117_) == 9)
{
lean_object* v_value_1136_; lean_object* v_description_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v_value_1136_ = lean_ctor_get(v_d_1117_, 0);
v_description_1137_ = lean_ctor_get(v_d_1117_, 1);
v___x_1138_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_1139_ = lean_string_dec_eq(v_description_1137_, v___x_1138_);
if (v___x_1139_ == 0)
{
goto v___jp_1132_;
}
else
{
uint32_t v___x_1140_; uint64_t v___x_1141_; lean_object* v___x_1142_; uint32_t v___x_1143_; lean_object* v___x_1144_; 
lean_inc_n(v_value_1136_, 2);
lean_dec_ref_known(v_d_1117_, 2);
v___x_1140_ = 206;
v___x_1141_ = 0ULL;
v___x_1142_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1142_, 0, v_value_1136_);
lean_ctor_set(v___x_1142_, 1, v___x_1138_);
v___x_1143_ = lasm_js_value_handle(v_value_1136_);
lean_dec(v_value_1136_);
v___x_1144_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1140_, v___x_1141_, v___x_1142_, v___x_1143_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; uint8_t v___x_1146_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = lean_string_validate_utf8(v_a_1145_);
if (v___x_1146_ == 0)
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
lean_dec(v_a_1145_);
v___x_1147_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_1148_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1147_);
v_received_1120_ = v___x_1148_;
goto v___jp_1119_;
}
else
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_string_from_utf8_unchecked(v_a_1145_);
v_received_1120_ = v___x_1149_;
goto v___jp_1119_;
}
}
else
{
lean_object* v___x_1150_; 
lean_dec_ref_known(v___x_1144_, 1);
v___x_1150_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_1120_ = v___x_1150_;
goto v___jp_1119_;
}
}
}
else
{
goto v___jp_1132_;
}
}
v___jp_1119_:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1121_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_1122_ = lean_string_append(v___x_1121_, v_context_1116_);
v___x_1123_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_1124_ = lean_string_append(v___x_1122_, v___x_1123_);
v___x_1125_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__0));
v___x_1126_ = lean_string_append(v___x_1124_, v___x_1125_);
v___x_1127_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_1128_ = lean_string_append(v___x_1126_, v___x_1127_);
v___x_1129_ = lean_string_append(v___x_1128_, v_received_1120_);
lean_dec_ref(v_received_1120_);
v___x_1130_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
v___x_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
return v___x_1131_;
}
v___jp_1132_:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lasm_JS_Data_describe(v_d_1117_);
v_received_1120_ = v___x_1133_;
goto v___jp_1119_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1151_, lean_object* v_d_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v_context_1151_, v_d_1152_);
lean_dec_ref(v_context_1151_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(lean_object* v_args_1155_, lean_object* v_i_1156_){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; uint8_t v___x_1164_; 
v___x_1158_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0));
v___x_1159_ = lean_unsigned_to_nat(1u);
v___x_1160_ = lean_nat_add(v_i_1156_, v___x_1159_);
v___x_1161_ = l_Nat_reprFast(v___x_1160_);
v___x_1162_ = lean_string_append(v___x_1158_, v___x_1161_);
lean_dec_ref(v___x_1161_);
v___x_1163_ = lean_array_get_size(v_args_1155_);
v___x_1164_ = lean_nat_dec_lt(v_i_1156_, v___x_1163_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = lean_box(0);
v___x_1166_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v___x_1162_, v___x_1165_);
lean_dec_ref(v___x_1162_);
return v___x_1166_;
}
else
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = lean_array_fget_borrowed(v_args_1155_, v_i_1156_);
lean_inc(v___x_1167_);
v___x_1168_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v___x_1162_, v___x_1167_);
lean_dec_ref(v___x_1162_);
return v___x_1168_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0___boxed(lean_object* v_args_1169_, lean_object* v_i_1170_, lean_object* v_a_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1169_, v_i_1170_);
lean_dec(v_i_1170_);
lean_dec_ref(v_args_1169_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2(lean_object* v___f_1173_, lean_object* v_args_1174_){
_start:
{
lean_object* v___x_1176_; uint8_t v___x_1177_; lean_object* v_val_1179_; lean_object* v___x_1182_; 
v___x_1176_ = lean_unsigned_to_nat(0u);
v___x_1177_ = 0;
v___x_1182_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1174_, v___x_1176_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1182_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1182_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
lean_ctor_set_tag(v___x_1185_, 1);
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
v_val_1179_ = v___x_1188_;
goto v___jp_1178_;
}
}
}
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
v_a_1191_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___x_1182_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1182_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
lean_ctor_set_tag(v___x_1193_, 0);
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
v_val_1179_ = v___x_1196_;
goto v___jp_1178_;
}
}
}
v___jp_1178_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1180_, 0, v_val_1179_);
v___x_1181_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1176_, v___x_1177_, v___x_1180_, v___f_1173_);
return v___x_1181_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2___boxed(lean_object* v___f_1199_, lean_object* v_args_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2(v___f_1199_, v_args_1200_);
lean_dec_ref(v_args_1200_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn(lean_object* v_f_1203_){
_start:
{
lean_object* v___f_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; 
v___f_1205_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_1206_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1206_, 0, v_f_1203_);
lean_closure_set(v___f_1206_, 1, v___f_1205_);
v___f_1207_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1207_, 0, v___f_1206_);
v___x_1208_ = l_Lasm_JS_Function_ofFn(v___f_1207_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_a_1217_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1208_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1208_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___boxed(lean_object* v_f_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn(v_f_1225_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0(lean_object* v_f_1228_, lean_object* v_args_1229_){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = lean_unsigned_to_nat(0u);
v___x_1232_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1229_, v___x_1231_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v_a_1233_; lean_object* v___x_1234_; 
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1233_);
lean_dec_ref_known(v___x_1232_, 1);
v___x_1234_ = lean_apply_2(v_f_1228_, v_a_1233_, lean_box(0));
return v___x_1234_;
}
else
{
lean_object* v_a_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1242_; 
lean_dec_ref(v_f_1228_);
v_a_1235_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1237_ = v___x_1232_;
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_a_1235_);
lean_dec(v___x_1232_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1238_ == 0)
{
v___x_1240_ = v___x_1237_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_a_1235_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1243_, lean_object* v_args_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0(v_f_1243_, v_args_1244_);
lean_dec_ref(v_args_1244_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn(lean_object* v_f_1247_){
_start:
{
lean_object* v___f_1249_; lean_object* v___x_1250_; 
v___f_1249_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1249_, 0, v_f_1247_);
v___x_1250_ = l_Lasm_JS_Function_ofSyncFn(v___f_1249_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v___x_1250_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_a_1251_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
v_a_1259_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1250_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1250_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___boxed(lean_object* v_f_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn(v_f_1267_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1(lean_object* v_f_1277_, lean_object* v_a_1278_, lean_object* v___f_1279_, lean_object* v_x_1280_){
_start:
{
if (lean_obj_tag(v_x_1280_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1290_; 
lean_dec_ref(v___f_1279_);
lean_dec(v_a_1278_);
lean_dec_ref(v_f_1277_);
v_a_1282_ = lean_ctor_get(v_x_1280_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_x_1280_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1284_ = v_x_1280_;
v_isShared_1285_ = v_isSharedCheck_1290_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v_x_1280_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1290_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1288_; 
v___x_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
return v___x_1288_;
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v_a_1291_ = lean_ctor_get(v_x_1280_, 0);
lean_inc(v_a_1291_);
lean_dec_ref_known(v_x_1280_, 1);
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = 0;
v___x_1294_ = lean_apply_3(v_f_1277_, v_a_1278_, v_a_1291_, lean_box(0));
v___x_1295_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1292_, v___x_1293_, v___x_1294_, v___f_1279_);
return v___x_1295_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed(lean_object* v_f_1296_, lean_object* v_a_1297_, lean_object* v___f_1298_, lean_object* v_x_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1(v_f_1296_, v_a_1297_, v___f_1298_, v_x_1299_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0(lean_object* v_f_1302_, lean_object* v___f_1303_, lean_object* v_args_1304_, lean_object* v_x_1305_){
_start:
{
if (lean_obj_tag(v_x_1305_) == 0)
{
lean_object* v___x_1307_; 
lean_dec_ref(v___f_1303_);
lean_dec_ref(v_f_1302_);
v___x_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1307_, 0, v_x_1305_);
return v___x_1307_;
}
else
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1329_; 
v_a_1308_ = lean_ctor_get(v_x_1305_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_x_1305_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1310_ = v_x_1305_;
v_isShared_1311_ = v_isSharedCheck_1329_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v_x_1305_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1329_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___f_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; uint8_t v___x_1315_; lean_object* v_val_1317_; lean_object* v___x_1320_; 
v___f_1312_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1312_, 0, v_f_1302_);
lean_closure_set(v___f_1312_, 1, v_a_1308_);
lean_closure_set(v___f_1312_, 2, v___f_1303_);
v___x_1313_ = lean_unsigned_to_nat(1u);
v___x_1314_ = lean_unsigned_to_nat(0u);
v___x_1315_ = 0;
v___x_1320_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1304_, v___x_1313_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v___x_1320_, 1);
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 0, v_a_1321_);
v___x_1323_ = v___x_1310_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
v_val_1317_ = v___x_1323_;
goto v___jp_1316_;
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; 
v_a_1325_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1325_);
lean_dec_ref_known(v___x_1320_, 1);
if (v_isShared_1311_ == 0)
{
lean_ctor_set_tag(v___x_1310_, 0);
lean_ctor_set(v___x_1310_, 0, v_a_1325_);
v___x_1327_ = v___x_1310_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1325_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
v_val_1317_ = v___x_1327_;
goto v___jp_1316_;
}
}
v___jp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1318_, 0, v_val_1317_);
v___x_1319_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1314_, v___x_1315_, v___x_1318_, v___f_1312_);
return v___x_1319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0___boxed(lean_object* v_f_1330_, lean_object* v___f_1331_, lean_object* v_args_1332_, lean_object* v_x_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0(v_f_1330_, v___f_1331_, v_args_1332_, v_x_1333_);
lean_dec_ref(v_args_1332_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2(lean_object* v_f_1336_, lean_object* v___f_1337_, lean_object* v_args_1338_){
_start:
{
lean_object* v___f_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; lean_object* v_val_1344_; lean_object* v___x_1347_; lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_inc_ref(v_args_1338_);
v___f_1340_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1340_, 0, v_f_1336_);
lean_closure_set(v___f_1340_, 1, v___f_1337_);
lean_closure_set(v___f_1340_, 2, v_args_1338_);
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = 0;
v___x_1347_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1338_, v___x_1341_);
lean_dec_ref(v_args_1338_);
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1347_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1347_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v___jp_1343_:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1345_, 0, v_val_1344_);
v___x_1346_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1341_, v___x_1342_, v___x_1345_, v___f_1340_);
return v___x_1346_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
lean_ctor_set_tag(v___x_1350_, 1);
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
v_val_1344_ = v___x_1353_;
goto v___jp_1343_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2___boxed(lean_object* v_f_1356_, lean_object* v___f_1357_, lean_object* v_args_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2(v_f_1356_, v___f_1357_, v_args_1358_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn(lean_object* v_f_1361_){
_start:
{
lean_object* v___f_1363_; lean_object* v___f_1364_; lean_object* v___x_1365_; 
v___f_1363_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1364_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1364_, 0, v_f_1361_);
lean_closure_set(v___f_1364_, 1, v___f_1363_);
v___x_1365_ = l_Lasm_JS_Function_ofFn(v___f_1364_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1365_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1365_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1365_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
else
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
v_a_1374_ = lean_ctor_get(v___x_1365_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1365_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1365_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1365_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___boxed(lean_object* v_f_1382_, lean_object* v_a_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn(v_f_1382_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0(lean_object* v_f_1385_, lean_object* v_args_1386_){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v_a_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1388_ = lean_unsigned_to_nat(0u);
v___x_1389_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1386_, v___x_1388_);
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
lean_inc(v_a_1390_);
lean_dec_ref(v___x_1389_);
v___x_1391_ = lean_unsigned_to_nat(1u);
v___x_1392_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1386_, v___x_1391_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1394_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref_known(v___x_1392_, 1);
v___x_1394_ = lean_apply_3(v_f_1385_, v_a_1390_, v_a_1393_, lean_box(0));
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1402_; 
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1402_ == 0)
{
lean_object* v_unused_1403_; 
v_unused_1403_ = lean_ctor_get(v___x_1394_, 0);
lean_dec(v_unused_1403_);
v___x_1396_ = v___x_1394_;
v_isShared_1397_ = v_isSharedCheck_1402_;
goto v_resetjp_1395_;
}
else
{
lean_dec(v___x_1394_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1402_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1398_ = lean_box(0);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1398_);
v___x_1400_ = v___x_1396_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
v_a_1404_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1394_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1394_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_dec(v_a_1390_);
lean_dec_ref(v_f_1385_);
v_a_1412_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1392_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1392_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1420_, lean_object* v_args_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0(v_f_1420_, v_args_1421_);
lean_dec_ref(v_args_1421_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn(lean_object* v_f_1424_){
_start:
{
lean_object* v___f_1426_; lean_object* v___x_1427_; 
v___f_1426_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1426_, 0, v_f_1424_);
v___x_1427_ = l_Lasm_JS_Function_ofSyncFn(v___f_1426_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
v_a_1428_ = lean_ctor_get(v___x_1427_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1427_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v___x_1427_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v___x_1427_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1428_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
v_a_1436_ = lean_ctor_get(v___x_1427_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1427_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1427_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1427_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___boxed(lean_object* v_f_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn(v_f_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1(lean_object* v_f_1454_, lean_object* v___f_1455_, lean_object* v_x_1456_){
_start:
{
lean_object* v___x_1458_; uint8_t v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1458_ = lean_unsigned_to_nat(0u);
v___x_1459_ = 0;
v___x_1460_ = lean_apply_1(v_f_1454_, lean_box(0));
v___x_1461_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1458_, v___x_1459_, v___x_1460_, v___f_1455_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1___boxed(lean_object* v_f_1462_, lean_object* v___f_1463_, lean_object* v_x_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1(v_f_1462_, v___f_1463_, v_x_1464_);
lean_dec_ref(v_x_1464_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn(lean_object* v_f_1467_){
_start:
{
lean_object* v___f_1469_; lean_object* v___f_1470_; lean_object* v___x_1471_; 
v___f_1469_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1470_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1470_, 0, v_f_1467_);
lean_closure_set(v___f_1470_, 1, v___f_1469_);
v___x_1471_ = l_Lasm_JS_Function_ofFn(v___f_1470_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1471_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
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
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
v_a_1480_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1471_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1471_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___boxed(lean_object* v_f_1488_, lean_object* v_a_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn(v_f_1488_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0(lean_object* v_f_1491_, lean_object* v_x_1492_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_apply_1(v_f_1491_, lean_box(0));
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1502_; 
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1502_ == 0)
{
lean_object* v_unused_1503_; 
v_unused_1503_ = lean_ctor_get(v___x_1494_, 0);
lean_dec(v_unused_1503_);
v___x_1496_ = v___x_1494_;
v_isShared_1497_ = v_isSharedCheck_1502_;
goto v_resetjp_1495_;
}
else
{
lean_dec(v___x_1494_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1502_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1498_; lean_object* v___x_1500_; 
v___x_1498_ = lean_box(0);
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 0, v___x_1498_);
v___x_1500_ = v___x_1496_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v___x_1498_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
v_a_1504_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1494_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1494_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1509_; 
if (v_isShared_1507_ == 0)
{
v___x_1509_ = v___x_1506_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_a_1504_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1512_, lean_object* v_x_1513_, lean_object* v___y_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0(v_f_1512_, v_x_1513_);
lean_dec_ref(v_x_1513_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn(lean_object* v_f_1516_){
_start:
{
lean_object* v___f_1518_; lean_object* v___x_1519_; 
v___f_1518_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1518_, 0, v_f_1516_);
v___x_1519_ = l_Lasm_JS_Function_ofSyncFn(v___f_1518_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1519_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1519_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
v_a_1528_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1519_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1519_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___boxed(lean_object* v_f_1536_, lean_object* v_a_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn(v_f_1536_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn(lean_object* v_f_1546_){
_start:
{
lean_object* v___f_1548_; lean_object* v___f_1549_; lean_object* v___f_1550_; lean_object* v___x_1551_; 
v___f_1548_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1549_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1549_, 0, v_f_1546_);
lean_closure_set(v___f_1549_, 1, v___f_1548_);
v___f_1550_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1550_, 0, v___f_1549_);
v___x_1551_ = l_Lasm_JS_Function_ofFn(v___f_1550_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1551_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1551_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
else
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1567_; 
v_a_1560_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1562_ = v___x_1551_;
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1551_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1567_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn___boxed(lean_object* v_f_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn(v_f_1568_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn(lean_object* v_f_1571_){
_start:
{
lean_object* v___f_1573_; lean_object* v___x_1574_; 
v___f_1573_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1573_, 0, v_f_1571_);
v___x_1574_ = l_Lasm_JS_Function_ofSyncFn(v___f_1573_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1574_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
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
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
v_a_1583_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1574_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1574_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn___boxed(lean_object* v_f_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn(v_f_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0(lean_object* v___f_1597_, lean_object* v___f_1598_, lean_object* v___f_1599_, lean_object* v___f_1600_, lean_object* v_d_1601_){
_start:
{
lean_object* v_start_1602_; lean_object* v_write_1603_; lean_object* v_close_1604_; lean_object* v_abort_1605_; lean_object* v_type_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v_start_1602_ = lean_ctor_get(v_d_1601_, 0);
lean_inc(v_start_1602_);
v_write_1603_ = lean_ctor_get(v_d_1601_, 1);
lean_inc(v_write_1603_);
v_close_1604_ = lean_ctor_get(v_d_1601_, 2);
lean_inc(v_close_1604_);
v_abort_1605_ = lean_ctor_get(v_d_1601_, 3);
lean_inc(v_abort_1605_);
v_type_1606_ = lean_ctor_get(v_d_1601_, 4);
lean_inc(v_type_1606_);
lean_dec_ref(v_d_1601_);
v___x_1607_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0));
v___x_1608_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1597_, v_start_1602_);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1607_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
v___x_1610_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0));
v___x_1611_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1598_, v_write_1603_);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1610_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_1614_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1599_, v_close_1604_);
v___x_1615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1613_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
v___x_1616_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_1617_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1600_, v_abort_1605_);
v___x_1618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1616_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__3));
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
lean_ctor_set(v___x_1620_, 1, v_type_1606_);
v___x_1621_ = lean_unsigned_to_nat(5u);
v___x_1622_ = lean_mk_empty_array_with_capacity(v___x_1621_);
v___x_1623_ = lean_array_push(v___x_1622_, v___x_1609_);
v___x_1624_ = lean_array_push(v___x_1623_, v___x_1612_);
v___x_1625_ = lean_array_push(v___x_1624_, v___x_1615_);
v___x_1626_ = lean_array_push(v___x_1625_, v___x_1618_);
v___x_1627_ = lean_array_push(v___x_1626_, v___x_1620_);
v___x_1628_ = l_Lasm_JS_Web_Support_fields(v___x_1627_);
lean_dec_ref(v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(lean_object* v_context_1639_, lean_object* v_d_1640_){
_start:
{
lean_object* v_received_1643_; 
if (lean_obj_tag(v_d_1640_) == 9)
{
lean_object* v_value_1657_; lean_object* v___x_1658_; 
v_value_1657_ = lean_ctor_get(v_d_1640_, 0);
lean_inc(v_value_1657_);
lean_dec_ref_known(v_d_1640_, 2);
v___x_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1658_, 0, v_value_1657_);
return v___x_1658_;
}
else
{
if (lean_obj_tag(v_d_1640_) == 9)
{
lean_object* v_value_1659_; lean_object* v_description_1660_; lean_object* v___x_1661_; uint8_t v___x_1662_; 
v_value_1659_ = lean_ctor_get(v_d_1640_, 0);
v_description_1660_ = lean_ctor_get(v_d_1640_, 1);
v___x_1661_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_1662_ = lean_string_dec_eq(v_description_1660_, v___x_1661_);
if (v___x_1662_ == 0)
{
goto v___jp_1655_;
}
else
{
uint32_t v___x_1663_; uint64_t v___x_1664_; lean_object* v___x_1665_; uint32_t v___x_1666_; lean_object* v___x_1667_; 
lean_inc_n(v_value_1659_, 2);
lean_dec_ref_known(v_d_1640_, 2);
v___x_1663_ = 206;
v___x_1664_ = 0ULL;
v___x_1665_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1665_, 0, v_value_1659_);
lean_ctor_set(v___x_1665_, 1, v___x_1661_);
v___x_1666_ = lasm_js_value_handle(v_value_1659_);
lean_dec(v_value_1659_);
v___x_1667_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1663_, v___x_1664_, v___x_1665_, v___x_1666_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; uint8_t v___x_1669_; 
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1667_, 1);
v___x_1669_ = lean_string_validate_utf8(v_a_1668_);
if (v___x_1669_ == 0)
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
lean_dec(v_a_1668_);
v___x_1670_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_1671_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1670_);
v_received_1643_ = v___x_1671_;
goto v___jp_1642_;
}
else
{
lean_object* v___x_1672_; 
v___x_1672_ = lean_string_from_utf8_unchecked(v_a_1668_);
v_received_1643_ = v___x_1672_;
goto v___jp_1642_;
}
}
else
{
lean_object* v___x_1673_; 
lean_dec_ref_known(v___x_1667_, 1);
v___x_1673_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_1643_ = v___x_1673_;
goto v___jp_1642_;
}
}
}
else
{
goto v___jp_1655_;
}
}
v___jp_1642_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1644_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_1645_ = lean_string_append(v___x_1644_, v_context_1639_);
v___x_1646_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_1647_ = lean_string_append(v___x_1645_, v___x_1646_);
v___x_1648_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__0));
v___x_1649_ = lean_string_append(v___x_1647_, v___x_1648_);
v___x_1650_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_1651_ = lean_string_append(v___x_1649_, v___x_1650_);
v___x_1652_ = lean_string_append(v___x_1651_, v_received_1643_);
lean_dec_ref(v_received_1643_);
v___x_1653_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1652_);
v___x_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
return v___x_1654_;
}
v___jp_1655_:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lasm_JS_Data_describe(v_d_1640_);
v_received_1643_ = v___x_1656_;
goto v___jp_1642_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1674_, lean_object* v_d_1675_, lean_object* v_a_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v_context_1674_, v_d_1675_);
lean_dec_ref(v_context_1674_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(lean_object* v_args_1678_, lean_object* v_i_1679_){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; 
v___x_1681_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0));
v___x_1682_ = lean_unsigned_to_nat(1u);
v___x_1683_ = lean_nat_add(v_i_1679_, v___x_1682_);
v___x_1684_ = l_Nat_reprFast(v___x_1683_);
v___x_1685_ = lean_string_append(v___x_1681_, v___x_1684_);
lean_dec_ref(v___x_1684_);
v___x_1686_ = lean_array_get_size(v_args_1678_);
v___x_1687_ = lean_nat_dec_lt(v_i_1679_, v___x_1686_);
if (v___x_1687_ == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1688_ = lean_box(0);
v___x_1689_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v___x_1685_, v___x_1688_);
lean_dec_ref(v___x_1685_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_array_fget_borrowed(v_args_1678_, v_i_1679_);
lean_inc(v___x_1690_);
v___x_1691_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v___x_1685_, v___x_1690_);
lean_dec_ref(v___x_1685_);
return v___x_1691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0___boxed(lean_object* v_args_1692_, lean_object* v_i_1693_, lean_object* v_a_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1692_, v_i_1693_);
lean_dec(v_i_1693_);
lean_dec_ref(v_args_1692_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2(lean_object* v___f_1696_, lean_object* v_args_1697_){
_start:
{
lean_object* v___x_1699_; uint8_t v___x_1700_; lean_object* v_val_1702_; lean_object* v___x_1705_; 
v___x_1699_ = lean_unsigned_to_nat(0u);
v___x_1700_ = 0;
v___x_1705_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1697_, v___x_1699_);
if (lean_obj_tag(v___x_1705_) == 0)
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
v_a_1706_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1705_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1705_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
lean_ctor_set_tag(v___x_1708_, 1);
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
v_val_1702_ = v___x_1711_;
goto v___jp_1701_;
}
}
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
v_a_1714_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1705_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1705_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set_tag(v___x_1716_, 0);
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
v_val_1702_ = v___x_1719_;
goto v___jp_1701_;
}
}
}
v___jp_1701_:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1703_, 0, v_val_1702_);
v___x_1704_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1699_, v___x_1700_, v___x_1703_, v___f_1696_);
return v___x_1704_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed(lean_object* v___f_1722_, lean_object* v_args_1723_, lean_object* v___y_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2(v___f_1722_, v_args_1723_);
lean_dec_ref(v_args_1723_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn(lean_object* v_f_1726_){
_start:
{
lean_object* v___f_1728_; lean_object* v___f_1729_; lean_object* v___f_1730_; lean_object* v___x_1731_; 
v___f_1728_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_1729_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1729_, 0, v_f_1726_);
lean_closure_set(v___f_1729_, 1, v___f_1728_);
v___f_1730_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1730_, 0, v___f_1729_);
v___x_1731_ = l_Lasm_JS_Function_ofFn(v___f_1730_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v___x_1731_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1731_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
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
return v___x_1737_;
}
}
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
v_a_1740_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1731_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1731_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___boxed(lean_object* v_f_1748_, lean_object* v_a_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l_Lasm_JS_Web_TransformerStartCallback_ofFn(v_f_1748_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0(lean_object* v_f_1751_, lean_object* v_args_1752_){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1754_ = lean_unsigned_to_nat(0u);
v___x_1755_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1752_, v___x_1754_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; lean_object* v___x_1757_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_a_1756_);
lean_dec_ref_known(v___x_1755_, 1);
v___x_1757_ = lean_apply_2(v_f_1751_, v_a_1756_, lean_box(0));
return v___x_1757_;
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_dec_ref(v_f_1751_);
v_a_1758_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1755_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1755_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1766_, lean_object* v_args_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0(v_f_1766_, v_args_1767_);
lean_dec_ref(v_args_1767_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn(lean_object* v_f_1770_){
_start:
{
lean_object* v___f_1772_; lean_object* v___x_1773_; 
v___f_1772_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1772_, 0, v_f_1770_);
v___x_1773_ = l_Lasm_JS_Function_ofSyncFn(v___f_1772_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1781_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1776_ = v___x_1773_;
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v___x_1773_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1774_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
v_a_1782_ = lean_ctor_get(v___x_1773_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1773_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1773_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___boxed(lean_object* v_f_1790_, lean_object* v_a_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn(v_f_1790_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2(lean_object* v_f_1800_, lean_object* v___f_1801_, lean_object* v_args_1802_, lean_object* v_x_1803_){
_start:
{
if (lean_obj_tag(v_x_1803_) == 0)
{
lean_object* v___x_1805_; 
lean_dec_ref(v___f_1801_);
lean_dec_ref(v_f_1800_);
v___x_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1805_, 0, v_x_1803_);
return v___x_1805_;
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1827_; 
v_a_1806_ = lean_ctor_get(v_x_1803_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v_x_1803_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1808_ = v_x_1803_;
v_isShared_1809_ = v_isSharedCheck_1827_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v_x_1803_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1827_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___f_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; uint8_t v___x_1813_; lean_object* v_val_1815_; lean_object* v___x_1818_; 
v___f_1810_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1810_, 0, v_f_1800_);
lean_closure_set(v___f_1810_, 1, v_a_1806_);
lean_closure_set(v___f_1810_, 2, v___f_1801_);
v___x_1811_ = lean_unsigned_to_nat(1u);
v___x_1812_ = lean_unsigned_to_nat(0u);
v___x_1813_ = 0;
v___x_1818_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1802_, v___x_1811_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1821_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref_known(v___x_1818_, 1);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 0, v_a_1819_);
v___x_1821_ = v___x_1808_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
v_val_1815_ = v___x_1821_;
goto v___jp_1814_;
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; 
v_a_1823_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1823_);
lean_dec_ref_known(v___x_1818_, 1);
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 0);
lean_ctor_set(v___x_1808_, 0, v_a_1823_);
v___x_1825_ = v___x_1808_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
v_val_1815_ = v___x_1825_;
goto v___jp_1814_;
}
}
v___jp_1814_:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1816_, 0, v_val_1815_);
v___x_1817_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1812_, v___x_1813_, v___x_1816_, v___f_1810_);
return v___x_1817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2___boxed(lean_object* v_f_1828_, lean_object* v___f_1829_, lean_object* v_args_1830_, lean_object* v_x_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2(v_f_1828_, v___f_1829_, v_args_1830_, v_x_1831_);
lean_dec_ref(v_args_1830_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0(lean_object* v_f_1834_, lean_object* v___f_1835_, lean_object* v_args_1836_){
_start:
{
lean_object* v___f_1838_; lean_object* v___x_1839_; uint8_t v___x_1840_; lean_object* v_val_1842_; lean_object* v___x_1845_; lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_inc_ref(v_args_1836_);
v___f_1838_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1838_, 0, v_f_1834_);
lean_closure_set(v___f_1838_, 1, v___f_1835_);
lean_closure_set(v___f_1838_, 2, v_args_1836_);
v___x_1839_ = lean_unsigned_to_nat(0u);
v___x_1840_ = 0;
v___x_1845_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1836_, v___x_1839_);
lean_dec_ref(v_args_1836_);
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1845_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v___jp_1841_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1843_, 0, v_val_1842_);
v___x_1844_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1839_, v___x_1840_, v___x_1843_, v___f_1838_);
return v___x_1844_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
lean_ctor_set_tag(v___x_1848_, 1);
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
v_val_1842_ = v___x_1851_;
goto v___jp_1841_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0___boxed(lean_object* v_f_1854_, lean_object* v___f_1855_, lean_object* v_args_1856_, lean_object* v___y_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0(v_f_1854_, v___f_1855_, v_args_1856_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn(lean_object* v_f_1859_){
_start:
{
lean_object* v___f_1861_; lean_object* v___f_1862_; lean_object* v___x_1863_; 
v___f_1861_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1862_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1862_, 0, v_f_1859_);
lean_closure_set(v___f_1862_, 1, v___f_1861_);
v___x_1863_ = l_Lasm_JS_Function_ofFn(v___f_1862_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
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
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
v_a_1872_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1863_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1863_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___boxed(lean_object* v_f_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn(v_f_1880_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0(lean_object* v_f_1883_, lean_object* v_args_1884_){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v_a_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1886_ = lean_unsigned_to_nat(0u);
v___x_1887_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1884_, v___x_1886_);
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_a_1888_);
lean_dec_ref(v___x_1887_);
v___x_1889_ = lean_unsigned_to_nat(1u);
v___x_1890_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1884_, v___x_1889_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1892_; 
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
lean_inc(v_a_1891_);
lean_dec_ref_known(v___x_1890_, 1);
v___x_1892_ = lean_apply_3(v_f_1883_, v_a_1888_, v_a_1891_, lean_box(0));
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1900_; 
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1900_ == 0)
{
lean_object* v_unused_1901_; 
v_unused_1901_ = lean_ctor_get(v___x_1892_, 0);
lean_dec(v_unused_1901_);
v___x_1894_ = v___x_1892_;
v_isShared_1895_ = v_isSharedCheck_1900_;
goto v_resetjp_1893_;
}
else
{
lean_dec(v___x_1892_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1900_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___x_1896_; lean_object* v___x_1898_; 
v___x_1896_ = lean_box(0);
if (v_isShared_1895_ == 0)
{
lean_ctor_set(v___x_1894_, 0, v___x_1896_);
v___x_1898_ = v___x_1894_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1896_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
v_a_1902_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1892_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1892_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec(v_a_1888_);
lean_dec_ref(v_f_1883_);
v_a_1910_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1890_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1890_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1918_, lean_object* v_args_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0(v_f_1918_, v_args_1919_);
lean_dec_ref(v_args_1919_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn(lean_object* v_f_1922_){
_start:
{
lean_object* v___f_1924_; lean_object* v___x_1925_; 
v___f_1924_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1924_, 0, v_f_1922_);
v___x_1925_ = l_Lasm_JS_Function_ofSyncFn(v___f_1924_);
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
v_a_1926_ = lean_ctor_get(v___x_1925_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1925_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1925_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
v_a_1934_ = lean_ctor_get(v___x_1925_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1925_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1925_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___boxed(lean_object* v_f_1942_, lean_object* v_a_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn(v_f_1942_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofFn(lean_object* v_f_1952_){
_start:
{
lean_object* v___f_1954_; lean_object* v___f_1955_; lean_object* v___f_1956_; lean_object* v___x_1957_; 
v___f_1954_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1955_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1955_, 0, v_f_1952_);
lean_closure_set(v___f_1955_, 1, v___f_1954_);
v___f_1956_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1956_, 0, v___f_1955_);
v___x_1957_ = l_Lasm_JS_Function_ofFn(v___f_1956_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1957_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1957_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
else
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
v_a_1966_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___x_1957_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1957_);
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
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofFn___boxed(lean_object* v_f_1974_, lean_object* v_a_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l_Lasm_JS_Web_TransformerFlushCallback_ofFn(v_f_1974_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0(lean_object* v_f_1977_, lean_object* v_args_1978_){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = lean_unsigned_to_nat(0u);
v___x_1981_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1978_, v___x_1980_);
if (lean_obj_tag(v___x_1981_) == 0)
{
lean_object* v_a_1982_; lean_object* v___x_1983_; 
v_a_1982_ = lean_ctor_get(v___x_1981_, 0);
lean_inc(v_a_1982_);
lean_dec_ref_known(v___x_1981_, 1);
v___x_1983_ = lean_apply_2(v_f_1977_, v_a_1982_, lean_box(0));
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1991_; 
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1991_ == 0)
{
lean_object* v_unused_1992_; 
v_unused_1992_ = lean_ctor_get(v___x_1983_, 0);
lean_dec(v_unused_1992_);
v___x_1985_ = v___x_1983_;
v_isShared_1986_ = v_isSharedCheck_1991_;
goto v_resetjp_1984_;
}
else
{
lean_dec(v___x_1983_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1991_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1987_; lean_object* v___x_1989_; 
v___x_1987_ = lean_box(0);
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 0, v___x_1987_);
v___x_1989_ = v___x_1985_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1987_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
else
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
v_a_1993_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1995_ = v___x_1983_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1983_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_a_1993_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
else
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2008_; 
lean_dec_ref(v_f_1977_);
v_a_2001_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_2003_ = v___x_1981_;
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_1981_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2006_; 
if (v_isShared_2004_ == 0)
{
v___x_2006_ = v___x_2003_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_2001_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_2009_, lean_object* v_args_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0(v_f_2009_, v_args_2010_);
lean_dec_ref(v_args_2010_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn(lean_object* v_f_2013_){
_start:
{
lean_object* v___f_2015_; lean_object* v___x_2016_; 
v___f_2015_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2015_, 0, v_f_2013_);
v___x_2016_ = l_Lasm_JS_Function_ofSyncFn(v___f_2015_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
v_a_2025_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2016_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2016_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___boxed(lean_object* v_f_2033_, lean_object* v_a_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn(v_f_2033_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofFn(lean_object* v_f_2043_){
_start:
{
lean_object* v___f_2045_; lean_object* v___f_2046_; lean_object* v___f_2047_; lean_object* v___x_2048_; 
v___f_2045_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_2046_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2046_, 0, v_f_2043_);
lean_closure_set(v___f_2046_, 1, v___f_2045_);
v___f_2047_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2047_, 0, v___f_2046_);
v___x_2048_ = l_Lasm_JS_Function_ofFn(v___f_2047_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
else
{
lean_object* v_a_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2064_; 
v_a_2057_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2059_ = v___x_2048_;
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_a_2057_);
lean_dec(v___x_2048_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2062_; 
if (v_isShared_2060_ == 0)
{
v___x_2062_ = v___x_2059_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_a_2057_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofFn___boxed(lean_object* v_f_2065_, lean_object* v_a_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lasm_JS_Web_TransformerCancelCallback_ofFn(v_f_2065_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn(lean_object* v_f_2068_){
_start:
{
lean_object* v___f_2070_; lean_object* v___x_2071_; 
v___f_2070_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2070_, 0, v_f_2068_);
v___x_2071_ = l_Lasm_JS_Function_ofSyncFn(v___f_2070_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2071_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2071_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
v_a_2080_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2071_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2071_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn___boxed(lean_object* v_f_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn(v_f_2088_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTransformer___lam__0(lean_object* v___f_2095_, lean_object* v___f_2096_, lean_object* v___f_2097_, lean_object* v___f_2098_, lean_object* v_d_2099_){
_start:
{
lean_object* v_start_2100_; lean_object* v_transform_2101_; lean_object* v_flush_2102_; lean_object* v_cancel_2103_; lean_object* v_readableType_2104_; lean_object* v_writableType_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_start_2100_ = lean_ctor_get(v_d_2099_, 0);
lean_inc(v_start_2100_);
v_transform_2101_ = lean_ctor_get(v_d_2099_, 1);
lean_inc(v_transform_2101_);
v_flush_2102_ = lean_ctor_get(v_d_2099_, 2);
lean_inc(v_flush_2102_);
v_cancel_2103_ = lean_ctor_get(v_d_2099_, 3);
lean_inc(v_cancel_2103_);
v_readableType_2104_ = lean_ctor_get(v_d_2099_, 4);
lean_inc(v_readableType_2104_);
v_writableType_2105_ = lean_ctor_get(v_d_2099_, 5);
lean_inc(v_writableType_2105_);
lean_dec_ref(v_d_2099_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0));
v___x_2107_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2095_, v_start_2100_);
v___x_2108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2106_);
lean_ctor_set(v___x_2108_, 1, v___x_2107_);
v___x_2109_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__0));
v___x_2110_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2096_, v_transform_2101_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__1));
v___x_2113_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2097_, v_flush_2102_);
v___x_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2112_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_2116_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2098_, v_cancel_2103_);
v___x_2117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2115_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__2));
v___x_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
lean_ctor_set(v___x_2119_, 1, v_readableType_2104_);
v___x_2120_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__3));
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
lean_ctor_set(v___x_2121_, 1, v_writableType_2105_);
v___x_2122_ = lean_unsigned_to_nat(6u);
v___x_2123_ = lean_mk_empty_array_with_capacity(v___x_2122_);
v___x_2124_ = lean_array_push(v___x_2123_, v___x_2108_);
v___x_2125_ = lean_array_push(v___x_2124_, v___x_2111_);
v___x_2126_ = lean_array_push(v___x_2125_, v___x_2114_);
v___x_2127_ = lean_array_push(v___x_2126_, v___x_2117_);
v___x_2128_ = lean_array_push(v___x_2127_, v___x_2119_);
v___x_2129_ = lean_array_push(v___x_2128_, v___x_2121_);
v___x_2130_ = l_Lasm_JS_Web_Support_fields(v___x_2129_);
lean_dec_ref(v___x_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(lean_object* v_context_2134_, lean_object* v_d_2135_){
_start:
{
lean_object* v_received_2138_; 
if (lean_obj_tag(v_d_2135_) == 9)
{
lean_object* v_value_2152_; lean_object* v___x_2153_; 
v_value_2152_ = lean_ctor_get(v_d_2135_, 0);
lean_inc(v_value_2152_);
lean_dec_ref_known(v_d_2135_, 2);
v___x_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2153_, 0, v_value_2152_);
return v___x_2153_;
}
else
{
if (lean_obj_tag(v_d_2135_) == 9)
{
lean_object* v_value_2154_; lean_object* v_description_2155_; lean_object* v___x_2156_; uint8_t v___x_2157_; 
v_value_2154_ = lean_ctor_get(v_d_2135_, 0);
v_description_2155_ = lean_ctor_get(v_d_2135_, 1);
v___x_2156_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2157_ = lean_string_dec_eq(v_description_2155_, v___x_2156_);
if (v___x_2157_ == 0)
{
goto v___jp_2150_;
}
else
{
uint32_t v___x_2158_; uint64_t v___x_2159_; lean_object* v___x_2160_; uint32_t v___x_2161_; lean_object* v___x_2162_; 
lean_inc_n(v_value_2154_, 2);
lean_dec_ref_known(v_d_2135_, 2);
v___x_2158_ = 206;
v___x_2159_ = 0ULL;
v___x_2160_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2160_, 0, v_value_2154_);
lean_ctor_set(v___x_2160_, 1, v___x_2156_);
v___x_2161_ = lasm_js_value_handle(v_value_2154_);
lean_dec(v_value_2154_);
v___x_2162_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2158_, v___x_2159_, v___x_2160_, v___x_2161_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; uint8_t v___x_2164_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc(v_a_2163_);
lean_dec_ref_known(v___x_2162_, 1);
v___x_2164_ = lean_string_validate_utf8(v_a_2163_);
if (v___x_2164_ == 0)
{
lean_object* v___x_2165_; lean_object* v___x_2166_; 
lean_dec(v_a_2163_);
v___x_2165_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_2166_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2165_);
v_received_2138_ = v___x_2166_;
goto v___jp_2137_;
}
else
{
lean_object* v___x_2167_; 
v___x_2167_ = lean_string_from_utf8_unchecked(v_a_2163_);
v_received_2138_ = v___x_2167_;
goto v___jp_2137_;
}
}
else
{
lean_object* v___x_2168_; 
lean_dec_ref_known(v___x_2162_, 1);
v___x_2168_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_2138_ = v___x_2168_;
goto v___jp_2137_;
}
}
}
else
{
goto v___jp_2150_;
}
}
v___jp_2137_:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2139_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2140_ = lean_string_append(v___x_2139_, v_context_2134_);
v___x_2141_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_2142_ = lean_string_append(v___x_2140_, v___x_2141_);
v___x_2143_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStream___closed__1));
v___x_2144_ = lean_string_append(v___x_2142_, v___x_2143_);
v___x_2145_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_2146_ = lean_string_append(v___x_2144_, v___x_2145_);
v___x_2147_ = lean_string_append(v___x_2146_, v_received_2138_);
lean_dec_ref(v_received_2138_);
v___x_2148_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2147_);
v___x_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
return v___x_2149_;
}
v___jp_2150_:
{
lean_object* v___x_2151_; 
v___x_2151_ = l_Lasm_JS_Data_describe(v_d_2135_);
v_received_2138_ = v___x_2151_;
goto v___jp_2137_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3___boxed(lean_object* v_context_2169_, lean_object* v_d_2170_, lean_object* v_a_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v_context_2169_, v_d_2170_);
lean_dec_ref(v_context_2169_);
return v_res_2172_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_2174_; uint64_t v___x_2175_; 
v___x_2174_ = 0;
v___x_2175_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(lean_object* v_b_2176_, lean_object* v_args_2177_, uint8_t v_await_2178_){
_start:
{
uint64_t v___y_2181_; uint64_t v___y_2182_; uint64_t v___x_2217_; uint64_t v___y_2219_; 
v___x_2217_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_2178_ == 0)
{
uint64_t v___x_2224_; 
v___x_2224_ = 0ULL;
v___y_2219_ = v___x_2224_;
goto v___jp_2218_;
}
else
{
uint64_t v___x_2225_; 
v___x_2225_ = 2ULL;
v___y_2219_ = v___x_2225_;
goto v___jp_2218_;
}
v___jp_2180_:
{
uint64_t v_flags_2183_; uint32_t v___x_2184_; lean_object* v___x_2185_; uint32_t v___x_2186_; lean_object* v___x_2187_; 
v_flags_2183_ = lean_uint64_lor(v___y_2181_, v___y_2182_);
v___x_2184_ = 214;
v___x_2185_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2176_, v_args_2177_);
v___x_2186_ = 0;
v___x_2187_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2184_, v_flags_2183_, v___x_2185_, v___x_2186_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v_a_2188_; lean_object* v___x_2189_; 
v_a_2188_ = lean_ctor_get(v___x_2187_, 0);
lean_inc(v_a_2188_);
lean_dec_ref_known(v___x_2187_, 1);
v___x_2189_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2188_);
lean_dec(v_a_2188_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v_a_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v_a_2190_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_a_2190_);
lean_dec_ref_known(v___x_2189_, 1);
v___x_2191_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2176_);
v___x_2192_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v___x_2191_, v_a_2190_);
lean_dec_ref(v___x_2191_);
return v___x_2192_;
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
v_a_2193_ = lean_ctor_get(v___x_2189_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2189_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2195_ = v___x_2189_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2189_);
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
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2216_; 
v_a_2201_ = lean_ctor_get(v___x_2187_, 0);
v_isSharedCheck_2216_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2216_ == 0)
{
v___x_2203_ = v___x_2187_;
v_isShared_2204_ = v_isSharedCheck_2216_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2187_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2216_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2214_; 
v___x_2205_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2206_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2176_);
v___x_2207_ = lean_string_append(v___x_2205_, v___x_2206_);
lean_dec_ref(v___x_2206_);
v___x_2208_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_2209_ = lean_string_append(v___x_2207_, v___x_2208_);
v___x_2210_ = lean_io_error_to_string(v_a_2201_);
v___x_2211_ = lean_string_append(v___x_2209_, v___x_2210_);
lean_dec_ref(v___x_2210_);
v___x_2212_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v___x_2212_);
v___x_2214_ = v___x_2203_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v___x_2212_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
}
}
v___jp_2218_:
{
uint8_t v_construct_2220_; uint64_t v___x_2221_; 
v_construct_2220_ = lean_ctor_get_uint8(v_b_2176_, sizeof(void*)*4);
v___x_2221_ = lean_uint64_lor(v___x_2217_, v___y_2219_);
if (v_construct_2220_ == 0)
{
uint64_t v___x_2222_; 
v___x_2222_ = 0ULL;
v___y_2181_ = v___x_2221_;
v___y_2182_ = v___x_2222_;
goto v___jp_2180_;
}
else
{
uint64_t v___x_2223_; 
v___x_2223_ = 4ULL;
v___y_2181_ = v___x_2221_;
v___y_2182_ = v___x_2223_;
goto v___jp_2180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___boxed(lean_object* v_b_2226_, lean_object* v_args_2227_, lean_object* v_await_2228_, lean_object* v_a_2229_){
_start:
{
uint8_t v_await_boxed_2230_; lean_object* v_res_2231_; 
v_await_boxed_2230_ = lean_unbox(v_await_2228_);
v_res_2231_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v_b_2226_, v_args_2227_, v_await_boxed_2230_);
lean_dec_ref(v_b_2226_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(lean_object* v_x_2232_){
_start:
{
if (lean_obj_tag(v_x_2232_) == 0)
{
lean_object* v___x_2233_; 
v___x_2233_ = lean_box(0);
return v___x_2233_;
}
else
{
lean_object* v_val_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v_val_2234_ = lean_ctor_get(v_x_2232_, 0);
v___x_2235_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
lean_inc(v_val_2234_);
v___x_2236_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2236_, 0, v_val_2234_);
lean_ctor_set(v___x_2236_, 1, v___x_2235_);
return v___x_2236_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1___boxed(lean_object* v_x_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(v_x_2237_);
lean_dec(v_x_2237_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object* v_x_2239_){
_start:
{
if (lean_obj_tag(v_x_2239_) == 0)
{
lean_object* v___x_2240_; 
v___x_2240_ = lean_box(0);
return v___x_2240_;
}
else
{
lean_object* v_val_2241_; lean_object* v___x_2242_; double v___x_2243_; 
v_val_2241_ = lean_ctor_get(v_x_2239_, 0);
v___x_2242_ = lean_alloc_ctor(3, 0, 8);
v___x_2243_ = lean_unbox_float(v_val_2241_);
lean_ctor_set_float(v___x_2242_, 0, v___x_2243_);
return v___x_2242_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0___boxed(lean_object* v_x_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_x_2244_);
lean_dec(v_x_2244_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(lean_object* v_x_2246_){
_start:
{
if (lean_obj_tag(v_x_2246_) == 0)
{
lean_object* v___x_2247_; 
v___x_2247_ = lean_box(0);
return v___x_2247_;
}
else
{
lean_object* v_val_2248_; lean_object* v_highWaterMark_2249_; lean_object* v_size_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2267_; 
v_val_2248_ = lean_ctor_get(v_x_2246_, 0);
lean_inc(v_val_2248_);
lean_dec_ref_known(v_x_2246_, 1);
v_highWaterMark_2249_ = lean_ctor_get(v_val_2248_, 0);
v_size_2250_ = lean_ctor_get(v_val_2248_, 1);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_val_2248_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2252_ = v_val_2248_;
v_isShared_2253_ = v_isSharedCheck_2267_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_size_2250_);
lean_inc(v_highWaterMark_2249_);
lean_dec(v_val_2248_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2267_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2257_; 
v___x_2254_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_2255_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_highWaterMark_2249_);
lean_dec(v_highWaterMark_2249_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set(v___x_2252_, 1, v___x_2255_);
lean_ctor_set(v___x_2252_, 0, v___x_2254_);
v___x_2257_ = v___x_2252_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2254_);
lean_ctor_set(v_reuseFailAlloc_2266_, 1, v___x_2255_);
v___x_2257_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2258_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_2259_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(v_size_2250_);
lean_dec(v_size_2250_);
v___x_2260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2258_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
v___x_2261_ = lean_unsigned_to_nat(2u);
v___x_2262_ = lean_mk_empty_array_with_capacity(v___x_2261_);
v___x_2263_ = lean_array_push(v___x_2262_, v___x_2257_);
v___x_2264_ = lean_array_push(v___x_2263_, v___x_2260_);
v___x_2265_ = l_Lasm_JS_Web_Support_fields(v___x_2264_);
lean_dec_ref(v___x_2264_);
return v___x_2265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new(lean_object* v_underlyingSource_2277_, lean_object* v_strategy_2278_){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; lean_object* v___x_2288_; 
v___x_2280_ = lean_unsigned_to_nat(2u);
v___x_2281_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_new___closed__3));
v___x_2282_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_2278_);
v___x_2283_ = lean_mk_empty_array_with_capacity(v___x_2280_);
v___x_2284_ = lean_array_push(v___x_2283_, v_underlyingSource_2277_);
v___x_2285_ = lean_array_push(v___x_2284_, v___x_2282_);
v___x_2286_ = l_Lasm_JS_Web_Support_args(v___x_2285_);
v___x_2287_ = 0;
v___x_2288_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v___x_2281_, v___x_2286_, v___x_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new___boxed(lean_object* v_underlyingSource_2289_, lean_object* v_strategy_2290_, lean_object* v_a_2291_){
_start:
{
lean_object* v_res_2292_; 
v_res_2292_ = l_Lasm_JS_Web_ReadableStream_new(v_underlyingSource_2289_, v_strategy_2290_);
return v_res_2292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked(lean_object* v_self_2294_){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2296_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_2297_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2294_, v___x_2296_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked___boxed(lean_object* v_self_2298_, lean_object* v_a_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lasm_JS_Web_ReadableStream_locked(v_self_2298_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from(lean_object* v_asyncIterable_2309_){
_start:
{
uint8_t v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2311_ = 0;
v___x_2312_ = lean_unsigned_to_nat(1u);
v___x_2313_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_from___closed__2));
v___x_2314_ = lean_mk_empty_array_with_capacity(v___x_2312_);
v___x_2315_ = lean_array_push(v___x_2314_, v_asyncIterable_2309_);
v___x_2316_ = l_Lasm_JS_Web_Support_args(v___x_2315_);
v___x_2317_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2313_, v___x_2316_, v___x_2311_);
if (lean_obj_tag(v___x_2317_) == 0)
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2325_; 
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2325_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2320_ = v___x_2317_;
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2317_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2325_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2323_; 
if (v_isShared_2321_ == 0)
{
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2318_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
}
else
{
lean_object* v_a_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2333_; 
v_a_2326_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2328_ = v___x_2317_;
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_a_2326_);
lean_dec(v___x_2317_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2326_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from___boxed(lean_object* v_asyncIterable_2334_, lean_object* v_a_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_Lasm_JS_Web_ReadableStream_from(v_asyncIterable_2334_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(lean_object* v___f_2337_, lean_object* v_bytes_2338_){
_start:
{
lean_object* v___x_2340_; uint8_t v___x_2341_; lean_object* v_val_2343_; lean_object* v___x_2346_; 
v___x_2340_ = lean_unsigned_to_nat(0u);
v___x_2341_ = 0;
v___x_2346_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2338_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2354_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2349_ = v___x_2346_;
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2346_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2354_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
lean_ctor_set_tag(v___x_2349_, 1);
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
v_val_2343_ = v___x_2352_;
goto v___jp_2342_;
}
}
}
else
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
v_a_2355_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2357_ = v___x_2346_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v___x_2346_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
lean_ctor_set_tag(v___x_2357_, 0);
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_a_2355_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
v_val_2343_ = v___x_2360_;
goto v___jp_2342_;
}
}
}
v___jp_2342_:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2344_, 0, v_val_2343_);
v___x_2345_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2340_, v___x_2341_, v___x_2344_, v___f_2337_);
return v___x_2345_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_2363_, lean_object* v_bytes_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(v___f_2363_, v_bytes_2364_);
lean_dec_ref(v_bytes_2364_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(lean_object* v_x_2367_){
_start:
{
lean_object* v_val_2370_; 
if (lean_obj_tag(v_x_2367_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2380_; 
v_a_2372_ = lean_ctor_get(v_x_2367_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v_x_2367_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2374_ = v_x_2367_;
v_isShared_2375_ = v_isSharedCheck_2380_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v_x_2367_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2380_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2372_);
v___x_2377_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
lean_object* v___x_2378_; 
v___x_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
return v___x_2378_;
}
}
}
else
{
lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2389_; 
v_isSharedCheck_2389_ = !lean_is_exclusive(v_x_2367_);
if (v_isSharedCheck_2389_ == 0)
{
lean_object* v_unused_2390_; 
v_unused_2390_ = lean_ctor_get(v_x_2367_, 0);
lean_dec(v_unused_2390_);
v___x_2382_ = v_x_2367_;
v_isShared_2383_ = v_isSharedCheck_2389_;
goto v_resetjp_2381_;
}
else
{
lean_dec(v_x_2367_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2389_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2384_; lean_object* v_a_2385_; lean_object* v___x_2387_; 
v___x_2384_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_a_2385_);
lean_dec_ref(v___x_2384_);
if (v_isShared_2383_ == 0)
{
lean_ctor_set(v___x_2382_, 0, v_a_2385_);
v___x_2387_ = v___x_2382_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
v_val_2370_ = v___x_2387_;
goto v___jp_2369_;
}
}
}
v___jp_2369_:
{
lean_object* v___x_2371_; 
v___x_2371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2371_, 0, v_val_2370_);
return v___x_2371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(v_x_2391_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(lean_object* v_failurePrefix_2394_, lean_object* v_x_2395_){
_start:
{
if (lean_obj_tag(v_x_2395_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2408_; 
v_a_2397_ = lean_ctor_get(v_x_2395_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v_x_2395_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2399_ = v_x_2395_;
v_isShared_2400_ = v_isSharedCheck_2408_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v_x_2395_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2408_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2405_; 
v___x_2401_ = lean_io_error_to_string(v_a_2397_);
v___x_2402_ = lean_string_append(v_failurePrefix_2394_, v___x_2401_);
lean_dec_ref(v___x_2401_);
v___x_2403_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 0, v___x_2403_);
v___x_2405_ = v___x_2399_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v___x_2403_);
v___x_2405_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2405_);
return v___x_2406_;
}
}
}
else
{
lean_object* v___x_2409_; 
lean_dec_ref(v_failurePrefix_2394_);
v___x_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2409_, 0, v_x_2395_);
return v___x_2409_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed(lean_object* v_failurePrefix_2410_, lean_object* v_x_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(v_failurePrefix_2410_, v_x_2411_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(lean_object* v___f_2414_, lean_object* v_x_2415_){
_start:
{
if (lean_obj_tag(v_x_2415_) == 0)
{
lean_object* v___x_2417_; 
lean_dec_ref(v___f_2414_);
v___x_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2417_, 0, v_x_2415_);
return v___x_2417_;
}
else
{
lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2429_; 
v_isSharedCheck_2429_ = !lean_is_exclusive(v_x_2415_);
if (v_isSharedCheck_2429_ == 0)
{
lean_object* v_unused_2430_; 
v_unused_2430_ = lean_ctor_get(v_x_2415_, 0);
lean_dec(v_unused_2430_);
v___x_2419_ = v_x_2415_;
v_isShared_2420_ = v_isSharedCheck_2429_;
goto v_resetjp_2418_;
}
else
{
lean_dec(v_x_2415_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2429_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2421_; uint8_t v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2425_; 
v___x_2421_ = lean_unsigned_to_nat(0u);
v___x_2422_ = 0;
v___x_2423_ = lean_io_promise_new();
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 0, v___x_2423_);
v___x_2425_ = v___x_2419_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2425_);
v___x_2427_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2421_, v___x_2422_, v___x_2426_, v___f_2414_);
return v___x_2427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed(lean_object* v___f_2431_, lean_object* v_x_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(v___f_2431_, v_x_2432_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(lean_object* v___f_2435_, lean_object* v_a_2436_, uint32_t v_op_2437_, uint64_t v_flags_2438_, lean_object* v_payload_2439_, lean_object* v_x_2440_){
_start:
{
if (lean_obj_tag(v_x_2440_) == 0)
{
lean_object* v___x_2442_; 
lean_dec_ref(v___f_2435_);
v___x_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2442_, 0, v_x_2440_);
return v___x_2442_;
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2463_; 
v_a_2443_ = lean_ctor_get(v_x_2440_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v_x_2440_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2445_ = v_x_2440_;
v_isShared_2446_ = v_isSharedCheck_2463_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v_x_2440_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2463_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
uint32_t v___x_2447_; lean_object* v___x_2448_; uint8_t v___x_2449_; lean_object* v_val_2451_; lean_object* v___x_2454_; 
v___x_2447_ = 0;
v___x_2448_ = lean_unsigned_to_nat(0u);
v___x_2449_ = 0;
v___x_2454_ = lasm_js_call_into(v_a_2436_, v_op_2437_, v___x_2447_, v_flags_2438_, v_a_2443_, v_payload_2439_);
lean_dec(v_a_2443_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_object* v_a_2455_; lean_object* v___x_2457_; 
v_a_2455_ = lean_ctor_get(v___x_2454_, 0);
lean_inc(v_a_2455_);
lean_dec_ref_known(v___x_2454_, 1);
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 0, v_a_2455_);
v___x_2457_ = v___x_2445_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2455_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
v_val_2451_ = v___x_2457_;
goto v___jp_2450_;
}
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; 
v_a_2459_ = lean_ctor_get(v___x_2454_, 0);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2454_, 1);
if (v_isShared_2446_ == 0)
{
lean_ctor_set_tag(v___x_2445_, 0);
lean_ctor_set(v___x_2445_, 0, v_a_2459_);
v___x_2461_ = v___x_2445_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v_a_2459_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
v_val_2451_ = v___x_2461_;
goto v___jp_2450_;
}
}
v___jp_2450_:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2452_, 0, v_val_2451_);
v___x_2453_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2448_, v___x_2449_, v___x_2452_, v___f_2435_);
return v___x_2453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed(lean_object* v___f_2464_, lean_object* v_a_2465_, lean_object* v_op_2466_, lean_object* v_flags_2467_, lean_object* v_payload_2468_, lean_object* v_x_2469_, lean_object* v___y_2470_){
_start:
{
uint32_t v_op_boxed_2471_; uint64_t v_flags_boxed_2472_; lean_object* v_res_2473_; 
v_op_boxed_2471_ = lean_unbox_uint32(v_op_2466_);
lean_dec(v_op_2466_);
v_flags_boxed_2472_ = lean_unbox_uint64(v_flags_2467_);
lean_dec_ref(v_flags_2467_);
v_res_2473_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(v___f_2464_, v_a_2465_, v_op_boxed_2471_, v_flags_boxed_2472_, v_payload_2468_, v_x_2469_);
lean_dec(v_payload_2468_);
lean_dec(v_a_2465_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(lean_object* v___x_2474_, uint8_t v___x_2475_, lean_object* v___f_2476_, lean_object* v_a_2477_, uint32_t v_op_2478_, uint64_t v_flags_2479_, lean_object* v_payload_2480_, lean_object* v_x_2481_){
_start:
{
lean_object* v_val_2484_; 
if (lean_obj_tag(v_x_2481_) == 0)
{
lean_object* v___x_2487_; 
lean_dec_ref(v___f_2476_);
lean_dec(v___x_2474_);
v___x_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2487_, 0, v_x_2481_);
return v___x_2487_;
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2502_; 
v_a_2488_ = lean_ctor_get(v_x_2481_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v_x_2481_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2490_ = v_x_2481_;
v_isShared_2491_ = v_isSharedCheck_2502_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v_x_2481_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2502_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
uint32_t v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = 0;
v___x_2493_ = lasm_js_call_into(v_a_2477_, v_op_2478_, v___x_2492_, v_flags_2479_, v_a_2488_, v_payload_2480_);
lean_dec(v_a_2488_);
if (lean_obj_tag(v___x_2493_) == 0)
{
lean_object* v_a_2494_; lean_object* v___x_2496_; 
v_a_2494_ = lean_ctor_get(v___x_2493_, 0);
lean_inc(v_a_2494_);
lean_dec_ref_known(v___x_2493_, 1);
if (v_isShared_2491_ == 0)
{
lean_ctor_set(v___x_2490_, 0, v_a_2494_);
v___x_2496_ = v___x_2490_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2494_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
v_val_2484_ = v___x_2496_;
goto v___jp_2483_;
}
}
else
{
lean_object* v_a_2498_; lean_object* v___x_2500_; 
v_a_2498_ = lean_ctor_get(v___x_2493_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v___x_2493_, 1);
if (v_isShared_2491_ == 0)
{
lean_ctor_set_tag(v___x_2490_, 0);
lean_ctor_set(v___x_2490_, 0, v_a_2498_);
v___x_2500_ = v___x_2490_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
v_val_2484_ = v___x_2500_;
goto v___jp_2483_;
}
}
}
}
v___jp_2483_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2485_, 0, v_val_2484_);
v___x_2486_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2474_, v___x_2475_, v___x_2485_, v___f_2476_);
return v___x_2486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed(lean_object* v___x_2503_, lean_object* v___x_2504_, lean_object* v___f_2505_, lean_object* v_a_2506_, lean_object* v_op_2507_, lean_object* v_flags_2508_, lean_object* v_payload_2509_, lean_object* v_x_2510_, lean_object* v___y_2511_){
_start:
{
uint8_t v___x_952__boxed_2512_; uint32_t v_op_boxed_2513_; uint64_t v_flags_boxed_2514_; lean_object* v_res_2515_; 
v___x_952__boxed_2512_ = lean_unbox(v___x_2504_);
v_op_boxed_2513_ = lean_unbox_uint32(v_op_2507_);
lean_dec(v_op_2507_);
v_flags_boxed_2514_ = lean_unbox_uint64(v_flags_2508_);
lean_dec_ref(v_flags_2508_);
v_res_2515_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(v___x_2503_, v___x_952__boxed_2512_, v___f_2505_, v_a_2506_, v_op_boxed_2513_, v_flags_boxed_2514_, v_payload_2509_, v_x_2510_);
lean_dec(v_payload_2509_);
lean_dec(v_a_2506_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(lean_object* v_a_2516_, lean_object* v_x_2517_){
_start:
{
if (lean_obj_tag(v_x_2517_) == 0)
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2527_; 
v_a_2519_ = lean_ctor_get(v_x_2517_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v_x_2517_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2521_ = v_x_2517_;
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v_x_2517_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2527_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2519_);
v___x_2524_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v___x_2525_; 
v___x_2525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2524_);
return v___x_2525_;
}
}
}
else
{
lean_object* v___x_2528_; 
lean_dec_ref_known(v_x_2517_, 1);
v___x_2528_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2516_);
return v___x_2528_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v_a_2529_, lean_object* v_x_2530_, lean_object* v___y_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(v_a_2529_, v_x_2530_);
lean_dec(v_a_2529_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(lean_object* v_failurePrefix_2533_, uint32_t v_op_2534_, uint64_t v_flags_2535_, lean_object* v_payload_2536_, lean_object* v___f_2537_, lean_object* v___f_2538_, lean_object* v___f_2539_, lean_object* v_x_2540_){
_start:
{
if (lean_obj_tag(v_x_2540_) == 0)
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2550_; 
lean_dec_ref(v___f_2539_);
lean_dec_ref(v___f_2538_);
lean_dec_ref(v___f_2537_);
lean_dec(v_payload_2536_);
v_a_2542_ = lean_ctor_get(v_x_2540_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v_x_2540_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2544_ = v_x_2540_;
v_isShared_2545_ = v_isSharedCheck_2550_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v_x_2540_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2550_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
lean_object* v___x_2548_; 
v___x_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2547_);
return v___x_2548_;
}
}
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2597_; 
v_a_2551_ = lean_ctor_get(v_x_2540_, 0);
v_isSharedCheck_2597_ = !lean_is_exclusive(v_x_2540_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2553_ = v_x_2540_;
v_isShared_2554_ = v_isSharedCheck_2597_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v_x_2540_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2597_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; uint8_t v___x_2557_; 
v___x_2555_ = lean_string_utf8_byte_size(v_failurePrefix_2533_);
v___x_2556_ = lean_unsigned_to_nat(0u);
v___x_2557_ = lean_nat_dec_eq(v___x_2555_, v___x_2556_);
if (v___x_2557_ == 0)
{
lean_object* v___f_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___f_2562_; lean_object* v_val_2564_; lean_object* v___x_2569_; 
lean_dec_ref(v___f_2539_);
lean_inc(v_a_2551_);
v___f_2558_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2558_, 0, v_a_2551_);
v___x_2559_ = lean_box(v___x_2557_);
v___x_2560_ = lean_box_uint32(v_op_2534_);
v___x_2561_ = lean_box_uint64(v_flags_2535_);
lean_inc(v_payload_2536_);
v___f_2562_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2562_, 0, v___x_2556_);
lean_closure_set(v___f_2562_, 1, v___x_2559_);
lean_closure_set(v___f_2562_, 2, v___f_2558_);
lean_closure_set(v___f_2562_, 3, v_a_2551_);
lean_closure_set(v___f_2562_, 4, v___x_2560_);
lean_closure_set(v___f_2562_, 5, v___x_2561_);
lean_closure_set(v___f_2562_, 6, v_payload_2536_);
v___x_2569_ = l_Lasm_JS_Wire_encodeIO(v_payload_2536_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v_a_2570_; lean_object* v___x_2572_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v___x_2569_, 1);
if (v_isShared_2554_ == 0)
{
lean_ctor_set(v___x_2553_, 0, v_a_2570_);
v___x_2572_ = v___x_2553_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
v_val_2564_ = v___x_2572_;
goto v___jp_2563_;
}
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; 
v_a_2574_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___x_2569_, 1);
if (v_isShared_2554_ == 0)
{
lean_ctor_set_tag(v___x_2553_, 0);
lean_ctor_set(v___x_2553_, 0, v_a_2574_);
v___x_2576_ = v___x_2553_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2574_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
v_val_2564_ = v___x_2576_;
goto v___jp_2563_;
}
}
v___jp_2563_:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2565_, 0, v_val_2564_);
v___x_2566_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2556_, v___x_2557_, v___x_2565_, v___f_2562_);
v___x_2567_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2556_, v___x_2557_, v___x_2566_, v___f_2537_);
v___x_2568_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2556_, v___x_2557_, v___x_2567_, v___f_2538_);
return v___x_2568_;
}
}
else
{
lean_object* v___f_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___f_2581_; uint8_t v___x_2582_; lean_object* v_val_2584_; lean_object* v___x_2588_; 
lean_dec_ref(v___f_2538_);
lean_dec_ref(v___f_2537_);
lean_inc(v_a_2551_);
v___f_2578_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2578_, 0, v_a_2551_);
v___x_2579_ = lean_box_uint32(v_op_2534_);
v___x_2580_ = lean_box_uint64(v_flags_2535_);
lean_inc(v_payload_2536_);
v___f_2581_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2581_, 0, v___f_2578_);
lean_closure_set(v___f_2581_, 1, v_a_2551_);
lean_closure_set(v___f_2581_, 2, v___x_2579_);
lean_closure_set(v___f_2581_, 3, v___x_2580_);
lean_closure_set(v___f_2581_, 4, v_payload_2536_);
v___x_2582_ = 0;
v___x_2588_ = l_Lasm_JS_Wire_encodeIO(v_payload_2536_);
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2591_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2588_, 1);
if (v_isShared_2554_ == 0)
{
lean_ctor_set(v___x_2553_, 0, v_a_2589_);
v___x_2591_ = v___x_2553_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_a_2589_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
v_val_2584_ = v___x_2591_;
goto v___jp_2583_;
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; 
v_a_2593_ = lean_ctor_get(v___x_2588_, 0);
lean_inc(v_a_2593_);
lean_dec_ref_known(v___x_2588_, 1);
if (v_isShared_2554_ == 0)
{
lean_ctor_set_tag(v___x_2553_, 0);
lean_ctor_set(v___x_2553_, 0, v_a_2593_);
v___x_2595_ = v___x_2553_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v_a_2593_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
v_val_2584_ = v___x_2595_;
goto v___jp_2583_;
}
}
v___jp_2583_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2585_, 0, v_val_2584_);
v___x_2586_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2556_, v___x_2582_, v___x_2585_, v___f_2581_);
v___x_2587_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2556_, v___x_2582_, v___x_2586_, v___f_2539_);
return v___x_2587_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v_failurePrefix_2598_, lean_object* v_op_2599_, lean_object* v_flags_2600_, lean_object* v_payload_2601_, lean_object* v___f_2602_, lean_object* v___f_2603_, lean_object* v___f_2604_, lean_object* v_x_2605_, lean_object* v___y_2606_){
_start:
{
uint32_t v_op_boxed_2607_; uint64_t v_flags_boxed_2608_; lean_object* v_res_2609_; 
v_op_boxed_2607_ = lean_unbox_uint32(v_op_2599_);
lean_dec(v_op_2599_);
v_flags_boxed_2608_ = lean_unbox_uint64(v_flags_2600_);
lean_dec_ref(v_flags_2600_);
v_res_2609_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(v_failurePrefix_2598_, v_op_boxed_2607_, v_flags_boxed_2608_, v_payload_2601_, v___f_2602_, v___f_2603_, v___f_2604_, v_x_2605_);
lean_dec_ref(v_failurePrefix_2598_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(lean_object* v___f_2610_, lean_object* v_x_2611_){
_start:
{
if (lean_obj_tag(v_x_2611_) == 0)
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2621_; 
lean_dec_ref(v___f_2610_);
v_a_2613_ = lean_ctor_get(v_x_2611_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v_x_2611_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2615_ = v_x_2611_;
v_isShared_2616_ = v_isSharedCheck_2621_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v_x_2611_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2621_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2618_; 
if (v_isShared_2616_ == 0)
{
v___x_2618_ = v___x_2615_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v_a_2613_);
v___x_2618_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
lean_object* v___x_2619_; 
v___x_2619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
return v___x_2619_;
}
}
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2623_; 
v_a_2622_ = lean_ctor_get(v_x_2611_, 0);
lean_inc(v_a_2622_);
lean_dec_ref_known(v_x_2611_, 1);
v___x_2623_ = lean_apply_2(v___f_2610_, v_a_2622_, lean_box(0));
return v___x_2623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_2624_, lean_object* v_x_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(v___f_2624_, v_x_2625_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t v_op_2633_, uint64_t v_flags_2634_, lean_object* v_payload_2635_, lean_object* v_failurePrefix_2636_){
_start:
{
lean_object* v___f_2638_; lean_object* v___f_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___f_2642_; lean_object* v___f_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; lean_object* v_val_2647_; lean_object* v___x_2650_; 
v___f_2638_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_2636_);
v___f_2639_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2639_, 0, v_failurePrefix_2636_);
v___x_2640_ = lean_box_uint32(v_op_2633_);
v___x_2641_ = lean_box_uint64(v_flags_2634_);
v___f_2642_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2642_, 0, v_failurePrefix_2636_);
lean_closure_set(v___f_2642_, 1, v___x_2640_);
lean_closure_set(v___f_2642_, 2, v___x_2641_);
lean_closure_set(v___f_2642_, 3, v_payload_2635_);
lean_closure_set(v___f_2642_, 4, v___f_2639_);
lean_closure_set(v___f_2642_, 5, v___f_2638_);
lean_closure_set(v___f_2642_, 6, v___f_2638_);
v___f_2643_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2643_, 0, v___f_2642_);
v___x_2644_ = lean_unsigned_to_nat(0u);
v___x_2645_ = 0;
v___x_2650_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2650_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2650_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
lean_ctor_set_tag(v___x_2653_, 1);
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
v_val_2647_ = v___x_2656_;
goto v___jp_2646_;
}
}
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
v_a_2659_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2650_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2650_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
lean_ctor_set_tag(v___x_2661_, 0);
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
v_val_2647_ = v___x_2664_;
goto v___jp_2646_;
}
}
}
v___jp_2646_:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2648_, 0, v_val_2647_);
v___x_2649_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2644_, v___x_2645_, v___x_2648_, v___f_2643_);
return v___x_2649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___boxed(lean_object* v_op_2667_, lean_object* v_flags_2668_, lean_object* v_payload_2669_, lean_object* v_failurePrefix_2670_, lean_object* v_a_2671_){
_start:
{
uint32_t v_op_boxed_2672_; uint64_t v_flags_boxed_2673_; lean_object* v_res_2674_; 
v_op_boxed_2672_ = lean_unbox_uint32(v_op_2667_);
lean_dec(v_op_2667_);
v_flags_boxed_2673_ = lean_unbox_uint64(v_flags_2668_);
lean_dec_ref(v_flags_2668_);
v_res_2674_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_boxed_2672_, v_flags_boxed_2673_, v_payload_2669_, v_failurePrefix_2670_);
return v_res_2674_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2675_; uint8_t v___x_2676_; uint64_t v___x_2677_; 
v___x_2675_ = 8ULL;
v___x_2676_ = 0;
v___x_2677_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v___x_2676_, v___x_2675_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object* v_o_2678_, lean_object* v_name_2679_, lean_object* v_args_2680_){
_start:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; uint32_t v___x_2685_; uint64_t v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2682_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2683_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2683_, 0, v_o_2678_);
lean_ctor_set(v___x_2683_, 1, v___x_2682_);
v___x_2684_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2684_, 0, v_name_2679_);
v___x_2685_ = 205;
v___x_2686_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0);
v___x_2687_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2687_, 0, v_args_2680_);
v___x_2688_ = lean_unsigned_to_nat(3u);
v___x_2689_ = lean_mk_empty_array_with_capacity(v___x_2688_);
v___x_2690_ = lean_array_push(v___x_2689_, v___x_2683_);
v___x_2691_ = lean_array_push(v___x_2690_, v___x_2684_);
v___x_2692_ = lean_array_push(v___x_2691_, v___x_2687_);
v___x_2693_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2692_);
v___x_2694_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_2685_, v___x_2686_, v___x_2693_, v___x_2682_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___boxed(lean_object* v_o_2695_, lean_object* v_name_2696_, lean_object* v_args_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_o_2695_, v_name_2696_, v_args_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel(lean_object* v_self_2700_, lean_object* v_reason_2701_){
_start:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2703_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_2704_ = lean_unsigned_to_nat(1u);
v___x_2705_ = lean_mk_empty_array_with_capacity(v___x_2704_);
v___x_2706_ = lean_array_push(v___x_2705_, v_reason_2701_);
v___x_2707_ = l_Lasm_JS_Web_Support_args(v___x_2706_);
v___x_2708_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2700_, v___x_2703_, v___x_2707_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel___boxed(lean_object* v_self_2709_, lean_object* v_reason_2710_, lean_object* v_a_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Lasm_JS_Web_ReadableStream_cancel(v_self_2709_, v_reason_2710_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(lean_object* v_context_2713_, uint32_t v_op_2714_, uint64_t v_flags_2715_, lean_object* v_payload_2716_, lean_object* v_failurePrefix_2717_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_2714_, v_flags_2715_, v_payload_2716_, v_failurePrefix_2717_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___boxed(lean_object* v_context_2720_, lean_object* v_op_2721_, lean_object* v_flags_2722_, lean_object* v_payload_2723_, lean_object* v_failurePrefix_2724_, lean_object* v_a_2725_){
_start:
{
uint32_t v_op_boxed_2726_; uint64_t v_flags_boxed_2727_; lean_object* v_res_2728_; 
v_op_boxed_2726_ = lean_unbox_uint32(v_op_2721_);
lean_dec(v_op_2721_);
v_flags_boxed_2727_ = lean_unbox_uint64(v_flags_2722_);
lean_dec_ref(v_flags_2722_);
v_res_2728_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(v_context_2720_, v_op_boxed_2726_, v_flags_boxed_2727_, v_payload_2723_, v_failurePrefix_2724_);
lean_dec_ref(v_context_2720_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(lean_object* v_x_2729_){
_start:
{
if (lean_obj_tag(v_x_2729_) == 0)
{
lean_object* v___x_2730_; 
v___x_2730_ = lean_box(0);
return v___x_2730_;
}
else
{
lean_object* v___x_2731_; 
v___x_2731_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1));
return v___x_2731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0___boxed(lean_object* v_x_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_x_2732_);
lean_dec(v_x_2732_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(lean_object* v_x_2734_){
_start:
{
if (lean_obj_tag(v_x_2734_) == 0)
{
lean_object* v___x_2735_; 
v___x_2735_ = lean_box(0);
return v___x_2735_;
}
else
{
lean_object* v_val_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
v_val_2736_ = lean_ctor_get(v_x_2734_, 0);
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0));
v___x_2738_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_val_2736_);
v___x_2739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2737_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v___x_2740_ = lean_unsigned_to_nat(1u);
v___x_2741_ = lean_mk_empty_array_with_capacity(v___x_2740_);
v___x_2742_ = lean_array_push(v___x_2741_, v___x_2739_);
v___x_2743_ = l_Lasm_JS_Web_Support_fields(v___x_2742_);
lean_dec_ref(v___x_2742_);
return v___x_2743_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0___boxed(lean_object* v_x_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_x_2744_);
lean_dec(v_x_2744_);
return v_res_2745_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_2746_; uint64_t v___x_2747_; 
v___x_2746_ = 1;
v___x_2747_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2746_);
return v___x_2747_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t v_await_2748_, uint64_t v_extra_2749_){
_start:
{
uint64_t v___x_2750_; uint64_t v___y_2752_; 
v___x_2750_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0);
if (v_await_2748_ == 0)
{
uint64_t v___x_2755_; 
v___x_2755_ = 0ULL;
v___y_2752_ = v___x_2755_;
goto v___jp_2751_;
}
else
{
uint64_t v___x_2756_; 
v___x_2756_ = 2ULL;
v___y_2752_ = v___x_2756_;
goto v___jp_2751_;
}
v___jp_2751_:
{
uint64_t v___x_2753_; uint64_t v___x_2754_; 
v___x_2753_ = lean_uint64_lor(v___x_2750_, v___y_2752_);
v___x_2754_ = lean_uint64_lor(v___x_2753_, v_extra_2749_);
return v___x_2754_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___boxed(lean_object* v_await_2757_, lean_object* v_extra_2758_){
_start:
{
uint8_t v_await_boxed_2759_; uint64_t v_extra_boxed_2760_; uint64_t v_res_2761_; lean_object* v_r_2762_; 
v_await_boxed_2759_ = lean_unbox(v_await_2757_);
v_extra_boxed_2760_ = lean_unbox_uint64(v_extra_2758_);
lean_dec_ref(v_extra_2758_);
v_res_2761_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v_await_boxed_2759_, v_extra_boxed_2760_);
v_r_2762_ = lean_box_uint64(v_res_2761_);
return v_r_2762_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2763_; uint8_t v___x_2764_; uint64_t v___x_2765_; 
v___x_2763_ = 8ULL;
v___x_2764_ = 0;
v___x_2765_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_2764_, v___x_2763_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object* v_o_2767_, lean_object* v_name_2768_, lean_object* v_args_2769_){
_start:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; uint64_t v___x_2774_; lean_object* v___x_2775_; 
v___x_2771_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2772_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2772_, 0, v_o_2767_);
lean_ctor_set(v___x_2772_, 1, v___x_2771_);
lean_inc_ref(v_name_2768_);
v___x_2773_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2773_, 0, v_name_2768_);
v___x_2774_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0);
v___x_2775_ = l_Lasm_JS_Value_invokeRaw(v___x_2772_, v___x_2773_, v_args_2769_, v___x_2774_);
if (lean_obj_tag(v___x_2775_) == 0)
{
lean_object* v_a_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v_a_2776_ = lean_ctor_get(v___x_2775_, 0);
lean_inc(v_a_2776_);
lean_dec_ref_known(v___x_2775_, 1);
v___x_2777_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_2778_ = lean_string_append(v___x_2777_, v_name_2768_);
lean_dec_ref(v_name_2768_);
v___x_2779_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2778_, v_a_2776_);
lean_dec(v_a_2776_);
lean_dec_ref(v___x_2778_);
return v___x_2779_;
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec_ref(v_name_2768_);
v_a_2780_ = lean_ctor_get(v___x_2775_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2775_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2775_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___boxed(lean_object* v_o_2788_, lean_object* v_name_2789_, lean_object* v_args_2790_, lean_object* v_a_2791_){
_start:
{
lean_object* v_res_2792_; 
v_res_2792_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2788_, v_name_2789_, v_args_2790_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader(lean_object* v_self_2794_, lean_object* v_options_2795_){
_start:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2797_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_getReader___closed__0));
v___x_2798_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_options_2795_);
v___x_2799_ = lean_unsigned_to_nat(1u);
v___x_2800_ = lean_mk_empty_array_with_capacity(v___x_2799_);
v___x_2801_ = lean_array_push(v___x_2800_, v___x_2798_);
v___x_2802_ = l_Lasm_JS_Web_Support_args(v___x_2801_);
v___x_2803_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2794_, v___x_2797_, v___x_2802_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader___boxed(lean_object* v_self_2804_, lean_object* v_options_2805_, lean_object* v_a_2806_){
_start:
{
lean_object* v_res_2807_; 
v_res_2807_ = l_Lasm_JS_Web_ReadableStream_getReader(v_self_2804_, v_options_2805_);
lean_dec(v_options_2805_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(lean_object* v_x_2808_){
_start:
{
if (lean_obj_tag(v_x_2808_) == 0)
{
lean_object* v___x_2809_; 
v___x_2809_ = lean_box(0);
return v___x_2809_;
}
else
{
lean_object* v_val_2810_; lean_object* v_preventClose_2811_; lean_object* v_preventAbort_2812_; lean_object* v_preventCancel_2813_; lean_object* v_signal_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; 
v_val_2810_ = lean_ctor_get(v_x_2808_, 0);
v_preventClose_2811_ = lean_ctor_get(v_val_2810_, 0);
v_preventAbort_2812_ = lean_ctor_get(v_val_2810_, 1);
v_preventCancel_2813_ = lean_ctor_get(v_val_2810_, 2);
v_signal_2814_ = lean_ctor_get(v_val_2810_, 3);
v___x_2815_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0));
v___x_2816_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventClose_2811_);
v___x_2817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2815_);
lean_ctor_set(v___x_2817_, 1, v___x_2816_);
v___x_2818_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1));
v___x_2819_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventAbort_2812_);
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2818_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
v___x_2821_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2));
v___x_2822_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventCancel_2813_);
v___x_2823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
v___x_2824_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_2825_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2814_);
v___x_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2824_);
lean_ctor_set(v___x_2826_, 1, v___x_2825_);
v___x_2827_ = lean_unsigned_to_nat(4u);
v___x_2828_ = lean_mk_empty_array_with_capacity(v___x_2827_);
v___x_2829_ = lean_array_push(v___x_2828_, v___x_2817_);
v___x_2830_ = lean_array_push(v___x_2829_, v___x_2820_);
v___x_2831_ = lean_array_push(v___x_2830_, v___x_2823_);
v___x_2832_ = lean_array_push(v___x_2831_, v___x_2826_);
v___x_2833_ = l_Lasm_JS_Web_Support_fields(v___x_2832_);
lean_dec_ref(v___x_2832_);
return v___x_2833_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0___boxed(lean_object* v_x_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_x_2834_);
lean_dec(v_x_2834_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough(lean_object* v_self_2837_, lean_object* v_transform_2838_, lean_object* v_options_2839_){
_start:
{
lean_object* v_readable_2841_; lean_object* v_writable_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2882_; 
v_readable_2841_ = lean_ctor_get(v_transform_2838_, 0);
v_writable_2842_ = lean_ctor_get(v_transform_2838_, 1);
v_isSharedCheck_2882_ = !lean_is_exclusive(v_transform_2838_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2844_ = v_transform_2838_;
v_isShared_2845_ = v_isSharedCheck_2882_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_writable_2842_);
lean_inc(v_readable_2841_);
lean_dec(v_transform_2838_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2882_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v___x_2846_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeThrough___closed__0));
v___x_2847_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_2848_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (v_isShared_2845_ == 0)
{
lean_ctor_set_tag(v___x_2844_, 9);
lean_ctor_set(v___x_2844_, 1, v___x_2848_);
v___x_2850_ = v___x_2844_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_readable_2841_);
lean_ctor_set(v_reuseFailAlloc_2881_, 1, v___x_2848_);
v___x_2850_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2847_);
lean_ctor_set(v___x_2851_, 1, v___x_2850_);
v___x_2852_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_2853_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2853_, 0, v_writable_2842_);
lean_ctor_set(v___x_2853_, 1, v___x_2848_);
v___x_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2852_);
lean_ctor_set(v___x_2854_, 1, v___x_2853_);
v___x_2855_ = lean_unsigned_to_nat(2u);
v___x_2856_ = lean_mk_empty_array_with_capacity(v___x_2855_);
lean_inc_ref(v___x_2856_);
v___x_2857_ = lean_array_push(v___x_2856_, v___x_2851_);
v___x_2858_ = lean_array_push(v___x_2857_, v___x_2854_);
v___x_2859_ = l_Lasm_JS_Web_Support_fields(v___x_2858_);
lean_dec_ref(v___x_2858_);
v___x_2860_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2839_);
v___x_2861_ = lean_array_push(v___x_2856_, v___x_2859_);
v___x_2862_ = lean_array_push(v___x_2861_, v___x_2860_);
v___x_2863_ = l_Lasm_JS_Web_Support_args(v___x_2862_);
v___x_2864_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2837_, v___x_2846_, v___x_2863_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
v_a_2865_ = lean_ctor_get(v___x_2864_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2864_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2867_ = v___x_2864_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2864_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
v_a_2873_ = lean_ctor_get(v___x_2864_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2864_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2864_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2864_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough___boxed(lean_object* v_self_2883_, lean_object* v_transform_2884_, lean_object* v_options_2885_, lean_object* v_a_2886_){
_start:
{
lean_object* v_res_2887_; 
v_res_2887_ = l_Lasm_JS_Web_ReadableStream_pipeThrough(v_self_2883_, v_transform_2884_, v_options_2885_);
lean_dec(v_options_2885_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo(lean_object* v_self_2889_, lean_object* v_destination_2890_, lean_object* v_options_2891_){
_start:
{
lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2893_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeTo___closed__0));
v___x_2894_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2895_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2895_, 0, v_destination_2890_);
lean_ctor_set(v___x_2895_, 1, v___x_2894_);
v___x_2896_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2891_);
v___x_2897_ = lean_unsigned_to_nat(2u);
v___x_2898_ = lean_mk_empty_array_with_capacity(v___x_2897_);
v___x_2899_ = lean_array_push(v___x_2898_, v___x_2895_);
v___x_2900_ = lean_array_push(v___x_2899_, v___x_2896_);
v___x_2901_ = l_Lasm_JS_Web_Support_args(v___x_2900_);
v___x_2902_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2889_, v___x_2893_, v___x_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo___boxed(lean_object* v_self_2903_, lean_object* v_destination_2904_, lean_object* v_options_2905_, lean_object* v_a_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lasm_JS_Web_ReadableStream_pipeTo(v_self_2903_, v_destination_2904_, v_options_2905_);
lean_dec(v_options_2905_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2910_, size_t v_i_2911_, lean_object* v_bs_2912_){
_start:
{
uint8_t v___x_2913_; 
v___x_2913_ = lean_usize_dec_lt(v_i_2911_, v_sz_2910_);
if (v___x_2913_ == 0)
{
lean_object* v___x_2914_; 
v___x_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2914_, 0, v_bs_2912_);
return v___x_2914_;
}
else
{
lean_object* v_v_2915_; 
v_v_2915_ = lean_array_uget_borrowed(v_bs_2912_, v_i_2911_);
if (lean_obj_tag(v_v_2915_) == 9)
{
lean_object* v_value_2916_; lean_object* v___x_2917_; lean_object* v_bs_x27_2918_; size_t v___x_2919_; size_t v___x_2920_; lean_object* v___x_2921_; 
v_value_2916_ = lean_ctor_get(v_v_2915_, 0);
lean_inc(v_value_2916_);
v___x_2917_ = lean_unsigned_to_nat(0u);
v_bs_x27_2918_ = lean_array_uset(v_bs_2912_, v_i_2911_, v___x_2917_);
v___x_2919_ = ((size_t)1ULL);
v___x_2920_ = lean_usize_add(v_i_2911_, v___x_2919_);
v___x_2921_ = lean_array_uset(v_bs_x27_2918_, v_i_2911_, v_value_2916_);
v_i_2911_ = v___x_2920_;
v_bs_2912_ = v___x_2921_;
goto _start;
}
else
{
lean_object* v___x_2923_; 
lean_dec_ref(v_bs_2912_);
v___x_2923_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2923_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2924_, lean_object* v_i_2925_, lean_object* v_bs_2926_){
_start:
{
size_t v_sz_boxed_2927_; size_t v_i_boxed_2928_; lean_object* v_res_2929_; 
v_sz_boxed_2927_ = lean_unbox_usize(v_sz_2924_);
lean_dec(v_sz_2924_);
v_i_boxed_2928_ = lean_unbox_usize(v_i_2925_);
lean_dec(v_i_2925_);
v_res_2929_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2927_, v_i_boxed_2928_, v_bs_2926_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(lean_object* v_context_2934_, lean_object* v_d_2935_){
_start:
{
lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2944_; lean_object* v_received_2945_; lean_object* v___y_2964_; lean_object* v_a_2967_; 
if (lean_obj_tag(v_d_2935_) == 7)
{
lean_object* v_items_2991_; size_t v_sz_2992_; size_t v___x_2993_; lean_object* v___x_2994_; 
v_items_2991_ = lean_ctor_get(v_d_2935_, 0);
v_sz_2992_ = lean_array_size(v_items_2991_);
v___x_2993_ = ((size_t)0ULL);
lean_inc_ref(v_items_2991_);
v___x_2994_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_2992_, v___x_2993_, v_items_2991_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; uint8_t v___x_2999_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v___x_2994_, 1);
v___x_2996_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__3));
v___x_2997_ = lean_string_utf8_byte_size(v_a_2995_);
v___x_2998_ = lean_unsigned_to_nat(0u);
v___x_2999_ = lean_nat_dec_eq(v___x_2997_, v___x_2998_);
if (v___x_2999_ == 0)
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3000_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3001_ = lean_string_append(v___x_3000_, v_a_2995_);
lean_dec(v_a_2995_);
v___x_3002_ = lean_string_append(v___x_2996_, v___x_3001_);
lean_dec_ref(v___x_3001_);
v_a_2967_ = v___x_3002_;
goto v___jp_2966_;
}
else
{
lean_dec(v_a_2995_);
v_a_2967_ = v___x_2996_;
goto v___jp_2966_;
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3010_; 
lean_dec_ref_known(v_d_2935_, 1);
v_a_3003_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3010_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3010_ == 0)
{
v___x_3005_ = v___x_2994_;
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_2994_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3010_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
lean_object* v___x_3008_; 
if (v_isShared_3006_ == 0)
{
lean_ctor_set_tag(v___x_3005_, 0);
v___x_3008_ = v___x_3005_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_a_3003_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
}
else
{
lean_object* v___x_3011_; 
v___x_3011_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v_a_2967_ = v___x_3011_;
goto v___jp_2966_;
}
v___jp_2937_:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2940_ = lean_string_append(v___y_2938_, v___y_2939_);
lean_dec_ref(v___y_2939_);
v___x_2941_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2940_);
v___x_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2941_);
return v___x_2942_;
}
v___jp_2943_:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; uint8_t v___x_2957_; 
v___x_2946_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2947_ = lean_string_append(v___x_2946_, v_context_2934_);
v___x_2948_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_2949_ = lean_string_append(v___x_2947_, v___x_2948_);
v___x_2950_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__0));
v___x_2951_ = lean_string_append(v___x_2949_, v___x_2950_);
v___x_2952_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_2953_ = lean_string_append(v___x_2951_, v___x_2952_);
v___x_2954_ = lean_string_append(v___x_2953_, v_received_2945_);
lean_dec_ref(v_received_2945_);
v___x_2955_ = lean_string_utf8_byte_size(v___y_2944_);
v___x_2956_ = lean_unsigned_to_nat(0u);
v___x_2957_ = lean_nat_dec_eq(v___x_2955_, v___x_2956_);
if (v___x_2957_ == 0)
{
lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2958_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_2959_ = lean_string_append(v___x_2958_, v___y_2944_);
lean_dec_ref(v___y_2944_);
v___x_2960_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_2961_ = lean_string_append(v___x_2959_, v___x_2960_);
v___y_2938_ = v___x_2954_;
v___y_2939_ = v___x_2961_;
goto v___jp_2937_;
}
else
{
lean_object* v___x_2962_; 
lean_dec_ref(v___y_2944_);
v___x_2962_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_2938_ = v___x_2954_;
v___y_2939_ = v___x_2962_;
goto v___jp_2937_;
}
}
v___jp_2963_:
{
lean_object* v___x_2965_; 
v___x_2965_ = l_Lasm_JS_Data_describe(v_d_2935_);
v___y_2944_ = v___y_2964_;
v_received_2945_ = v___x_2965_;
goto v___jp_2943_;
}
v___jp_2966_:
{
if (lean_obj_tag(v_d_2935_) == 9)
{
lean_object* v_value_2968_; lean_object* v_description_2969_; lean_object* v___x_2970_; uint8_t v___x_2971_; 
v_value_2968_ = lean_ctor_get(v_d_2935_, 0);
v_description_2969_ = lean_ctor_get(v_d_2935_, 1);
v___x_2970_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2971_ = lean_string_dec_eq(v_description_2969_, v___x_2970_);
if (v___x_2971_ == 0)
{
v___y_2964_ = v_a_2967_;
goto v___jp_2963_;
}
else
{
lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2988_; 
lean_inc(v_value_2968_);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_d_2935_);
if (v_isSharedCheck_2988_ == 0)
{
lean_object* v_unused_2989_; lean_object* v_unused_2990_; 
v_unused_2989_ = lean_ctor_get(v_d_2935_, 1);
lean_dec(v_unused_2989_);
v_unused_2990_ = lean_ctor_get(v_d_2935_, 0);
lean_dec(v_unused_2990_);
v___x_2973_ = v_d_2935_;
v_isShared_2974_ = v_isSharedCheck_2988_;
goto v_resetjp_2972_;
}
else
{
lean_dec(v_d_2935_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2988_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
uint32_t v___x_2975_; uint64_t v___x_2976_; lean_object* v___x_2978_; 
v___x_2975_ = 206;
v___x_2976_ = 0ULL;
lean_inc(v_value_2968_);
if (v_isShared_2974_ == 0)
{
lean_ctor_set(v___x_2973_, 1, v___x_2970_);
v___x_2978_ = v___x_2973_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_value_2968_);
lean_ctor_set(v_reuseFailAlloc_2987_, 1, v___x_2970_);
v___x_2978_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
uint32_t v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = lasm_js_value_handle(v_value_2968_);
lean_dec(v_value_2968_);
v___x_2980_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2975_, v___x_2976_, v___x_2978_, v___x_2979_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; uint8_t v___x_2982_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_a_2981_);
lean_dec_ref_known(v___x_2980_, 1);
v___x_2982_ = lean_string_validate_utf8(v_a_2981_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_dec(v_a_2981_);
v___x_2983_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_2984_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2983_);
v___y_2944_ = v_a_2967_;
v_received_2945_ = v___x_2984_;
goto v___jp_2943_;
}
else
{
lean_object* v___x_2985_; 
v___x_2985_ = lean_string_from_utf8_unchecked(v_a_2981_);
v___y_2944_ = v_a_2967_;
v_received_2945_ = v___x_2985_;
goto v___jp_2943_;
}
}
else
{
lean_object* v___x_2986_; 
lean_dec_ref_known(v___x_2980_, 1);
v___x_2986_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v___y_2944_ = v_a_2967_;
v_received_2945_ = v___x_2986_;
goto v___jp_2943_;
}
}
}
}
}
else
{
v___y_2964_ = v_a_2967_;
goto v___jp_2963_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3012_, lean_object* v_d_3013_, lean_object* v_a_3014_){
_start:
{
lean_object* v_res_3015_; 
v_res_3015_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3012_, v_d_3013_);
lean_dec_ref(v_context_3012_);
return v_res_3015_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(lean_object* v_context_3016_, lean_object* v_bytes_3017_){
_start:
{
lean_object* v___x_3019_; 
v___x_3019_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3017_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3021_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_a_3020_);
lean_dec_ref_known(v___x_3019_, 1);
v___x_3021_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3016_, v_a_3020_);
return v___x_3021_;
}
else
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3029_; 
v_a_3022_ = lean_ctor_get(v___x_3019_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3024_ = v___x_3019_;
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3019_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3027_; 
if (v_isShared_3025_ == 0)
{
v___x_3027_ = v___x_3024_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3022_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1___boxed(lean_object* v_context_3030_, lean_object* v_bytes_3031_, lean_object* v_a_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v_context_3030_, v_bytes_3031_);
lean_dec_ref(v_bytes_3031_);
lean_dec_ref(v_context_3030_);
return v_res_3033_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(uint8_t v_await_3034_, uint64_t v_extra_3035_){
_start:
{
uint64_t v___x_3036_; uint64_t v___y_3038_; 
v___x_3036_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3034_ == 0)
{
uint64_t v___x_3041_; 
v___x_3041_ = 0ULL;
v___y_3038_ = v___x_3041_;
goto v___jp_3037_;
}
else
{
uint64_t v___x_3042_; 
v___x_3042_ = 2ULL;
v___y_3038_ = v___x_3042_;
goto v___jp_3037_;
}
v___jp_3037_:
{
uint64_t v___x_3039_; uint64_t v___x_3040_; 
v___x_3039_ = lean_uint64_lor(v___x_3036_, v___y_3038_);
v___x_3040_ = lean_uint64_lor(v___x_3039_, v_extra_3035_);
return v___x_3040_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0___boxed(lean_object* v_await_3043_, lean_object* v_extra_3044_){
_start:
{
uint8_t v_await_boxed_3045_; uint64_t v_extra_boxed_3046_; uint64_t v_res_3047_; lean_object* v_r_3048_; 
v_await_boxed_3045_ = lean_unbox(v_await_3043_);
v_extra_boxed_3046_ = lean_unbox_uint64(v_extra_3044_);
lean_dec_ref(v_extra_3044_);
v_res_3047_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v_await_boxed_3045_, v_extra_boxed_3046_);
v_r_3048_ = lean_box_uint64(v_res_3047_);
return v_r_3048_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3049_; uint8_t v___x_3050_; uint64_t v___x_3051_; 
v___x_3049_ = 8ULL;
v___x_3050_ = 0;
v___x_3051_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v___x_3050_, v___x_3049_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(lean_object* v_o_3052_, lean_object* v_name_3053_, lean_object* v_args_3054_){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; uint64_t v___x_3059_; lean_object* v___x_3060_; 
v___x_3056_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3057_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3057_, 0, v_o_3052_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
lean_inc_ref(v_name_3053_);
v___x_3058_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3058_, 0, v_name_3053_);
v___x_3059_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0);
v___x_3060_ = l_Lasm_JS_Value_invokeRaw(v___x_3057_, v___x_3058_, v_args_3054_, v___x_3059_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; 
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
lean_inc(v_a_3061_);
lean_dec_ref_known(v___x_3060_, 1);
v___x_3062_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3063_ = lean_string_append(v___x_3062_, v_name_3053_);
lean_dec_ref(v_name_3053_);
v___x_3064_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v___x_3063_, v_a_3061_);
lean_dec(v_a_3061_);
lean_dec_ref(v___x_3063_);
return v___x_3064_;
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_dec_ref(v_name_3053_);
v_a_3065_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_3060_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_3060_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___boxed(lean_object* v_o_3073_, lean_object* v_name_3074_, lean_object* v_args_3075_, lean_object* v_a_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_o_3073_, v_name_3074_, v_args_3075_);
return v_res_3077_;
}
}
static lean_object* _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2(void){
_start:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__1));
v___x_3082_ = l_Lasm_JS_Web_Support_args(v___x_3081_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee(lean_object* v_self_3083_){
_start:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3085_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__0));
v___x_3086_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3087_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_self_3083_, v___x_3085_, v___x_3086_);
return v___x_3087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee___boxed(lean_object* v_self_3088_, lean_object* v_a_3089_){
_start:
{
lean_object* v_res_3090_; 
v_res_3090_ = l_Lasm_JS_Web_ReadableStream_tee(v_self_3088_);
return v_res_3090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(lean_object* v_context_3091_, lean_object* v_d_3092_){
_start:
{
lean_object* v_received_3095_; 
if (lean_obj_tag(v_d_3092_) == 9)
{
lean_object* v_value_3109_; lean_object* v___x_3110_; 
v_value_3109_ = lean_ctor_get(v_d_3092_, 0);
lean_inc(v_value_3109_);
lean_dec_ref_known(v_d_3092_, 2);
v___x_3110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3110_, 0, v_value_3109_);
return v___x_3110_;
}
else
{
if (lean_obj_tag(v_d_3092_) == 9)
{
lean_object* v_value_3111_; lean_object* v_description_3112_; lean_object* v___x_3113_; uint8_t v___x_3114_; 
v_value_3111_ = lean_ctor_get(v_d_3092_, 0);
v_description_3112_ = lean_ctor_get(v_d_3092_, 1);
v___x_3113_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3114_ = lean_string_dec_eq(v_description_3112_, v___x_3113_);
if (v___x_3114_ == 0)
{
goto v___jp_3107_;
}
else
{
uint32_t v___x_3115_; uint64_t v___x_3116_; lean_object* v___x_3117_; uint32_t v___x_3118_; lean_object* v___x_3119_; 
lean_inc_n(v_value_3111_, 2);
lean_dec_ref_known(v_d_3092_, 2);
v___x_3115_ = 206;
v___x_3116_ = 0ULL;
v___x_3117_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3117_, 0, v_value_3111_);
lean_ctor_set(v___x_3117_, 1, v___x_3113_);
v___x_3118_ = lasm_js_value_handle(v_value_3111_);
lean_dec(v_value_3111_);
v___x_3119_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3115_, v___x_3116_, v___x_3117_, v___x_3118_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v_a_3120_; uint8_t v___x_3121_; 
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v___x_3119_, 1);
v___x_3121_ = lean_string_validate_utf8(v_a_3120_);
if (v___x_3121_ == 0)
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
lean_dec(v_a_3120_);
v___x_3122_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_3123_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3122_);
v_received_3095_ = v___x_3123_;
goto v___jp_3094_;
}
else
{
lean_object* v___x_3124_; 
v___x_3124_ = lean_string_from_utf8_unchecked(v_a_3120_);
v_received_3095_ = v___x_3124_;
goto v___jp_3094_;
}
}
else
{
lean_object* v___x_3125_; 
lean_dec_ref_known(v___x_3119_, 1);
v___x_3125_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_3095_ = v___x_3125_;
goto v___jp_3094_;
}
}
}
else
{
goto v___jp_3107_;
}
}
v___jp_3094_:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3096_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3097_ = lean_string_append(v___x_3096_, v_context_3091_);
v___x_3098_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3099_ = lean_string_append(v___x_3097_, v___x_3098_);
v___x_3100_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0));
v___x_3101_ = lean_string_append(v___x_3099_, v___x_3100_);
v___x_3102_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3103_ = lean_string_append(v___x_3101_, v___x_3102_);
v___x_3104_ = lean_string_append(v___x_3103_, v_received_3095_);
lean_dec_ref(v_received_3095_);
v___x_3105_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3104_);
v___x_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3105_);
return v___x_3106_;
}
v___jp_3107_:
{
lean_object* v___x_3108_; 
v___x_3108_ = l_Lasm_JS_Data_describe(v_d_3092_);
v_received_3095_ = v___x_3108_;
goto v___jp_3094_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0___boxed(lean_object* v_context_3126_, lean_object* v_d_3127_, lean_object* v_a_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v_context_3126_, v_d_3127_);
lean_dec_ref(v_context_3126_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(lean_object* v_b_3130_, lean_object* v_args_3131_, uint8_t v_await_3132_){
_start:
{
uint64_t v___y_3135_; uint64_t v___y_3136_; uint64_t v___x_3171_; uint64_t v___y_3173_; 
v___x_3171_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3132_ == 0)
{
uint64_t v___x_3178_; 
v___x_3178_ = 0ULL;
v___y_3173_ = v___x_3178_;
goto v___jp_3172_;
}
else
{
uint64_t v___x_3179_; 
v___x_3179_ = 2ULL;
v___y_3173_ = v___x_3179_;
goto v___jp_3172_;
}
v___jp_3134_:
{
uint64_t v_flags_3137_; uint32_t v___x_3138_; lean_object* v___x_3139_; uint32_t v___x_3140_; lean_object* v___x_3141_; 
v_flags_3137_ = lean_uint64_lor(v___y_3135_, v___y_3136_);
v___x_3138_ = 214;
v___x_3139_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3130_, v_args_3131_);
v___x_3140_ = 0;
v___x_3141_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3138_, v_flags_3137_, v___x_3139_, v___x_3140_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; lean_object* v___x_3143_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3141_, 1);
v___x_3143_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3142_);
lean_dec(v_a_3142_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3143_, 1);
v___x_3145_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3130_);
v___x_3146_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v___x_3145_, v_a_3144_);
lean_dec_ref(v___x_3145_);
return v___x_3146_;
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
v_a_3147_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3143_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3143_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3147_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
else
{
lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3170_; 
v_a_3155_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3157_ = v___x_3141_;
v_isShared_3158_ = v_isSharedCheck_3170_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v___x_3141_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3170_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3168_; 
v___x_3159_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3160_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3130_);
v___x_3161_ = lean_string_append(v___x_3159_, v___x_3160_);
lean_dec_ref(v___x_3160_);
v___x_3162_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3163_ = lean_string_append(v___x_3161_, v___x_3162_);
v___x_3164_ = lean_io_error_to_string(v_a_3155_);
v___x_3165_ = lean_string_append(v___x_3163_, v___x_3164_);
lean_dec_ref(v___x_3164_);
v___x_3166_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3165_);
if (v_isShared_3158_ == 0)
{
lean_ctor_set(v___x_3157_, 0, v___x_3166_);
v___x_3168_ = v___x_3157_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3166_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
v___jp_3172_:
{
uint8_t v_construct_3174_; uint64_t v___x_3175_; 
v_construct_3174_ = lean_ctor_get_uint8(v_b_3130_, sizeof(void*)*4);
v___x_3175_ = lean_uint64_lor(v___x_3171_, v___y_3173_);
if (v_construct_3174_ == 0)
{
uint64_t v___x_3176_; 
v___x_3176_ = 0ULL;
v___y_3135_ = v___x_3175_;
v___y_3136_ = v___x_3176_;
goto v___jp_3134_;
}
else
{
uint64_t v___x_3177_; 
v___x_3177_ = 4ULL;
v___y_3135_ = v___x_3175_;
v___y_3136_ = v___x_3177_;
goto v___jp_3134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0___boxed(lean_object* v_b_3180_, lean_object* v_args_3181_, lean_object* v_await_3182_, lean_object* v_a_3183_){
_start:
{
uint8_t v_await_boxed_3184_; lean_object* v_res_3185_; 
v_await_boxed_3184_ = lean_unbox(v_await_3182_);
v_res_3185_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v_b_3180_, v_args_3181_, v_await_boxed_3184_);
lean_dec_ref(v_b_3180_);
return v_res_3185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new(lean_object* v_stream_3194_){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; uint8_t v___x_3203_; lean_object* v___x_3204_; 
v___x_3196_ = lean_unsigned_to_nat(1u);
v___x_3197_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__2));
v___x_3198_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3199_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3199_, 0, v_stream_3194_);
lean_ctor_set(v___x_3199_, 1, v___x_3198_);
v___x_3200_ = lean_mk_empty_array_with_capacity(v___x_3196_);
v___x_3201_ = lean_array_push(v___x_3200_, v___x_3199_);
v___x_3202_ = l_Lasm_JS_Web_Support_args(v___x_3201_);
v___x_3203_ = 0;
v___x_3204_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v___x_3197_, v___x_3202_, v___x_3203_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___boxed(lean_object* v_stream_3205_, lean_object* v_a_3206_){
_start:
{
lean_object* v_res_3207_; 
v_res_3207_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_new(v_stream_3205_);
return v_res_3207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(lean_object* v___f_3208_, lean_object* v_a_3209_, lean_object* v___x_3210_, lean_object* v_x_3211_){
_start:
{
if (lean_obj_tag(v_x_3211_) == 0)
{
lean_object* v_a_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3221_; 
lean_dec_ref(v___f_3208_);
v_a_3213_ = lean_ctor_get(v_x_3211_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v_x_3211_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3215_ = v_x_3211_;
v_isShared_3216_ = v_isSharedCheck_3221_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_a_3213_);
lean_dec(v_x_3211_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3221_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3218_; 
if (v_isShared_3216_ == 0)
{
v___x_3218_ = v___x_3215_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3213_);
v___x_3218_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
lean_object* v___x_3219_; 
v___x_3219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3218_);
return v___x_3219_;
}
}
}
else
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3241_; 
v_a_3222_ = lean_ctor_get(v_x_3211_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v_x_3211_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3224_ = v_x_3211_;
v_isShared_3225_ = v_isSharedCheck_3241_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v_x_3211_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3241_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3226_; uint8_t v___x_3227_; lean_object* v_val_3229_; lean_object* v___x_3232_; 
v___x_3226_ = lean_unsigned_to_nat(0u);
v___x_3227_ = 0;
v___x_3232_ = lasm_js_await_into(v_a_3209_, v_a_3222_, v___x_3210_);
lean_dec(v_a_3222_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3235_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v___x_3232_, 1);
if (v_isShared_3225_ == 0)
{
lean_ctor_set(v___x_3224_, 0, v_a_3233_);
v___x_3235_ = v___x_3224_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v_a_3233_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
v_val_3229_ = v___x_3235_;
goto v___jp_3228_;
}
}
else
{
lean_object* v_a_3237_; lean_object* v___x_3239_; 
v_a_3237_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3237_);
lean_dec_ref_known(v___x_3232_, 1);
if (v_isShared_3225_ == 0)
{
lean_ctor_set_tag(v___x_3224_, 0);
lean_ctor_set(v___x_3224_, 0, v_a_3237_);
v___x_3239_ = v___x_3224_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3237_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
v_val_3229_ = v___x_3239_;
goto v___jp_3228_;
}
}
v___jp_3228_:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3230_, 0, v_val_3229_);
v___x_3231_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3226_, v___x_3227_, v___x_3230_, v___f_3208_);
return v___x_3231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed(lean_object* v___f_3242_, lean_object* v_a_3243_, lean_object* v___x_3244_, lean_object* v_x_3245_, lean_object* v___y_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(v___f_3242_, v_a_3243_, v___x_3244_, v_x_3245_);
lean_dec(v___x_3244_);
lean_dec(v_a_3243_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(lean_object* v_a_3248_, lean_object* v___f_3249_, lean_object* v_x_3250_){
_start:
{
if (lean_obj_tag(v_x_3250_) == 0)
{
lean_object* v___x_3252_; 
lean_dec_ref(v___f_3249_);
v___x_3252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3252_, 0, v_x_3250_);
return v___x_3252_;
}
else
{
lean_object* v___x_3253_; uint8_t v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
lean_dec_ref_known(v_x_3250_, 1);
v___x_3253_ = lean_unsigned_to_nat(0u);
v___x_3254_ = 0;
v___x_3255_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3248_);
v___x_3256_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3253_, v___x_3254_, v___x_3255_, v___f_3249_);
return v___x_3256_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed(lean_object* v_a_3257_, lean_object* v___f_3258_, lean_object* v_x_3259_, lean_object* v___y_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(v_a_3257_, v___f_3258_, v_x_3259_);
lean_dec(v_a_3257_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(lean_object* v___f_3262_, lean_object* v_v_3263_, lean_object* v_x_3264_){
_start:
{
if (lean_obj_tag(v_x_3264_) == 0)
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3274_; 
lean_dec(v_v_3263_);
lean_dec_ref(v___f_3262_);
v_a_3266_ = lean_ctor_get(v_x_3264_, 0);
v_isSharedCheck_3274_ = !lean_is_exclusive(v_x_3264_);
if (v_isSharedCheck_3274_ == 0)
{
v___x_3268_ = v_x_3264_;
v_isShared_3269_ = v_isSharedCheck_3274_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v_x_3264_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3274_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3273_; 
v_reuseFailAlloc_3273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3273_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3273_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
lean_object* v___x_3272_; 
v___x_3272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3271_);
return v___x_3272_;
}
}
}
else
{
lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3298_; 
v_a_3275_ = lean_ctor_get(v_x_3264_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v_x_3264_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3277_ = v_x_3264_;
v_isShared_3278_ = v_isSharedCheck_3298_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_dec(v_x_3264_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3298_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___f_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___f_3282_; lean_object* v___x_3283_; uint8_t v___x_3284_; lean_object* v_val_3286_; lean_object* v___x_3289_; 
lean_inc(v_a_3275_);
v___f_3279_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3279_, 0, v_a_3275_);
lean_closure_set(v___f_3279_, 1, v___f_3262_);
v___x_3280_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3281_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3281_, 0, v_v_3263_);
lean_ctor_set(v___x_3281_, 1, v___x_3280_);
lean_inc_ref(v___x_3281_);
v___f_3282_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3282_, 0, v___f_3279_);
lean_closure_set(v___f_3282_, 1, v_a_3275_);
lean_closure_set(v___f_3282_, 2, v___x_3281_);
v___x_3283_ = lean_unsigned_to_nat(0u);
v___x_3284_ = 0;
v___x_3289_ = l_Lasm_JS_Wire_encodeIO(v___x_3281_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3292_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3290_);
lean_dec_ref_known(v___x_3289_, 1);
if (v_isShared_3278_ == 0)
{
lean_ctor_set(v___x_3277_, 0, v_a_3290_);
v___x_3292_ = v___x_3277_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3290_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
v_val_3286_ = v___x_3292_;
goto v___jp_3285_;
}
}
else
{
lean_object* v_a_3294_; lean_object* v___x_3296_; 
v_a_3294_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_a_3294_);
lean_dec_ref_known(v___x_3289_, 1);
if (v_isShared_3278_ == 0)
{
lean_ctor_set_tag(v___x_3277_, 0);
lean_ctor_set(v___x_3277_, 0, v_a_3294_);
v___x_3296_ = v___x_3277_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3294_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
v_val_3286_ = v___x_3296_;
goto v___jp_3285_;
}
}
v___jp_3285_:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; 
v___x_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3287_, 0, v_val_3286_);
v___x_3288_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3283_, v___x_3284_, v___x_3287_, v___f_3282_);
return v___x_3288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed(lean_object* v___f_3299_, lean_object* v_v_3300_, lean_object* v_x_3301_, lean_object* v___y_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(v___f_3299_, v_v_3300_, v_x_3301_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(lean_object* v___f_3304_, lean_object* v_x_3305_){
_start:
{
if (lean_obj_tag(v_x_3305_) == 0)
{
lean_object* v_a_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3315_; 
lean_dec_ref(v___f_3304_);
v_a_3307_ = lean_ctor_get(v_x_3305_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v_x_3305_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3309_ = v_x_3305_;
v_isShared_3310_ = v_isSharedCheck_3315_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_a_3307_);
lean_dec(v_x_3305_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3315_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3312_; 
if (v_isShared_3310_ == 0)
{
v___x_3312_ = v___x_3309_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_a_3307_);
v___x_3312_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
lean_object* v___x_3313_; 
v___x_3313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3312_);
return v___x_3313_;
}
}
}
else
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3335_; 
v_a_3316_ = lean_ctor_get(v_x_3305_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v_x_3305_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3318_ = v_x_3305_;
v_isShared_3319_ = v_isSharedCheck_3335_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v_x_3305_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3335_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3320_; uint8_t v___x_3321_; lean_object* v_val_3323_; lean_object* v___x_3326_; 
v___x_3320_ = lean_unsigned_to_nat(0u);
v___x_3321_ = 0;
v___x_3326_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3316_);
lean_dec(v_a_3316_);
if (lean_obj_tag(v___x_3326_) == 0)
{
lean_object* v_a_3327_; lean_object* v___x_3329_; 
v_a_3327_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_a_3327_);
lean_dec_ref_known(v___x_3326_, 1);
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 0, v_a_3327_);
v___x_3329_ = v___x_3318_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3327_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
v_val_3323_ = v___x_3329_;
goto v___jp_3322_;
}
}
else
{
lean_object* v_a_3331_; lean_object* v___x_3333_; 
v_a_3331_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_a_3331_);
lean_dec_ref_known(v___x_3326_, 1);
if (v_isShared_3319_ == 0)
{
lean_ctor_set_tag(v___x_3318_, 0);
lean_ctor_set(v___x_3318_, 0, v_a_3331_);
v___x_3333_ = v___x_3318_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v_a_3331_);
v___x_3333_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
v_val_3323_ = v___x_3333_;
goto v___jp_3322_;
}
}
v___jp_3322_:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3324_, 0, v_val_3323_);
v___x_3325_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3320_, v___x_3321_, v___x_3324_, v___f_3304_);
return v___x_3325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1___boxed(lean_object* v___f_3336_, lean_object* v_x_3337_, lean_object* v___y_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(v___f_3336_, v_x_3337_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object* v_v_3342_){
_start:
{
lean_object* v___f_3344_; lean_object* v___f_3345_; lean_object* v___f_3346_; lean_object* v___x_3347_; uint8_t v___x_3348_; lean_object* v_val_3350_; lean_object* v___x_3353_; 
v___f_3344_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___closed__0));
v___f_3345_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3345_, 0, v___f_3344_);
lean_closure_set(v___f_3345_, 1, v_v_3342_);
v___f_3346_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3346_, 0, v___f_3345_);
v___x_3347_ = lean_unsigned_to_nat(0u);
v___x_3348_ = 0;
v___x_3353_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3361_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___x_3353_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3353_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
lean_ctor_set_tag(v___x_3356_, 1);
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
v_val_3350_ = v___x_3359_;
goto v___jp_3349_;
}
}
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
v_a_3362_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3353_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3353_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
lean_ctor_set_tag(v___x_3364_, 0);
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
v_val_3350_ = v___x_3367_;
goto v___jp_3349_;
}
}
}
v___jp_3349_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v_val_3350_);
v___x_3352_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3347_, v___x_3348_, v___x_3351_, v___f_3346_);
return v___x_3352_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___boxed(lean_object* v_v_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v_res_3372_; 
v_res_3372_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_v_3370_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(lean_object* v_x_3373_){
_start:
{
if (lean_obj_tag(v_x_3373_) == 0)
{
lean_object* v_a_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3383_; 
v_a_3375_ = lean_ctor_get(v_x_3373_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v_x_3373_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3377_ = v_x_3373_;
v_isShared_3378_ = v_isSharedCheck_3383_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_a_3375_);
lean_dec(v_x_3373_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3383_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3380_; 
if (v_isShared_3378_ == 0)
{
v___x_3380_ = v___x_3377_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3375_);
v___x_3380_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
lean_object* v___x_3381_; 
v___x_3381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3380_);
return v___x_3381_;
}
}
}
else
{
lean_object* v_a_3384_; lean_object* v___x_3385_; 
v_a_3384_ = lean_ctor_get(v_x_3373_, 0);
lean_inc(v_a_3384_);
lean_dec_ref_known(v_x_3373_, 1);
v___x_3385_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_3384_);
return v___x_3385_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0___boxed(lean_object* v_x_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(v_x_3386_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(lean_object* v_self_3391_){
_start:
{
lean_object* v___f_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; uint8_t v___x_3396_; lean_object* v_val_3398_; lean_object* v___x_3401_; 
v___f_3393_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_3394_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_3395_ = lean_unsigned_to_nat(0u);
v___x_3396_ = 0;
v___x_3401_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3391_, v___x_3394_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
v_a_3402_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3401_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3401_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
lean_ctor_set_tag(v___x_3404_, 1);
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
v_val_3398_ = v___x_3407_;
goto v___jp_3397_;
}
}
}
else
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
v_a_3410_ = lean_ctor_get(v___x_3401_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3401_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3401_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
lean_ctor_set_tag(v___x_3412_, 0);
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
v_val_3398_ = v___x_3415_;
goto v___jp_3397_;
}
}
}
v___jp_3397_:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3399_, 0, v_val_3398_);
v___x_3400_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3395_, v___x_3396_, v___x_3399_, v___f_3393_);
return v___x_3400_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___boxed(lean_object* v_self_3418_, lean_object* v_a_3419_){
_start:
{
lean_object* v_res_3420_; 
v_res_3420_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(v_self_3418_);
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_3421_, uint32_t v_op_3422_, uint64_t v_flags_3423_, lean_object* v_payload_3424_, lean_object* v___f_3425_, lean_object* v___f_3426_, lean_object* v___f_3427_, lean_object* v_x_3428_){
_start:
{
if (lean_obj_tag(v_x_3428_) == 0)
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3438_; 
lean_dec_ref(v___f_3427_);
lean_dec_ref(v___f_3426_);
lean_dec_ref(v___f_3425_);
lean_dec(v_payload_3424_);
v_a_3430_ = lean_ctor_get(v_x_3428_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v_x_3428_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3432_ = v_x_3428_;
v_isShared_3433_ = v_isSharedCheck_3438_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v_x_3428_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3438_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3435_; 
if (v_isShared_3433_ == 0)
{
v___x_3435_ = v___x_3432_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3430_);
v___x_3435_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
lean_object* v___x_3436_; 
v___x_3436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3435_);
return v___x_3436_;
}
}
}
else
{
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3485_; 
v_a_3439_ = lean_ctor_get(v_x_3428_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v_x_3428_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3441_ = v_x_3428_;
v_isShared_3442_ = v_isSharedCheck_3485_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v_x_3428_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3485_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; uint8_t v___x_3445_; 
v___x_3443_ = lean_string_utf8_byte_size(v_failurePrefix_3421_);
v___x_3444_ = lean_unsigned_to_nat(0u);
v___x_3445_ = lean_nat_dec_eq(v___x_3443_, v___x_3444_);
if (v___x_3445_ == 0)
{
lean_object* v___f_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___f_3450_; lean_object* v_val_3452_; lean_object* v___x_3457_; 
lean_dec_ref(v___f_3427_);
lean_inc(v_a_3439_);
v___f_3446_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3446_, 0, v_a_3439_);
v___x_3447_ = lean_box(v___x_3445_);
v___x_3448_ = lean_box_uint32(v_op_3422_);
v___x_3449_ = lean_box_uint64(v_flags_3423_);
lean_inc(v_payload_3424_);
v___f_3450_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3450_, 0, v___x_3444_);
lean_closure_set(v___f_3450_, 1, v___x_3447_);
lean_closure_set(v___f_3450_, 2, v___f_3446_);
lean_closure_set(v___f_3450_, 3, v_a_3439_);
lean_closure_set(v___f_3450_, 4, v___x_3448_);
lean_closure_set(v___f_3450_, 5, v___x_3449_);
lean_closure_set(v___f_3450_, 6, v_payload_3424_);
v___x_3457_ = l_Lasm_JS_Wire_encodeIO(v_payload_3424_);
if (lean_obj_tag(v___x_3457_) == 0)
{
lean_object* v_a_3458_; lean_object* v___x_3460_; 
v_a_3458_ = lean_ctor_get(v___x_3457_, 0);
lean_inc(v_a_3458_);
lean_dec_ref_known(v___x_3457_, 1);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 0, v_a_3458_);
v___x_3460_ = v___x_3441_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3458_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
v_val_3452_ = v___x_3460_;
goto v___jp_3451_;
}
}
else
{
lean_object* v_a_3462_; lean_object* v___x_3464_; 
v_a_3462_ = lean_ctor_get(v___x_3457_, 0);
lean_inc(v_a_3462_);
lean_dec_ref_known(v___x_3457_, 1);
if (v_isShared_3442_ == 0)
{
lean_ctor_set_tag(v___x_3441_, 0);
lean_ctor_set(v___x_3441_, 0, v_a_3462_);
v___x_3464_ = v___x_3441_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_a_3462_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
v_val_3452_ = v___x_3464_;
goto v___jp_3451_;
}
}
v___jp_3451_:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3453_, 0, v_val_3452_);
v___x_3454_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3444_, v___x_3445_, v___x_3453_, v___f_3450_);
v___x_3455_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3444_, v___x_3445_, v___x_3454_, v___f_3425_);
v___x_3456_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3444_, v___x_3445_, v___x_3455_, v___f_3426_);
return v___x_3456_;
}
}
else
{
lean_object* v___f_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___f_3469_; uint8_t v___x_3470_; lean_object* v_val_3472_; lean_object* v___x_3476_; 
lean_dec_ref(v___f_3426_);
lean_dec_ref(v___f_3425_);
lean_inc(v_a_3439_);
v___f_3466_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3466_, 0, v_a_3439_);
v___x_3467_ = lean_box_uint32(v_op_3422_);
v___x_3468_ = lean_box_uint64(v_flags_3423_);
lean_inc(v_payload_3424_);
v___f_3469_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3469_, 0, v___f_3466_);
lean_closure_set(v___f_3469_, 1, v_a_3439_);
lean_closure_set(v___f_3469_, 2, v___x_3467_);
lean_closure_set(v___f_3469_, 3, v___x_3468_);
lean_closure_set(v___f_3469_, 4, v_payload_3424_);
v___x_3470_ = 0;
v___x_3476_ = l_Lasm_JS_Wire_encodeIO(v_payload_3424_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3479_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
lean_dec_ref_known(v___x_3476_, 1);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 0, v_a_3477_);
v___x_3479_ = v___x_3441_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_a_3477_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
v_val_3472_ = v___x_3479_;
goto v___jp_3471_;
}
}
else
{
lean_object* v_a_3481_; lean_object* v___x_3483_; 
v_a_3481_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v___x_3476_, 1);
if (v_isShared_3442_ == 0)
{
lean_ctor_set_tag(v___x_3441_, 0);
lean_ctor_set(v___x_3441_, 0, v_a_3481_);
v___x_3483_ = v___x_3441_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3481_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
v_val_3472_ = v___x_3483_;
goto v___jp_3471_;
}
}
v___jp_3471_:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3473_, 0, v_val_3472_);
v___x_3474_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3444_, v___x_3470_, v___x_3473_, v___f_3469_);
v___x_3475_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3444_, v___x_3470_, v___x_3474_, v___f_3427_);
return v___x_3475_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_3486_, lean_object* v_op_3487_, lean_object* v_flags_3488_, lean_object* v_payload_3489_, lean_object* v___f_3490_, lean_object* v___f_3491_, lean_object* v___f_3492_, lean_object* v_x_3493_, lean_object* v___y_3494_){
_start:
{
uint32_t v_op_boxed_3495_; uint64_t v_flags_boxed_3496_; lean_object* v_res_3497_; 
v_op_boxed_3495_ = lean_unbox_uint32(v_op_3487_);
lean_dec(v_op_3487_);
v_flags_boxed_3496_ = lean_unbox_uint64(v_flags_3488_);
lean_dec_ref(v_flags_3488_);
v_res_3497_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(v_failurePrefix_3486_, v_op_boxed_3495_, v_flags_boxed_3496_, v_payload_3489_, v___f_3490_, v___f_3491_, v___f_3492_, v_x_3493_);
lean_dec_ref(v_failurePrefix_3486_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(lean_object* v___f_3498_, lean_object* v_x_3499_){
_start:
{
if (lean_obj_tag(v_x_3499_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3509_; 
lean_dec_ref(v___f_3498_);
v_a_3501_ = lean_ctor_get(v_x_3499_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v_x_3499_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3503_ = v_x_3499_;
v_isShared_3504_ = v_isSharedCheck_3509_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v_x_3499_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3509_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3506_; 
if (v_isShared_3504_ == 0)
{
v___x_3506_ = v___x_3503_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3501_);
v___x_3506_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
lean_object* v___x_3507_; 
v___x_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
return v___x_3507_;
}
}
}
else
{
lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3521_; 
v_isSharedCheck_3521_ = !lean_is_exclusive(v_x_3499_);
if (v_isSharedCheck_3521_ == 0)
{
lean_object* v_unused_3522_; 
v_unused_3522_ = lean_ctor_get(v_x_3499_, 0);
lean_dec(v_unused_3522_);
v___x_3511_ = v_x_3499_;
v_isShared_3512_ = v_isSharedCheck_3521_;
goto v_resetjp_3510_;
}
else
{
lean_dec(v_x_3499_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3521_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3513_; uint8_t v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3517_; 
v___x_3513_ = lean_unsigned_to_nat(0u);
v___x_3514_ = 0;
v___x_3515_ = lean_io_promise_new();
if (v_isShared_3512_ == 0)
{
lean_ctor_set(v___x_3511_, 0, v___x_3515_);
v___x_3517_ = v___x_3511_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v___x_3515_);
v___x_3517_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3517_);
v___x_3519_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3513_, v___x_3514_, v___x_3518_, v___f_3498_);
return v___x_3519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed(lean_object* v___f_3523_, lean_object* v_x_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v_res_3526_; 
v_res_3526_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(v___f_3523_, v_x_3524_);
return v_res_3526_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(lean_object* v___f_3527_, lean_object* v_bytes_3528_){
_start:
{
lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v_val_3533_; lean_object* v___x_3536_; 
v___x_3530_ = lean_unsigned_to_nat(0u);
v___x_3531_ = 0;
v___x_3536_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3528_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3544_; 
v_a_3537_ = lean_ctor_get(v___x_3536_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3536_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3539_ = v___x_3536_;
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v___x_3536_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3542_; 
if (v_isShared_3540_ == 0)
{
lean_ctor_set_tag(v___x_3539_, 1);
v___x_3542_ = v___x_3539_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_a_3537_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
v_val_3533_ = v___x_3542_;
goto v___jp_3532_;
}
}
}
else
{
lean_object* v_a_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3552_; 
v_a_3545_ = lean_ctor_get(v___x_3536_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3536_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3547_ = v___x_3536_;
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_a_3545_);
lean_dec(v___x_3536_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3550_; 
if (v_isShared_3548_ == 0)
{
lean_ctor_set_tag(v___x_3547_, 0);
v___x_3550_ = v___x_3547_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v_a_3545_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
v_val_3533_ = v___x_3550_;
goto v___jp_3532_;
}
}
}
v___jp_3532_:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3534_, 0, v_val_3533_);
v___x_3535_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3530_, v___x_3531_, v___x_3534_, v___f_3527_);
return v___x_3535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed(lean_object* v___f_3553_, lean_object* v_bytes_3554_, lean_object* v___y_3555_){
_start:
{
lean_object* v_res_3556_; 
v_res_3556_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(v___f_3553_, v_bytes_3554_);
lean_dec_ref(v_bytes_3554_);
return v_res_3556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_3566_, lean_object* v_key_3567_){
_start:
{
if (lean_obj_tag(v_d_3566_) == 8)
{
lean_object* v___x_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3593_; 
v___x_3570_ = l_Lasm_JS_Data_field(v_d_3566_, v_key_3567_);
v_isSharedCheck_3593_ = !lean_is_exclusive(v_d_3566_);
if (v_isSharedCheck_3593_ == 0)
{
lean_object* v_unused_3594_; 
v_unused_3594_ = lean_ctor_get(v_d_3566_, 0);
lean_dec(v_unused_3594_);
v___x_3572_ = v_d_3566_;
v_isShared_3573_ = v_isSharedCheck_3593_;
goto v_resetjp_3571_;
}
else
{
lean_dec(v_d_3566_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3593_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
switch(lean_obj_tag(v___x_3570_))
{
case 1:
{
lean_del_object(v___x_3572_);
goto v___jp_3568_;
}
case 0:
{
lean_del_object(v___x_3572_);
goto v___jp_3568_;
}
default: 
{
if (lean_obj_tag(v___x_3570_) == 2)
{
uint8_t v_b_3574_; lean_object* v___x_3575_; lean_object* v___x_3577_; 
v_b_3574_ = lean_ctor_get_uint8(v___x_3570_, 0);
lean_dec_ref_known(v___x_3570_, 0);
v___x_3575_ = lean_box(v_b_3574_);
if (v_isShared_3573_ == 0)
{
lean_ctor_set_tag(v___x_3572_, 1);
lean_ctor_set(v___x_3572_, 0, v___x_3575_);
v___x_3577_ = v___x_3572_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v___x_3575_);
v___x_3577_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
lean_object* v___x_3578_; 
v___x_3578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3577_);
return v___x_3578_;
}
}
else
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3591_; 
v___x_3580_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3581_ = lean_string_append(v___x_3580_, v_key_3567_);
v___x_3582_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3583_ = lean_string_append(v___x_3581_, v___x_3582_);
v___x_3584_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__3));
v___x_3585_ = lean_string_append(v___x_3583_, v___x_3584_);
v___x_3586_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3587_ = lean_string_append(v___x_3585_, v___x_3586_);
v___x_3588_ = l_Lasm_JS_Data_describe(v___x_3570_);
v___x_3589_ = lean_string_append(v___x_3587_, v___x_3588_);
lean_dec_ref(v___x_3588_);
if (v_isShared_3573_ == 0)
{
lean_ctor_set_tag(v___x_3572_, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3589_);
v___x_3591_ = v___x_3572_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3589_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
}
}
}
else
{
lean_object* v___x_3595_; 
lean_dec(v_d_3566_);
v___x_3595_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__6));
return v___x_3595_;
}
v___jp_3568_:
{
lean_object* v___x_3569_; 
v___x_3569_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_3569_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_3596_, lean_object* v_key_3597_){
_start:
{
lean_object* v_res_3598_; 
v_res_3598_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3596_, v_key_3597_);
lean_dec_ref(v_key_3597_);
return v_res_3598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_3601_, lean_object* v_key_3602_){
_start:
{
if (lean_obj_tag(v_d_3601_) == 8)
{
lean_object* v___x_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3610_; 
v___x_3603_ = l_Lasm_JS_Data_field(v_d_3601_, v_key_3602_);
v_isSharedCheck_3610_ = !lean_is_exclusive(v_d_3601_);
if (v_isSharedCheck_3610_ == 0)
{
lean_object* v_unused_3611_; 
v_unused_3611_ = lean_ctor_get(v_d_3601_, 0);
lean_dec(v_unused_3611_);
v___x_3605_ = v_d_3601_;
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
else
{
lean_dec(v_d_3601_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3608_; 
if (v_isShared_3606_ == 0)
{
lean_ctor_set_tag(v___x_3605_, 1);
lean_ctor_set(v___x_3605_, 0, v___x_3603_);
v___x_3608_ = v___x_3605_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v___x_3603_);
v___x_3608_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
return v___x_3608_;
}
}
}
else
{
lean_object* v___x_3612_; 
lean_dec(v_d_3601_);
v___x_3612_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3612_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3613_, lean_object* v_key_3614_){
_start:
{
lean_object* v_res_3615_; 
v_res_3615_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3613_, v_key_3614_);
lean_dec_ref(v_key_3614_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(lean_object* v_context_3616_, lean_object* v_d_3617_){
_start:
{
lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3626_; lean_object* v_received_3627_; lean_object* v___y_3646_; lean_object* v_a_3649_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3673_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0));
lean_inc(v_d_3617_);
v___x_3674_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3617_, v___x_3673_);
if (lean_obj_tag(v___x_3674_) == 0)
{
lean_object* v_a_3675_; 
v_a_3675_ = lean_ctor_get(v___x_3674_, 0);
lean_inc(v_a_3675_);
lean_dec_ref_known(v___x_3674_, 1);
v_a_3649_ = v_a_3675_;
goto v___jp_3648_;
}
else
{
lean_object* v_a_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
v_a_3676_ = lean_ctor_get(v___x_3674_, 0);
lean_inc(v_a_3676_);
lean_dec_ref_known(v___x_3674_, 1);
v___x_3677_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1));
lean_inc(v_d_3617_);
v___x_3678_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3617_, v___x_3677_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; 
lean_dec(v_a_3676_);
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
lean_inc(v_a_3679_);
lean_dec_ref_known(v___x_3678_, 1);
v_a_3649_ = v_a_3679_;
goto v___jp_3648_;
}
else
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3688_; 
lean_dec(v_d_3617_);
v_a_3680_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3682_ = v___x_3678_;
v_isShared_3683_ = v_isSharedCheck_3688_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3678_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3688_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3684_; lean_object* v___x_3686_; 
v___x_3684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3684_, 0, v_a_3676_);
lean_ctor_set(v___x_3684_, 1, v_a_3680_);
if (v_isShared_3683_ == 0)
{
lean_ctor_set_tag(v___x_3682_, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3684_);
v___x_3686_ = v___x_3682_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
v___jp_3619_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3622_ = lean_string_append(v___y_3620_, v___y_3621_);
lean_dec_ref(v___y_3621_);
v___x_3623_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3622_);
v___x_3624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
return v___x_3624_;
}
v___jp_3625_:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; uint8_t v___x_3639_; 
v___x_3628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3629_ = lean_string_append(v___x_3628_, v_context_3616_);
v___x_3630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3631_ = lean_string_append(v___x_3629_, v___x_3630_);
v___x_3632_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2));
v___x_3633_ = lean_string_append(v___x_3631_, v___x_3632_);
v___x_3634_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3635_ = lean_string_append(v___x_3633_, v___x_3634_);
v___x_3636_ = lean_string_append(v___x_3635_, v_received_3627_);
lean_dec_ref(v_received_3627_);
v___x_3637_ = lean_string_utf8_byte_size(v___y_3626_);
v___x_3638_ = lean_unsigned_to_nat(0u);
v___x_3639_ = lean_nat_dec_eq(v___x_3637_, v___x_3638_);
if (v___x_3639_ == 0)
{
lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_3641_ = lean_string_append(v___x_3640_, v___y_3626_);
lean_dec_ref(v___y_3626_);
v___x_3642_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_3643_ = lean_string_append(v___x_3641_, v___x_3642_);
v___y_3620_ = v___x_3636_;
v___y_3621_ = v___x_3643_;
goto v___jp_3619_;
}
else
{
lean_object* v___x_3644_; 
lean_dec_ref(v___y_3626_);
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_3620_ = v___x_3636_;
v___y_3621_ = v___x_3644_;
goto v___jp_3619_;
}
}
v___jp_3645_:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Lasm_JS_Data_describe(v_d_3617_);
v___y_3626_ = v___y_3646_;
v_received_3627_ = v___x_3647_;
goto v___jp_3625_;
}
v___jp_3648_:
{
if (lean_obj_tag(v_d_3617_) == 9)
{
lean_object* v_value_3650_; lean_object* v_description_3651_; lean_object* v___x_3652_; uint8_t v___x_3653_; 
v_value_3650_ = lean_ctor_get(v_d_3617_, 0);
v_description_3651_ = lean_ctor_get(v_d_3617_, 1);
v___x_3652_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3653_ = lean_string_dec_eq(v_description_3651_, v___x_3652_);
if (v___x_3653_ == 0)
{
v___y_3646_ = v_a_3649_;
goto v___jp_3645_;
}
else
{
lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3670_; 
lean_inc(v_value_3650_);
v_isSharedCheck_3670_ = !lean_is_exclusive(v_d_3617_);
if (v_isSharedCheck_3670_ == 0)
{
lean_object* v_unused_3671_; lean_object* v_unused_3672_; 
v_unused_3671_ = lean_ctor_get(v_d_3617_, 1);
lean_dec(v_unused_3671_);
v_unused_3672_ = lean_ctor_get(v_d_3617_, 0);
lean_dec(v_unused_3672_);
v___x_3655_ = v_d_3617_;
v_isShared_3656_ = v_isSharedCheck_3670_;
goto v_resetjp_3654_;
}
else
{
lean_dec(v_d_3617_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3670_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
uint32_t v___x_3657_; uint64_t v___x_3658_; lean_object* v___x_3660_; 
v___x_3657_ = 206;
v___x_3658_ = 0ULL;
lean_inc(v_value_3650_);
if (v_isShared_3656_ == 0)
{
lean_ctor_set(v___x_3655_, 1, v___x_3652_);
v___x_3660_ = v___x_3655_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_value_3650_);
lean_ctor_set(v_reuseFailAlloc_3669_, 1, v___x_3652_);
v___x_3660_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
uint32_t v___x_3661_; lean_object* v___x_3662_; 
v___x_3661_ = lasm_js_value_handle(v_value_3650_);
lean_dec(v_value_3650_);
v___x_3662_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3657_, v___x_3658_, v___x_3660_, v___x_3661_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_a_3663_; uint8_t v___x_3664_; 
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_a_3663_);
lean_dec_ref_known(v___x_3662_, 1);
v___x_3664_ = lean_string_validate_utf8(v_a_3663_);
if (v___x_3664_ == 0)
{
lean_object* v___x_3665_; lean_object* v___x_3666_; 
lean_dec(v_a_3663_);
v___x_3665_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_3666_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3665_);
v___y_3626_ = v_a_3649_;
v_received_3627_ = v___x_3666_;
goto v___jp_3625_;
}
else
{
lean_object* v___x_3667_; 
v___x_3667_ = lean_string_from_utf8_unchecked(v_a_3663_);
v___y_3626_ = v_a_3649_;
v_received_3627_ = v___x_3667_;
goto v___jp_3625_;
}
}
else
{
lean_object* v___x_3668_; 
lean_dec_ref_known(v___x_3662_, 1);
v___x_3668_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v___y_3626_ = v_a_3649_;
v_received_3627_ = v___x_3668_;
goto v___jp_3625_;
}
}
}
}
}
else
{
v___y_3646_ = v_a_3649_;
goto v___jp_3645_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3689_, lean_object* v_d_3690_, lean_object* v_a_3691_){
_start:
{
lean_object* v_res_3692_; 
v_res_3692_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3689_, v_d_3690_);
lean_dec_ref(v_context_3689_);
return v_res_3692_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(lean_object* v_context_3693_, lean_object* v_x_3694_){
_start:
{
lean_object* v_val_3697_; 
if (lean_obj_tag(v_x_3694_) == 0)
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3707_; 
v_a_3699_ = lean_ctor_get(v_x_3694_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v_x_3694_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3701_ = v_x_3694_;
v_isShared_3702_ = v_isSharedCheck_3707_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v_x_3694_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3707_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3704_; 
if (v_isShared_3702_ == 0)
{
v___x_3704_ = v___x_3701_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v_a_3699_);
v___x_3704_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
lean_object* v___x_3705_; 
v___x_3705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3704_);
return v___x_3705_;
}
}
}
else
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3721_; 
v_a_3708_ = lean_ctor_get(v_x_3694_, 0);
v_isSharedCheck_3721_ = !lean_is_exclusive(v_x_3694_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3710_ = v_x_3694_;
v_isShared_3711_ = v_isSharedCheck_3721_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v_x_3694_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3721_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3712_; 
v___x_3712_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3693_, v_a_3708_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3715_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3713_);
lean_dec_ref_known(v___x_3712_, 1);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v_a_3713_);
v___x_3715_ = v___x_3710_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3713_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
v_val_3697_ = v___x_3715_;
goto v___jp_3696_;
}
}
else
{
lean_object* v_a_3717_; lean_object* v___x_3719_; 
v_a_3717_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3717_);
lean_dec_ref_known(v___x_3712_, 1);
if (v_isShared_3711_ == 0)
{
lean_ctor_set_tag(v___x_3710_, 0);
lean_ctor_set(v___x_3710_, 0, v_a_3717_);
v___x_3719_ = v___x_3710_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v_a_3717_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
v_val_3697_ = v___x_3719_;
goto v___jp_3696_;
}
}
}
}
v___jp_3696_:
{
lean_object* v___x_3698_; 
v___x_3698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3698_, 0, v_val_3697_);
return v___x_3698_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed(lean_object* v_context_3722_, lean_object* v_x_3723_, lean_object* v___y_3724_){
_start:
{
lean_object* v_res_3725_; 
v_res_3725_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(v_context_3722_, v_x_3723_);
lean_dec_ref(v_context_3722_);
return v_res_3725_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(lean_object* v___f_3726_, lean_object* v_x_3727_){
_start:
{
if (lean_obj_tag(v_x_3727_) == 0)
{
lean_object* v_a_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3737_; 
lean_dec_ref(v___f_3726_);
v_a_3729_ = lean_ctor_get(v_x_3727_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v_x_3727_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3731_ = v_x_3727_;
v_isShared_3732_ = v_isSharedCheck_3737_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_a_3729_);
lean_dec(v_x_3727_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3737_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v___x_3734_; 
if (v_isShared_3732_ == 0)
{
v___x_3734_ = v___x_3731_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3729_);
v___x_3734_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3735_; 
v___x_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
return v___x_3735_;
}
}
}
else
{
lean_object* v_a_3738_; lean_object* v___x_3739_; 
v_a_3738_ = lean_ctor_get(v_x_3727_, 0);
lean_inc(v_a_3738_);
lean_dec_ref_known(v_x_3727_, 1);
v___x_3739_ = lean_apply_2(v___f_3726_, v_a_3738_, lean_box(0));
return v___x_3739_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3740_, lean_object* v_x_3741_, lean_object* v___y_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(v___f_3740_, v_x_3741_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(lean_object* v_context_3744_, uint32_t v_op_3745_, uint64_t v_flags_3746_, lean_object* v_payload_3747_, lean_object* v_failurePrefix_3748_){
_start:
{
lean_object* v___f_3750_; lean_object* v___f_3751_; lean_object* v___f_3752_; lean_object* v___f_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___f_3756_; lean_object* v___f_3757_; lean_object* v___x_3758_; uint8_t v___x_3759_; lean_object* v_val_3761_; lean_object* v___x_3764_; 
v___f_3750_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3750_, 0, v_context_3744_);
v___f_3751_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3751_, 0, v___f_3750_);
v___f_3752_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3752_, 0, v___f_3751_);
lean_inc_ref(v_failurePrefix_3748_);
v___f_3753_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3753_, 0, v_failurePrefix_3748_);
v___x_3754_ = lean_box_uint32(v_op_3745_);
v___x_3755_ = lean_box_uint64(v_flags_3746_);
lean_inc_ref(v___f_3752_);
v___f_3756_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3756_, 0, v_failurePrefix_3748_);
lean_closure_set(v___f_3756_, 1, v___x_3754_);
lean_closure_set(v___f_3756_, 2, v___x_3755_);
lean_closure_set(v___f_3756_, 3, v_payload_3747_);
lean_closure_set(v___f_3756_, 4, v___f_3753_);
lean_closure_set(v___f_3756_, 5, v___f_3752_);
lean_closure_set(v___f_3756_, 6, v___f_3752_);
v___f_3757_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3757_, 0, v___f_3756_);
v___x_3758_ = lean_unsigned_to_nat(0u);
v___x_3759_ = 0;
v___x_3764_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
v_a_3765_ = lean_ctor_get(v___x_3764_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3764_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3764_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
lean_ctor_set_tag(v___x_3767_, 1);
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_a_3765_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
v_val_3761_ = v___x_3770_;
goto v___jp_3760_;
}
}
}
else
{
lean_object* v_a_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3780_; 
v_a_3773_ = lean_ctor_get(v___x_3764_, 0);
v_isSharedCheck_3780_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3780_ == 0)
{
v___x_3775_ = v___x_3764_;
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_a_3773_);
lean_dec(v___x_3764_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3778_; 
if (v_isShared_3776_ == 0)
{
lean_ctor_set_tag(v___x_3775_, 0);
v___x_3778_ = v___x_3775_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v_a_3773_);
v___x_3778_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
v_val_3761_ = v___x_3778_;
goto v___jp_3760_;
}
}
}
v___jp_3760_:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3762_, 0, v_val_3761_);
v___x_3763_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3758_, v___x_3759_, v___x_3762_, v___f_3757_);
return v___x_3763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___boxed(lean_object* v_context_3781_, lean_object* v_op_3782_, lean_object* v_flags_3783_, lean_object* v_payload_3784_, lean_object* v_failurePrefix_3785_, lean_object* v_a_3786_){
_start:
{
uint32_t v_op_boxed_3787_; uint64_t v_flags_boxed_3788_; lean_object* v_res_3789_; 
v_op_boxed_3787_ = lean_unbox_uint32(v_op_3782_);
lean_dec(v_op_3782_);
v_flags_boxed_3788_ = lean_unbox_uint64(v_flags_3783_);
lean_dec_ref(v_flags_3783_);
v_res_3789_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v_context_3781_, v_op_boxed_3787_, v_flags_boxed_3788_, v_payload_3784_, v_failurePrefix_3785_);
return v_res_3789_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(uint8_t v_await_3790_, uint64_t v_extra_3791_){
_start:
{
uint64_t v___x_3792_; uint64_t v___y_3794_; 
v___x_3792_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3790_ == 0)
{
uint64_t v___x_3797_; 
v___x_3797_ = 0ULL;
v___y_3794_ = v___x_3797_;
goto v___jp_3793_;
}
else
{
uint64_t v___x_3798_; 
v___x_3798_ = 2ULL;
v___y_3794_ = v___x_3798_;
goto v___jp_3793_;
}
v___jp_3793_:
{
uint64_t v___x_3795_; uint64_t v___x_3796_; 
v___x_3795_ = lean_uint64_lor(v___x_3792_, v___y_3794_);
v___x_3796_ = lean_uint64_lor(v___x_3795_, v_extra_3791_);
return v___x_3796_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0___boxed(lean_object* v_await_3799_, lean_object* v_extra_3800_){
_start:
{
uint8_t v_await_boxed_3801_; uint64_t v_extra_boxed_3802_; uint64_t v_res_3803_; lean_object* v_r_3804_; 
v_await_boxed_3801_ = lean_unbox(v_await_3799_);
v_extra_boxed_3802_ = lean_unbox_uint64(v_extra_3800_);
lean_dec_ref(v_extra_3800_);
v_res_3803_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v_await_boxed_3801_, v_extra_boxed_3802_);
v_r_3804_ = lean_box_uint64(v_res_3803_);
return v_r_3804_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3805_; uint8_t v___x_3806_; uint64_t v___x_3807_; 
v___x_3805_ = 8ULL;
v___x_3806_ = 0;
v___x_3807_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v___x_3806_, v___x_3805_);
return v___x_3807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(lean_object* v_o_3808_, lean_object* v_name_3809_, lean_object* v_args_3810_){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; uint32_t v___x_3817_; uint64_t v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3813_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3813_, 0, v_o_3808_);
lean_ctor_set(v___x_3813_, 1, v___x_3812_);
lean_inc_ref(v_name_3809_);
v___x_3814_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3814_, 0, v_name_3809_);
v___x_3815_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3816_ = lean_string_append(v___x_3815_, v_name_3809_);
lean_dec_ref(v_name_3809_);
v___x_3817_ = 205;
v___x_3818_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0);
v___x_3819_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3819_, 0, v_args_3810_);
v___x_3820_ = lean_unsigned_to_nat(3u);
v___x_3821_ = lean_mk_empty_array_with_capacity(v___x_3820_);
v___x_3822_ = lean_array_push(v___x_3821_, v___x_3813_);
v___x_3823_ = lean_array_push(v___x_3822_, v___x_3814_);
v___x_3824_ = lean_array_push(v___x_3823_, v___x_3819_);
v___x_3825_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3825_, 0, v___x_3824_);
v___x_3826_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v___x_3816_, v___x_3817_, v___x_3818_, v___x_3825_, v___x_3812_);
return v___x_3826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___boxed(lean_object* v_o_3827_, lean_object* v_name_3828_, lean_object* v_args_3829_, lean_object* v___y_3830_){
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_o_3827_, v_name_3828_, v_args_3829_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read(lean_object* v_self_3833_){
_start:
{
lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; 
v___x_3835_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_3836_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3837_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_3833_, v___x_3835_, v___x_3836_);
return v___x_3837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read___boxed(lean_object* v_self_3838_, lean_object* v_a_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_read(v_self_3838_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(lean_object* v_self_3842_){
_start:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3844_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_3845_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3846_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3842_, v___x_3844_, v___x_3845_);
return v___x_3846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___boxed(lean_object* v_self_3847_, lean_object* v_a_3848_){
_start:
{
lean_object* v_res_3849_; 
v_res_3849_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(v_self_3847_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(lean_object* v_self_3850_, lean_object* v_reason_3851_){
_start:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; 
v___x_3853_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_3854_ = lean_unsigned_to_nat(1u);
v___x_3855_ = lean_mk_empty_array_with_capacity(v___x_3854_);
v___x_3856_ = lean_array_push(v___x_3855_, v_reason_3851_);
v___x_3857_ = l_Lasm_JS_Web_Support_args(v___x_3856_);
v___x_3858_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3850_, v___x_3853_, v___x_3857_);
return v___x_3858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel___boxed(lean_object* v_self_3859_, lean_object* v_reason_3860_, lean_object* v_a_3861_){
_start:
{
lean_object* v_res_3862_; 
v_res_3862_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(v_self_3859_, v_reason_3860_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(lean_object* v_context_3863_, lean_object* v_d_3864_){
_start:
{
lean_object* v_received_3867_; 
if (lean_obj_tag(v_d_3864_) == 9)
{
lean_object* v_value_3881_; lean_object* v___x_3882_; 
v_value_3881_ = lean_ctor_get(v_d_3864_, 0);
lean_inc(v_value_3881_);
lean_dec_ref_known(v_d_3864_, 2);
v___x_3882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3882_, 0, v_value_3881_);
return v___x_3882_;
}
else
{
if (lean_obj_tag(v_d_3864_) == 9)
{
lean_object* v_value_3883_; lean_object* v_description_3884_; lean_object* v___x_3885_; uint8_t v___x_3886_; 
v_value_3883_ = lean_ctor_get(v_d_3864_, 0);
v_description_3884_ = lean_ctor_get(v_d_3864_, 1);
v___x_3885_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3886_ = lean_string_dec_eq(v_description_3884_, v___x_3885_);
if (v___x_3886_ == 0)
{
goto v___jp_3879_;
}
else
{
uint32_t v___x_3887_; uint64_t v___x_3888_; lean_object* v___x_3889_; uint32_t v___x_3890_; lean_object* v___x_3891_; 
lean_inc_n(v_value_3883_, 2);
lean_dec_ref_known(v_d_3864_, 2);
v___x_3887_ = 206;
v___x_3888_ = 0ULL;
v___x_3889_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3889_, 0, v_value_3883_);
lean_ctor_set(v___x_3889_, 1, v___x_3885_);
v___x_3890_ = lasm_js_value_handle(v_value_3883_);
lean_dec(v_value_3883_);
v___x_3891_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3887_, v___x_3888_, v___x_3889_, v___x_3890_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; uint8_t v___x_3893_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
lean_inc(v_a_3892_);
lean_dec_ref_known(v___x_3891_, 1);
v___x_3893_ = lean_string_validate_utf8(v_a_3892_);
if (v___x_3893_ == 0)
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
lean_dec(v_a_3892_);
v___x_3894_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_3895_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3894_);
v_received_3867_ = v___x_3895_;
goto v___jp_3866_;
}
else
{
lean_object* v___x_3896_; 
v___x_3896_ = lean_string_from_utf8_unchecked(v_a_3892_);
v_received_3867_ = v___x_3896_;
goto v___jp_3866_;
}
}
else
{
lean_object* v___x_3897_; 
lean_dec_ref_known(v___x_3891_, 1);
v___x_3897_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_3867_ = v___x_3897_;
goto v___jp_3866_;
}
}
}
else
{
goto v___jp_3879_;
}
}
v___jp_3866_:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v___x_3868_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3869_ = lean_string_append(v___x_3868_, v_context_3863_);
v___x_3870_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3871_ = lean_string_append(v___x_3869_, v___x_3870_);
v___x_3872_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0));
v___x_3873_ = lean_string_append(v___x_3871_, v___x_3872_);
v___x_3874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3875_ = lean_string_append(v___x_3873_, v___x_3874_);
v___x_3876_ = lean_string_append(v___x_3875_, v_received_3867_);
lean_dec_ref(v_received_3867_);
v___x_3877_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3876_);
v___x_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
return v___x_3878_;
}
v___jp_3879_:
{
lean_object* v___x_3880_; 
v___x_3880_ = l_Lasm_JS_Data_describe(v_d_3864_);
v_received_3867_ = v___x_3880_;
goto v___jp_3866_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0___boxed(lean_object* v_context_3898_, lean_object* v_d_3899_, lean_object* v_a_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v_context_3898_, v_d_3899_);
lean_dec_ref(v_context_3898_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(lean_object* v_b_3902_, lean_object* v_args_3903_, uint8_t v_await_3904_){
_start:
{
uint64_t v___y_3907_; uint64_t v___y_3908_; uint64_t v___x_3943_; uint64_t v___y_3945_; 
v___x_3943_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3904_ == 0)
{
uint64_t v___x_3950_; 
v___x_3950_ = 0ULL;
v___y_3945_ = v___x_3950_;
goto v___jp_3944_;
}
else
{
uint64_t v___x_3951_; 
v___x_3951_ = 2ULL;
v___y_3945_ = v___x_3951_;
goto v___jp_3944_;
}
v___jp_3906_:
{
uint64_t v_flags_3909_; uint32_t v___x_3910_; lean_object* v___x_3911_; uint32_t v___x_3912_; lean_object* v___x_3913_; 
v_flags_3909_ = lean_uint64_lor(v___y_3907_, v___y_3908_);
v___x_3910_ = 214;
v___x_3911_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3902_, v_args_3903_);
v___x_3912_ = 0;
v___x_3913_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3910_, v_flags_3909_, v___x_3911_, v___x_3912_);
if (lean_obj_tag(v___x_3913_) == 0)
{
lean_object* v_a_3914_; lean_object* v___x_3915_; 
v_a_3914_ = lean_ctor_get(v___x_3913_, 0);
lean_inc(v_a_3914_);
lean_dec_ref_known(v___x_3913_, 1);
v___x_3915_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3914_);
lean_dec(v_a_3914_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
lean_inc(v_a_3916_);
lean_dec_ref_known(v___x_3915_, 1);
v___x_3917_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3902_);
v___x_3918_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v___x_3917_, v_a_3916_);
lean_dec_ref(v___x_3917_);
return v___x_3918_;
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
v_a_3919_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3915_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3915_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
else
{
lean_object* v_a_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3942_; 
v_a_3927_ = lean_ctor_get(v___x_3913_, 0);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3929_ = v___x_3913_;
v_isShared_3930_ = v_isSharedCheck_3942_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_a_3927_);
lean_dec(v___x_3913_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3942_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3940_; 
v___x_3931_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3932_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3902_);
v___x_3933_ = lean_string_append(v___x_3931_, v___x_3932_);
lean_dec_ref(v___x_3932_);
v___x_3934_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3935_ = lean_string_append(v___x_3933_, v___x_3934_);
v___x_3936_ = lean_io_error_to_string(v_a_3927_);
v___x_3937_ = lean_string_append(v___x_3935_, v___x_3936_);
lean_dec_ref(v___x_3936_);
v___x_3938_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
if (v_isShared_3930_ == 0)
{
lean_ctor_set(v___x_3929_, 0, v___x_3938_);
v___x_3940_ = v___x_3929_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v___x_3938_);
v___x_3940_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
return v___x_3940_;
}
}
}
}
v___jp_3944_:
{
uint8_t v_construct_3946_; uint64_t v___x_3947_; 
v_construct_3946_ = lean_ctor_get_uint8(v_b_3902_, sizeof(void*)*4);
v___x_3947_ = lean_uint64_lor(v___x_3943_, v___y_3945_);
if (v_construct_3946_ == 0)
{
uint64_t v___x_3948_; 
v___x_3948_ = 0ULL;
v___y_3907_ = v___x_3947_;
v___y_3908_ = v___x_3948_;
goto v___jp_3906_;
}
else
{
uint64_t v___x_3949_; 
v___x_3949_ = 4ULL;
v___y_3907_ = v___x_3947_;
v___y_3908_ = v___x_3949_;
goto v___jp_3906_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0___boxed(lean_object* v_b_3952_, lean_object* v_args_3953_, lean_object* v_await_3954_, lean_object* v_a_3955_){
_start:
{
uint8_t v_await_boxed_3956_; lean_object* v_res_3957_; 
v_await_boxed_3956_ = lean_unbox(v_await_3954_);
v_res_3957_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v_b_3952_, v_args_3953_, v_await_boxed_3956_);
lean_dec_ref(v_b_3952_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new(lean_object* v_stream_3966_){
_start:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; uint8_t v___x_3975_; lean_object* v___x_3976_; 
v___x_3968_ = lean_unsigned_to_nat(1u);
v___x_3969_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__2));
v___x_3970_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3971_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3971_, 0, v_stream_3966_);
lean_ctor_set(v___x_3971_, 1, v___x_3970_);
v___x_3972_ = lean_mk_empty_array_with_capacity(v___x_3968_);
v___x_3973_ = lean_array_push(v___x_3972_, v___x_3971_);
v___x_3974_ = l_Lasm_JS_Web_Support_args(v___x_3973_);
v___x_3975_ = 0;
v___x_3976_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v___x_3969_, v___x_3974_, v___x_3975_);
return v___x_3976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___boxed(lean_object* v_stream_3977_, lean_object* v_a_3978_){
_start:
{
lean_object* v_res_3979_; 
v_res_3979_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_new(v_stream_3977_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(lean_object* v_self_3980_){
_start:
{
lean_object* v___f_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; uint8_t v___x_3985_; lean_object* v_val_3987_; lean_object* v___x_3990_; 
v___f_3982_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_3983_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_3984_ = lean_unsigned_to_nat(0u);
v___x_3985_ = 0;
v___x_3990_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3980_, v___x_3983_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_3998_; 
v_a_3991_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_3998_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3993_ = v___x_3990_;
v_isShared_3994_ = v_isSharedCheck_3998_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v___x_3990_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_3998_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
lean_object* v___x_3996_; 
if (v_isShared_3994_ == 0)
{
lean_ctor_set_tag(v___x_3993_, 1);
v___x_3996_ = v___x_3993_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v_a_3991_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
v_val_3987_ = v___x_3996_;
goto v___jp_3986_;
}
}
}
else
{
lean_object* v_a_3999_; lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4006_; 
v_a_3999_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4006_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4006_ == 0)
{
v___x_4001_ = v___x_3990_;
v_isShared_4002_ = v_isSharedCheck_4006_;
goto v_resetjp_4000_;
}
else
{
lean_inc(v_a_3999_);
lean_dec(v___x_3990_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4006_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v___x_4004_; 
if (v_isShared_4002_ == 0)
{
lean_ctor_set_tag(v___x_4001_, 0);
v___x_4004_ = v___x_4001_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v_a_3999_);
v___x_4004_ = v_reuseFailAlloc_4005_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
v_val_3987_ = v___x_4004_;
goto v___jp_3986_;
}
}
}
v___jp_3986_:
{
lean_object* v___x_3988_; lean_object* v___x_3989_; 
v___x_3988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3988_, 0, v_val_3987_);
v___x_3989_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3984_, v___x_3985_, v___x_3988_, v___f_3982_);
return v___x_3989_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed___boxed(lean_object* v_self_4007_, lean_object* v_a_4008_){
_start:
{
lean_object* v_res_4009_; 
v_res_4009_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(v_self_4007_);
return v_res_4009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object* v_x_4010_){
_start:
{
if (lean_obj_tag(v_x_4010_) == 0)
{
lean_object* v___x_4011_; 
v___x_4011_ = lean_box(0);
return v___x_4011_;
}
else
{
lean_object* v_val_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4025_; 
v_val_4012_ = lean_ctor_get(v_x_4010_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v_x_4010_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4014_ = v_x_4010_;
v_isShared_4015_ = v_isSharedCheck_4025_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_val_4012_);
lean_dec(v_x_4010_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4025_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; uint8_t v___x_4019_; 
v___x_4016_ = lean_nat_to_int(v_val_4012_);
v___x_4017_ = lean_nat_abs(v___x_4016_);
v___x_4018_ = lean_cstr_to_nat("9007199254740991");
v___x_4019_ = lean_nat_dec_le(v___x_4017_, v___x_4018_);
lean_dec(v___x_4017_);
if (v___x_4019_ == 0)
{
lean_object* v___x_4021_; 
if (v_isShared_4015_ == 0)
{
lean_ctor_set_tag(v___x_4014_, 5);
lean_ctor_set(v___x_4014_, 0, v___x_4016_);
v___x_4021_ = v___x_4014_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v___x_4016_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
else
{
double v___x_4023_; lean_object* v___x_4024_; 
lean_del_object(v___x_4014_);
v___x_4023_ = l_Float_ofInt(v___x_4016_);
lean_dec(v___x_4016_);
v___x_4024_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4024_, 0, v___x_4023_);
return v___x_4024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(lean_object* v_x_4026_){
_start:
{
if (lean_obj_tag(v_x_4026_) == 0)
{
lean_object* v___x_4027_; 
v___x_4027_ = lean_box(0);
return v___x_4027_;
}
else
{
lean_object* v_val_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v_val_4028_ = lean_ctor_get(v_x_4026_, 0);
lean_inc(v_val_4028_);
lean_dec_ref_known(v_x_4026_, 1);
v___x_4029_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0));
v___x_4030_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_val_4028_);
v___x_4031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4031_, 0, v___x_4029_);
lean_ctor_set(v___x_4031_, 1, v___x_4030_);
v___x_4032_ = lean_unsigned_to_nat(1u);
v___x_4033_ = lean_mk_empty_array_with_capacity(v___x_4032_);
v___x_4034_ = lean_array_push(v___x_4033_, v___x_4031_);
v___x_4035_ = l_Lasm_JS_Web_Support_fields(v___x_4034_);
lean_dec_ref(v___x_4034_);
return v___x_4035_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read(lean_object* v_self_4036_, lean_object* v_view_4037_, lean_object* v_options_4038_){
_start:
{
lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4040_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_4041_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4041_, 0, v_view_4037_);
v___x_4042_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(v_options_4038_);
v___x_4043_ = lean_unsigned_to_nat(2u);
v___x_4044_ = lean_mk_empty_array_with_capacity(v___x_4043_);
v___x_4045_ = lean_array_push(v___x_4044_, v___x_4041_);
v___x_4046_ = lean_array_push(v___x_4045_, v___x_4042_);
v___x_4047_ = l_Lasm_JS_Web_Support_args(v___x_4046_);
v___x_4048_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_4036_, v___x_4040_, v___x_4047_);
return v___x_4048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read___boxed(lean_object* v_self_4049_, lean_object* v_view_4050_, lean_object* v_options_4051_, lean_object* v_a_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_read(v_self_4049_, v_view_4050_, v_options_4051_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(lean_object* v_self_4054_){
_start:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4056_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_4057_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4058_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4054_, v___x_4056_, v___x_4057_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock___boxed(lean_object* v_self_4059_, lean_object* v_a_4060_){
_start:
{
lean_object* v_res_4061_; 
v_res_4061_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(v_self_4059_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(lean_object* v_self_4062_, lean_object* v_reason_4063_){
_start:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; 
v___x_4065_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_4066_ = lean_unsigned_to_nat(1u);
v___x_4067_ = lean_mk_empty_array_with_capacity(v___x_4066_);
v___x_4068_ = lean_array_push(v___x_4067_, v_reason_4063_);
v___x_4069_ = l_Lasm_JS_Web_Support_args(v___x_4068_);
v___x_4070_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4062_, v___x_4065_, v___x_4069_);
return v___x_4070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel___boxed(lean_object* v_self_4071_, lean_object* v_reason_4072_, lean_object* v_a_4073_){
_start:
{
lean_object* v_res_4074_; 
v_res_4074_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(v_self_4071_, v_reason_4072_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(lean_object* v_context_4076_, lean_object* v_d_4077_){
_start:
{
lean_object* v_received_4083_; 
switch(lean_obj_tag(v_d_4077_))
{
case 1:
{
goto v___jp_4079_;
}
case 0:
{
goto v___jp_4079_;
}
default: 
{
if (lean_obj_tag(v_d_4077_) == 3)
{
double v_n_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; 
v_n_4097_ = lean_ctor_get_float(v_d_4077_, 0);
lean_dec_ref_known(v_d_4077_, 0);
v___x_4098_ = lean_box_float(v_n_4097_);
v___x_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4099_, 0, v___x_4098_);
v___x_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4099_);
return v___x_4100_;
}
else
{
if (lean_obj_tag(v_d_4077_) == 9)
{
lean_object* v_value_4101_; lean_object* v_description_4102_; lean_object* v___x_4103_; uint8_t v___x_4104_; 
v_value_4101_ = lean_ctor_get(v_d_4077_, 0);
v_description_4102_ = lean_ctor_get(v_d_4077_, 1);
v___x_4103_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4104_ = lean_string_dec_eq(v_description_4102_, v___x_4103_);
if (v___x_4104_ == 0)
{
goto v___jp_4095_;
}
else
{
uint32_t v___x_4105_; uint64_t v___x_4106_; lean_object* v___x_4107_; uint32_t v___x_4108_; lean_object* v___x_4109_; 
lean_inc_n(v_value_4101_, 2);
lean_dec_ref_known(v_d_4077_, 2);
v___x_4105_ = 206;
v___x_4106_ = 0ULL;
v___x_4107_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4107_, 0, v_value_4101_);
lean_ctor_set(v___x_4107_, 1, v___x_4103_);
v___x_4108_ = lasm_js_value_handle(v_value_4101_);
lean_dec(v_value_4101_);
v___x_4109_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4105_, v___x_4106_, v___x_4107_, v___x_4108_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; uint8_t v___x_4111_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_a_4110_);
lean_dec_ref_known(v___x_4109_, 1);
v___x_4111_ = lean_string_validate_utf8(v_a_4110_);
if (v___x_4111_ == 0)
{
lean_object* v___x_4112_; lean_object* v___x_4113_; 
lean_dec(v_a_4110_);
v___x_4112_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_4113_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4112_);
v_received_4083_ = v___x_4113_;
goto v___jp_4082_;
}
else
{
lean_object* v___x_4114_; 
v___x_4114_ = lean_string_from_utf8_unchecked(v_a_4110_);
v_received_4083_ = v___x_4114_;
goto v___jp_4082_;
}
}
else
{
lean_object* v___x_4115_; 
lean_dec_ref_known(v___x_4109_, 1);
v___x_4115_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_4083_ = v___x_4115_;
goto v___jp_4082_;
}
}
}
else
{
goto v___jp_4095_;
}
}
}
}
v___jp_4079_:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = lean_box(0);
v___x_4081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4080_);
return v___x_4081_;
}
v___jp_4082_:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4084_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4085_ = lean_string_append(v___x_4084_, v_context_4076_);
v___x_4086_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4087_ = lean_string_append(v___x_4085_, v___x_4086_);
v___x_4088_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___closed__0));
v___x_4089_ = lean_string_append(v___x_4087_, v___x_4088_);
v___x_4090_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4091_ = lean_string_append(v___x_4089_, v___x_4090_);
v___x_4092_ = lean_string_append(v___x_4091_, v_received_4083_);
lean_dec_ref(v_received_4083_);
v___x_4093_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4093_, 0, v___x_4092_);
v___x_4094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4094_, 0, v___x_4093_);
return v___x_4094_;
}
v___jp_4095_:
{
lean_object* v___x_4096_; 
v___x_4096_ = l_Lasm_JS_Data_describe(v_d_4077_);
v_received_4083_ = v___x_4096_;
goto v___jp_4082_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4116_, lean_object* v_d_4117_, lean_object* v_a_4118_){
_start:
{
lean_object* v_res_4119_; 
v_res_4119_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4116_, v_d_4117_);
lean_dec_ref(v_context_4116_);
return v_res_4119_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(lean_object* v_context_4120_, lean_object* v_bytes_4121_){
_start:
{
lean_object* v___x_4123_; 
v___x_4123_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4121_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; lean_object* v___x_4125_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4124_);
lean_dec_ref_known(v___x_4123_, 1);
v___x_4125_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4120_, v_a_4124_);
return v___x_4125_;
}
else
{
lean_object* v_a_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4133_; 
v_a_4126_ = lean_ctor_get(v___x_4123_, 0);
v_isSharedCheck_4133_ = !lean_is_exclusive(v___x_4123_);
if (v_isSharedCheck_4133_ == 0)
{
v___x_4128_ = v___x_4123_;
v_isShared_4129_ = v_isSharedCheck_4133_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_a_4126_);
lean_dec(v___x_4123_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4133_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v___x_4131_; 
if (v_isShared_4129_ == 0)
{
v___x_4131_ = v___x_4128_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v_a_4126_);
v___x_4131_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
return v___x_4131_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0___boxed(lean_object* v_context_4134_, lean_object* v_bytes_4135_, lean_object* v_a_4136_){
_start:
{
lean_object* v_res_4137_; 
v_res_4137_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v_context_4134_, v_bytes_4135_);
lean_dec_ref(v_bytes_4135_);
lean_dec_ref(v_context_4134_);
return v_res_4137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(lean_object* v_o_4139_, lean_object* v_key_4140_){
_start:
{
lean_object* v_k_4142_; lean_object* v___x_4143_; 
v_k_4142_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4142_, 0, v_key_4140_);
lean_inc_ref(v_k_4142_);
v___x_4143_ = l_Lasm_JS_Wire_encodeIO(v_k_4142_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v_a_4144_; uint32_t v___x_4145_; uint32_t v___x_4146_; uint64_t v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; 
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4144_);
lean_dec_ref_known(v___x_4143_, 1);
v___x_4145_ = 203;
v___x_4146_ = lasm_js_value_handle(v_o_4139_);
v___x_4147_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4148_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4149_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4149_, 0, v_o_4139_);
lean_ctor_set(v___x_4149_, 1, v___x_4148_);
v___x_4150_ = lean_unsigned_to_nat(2u);
v___x_4151_ = lean_mk_empty_array_with_capacity(v___x_4150_);
lean_inc_ref(v_k_4142_);
v___x_4152_ = lean_array_push(v___x_4151_, v_k_4142_);
v___x_4153_ = lean_array_push(v___x_4152_, v___x_4149_);
v___x_4154_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4153_);
v___x_4155_ = lasm_js_call(v___x_4145_, v___x_4146_, v___x_4147_, v_a_4144_, v___x_4154_);
lean_dec_ref_known(v___x_4154_, 1);
lean_dec(v_a_4144_);
if (lean_obj_tag(v___x_4155_) == 0)
{
lean_object* v_a_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v_a_4156_ = lean_ctor_get(v___x_4155_, 0);
lean_inc(v_a_4156_);
lean_dec_ref_known(v___x_4155_, 1);
v___x_4157_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4158_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4142_);
v___x_4159_ = lean_string_append(v___x_4157_, v___x_4158_);
lean_dec_ref(v___x_4158_);
v___x_4160_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v___x_4159_, v_a_4156_);
lean_dec(v_a_4156_);
lean_dec_ref(v___x_4159_);
return v___x_4160_;
}
else
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4168_; 
lean_dec_ref_known(v_k_4142_, 1);
v_a_4161_ = lean_ctor_get(v___x_4155_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4155_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4163_ = v___x_4155_;
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v___x_4155_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4166_; 
if (v_isShared_4164_ == 0)
{
v___x_4166_ = v___x_4163_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v_a_4161_);
v___x_4166_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
return v___x_4166_;
}
}
}
}
else
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4176_; 
lean_dec_ref_known(v_k_4142_, 1);
lean_dec(v_o_4139_);
v_a_4169_ = lean_ctor_get(v___x_4143_, 0);
v_isSharedCheck_4176_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4176_ == 0)
{
v___x_4171_ = v___x_4143_;
v_isShared_4172_ = v_isSharedCheck_4176_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_4143_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4176_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v___x_4174_; 
if (v_isShared_4172_ == 0)
{
v___x_4174_ = v___x_4171_;
goto v_reusejp_4173_;
}
else
{
lean_object* v_reuseFailAlloc_4175_; 
v_reuseFailAlloc_4175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4175_, 0, v_a_4169_);
v___x_4174_ = v_reuseFailAlloc_4175_;
goto v_reusejp_4173_;
}
v_reusejp_4173_:
{
return v___x_4174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___boxed(lean_object* v_o_4177_, lean_object* v_key_4178_, lean_object* v_a_4179_){
_start:
{
lean_object* v_res_4180_; 
v_res_4180_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_o_4177_, v_key_4178_);
return v_res_4180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(lean_object* v_self_4182_){
_start:
{
lean_object* v___x_4184_; lean_object* v___x_4185_; 
v___x_4184_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4185_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4182_, v___x_4184_);
return v___x_4185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___boxed(lean_object* v_self_4186_, lean_object* v_a_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(v_self_4186_);
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close(lean_object* v_self_4189_){
_start:
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4191_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4192_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4193_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4189_, v___x_4191_, v___x_4192_);
return v___x_4193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close___boxed(lean_object* v_self_4194_, lean_object* v_a_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l_Lasm_JS_Web_ReadableStreamDefaultController_close(v_self_4194_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(lean_object* v_self_4198_, lean_object* v_chunk_4199_){
_start:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4201_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4202_ = lean_unsigned_to_nat(1u);
v___x_4203_ = lean_mk_empty_array_with_capacity(v___x_4202_);
v___x_4204_ = lean_array_push(v___x_4203_, v_chunk_4199_);
v___x_4205_ = l_Lasm_JS_Web_Support_args(v___x_4204_);
v___x_4206_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4198_, v___x_4201_, v___x_4205_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___boxed(lean_object* v_self_4207_, lean_object* v_chunk_4208_, lean_object* v_a_4209_){
_start:
{
lean_object* v_res_4210_; 
v_res_4210_ = l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(v_self_4207_, v_chunk_4208_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error(lean_object* v_self_4212_, lean_object* v_e_4213_){
_start:
{
lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4215_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4216_ = lean_unsigned_to_nat(1u);
v___x_4217_ = lean_mk_empty_array_with_capacity(v___x_4216_);
v___x_4218_ = lean_array_push(v___x_4217_, v_e_4213_);
v___x_4219_ = l_Lasm_JS_Web_Support_args(v___x_4218_);
v___x_4220_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4212_, v___x_4215_, v___x_4219_);
return v___x_4220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error___boxed(lean_object* v_self_4221_, lean_object* v_e_4222_, lean_object* v_a_4223_){
_start:
{
lean_object* v_res_4224_; 
v_res_4224_ = l_Lasm_JS_Web_ReadableStreamDefaultController_error(v_self_4221_, v_e_4222_);
return v_res_4224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(lean_object* v_context_4226_, lean_object* v_d_4227_){
_start:
{
lean_object* v_received_4233_; 
switch(lean_obj_tag(v_d_4227_))
{
case 1:
{
goto v___jp_4229_;
}
case 0:
{
goto v___jp_4229_;
}
default: 
{
if (lean_obj_tag(v_d_4227_) == 9)
{
lean_object* v_value_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; 
v_value_4247_ = lean_ctor_get(v_d_4227_, 0);
lean_inc(v_value_4247_);
lean_dec_ref_known(v_d_4227_, 2);
v___x_4248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4248_, 0, v_value_4247_);
v___x_4249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4249_, 0, v___x_4248_);
return v___x_4249_;
}
else
{
if (lean_obj_tag(v_d_4227_) == 9)
{
lean_object* v_value_4250_; lean_object* v_description_4251_; lean_object* v___x_4252_; uint8_t v___x_4253_; 
v_value_4250_ = lean_ctor_get(v_d_4227_, 0);
v_description_4251_ = lean_ctor_get(v_d_4227_, 1);
v___x_4252_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4253_ = lean_string_dec_eq(v_description_4251_, v___x_4252_);
if (v___x_4253_ == 0)
{
goto v___jp_4245_;
}
else
{
uint32_t v___x_4254_; uint64_t v___x_4255_; lean_object* v___x_4256_; uint32_t v___x_4257_; lean_object* v___x_4258_; 
lean_inc_n(v_value_4250_, 2);
lean_dec_ref_known(v_d_4227_, 2);
v___x_4254_ = 206;
v___x_4255_ = 0ULL;
v___x_4256_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4256_, 0, v_value_4250_);
lean_ctor_set(v___x_4256_, 1, v___x_4252_);
v___x_4257_ = lasm_js_value_handle(v_value_4250_);
lean_dec(v_value_4250_);
v___x_4258_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4254_, v___x_4255_, v___x_4256_, v___x_4257_);
if (lean_obj_tag(v___x_4258_) == 0)
{
lean_object* v_a_4259_; uint8_t v___x_4260_; 
v_a_4259_ = lean_ctor_get(v___x_4258_, 0);
lean_inc(v_a_4259_);
lean_dec_ref_known(v___x_4258_, 1);
v___x_4260_ = lean_string_validate_utf8(v_a_4259_);
if (v___x_4260_ == 0)
{
lean_object* v___x_4261_; lean_object* v___x_4262_; 
lean_dec(v_a_4259_);
v___x_4261_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_4262_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4261_);
v_received_4233_ = v___x_4262_;
goto v___jp_4232_;
}
else
{
lean_object* v___x_4263_; 
v___x_4263_ = lean_string_from_utf8_unchecked(v_a_4259_);
v_received_4233_ = v___x_4263_;
goto v___jp_4232_;
}
}
else
{
lean_object* v___x_4264_; 
lean_dec_ref_known(v___x_4258_, 1);
v___x_4264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_4233_ = v___x_4264_;
goto v___jp_4232_;
}
}
}
else
{
goto v___jp_4245_;
}
}
}
}
v___jp_4229_:
{
lean_object* v___x_4230_; lean_object* v___x_4231_; 
v___x_4230_ = lean_box(0);
v___x_4231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4231_, 0, v___x_4230_);
return v___x_4231_;
}
v___jp_4232_:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
v___x_4234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4235_ = lean_string_append(v___x_4234_, v_context_4226_);
v___x_4236_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4237_ = lean_string_append(v___x_4235_, v___x_4236_);
v___x_4238_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___closed__0));
v___x_4239_ = lean_string_append(v___x_4237_, v___x_4238_);
v___x_4240_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4241_ = lean_string_append(v___x_4239_, v___x_4240_);
v___x_4242_ = lean_string_append(v___x_4241_, v_received_4233_);
lean_dec_ref(v_received_4233_);
v___x_4243_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4242_);
v___x_4244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4244_, 0, v___x_4243_);
return v___x_4244_;
}
v___jp_4245_:
{
lean_object* v___x_4246_; 
v___x_4246_ = l_Lasm_JS_Data_describe(v_d_4227_);
v_received_4233_ = v___x_4246_;
goto v___jp_4232_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4265_, lean_object* v_d_4266_, lean_object* v_a_4267_){
_start:
{
lean_object* v_res_4268_; 
v_res_4268_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4265_, v_d_4266_);
lean_dec_ref(v_context_4265_);
return v_res_4268_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(lean_object* v_context_4269_, lean_object* v_bytes_4270_){
_start:
{
lean_object* v___x_4272_; 
v___x_4272_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4270_);
if (lean_obj_tag(v___x_4272_) == 0)
{
lean_object* v_a_4273_; lean_object* v___x_4274_; 
v_a_4273_ = lean_ctor_get(v___x_4272_, 0);
lean_inc(v_a_4273_);
lean_dec_ref_known(v___x_4272_, 1);
v___x_4274_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4269_, v_a_4273_);
return v___x_4274_;
}
else
{
lean_object* v_a_4275_; lean_object* v___x_4277_; uint8_t v_isShared_4278_; uint8_t v_isSharedCheck_4282_; 
v_a_4275_ = lean_ctor_get(v___x_4272_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4272_);
if (v_isSharedCheck_4282_ == 0)
{
v___x_4277_ = v___x_4272_;
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
else
{
lean_inc(v_a_4275_);
lean_dec(v___x_4272_);
v___x_4277_ = lean_box(0);
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
v_resetjp_4276_:
{
lean_object* v___x_4280_; 
if (v_isShared_4278_ == 0)
{
v___x_4280_ = v___x_4277_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v_a_4275_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
return v___x_4280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0___boxed(lean_object* v_context_4283_, lean_object* v_bytes_4284_, lean_object* v_a_4285_){
_start:
{
lean_object* v_res_4286_; 
v_res_4286_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v_context_4283_, v_bytes_4284_);
lean_dec_ref(v_bytes_4284_);
lean_dec_ref(v_context_4283_);
return v_res_4286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(lean_object* v_o_4287_, lean_object* v_key_4288_){
_start:
{
lean_object* v_k_4290_; lean_object* v___x_4291_; 
v_k_4290_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4290_, 0, v_key_4288_);
lean_inc_ref(v_k_4290_);
v___x_4291_ = l_Lasm_JS_Wire_encodeIO(v_k_4290_);
if (lean_obj_tag(v___x_4291_) == 0)
{
lean_object* v_a_4292_; uint32_t v___x_4293_; uint32_t v___x_4294_; uint64_t v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; 
v_a_4292_ = lean_ctor_get(v___x_4291_, 0);
lean_inc(v_a_4292_);
lean_dec_ref_known(v___x_4291_, 1);
v___x_4293_ = 203;
v___x_4294_ = lasm_js_value_handle(v_o_4287_);
v___x_4295_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4296_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4297_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4297_, 0, v_o_4287_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
v___x_4298_ = lean_unsigned_to_nat(2u);
v___x_4299_ = lean_mk_empty_array_with_capacity(v___x_4298_);
lean_inc_ref(v_k_4290_);
v___x_4300_ = lean_array_push(v___x_4299_, v_k_4290_);
v___x_4301_ = lean_array_push(v___x_4300_, v___x_4297_);
v___x_4302_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4301_);
v___x_4303_ = lasm_js_call(v___x_4293_, v___x_4294_, v___x_4295_, v_a_4292_, v___x_4302_);
lean_dec_ref_known(v___x_4302_, 1);
lean_dec(v_a_4292_);
if (lean_obj_tag(v___x_4303_) == 0)
{
lean_object* v_a_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; 
v_a_4304_ = lean_ctor_get(v___x_4303_, 0);
lean_inc(v_a_4304_);
lean_dec_ref_known(v___x_4303_, 1);
v___x_4305_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4306_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4290_);
v___x_4307_ = lean_string_append(v___x_4305_, v___x_4306_);
lean_dec_ref(v___x_4306_);
v___x_4308_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v___x_4307_, v_a_4304_);
lean_dec(v_a_4304_);
lean_dec_ref(v___x_4307_);
return v___x_4308_;
}
else
{
lean_object* v_a_4309_; lean_object* v___x_4311_; uint8_t v_isShared_4312_; uint8_t v_isSharedCheck_4316_; 
lean_dec_ref_known(v_k_4290_, 1);
v_a_4309_ = lean_ctor_get(v___x_4303_, 0);
v_isSharedCheck_4316_ = !lean_is_exclusive(v___x_4303_);
if (v_isSharedCheck_4316_ == 0)
{
v___x_4311_ = v___x_4303_;
v_isShared_4312_ = v_isSharedCheck_4316_;
goto v_resetjp_4310_;
}
else
{
lean_inc(v_a_4309_);
lean_dec(v___x_4303_);
v___x_4311_ = lean_box(0);
v_isShared_4312_ = v_isSharedCheck_4316_;
goto v_resetjp_4310_;
}
v_resetjp_4310_:
{
lean_object* v___x_4314_; 
if (v_isShared_4312_ == 0)
{
v___x_4314_ = v___x_4311_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v_a_4309_);
v___x_4314_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
return v___x_4314_;
}
}
}
}
else
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4324_; 
lean_dec_ref_known(v_k_4290_, 1);
lean_dec(v_o_4287_);
v_a_4317_ = lean_ctor_get(v___x_4291_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v___x_4291_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4319_ = v___x_4291_;
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4291_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4322_; 
if (v_isShared_4320_ == 0)
{
v___x_4322_ = v___x_4319_;
goto v_reusejp_4321_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v_a_4317_);
v___x_4322_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4321_;
}
v_reusejp_4321_:
{
return v___x_4322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0___boxed(lean_object* v_o_4325_, lean_object* v_key_4326_, lean_object* v_a_4327_){
_start:
{
lean_object* v_res_4328_; 
v_res_4328_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_o_4325_, v_key_4326_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(lean_object* v_self_4330_){
_start:
{
lean_object* v___x_4332_; lean_object* v___x_4333_; 
v___x_4332_ = ((lean_object*)(l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___closed__0));
v___x_4333_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_self_4330_, v___x_4332_);
return v___x_4333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___boxed(lean_object* v_self_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(v_self_4334_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(lean_object* v_self_4337_){
_start:
{
lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4339_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4340_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4337_, v___x_4339_);
return v___x_4340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize___boxed(lean_object* v_self_4341_, lean_object* v_a_4342_){
_start:
{
lean_object* v_res_4343_; 
v_res_4343_ = l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(v_self_4341_);
return v_res_4343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close(lean_object* v_self_4344_){
_start:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; 
v___x_4346_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4347_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4348_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4344_, v___x_4346_, v___x_4347_);
return v___x_4348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close___boxed(lean_object* v_self_4349_, lean_object* v_a_4350_){
_start:
{
lean_object* v_res_4351_; 
v_res_4351_ = l_Lasm_JS_Web_ReadableByteStreamController_close(v_self_4349_);
return v_res_4351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue(lean_object* v_self_4352_, lean_object* v_chunk_4353_){
_start:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___x_4355_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4356_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4356_, 0, v_chunk_4353_);
v___x_4357_ = lean_unsigned_to_nat(1u);
v___x_4358_ = lean_mk_empty_array_with_capacity(v___x_4357_);
v___x_4359_ = lean_array_push(v___x_4358_, v___x_4356_);
v___x_4360_ = l_Lasm_JS_Web_Support_args(v___x_4359_);
v___x_4361_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4352_, v___x_4355_, v___x_4360_);
return v___x_4361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue___boxed(lean_object* v_self_4362_, lean_object* v_chunk_4363_, lean_object* v_a_4364_){
_start:
{
lean_object* v_res_4365_; 
v_res_4365_ = l_Lasm_JS_Web_ReadableByteStreamController_enqueue(v_self_4362_, v_chunk_4363_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error(lean_object* v_self_4366_, lean_object* v_e_4367_){
_start:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; 
v___x_4369_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4370_ = lean_unsigned_to_nat(1u);
v___x_4371_ = lean_mk_empty_array_with_capacity(v___x_4370_);
v___x_4372_ = lean_array_push(v___x_4371_, v_e_4367_);
v___x_4373_ = l_Lasm_JS_Web_Support_args(v___x_4372_);
v___x_4374_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4366_, v___x_4369_, v___x_4373_);
return v___x_4374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error___boxed(lean_object* v_self_4375_, lean_object* v_e_4376_, lean_object* v_a_4377_){
_start:
{
lean_object* v_res_4378_; 
v_res_4378_ = l_Lasm_JS_Web_ReadableByteStreamController_error(v_self_4375_, v_e_4376_);
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(lean_object* v_context_4380_, lean_object* v_d_4381_){
_start:
{
lean_object* v_received_4387_; 
switch(lean_obj_tag(v_d_4381_))
{
case 1:
{
goto v___jp_4383_;
}
case 0:
{
goto v___jp_4383_;
}
default: 
{
if (lean_obj_tag(v_d_4381_) == 6)
{
lean_object* v_b_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; 
v_b_4401_ = lean_ctor_get(v_d_4381_, 0);
lean_inc_ref(v_b_4401_);
lean_dec_ref_known(v_d_4381_, 1);
v___x_4402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4402_, 0, v_b_4401_);
v___x_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4402_);
return v___x_4403_;
}
else
{
if (lean_obj_tag(v_d_4381_) == 9)
{
lean_object* v_value_4404_; lean_object* v_description_4405_; lean_object* v___x_4406_; uint8_t v___x_4407_; 
v_value_4404_ = lean_ctor_get(v_d_4381_, 0);
v_description_4405_ = lean_ctor_get(v_d_4381_, 1);
v___x_4406_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4407_ = lean_string_dec_eq(v_description_4405_, v___x_4406_);
if (v___x_4407_ == 0)
{
goto v___jp_4399_;
}
else
{
uint32_t v___x_4408_; uint64_t v___x_4409_; lean_object* v___x_4410_; uint32_t v___x_4411_; lean_object* v___x_4412_; 
lean_inc_n(v_value_4404_, 2);
lean_dec_ref_known(v_d_4381_, 2);
v___x_4408_ = 206;
v___x_4409_ = 0ULL;
v___x_4410_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4410_, 0, v_value_4404_);
lean_ctor_set(v___x_4410_, 1, v___x_4406_);
v___x_4411_ = lasm_js_value_handle(v_value_4404_);
lean_dec(v_value_4404_);
v___x_4412_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4408_, v___x_4409_, v___x_4410_, v___x_4411_);
if (lean_obj_tag(v___x_4412_) == 0)
{
lean_object* v_a_4413_; uint8_t v___x_4414_; 
v_a_4413_ = lean_ctor_get(v___x_4412_, 0);
lean_inc(v_a_4413_);
lean_dec_ref_known(v___x_4412_, 1);
v___x_4414_ = lean_string_validate_utf8(v_a_4413_);
if (v___x_4414_ == 0)
{
lean_object* v___x_4415_; lean_object* v___x_4416_; 
lean_dec(v_a_4413_);
v___x_4415_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_4416_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4415_);
v_received_4387_ = v___x_4416_;
goto v___jp_4386_;
}
else
{
lean_object* v___x_4417_; 
v___x_4417_ = lean_string_from_utf8_unchecked(v_a_4413_);
v_received_4387_ = v___x_4417_;
goto v___jp_4386_;
}
}
else
{
lean_object* v___x_4418_; 
lean_dec_ref_known(v___x_4412_, 1);
v___x_4418_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_4387_ = v___x_4418_;
goto v___jp_4386_;
}
}
}
else
{
goto v___jp_4399_;
}
}
}
}
v___jp_4383_:
{
lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4384_ = lean_box(0);
v___x_4385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4385_, 0, v___x_4384_);
return v___x_4385_;
}
v___jp_4386_:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4388_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4389_ = lean_string_append(v___x_4388_, v_context_4380_);
v___x_4390_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4391_ = lean_string_append(v___x_4389_, v___x_4390_);
v___x_4392_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___closed__0));
v___x_4393_ = lean_string_append(v___x_4391_, v___x_4392_);
v___x_4394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4395_ = lean_string_append(v___x_4393_, v___x_4394_);
v___x_4396_ = lean_string_append(v___x_4395_, v_received_4387_);
lean_dec_ref(v_received_4387_);
v___x_4397_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4397_, 0, v___x_4396_);
v___x_4398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4398_, 0, v___x_4397_);
return v___x_4398_;
}
v___jp_4399_:
{
lean_object* v___x_4400_; 
v___x_4400_ = l_Lasm_JS_Data_describe(v_d_4381_);
v_received_4387_ = v___x_4400_;
goto v___jp_4386_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4419_, lean_object* v_d_4420_, lean_object* v_a_4421_){
_start:
{
lean_object* v_res_4422_; 
v_res_4422_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4419_, v_d_4420_);
lean_dec_ref(v_context_4419_);
return v_res_4422_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(lean_object* v_context_4423_, lean_object* v_bytes_4424_){
_start:
{
lean_object* v___x_4426_; 
v___x_4426_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4424_);
if (lean_obj_tag(v___x_4426_) == 0)
{
lean_object* v_a_4427_; lean_object* v___x_4428_; 
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
lean_inc(v_a_4427_);
lean_dec_ref_known(v___x_4426_, 1);
v___x_4428_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4423_, v_a_4427_);
return v___x_4428_;
}
else
{
lean_object* v_a_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4436_; 
v_a_4429_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4436_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4436_ == 0)
{
v___x_4431_ = v___x_4426_;
v_isShared_4432_ = v_isSharedCheck_4436_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_a_4429_);
lean_dec(v___x_4426_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4436_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
lean_object* v___x_4434_; 
if (v_isShared_4432_ == 0)
{
v___x_4434_ = v___x_4431_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v_a_4429_);
v___x_4434_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
return v___x_4434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0___boxed(lean_object* v_context_4437_, lean_object* v_bytes_4438_, lean_object* v_a_4439_){
_start:
{
lean_object* v_res_4440_; 
v_res_4440_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v_context_4437_, v_bytes_4438_);
lean_dec_ref(v_bytes_4438_);
lean_dec_ref(v_context_4437_);
return v_res_4440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(lean_object* v_o_4441_, lean_object* v_key_4442_){
_start:
{
lean_object* v_k_4444_; lean_object* v___x_4445_; 
v_k_4444_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4444_, 0, v_key_4442_);
lean_inc_ref(v_k_4444_);
v___x_4445_ = l_Lasm_JS_Wire_encodeIO(v_k_4444_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; uint32_t v___x_4447_; uint32_t v___x_4448_; uint64_t v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
lean_inc(v_a_4446_);
lean_dec_ref_known(v___x_4445_, 1);
v___x_4447_ = 203;
v___x_4448_ = lasm_js_value_handle(v_o_4441_);
v___x_4449_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4450_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4451_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4451_, 0, v_o_4441_);
lean_ctor_set(v___x_4451_, 1, v___x_4450_);
v___x_4452_ = lean_unsigned_to_nat(2u);
v___x_4453_ = lean_mk_empty_array_with_capacity(v___x_4452_);
lean_inc_ref(v_k_4444_);
v___x_4454_ = lean_array_push(v___x_4453_, v_k_4444_);
v___x_4455_ = lean_array_push(v___x_4454_, v___x_4451_);
v___x_4456_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4456_, 0, v___x_4455_);
v___x_4457_ = lasm_js_call(v___x_4447_, v___x_4448_, v___x_4449_, v_a_4446_, v___x_4456_);
lean_dec_ref_known(v___x_4456_, 1);
lean_dec(v_a_4446_);
if (lean_obj_tag(v___x_4457_) == 0)
{
lean_object* v_a_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; 
v_a_4458_ = lean_ctor_get(v___x_4457_, 0);
lean_inc(v_a_4458_);
lean_dec_ref_known(v___x_4457_, 1);
v___x_4459_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4460_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4444_);
v___x_4461_ = lean_string_append(v___x_4459_, v___x_4460_);
lean_dec_ref(v___x_4460_);
v___x_4462_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v___x_4461_, v_a_4458_);
lean_dec(v_a_4458_);
lean_dec_ref(v___x_4461_);
return v___x_4462_;
}
else
{
lean_object* v_a_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4470_; 
lean_dec_ref_known(v_k_4444_, 1);
v_a_4463_ = lean_ctor_get(v___x_4457_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4457_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4465_ = v___x_4457_;
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_a_4463_);
lean_dec(v___x_4457_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4468_; 
if (v_isShared_4466_ == 0)
{
v___x_4468_ = v___x_4465_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v_a_4463_);
v___x_4468_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
return v___x_4468_;
}
}
}
}
else
{
lean_object* v_a_4471_; lean_object* v___x_4473_; uint8_t v_isShared_4474_; uint8_t v_isSharedCheck_4478_; 
lean_dec_ref_known(v_k_4444_, 1);
lean_dec(v_o_4441_);
v_a_4471_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4478_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4478_ == 0)
{
v___x_4473_ = v___x_4445_;
v_isShared_4474_ = v_isSharedCheck_4478_;
goto v_resetjp_4472_;
}
else
{
lean_inc(v_a_4471_);
lean_dec(v___x_4445_);
v___x_4473_ = lean_box(0);
v_isShared_4474_ = v_isSharedCheck_4478_;
goto v_resetjp_4472_;
}
v_resetjp_4472_:
{
lean_object* v___x_4476_; 
if (v_isShared_4474_ == 0)
{
v___x_4476_ = v___x_4473_;
goto v_reusejp_4475_;
}
else
{
lean_object* v_reuseFailAlloc_4477_; 
v_reuseFailAlloc_4477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4477_, 0, v_a_4471_);
v___x_4476_ = v_reuseFailAlloc_4477_;
goto v_reusejp_4475_;
}
v_reusejp_4475_:
{
return v___x_4476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0___boxed(lean_object* v_o_4479_, lean_object* v_key_4480_, lean_object* v_a_4481_){
_start:
{
lean_object* v_res_4482_; 
v_res_4482_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_o_4479_, v_key_4480_);
return v_res_4482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(lean_object* v_self_4484_){
_start:
{
lean_object* v___x_4486_; lean_object* v___x_4487_; 
v___x_4486_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___closed__0));
v___x_4487_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_self_4484_, v___x_4486_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___boxed(lean_object* v_self_4488_, lean_object* v_a_4489_){
_start:
{
lean_object* v_res_4490_; 
v_res_4490_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(v_self_4488_);
return v_res_4490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(lean_object* v_self_4492_, lean_object* v_bytesWritten_4493_){
_start:
{
lean_object* v___x_4495_; lean_object* v___y_4497_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; uint8_t v___x_4506_; 
v___x_4495_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___closed__0));
v___x_4503_ = lean_nat_to_int(v_bytesWritten_4493_);
v___x_4504_ = lean_nat_abs(v___x_4503_);
v___x_4505_ = lean_cstr_to_nat("9007199254740991");
v___x_4506_ = lean_nat_dec_le(v___x_4504_, v___x_4505_);
lean_dec(v___x_4504_);
if (v___x_4506_ == 0)
{
lean_object* v___x_4507_; 
v___x_4507_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4503_);
v___y_4497_ = v___x_4507_;
goto v___jp_4496_;
}
else
{
double v___x_4508_; lean_object* v___x_4509_; 
v___x_4508_ = l_Float_ofInt(v___x_4503_);
lean_dec(v___x_4503_);
v___x_4509_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4509_, 0, v___x_4508_);
v___y_4497_ = v___x_4509_;
goto v___jp_4496_;
}
v___jp_4496_:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___x_4498_ = lean_unsigned_to_nat(1u);
v___x_4499_ = lean_mk_empty_array_with_capacity(v___x_4498_);
v___x_4500_ = lean_array_push(v___x_4499_, v___y_4497_);
v___x_4501_ = l_Lasm_JS_Web_Support_args(v___x_4500_);
v___x_4502_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4492_, v___x_4495_, v___x_4501_);
return v___x_4502_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___boxed(lean_object* v_self_4510_, lean_object* v_bytesWritten_4511_, lean_object* v_a_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(v_self_4510_, v_bytesWritten_4511_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(lean_object* v_self_4515_, lean_object* v_view_4516_){
_start:
{
lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4518_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___closed__0));
v___x_4519_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4519_, 0, v_view_4516_);
v___x_4520_ = lean_unsigned_to_nat(1u);
v___x_4521_ = lean_mk_empty_array_with_capacity(v___x_4520_);
v___x_4522_ = lean_array_push(v___x_4521_, v___x_4519_);
v___x_4523_ = l_Lasm_JS_Web_Support_args(v___x_4522_);
v___x_4524_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4515_, v___x_4518_, v___x_4523_);
return v___x_4524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___boxed(lean_object* v_self_4525_, lean_object* v_view_4526_, lean_object* v_a_4527_){
_start:
{
lean_object* v_res_4528_; 
v_res_4528_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(v_self_4525_, v_view_4526_);
return v_res_4528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(lean_object* v_context_4529_, lean_object* v_d_4530_){
_start:
{
lean_object* v_received_4533_; 
if (lean_obj_tag(v_d_4530_) == 9)
{
lean_object* v_value_4547_; lean_object* v___x_4548_; 
v_value_4547_ = lean_ctor_get(v_d_4530_, 0);
lean_inc(v_value_4547_);
lean_dec_ref_known(v_d_4530_, 2);
v___x_4548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4548_, 0, v_value_4547_);
return v___x_4548_;
}
else
{
if (lean_obj_tag(v_d_4530_) == 9)
{
lean_object* v_value_4549_; lean_object* v_description_4550_; lean_object* v___x_4551_; uint8_t v___x_4552_; 
v_value_4549_ = lean_ctor_get(v_d_4530_, 0);
v_description_4550_ = lean_ctor_get(v_d_4530_, 1);
v___x_4551_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4552_ = lean_string_dec_eq(v_description_4550_, v___x_4551_);
if (v___x_4552_ == 0)
{
goto v___jp_4545_;
}
else
{
uint32_t v___x_4553_; uint64_t v___x_4554_; lean_object* v___x_4555_; uint32_t v___x_4556_; lean_object* v___x_4557_; 
lean_inc_n(v_value_4549_, 2);
lean_dec_ref_known(v_d_4530_, 2);
v___x_4553_ = 206;
v___x_4554_ = 0ULL;
v___x_4555_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4555_, 0, v_value_4549_);
lean_ctor_set(v___x_4555_, 1, v___x_4551_);
v___x_4556_ = lasm_js_value_handle(v_value_4549_);
lean_dec(v_value_4549_);
v___x_4557_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4553_, v___x_4554_, v___x_4555_, v___x_4556_);
if (lean_obj_tag(v___x_4557_) == 0)
{
lean_object* v_a_4558_; uint8_t v___x_4559_; 
v_a_4558_ = lean_ctor_get(v___x_4557_, 0);
lean_inc(v_a_4558_);
lean_dec_ref_known(v___x_4557_, 1);
v___x_4559_ = lean_string_validate_utf8(v_a_4558_);
if (v___x_4559_ == 0)
{
lean_object* v___x_4560_; lean_object* v___x_4561_; 
lean_dec(v_a_4558_);
v___x_4560_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_4561_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4560_);
v_received_4533_ = v___x_4561_;
goto v___jp_4532_;
}
else
{
lean_object* v___x_4562_; 
v___x_4562_ = lean_string_from_utf8_unchecked(v_a_4558_);
v_received_4533_ = v___x_4562_;
goto v___jp_4532_;
}
}
else
{
lean_object* v___x_4563_; 
lean_dec_ref_known(v___x_4557_, 1);
v___x_4563_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_4533_ = v___x_4563_;
goto v___jp_4532_;
}
}
}
else
{
goto v___jp_4545_;
}
}
v___jp_4532_:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; 
v___x_4534_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4535_ = lean_string_append(v___x_4534_, v_context_4529_);
v___x_4536_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4537_ = lean_string_append(v___x_4535_, v___x_4536_);
v___x_4538_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStream___closed__0));
v___x_4539_ = lean_string_append(v___x_4537_, v___x_4538_);
v___x_4540_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4541_ = lean_string_append(v___x_4539_, v___x_4540_);
v___x_4542_ = lean_string_append(v___x_4541_, v_received_4533_);
lean_dec_ref(v_received_4533_);
v___x_4543_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4543_, 0, v___x_4542_);
v___x_4544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4544_, 0, v___x_4543_);
return v___x_4544_;
}
v___jp_4545_:
{
lean_object* v___x_4546_; 
v___x_4546_ = l_Lasm_JS_Data_describe(v_d_4530_);
v_received_4533_ = v___x_4546_;
goto v___jp_4532_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0___boxed(lean_object* v_context_4564_, lean_object* v_d_4565_, lean_object* v_a_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v_context_4564_, v_d_4565_);
lean_dec_ref(v_context_4564_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(lean_object* v_b_4568_, lean_object* v_args_4569_, uint8_t v_await_4570_){
_start:
{
uint64_t v___y_4573_; uint64_t v___y_4574_; uint64_t v___x_4609_; uint64_t v___y_4611_; 
v___x_4609_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4570_ == 0)
{
uint64_t v___x_4616_; 
v___x_4616_ = 0ULL;
v___y_4611_ = v___x_4616_;
goto v___jp_4610_;
}
else
{
uint64_t v___x_4617_; 
v___x_4617_ = 2ULL;
v___y_4611_ = v___x_4617_;
goto v___jp_4610_;
}
v___jp_4572_:
{
uint64_t v_flags_4575_; uint32_t v___x_4576_; lean_object* v___x_4577_; uint32_t v___x_4578_; lean_object* v___x_4579_; 
v_flags_4575_ = lean_uint64_lor(v___y_4573_, v___y_4574_);
v___x_4576_ = 214;
v___x_4577_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4568_, v_args_4569_);
v___x_4578_ = 0;
v___x_4579_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4576_, v_flags_4575_, v___x_4577_, v___x_4578_);
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_object* v_a_4580_; lean_object* v___x_4581_; 
v_a_4580_ = lean_ctor_get(v___x_4579_, 0);
lean_inc(v_a_4580_);
lean_dec_ref_known(v___x_4579_, 1);
v___x_4581_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4580_);
lean_dec(v_a_4580_);
if (lean_obj_tag(v___x_4581_) == 0)
{
lean_object* v_a_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
v_a_4582_ = lean_ctor_get(v___x_4581_, 0);
lean_inc(v_a_4582_);
lean_dec_ref_known(v___x_4581_, 1);
v___x_4583_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4568_);
v___x_4584_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v___x_4583_, v_a_4582_);
lean_dec_ref(v___x_4583_);
return v___x_4584_;
}
else
{
lean_object* v_a_4585_; lean_object* v___x_4587_; uint8_t v_isShared_4588_; uint8_t v_isSharedCheck_4592_; 
v_a_4585_ = lean_ctor_get(v___x_4581_, 0);
v_isSharedCheck_4592_ = !lean_is_exclusive(v___x_4581_);
if (v_isSharedCheck_4592_ == 0)
{
v___x_4587_ = v___x_4581_;
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
else
{
lean_inc(v_a_4585_);
lean_dec(v___x_4581_);
v___x_4587_ = lean_box(0);
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
v_resetjp_4586_:
{
lean_object* v___x_4590_; 
if (v_isShared_4588_ == 0)
{
v___x_4590_ = v___x_4587_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4591_; 
v_reuseFailAlloc_4591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4591_, 0, v_a_4585_);
v___x_4590_ = v_reuseFailAlloc_4591_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
return v___x_4590_;
}
}
}
}
else
{
lean_object* v_a_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4608_; 
v_a_4593_ = lean_ctor_get(v___x_4579_, 0);
v_isSharedCheck_4608_ = !lean_is_exclusive(v___x_4579_);
if (v_isSharedCheck_4608_ == 0)
{
v___x_4595_ = v___x_4579_;
v_isShared_4596_ = v_isSharedCheck_4608_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_a_4593_);
lean_dec(v___x_4579_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4608_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4606_; 
v___x_4597_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4598_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4568_);
v___x_4599_ = lean_string_append(v___x_4597_, v___x_4598_);
lean_dec_ref(v___x_4598_);
v___x_4600_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4601_ = lean_string_append(v___x_4599_, v___x_4600_);
v___x_4602_ = lean_io_error_to_string(v_a_4593_);
v___x_4603_ = lean_string_append(v___x_4601_, v___x_4602_);
lean_dec_ref(v___x_4602_);
v___x_4604_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4604_, 0, v___x_4603_);
if (v_isShared_4596_ == 0)
{
lean_ctor_set(v___x_4595_, 0, v___x_4604_);
v___x_4606_ = v___x_4595_;
goto v_reusejp_4605_;
}
else
{
lean_object* v_reuseFailAlloc_4607_; 
v_reuseFailAlloc_4607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4607_, 0, v___x_4604_);
v___x_4606_ = v_reuseFailAlloc_4607_;
goto v_reusejp_4605_;
}
v_reusejp_4605_:
{
return v___x_4606_;
}
}
}
}
v___jp_4610_:
{
uint8_t v_construct_4612_; uint64_t v___x_4613_; 
v_construct_4612_ = lean_ctor_get_uint8(v_b_4568_, sizeof(void*)*4);
v___x_4613_ = lean_uint64_lor(v___x_4609_, v___y_4611_);
if (v_construct_4612_ == 0)
{
uint64_t v___x_4614_; 
v___x_4614_ = 0ULL;
v___y_4573_ = v___x_4613_;
v___y_4574_ = v___x_4614_;
goto v___jp_4572_;
}
else
{
uint64_t v___x_4615_; 
v___x_4615_ = 4ULL;
v___y_4573_ = v___x_4613_;
v___y_4574_ = v___x_4615_;
goto v___jp_4572_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0___boxed(lean_object* v_b_4618_, lean_object* v_args_4619_, lean_object* v_await_4620_, lean_object* v_a_4621_){
_start:
{
uint8_t v_await_boxed_4622_; lean_object* v_res_4623_; 
v_await_boxed_4622_ = lean_unbox(v_await_4620_);
v_res_4623_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v_b_4618_, v_args_4619_, v_await_boxed_4622_);
lean_dec_ref(v_b_4618_);
return v_res_4623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new(lean_object* v_underlyingSink_4632_, lean_object* v_strategy_4633_){
_start:
{
lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; uint8_t v___x_4642_; lean_object* v___x_4643_; 
v___x_4635_ = lean_unsigned_to_nat(2u);
v___x_4636_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_new___closed__2));
v___x_4637_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_4633_);
v___x_4638_ = lean_mk_empty_array_with_capacity(v___x_4635_);
v___x_4639_ = lean_array_push(v___x_4638_, v_underlyingSink_4632_);
v___x_4640_ = lean_array_push(v___x_4639_, v___x_4637_);
v___x_4641_ = l_Lasm_JS_Web_Support_args(v___x_4640_);
v___x_4642_ = 0;
v___x_4643_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v___x_4636_, v___x_4641_, v___x_4642_);
return v___x_4643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new___boxed(lean_object* v_underlyingSink_4644_, lean_object* v_strategy_4645_, lean_object* v_a_4646_){
_start:
{
lean_object* v_res_4647_; 
v_res_4647_ = l_Lasm_JS_Web_WritableStream_new(v_underlyingSink_4644_, v_strategy_4645_);
return v_res_4647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked(lean_object* v_self_4648_){
_start:
{
lean_object* v___x_4650_; lean_object* v___x_4651_; 
v___x_4650_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_4651_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4648_, v___x_4650_);
return v___x_4651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked___boxed(lean_object* v_self_4652_, lean_object* v_a_4653_){
_start:
{
lean_object* v_res_4654_; 
v_res_4654_ = l_Lasm_JS_Web_WritableStream_locked(v_self_4652_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort(lean_object* v_self_4655_, lean_object* v_reason_4656_){
_start:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; 
v___x_4658_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_4659_ = lean_unsigned_to_nat(1u);
v___x_4660_ = lean_mk_empty_array_with_capacity(v___x_4659_);
v___x_4661_ = lean_array_push(v___x_4660_, v_reason_4656_);
v___x_4662_ = l_Lasm_JS_Web_Support_args(v___x_4661_);
v___x_4663_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4655_, v___x_4658_, v___x_4662_);
return v___x_4663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort___boxed(lean_object* v_self_4664_, lean_object* v_reason_4665_, lean_object* v_a_4666_){
_start:
{
lean_object* v_res_4667_; 
v_res_4667_ = l_Lasm_JS_Web_WritableStream_abort(v_self_4664_, v_reason_4665_);
return v_res_4667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close(lean_object* v_self_4668_){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4670_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4671_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4672_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4668_, v___x_4670_, v___x_4671_);
return v___x_4672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close___boxed(lean_object* v_self_4673_, lean_object* v_a_4674_){
_start:
{
lean_object* v_res_4675_; 
v_res_4675_ = l_Lasm_JS_Web_WritableStream_close(v_self_4673_);
return v_res_4675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter(lean_object* v_self_4677_){
_start:
{
lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; 
v___x_4679_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_getWriter___closed__0));
v___x_4680_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4681_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_4677_, v___x_4679_, v___x_4680_);
if (lean_obj_tag(v___x_4681_) == 0)
{
lean_object* v_a_4682_; lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4689_; 
v_a_4682_ = lean_ctor_get(v___x_4681_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4681_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4684_ = v___x_4681_;
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
else
{
lean_inc(v_a_4682_);
lean_dec(v___x_4681_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v___x_4687_; 
if (v_isShared_4685_ == 0)
{
v___x_4687_ = v___x_4684_;
goto v_reusejp_4686_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v_a_4682_);
v___x_4687_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4686_;
}
v_reusejp_4686_:
{
return v___x_4687_;
}
}
}
else
{
lean_object* v_a_4690_; lean_object* v___x_4692_; uint8_t v_isShared_4693_; uint8_t v_isSharedCheck_4697_; 
v_a_4690_ = lean_ctor_get(v___x_4681_, 0);
v_isSharedCheck_4697_ = !lean_is_exclusive(v___x_4681_);
if (v_isSharedCheck_4697_ == 0)
{
v___x_4692_ = v___x_4681_;
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
else
{
lean_inc(v_a_4690_);
lean_dec(v___x_4681_);
v___x_4692_ = lean_box(0);
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
v_resetjp_4691_:
{
lean_object* v___x_4695_; 
if (v_isShared_4693_ == 0)
{
v___x_4695_ = v___x_4692_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v_a_4690_);
v___x_4695_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
return v___x_4695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter___boxed(lean_object* v_self_4698_, lean_object* v_a_4699_){
_start:
{
lean_object* v_res_4700_; 
v_res_4700_ = l_Lasm_JS_Web_WritableStream_getWriter(v_self_4698_);
return v_res_4700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(lean_object* v_context_4701_, lean_object* v_d_4702_){
_start:
{
lean_object* v_received_4705_; 
if (lean_obj_tag(v_d_4702_) == 9)
{
lean_object* v_value_4719_; lean_object* v___x_4720_; 
v_value_4719_ = lean_ctor_get(v_d_4702_, 0);
lean_inc(v_value_4719_);
lean_dec_ref_known(v_d_4702_, 2);
v___x_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4720_, 0, v_value_4719_);
return v___x_4720_;
}
else
{
if (lean_obj_tag(v_d_4702_) == 9)
{
lean_object* v_value_4721_; lean_object* v_description_4722_; lean_object* v___x_4723_; uint8_t v___x_4724_; 
v_value_4721_ = lean_ctor_get(v_d_4702_, 0);
v_description_4722_ = lean_ctor_get(v_d_4702_, 1);
v___x_4723_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4724_ = lean_string_dec_eq(v_description_4722_, v___x_4723_);
if (v___x_4724_ == 0)
{
goto v___jp_4717_;
}
else
{
uint32_t v___x_4725_; uint64_t v___x_4726_; lean_object* v___x_4727_; uint32_t v___x_4728_; lean_object* v___x_4729_; 
lean_inc_n(v_value_4721_, 2);
lean_dec_ref_known(v_d_4702_, 2);
v___x_4725_ = 206;
v___x_4726_ = 0ULL;
v___x_4727_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4727_, 0, v_value_4721_);
lean_ctor_set(v___x_4727_, 1, v___x_4723_);
v___x_4728_ = lasm_js_value_handle(v_value_4721_);
lean_dec(v_value_4721_);
v___x_4729_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4725_, v___x_4726_, v___x_4727_, v___x_4728_);
if (lean_obj_tag(v___x_4729_) == 0)
{
lean_object* v_a_4730_; uint8_t v___x_4731_; 
v_a_4730_ = lean_ctor_get(v___x_4729_, 0);
lean_inc(v_a_4730_);
lean_dec_ref_known(v___x_4729_, 1);
v___x_4731_ = lean_string_validate_utf8(v_a_4730_);
if (v___x_4731_ == 0)
{
lean_object* v___x_4732_; lean_object* v___x_4733_; 
lean_dec(v_a_4730_);
v___x_4732_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_4733_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4732_);
v_received_4705_ = v___x_4733_;
goto v___jp_4704_;
}
else
{
lean_object* v___x_4734_; 
v___x_4734_ = lean_string_from_utf8_unchecked(v_a_4730_);
v_received_4705_ = v___x_4734_;
goto v___jp_4704_;
}
}
else
{
lean_object* v___x_4735_; 
lean_dec_ref_known(v___x_4729_, 1);
v___x_4735_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_4705_ = v___x_4735_;
goto v___jp_4704_;
}
}
}
else
{
goto v___jp_4717_;
}
}
v___jp_4704_:
{
lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; 
v___x_4706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4707_ = lean_string_append(v___x_4706_, v_context_4701_);
v___x_4708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4709_ = lean_string_append(v___x_4707_, v___x_4708_);
v___x_4710_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0));
v___x_4711_ = lean_string_append(v___x_4709_, v___x_4710_);
v___x_4712_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4713_ = lean_string_append(v___x_4711_, v___x_4712_);
v___x_4714_ = lean_string_append(v___x_4713_, v_received_4705_);
lean_dec_ref(v_received_4705_);
v___x_4715_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4715_, 0, v___x_4714_);
v___x_4716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4716_, 0, v___x_4715_);
return v___x_4716_;
}
v___jp_4717_:
{
lean_object* v___x_4718_; 
v___x_4718_ = l_Lasm_JS_Data_describe(v_d_4702_);
v_received_4705_ = v___x_4718_;
goto v___jp_4704_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0___boxed(lean_object* v_context_4736_, lean_object* v_d_4737_, lean_object* v_a_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(v_context_4736_, v_d_4737_);
lean_dec_ref(v_context_4736_);
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(lean_object* v_b_4740_, lean_object* v_args_4741_, uint8_t v_await_4742_){
_start:
{
uint64_t v___y_4745_; uint64_t v___y_4746_; uint64_t v___x_4781_; uint64_t v___y_4783_; 
v___x_4781_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4742_ == 0)
{
uint64_t v___x_4788_; 
v___x_4788_ = 0ULL;
v___y_4783_ = v___x_4788_;
goto v___jp_4782_;
}
else
{
uint64_t v___x_4789_; 
v___x_4789_ = 2ULL;
v___y_4783_ = v___x_4789_;
goto v___jp_4782_;
}
v___jp_4744_:
{
uint64_t v_flags_4747_; uint32_t v___x_4748_; lean_object* v___x_4749_; uint32_t v___x_4750_; lean_object* v___x_4751_; 
v_flags_4747_ = lean_uint64_lor(v___y_4745_, v___y_4746_);
v___x_4748_ = 214;
v___x_4749_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4740_, v_args_4741_);
v___x_4750_ = 0;
v___x_4751_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4748_, v_flags_4747_, v___x_4749_, v___x_4750_);
if (lean_obj_tag(v___x_4751_) == 0)
{
lean_object* v_a_4752_; lean_object* v___x_4753_; 
v_a_4752_ = lean_ctor_get(v___x_4751_, 0);
lean_inc(v_a_4752_);
lean_dec_ref_known(v___x_4751_, 1);
v___x_4753_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4752_);
lean_dec(v_a_4752_);
if (lean_obj_tag(v___x_4753_) == 0)
{
lean_object* v_a_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; 
v_a_4754_ = lean_ctor_get(v___x_4753_, 0);
lean_inc(v_a_4754_);
lean_dec_ref_known(v___x_4753_, 1);
v___x_4755_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4740_);
v___x_4756_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(v___x_4755_, v_a_4754_);
lean_dec_ref(v___x_4755_);
return v___x_4756_;
}
else
{
lean_object* v_a_4757_; lean_object* v___x_4759_; uint8_t v_isShared_4760_; uint8_t v_isSharedCheck_4764_; 
v_a_4757_ = lean_ctor_get(v___x_4753_, 0);
v_isSharedCheck_4764_ = !lean_is_exclusive(v___x_4753_);
if (v_isSharedCheck_4764_ == 0)
{
v___x_4759_ = v___x_4753_;
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
else
{
lean_inc(v_a_4757_);
lean_dec(v___x_4753_);
v___x_4759_ = lean_box(0);
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
v_resetjp_4758_:
{
lean_object* v___x_4762_; 
if (v_isShared_4760_ == 0)
{
v___x_4762_ = v___x_4759_;
goto v_reusejp_4761_;
}
else
{
lean_object* v_reuseFailAlloc_4763_; 
v_reuseFailAlloc_4763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4763_, 0, v_a_4757_);
v___x_4762_ = v_reuseFailAlloc_4763_;
goto v_reusejp_4761_;
}
v_reusejp_4761_:
{
return v___x_4762_;
}
}
}
}
else
{
lean_object* v_a_4765_; lean_object* v___x_4767_; uint8_t v_isShared_4768_; uint8_t v_isSharedCheck_4780_; 
v_a_4765_ = lean_ctor_get(v___x_4751_, 0);
v_isSharedCheck_4780_ = !lean_is_exclusive(v___x_4751_);
if (v_isSharedCheck_4780_ == 0)
{
v___x_4767_ = v___x_4751_;
v_isShared_4768_ = v_isSharedCheck_4780_;
goto v_resetjp_4766_;
}
else
{
lean_inc(v_a_4765_);
lean_dec(v___x_4751_);
v___x_4767_ = lean_box(0);
v_isShared_4768_ = v_isSharedCheck_4780_;
goto v_resetjp_4766_;
}
v_resetjp_4766_:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4778_; 
v___x_4769_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4770_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4740_);
v___x_4771_ = lean_string_append(v___x_4769_, v___x_4770_);
lean_dec_ref(v___x_4770_);
v___x_4772_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4773_ = lean_string_append(v___x_4771_, v___x_4772_);
v___x_4774_ = lean_io_error_to_string(v_a_4765_);
v___x_4775_ = lean_string_append(v___x_4773_, v___x_4774_);
lean_dec_ref(v___x_4774_);
v___x_4776_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4776_, 0, v___x_4775_);
if (v_isShared_4768_ == 0)
{
lean_ctor_set(v___x_4767_, 0, v___x_4776_);
v___x_4778_ = v___x_4767_;
goto v_reusejp_4777_;
}
else
{
lean_object* v_reuseFailAlloc_4779_; 
v_reuseFailAlloc_4779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4779_, 0, v___x_4776_);
v___x_4778_ = v_reuseFailAlloc_4779_;
goto v_reusejp_4777_;
}
v_reusejp_4777_:
{
return v___x_4778_;
}
}
}
}
v___jp_4782_:
{
uint8_t v_construct_4784_; uint64_t v___x_4785_; 
v_construct_4784_ = lean_ctor_get_uint8(v_b_4740_, sizeof(void*)*4);
v___x_4785_ = lean_uint64_lor(v___x_4781_, v___y_4783_);
if (v_construct_4784_ == 0)
{
uint64_t v___x_4786_; 
v___x_4786_ = 0ULL;
v___y_4745_ = v___x_4785_;
v___y_4746_ = v___x_4786_;
goto v___jp_4744_;
}
else
{
uint64_t v___x_4787_; 
v___x_4787_ = 4ULL;
v___y_4745_ = v___x_4785_;
v___y_4746_ = v___x_4787_;
goto v___jp_4744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0___boxed(lean_object* v_b_4790_, lean_object* v_args_4791_, lean_object* v_await_4792_, lean_object* v_a_4793_){
_start:
{
uint8_t v_await_boxed_4794_; lean_object* v_res_4795_; 
v_await_boxed_4794_ = lean_unbox(v_await_4792_);
v_res_4795_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v_b_4790_, v_args_4791_, v_await_boxed_4794_);
lean_dec_ref(v_b_4790_);
return v_res_4795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new(lean_object* v_stream_4804_){
_start:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; uint8_t v___x_4813_; lean_object* v___x_4814_; 
v___x_4806_ = lean_unsigned_to_nat(1u);
v___x_4807_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__2));
v___x_4808_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4809_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4809_, 0, v_stream_4804_);
lean_ctor_set(v___x_4809_, 1, v___x_4808_);
v___x_4810_ = lean_mk_empty_array_with_capacity(v___x_4806_);
v___x_4811_ = lean_array_push(v___x_4810_, v___x_4809_);
v___x_4812_ = l_Lasm_JS_Web_Support_args(v___x_4811_);
v___x_4813_ = 0;
v___x_4814_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v___x_4807_, v___x_4812_, v___x_4813_);
return v___x_4814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___boxed(lean_object* v_stream_4815_, lean_object* v_a_4816_){
_start:
{
lean_object* v_res_4817_; 
v_res_4817_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_new(v_stream_4815_);
return v_res_4817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(lean_object* v_self_4818_){
_start:
{
lean_object* v___f_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; uint8_t v___x_4823_; lean_object* v_val_4825_; lean_object* v___x_4828_; 
v___f_4820_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4821_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_4822_ = lean_unsigned_to_nat(0u);
v___x_4823_ = 0;
v___x_4828_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_4818_, v___x_4821_);
if (lean_obj_tag(v___x_4828_) == 0)
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
v_a_4829_ = lean_ctor_get(v___x_4828_, 0);
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4828_);
if (v_isSharedCheck_4836_ == 0)
{
v___x_4831_ = v___x_4828_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4828_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
lean_ctor_set_tag(v___x_4831_, 1);
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v_a_4829_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
v_val_4825_ = v___x_4834_;
goto v___jp_4824_;
}
}
}
else
{
lean_object* v_a_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4844_; 
v_a_4837_ = lean_ctor_get(v___x_4828_, 0);
v_isSharedCheck_4844_ = !lean_is_exclusive(v___x_4828_);
if (v_isSharedCheck_4844_ == 0)
{
v___x_4839_ = v___x_4828_;
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_a_4837_);
lean_dec(v___x_4828_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
lean_object* v___x_4842_; 
if (v_isShared_4840_ == 0)
{
lean_ctor_set_tag(v___x_4839_, 0);
v___x_4842_ = v___x_4839_;
goto v_reusejp_4841_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v_a_4837_);
v___x_4842_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4841_;
}
v_reusejp_4841_:
{
v_val_4825_ = v___x_4842_;
goto v___jp_4824_;
}
}
}
v___jp_4824_:
{
lean_object* v___x_4826_; lean_object* v___x_4827_; 
v___x_4826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4826_, 0, v_val_4825_);
v___x_4827_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4822_, v___x_4823_, v___x_4826_, v___f_4820_);
return v___x_4827_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed___boxed(lean_object* v_self_4845_, lean_object* v_a_4846_){
_start:
{
lean_object* v_res_4847_; 
v_res_4847_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(v_self_4845_);
return v_res_4847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(lean_object* v_self_4848_){
_start:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; 
v___x_4850_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4851_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4848_, v___x_4850_);
return v___x_4851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize___boxed(lean_object* v_self_4852_, lean_object* v_a_4853_){
_start:
{
lean_object* v_res_4854_; 
v_res_4854_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(v_self_4852_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(lean_object* v_self_4856_){
_start:
{
lean_object* v___f_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; uint8_t v___x_4861_; lean_object* v_val_4863_; lean_object* v___x_4866_; 
v___f_4858_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4859_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___closed__0));
v___x_4860_ = lean_unsigned_to_nat(0u);
v___x_4861_ = 0;
v___x_4866_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_4856_, v___x_4859_);
if (lean_obj_tag(v___x_4866_) == 0)
{
lean_object* v_a_4867_; lean_object* v___x_4869_; uint8_t v_isShared_4870_; uint8_t v_isSharedCheck_4874_; 
v_a_4867_ = lean_ctor_get(v___x_4866_, 0);
v_isSharedCheck_4874_ = !lean_is_exclusive(v___x_4866_);
if (v_isSharedCheck_4874_ == 0)
{
v___x_4869_ = v___x_4866_;
v_isShared_4870_ = v_isSharedCheck_4874_;
goto v_resetjp_4868_;
}
else
{
lean_inc(v_a_4867_);
lean_dec(v___x_4866_);
v___x_4869_ = lean_box(0);
v_isShared_4870_ = v_isSharedCheck_4874_;
goto v_resetjp_4868_;
}
v_resetjp_4868_:
{
lean_object* v___x_4872_; 
if (v_isShared_4870_ == 0)
{
lean_ctor_set_tag(v___x_4869_, 1);
v___x_4872_ = v___x_4869_;
goto v_reusejp_4871_;
}
else
{
lean_object* v_reuseFailAlloc_4873_; 
v_reuseFailAlloc_4873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4873_, 0, v_a_4867_);
v___x_4872_ = v_reuseFailAlloc_4873_;
goto v_reusejp_4871_;
}
v_reusejp_4871_:
{
v_val_4863_ = v___x_4872_;
goto v___jp_4862_;
}
}
}
else
{
lean_object* v_a_4875_; lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4882_; 
v_a_4875_ = lean_ctor_get(v___x_4866_, 0);
v_isSharedCheck_4882_ = !lean_is_exclusive(v___x_4866_);
if (v_isSharedCheck_4882_ == 0)
{
v___x_4877_ = v___x_4866_;
v_isShared_4878_ = v_isSharedCheck_4882_;
goto v_resetjp_4876_;
}
else
{
lean_inc(v_a_4875_);
lean_dec(v___x_4866_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4882_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
lean_object* v___x_4880_; 
if (v_isShared_4878_ == 0)
{
lean_ctor_set_tag(v___x_4877_, 0);
v___x_4880_ = v___x_4877_;
goto v_reusejp_4879_;
}
else
{
lean_object* v_reuseFailAlloc_4881_; 
v_reuseFailAlloc_4881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4881_, 0, v_a_4875_);
v___x_4880_ = v_reuseFailAlloc_4881_;
goto v_reusejp_4879_;
}
v_reusejp_4879_:
{
v_val_4863_ = v___x_4880_;
goto v___jp_4862_;
}
}
}
v___jp_4862_:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; 
v___x_4864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4864_, 0, v_val_4863_);
v___x_4865_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4860_, v___x_4861_, v___x_4864_, v___f_4858_);
return v___x_4865_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___boxed(lean_object* v_self_4883_, lean_object* v_a_4884_){
_start:
{
lean_object* v_res_4885_; 
v_res_4885_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(v_self_4883_);
return v_res_4885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(lean_object* v_self_4886_, lean_object* v_reason_4887_){
_start:
{
lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; 
v___x_4889_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_4890_ = lean_unsigned_to_nat(1u);
v___x_4891_ = lean_mk_empty_array_with_capacity(v___x_4890_);
v___x_4892_ = lean_array_push(v___x_4891_, v_reason_4887_);
v___x_4893_ = l_Lasm_JS_Web_Support_args(v___x_4892_);
v___x_4894_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4886_, v___x_4889_, v___x_4893_);
return v___x_4894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort___boxed(lean_object* v_self_4895_, lean_object* v_reason_4896_, lean_object* v_a_4897_){
_start:
{
lean_object* v_res_4898_; 
v_res_4898_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(v_self_4895_, v_reason_4896_);
return v_res_4898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close(lean_object* v_self_4899_){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; 
v___x_4901_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4902_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4903_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4899_, v___x_4901_, v___x_4902_);
return v___x_4903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close___boxed(lean_object* v_self_4904_, lean_object* v_a_4905_){
_start:
{
lean_object* v_res_4906_; 
v_res_4906_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_close(v_self_4904_);
return v_res_4906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(lean_object* v_self_4907_){
_start:
{
lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v___x_4909_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_4910_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4911_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4907_, v___x_4909_, v___x_4910_);
return v___x_4911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock___boxed(lean_object* v_self_4912_, lean_object* v_a_4913_){
_start:
{
lean_object* v_res_4914_; 
v_res_4914_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(v_self_4912_);
return v_res_4914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write(lean_object* v_self_4915_, lean_object* v_chunk_4916_){
_start:
{
lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; 
v___x_4918_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0));
v___x_4919_ = lean_unsigned_to_nat(1u);
v___x_4920_ = lean_mk_empty_array_with_capacity(v___x_4919_);
v___x_4921_ = lean_array_push(v___x_4920_, v_chunk_4916_);
v___x_4922_ = l_Lasm_JS_Web_Support_args(v___x_4921_);
v___x_4923_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4915_, v___x_4918_, v___x_4922_);
return v___x_4923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write___boxed(lean_object* v_self_4924_, lean_object* v_chunk_4925_, lean_object* v_a_4926_){
_start:
{
lean_object* v_res_4927_; 
v_res_4927_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_write(v_self_4924_, v_chunk_4925_);
return v_res_4927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal(lean_object* v_self_4928_){
_start:
{
lean_object* v___x_4930_; lean_object* v___x_4931_; 
v___x_4930_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_4931_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_4928_, v___x_4930_);
if (lean_obj_tag(v___x_4931_) == 0)
{
lean_object* v_a_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4939_; 
v_a_4932_ = lean_ctor_get(v___x_4931_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4931_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4934_ = v___x_4931_;
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_a_4932_);
lean_dec(v___x_4931_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4937_; 
if (v_isShared_4935_ == 0)
{
v___x_4937_ = v___x_4934_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4938_, 0, v_a_4932_);
v___x_4937_ = v_reuseFailAlloc_4938_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
return v___x_4937_;
}
}
}
else
{
lean_object* v_a_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4947_; 
v_a_4940_ = lean_ctor_get(v___x_4931_, 0);
v_isSharedCheck_4947_ = !lean_is_exclusive(v___x_4931_);
if (v_isSharedCheck_4947_ == 0)
{
v___x_4942_ = v___x_4931_;
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_a_4940_);
lean_dec(v___x_4931_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4945_; 
if (v_isShared_4943_ == 0)
{
v___x_4945_ = v___x_4942_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v_a_4940_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
return v___x_4945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal___boxed(lean_object* v_self_4948_, lean_object* v_a_4949_){
_start:
{
lean_object* v_res_4950_; 
v_res_4950_ = l_Lasm_JS_Web_WritableStreamDefaultController_signal(v_self_4948_);
return v_res_4950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error(lean_object* v_self_4951_, lean_object* v_e_4952_){
_start:
{
lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; 
v___x_4954_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4955_ = lean_unsigned_to_nat(1u);
v___x_4956_ = lean_mk_empty_array_with_capacity(v___x_4955_);
v___x_4957_ = lean_array_push(v___x_4956_, v_e_4952_);
v___x_4958_ = l_Lasm_JS_Web_Support_args(v___x_4957_);
v___x_4959_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4951_, v___x_4954_, v___x_4958_);
return v___x_4959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error___boxed(lean_object* v_self_4960_, lean_object* v_e_4961_, lean_object* v_a_4962_){
_start:
{
lean_object* v_res_4963_; 
v_res_4963_ = l_Lasm_JS_Web_WritableStreamDefaultController_error(v_self_4960_, v_e_4961_);
return v_res_4963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(lean_object* v_context_4964_, lean_object* v_d_4965_){
_start:
{
lean_object* v_received_4968_; 
if (lean_obj_tag(v_d_4965_) == 9)
{
lean_object* v_value_4982_; lean_object* v___x_4983_; 
v_value_4982_ = lean_ctor_get(v_d_4965_, 0);
lean_inc(v_value_4982_);
lean_dec_ref_known(v_d_4965_, 2);
v___x_4983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4983_, 0, v_value_4982_);
return v___x_4983_;
}
else
{
if (lean_obj_tag(v_d_4965_) == 9)
{
lean_object* v_value_4984_; lean_object* v_description_4985_; lean_object* v___x_4986_; uint8_t v___x_4987_; 
v_value_4984_ = lean_ctor_get(v_d_4965_, 0);
v_description_4985_ = lean_ctor_get(v_d_4965_, 1);
v___x_4986_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4987_ = lean_string_dec_eq(v_description_4985_, v___x_4986_);
if (v___x_4987_ == 0)
{
goto v___jp_4980_;
}
else
{
uint32_t v___x_4988_; uint64_t v___x_4989_; lean_object* v___x_4990_; uint32_t v___x_4991_; lean_object* v___x_4992_; 
lean_inc_n(v_value_4984_, 2);
lean_dec_ref_known(v_d_4965_, 2);
v___x_4988_ = 206;
v___x_4989_ = 0ULL;
v___x_4990_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4990_, 0, v_value_4984_);
lean_ctor_set(v___x_4990_, 1, v___x_4986_);
v___x_4991_ = lasm_js_value_handle(v_value_4984_);
lean_dec(v_value_4984_);
v___x_4992_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4988_, v___x_4989_, v___x_4990_, v___x_4991_);
if (lean_obj_tag(v___x_4992_) == 0)
{
lean_object* v_a_4993_; uint8_t v___x_4994_; 
v_a_4993_ = lean_ctor_get(v___x_4992_, 0);
lean_inc(v_a_4993_);
lean_dec_ref_known(v___x_4992_, 1);
v___x_4994_ = lean_string_validate_utf8(v_a_4993_);
if (v___x_4994_ == 0)
{
lean_object* v___x_4995_; lean_object* v___x_4996_; 
lean_dec(v_a_4993_);
v___x_4995_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_4996_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4995_);
v_received_4968_ = v___x_4996_;
goto v___jp_4967_;
}
else
{
lean_object* v___x_4997_; 
v___x_4997_ = lean_string_from_utf8_unchecked(v_a_4993_);
v_received_4968_ = v___x_4997_;
goto v___jp_4967_;
}
}
else
{
lean_object* v___x_4998_; 
lean_dec_ref_known(v___x_4992_, 1);
v___x_4998_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_4968_ = v___x_4998_;
goto v___jp_4967_;
}
}
}
else
{
goto v___jp_4980_;
}
}
v___jp_4967_:
{
lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4969_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4970_ = lean_string_append(v___x_4969_, v_context_4964_);
v___x_4971_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4972_ = lean_string_append(v___x_4970_, v___x_4971_);
v___x_4973_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTransformStream___closed__0));
v___x_4974_ = lean_string_append(v___x_4972_, v___x_4973_);
v___x_4975_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4976_ = lean_string_append(v___x_4974_, v___x_4975_);
v___x_4977_ = lean_string_append(v___x_4976_, v_received_4968_);
lean_dec_ref(v_received_4968_);
v___x_4978_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4978_, 0, v___x_4977_);
v___x_4979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4979_, 0, v___x_4978_);
return v___x_4979_;
}
v___jp_4980_:
{
lean_object* v___x_4981_; 
v___x_4981_ = l_Lasm_JS_Data_describe(v_d_4965_);
v_received_4968_ = v___x_4981_;
goto v___jp_4967_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0___boxed(lean_object* v_context_4999_, lean_object* v_d_5000_, lean_object* v_a_5001_){
_start:
{
lean_object* v_res_5002_; 
v_res_5002_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v_context_4999_, v_d_5000_);
lean_dec_ref(v_context_4999_);
return v_res_5002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(lean_object* v_b_5003_, lean_object* v_args_5004_, uint8_t v_await_5005_){
_start:
{
uint64_t v___y_5008_; uint64_t v___y_5009_; uint64_t v___x_5044_; uint64_t v___y_5046_; 
v___x_5044_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5005_ == 0)
{
uint64_t v___x_5051_; 
v___x_5051_ = 0ULL;
v___y_5046_ = v___x_5051_;
goto v___jp_5045_;
}
else
{
uint64_t v___x_5052_; 
v___x_5052_ = 2ULL;
v___y_5046_ = v___x_5052_;
goto v___jp_5045_;
}
v___jp_5007_:
{
uint64_t v_flags_5010_; uint32_t v___x_5011_; lean_object* v___x_5012_; uint32_t v___x_5013_; lean_object* v___x_5014_; 
v_flags_5010_ = lean_uint64_lor(v___y_5008_, v___y_5009_);
v___x_5011_ = 214;
v___x_5012_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5003_, v_args_5004_);
v___x_5013_ = 0;
v___x_5014_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5011_, v_flags_5010_, v___x_5012_, v___x_5013_);
if (lean_obj_tag(v___x_5014_) == 0)
{
lean_object* v_a_5015_; lean_object* v___x_5016_; 
v_a_5015_ = lean_ctor_get(v___x_5014_, 0);
lean_inc(v_a_5015_);
lean_dec_ref_known(v___x_5014_, 1);
v___x_5016_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5015_);
lean_dec(v_a_5015_);
if (lean_obj_tag(v___x_5016_) == 0)
{
lean_object* v_a_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; 
v_a_5017_ = lean_ctor_get(v___x_5016_, 0);
lean_inc(v_a_5017_);
lean_dec_ref_known(v___x_5016_, 1);
v___x_5018_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5003_);
v___x_5019_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v___x_5018_, v_a_5017_);
lean_dec_ref(v___x_5018_);
return v___x_5019_;
}
else
{
lean_object* v_a_5020_; lean_object* v___x_5022_; uint8_t v_isShared_5023_; uint8_t v_isSharedCheck_5027_; 
v_a_5020_ = lean_ctor_get(v___x_5016_, 0);
v_isSharedCheck_5027_ = !lean_is_exclusive(v___x_5016_);
if (v_isSharedCheck_5027_ == 0)
{
v___x_5022_ = v___x_5016_;
v_isShared_5023_ = v_isSharedCheck_5027_;
goto v_resetjp_5021_;
}
else
{
lean_inc(v_a_5020_);
lean_dec(v___x_5016_);
v___x_5022_ = lean_box(0);
v_isShared_5023_ = v_isSharedCheck_5027_;
goto v_resetjp_5021_;
}
v_resetjp_5021_:
{
lean_object* v___x_5025_; 
if (v_isShared_5023_ == 0)
{
v___x_5025_ = v___x_5022_;
goto v_reusejp_5024_;
}
else
{
lean_object* v_reuseFailAlloc_5026_; 
v_reuseFailAlloc_5026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5026_, 0, v_a_5020_);
v___x_5025_ = v_reuseFailAlloc_5026_;
goto v_reusejp_5024_;
}
v_reusejp_5024_:
{
return v___x_5025_;
}
}
}
}
else
{
lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5043_; 
v_a_5028_ = lean_ctor_get(v___x_5014_, 0);
v_isSharedCheck_5043_ = !lean_is_exclusive(v___x_5014_);
if (v_isSharedCheck_5043_ == 0)
{
v___x_5030_ = v___x_5014_;
v_isShared_5031_ = v_isSharedCheck_5043_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v___x_5014_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5043_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5041_; 
v___x_5032_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5033_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5003_);
v___x_5034_ = lean_string_append(v___x_5032_, v___x_5033_);
lean_dec_ref(v___x_5033_);
v___x_5035_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5036_ = lean_string_append(v___x_5034_, v___x_5035_);
v___x_5037_ = lean_io_error_to_string(v_a_5028_);
v___x_5038_ = lean_string_append(v___x_5036_, v___x_5037_);
lean_dec_ref(v___x_5037_);
v___x_5039_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5039_, 0, v___x_5038_);
if (v_isShared_5031_ == 0)
{
lean_ctor_set(v___x_5030_, 0, v___x_5039_);
v___x_5041_ = v___x_5030_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v___x_5039_);
v___x_5041_ = v_reuseFailAlloc_5042_;
goto v_reusejp_5040_;
}
v_reusejp_5040_:
{
return v___x_5041_;
}
}
}
}
v___jp_5045_:
{
uint8_t v_construct_5047_; uint64_t v___x_5048_; 
v_construct_5047_ = lean_ctor_get_uint8(v_b_5003_, sizeof(void*)*4);
v___x_5048_ = lean_uint64_lor(v___x_5044_, v___y_5046_);
if (v_construct_5047_ == 0)
{
uint64_t v___x_5049_; 
v___x_5049_ = 0ULL;
v___y_5008_ = v___x_5048_;
v___y_5009_ = v___x_5049_;
goto v___jp_5007_;
}
else
{
uint64_t v___x_5050_; 
v___x_5050_ = 4ULL;
v___y_5008_ = v___x_5048_;
v___y_5009_ = v___x_5050_;
goto v___jp_5007_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0___boxed(lean_object* v_b_5053_, lean_object* v_args_5054_, lean_object* v_await_5055_, lean_object* v_a_5056_){
_start:
{
uint8_t v_await_boxed_5057_; lean_object* v_res_5058_; 
v_await_boxed_5057_ = lean_unbox(v_await_5055_);
v_res_5058_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v_b_5053_, v_args_5054_, v_await_boxed_5057_);
lean_dec_ref(v_b_5053_);
return v_res_5058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new(lean_object* v_transformer_5067_, lean_object* v_writableStrategy_5068_, lean_object* v_readableStrategy_5069_){
_start:
{
lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; uint8_t v___x_5080_; lean_object* v___x_5081_; 
v___x_5071_ = lean_unsigned_to_nat(3u);
v___x_5072_ = ((lean_object*)(l_Lasm_JS_Web_TransformStream_new___closed__2));
v___x_5073_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_writableStrategy_5068_);
v___x_5074_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_readableStrategy_5069_);
v___x_5075_ = lean_mk_empty_array_with_capacity(v___x_5071_);
v___x_5076_ = lean_array_push(v___x_5075_, v_transformer_5067_);
v___x_5077_ = lean_array_push(v___x_5076_, v___x_5073_);
v___x_5078_ = lean_array_push(v___x_5077_, v___x_5074_);
v___x_5079_ = l_Lasm_JS_Web_Support_args(v___x_5078_);
v___x_5080_ = 0;
v___x_5081_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v___x_5072_, v___x_5079_, v___x_5080_);
return v___x_5081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new___boxed(lean_object* v_transformer_5082_, lean_object* v_writableStrategy_5083_, lean_object* v_readableStrategy_5084_, lean_object* v_a_5085_){
_start:
{
lean_object* v_res_5086_; 
v_res_5086_ = l_Lasm_JS_Web_TransformStream_new(v_transformer_5082_, v_writableStrategy_5083_, v_readableStrategy_5084_);
return v_res_5086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable(lean_object* v_self_5087_){
_start:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; 
v___x_5089_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_5090_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5087_, v___x_5089_);
if (lean_obj_tag(v___x_5090_) == 0)
{
lean_object* v_a_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5098_; 
v_a_5091_ = lean_ctor_get(v___x_5090_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v___x_5090_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5093_ = v___x_5090_;
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_a_5091_);
lean_dec(v___x_5090_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5096_; 
if (v_isShared_5094_ == 0)
{
v___x_5096_ = v___x_5093_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_a_5091_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
else
{
lean_object* v_a_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5106_; 
v_a_5099_ = lean_ctor_get(v___x_5090_, 0);
v_isSharedCheck_5106_ = !lean_is_exclusive(v___x_5090_);
if (v_isSharedCheck_5106_ == 0)
{
v___x_5101_ = v___x_5090_;
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_a_5099_);
lean_dec(v___x_5090_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___x_5104_; 
if (v_isShared_5102_ == 0)
{
v___x_5104_ = v___x_5101_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v_a_5099_);
v___x_5104_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
return v___x_5104_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable___boxed(lean_object* v_self_5107_, lean_object* v_a_5108_){
_start:
{
lean_object* v_res_5109_; 
v_res_5109_ = l_Lasm_JS_Web_TransformStream_readable(v_self_5107_);
return v_res_5109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable(lean_object* v_self_5110_){
_start:
{
lean_object* v___x_5112_; lean_object* v___x_5113_; 
v___x_5112_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_5113_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5110_, v___x_5112_);
if (lean_obj_tag(v___x_5113_) == 0)
{
lean_object* v_a_5114_; lean_object* v___x_5116_; uint8_t v_isShared_5117_; uint8_t v_isSharedCheck_5121_; 
v_a_5114_ = lean_ctor_get(v___x_5113_, 0);
v_isSharedCheck_5121_ = !lean_is_exclusive(v___x_5113_);
if (v_isSharedCheck_5121_ == 0)
{
v___x_5116_ = v___x_5113_;
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
else
{
lean_inc(v_a_5114_);
lean_dec(v___x_5113_);
v___x_5116_ = lean_box(0);
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
v_resetjp_5115_:
{
lean_object* v___x_5119_; 
if (v_isShared_5117_ == 0)
{
v___x_5119_ = v___x_5116_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5120_; 
v_reuseFailAlloc_5120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5120_, 0, v_a_5114_);
v___x_5119_ = v_reuseFailAlloc_5120_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
return v___x_5119_;
}
}
}
else
{
lean_object* v_a_5122_; lean_object* v___x_5124_; uint8_t v_isShared_5125_; uint8_t v_isSharedCheck_5129_; 
v_a_5122_ = lean_ctor_get(v___x_5113_, 0);
v_isSharedCheck_5129_ = !lean_is_exclusive(v___x_5113_);
if (v_isSharedCheck_5129_ == 0)
{
v___x_5124_ = v___x_5113_;
v_isShared_5125_ = v_isSharedCheck_5129_;
goto v_resetjp_5123_;
}
else
{
lean_inc(v_a_5122_);
lean_dec(v___x_5113_);
v___x_5124_ = lean_box(0);
v_isShared_5125_ = v_isSharedCheck_5129_;
goto v_resetjp_5123_;
}
v_resetjp_5123_:
{
lean_object* v___x_5127_; 
if (v_isShared_5125_ == 0)
{
v___x_5127_ = v___x_5124_;
goto v_reusejp_5126_;
}
else
{
lean_object* v_reuseFailAlloc_5128_; 
v_reuseFailAlloc_5128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5128_, 0, v_a_5122_);
v___x_5127_ = v_reuseFailAlloc_5128_;
goto v_reusejp_5126_;
}
v_reusejp_5126_:
{
return v___x_5127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable___boxed(lean_object* v_self_5130_, lean_object* v_a_5131_){
_start:
{
lean_object* v_res_5132_; 
v_res_5132_ = l_Lasm_JS_Web_TransformStream_writable(v_self_5130_);
return v_res_5132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(lean_object* v_self_5133_){
_start:
{
lean_object* v___x_5135_; lean_object* v___x_5136_; 
v___x_5135_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_5136_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_5133_, v___x_5135_);
return v___x_5136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize___boxed(lean_object* v_self_5137_, lean_object* v_a_5138_){
_start:
{
lean_object* v_res_5139_; 
v_res_5139_ = l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(v_self_5137_);
return v_res_5139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(lean_object* v_self_5140_, lean_object* v_chunk_5141_){
_start:
{
lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; 
v___x_5143_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_5144_ = lean_unsigned_to_nat(1u);
v___x_5145_ = lean_mk_empty_array_with_capacity(v___x_5144_);
v___x_5146_ = lean_array_push(v___x_5145_, v_chunk_5141_);
v___x_5147_ = l_Lasm_JS_Web_Support_args(v___x_5146_);
v___x_5148_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5140_, v___x_5143_, v___x_5147_);
return v___x_5148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue___boxed(lean_object* v_self_5149_, lean_object* v_chunk_5150_, lean_object* v_a_5151_){
_start:
{
lean_object* v_res_5152_; 
v_res_5152_ = l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(v_self_5149_, v_chunk_5150_);
return v_res_5152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error(lean_object* v_self_5153_, lean_object* v_reason_5154_){
_start:
{
lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; 
v___x_5156_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5157_ = lean_unsigned_to_nat(1u);
v___x_5158_ = lean_mk_empty_array_with_capacity(v___x_5157_);
v___x_5159_ = lean_array_push(v___x_5158_, v_reason_5154_);
v___x_5160_ = l_Lasm_JS_Web_Support_args(v___x_5159_);
v___x_5161_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5153_, v___x_5156_, v___x_5160_);
return v___x_5161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error___boxed(lean_object* v_self_5162_, lean_object* v_reason_5163_, lean_object* v_a_5164_){
_start:
{
lean_object* v_res_5165_; 
v_res_5165_ = l_Lasm_JS_Web_TransformStreamDefaultController_error(v_self_5162_, v_reason_5163_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate(lean_object* v_self_5167_){
_start:
{
lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; 
v___x_5169_ = ((lean_object*)(l_Lasm_JS_Web_TransformStreamDefaultController_terminate___closed__0));
v___x_5170_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5171_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5167_, v___x_5169_, v___x_5170_);
return v___x_5171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate___boxed(lean_object* v_self_5172_, lean_object* v_a_5173_){
_start:
{
lean_object* v_res_5174_; 
v_res_5174_ = l_Lasm_JS_Web_TransformStreamDefaultController_terminate(v_self_5172_);
return v_res_5174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5175_, lean_object* v_d_5176_){
_start:
{
lean_object* v_received_5179_; 
if (lean_obj_tag(v_d_5176_) == 9)
{
lean_object* v_value_5193_; lean_object* v___x_5194_; 
v_value_5193_ = lean_ctor_get(v_d_5176_, 0);
lean_inc(v_value_5193_);
lean_dec_ref_known(v_d_5176_, 2);
v___x_5194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5194_, 0, v_value_5193_);
return v___x_5194_;
}
else
{
if (lean_obj_tag(v_d_5176_) == 9)
{
lean_object* v_value_5195_; lean_object* v_description_5196_; lean_object* v___x_5197_; uint8_t v___x_5198_; 
v_value_5195_ = lean_ctor_get(v_d_5176_, 0);
v_description_5196_ = lean_ctor_get(v_d_5176_, 1);
v___x_5197_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5198_ = lean_string_dec_eq(v_description_5196_, v___x_5197_);
if (v___x_5198_ == 0)
{
goto v___jp_5191_;
}
else
{
uint32_t v___x_5199_; uint64_t v___x_5200_; lean_object* v___x_5201_; uint32_t v___x_5202_; lean_object* v___x_5203_; 
lean_inc_n(v_value_5195_, 2);
lean_dec_ref_known(v_d_5176_, 2);
v___x_5199_ = 206;
v___x_5200_ = 0ULL;
v___x_5201_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5201_, 0, v_value_5195_);
lean_ctor_set(v___x_5201_, 1, v___x_5197_);
v___x_5202_ = lasm_js_value_handle(v_value_5195_);
lean_dec(v_value_5195_);
v___x_5203_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5199_, v___x_5200_, v___x_5201_, v___x_5202_);
if (lean_obj_tag(v___x_5203_) == 0)
{
lean_object* v_a_5204_; uint8_t v___x_5205_; 
v_a_5204_ = lean_ctor_get(v___x_5203_, 0);
lean_inc(v_a_5204_);
lean_dec_ref_known(v___x_5203_, 1);
v___x_5205_ = lean_string_validate_utf8(v_a_5204_);
if (v___x_5205_ == 0)
{
lean_object* v___x_5206_; lean_object* v___x_5207_; 
lean_dec(v_a_5204_);
v___x_5206_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_5207_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5206_);
v_received_5179_ = v___x_5207_;
goto v___jp_5178_;
}
else
{
lean_object* v___x_5208_; 
v___x_5208_ = lean_string_from_utf8_unchecked(v_a_5204_);
v_received_5179_ = v___x_5208_;
goto v___jp_5178_;
}
}
else
{
lean_object* v___x_5209_; 
lean_dec_ref_known(v___x_5203_, 1);
v___x_5209_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_5179_ = v___x_5209_;
goto v___jp_5178_;
}
}
}
else
{
goto v___jp_5191_;
}
}
v___jp_5178_:
{
lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; 
v___x_5180_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5181_ = lean_string_append(v___x_5180_, v_context_5175_);
v___x_5182_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5183_ = lean_string_append(v___x_5181_, v___x_5182_);
v___x_5184_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0));
v___x_5185_ = lean_string_append(v___x_5183_, v___x_5184_);
v___x_5186_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5187_ = lean_string_append(v___x_5185_, v___x_5186_);
v___x_5188_ = lean_string_append(v___x_5187_, v_received_5179_);
lean_dec_ref(v_received_5179_);
v___x_5189_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5189_, 0, v___x_5188_);
v___x_5190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5190_, 0, v___x_5189_);
return v___x_5190_;
}
v___jp_5191_:
{
lean_object* v___x_5192_; 
v___x_5192_ = l_Lasm_JS_Data_describe(v_d_5176_);
v_received_5179_ = v___x_5192_;
goto v___jp_5178_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5210_, lean_object* v_d_5211_, lean_object* v_a_5212_){
_start:
{
lean_object* v_res_5213_; 
v_res_5213_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v_context_5210_, v_d_5211_);
lean_dec_ref(v_context_5210_);
return v_res_5213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(lean_object* v_b_5214_, lean_object* v_args_5215_, uint8_t v_await_5216_){
_start:
{
uint64_t v___y_5219_; uint64_t v___y_5220_; uint64_t v___x_5255_; uint64_t v___y_5257_; 
v___x_5255_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5216_ == 0)
{
uint64_t v___x_5262_; 
v___x_5262_ = 0ULL;
v___y_5257_ = v___x_5262_;
goto v___jp_5256_;
}
else
{
uint64_t v___x_5263_; 
v___x_5263_ = 2ULL;
v___y_5257_ = v___x_5263_;
goto v___jp_5256_;
}
v___jp_5218_:
{
uint64_t v_flags_5221_; uint32_t v___x_5222_; lean_object* v___x_5223_; uint32_t v___x_5224_; lean_object* v___x_5225_; 
v_flags_5221_ = lean_uint64_lor(v___y_5219_, v___y_5220_);
v___x_5222_ = 214;
v___x_5223_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5214_, v_args_5215_);
v___x_5224_ = 0;
v___x_5225_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5222_, v_flags_5221_, v___x_5223_, v___x_5224_);
if (lean_obj_tag(v___x_5225_) == 0)
{
lean_object* v_a_5226_; lean_object* v___x_5227_; 
v_a_5226_ = lean_ctor_get(v___x_5225_, 0);
lean_inc(v_a_5226_);
lean_dec_ref_known(v___x_5225_, 1);
v___x_5227_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5226_);
lean_dec(v_a_5226_);
if (lean_obj_tag(v___x_5227_) == 0)
{
lean_object* v_a_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; 
v_a_5228_ = lean_ctor_get(v___x_5227_, 0);
lean_inc(v_a_5228_);
lean_dec_ref_known(v___x_5227_, 1);
v___x_5229_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5214_);
v___x_5230_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v___x_5229_, v_a_5228_);
lean_dec_ref(v___x_5229_);
return v___x_5230_;
}
else
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5238_; 
v_a_5231_ = lean_ctor_get(v___x_5227_, 0);
v_isSharedCheck_5238_ = !lean_is_exclusive(v___x_5227_);
if (v_isSharedCheck_5238_ == 0)
{
v___x_5233_ = v___x_5227_;
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v___x_5227_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_a_5231_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
return v___x_5236_;
}
}
}
}
else
{
lean_object* v_a_5239_; lean_object* v___x_5241_; uint8_t v_isShared_5242_; uint8_t v_isSharedCheck_5254_; 
v_a_5239_ = lean_ctor_get(v___x_5225_, 0);
v_isSharedCheck_5254_ = !lean_is_exclusive(v___x_5225_);
if (v_isSharedCheck_5254_ == 0)
{
v___x_5241_ = v___x_5225_;
v_isShared_5242_ = v_isSharedCheck_5254_;
goto v_resetjp_5240_;
}
else
{
lean_inc(v_a_5239_);
lean_dec(v___x_5225_);
v___x_5241_ = lean_box(0);
v_isShared_5242_ = v_isSharedCheck_5254_;
goto v_resetjp_5240_;
}
v_resetjp_5240_:
{
lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5252_; 
v___x_5243_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5244_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5214_);
v___x_5245_ = lean_string_append(v___x_5243_, v___x_5244_);
lean_dec_ref(v___x_5244_);
v___x_5246_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5247_ = lean_string_append(v___x_5245_, v___x_5246_);
v___x_5248_ = lean_io_error_to_string(v_a_5239_);
v___x_5249_ = lean_string_append(v___x_5247_, v___x_5248_);
lean_dec_ref(v___x_5248_);
v___x_5250_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5249_);
if (v_isShared_5242_ == 0)
{
lean_ctor_set(v___x_5241_, 0, v___x_5250_);
v___x_5252_ = v___x_5241_;
goto v_reusejp_5251_;
}
else
{
lean_object* v_reuseFailAlloc_5253_; 
v_reuseFailAlloc_5253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5253_, 0, v___x_5250_);
v___x_5252_ = v_reuseFailAlloc_5253_;
goto v_reusejp_5251_;
}
v_reusejp_5251_:
{
return v___x_5252_;
}
}
}
}
v___jp_5256_:
{
uint8_t v_construct_5258_; uint64_t v___x_5259_; 
v_construct_5258_ = lean_ctor_get_uint8(v_b_5214_, sizeof(void*)*4);
v___x_5259_ = lean_uint64_lor(v___x_5255_, v___y_5257_);
if (v_construct_5258_ == 0)
{
uint64_t v___x_5260_; 
v___x_5260_ = 0ULL;
v___y_5219_ = v___x_5259_;
v___y_5220_ = v___x_5260_;
goto v___jp_5218_;
}
else
{
uint64_t v___x_5261_; 
v___x_5261_ = 4ULL;
v___y_5219_ = v___x_5259_;
v___y_5220_ = v___x_5261_;
goto v___jp_5218_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5264_, lean_object* v_args_5265_, lean_object* v_await_5266_, lean_object* v_a_5267_){
_start:
{
uint8_t v_await_boxed_5268_; lean_object* v_res_5269_; 
v_await_boxed_5268_ = lean_unbox(v_await_5266_);
v_res_5269_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v_b_5264_, v_args_5265_, v_await_boxed_5268_);
lean_dec_ref(v_b_5264_);
return v_res_5269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(double v_init_5278_){
_start:
{
lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; uint8_t v___x_5290_; lean_object* v___x_5291_; 
v___x_5280_ = lean_unsigned_to_nat(1u);
v___x_5281_ = ((lean_object*)(l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__2));
v___x_5282_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5283_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5283_, 0, v_init_5278_);
v___x_5284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5284_, 0, v___x_5282_);
lean_ctor_set(v___x_5284_, 1, v___x_5283_);
v___x_5285_ = lean_mk_empty_array_with_capacity(v___x_5280_);
lean_inc_ref(v___x_5285_);
v___x_5286_ = lean_array_push(v___x_5285_, v___x_5284_);
v___x_5287_ = l_Lasm_JS_Web_Support_fields(v___x_5286_);
lean_dec_ref(v___x_5286_);
v___x_5288_ = lean_array_push(v___x_5285_, v___x_5287_);
v___x_5289_ = l_Lasm_JS_Web_Support_args(v___x_5288_);
v___x_5290_ = 0;
v___x_5291_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v___x_5281_, v___x_5289_, v___x_5290_);
return v___x_5291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___boxed(lean_object* v_init_5292_, lean_object* v_a_5293_){
_start:
{
double v_init_boxed_5294_; lean_object* v_res_5295_; 
v_init_boxed_5294_ = lean_unbox_float(v_init_5292_);
lean_dec_ref(v_init_5292_);
v_res_5295_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(v_init_boxed_5294_);
return v_res_5295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(lean_object* v_self_5296_){
_start:
{
lean_object* v___x_5298_; lean_object* v___x_5299_; 
v___x_5298_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5299_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5296_, v___x_5298_);
return v___x_5299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5300_, lean_object* v_a_5301_){
_start:
{
lean_object* v_res_5302_; 
v_res_5302_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(v_self_5300_);
return v_res_5302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(lean_object* v_context_5303_, lean_object* v_d_5304_){
_start:
{
lean_object* v_received_5307_; 
if (lean_obj_tag(v_d_5304_) == 9)
{
lean_object* v_value_5321_; lean_object* v___x_5322_; 
v_value_5321_ = lean_ctor_get(v_d_5304_, 0);
lean_inc(v_value_5321_);
lean_dec_ref_known(v_d_5304_, 2);
v___x_5322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5322_, 0, v_value_5321_);
return v___x_5322_;
}
else
{
if (lean_obj_tag(v_d_5304_) == 9)
{
lean_object* v_value_5323_; lean_object* v_description_5324_; lean_object* v___x_5325_; uint8_t v___x_5326_; 
v_value_5323_ = lean_ctor_get(v_d_5304_, 0);
v_description_5324_ = lean_ctor_get(v_d_5304_, 1);
v___x_5325_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5326_ = lean_string_dec_eq(v_description_5324_, v___x_5325_);
if (v___x_5326_ == 0)
{
goto v___jp_5319_;
}
else
{
uint32_t v___x_5327_; uint64_t v___x_5328_; lean_object* v___x_5329_; uint32_t v___x_5330_; lean_object* v___x_5331_; 
lean_inc_n(v_value_5323_, 2);
lean_dec_ref_known(v_d_5304_, 2);
v___x_5327_ = 206;
v___x_5328_ = 0ULL;
v___x_5329_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5329_, 0, v_value_5323_);
lean_ctor_set(v___x_5329_, 1, v___x_5325_);
v___x_5330_ = lasm_js_value_handle(v_value_5323_);
lean_dec(v_value_5323_);
v___x_5331_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5327_, v___x_5328_, v___x_5329_, v___x_5330_);
if (lean_obj_tag(v___x_5331_) == 0)
{
lean_object* v_a_5332_; uint8_t v___x_5333_; 
v_a_5332_ = lean_ctor_get(v___x_5331_, 0);
lean_inc(v_a_5332_);
lean_dec_ref_known(v___x_5331_, 1);
v___x_5333_ = lean_string_validate_utf8(v_a_5332_);
if (v___x_5333_ == 0)
{
lean_object* v___x_5334_; lean_object* v___x_5335_; 
lean_dec(v_a_5332_);
v___x_5334_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_5335_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5334_);
v_received_5307_ = v___x_5335_;
goto v___jp_5306_;
}
else
{
lean_object* v___x_5336_; 
v___x_5336_ = lean_string_from_utf8_unchecked(v_a_5332_);
v_received_5307_ = v___x_5336_;
goto v___jp_5306_;
}
}
else
{
lean_object* v___x_5337_; 
lean_dec_ref_known(v___x_5331_, 1);
v___x_5337_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_5307_ = v___x_5337_;
goto v___jp_5306_;
}
}
}
else
{
goto v___jp_5319_;
}
}
v___jp_5306_:
{
lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; 
v___x_5308_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5309_ = lean_string_append(v___x_5308_, v_context_5303_);
v___x_5310_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5311_ = lean_string_append(v___x_5309_, v___x_5310_);
v___x_5312_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJSFunction___closed__0));
v___x_5313_ = lean_string_append(v___x_5311_, v___x_5312_);
v___x_5314_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5315_ = lean_string_append(v___x_5313_, v___x_5314_);
v___x_5316_ = lean_string_append(v___x_5315_, v_received_5307_);
lean_dec_ref(v_received_5307_);
v___x_5317_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5317_, 0, v___x_5316_);
v___x_5318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5318_, 0, v___x_5317_);
return v___x_5318_;
}
v___jp_5319_:
{
lean_object* v___x_5320_; 
v___x_5320_ = l_Lasm_JS_Data_describe(v_d_5304_);
v_received_5307_ = v___x_5320_;
goto v___jp_5306_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5338_, lean_object* v_d_5339_, lean_object* v_a_5340_){
_start:
{
lean_object* v_res_5341_; 
v_res_5341_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5338_, v_d_5339_);
lean_dec_ref(v_context_5338_);
return v_res_5341_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(lean_object* v_context_5342_, lean_object* v_bytes_5343_){
_start:
{
lean_object* v___x_5345_; 
v___x_5345_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5343_);
if (lean_obj_tag(v___x_5345_) == 0)
{
lean_object* v_a_5346_; lean_object* v___x_5347_; 
v_a_5346_ = lean_ctor_get(v___x_5345_, 0);
lean_inc(v_a_5346_);
lean_dec_ref_known(v___x_5345_, 1);
v___x_5347_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5342_, v_a_5346_);
return v___x_5347_;
}
else
{
lean_object* v_a_5348_; lean_object* v___x_5350_; uint8_t v_isShared_5351_; uint8_t v_isSharedCheck_5355_; 
v_a_5348_ = lean_ctor_get(v___x_5345_, 0);
v_isSharedCheck_5355_ = !lean_is_exclusive(v___x_5345_);
if (v_isSharedCheck_5355_ == 0)
{
v___x_5350_ = v___x_5345_;
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
else
{
lean_inc(v_a_5348_);
lean_dec(v___x_5345_);
v___x_5350_ = lean_box(0);
v_isShared_5351_ = v_isSharedCheck_5355_;
goto v_resetjp_5349_;
}
v_resetjp_5349_:
{
lean_object* v___x_5353_; 
if (v_isShared_5351_ == 0)
{
v___x_5353_ = v___x_5350_;
goto v_reusejp_5352_;
}
else
{
lean_object* v_reuseFailAlloc_5354_; 
v_reuseFailAlloc_5354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5354_, 0, v_a_5348_);
v___x_5353_ = v_reuseFailAlloc_5354_;
goto v_reusejp_5352_;
}
v_reusejp_5352_:
{
return v___x_5353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0___boxed(lean_object* v_context_5356_, lean_object* v_bytes_5357_, lean_object* v_a_5358_){
_start:
{
lean_object* v_res_5359_; 
v_res_5359_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v_context_5356_, v_bytes_5357_);
lean_dec_ref(v_bytes_5357_);
lean_dec_ref(v_context_5356_);
return v_res_5359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(lean_object* v_o_5360_, lean_object* v_key_5361_){
_start:
{
lean_object* v_k_5363_; lean_object* v___x_5364_; 
v_k_5363_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_5363_, 0, v_key_5361_);
lean_inc_ref(v_k_5363_);
v___x_5364_ = l_Lasm_JS_Wire_encodeIO(v_k_5363_);
if (lean_obj_tag(v___x_5364_) == 0)
{
lean_object* v_a_5365_; uint32_t v___x_5366_; uint32_t v___x_5367_; uint64_t v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; 
v_a_5365_ = lean_ctor_get(v___x_5364_, 0);
lean_inc(v_a_5365_);
lean_dec_ref_known(v___x_5364_, 1);
v___x_5366_ = 203;
v___x_5367_ = lasm_js_value_handle(v_o_5360_);
v___x_5368_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_5369_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5370_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5370_, 0, v_o_5360_);
lean_ctor_set(v___x_5370_, 1, v___x_5369_);
v___x_5371_ = lean_unsigned_to_nat(2u);
v___x_5372_ = lean_mk_empty_array_with_capacity(v___x_5371_);
lean_inc_ref(v_k_5363_);
v___x_5373_ = lean_array_push(v___x_5372_, v_k_5363_);
v___x_5374_ = lean_array_push(v___x_5373_, v___x_5370_);
v___x_5375_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5374_);
v___x_5376_ = lasm_js_call(v___x_5366_, v___x_5367_, v___x_5368_, v_a_5365_, v___x_5375_);
lean_dec_ref_known(v___x_5375_, 1);
lean_dec(v_a_5365_);
if (lean_obj_tag(v___x_5376_) == 0)
{
lean_object* v_a_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; 
v_a_5377_ = lean_ctor_get(v___x_5376_, 0);
lean_inc(v_a_5377_);
lean_dec_ref_known(v___x_5376_, 1);
v___x_5378_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_5379_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_5363_);
v___x_5380_ = lean_string_append(v___x_5378_, v___x_5379_);
lean_dec_ref(v___x_5379_);
v___x_5381_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v___x_5380_, v_a_5377_);
lean_dec(v_a_5377_);
lean_dec_ref(v___x_5380_);
return v___x_5381_;
}
else
{
lean_object* v_a_5382_; lean_object* v___x_5384_; uint8_t v_isShared_5385_; uint8_t v_isSharedCheck_5389_; 
lean_dec_ref_known(v_k_5363_, 1);
v_a_5382_ = lean_ctor_get(v___x_5376_, 0);
v_isSharedCheck_5389_ = !lean_is_exclusive(v___x_5376_);
if (v_isSharedCheck_5389_ == 0)
{
v___x_5384_ = v___x_5376_;
v_isShared_5385_ = v_isSharedCheck_5389_;
goto v_resetjp_5383_;
}
else
{
lean_inc(v_a_5382_);
lean_dec(v___x_5376_);
v___x_5384_ = lean_box(0);
v_isShared_5385_ = v_isSharedCheck_5389_;
goto v_resetjp_5383_;
}
v_resetjp_5383_:
{
lean_object* v___x_5387_; 
if (v_isShared_5385_ == 0)
{
v___x_5387_ = v___x_5384_;
goto v_reusejp_5386_;
}
else
{
lean_object* v_reuseFailAlloc_5388_; 
v_reuseFailAlloc_5388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5388_, 0, v_a_5382_);
v___x_5387_ = v_reuseFailAlloc_5388_;
goto v_reusejp_5386_;
}
v_reusejp_5386_:
{
return v___x_5387_;
}
}
}
}
else
{
lean_object* v_a_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5397_; 
lean_dec_ref_known(v_k_5363_, 1);
lean_dec(v_o_5360_);
v_a_5390_ = lean_ctor_get(v___x_5364_, 0);
v_isSharedCheck_5397_ = !lean_is_exclusive(v___x_5364_);
if (v_isSharedCheck_5397_ == 0)
{
v___x_5392_ = v___x_5364_;
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_a_5390_);
lean_dec(v___x_5364_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0___boxed(lean_object* v_o_5398_, lean_object* v_key_5399_, lean_object* v_a_5400_){
_start:
{
lean_object* v_res_5401_; 
v_res_5401_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_o_5398_, v_key_5399_);
return v_res_5401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(lean_object* v_self_5402_){
_start:
{
lean_object* v___x_5404_; lean_object* v___x_5405_; 
v___x_5404_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5405_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5402_, v___x_5404_);
return v___x_5405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size___boxed(lean_object* v_self_5406_, lean_object* v_a_5407_){
_start:
{
lean_object* v_res_5408_; 
v_res_5408_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(v_self_5406_);
return v_res_5408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5409_, lean_object* v_d_5410_){
_start:
{
lean_object* v_received_5413_; 
if (lean_obj_tag(v_d_5410_) == 9)
{
lean_object* v_value_5427_; lean_object* v___x_5428_; 
v_value_5427_ = lean_ctor_get(v_d_5410_, 0);
lean_inc(v_value_5427_);
lean_dec_ref_known(v_d_5410_, 2);
v___x_5428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5428_, 0, v_value_5427_);
return v___x_5428_;
}
else
{
if (lean_obj_tag(v_d_5410_) == 9)
{
lean_object* v_value_5429_; lean_object* v_description_5430_; lean_object* v___x_5431_; uint8_t v___x_5432_; 
v_value_5429_ = lean_ctor_get(v_d_5410_, 0);
v_description_5430_ = lean_ctor_get(v_d_5410_, 1);
v___x_5431_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5432_ = lean_string_dec_eq(v_description_5430_, v___x_5431_);
if (v___x_5432_ == 0)
{
goto v___jp_5425_;
}
else
{
uint32_t v___x_5433_; uint64_t v___x_5434_; lean_object* v___x_5435_; uint32_t v___x_5436_; lean_object* v___x_5437_; 
lean_inc_n(v_value_5429_, 2);
lean_dec_ref_known(v_d_5410_, 2);
v___x_5433_ = 206;
v___x_5434_ = 0ULL;
v___x_5435_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5435_, 0, v_value_5429_);
lean_ctor_set(v___x_5435_, 1, v___x_5431_);
v___x_5436_ = lasm_js_value_handle(v_value_5429_);
lean_dec(v_value_5429_);
v___x_5437_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5433_, v___x_5434_, v___x_5435_, v___x_5436_);
if (lean_obj_tag(v___x_5437_) == 0)
{
lean_object* v_a_5438_; uint8_t v___x_5439_; 
v_a_5438_ = lean_ctor_get(v___x_5437_, 0);
lean_inc(v_a_5438_);
lean_dec_ref_known(v___x_5437_, 1);
v___x_5439_ = lean_string_validate_utf8(v_a_5438_);
if (v___x_5439_ == 0)
{
lean_object* v___x_5440_; lean_object* v___x_5441_; 
lean_dec(v_a_5438_);
v___x_5440_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6);
v___x_5441_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5440_);
v_received_5413_ = v___x_5441_;
goto v___jp_5412_;
}
else
{
lean_object* v___x_5442_; 
v___x_5442_ = lean_string_from_utf8_unchecked(v_a_5438_);
v_received_5413_ = v___x_5442_;
goto v___jp_5412_;
}
}
else
{
lean_object* v___x_5443_; 
lean_dec_ref_known(v___x_5437_, 1);
v___x_5443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v_received_5413_ = v___x_5443_;
goto v___jp_5412_;
}
}
}
else
{
goto v___jp_5425_;
}
}
v___jp_5412_:
{
lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; 
v___x_5414_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5415_ = lean_string_append(v___x_5414_, v_context_5409_);
v___x_5416_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5417_ = lean_string_append(v___x_5415_, v___x_5416_);
v___x_5418_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0));
v___x_5419_ = lean_string_append(v___x_5417_, v___x_5418_);
v___x_5420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5421_ = lean_string_append(v___x_5419_, v___x_5420_);
v___x_5422_ = lean_string_append(v___x_5421_, v_received_5413_);
lean_dec_ref(v_received_5413_);
v___x_5423_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5423_, 0, v___x_5422_);
v___x_5424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5424_, 0, v___x_5423_);
return v___x_5424_;
}
v___jp_5425_:
{
lean_object* v___x_5426_; 
v___x_5426_ = l_Lasm_JS_Data_describe(v_d_5410_);
v_received_5413_ = v___x_5426_;
goto v___jp_5412_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5444_, lean_object* v_d_5445_, lean_object* v_a_5446_){
_start:
{
lean_object* v_res_5447_; 
v_res_5447_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v_context_5444_, v_d_5445_);
lean_dec_ref(v_context_5444_);
return v_res_5447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(lean_object* v_b_5448_, lean_object* v_args_5449_, uint8_t v_await_5450_){
_start:
{
uint64_t v___y_5453_; uint64_t v___y_5454_; uint64_t v___x_5489_; uint64_t v___y_5491_; 
v___x_5489_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5450_ == 0)
{
uint64_t v___x_5496_; 
v___x_5496_ = 0ULL;
v___y_5491_ = v___x_5496_;
goto v___jp_5490_;
}
else
{
uint64_t v___x_5497_; 
v___x_5497_ = 2ULL;
v___y_5491_ = v___x_5497_;
goto v___jp_5490_;
}
v___jp_5452_:
{
uint64_t v_flags_5455_; uint32_t v___x_5456_; lean_object* v___x_5457_; uint32_t v___x_5458_; lean_object* v___x_5459_; 
v_flags_5455_ = lean_uint64_lor(v___y_5453_, v___y_5454_);
v___x_5456_ = 214;
v___x_5457_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5448_, v_args_5449_);
v___x_5458_ = 0;
v___x_5459_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5456_, v_flags_5455_, v___x_5457_, v___x_5458_);
if (lean_obj_tag(v___x_5459_) == 0)
{
lean_object* v_a_5460_; lean_object* v___x_5461_; 
v_a_5460_ = lean_ctor_get(v___x_5459_, 0);
lean_inc(v_a_5460_);
lean_dec_ref_known(v___x_5459_, 1);
v___x_5461_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5460_);
lean_dec(v_a_5460_);
if (lean_obj_tag(v___x_5461_) == 0)
{
lean_object* v_a_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; 
v_a_5462_ = lean_ctor_get(v___x_5461_, 0);
lean_inc(v_a_5462_);
lean_dec_ref_known(v___x_5461_, 1);
v___x_5463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5448_);
v___x_5464_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v___x_5463_, v_a_5462_);
lean_dec_ref(v___x_5463_);
return v___x_5464_;
}
else
{
lean_object* v_a_5465_; lean_object* v___x_5467_; uint8_t v_isShared_5468_; uint8_t v_isSharedCheck_5472_; 
v_a_5465_ = lean_ctor_get(v___x_5461_, 0);
v_isSharedCheck_5472_ = !lean_is_exclusive(v___x_5461_);
if (v_isSharedCheck_5472_ == 0)
{
v___x_5467_ = v___x_5461_;
v_isShared_5468_ = v_isSharedCheck_5472_;
goto v_resetjp_5466_;
}
else
{
lean_inc(v_a_5465_);
lean_dec(v___x_5461_);
v___x_5467_ = lean_box(0);
v_isShared_5468_ = v_isSharedCheck_5472_;
goto v_resetjp_5466_;
}
v_resetjp_5466_:
{
lean_object* v___x_5470_; 
if (v_isShared_5468_ == 0)
{
v___x_5470_ = v___x_5467_;
goto v_reusejp_5469_;
}
else
{
lean_object* v_reuseFailAlloc_5471_; 
v_reuseFailAlloc_5471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5471_, 0, v_a_5465_);
v___x_5470_ = v_reuseFailAlloc_5471_;
goto v_reusejp_5469_;
}
v_reusejp_5469_:
{
return v___x_5470_;
}
}
}
}
else
{
lean_object* v_a_5473_; lean_object* v___x_5475_; uint8_t v_isShared_5476_; uint8_t v_isSharedCheck_5488_; 
v_a_5473_ = lean_ctor_get(v___x_5459_, 0);
v_isSharedCheck_5488_ = !lean_is_exclusive(v___x_5459_);
if (v_isSharedCheck_5488_ == 0)
{
v___x_5475_ = v___x_5459_;
v_isShared_5476_ = v_isSharedCheck_5488_;
goto v_resetjp_5474_;
}
else
{
lean_inc(v_a_5473_);
lean_dec(v___x_5459_);
v___x_5475_ = lean_box(0);
v_isShared_5476_ = v_isSharedCheck_5488_;
goto v_resetjp_5474_;
}
v_resetjp_5474_:
{
lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5486_; 
v___x_5477_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5478_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5448_);
v___x_5479_ = lean_string_append(v___x_5477_, v___x_5478_);
lean_dec_ref(v___x_5478_);
v___x_5480_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5481_ = lean_string_append(v___x_5479_, v___x_5480_);
v___x_5482_ = lean_io_error_to_string(v_a_5473_);
v___x_5483_ = lean_string_append(v___x_5481_, v___x_5482_);
lean_dec_ref(v___x_5482_);
v___x_5484_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5484_, 0, v___x_5483_);
if (v_isShared_5476_ == 0)
{
lean_ctor_set(v___x_5475_, 0, v___x_5484_);
v___x_5486_ = v___x_5475_;
goto v_reusejp_5485_;
}
else
{
lean_object* v_reuseFailAlloc_5487_; 
v_reuseFailAlloc_5487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5487_, 0, v___x_5484_);
v___x_5486_ = v_reuseFailAlloc_5487_;
goto v_reusejp_5485_;
}
v_reusejp_5485_:
{
return v___x_5486_;
}
}
}
}
v___jp_5490_:
{
uint8_t v_construct_5492_; uint64_t v___x_5493_; 
v_construct_5492_ = lean_ctor_get_uint8(v_b_5448_, sizeof(void*)*4);
v___x_5493_ = lean_uint64_lor(v___x_5489_, v___y_5491_);
if (v_construct_5492_ == 0)
{
uint64_t v___x_5494_; 
v___x_5494_ = 0ULL;
v___y_5453_ = v___x_5493_;
v___y_5454_ = v___x_5494_;
goto v___jp_5452_;
}
else
{
uint64_t v___x_5495_; 
v___x_5495_ = 4ULL;
v___y_5453_ = v___x_5493_;
v___y_5454_ = v___x_5495_;
goto v___jp_5452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5498_, lean_object* v_args_5499_, lean_object* v_await_5500_, lean_object* v_a_5501_){
_start:
{
uint8_t v_await_boxed_5502_; lean_object* v_res_5503_; 
v_await_boxed_5502_ = lean_unbox(v_await_5500_);
v_res_5503_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v_b_5498_, v_args_5499_, v_await_boxed_5502_);
lean_dec_ref(v_b_5498_);
return v_res_5503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new(double v_init_5512_){
_start:
{
lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; uint8_t v___x_5524_; lean_object* v___x_5525_; 
v___x_5514_ = lean_unsigned_to_nat(1u);
v___x_5515_ = ((lean_object*)(l_Lasm_JS_Web_CountQueuingStrategy_new___closed__2));
v___x_5516_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5517_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5517_, 0, v_init_5512_);
v___x_5518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5518_, 0, v___x_5516_);
lean_ctor_set(v___x_5518_, 1, v___x_5517_);
v___x_5519_ = lean_mk_empty_array_with_capacity(v___x_5514_);
lean_inc_ref(v___x_5519_);
v___x_5520_ = lean_array_push(v___x_5519_, v___x_5518_);
v___x_5521_ = l_Lasm_JS_Web_Support_fields(v___x_5520_);
lean_dec_ref(v___x_5520_);
v___x_5522_ = lean_array_push(v___x_5519_, v___x_5521_);
v___x_5523_ = l_Lasm_JS_Web_Support_args(v___x_5522_);
v___x_5524_ = 0;
v___x_5525_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v___x_5515_, v___x_5523_, v___x_5524_);
return v___x_5525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___boxed(lean_object* v_init_5526_, lean_object* v_a_5527_){
_start:
{
double v_init_boxed_5528_; lean_object* v_res_5529_; 
v_init_boxed_5528_ = lean_unbox_float(v_init_5526_);
lean_dec_ref(v_init_5526_);
v_res_5529_ = l_Lasm_JS_Web_CountQueuingStrategy_new(v_init_boxed_5528_);
return v_res_5529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(lean_object* v_self_5530_){
_start:
{
lean_object* v___x_5532_; lean_object* v___x_5533_; 
v___x_5532_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5533_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5530_, v___x_5532_);
return v___x_5533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5534_, lean_object* v_a_5535_){
_start:
{
lean_object* v_res_5536_; 
v_res_5536_ = l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(v_self_5534_);
return v_res_5536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size(lean_object* v_self_5537_){
_start:
{
lean_object* v___x_5539_; lean_object* v___x_5540_; 
v___x_5539_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5540_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5537_, v___x_5539_);
return v___x_5540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size___boxed(lean_object* v_self_5541_, lean_object* v_a_5542_){
_start:
{
lean_object* v_res_5543_; 
v_res_5543_ = l_Lasm_JS_Web_CountQueuingStrategy_size(v_self_5541_);
return v_res_5543_;
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
