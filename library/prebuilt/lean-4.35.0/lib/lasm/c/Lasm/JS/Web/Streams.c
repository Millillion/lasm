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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_isInstance(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ReadableStream"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_ctor_object l_Lasm_JS_Web_ReadableStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ReadableStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__2_value;
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
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "ReadableStreamDefaultReader"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Web.ReadableStreamDefaultReader.new"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ReadableStreamBYOBReader"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.ReadableStreamBYOBReader.new"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "ReadableStreamDefaultController"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "ReadableByteStreamController"};
static const lean_object* l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ReadableStreamBYOBRequest"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_WritableStream_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "WritableStream"};
static const lean_object* l_Lasm_JS_Web_WritableStream_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WritableStream_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WritableStream_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_WritableStream_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStream_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_WritableStream_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WritableStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.WritableStream.new"};
static const lean_object* l_Lasm_JS_Web_WritableStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WritableStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WritableStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WritableStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "WritableStreamDefaultWriter"};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Web.WritableStreamDefaultWriter.new"};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "WritableStreamDefaultController"};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TransformStream_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TransformStream"};
static const lean_object* l_Lasm_JS_Web_TransformStream_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TransformStream_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TransformStream_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TransformStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_TransformStream_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TransformStream_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_TransformStream_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TransformStream_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_TransformStream_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TransformStream_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TransformStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.TransformStream.new"};
static const lean_object* l_Lasm_JS_Web_TransformStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TransformStream_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TransformStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TransformStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TransformStream_cast_x3f___closed__0_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TransformStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TransformStream_new___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "TransformStreamDefaultController"};
static const lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___boxed(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ByteLengthQueuingStrategy"};
static const lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Web.ByteLengthQueuingStrategy.new"};
static const lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "CountQueuingStrategy"};
static const lean_object* l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CountQueuingStrategy_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.CountQueuingStrategy.new"};
static const lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_new___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_CountQueuingStrategy_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_new___closed__1_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0(lean_object* v___x_2152_){
_start:
{
lean_object* v___x_2154_; 
v___x_2154_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_2152_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0___boxed(lean_object* v___x_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v_res_2157_; 
v_res_2157_ = l_Lasm_JS_Web_ReadableStream_cast_x3f___lam__0(v___x_2155_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f(lean_object* v_v_2164_){
_start:
{
lean_object* v___f_2166_; lean_object* v___x_2167_; 
v___f_2166_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_cast_x3f___closed__2));
lean_inc(v_v_2164_);
v___x_2167_ = l_Lasm_JS_Web_Support_isInstance(v___f_2166_, v_v_2164_);
if (lean_obj_tag(v___x_2167_) == 0)
{
lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2181_; 
v_a_2168_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2170_ = v___x_2167_;
v_isShared_2171_ = v_isSharedCheck_2181_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_dec(v___x_2167_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2181_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
uint8_t v___x_2172_; 
v___x_2172_ = lean_unbox(v_a_2168_);
lean_dec(v_a_2168_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2173_; lean_object* v___x_2175_; 
lean_dec(v_v_2164_);
v___x_2173_ = lean_box(0);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 0, v___x_2173_);
v___x_2175_ = v___x_2170_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2173_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
else
{
lean_object* v___x_2177_; lean_object* v___x_2179_; 
v___x_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2177_, 0, v_v_2164_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 0, v___x_2177_);
v___x_2179_ = v___x_2170_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2177_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec(v_v_2164_);
v_a_2182_ = lean_ctor_get(v___x_2167_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2167_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2167_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cast_x3f___boxed(lean_object* v_v_2190_, lean_object* v_a_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l_Lasm_JS_Web_ReadableStream_cast_x3f(v_v_2190_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(lean_object* v_context_2193_, lean_object* v_d_2194_){
_start:
{
lean_object* v___y_2197_; lean_object* v___y_2198_; 
if (lean_obj_tag(v_d_2194_) == 9)
{
lean_object* v_value_2202_; lean_object* v___x_2203_; 
v_value_2202_ = lean_ctor_get(v_d_2194_, 0);
lean_inc(v_value_2202_);
lean_dec_ref_known(v_d_2194_, 2);
v___x_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2203_, 0, v_value_2202_);
return v___x_2203_;
}
else
{
lean_object* v___x_2204_; lean_object* v_received_2206_; 
v___x_2204_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_2194_) == 9)
{
lean_object* v_value_2220_; lean_object* v_description_2221_; uint8_t v___x_2222_; 
v_value_2220_ = lean_ctor_get(v_d_2194_, 0);
v_description_2221_ = lean_ctor_get(v_d_2194_, 1);
v___x_2222_ = lean_string_dec_eq(v_description_2221_, v___x_2204_);
if (v___x_2222_ == 0)
{
goto v___jp_2218_;
}
else
{
uint32_t v___x_2223_; uint64_t v___x_2224_; lean_object* v___x_2225_; uint32_t v___x_2226_; lean_object* v___x_2227_; 
lean_inc_n(v_value_2220_, 2);
lean_dec_ref_known(v_d_2194_, 2);
v___x_2223_ = 206;
v___x_2224_ = 0ULL;
v___x_2225_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2225_, 0, v_value_2220_);
lean_ctor_set(v___x_2225_, 1, v___x_2204_);
v___x_2226_ = lasm_js_value_handle(v_value_2220_);
lean_dec(v_value_2220_);
v___x_2227_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2223_, v___x_2224_, v___x_2225_, v___x_2226_);
lean_dec_ref_known(v___x_2225_, 2);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; uint8_t v___x_2229_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_a_2228_);
lean_dec_ref_known(v___x_2227_, 1);
v___x_2229_ = lean_string_validate_utf8(v_a_2228_);
if (v___x_2229_ == 0)
{
lean_object* v___x_2230_; lean_object* v___x_2231_; 
lean_dec(v_a_2228_);
v___x_2230_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_2231_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2230_);
v_received_2206_ = v___x_2231_;
goto v___jp_2205_;
}
else
{
lean_object* v___x_2232_; 
v___x_2232_ = lean_string_from_utf8_unchecked(v_a_2228_);
v_received_2206_ = v___x_2232_;
goto v___jp_2205_;
}
}
else
{
lean_object* v___x_2233_; 
lean_dec_ref_known(v___x_2227_, 1);
v___x_2233_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_2206_ = v___x_2233_;
goto v___jp_2205_;
}
}
}
else
{
goto v___jp_2218_;
}
v___jp_2205_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; uint8_t v___x_2216_; 
v___x_2207_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2208_ = lean_string_append(v___x_2207_, v_context_2193_);
v___x_2209_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_2210_ = lean_string_append(v___x_2208_, v___x_2209_);
v___x_2211_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStream___closed__1));
v___x_2212_ = lean_string_append(v___x_2210_, v___x_2211_);
v___x_2213_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_2214_ = lean_string_append(v___x_2212_, v___x_2213_);
v___x_2215_ = lean_string_append(v___x_2214_, v_received_2206_);
lean_dec_ref(v_received_2206_);
v___x_2216_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_2216_ == 0)
{
lean_object* v___x_2217_; 
v___x_2217_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_2197_ = v___x_2215_;
v___y_2198_ = v___x_2217_;
goto v___jp_2196_;
}
else
{
v___y_2197_ = v___x_2215_;
v___y_2198_ = v___x_2204_;
goto v___jp_2196_;
}
}
v___jp_2218_:
{
lean_object* v___x_2219_; 
v___x_2219_ = l_Lasm_JS_Data_describe(v_d_2194_);
v_received_2206_ = v___x_2219_;
goto v___jp_2205_;
}
}
v___jp_2196_:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2199_ = lean_string_append(v___y_2197_, v___y_2198_);
v___x_2200_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
v___x_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2200_);
return v___x_2201_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3___boxed(lean_object* v_context_2234_, lean_object* v_d_2235_, lean_object* v_a_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v_context_2234_, v_d_2235_);
lean_dec_ref(v_context_2234_);
return v_res_2237_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_2239_; uint64_t v___x_2240_; 
v___x_2239_ = 0;
v___x_2240_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2239_);
return v___x_2240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(lean_object* v_b_2241_, lean_object* v_args_2242_, uint8_t v_await_2243_){
_start:
{
uint64_t v___y_2246_; uint64_t v___y_2247_; uint64_t v___x_2290_; uint64_t v___y_2292_; 
v___x_2290_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_2243_ == 0)
{
uint64_t v___x_2297_; 
v___x_2297_ = 0ULL;
v___y_2292_ = v___x_2297_;
goto v___jp_2291_;
}
else
{
uint64_t v___x_2298_; 
v___x_2298_ = 2ULL;
v___y_2292_ = v___x_2298_;
goto v___jp_2291_;
}
v___jp_2245_:
{
uint64_t v_flags_2248_; uint32_t v___x_2249_; lean_object* v___x_2250_; uint32_t v___x_2251_; lean_object* v___x_2252_; 
v_flags_2248_ = lean_uint64_lor(v___y_2246_, v___y_2247_);
v___x_2249_ = 214;
v___x_2250_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2241_, v_args_2242_);
v___x_2251_ = 0;
v___x_2252_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2249_, v_flags_2248_, v___x_2250_, v___x_2251_);
lean_dec(v___x_2250_);
if (lean_obj_tag(v___x_2252_) == 0)
{
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2254_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v___x_2252_, 1);
v___x_2254_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2253_);
lean_dec(v_a_2253_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
lean_inc(v_a_2255_);
lean_dec_ref_known(v___x_2254_, 1);
v___x_2256_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2241_);
v___x_2257_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v___x_2256_, v_a_2255_);
lean_dec_ref(v___x_2256_);
return v___x_2257_;
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
v_a_2258_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2254_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2254_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
else
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2273_; 
v_a_2266_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2268_ = v___x_2252_;
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2252_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
lean_ctor_set_tag(v___x_2268_, 1);
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_a_2266_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2289_; 
v_a_2274_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2276_ = v___x_2252_;
v_isShared_2277_ = v_isSharedCheck_2289_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2252_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2289_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2287_; 
v___x_2278_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2279_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2241_);
v___x_2280_ = lean_string_append(v___x_2278_, v___x_2279_);
lean_dec_ref(v___x_2279_);
v___x_2281_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_2282_ = lean_string_append(v___x_2280_, v___x_2281_);
v___x_2283_ = lean_io_error_to_string(v_a_2274_);
v___x_2284_ = lean_string_append(v___x_2282_, v___x_2283_);
lean_dec_ref(v___x_2283_);
v___x_2285_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
if (v_isShared_2277_ == 0)
{
lean_ctor_set(v___x_2276_, 0, v___x_2285_);
v___x_2287_ = v___x_2276_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2285_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
v___jp_2291_:
{
uint8_t v_construct_2293_; uint64_t v___x_2294_; 
v_construct_2293_ = lean_ctor_get_uint8(v_b_2241_, sizeof(void*)*4);
v___x_2294_ = lean_uint64_lor(v___x_2290_, v___y_2292_);
if (v_construct_2293_ == 0)
{
uint64_t v___x_2295_; 
v___x_2295_ = 0ULL;
v___y_2246_ = v___x_2294_;
v___y_2247_ = v___x_2295_;
goto v___jp_2245_;
}
else
{
uint64_t v___x_2296_; 
v___x_2296_ = 4ULL;
v___y_2246_ = v___x_2294_;
v___y_2247_ = v___x_2296_;
goto v___jp_2245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___boxed(lean_object* v_b_2299_, lean_object* v_args_2300_, lean_object* v_await_2301_, lean_object* v_a_2302_){
_start:
{
uint8_t v_await_boxed_2303_; lean_object* v_res_2304_; 
v_await_boxed_2303_ = lean_unbox(v_await_2301_);
v_res_2304_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v_b_2299_, v_args_2300_, v_await_boxed_2303_);
lean_dec_ref(v_b_2299_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(lean_object* v_x_2305_){
_start:
{
if (lean_obj_tag(v_x_2305_) == 0)
{
lean_object* v___x_2306_; 
v___x_2306_ = lean_box(0);
return v___x_2306_;
}
else
{
lean_object* v_val_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v_val_2307_ = lean_ctor_get(v_x_2305_, 0);
v___x_2308_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
lean_inc(v_val_2307_);
v___x_2309_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2309_, 0, v_val_2307_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
return v___x_2309_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1___boxed(lean_object* v_x_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(v_x_2310_);
lean_dec(v_x_2310_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object* v_x_2312_){
_start:
{
if (lean_obj_tag(v_x_2312_) == 0)
{
lean_object* v___x_2313_; 
v___x_2313_ = lean_box(0);
return v___x_2313_;
}
else
{
lean_object* v_val_2314_; lean_object* v___x_2315_; double v___x_2316_; 
v_val_2314_ = lean_ctor_get(v_x_2312_, 0);
v___x_2315_ = lean_alloc_ctor(3, 0, 8);
v___x_2316_ = lean_unbox_float(v_val_2314_);
lean_ctor_set_float(v___x_2315_, 0, v___x_2316_);
return v___x_2315_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0___boxed(lean_object* v_x_2317_){
_start:
{
lean_object* v_res_2318_; 
v_res_2318_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_x_2317_);
lean_dec(v_x_2317_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(lean_object* v_x_2319_){
_start:
{
if (lean_obj_tag(v_x_2319_) == 0)
{
lean_object* v___x_2320_; 
v___x_2320_ = lean_box(0);
return v___x_2320_;
}
else
{
lean_object* v_val_2321_; lean_object* v_highWaterMark_2322_; lean_object* v_size_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2340_; 
v_val_2321_ = lean_ctor_get(v_x_2319_, 0);
lean_inc(v_val_2321_);
lean_dec_ref_known(v_x_2319_, 1);
v_highWaterMark_2322_ = lean_ctor_get(v_val_2321_, 0);
v_size_2323_ = lean_ctor_get(v_val_2321_, 1);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_val_2321_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2325_ = v_val_2321_;
v_isShared_2326_ = v_isSharedCheck_2340_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_size_2323_);
lean_inc(v_highWaterMark_2322_);
lean_dec(v_val_2321_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2340_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2330_; 
v___x_2327_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_2328_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_highWaterMark_2322_);
lean_dec(v_highWaterMark_2322_);
if (v_isShared_2326_ == 0)
{
lean_ctor_set(v___x_2325_, 1, v___x_2328_);
lean_ctor_set(v___x_2325_, 0, v___x_2327_);
v___x_2330_ = v___x_2325_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v___x_2327_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2331_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_2332_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(v_size_2323_);
lean_dec(v_size_2323_);
v___x_2333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2331_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = lean_unsigned_to_nat(2u);
v___x_2335_ = lean_mk_empty_array_with_capacity(v___x_2334_);
v___x_2336_ = lean_array_push(v___x_2335_, v___x_2330_);
v___x_2337_ = lean_array_push(v___x_2336_, v___x_2333_);
v___x_2338_ = l_Lasm_JS_Web_Support_fields(v___x_2337_);
lean_dec_ref(v___x_2337_);
return v___x_2338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new(lean_object* v_underlyingSource_2349_, lean_object* v_strategy_2350_){
_start:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; uint8_t v___x_2359_; lean_object* v___x_2360_; 
v___x_2352_ = lean_unsigned_to_nat(2u);
v___x_2353_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_new___closed__2));
v___x_2354_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_2350_);
v___x_2355_ = lean_mk_empty_array_with_capacity(v___x_2352_);
v___x_2356_ = lean_array_push(v___x_2355_, v_underlyingSource_2349_);
v___x_2357_ = lean_array_push(v___x_2356_, v___x_2354_);
v___x_2358_ = l_Lasm_JS_Web_Support_args(v___x_2357_);
v___x_2359_ = 0;
v___x_2360_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v___x_2353_, v___x_2358_, v___x_2359_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new___boxed(lean_object* v_underlyingSource_2361_, lean_object* v_strategy_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l_Lasm_JS_Web_ReadableStream_new(v_underlyingSource_2361_, v_strategy_2362_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked(lean_object* v_self_2366_){
_start:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2368_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_2369_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2366_, v___x_2368_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked___boxed(lean_object* v_self_2370_, lean_object* v_a_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = l_Lasm_JS_Web_ReadableStream_locked(v_self_2370_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from(lean_object* v_asyncIterable_2381_){
_start:
{
uint8_t v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2383_ = 0;
v___x_2384_ = lean_unsigned_to_nat(1u);
v___x_2385_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_from___closed__2));
v___x_2386_ = lean_mk_empty_array_with_capacity(v___x_2384_);
v___x_2387_ = lean_array_push(v___x_2386_, v_asyncIterable_2381_);
v___x_2388_ = l_Lasm_JS_Web_Support_args(v___x_2387_);
v___x_2389_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2385_, v___x_2388_, v___x_2383_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2397_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2392_ = v___x_2389_;
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2389_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2395_; 
if (v_isShared_2393_ == 0)
{
v___x_2395_ = v___x_2392_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2390_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2405_; 
v_a_2398_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2400_ = v___x_2389_;
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2389_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2401_ == 0)
{
v___x_2403_ = v___x_2400_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2398_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from___boxed(lean_object* v_asyncIterable_2406_, lean_object* v_a_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lasm_JS_Web_ReadableStream_from(v_asyncIterable_2406_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(lean_object* v___f_2409_, lean_object* v_bytes_2410_){
_start:
{
lean_object* v___x_2412_; uint8_t v___x_2413_; lean_object* v_val_2415_; lean_object* v___x_2418_; 
v___x_2412_ = lean_unsigned_to_nat(0u);
v___x_2413_ = 0;
v___x_2418_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2410_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2418_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2418_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
lean_ctor_set_tag(v___x_2421_, 1);
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
v_val_2415_ = v___x_2424_;
goto v___jp_2414_;
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2434_; 
v_a_2427_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2429_ = v___x_2418_;
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2418_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2434_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2432_; 
if (v_isShared_2430_ == 0)
{
lean_ctor_set_tag(v___x_2429_, 0);
v___x_2432_ = v___x_2429_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_a_2427_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
v_val_2415_ = v___x_2432_;
goto v___jp_2414_;
}
}
}
v___jp_2414_:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2416_, 0, v_val_2415_);
v___x_2417_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2412_, v___x_2413_, v___x_2416_, v___f_2409_);
return v___x_2417_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_2435_, lean_object* v_bytes_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(v___f_2435_, v_bytes_2436_);
lean_dec_ref(v_bytes_2436_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(lean_object* v_x_2439_){
_start:
{
lean_object* v_val_2442_; 
if (lean_obj_tag(v_x_2439_) == 0)
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2452_; 
v_a_2444_ = lean_ctor_get(v_x_2439_, 0);
v_isSharedCheck_2452_ = !lean_is_exclusive(v_x_2439_);
if (v_isSharedCheck_2452_ == 0)
{
v___x_2446_ = v_x_2439_;
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v_x_2439_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2449_; 
if (v_isShared_2447_ == 0)
{
v___x_2449_ = v___x_2446_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v_a_2444_);
v___x_2449_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
lean_object* v___x_2450_; 
v___x_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2449_);
return v___x_2450_;
}
}
}
else
{
lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2461_; 
v_isSharedCheck_2461_ = !lean_is_exclusive(v_x_2439_);
if (v_isSharedCheck_2461_ == 0)
{
lean_object* v_unused_2462_; 
v_unused_2462_ = lean_ctor_get(v_x_2439_, 0);
lean_dec(v_unused_2462_);
v___x_2454_ = v_x_2439_;
v_isShared_2455_ = v_isSharedCheck_2461_;
goto v_resetjp_2453_;
}
else
{
lean_dec(v_x_2439_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2461_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2456_; lean_object* v_a_2457_; lean_object* v___x_2459_; 
v___x_2456_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref(v___x_2456_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v_a_2457_);
v___x_2459_ = v___x_2454_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
v_val_2442_ = v___x_2459_;
goto v___jp_2441_;
}
}
}
v___jp_2441_:
{
lean_object* v___x_2443_; 
v___x_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2443_, 0, v_val_2442_);
return v___x_2443_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(v_x_2463_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(lean_object* v_failurePrefix_2466_, lean_object* v_x_2467_){
_start:
{
if (lean_obj_tag(v_x_2467_) == 0)
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2480_; 
v_a_2469_ = lean_ctor_get(v_x_2467_, 0);
v_isSharedCheck_2480_ = !lean_is_exclusive(v_x_2467_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2471_ = v_x_2467_;
v_isShared_2472_ = v_isSharedCheck_2480_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v_x_2467_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2480_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2477_; 
v___x_2473_ = lean_io_error_to_string(v_a_2469_);
v___x_2474_ = lean_string_append(v_failurePrefix_2466_, v___x_2473_);
lean_dec_ref(v___x_2473_);
v___x_2475_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2475_, 0, v___x_2474_);
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 0, v___x_2475_);
v___x_2477_ = v___x_2471_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2475_);
v___x_2477_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
lean_object* v___x_2478_; 
v___x_2478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
return v___x_2478_;
}
}
}
else
{
lean_object* v___x_2481_; 
lean_dec_ref(v_failurePrefix_2466_);
v___x_2481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2481_, 0, v_x_2467_);
return v___x_2481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed(lean_object* v_failurePrefix_2482_, lean_object* v_x_2483_, lean_object* v___y_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(v_failurePrefix_2482_, v_x_2483_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(lean_object* v___f_2486_, lean_object* v_x_2487_){
_start:
{
if (lean_obj_tag(v_x_2487_) == 0)
{
lean_object* v___x_2489_; 
lean_dec_ref(v___f_2486_);
v___x_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_x_2487_);
return v___x_2489_;
}
else
{
lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2501_; 
v_isSharedCheck_2501_ = !lean_is_exclusive(v_x_2487_);
if (v_isSharedCheck_2501_ == 0)
{
lean_object* v_unused_2502_; 
v_unused_2502_ = lean_ctor_get(v_x_2487_, 0);
lean_dec(v_unused_2502_);
v___x_2491_ = v_x_2487_;
v_isShared_2492_ = v_isSharedCheck_2501_;
goto v_resetjp_2490_;
}
else
{
lean_dec(v_x_2487_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2501_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2493_; uint8_t v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2497_; 
v___x_2493_ = lean_unsigned_to_nat(0u);
v___x_2494_ = 0;
v___x_2495_ = lean_io_promise_new();
if (v_isShared_2492_ == 0)
{
lean_ctor_set(v___x_2491_, 0, v___x_2495_);
v___x_2497_ = v___x_2491_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v___x_2495_);
v___x_2497_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2497_);
v___x_2499_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2493_, v___x_2494_, v___x_2498_, v___f_2486_);
return v___x_2499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed(lean_object* v___f_2503_, lean_object* v_x_2504_, lean_object* v___y_2505_){
_start:
{
lean_object* v_res_2506_; 
v_res_2506_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(v___f_2503_, v_x_2504_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(lean_object* v___f_2507_, lean_object* v_a_2508_, uint32_t v_op_2509_, uint64_t v_flags_2510_, lean_object* v_payload_2511_, lean_object* v_x_2512_){
_start:
{
if (lean_obj_tag(v_x_2512_) == 0)
{
lean_object* v___x_2514_; 
lean_dec_ref(v___f_2507_);
v___x_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2514_, 0, v_x_2512_);
return v___x_2514_;
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2535_; 
v_a_2515_ = lean_ctor_get(v_x_2512_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v_x_2512_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2517_ = v_x_2512_;
v_isShared_2518_ = v_isSharedCheck_2535_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v_x_2512_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2535_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
uint32_t v___x_2519_; lean_object* v___x_2520_; uint8_t v___x_2521_; lean_object* v_val_2523_; lean_object* v___x_2526_; 
v___x_2519_ = 0;
v___x_2520_ = lean_unsigned_to_nat(0u);
v___x_2521_ = 0;
v___x_2526_ = lasm_js_call_into(v_a_2508_, v_op_2509_, v___x_2519_, v_flags_2510_, v_a_2515_, v_payload_2511_);
lean_dec(v_a_2515_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; lean_object* v___x_2529_; 
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2527_);
lean_dec_ref_known(v___x_2526_, 1);
if (v_isShared_2518_ == 0)
{
lean_ctor_set(v___x_2517_, 0, v_a_2527_);
v___x_2529_ = v___x_2517_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2527_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
v_val_2523_ = v___x_2529_;
goto v___jp_2522_;
}
}
else
{
lean_object* v_a_2531_; lean_object* v___x_2533_; 
v_a_2531_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2526_, 1);
if (v_isShared_2518_ == 0)
{
lean_ctor_set_tag(v___x_2517_, 0);
lean_ctor_set(v___x_2517_, 0, v_a_2531_);
v___x_2533_ = v___x_2517_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2531_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
v_val_2523_ = v___x_2533_;
goto v___jp_2522_;
}
}
v___jp_2522_:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2524_, 0, v_val_2523_);
v___x_2525_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2520_, v___x_2521_, v___x_2524_, v___f_2507_);
return v___x_2525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed(lean_object* v___f_2536_, lean_object* v_a_2537_, lean_object* v_op_2538_, lean_object* v_flags_2539_, lean_object* v_payload_2540_, lean_object* v_x_2541_, lean_object* v___y_2542_){
_start:
{
uint32_t v_op_boxed_2543_; uint64_t v_flags_boxed_2544_; lean_object* v_res_2545_; 
v_op_boxed_2543_ = lean_unbox_uint32(v_op_2538_);
lean_dec(v_op_2538_);
v_flags_boxed_2544_ = lean_unbox_uint64(v_flags_2539_);
lean_dec_ref(v_flags_2539_);
v_res_2545_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(v___f_2536_, v_a_2537_, v_op_boxed_2543_, v_flags_boxed_2544_, v_payload_2540_, v_x_2541_);
lean_dec(v_payload_2540_);
lean_dec(v_a_2537_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(lean_object* v___x_2546_, uint8_t v___x_2547_, lean_object* v___f_2548_, lean_object* v_a_2549_, uint32_t v_op_2550_, uint64_t v_flags_2551_, lean_object* v_payload_2552_, lean_object* v_x_2553_){
_start:
{
lean_object* v_val_2556_; 
if (lean_obj_tag(v_x_2553_) == 0)
{
lean_object* v___x_2559_; 
lean_dec_ref(v___f_2548_);
lean_dec(v___x_2546_);
v___x_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2559_, 0, v_x_2553_);
return v___x_2559_;
}
else
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2574_; 
v_a_2560_ = lean_ctor_get(v_x_2553_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v_x_2553_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2562_ = v_x_2553_;
v_isShared_2563_ = v_isSharedCheck_2574_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v_x_2553_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2574_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
uint32_t v___x_2564_; lean_object* v___x_2565_; 
v___x_2564_ = 0;
v___x_2565_ = lasm_js_call_into(v_a_2549_, v_op_2550_, v___x_2564_, v_flags_2551_, v_a_2560_, v_payload_2552_);
lean_dec(v_a_2560_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2568_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2566_);
lean_dec_ref_known(v___x_2565_, 1);
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 0, v_a_2566_);
v___x_2568_ = v___x_2562_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2566_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
v_val_2556_ = v___x_2568_;
goto v___jp_2555_;
}
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; 
v_a_2570_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v___x_2565_, 1);
if (v_isShared_2563_ == 0)
{
lean_ctor_set_tag(v___x_2562_, 0);
lean_ctor_set(v___x_2562_, 0, v_a_2570_);
v___x_2572_ = v___x_2562_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
v_val_2556_ = v___x_2572_;
goto v___jp_2555_;
}
}
}
}
v___jp_2555_:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2557_, 0, v_val_2556_);
v___x_2558_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2546_, v___x_2547_, v___x_2557_, v___f_2548_);
return v___x_2558_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed(lean_object* v___x_2575_, lean_object* v___x_2576_, lean_object* v___f_2577_, lean_object* v_a_2578_, lean_object* v_op_2579_, lean_object* v_flags_2580_, lean_object* v_payload_2581_, lean_object* v_x_2582_, lean_object* v___y_2583_){
_start:
{
uint8_t v___x_952__boxed_2584_; uint32_t v_op_boxed_2585_; uint64_t v_flags_boxed_2586_; lean_object* v_res_2587_; 
v___x_952__boxed_2584_ = lean_unbox(v___x_2576_);
v_op_boxed_2585_ = lean_unbox_uint32(v_op_2579_);
lean_dec(v_op_2579_);
v_flags_boxed_2586_ = lean_unbox_uint64(v_flags_2580_);
lean_dec_ref(v_flags_2580_);
v_res_2587_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(v___x_2575_, v___x_952__boxed_2584_, v___f_2577_, v_a_2578_, v_op_boxed_2585_, v_flags_boxed_2586_, v_payload_2581_, v_x_2582_);
lean_dec(v_payload_2581_);
lean_dec(v_a_2578_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(lean_object* v_a_2588_, lean_object* v_x_2589_){
_start:
{
if (lean_obj_tag(v_x_2589_) == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2599_; 
v_a_2591_ = lean_ctor_get(v_x_2589_, 0);
v_isSharedCheck_2599_ = !lean_is_exclusive(v_x_2589_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2593_ = v_x_2589_;
v_isShared_2594_ = v_isSharedCheck_2599_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v_x_2589_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2599_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
lean_object* v___x_2597_; 
v___x_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
return v___x_2597_;
}
}
}
else
{
lean_object* v___x_2600_; 
lean_dec_ref_known(v_x_2589_, 1);
v___x_2600_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2588_);
return v___x_2600_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v_a_2601_, lean_object* v_x_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(v_a_2601_, v_x_2602_);
lean_dec(v_a_2601_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(lean_object* v_failurePrefix_2605_, uint32_t v_op_2606_, uint64_t v_flags_2607_, lean_object* v_payload_2608_, lean_object* v___f_2609_, lean_object* v___f_2610_, lean_object* v___f_2611_, lean_object* v_x_2612_){
_start:
{
if (lean_obj_tag(v_x_2612_) == 0)
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2622_; 
lean_dec_ref(v___f_2611_);
lean_dec_ref(v___f_2610_);
lean_dec_ref(v___f_2609_);
lean_dec(v_payload_2608_);
v_a_2614_ = lean_ctor_get(v_x_2612_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v_x_2612_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2616_ = v_x_2612_;
v_isShared_2617_ = v_isSharedCheck_2622_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v_x_2612_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2622_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2619_; 
if (v_isShared_2617_ == 0)
{
v___x_2619_ = v___x_2616_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2614_);
v___x_2619_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2620_; 
v___x_2620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2619_);
return v___x_2620_;
}
}
}
else
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2669_; 
v_a_2623_ = lean_ctor_get(v_x_2612_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v_x_2612_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2625_ = v_x_2612_;
v_isShared_2626_ = v_isSharedCheck_2669_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v_x_2612_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2669_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; uint8_t v___x_2629_; 
v___x_2627_ = lean_string_utf8_byte_size(v_failurePrefix_2605_);
v___x_2628_ = lean_unsigned_to_nat(0u);
v___x_2629_ = lean_nat_dec_eq(v___x_2627_, v___x_2628_);
if (v___x_2629_ == 0)
{
lean_object* v___f_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___f_2634_; lean_object* v_val_2636_; lean_object* v___x_2641_; 
lean_dec_ref(v___f_2611_);
lean_inc(v_a_2623_);
v___f_2630_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2630_, 0, v_a_2623_);
v___x_2631_ = lean_box(v___x_2629_);
v___x_2632_ = lean_box_uint32(v_op_2606_);
v___x_2633_ = lean_box_uint64(v_flags_2607_);
lean_inc(v_payload_2608_);
v___f_2634_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2634_, 0, v___x_2628_);
lean_closure_set(v___f_2634_, 1, v___x_2631_);
lean_closure_set(v___f_2634_, 2, v___f_2630_);
lean_closure_set(v___f_2634_, 3, v_a_2623_);
lean_closure_set(v___f_2634_, 4, v___x_2632_);
lean_closure_set(v___f_2634_, 5, v___x_2633_);
lean_closure_set(v___f_2634_, 6, v_payload_2608_);
v___x_2641_ = l_Lasm_JS_Wire_encodeIO(v_payload_2608_);
lean_dec(v_payload_2608_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; lean_object* v___x_2644_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2642_);
lean_dec_ref_known(v___x_2641_, 1);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v_a_2642_);
v___x_2644_ = v___x_2625_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v_a_2642_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
v_val_2636_ = v___x_2644_;
goto v___jp_2635_;
}
}
else
{
lean_object* v_a_2646_; lean_object* v___x_2648_; 
v_a_2646_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2641_, 1);
if (v_isShared_2626_ == 0)
{
lean_ctor_set_tag(v___x_2625_, 0);
lean_ctor_set(v___x_2625_, 0, v_a_2646_);
v___x_2648_ = v___x_2625_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2646_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
v_val_2636_ = v___x_2648_;
goto v___jp_2635_;
}
}
v___jp_2635_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2637_, 0, v_val_2636_);
v___x_2638_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2628_, v___x_2629_, v___x_2637_, v___f_2634_);
v___x_2639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2628_, v___x_2629_, v___x_2638_, v___f_2609_);
v___x_2640_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2628_, v___x_2629_, v___x_2639_, v___f_2610_);
return v___x_2640_;
}
}
else
{
lean_object* v___f_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___f_2653_; uint8_t v___x_2654_; lean_object* v_val_2656_; lean_object* v___x_2660_; 
lean_dec_ref(v___f_2610_);
lean_dec_ref(v___f_2609_);
lean_inc(v_a_2623_);
v___f_2650_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2650_, 0, v_a_2623_);
v___x_2651_ = lean_box_uint32(v_op_2606_);
v___x_2652_ = lean_box_uint64(v_flags_2607_);
lean_inc(v_payload_2608_);
v___f_2653_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2653_, 0, v___f_2650_);
lean_closure_set(v___f_2653_, 1, v_a_2623_);
lean_closure_set(v___f_2653_, 2, v___x_2651_);
lean_closure_set(v___f_2653_, 3, v___x_2652_);
lean_closure_set(v___f_2653_, 4, v_payload_2608_);
v___x_2654_ = 0;
v___x_2660_ = l_Lasm_JS_Wire_encodeIO(v_payload_2608_);
lean_dec(v_payload_2608_);
if (lean_obj_tag(v___x_2660_) == 0)
{
lean_object* v_a_2661_; lean_object* v___x_2663_; 
v_a_2661_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2661_);
lean_dec_ref_known(v___x_2660_, 1);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v_a_2661_);
v___x_2663_ = v___x_2625_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2661_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
v_val_2656_ = v___x_2663_;
goto v___jp_2655_;
}
}
else
{
lean_object* v_a_2665_; lean_object* v___x_2667_; 
v_a_2665_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2665_);
lean_dec_ref_known(v___x_2660_, 1);
if (v_isShared_2626_ == 0)
{
lean_ctor_set_tag(v___x_2625_, 0);
lean_ctor_set(v___x_2625_, 0, v_a_2665_);
v___x_2667_ = v___x_2625_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2665_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
v_val_2656_ = v___x_2667_;
goto v___jp_2655_;
}
}
v___jp_2655_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2657_, 0, v_val_2656_);
v___x_2658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2628_, v___x_2654_, v___x_2657_, v___f_2653_);
v___x_2659_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2628_, v___x_2654_, v___x_2658_, v___f_2611_);
return v___x_2659_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v_failurePrefix_2670_, lean_object* v_op_2671_, lean_object* v_flags_2672_, lean_object* v_payload_2673_, lean_object* v___f_2674_, lean_object* v___f_2675_, lean_object* v___f_2676_, lean_object* v_x_2677_, lean_object* v___y_2678_){
_start:
{
uint32_t v_op_boxed_2679_; uint64_t v_flags_boxed_2680_; lean_object* v_res_2681_; 
v_op_boxed_2679_ = lean_unbox_uint32(v_op_2671_);
lean_dec(v_op_2671_);
v_flags_boxed_2680_ = lean_unbox_uint64(v_flags_2672_);
lean_dec_ref(v_flags_2672_);
v_res_2681_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(v_failurePrefix_2670_, v_op_boxed_2679_, v_flags_boxed_2680_, v_payload_2673_, v___f_2674_, v___f_2675_, v___f_2676_, v_x_2677_);
lean_dec_ref(v_failurePrefix_2670_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(lean_object* v___f_2682_, lean_object* v_x_2683_){
_start:
{
if (lean_obj_tag(v_x_2683_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2693_; 
lean_dec_ref(v___f_2682_);
v_a_2685_ = lean_ctor_get(v_x_2683_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v_x_2683_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2687_ = v_x_2683_;
v_isShared_2688_ = v_isSharedCheck_2693_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_a_2685_);
lean_dec(v_x_2683_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2693_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v___x_2690_; 
if (v_isShared_2688_ == 0)
{
v___x_2690_ = v___x_2687_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2685_);
v___x_2690_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
lean_object* v___x_2691_; 
v___x_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
return v___x_2691_;
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2695_; 
v_a_2694_ = lean_ctor_get(v_x_2683_, 0);
lean_inc(v_a_2694_);
lean_dec_ref_known(v_x_2683_, 1);
v___x_2695_ = lean_apply_2(v___f_2682_, v_a_2694_, lean_box(0));
return v___x_2695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_2696_, lean_object* v_x_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(v___f_2696_, v_x_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t v_op_2705_, uint64_t v_flags_2706_, lean_object* v_payload_2707_, lean_object* v_failurePrefix_2708_){
_start:
{
lean_object* v___f_2710_; lean_object* v___f_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___f_2714_; lean_object* v___f_2715_; lean_object* v___x_2716_; uint8_t v___x_2717_; lean_object* v_val_2719_; lean_object* v___x_2722_; 
v___f_2710_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_2708_);
v___f_2711_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2711_, 0, v_failurePrefix_2708_);
v___x_2712_ = lean_box_uint32(v_op_2705_);
v___x_2713_ = lean_box_uint64(v_flags_2706_);
v___f_2714_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2714_, 0, v_failurePrefix_2708_);
lean_closure_set(v___f_2714_, 1, v___x_2712_);
lean_closure_set(v___f_2714_, 2, v___x_2713_);
lean_closure_set(v___f_2714_, 3, v_payload_2707_);
lean_closure_set(v___f_2714_, 4, v___f_2711_);
lean_closure_set(v___f_2714_, 5, v___f_2710_);
lean_closure_set(v___f_2714_, 6, v___f_2710_);
v___f_2715_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2715_, 0, v___f_2714_);
v___x_2716_ = lean_unsigned_to_nat(0u);
v___x_2717_ = 0;
v___x_2722_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2722_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2722_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2722_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
lean_ctor_set_tag(v___x_2725_, 1);
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
v_val_2719_ = v___x_2728_;
goto v___jp_2718_;
}
}
}
else
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
v_a_2731_ = lean_ctor_get(v___x_2722_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2722_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2722_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2722_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
lean_ctor_set_tag(v___x_2733_, 0);
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
v_val_2719_ = v___x_2736_;
goto v___jp_2718_;
}
}
}
v___jp_2718_:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2720_, 0, v_val_2719_);
v___x_2721_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2716_, v___x_2717_, v___x_2720_, v___f_2715_);
return v___x_2721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___boxed(lean_object* v_op_2739_, lean_object* v_flags_2740_, lean_object* v_payload_2741_, lean_object* v_failurePrefix_2742_, lean_object* v_a_2743_){
_start:
{
uint32_t v_op_boxed_2744_; uint64_t v_flags_boxed_2745_; lean_object* v_res_2746_; 
v_op_boxed_2744_ = lean_unbox_uint32(v_op_2739_);
lean_dec(v_op_2739_);
v_flags_boxed_2745_ = lean_unbox_uint64(v_flags_2740_);
lean_dec_ref(v_flags_2740_);
v_res_2746_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_boxed_2744_, v_flags_boxed_2745_, v_payload_2741_, v_failurePrefix_2742_);
return v_res_2746_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2747_; uint8_t v___x_2748_; uint64_t v___x_2749_; 
v___x_2747_ = 8ULL;
v___x_2748_ = 0;
v___x_2749_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v___x_2748_, v___x_2747_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object* v_o_2750_, lean_object* v_name_2751_, lean_object* v_args_2752_){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; uint32_t v___x_2757_; uint64_t v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2754_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2755_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2755_, 0, v_o_2750_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
v___x_2756_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2756_, 0, v_name_2751_);
v___x_2757_ = 205;
v___x_2758_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0);
v___x_2759_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2759_, 0, v_args_2752_);
v___x_2760_ = lean_unsigned_to_nat(3u);
v___x_2761_ = lean_mk_empty_array_with_capacity(v___x_2760_);
v___x_2762_ = lean_array_push(v___x_2761_, v___x_2755_);
v___x_2763_ = lean_array_push(v___x_2762_, v___x_2756_);
v___x_2764_ = lean_array_push(v___x_2763_, v___x_2759_);
v___x_2765_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2764_);
v___x_2766_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_2757_, v___x_2758_, v___x_2765_, v___x_2754_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___boxed(lean_object* v_o_2767_, lean_object* v_name_2768_, lean_object* v_args_2769_, lean_object* v___y_2770_){
_start:
{
lean_object* v_res_2771_; 
v_res_2771_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_o_2767_, v_name_2768_, v_args_2769_);
return v_res_2771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel(lean_object* v_self_2772_, lean_object* v_reason_2773_){
_start:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2775_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_2776_ = lean_unsigned_to_nat(1u);
v___x_2777_ = lean_mk_empty_array_with_capacity(v___x_2776_);
v___x_2778_ = lean_array_push(v___x_2777_, v_reason_2773_);
v___x_2779_ = l_Lasm_JS_Web_Support_args(v___x_2778_);
v___x_2780_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2772_, v___x_2775_, v___x_2779_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel___boxed(lean_object* v_self_2781_, lean_object* v_reason_2782_, lean_object* v_a_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l_Lasm_JS_Web_ReadableStream_cancel(v_self_2781_, v_reason_2782_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(lean_object* v_context_2785_, uint32_t v_op_2786_, uint64_t v_flags_2787_, lean_object* v_payload_2788_, lean_object* v_failurePrefix_2789_){
_start:
{
lean_object* v___x_2791_; 
v___x_2791_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_2786_, v_flags_2787_, v_payload_2788_, v_failurePrefix_2789_);
return v___x_2791_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___boxed(lean_object* v_context_2792_, lean_object* v_op_2793_, lean_object* v_flags_2794_, lean_object* v_payload_2795_, lean_object* v_failurePrefix_2796_, lean_object* v_a_2797_){
_start:
{
uint32_t v_op_boxed_2798_; uint64_t v_flags_boxed_2799_; lean_object* v_res_2800_; 
v_op_boxed_2798_ = lean_unbox_uint32(v_op_2793_);
lean_dec(v_op_2793_);
v_flags_boxed_2799_ = lean_unbox_uint64(v_flags_2794_);
lean_dec_ref(v_flags_2794_);
v_res_2800_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(v_context_2792_, v_op_boxed_2798_, v_flags_boxed_2799_, v_payload_2795_, v_failurePrefix_2796_);
lean_dec_ref(v_context_2792_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(lean_object* v_x_2801_){
_start:
{
if (lean_obj_tag(v_x_2801_) == 0)
{
lean_object* v___x_2802_; 
v___x_2802_ = lean_box(0);
return v___x_2802_;
}
else
{
lean_object* v___x_2803_; 
v___x_2803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1));
return v___x_2803_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0___boxed(lean_object* v_x_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_x_2804_);
lean_dec(v_x_2804_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(lean_object* v_x_2806_){
_start:
{
if (lean_obj_tag(v_x_2806_) == 0)
{
lean_object* v___x_2807_; 
v___x_2807_ = lean_box(0);
return v___x_2807_;
}
else
{
lean_object* v_val_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v_val_2808_ = lean_ctor_get(v_x_2806_, 0);
v___x_2809_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0));
v___x_2810_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_val_2808_);
v___x_2811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2809_);
lean_ctor_set(v___x_2811_, 1, v___x_2810_);
v___x_2812_ = lean_unsigned_to_nat(1u);
v___x_2813_ = lean_mk_empty_array_with_capacity(v___x_2812_);
v___x_2814_ = lean_array_push(v___x_2813_, v___x_2811_);
v___x_2815_ = l_Lasm_JS_Web_Support_fields(v___x_2814_);
lean_dec_ref(v___x_2814_);
return v___x_2815_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0___boxed(lean_object* v_x_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_x_2816_);
lean_dec(v_x_2816_);
return v_res_2817_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_2818_; uint64_t v___x_2819_; 
v___x_2818_ = 1;
v___x_2819_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2818_);
return v___x_2819_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t v_await_2820_, uint64_t v_extra_2821_){
_start:
{
uint64_t v___x_2822_; uint64_t v___y_2824_; 
v___x_2822_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0);
if (v_await_2820_ == 0)
{
uint64_t v___x_2827_; 
v___x_2827_ = 0ULL;
v___y_2824_ = v___x_2827_;
goto v___jp_2823_;
}
else
{
uint64_t v___x_2828_; 
v___x_2828_ = 2ULL;
v___y_2824_ = v___x_2828_;
goto v___jp_2823_;
}
v___jp_2823_:
{
uint64_t v___x_2825_; uint64_t v___x_2826_; 
v___x_2825_ = lean_uint64_lor(v___x_2822_, v___y_2824_);
v___x_2826_ = lean_uint64_lor(v___x_2825_, v_extra_2821_);
return v___x_2826_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___boxed(lean_object* v_await_2829_, lean_object* v_extra_2830_){
_start:
{
uint8_t v_await_boxed_2831_; uint64_t v_extra_boxed_2832_; uint64_t v_res_2833_; lean_object* v_r_2834_; 
v_await_boxed_2831_ = lean_unbox(v_await_2829_);
v_extra_boxed_2832_ = lean_unbox_uint64(v_extra_2830_);
lean_dec_ref(v_extra_2830_);
v_res_2833_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v_await_boxed_2831_, v_extra_boxed_2832_);
v_r_2834_ = lean_box_uint64(v_res_2833_);
return v_r_2834_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2835_; uint8_t v___x_2836_; uint64_t v___x_2837_; 
v___x_2835_ = 8ULL;
v___x_2836_ = 0;
v___x_2837_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_2836_, v___x_2835_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object* v_o_2839_, lean_object* v_name_2840_, lean_object* v_args_2841_){
_start:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; uint64_t v___x_2846_; lean_object* v___x_2847_; 
v___x_2843_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2844_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2844_, 0, v_o_2839_);
lean_ctor_set(v___x_2844_, 1, v___x_2843_);
lean_inc_ref(v_name_2840_);
v___x_2845_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2845_, 0, v_name_2840_);
v___x_2846_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0);
v___x_2847_ = l_Lasm_JS_Value_invokeRaw(v___x_2844_, v___x_2845_, v_args_2841_, v___x_2846_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_a_2848_);
lean_dec_ref_known(v___x_2847_, 1);
v___x_2849_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_2850_ = lean_string_append(v___x_2849_, v_name_2840_);
lean_dec_ref(v_name_2840_);
v___x_2851_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2850_, v_a_2848_);
lean_dec(v_a_2848_);
lean_dec_ref(v___x_2850_);
return v___x_2851_;
}
else
{
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
lean_dec_ref(v_name_2840_);
v_a_2852_ = lean_ctor_get(v___x_2847_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2847_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___x_2847_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___x_2847_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2852_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___boxed(lean_object* v_o_2860_, lean_object* v_name_2861_, lean_object* v_args_2862_, lean_object* v_a_2863_){
_start:
{
lean_object* v_res_2864_; 
v_res_2864_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2860_, v_name_2861_, v_args_2862_);
return v_res_2864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader(lean_object* v_self_2866_, lean_object* v_options_2867_){
_start:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2869_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_getReader___closed__0));
v___x_2870_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_options_2867_);
v___x_2871_ = lean_unsigned_to_nat(1u);
v___x_2872_ = lean_mk_empty_array_with_capacity(v___x_2871_);
v___x_2873_ = lean_array_push(v___x_2872_, v___x_2870_);
v___x_2874_ = l_Lasm_JS_Web_Support_args(v___x_2873_);
v___x_2875_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2866_, v___x_2869_, v___x_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader___boxed(lean_object* v_self_2876_, lean_object* v_options_2877_, lean_object* v_a_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l_Lasm_JS_Web_ReadableStream_getReader(v_self_2876_, v_options_2877_);
lean_dec(v_options_2877_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(lean_object* v_x_2880_){
_start:
{
if (lean_obj_tag(v_x_2880_) == 0)
{
lean_object* v___x_2881_; 
v___x_2881_ = lean_box(0);
return v___x_2881_;
}
else
{
lean_object* v_val_2882_; lean_object* v_preventClose_2883_; lean_object* v_preventAbort_2884_; lean_object* v_preventCancel_2885_; lean_object* v_signal_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v_val_2882_ = lean_ctor_get(v_x_2880_, 0);
v_preventClose_2883_ = lean_ctor_get(v_val_2882_, 0);
v_preventAbort_2884_ = lean_ctor_get(v_val_2882_, 1);
v_preventCancel_2885_ = lean_ctor_get(v_val_2882_, 2);
v_signal_2886_ = lean_ctor_get(v_val_2882_, 3);
v___x_2887_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0));
v___x_2888_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventClose_2883_);
v___x_2889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2887_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
v___x_2890_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1));
v___x_2891_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventAbort_2884_);
v___x_2892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2890_);
lean_ctor_set(v___x_2892_, 1, v___x_2891_);
v___x_2893_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2));
v___x_2894_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventCancel_2885_);
v___x_2895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2895_, 0, v___x_2893_);
lean_ctor_set(v___x_2895_, 1, v___x_2894_);
v___x_2896_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_2897_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2886_);
v___x_2898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2896_);
lean_ctor_set(v___x_2898_, 1, v___x_2897_);
v___x_2899_ = lean_unsigned_to_nat(4u);
v___x_2900_ = lean_mk_empty_array_with_capacity(v___x_2899_);
v___x_2901_ = lean_array_push(v___x_2900_, v___x_2889_);
v___x_2902_ = lean_array_push(v___x_2901_, v___x_2892_);
v___x_2903_ = lean_array_push(v___x_2902_, v___x_2895_);
v___x_2904_ = lean_array_push(v___x_2903_, v___x_2898_);
v___x_2905_ = l_Lasm_JS_Web_Support_fields(v___x_2904_);
lean_dec_ref(v___x_2904_);
return v___x_2905_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0___boxed(lean_object* v_x_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_x_2906_);
lean_dec(v_x_2906_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough(lean_object* v_self_2909_, lean_object* v_transform_2910_, lean_object* v_options_2911_){
_start:
{
lean_object* v_readable_2913_; lean_object* v_writable_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2954_; 
v_readable_2913_ = lean_ctor_get(v_transform_2910_, 0);
v_writable_2914_ = lean_ctor_get(v_transform_2910_, 1);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_transform_2910_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2916_ = v_transform_2910_;
v_isShared_2917_ = v_isSharedCheck_2954_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_writable_2914_);
lean_inc(v_readable_2913_);
lean_dec(v_transform_2910_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2954_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2922_; 
v___x_2918_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeThrough___closed__0));
v___x_2919_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_2920_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (v_isShared_2917_ == 0)
{
lean_ctor_set_tag(v___x_2916_, 9);
lean_ctor_set(v___x_2916_, 1, v___x_2920_);
v___x_2922_ = v___x_2916_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_readable_2913_);
lean_ctor_set(v_reuseFailAlloc_2953_, 1, v___x_2920_);
v___x_2922_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2919_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
v___x_2924_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_2925_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2925_, 0, v_writable_2914_);
lean_ctor_set(v___x_2925_, 1, v___x_2920_);
v___x_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2924_);
lean_ctor_set(v___x_2926_, 1, v___x_2925_);
v___x_2927_ = lean_unsigned_to_nat(2u);
v___x_2928_ = lean_mk_empty_array_with_capacity(v___x_2927_);
lean_inc_ref(v___x_2928_);
v___x_2929_ = lean_array_push(v___x_2928_, v___x_2923_);
v___x_2930_ = lean_array_push(v___x_2929_, v___x_2926_);
v___x_2931_ = l_Lasm_JS_Web_Support_fields(v___x_2930_);
lean_dec_ref(v___x_2930_);
v___x_2932_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2911_);
v___x_2933_ = lean_array_push(v___x_2928_, v___x_2931_);
v___x_2934_ = lean_array_push(v___x_2933_, v___x_2932_);
v___x_2935_ = l_Lasm_JS_Web_Support_args(v___x_2934_);
v___x_2936_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2909_, v___x_2918_, v___x_2935_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2944_; 
v_a_2937_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2939_ = v___x_2936_;
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v___x_2936_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2942_; 
if (v_isShared_2940_ == 0)
{
v___x_2942_ = v___x_2939_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2937_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
else
{
lean_object* v_a_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2952_; 
v_a_2945_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_2952_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2947_ = v___x_2936_;
v_isShared_2948_ = v_isSharedCheck_2952_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_a_2945_);
lean_dec(v___x_2936_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2952_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2950_; 
if (v_isShared_2948_ == 0)
{
v___x_2950_ = v___x_2947_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v_a_2945_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
return v___x_2950_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough___boxed(lean_object* v_self_2955_, lean_object* v_transform_2956_, lean_object* v_options_2957_, lean_object* v_a_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l_Lasm_JS_Web_ReadableStream_pipeThrough(v_self_2955_, v_transform_2956_, v_options_2957_);
lean_dec(v_options_2957_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo(lean_object* v_self_2961_, lean_object* v_destination_2962_, lean_object* v_options_2963_){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2965_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeTo___closed__0));
v___x_2966_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2967_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2967_, 0, v_destination_2962_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
v___x_2968_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2963_);
v___x_2969_ = lean_unsigned_to_nat(2u);
v___x_2970_ = lean_mk_empty_array_with_capacity(v___x_2969_);
v___x_2971_ = lean_array_push(v___x_2970_, v___x_2967_);
v___x_2972_ = lean_array_push(v___x_2971_, v___x_2968_);
v___x_2973_ = l_Lasm_JS_Web_Support_args(v___x_2972_);
v___x_2974_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2961_, v___x_2965_, v___x_2973_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo___boxed(lean_object* v_self_2975_, lean_object* v_destination_2976_, lean_object* v_options_2977_, lean_object* v_a_2978_){
_start:
{
lean_object* v_res_2979_; 
v_res_2979_ = l_Lasm_JS_Web_ReadableStream_pipeTo(v_self_2975_, v_destination_2976_, v_options_2977_);
lean_dec(v_options_2977_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2982_, size_t v_i_2983_, lean_object* v_bs_2984_){
_start:
{
uint8_t v___x_2985_; 
v___x_2985_ = lean_usize_dec_lt(v_i_2983_, v_sz_2982_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2986_; 
v___x_2986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2986_, 0, v_bs_2984_);
return v___x_2986_;
}
else
{
lean_object* v_v_2987_; 
v_v_2987_ = lean_array_uget_borrowed(v_bs_2984_, v_i_2983_);
if (lean_obj_tag(v_v_2987_) == 9)
{
lean_object* v_value_2988_; lean_object* v___x_2989_; lean_object* v_bs_x27_2990_; size_t v___x_2991_; size_t v___x_2992_; lean_object* v___x_2993_; 
v_value_2988_ = lean_ctor_get(v_v_2987_, 0);
lean_inc(v_value_2988_);
v___x_2989_ = lean_unsigned_to_nat(0u);
v_bs_x27_2990_ = lean_array_uset(v_bs_2984_, v_i_2983_, v___x_2989_);
v___x_2991_ = ((size_t)1ULL);
v___x_2992_ = lean_usize_add(v_i_2983_, v___x_2991_);
v___x_2993_ = lean_array_uset(v_bs_x27_2990_, v_i_2983_, v_value_2988_);
v_i_2983_ = v___x_2992_;
v_bs_2984_ = v___x_2993_;
goto _start;
}
else
{
lean_object* v___x_2995_; 
lean_dec_ref(v_bs_2984_);
v___x_2995_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2995_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2996_, lean_object* v_i_2997_, lean_object* v_bs_2998_){
_start:
{
size_t v_sz_boxed_2999_; size_t v_i_boxed_3000_; lean_object* v_res_3001_; 
v_sz_boxed_2999_ = lean_unbox_usize(v_sz_2996_);
lean_dec(v_sz_2996_);
v_i_boxed_3000_ = lean_unbox_usize(v_i_2997_);
lean_dec(v_i_2997_);
v_res_3001_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2999_, v_i_boxed_3000_, v_bs_2998_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(lean_object* v_context_3006_, lean_object* v_d_3007_){
_start:
{
lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3016_; lean_object* v_received_3017_; lean_object* v___y_3036_; lean_object* v_a_3039_; 
if (lean_obj_tag(v_d_3007_) == 7)
{
lean_object* v_items_3063_; size_t v_sz_3064_; size_t v___x_3065_; lean_object* v___x_3066_; 
v_items_3063_ = lean_ctor_get(v_d_3007_, 0);
v_sz_3064_ = lean_array_size(v_items_3063_);
v___x_3065_ = ((size_t)0ULL);
lean_inc_ref(v_items_3063_);
v___x_3066_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_3064_, v___x_3065_, v_items_3063_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; uint8_t v___x_3071_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
v___x_3068_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__3));
v___x_3069_ = lean_string_utf8_byte_size(v_a_3067_);
v___x_3070_ = lean_unsigned_to_nat(0u);
v___x_3071_ = lean_nat_dec_eq(v___x_3069_, v___x_3070_);
if (v___x_3071_ == 0)
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3072_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3073_ = lean_string_append(v___x_3072_, v_a_3067_);
lean_dec(v_a_3067_);
v___x_3074_ = lean_string_append(v___x_3068_, v___x_3073_);
lean_dec_ref(v___x_3073_);
v_a_3039_ = v___x_3074_;
goto v___jp_3038_;
}
else
{
lean_dec(v_a_3067_);
v_a_3039_ = v___x_3068_;
goto v___jp_3038_;
}
}
else
{
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3075_; 
v_a_3075_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3075_);
lean_dec_ref_known(v___x_3066_, 1);
v_a_3039_ = v_a_3075_;
goto v___jp_3038_;
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec_ref_known(v_d_3007_, 1);
v_a_3076_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3066_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3066_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
lean_ctor_set_tag(v___x_3078_, 0);
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
}
else
{
lean_object* v___x_3084_; 
v___x_3084_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v_a_3039_ = v___x_3084_;
goto v___jp_3038_;
}
v___jp_3009_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3012_ = lean_string_append(v___y_3010_, v___y_3011_);
lean_dec_ref(v___y_3011_);
v___x_3013_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3012_);
v___x_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3013_);
return v___x_3014_;
}
v___jp_3015_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; uint8_t v___x_3029_; 
v___x_3018_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3019_ = lean_string_append(v___x_3018_, v_context_3006_);
v___x_3020_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3021_ = lean_string_append(v___x_3019_, v___x_3020_);
v___x_3022_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__0));
v___x_3023_ = lean_string_append(v___x_3021_, v___x_3022_);
v___x_3024_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3025_ = lean_string_append(v___x_3023_, v___x_3024_);
v___x_3026_ = lean_string_append(v___x_3025_, v_received_3017_);
lean_dec_ref(v_received_3017_);
v___x_3027_ = lean_string_utf8_byte_size(v___y_3016_);
v___x_3028_ = lean_unsigned_to_nat(0u);
v___x_3029_ = lean_nat_dec_eq(v___x_3027_, v___x_3028_);
if (v___x_3029_ == 0)
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3030_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_3031_ = lean_string_append(v___x_3030_, v___y_3016_);
lean_dec_ref(v___y_3016_);
v___x_3032_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_3033_ = lean_string_append(v___x_3031_, v___x_3032_);
v___y_3010_ = v___x_3026_;
v___y_3011_ = v___x_3033_;
goto v___jp_3009_;
}
else
{
lean_object* v___x_3034_; 
lean_dec_ref(v___y_3016_);
v___x_3034_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_3010_ = v___x_3026_;
v___y_3011_ = v___x_3034_;
goto v___jp_3009_;
}
}
v___jp_3035_:
{
lean_object* v___x_3037_; 
v___x_3037_ = l_Lasm_JS_Data_describe(v_d_3007_);
v___y_3016_ = v___y_3036_;
v_received_3017_ = v___x_3037_;
goto v___jp_3015_;
}
v___jp_3038_:
{
if (lean_obj_tag(v_d_3007_) == 9)
{
lean_object* v_value_3040_; lean_object* v_description_3041_; lean_object* v___x_3042_; uint8_t v___x_3043_; 
v_value_3040_ = lean_ctor_get(v_d_3007_, 0);
v_description_3041_ = lean_ctor_get(v_d_3007_, 1);
v___x_3042_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3043_ = lean_string_dec_eq(v_description_3041_, v___x_3042_);
if (v___x_3043_ == 0)
{
v___y_3036_ = v_a_3039_;
goto v___jp_3035_;
}
else
{
lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3060_; 
lean_inc(v_value_3040_);
v_isSharedCheck_3060_ = !lean_is_exclusive(v_d_3007_);
if (v_isSharedCheck_3060_ == 0)
{
lean_object* v_unused_3061_; lean_object* v_unused_3062_; 
v_unused_3061_ = lean_ctor_get(v_d_3007_, 1);
lean_dec(v_unused_3061_);
v_unused_3062_ = lean_ctor_get(v_d_3007_, 0);
lean_dec(v_unused_3062_);
v___x_3045_ = v_d_3007_;
v_isShared_3046_ = v_isSharedCheck_3060_;
goto v_resetjp_3044_;
}
else
{
lean_dec(v_d_3007_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3060_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
uint32_t v___x_3047_; uint64_t v___x_3048_; lean_object* v___x_3050_; 
v___x_3047_ = 206;
v___x_3048_ = 0ULL;
lean_inc(v_value_3040_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 1, v___x_3042_);
v___x_3050_ = v___x_3045_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_value_3040_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v___x_3042_);
v___x_3050_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
uint32_t v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = lasm_js_value_handle(v_value_3040_);
lean_dec(v_value_3040_);
v___x_3052_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3047_, v___x_3048_, v___x_3050_, v___x_3051_);
lean_dec_ref(v___x_3050_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3053_; uint8_t v___x_3054_; 
v_a_3053_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3053_);
lean_dec_ref_known(v___x_3052_, 1);
v___x_3054_ = lean_string_validate_utf8(v_a_3053_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
lean_dec(v_a_3053_);
v___x_3055_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3056_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3055_);
v___y_3016_ = v_a_3039_;
v_received_3017_ = v___x_3056_;
goto v___jp_3015_;
}
else
{
lean_object* v___x_3057_; 
v___x_3057_ = lean_string_from_utf8_unchecked(v_a_3053_);
v___y_3016_ = v_a_3039_;
v_received_3017_ = v___x_3057_;
goto v___jp_3015_;
}
}
else
{
lean_object* v___x_3058_; 
lean_dec_ref_known(v___x_3052_, 1);
v___x_3058_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v___y_3016_ = v_a_3039_;
v_received_3017_ = v___x_3058_;
goto v___jp_3015_;
}
}
}
}
}
else
{
v___y_3036_ = v_a_3039_;
goto v___jp_3035_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3085_, lean_object* v_d_3086_, lean_object* v_a_3087_){
_start:
{
lean_object* v_res_3088_; 
v_res_3088_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3085_, v_d_3086_);
lean_dec_ref(v_context_3085_);
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(lean_object* v_context_3089_, lean_object* v_bytes_3090_){
_start:
{
lean_object* v___x_3092_; 
v___x_3092_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3090_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_object* v_a_3093_; lean_object* v___x_3094_; 
v_a_3093_ = lean_ctor_get(v___x_3092_, 0);
lean_inc(v_a_3093_);
lean_dec_ref_known(v___x_3092_, 1);
v___x_3094_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3089_, v_a_3093_);
return v___x_3094_;
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
v_a_3095_ = lean_ctor_get(v___x_3092_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3092_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3092_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1___boxed(lean_object* v_context_3103_, lean_object* v_bytes_3104_, lean_object* v_a_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v_context_3103_, v_bytes_3104_);
lean_dec_ref(v_bytes_3104_);
lean_dec_ref(v_context_3103_);
return v_res_3106_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(uint8_t v_await_3107_, uint64_t v_extra_3108_){
_start:
{
uint64_t v___x_3109_; uint64_t v___y_3111_; 
v___x_3109_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3107_ == 0)
{
uint64_t v___x_3114_; 
v___x_3114_ = 0ULL;
v___y_3111_ = v___x_3114_;
goto v___jp_3110_;
}
else
{
uint64_t v___x_3115_; 
v___x_3115_ = 2ULL;
v___y_3111_ = v___x_3115_;
goto v___jp_3110_;
}
v___jp_3110_:
{
uint64_t v___x_3112_; uint64_t v___x_3113_; 
v___x_3112_ = lean_uint64_lor(v___x_3109_, v___y_3111_);
v___x_3113_ = lean_uint64_lor(v___x_3112_, v_extra_3108_);
return v___x_3113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0___boxed(lean_object* v_await_3116_, lean_object* v_extra_3117_){
_start:
{
uint8_t v_await_boxed_3118_; uint64_t v_extra_boxed_3119_; uint64_t v_res_3120_; lean_object* v_r_3121_; 
v_await_boxed_3118_ = lean_unbox(v_await_3116_);
v_extra_boxed_3119_ = lean_unbox_uint64(v_extra_3117_);
lean_dec_ref(v_extra_3117_);
v_res_3120_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v_await_boxed_3118_, v_extra_boxed_3119_);
v_r_3121_ = lean_box_uint64(v_res_3120_);
return v_r_3121_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3122_; uint8_t v___x_3123_; uint64_t v___x_3124_; 
v___x_3122_ = 8ULL;
v___x_3123_ = 0;
v___x_3124_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v___x_3123_, v___x_3122_);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(lean_object* v_o_3125_, lean_object* v_name_3126_, lean_object* v_args_3127_){
_start:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; uint64_t v___x_3132_; lean_object* v___x_3133_; 
v___x_3129_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3130_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3130_, 0, v_o_3125_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
lean_inc_ref(v_name_3126_);
v___x_3131_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3131_, 0, v_name_3126_);
v___x_3132_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0);
v___x_3133_ = l_Lasm_JS_Value_invokeRaw(v___x_3130_, v___x_3131_, v_args_3127_, v___x_3132_);
if (lean_obj_tag(v___x_3133_) == 0)
{
lean_object* v_a_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v_a_3134_ = lean_ctor_get(v___x_3133_, 0);
lean_inc(v_a_3134_);
lean_dec_ref_known(v___x_3133_, 1);
v___x_3135_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3136_ = lean_string_append(v___x_3135_, v_name_3126_);
lean_dec_ref(v_name_3126_);
v___x_3137_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v___x_3136_, v_a_3134_);
lean_dec(v_a_3134_);
lean_dec_ref(v___x_3136_);
return v___x_3137_;
}
else
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3145_; 
lean_dec_ref(v_name_3126_);
v_a_3138_ = lean_ctor_get(v___x_3133_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3133_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3140_ = v___x_3133_;
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v___x_3133_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v_a_3138_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___boxed(lean_object* v_o_3146_, lean_object* v_name_3147_, lean_object* v_args_3148_, lean_object* v_a_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_o_3146_, v_name_3147_, v_args_3148_);
return v_res_3150_;
}
}
static lean_object* _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2(void){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3154_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__1));
v___x_3155_ = l_Lasm_JS_Web_Support_args(v___x_3154_);
return v___x_3155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee(lean_object* v_self_3156_){
_start:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__0));
v___x_3159_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3160_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_self_3156_, v___x_3158_, v___x_3159_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee___boxed(lean_object* v_self_3161_, lean_object* v_a_3162_){
_start:
{
lean_object* v_res_3163_; 
v_res_3163_ = l_Lasm_JS_Web_ReadableStream_tee(v_self_3161_);
return v_res_3163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f(lean_object* v_v_3170_){
_start:
{
lean_object* v___f_3172_; lean_object* v___x_3173_; 
v___f_3172_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___closed__2));
lean_inc(v_v_3170_);
v___x_3173_ = l_Lasm_JS_Web_Support_isInstance(v___f_3172_, v_v_3170_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_object* v_a_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3187_; 
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3187_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3176_ = v___x_3173_;
v_isShared_3177_ = v_isSharedCheck_3187_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_a_3174_);
lean_dec(v___x_3173_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3187_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
uint8_t v___x_3178_; 
v___x_3178_ = lean_unbox(v_a_3174_);
lean_dec(v_a_3174_);
if (v___x_3178_ == 0)
{
lean_object* v___x_3179_; lean_object* v___x_3181_; 
lean_dec(v_v_3170_);
v___x_3179_ = lean_box(0);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 0, v___x_3179_);
v___x_3181_ = v___x_3176_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v___x_3179_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
else
{
lean_object* v___x_3183_; lean_object* v___x_3185_; 
v___x_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3183_, 0, v_v_3170_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 0, v___x_3183_);
v___x_3185_ = v___x_3176_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v___x_3183_);
v___x_3185_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
return v___x_3185_;
}
}
}
}
else
{
lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3195_; 
lean_dec(v_v_3170_);
v_a_3188_ = lean_ctor_get(v___x_3173_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3173_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3190_ = v___x_3173_;
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___x_3173_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3193_; 
if (v_isShared_3191_ == 0)
{
v___x_3193_ = v___x_3190_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_a_3188_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f___boxed(lean_object* v_v_3196_, lean_object* v_a_3197_){
_start:
{
lean_object* v_res_3198_; 
v_res_3198_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_cast_x3f(v_v_3196_);
return v_res_3198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(lean_object* v_context_3199_, lean_object* v_d_3200_){
_start:
{
lean_object* v___y_3203_; lean_object* v___y_3204_; 
if (lean_obj_tag(v_d_3200_) == 9)
{
lean_object* v_value_3208_; lean_object* v___x_3209_; 
v_value_3208_ = lean_ctor_get(v_d_3200_, 0);
lean_inc(v_value_3208_);
lean_dec_ref_known(v_d_3200_, 2);
v___x_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3209_, 0, v_value_3208_);
return v___x_3209_;
}
else
{
lean_object* v___x_3210_; lean_object* v_received_3212_; 
v___x_3210_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_3200_) == 9)
{
lean_object* v_value_3226_; lean_object* v_description_3227_; uint8_t v___x_3228_; 
v_value_3226_ = lean_ctor_get(v_d_3200_, 0);
v_description_3227_ = lean_ctor_get(v_d_3200_, 1);
v___x_3228_ = lean_string_dec_eq(v_description_3227_, v___x_3210_);
if (v___x_3228_ == 0)
{
goto v___jp_3224_;
}
else
{
uint32_t v___x_3229_; uint64_t v___x_3230_; lean_object* v___x_3231_; uint32_t v___x_3232_; lean_object* v___x_3233_; 
lean_inc_n(v_value_3226_, 2);
lean_dec_ref_known(v_d_3200_, 2);
v___x_3229_ = 206;
v___x_3230_ = 0ULL;
v___x_3231_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3231_, 0, v_value_3226_);
lean_ctor_set(v___x_3231_, 1, v___x_3210_);
v___x_3232_ = lasm_js_value_handle(v_value_3226_);
lean_dec(v_value_3226_);
v___x_3233_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3229_, v___x_3230_, v___x_3231_, v___x_3232_);
lean_dec_ref_known(v___x_3231_, 2);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v_a_3234_; uint8_t v___x_3235_; 
v_a_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3233_, 1);
v___x_3235_ = lean_string_validate_utf8(v_a_3234_);
if (v___x_3235_ == 0)
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
lean_dec(v_a_3234_);
v___x_3236_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3237_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3236_);
v_received_3212_ = v___x_3237_;
goto v___jp_3211_;
}
else
{
lean_object* v___x_3238_; 
v___x_3238_ = lean_string_from_utf8_unchecked(v_a_3234_);
v_received_3212_ = v___x_3238_;
goto v___jp_3211_;
}
}
else
{
lean_object* v___x_3239_; 
lean_dec_ref_known(v___x_3233_, 1);
v___x_3239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_3212_ = v___x_3239_;
goto v___jp_3211_;
}
}
}
else
{
goto v___jp_3224_;
}
v___jp_3211_:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; uint8_t v___x_3222_; 
v___x_3213_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3214_ = lean_string_append(v___x_3213_, v_context_3199_);
v___x_3215_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3216_ = lean_string_append(v___x_3214_, v___x_3215_);
v___x_3217_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0));
v___x_3218_ = lean_string_append(v___x_3216_, v___x_3217_);
v___x_3219_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3220_ = lean_string_append(v___x_3218_, v___x_3219_);
v___x_3221_ = lean_string_append(v___x_3220_, v_received_3212_);
lean_dec_ref(v_received_3212_);
v___x_3222_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3222_ == 0)
{
lean_object* v___x_3223_; 
v___x_3223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_3203_ = v___x_3221_;
v___y_3204_ = v___x_3223_;
goto v___jp_3202_;
}
else
{
v___y_3203_ = v___x_3221_;
v___y_3204_ = v___x_3210_;
goto v___jp_3202_;
}
}
v___jp_3224_:
{
lean_object* v___x_3225_; 
v___x_3225_ = l_Lasm_JS_Data_describe(v_d_3200_);
v_received_3212_ = v___x_3225_;
goto v___jp_3211_;
}
}
v___jp_3202_:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3205_ = lean_string_append(v___y_3203_, v___y_3204_);
v___x_3206_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
v___x_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3206_);
return v___x_3207_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0___boxed(lean_object* v_context_3240_, lean_object* v_d_3241_, lean_object* v_a_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v_context_3240_, v_d_3241_);
lean_dec_ref(v_context_3240_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(lean_object* v_b_3244_, lean_object* v_args_3245_, uint8_t v_await_3246_){
_start:
{
uint64_t v___y_3249_; uint64_t v___y_3250_; uint64_t v___x_3293_; uint64_t v___y_3295_; 
v___x_3293_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3246_ == 0)
{
uint64_t v___x_3300_; 
v___x_3300_ = 0ULL;
v___y_3295_ = v___x_3300_;
goto v___jp_3294_;
}
else
{
uint64_t v___x_3301_; 
v___x_3301_ = 2ULL;
v___y_3295_ = v___x_3301_;
goto v___jp_3294_;
}
v___jp_3248_:
{
uint64_t v_flags_3251_; uint32_t v___x_3252_; lean_object* v___x_3253_; uint32_t v___x_3254_; lean_object* v___x_3255_; 
v_flags_3251_ = lean_uint64_lor(v___y_3249_, v___y_3250_);
v___x_3252_ = 214;
v___x_3253_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3244_, v_args_3245_);
v___x_3254_ = 0;
v___x_3255_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3252_, v_flags_3251_, v___x_3253_, v___x_3254_);
lean_dec(v___x_3253_);
if (lean_obj_tag(v___x_3255_) == 0)
{
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v_a_3256_; lean_object* v___x_3257_; 
v_a_3256_ = lean_ctor_get(v___x_3255_, 0);
lean_inc(v_a_3256_);
lean_dec_ref_known(v___x_3255_, 1);
v___x_3257_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3256_);
lean_dec(v_a_3256_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_a_3258_);
lean_dec_ref_known(v___x_3257_, 1);
v___x_3259_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3244_);
v___x_3260_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v___x_3259_, v_a_3258_);
lean_dec_ref(v___x_3259_);
return v___x_3260_;
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
v_a_3261_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3257_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3257_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
v_a_3269_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3255_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3255_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
lean_ctor_set_tag(v___x_3271_, 1);
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3292_; 
v_a_3277_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3279_ = v___x_3255_;
v_isShared_3280_ = v_isSharedCheck_3292_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3255_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3292_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3290_; 
v___x_3281_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3282_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3244_);
v___x_3283_ = lean_string_append(v___x_3281_, v___x_3282_);
lean_dec_ref(v___x_3282_);
v___x_3284_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3285_ = lean_string_append(v___x_3283_, v___x_3284_);
v___x_3286_ = lean_io_error_to_string(v_a_3277_);
v___x_3287_ = lean_string_append(v___x_3285_, v___x_3286_);
lean_dec_ref(v___x_3286_);
v___x_3288_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3287_);
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 0, v___x_3288_);
v___x_3290_ = v___x_3279_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3288_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
v___jp_3294_:
{
uint8_t v_construct_3296_; uint64_t v___x_3297_; 
v_construct_3296_ = lean_ctor_get_uint8(v_b_3244_, sizeof(void*)*4);
v___x_3297_ = lean_uint64_lor(v___x_3293_, v___y_3295_);
if (v_construct_3296_ == 0)
{
uint64_t v___x_3298_; 
v___x_3298_ = 0ULL;
v___y_3249_ = v___x_3297_;
v___y_3250_ = v___x_3298_;
goto v___jp_3248_;
}
else
{
uint64_t v___x_3299_; 
v___x_3299_ = 4ULL;
v___y_3249_ = v___x_3297_;
v___y_3250_ = v___x_3299_;
goto v___jp_3248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0___boxed(lean_object* v_b_3302_, lean_object* v_args_3303_, lean_object* v_await_3304_, lean_object* v_a_3305_){
_start:
{
uint8_t v_await_boxed_3306_; lean_object* v_res_3307_; 
v_await_boxed_3306_ = lean_unbox(v_await_3304_);
v_res_3307_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v_b_3302_, v_args_3303_, v_await_boxed_3306_);
lean_dec_ref(v_b_3302_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new(lean_object* v_stream_3315_){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; uint8_t v___x_3324_; lean_object* v___x_3325_; 
v___x_3317_ = lean_unsigned_to_nat(1u);
v___x_3318_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__1));
v___x_3319_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3320_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3320_, 0, v_stream_3315_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
v___x_3321_ = lean_mk_empty_array_with_capacity(v___x_3317_);
v___x_3322_ = lean_array_push(v___x_3321_, v___x_3320_);
v___x_3323_ = l_Lasm_JS_Web_Support_args(v___x_3322_);
v___x_3324_ = 0;
v___x_3325_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v___x_3318_, v___x_3323_, v___x_3324_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___boxed(lean_object* v_stream_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_new(v_stream_3326_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(lean_object* v___f_3329_, lean_object* v_a_3330_, lean_object* v___x_3331_, lean_object* v_x_3332_){
_start:
{
if (lean_obj_tag(v_x_3332_) == 0)
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3342_; 
lean_dec_ref(v___f_3329_);
v_a_3334_ = lean_ctor_get(v_x_3332_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v_x_3332_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3336_ = v_x_3332_;
v_isShared_3337_ = v_isSharedCheck_3342_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v_x_3332_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3342_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3340_; 
v___x_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
return v___x_3340_;
}
}
}
else
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3362_; 
v_a_3343_ = lean_ctor_get(v_x_3332_, 0);
v_isSharedCheck_3362_ = !lean_is_exclusive(v_x_3332_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3345_ = v_x_3332_;
v_isShared_3346_ = v_isSharedCheck_3362_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v_x_3332_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3362_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3347_; uint8_t v___x_3348_; lean_object* v_val_3350_; lean_object* v___x_3353_; 
v___x_3347_ = lean_unsigned_to_nat(0u);
v___x_3348_ = 0;
v___x_3353_ = lasm_js_await_into(v_a_3330_, v_a_3343_, v___x_3331_);
lean_dec(v_a_3343_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3354_);
lean_dec_ref_known(v___x_3353_, 1);
if (v_isShared_3346_ == 0)
{
lean_ctor_set(v___x_3345_, 0, v_a_3354_);
v___x_3356_ = v___x_3345_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_a_3354_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
v_val_3350_ = v___x_3356_;
goto v___jp_3349_;
}
}
else
{
lean_object* v_a_3358_; lean_object* v___x_3360_; 
v_a_3358_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3358_);
lean_dec_ref_known(v___x_3353_, 1);
if (v_isShared_3346_ == 0)
{
lean_ctor_set_tag(v___x_3345_, 0);
lean_ctor_set(v___x_3345_, 0, v_a_3358_);
v___x_3360_ = v___x_3345_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_a_3358_);
v___x_3360_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
v_val_3350_ = v___x_3360_;
goto v___jp_3349_;
}
}
v___jp_3349_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v_val_3350_);
v___x_3352_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3347_, v___x_3348_, v___x_3351_, v___f_3329_);
return v___x_3352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed(lean_object* v___f_3363_, lean_object* v_a_3364_, lean_object* v___x_3365_, lean_object* v_x_3366_, lean_object* v___y_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(v___f_3363_, v_a_3364_, v___x_3365_, v_x_3366_);
lean_dec(v___x_3365_);
lean_dec(v_a_3364_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(lean_object* v_a_3369_, lean_object* v___f_3370_, lean_object* v_x_3371_){
_start:
{
if (lean_obj_tag(v_x_3371_) == 0)
{
lean_object* v___x_3373_; 
lean_dec_ref(v___f_3370_);
v___x_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3373_, 0, v_x_3371_);
return v___x_3373_;
}
else
{
lean_object* v___x_3374_; uint8_t v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
lean_dec_ref_known(v_x_3371_, 1);
v___x_3374_ = lean_unsigned_to_nat(0u);
v___x_3375_ = 0;
v___x_3376_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3369_);
v___x_3377_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3374_, v___x_3375_, v___x_3376_, v___f_3370_);
return v___x_3377_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed(lean_object* v_a_3378_, lean_object* v___f_3379_, lean_object* v_x_3380_, lean_object* v___y_3381_){
_start:
{
lean_object* v_res_3382_; 
v_res_3382_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(v_a_3378_, v___f_3379_, v_x_3380_);
lean_dec(v_a_3378_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(lean_object* v___f_3383_, lean_object* v_v_3384_, lean_object* v_x_3385_){
_start:
{
if (lean_obj_tag(v_x_3385_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3395_; 
lean_dec(v_v_3384_);
lean_dec_ref(v___f_3383_);
v_a_3387_ = lean_ctor_get(v_x_3385_, 0);
v_isSharedCheck_3395_ = !lean_is_exclusive(v_x_3385_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3389_ = v_x_3385_;
v_isShared_3390_ = v_isSharedCheck_3395_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v_x_3385_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3395_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_a_3387_);
v___x_3392_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
lean_object* v___x_3393_; 
v___x_3393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
return v___x_3393_;
}
}
}
else
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3419_; 
v_a_3396_ = lean_ctor_get(v_x_3385_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v_x_3385_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3398_ = v_x_3385_;
v_isShared_3399_ = v_isSharedCheck_3419_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v_x_3385_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3419_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___f_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___f_3403_; lean_object* v___x_3404_; uint8_t v___x_3405_; lean_object* v_val_3407_; lean_object* v___x_3410_; 
lean_inc(v_a_3396_);
v___f_3400_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3400_, 0, v_a_3396_);
lean_closure_set(v___f_3400_, 1, v___f_3383_);
v___x_3401_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3402_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3402_, 0, v_v_3384_);
lean_ctor_set(v___x_3402_, 1, v___x_3401_);
lean_inc_ref(v___x_3402_);
v___f_3403_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3403_, 0, v___f_3400_);
lean_closure_set(v___f_3403_, 1, v_a_3396_);
lean_closure_set(v___f_3403_, 2, v___x_3402_);
v___x_3404_ = lean_unsigned_to_nat(0u);
v___x_3405_ = 0;
v___x_3410_ = l_Lasm_JS_Wire_encodeIO(v___x_3402_);
lean_dec_ref_known(v___x_3402_, 2);
if (lean_obj_tag(v___x_3410_) == 0)
{
lean_object* v_a_3411_; lean_object* v___x_3413_; 
v_a_3411_ = lean_ctor_get(v___x_3410_, 0);
lean_inc(v_a_3411_);
lean_dec_ref_known(v___x_3410_, 1);
if (v_isShared_3399_ == 0)
{
lean_ctor_set(v___x_3398_, 0, v_a_3411_);
v___x_3413_ = v___x_3398_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v_a_3411_);
v___x_3413_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
v_val_3407_ = v___x_3413_;
goto v___jp_3406_;
}
}
else
{
lean_object* v_a_3415_; lean_object* v___x_3417_; 
v_a_3415_ = lean_ctor_get(v___x_3410_, 0);
lean_inc(v_a_3415_);
lean_dec_ref_known(v___x_3410_, 1);
if (v_isShared_3399_ == 0)
{
lean_ctor_set_tag(v___x_3398_, 0);
lean_ctor_set(v___x_3398_, 0, v_a_3415_);
v___x_3417_ = v___x_3398_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3415_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
v_val_3407_ = v___x_3417_;
goto v___jp_3406_;
}
}
v___jp_3406_:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3408_, 0, v_val_3407_);
v___x_3409_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3404_, v___x_3405_, v___x_3408_, v___f_3403_);
return v___x_3409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed(lean_object* v___f_3420_, lean_object* v_v_3421_, lean_object* v_x_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(v___f_3420_, v_v_3421_, v_x_3422_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(lean_object* v___f_3425_, lean_object* v_x_3426_){
_start:
{
if (lean_obj_tag(v_x_3426_) == 0)
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3436_; 
lean_dec_ref(v___f_3425_);
v_a_3428_ = lean_ctor_get(v_x_3426_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v_x_3426_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3430_ = v_x_3426_;
v_isShared_3431_ = v_isSharedCheck_3436_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v_x_3426_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3436_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
lean_object* v___x_3434_; 
v___x_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3433_);
return v___x_3434_;
}
}
}
else
{
lean_object* v_a_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3456_; 
v_a_3437_ = lean_ctor_get(v_x_3426_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_x_3426_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3439_ = v_x_3426_;
v_isShared_3440_ = v_isSharedCheck_3456_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_a_3437_);
lean_dec(v_x_3426_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3456_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3441_; uint8_t v___x_3442_; lean_object* v_val_3444_; lean_object* v___x_3447_; 
v___x_3441_ = lean_unsigned_to_nat(0u);
v___x_3442_ = 0;
v___x_3447_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3437_);
lean_dec(v_a_3437_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v_a_3448_; lean_object* v___x_3450_; 
v_a_3448_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3448_);
lean_dec_ref_known(v___x_3447_, 1);
if (v_isShared_3440_ == 0)
{
lean_ctor_set(v___x_3439_, 0, v_a_3448_);
v___x_3450_ = v___x_3439_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_a_3448_);
v___x_3450_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
v_val_3444_ = v___x_3450_;
goto v___jp_3443_;
}
}
else
{
lean_object* v_a_3452_; lean_object* v___x_3454_; 
v_a_3452_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3452_);
lean_dec_ref_known(v___x_3447_, 1);
if (v_isShared_3440_ == 0)
{
lean_ctor_set_tag(v___x_3439_, 0);
lean_ctor_set(v___x_3439_, 0, v_a_3452_);
v___x_3454_ = v___x_3439_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3452_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
v_val_3444_ = v___x_3454_;
goto v___jp_3443_;
}
}
v___jp_3443_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3445_, 0, v_val_3444_);
v___x_3446_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3441_, v___x_3442_, v___x_3445_, v___f_3425_);
return v___x_3446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1___boxed(lean_object* v___f_3457_, lean_object* v_x_3458_, lean_object* v___y_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(v___f_3457_, v_x_3458_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object* v_v_3463_){
_start:
{
lean_object* v___f_3465_; lean_object* v___f_3466_; lean_object* v___f_3467_; lean_object* v___x_3468_; uint8_t v___x_3469_; lean_object* v_val_3471_; lean_object* v___x_3474_; 
v___f_3465_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___closed__0));
v___f_3466_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3466_, 0, v___f_3465_);
lean_closure_set(v___f_3466_, 1, v_v_3463_);
v___f_3467_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3467_, 0, v___f_3466_);
v___x_3468_ = lean_unsigned_to_nat(0u);
v___x_3469_ = 0;
v___x_3474_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
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
v___x_3473_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3468_, v___x_3469_, v___x_3472_, v___f_3467_);
return v___x_3473_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___boxed(lean_object* v_v_3491_, lean_object* v___y_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_v_3491_);
return v_res_3493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(lean_object* v_x_3494_){
_start:
{
if (lean_obj_tag(v_x_3494_) == 0)
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3504_; 
v_a_3496_ = lean_ctor_get(v_x_3494_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v_x_3494_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3498_ = v_x_3494_;
v_isShared_3499_ = v_isSharedCheck_3504_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v_x_3494_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3504_;
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
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3496_);
v___x_3501_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3502_; 
v___x_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
return v___x_3502_;
}
}
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3506_; 
v_a_3505_ = lean_ctor_get(v_x_3494_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v_x_3494_, 1);
v___x_3506_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_3505_);
return v___x_3506_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0___boxed(lean_object* v_x_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v_res_3509_; 
v_res_3509_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(v_x_3507_);
return v_res_3509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(lean_object* v_self_3512_){
_start:
{
lean_object* v___f_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; uint8_t v___x_3517_; lean_object* v_val_3519_; lean_object* v___x_3522_; 
v___f_3514_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_3515_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_3516_ = lean_unsigned_to_nat(0u);
v___x_3517_ = 0;
v___x_3522_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3512_, v___x_3515_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3530_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3525_ = v___x_3522_;
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3522_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3530_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3528_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set_tag(v___x_3525_, 1);
v___x_3528_ = v___x_3525_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3523_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
v_val_3519_ = v___x_3528_;
goto v___jp_3518_;
}
}
}
else
{
lean_object* v_a_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3538_; 
v_a_3531_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3533_ = v___x_3522_;
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_a_3531_);
lean_dec(v___x_3522_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3538_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3536_; 
if (v_isShared_3534_ == 0)
{
lean_ctor_set_tag(v___x_3533_, 0);
v___x_3536_ = v___x_3533_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v_a_3531_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
v_val_3519_ = v___x_3536_;
goto v___jp_3518_;
}
}
}
v___jp_3518_:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3520_, 0, v_val_3519_);
v___x_3521_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3516_, v___x_3517_, v___x_3520_, v___f_3514_);
return v___x_3521_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___boxed(lean_object* v_self_3539_, lean_object* v_a_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(v_self_3539_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_3542_, uint32_t v_op_3543_, uint64_t v_flags_3544_, lean_object* v_payload_3545_, lean_object* v___f_3546_, lean_object* v___f_3547_, lean_object* v___f_3548_, lean_object* v_x_3549_){
_start:
{
if (lean_obj_tag(v_x_3549_) == 0)
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3559_; 
lean_dec_ref(v___f_3548_);
lean_dec_ref(v___f_3547_);
lean_dec_ref(v___f_3546_);
lean_dec(v_payload_3545_);
v_a_3551_ = lean_ctor_get(v_x_3549_, 0);
v_isSharedCheck_3559_ = !lean_is_exclusive(v_x_3549_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3553_ = v_x_3549_;
v_isShared_3554_ = v_isSharedCheck_3559_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v_x_3549_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3559_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
lean_object* v___x_3557_; 
v___x_3557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3556_);
return v___x_3557_;
}
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3606_; 
v_a_3560_ = lean_ctor_get(v_x_3549_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v_x_3549_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3562_ = v_x_3549_;
v_isShared_3563_ = v_isSharedCheck_3606_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v_x_3549_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3606_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3564_; lean_object* v___x_3565_; uint8_t v___x_3566_; 
v___x_3564_ = lean_string_utf8_byte_size(v_failurePrefix_3542_);
v___x_3565_ = lean_unsigned_to_nat(0u);
v___x_3566_ = lean_nat_dec_eq(v___x_3564_, v___x_3565_);
if (v___x_3566_ == 0)
{
lean_object* v___f_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___f_3571_; lean_object* v_val_3573_; lean_object* v___x_3578_; 
lean_dec_ref(v___f_3548_);
lean_inc(v_a_3560_);
v___f_3567_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3567_, 0, v_a_3560_);
v___x_3568_ = lean_box(v___x_3566_);
v___x_3569_ = lean_box_uint32(v_op_3543_);
v___x_3570_ = lean_box_uint64(v_flags_3544_);
lean_inc(v_payload_3545_);
v___f_3571_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3571_, 0, v___x_3565_);
lean_closure_set(v___f_3571_, 1, v___x_3568_);
lean_closure_set(v___f_3571_, 2, v___f_3567_);
lean_closure_set(v___f_3571_, 3, v_a_3560_);
lean_closure_set(v___f_3571_, 4, v___x_3569_);
lean_closure_set(v___f_3571_, 5, v___x_3570_);
lean_closure_set(v___f_3571_, 6, v_payload_3545_);
v___x_3578_ = l_Lasm_JS_Wire_encodeIO(v_payload_3545_);
lean_dec(v_payload_3545_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3581_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3579_);
lean_dec_ref_known(v___x_3578_, 1);
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v_a_3579_);
v___x_3581_ = v___x_3562_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_a_3579_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
v_val_3573_ = v___x_3581_;
goto v___jp_3572_;
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; 
v_a_3583_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3583_);
lean_dec_ref_known(v___x_3578_, 1);
if (v_isShared_3563_ == 0)
{
lean_ctor_set_tag(v___x_3562_, 0);
lean_ctor_set(v___x_3562_, 0, v_a_3583_);
v___x_3585_ = v___x_3562_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3583_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
v_val_3573_ = v___x_3585_;
goto v___jp_3572_;
}
}
v___jp_3572_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3574_, 0, v_val_3573_);
v___x_3575_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3565_, v___x_3566_, v___x_3574_, v___f_3571_);
v___x_3576_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3565_, v___x_3566_, v___x_3575_, v___f_3546_);
v___x_3577_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3565_, v___x_3566_, v___x_3576_, v___f_3547_);
return v___x_3577_;
}
}
else
{
lean_object* v___f_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___f_3590_; uint8_t v___x_3591_; lean_object* v_val_3593_; lean_object* v___x_3597_; 
lean_dec_ref(v___f_3547_);
lean_dec_ref(v___f_3546_);
lean_inc(v_a_3560_);
v___f_3587_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3587_, 0, v_a_3560_);
v___x_3588_ = lean_box_uint32(v_op_3543_);
v___x_3589_ = lean_box_uint64(v_flags_3544_);
lean_inc(v_payload_3545_);
v___f_3590_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3590_, 0, v___f_3587_);
lean_closure_set(v___f_3590_, 1, v_a_3560_);
lean_closure_set(v___f_3590_, 2, v___x_3588_);
lean_closure_set(v___f_3590_, 3, v___x_3589_);
lean_closure_set(v___f_3590_, 4, v_payload_3545_);
v___x_3591_ = 0;
v___x_3597_ = l_Lasm_JS_Wire_encodeIO(v_payload_3545_);
lean_dec(v_payload_3545_);
if (lean_obj_tag(v___x_3597_) == 0)
{
lean_object* v_a_3598_; lean_object* v___x_3600_; 
v_a_3598_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_a_3598_);
lean_dec_ref_known(v___x_3597_, 1);
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v_a_3598_);
v___x_3600_ = v___x_3562_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_a_3598_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
v_val_3593_ = v___x_3600_;
goto v___jp_3592_;
}
}
else
{
lean_object* v_a_3602_; lean_object* v___x_3604_; 
v_a_3602_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_a_3602_);
lean_dec_ref_known(v___x_3597_, 1);
if (v_isShared_3563_ == 0)
{
lean_ctor_set_tag(v___x_3562_, 0);
lean_ctor_set(v___x_3562_, 0, v_a_3602_);
v___x_3604_ = v___x_3562_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_a_3602_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
v_val_3593_ = v___x_3604_;
goto v___jp_3592_;
}
}
v___jp_3592_:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3594_, 0, v_val_3593_);
v___x_3595_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3565_, v___x_3591_, v___x_3594_, v___f_3590_);
v___x_3596_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3565_, v___x_3591_, v___x_3595_, v___f_3548_);
return v___x_3596_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_3607_, lean_object* v_op_3608_, lean_object* v_flags_3609_, lean_object* v_payload_3610_, lean_object* v___f_3611_, lean_object* v___f_3612_, lean_object* v___f_3613_, lean_object* v_x_3614_, lean_object* v___y_3615_){
_start:
{
uint32_t v_op_boxed_3616_; uint64_t v_flags_boxed_3617_; lean_object* v_res_3618_; 
v_op_boxed_3616_ = lean_unbox_uint32(v_op_3608_);
lean_dec(v_op_3608_);
v_flags_boxed_3617_ = lean_unbox_uint64(v_flags_3609_);
lean_dec_ref(v_flags_3609_);
v_res_3618_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(v_failurePrefix_3607_, v_op_boxed_3616_, v_flags_boxed_3617_, v_payload_3610_, v___f_3611_, v___f_3612_, v___f_3613_, v_x_3614_);
lean_dec_ref(v_failurePrefix_3607_);
return v_res_3618_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(lean_object* v___f_3619_, lean_object* v_x_3620_){
_start:
{
if (lean_obj_tag(v_x_3620_) == 0)
{
lean_object* v_a_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3630_; 
lean_dec_ref(v___f_3619_);
v_a_3622_ = lean_ctor_get(v_x_3620_, 0);
v_isSharedCheck_3630_ = !lean_is_exclusive(v_x_3620_);
if (v_isSharedCheck_3630_ == 0)
{
v___x_3624_ = v_x_3620_;
v_isShared_3625_ = v_isSharedCheck_3630_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_a_3622_);
lean_dec(v_x_3620_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3630_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_a_3622_);
v___x_3627_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
lean_object* v___x_3628_; 
v___x_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
return v___x_3628_;
}
}
}
else
{
lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3642_; 
v_isSharedCheck_3642_ = !lean_is_exclusive(v_x_3620_);
if (v_isSharedCheck_3642_ == 0)
{
lean_object* v_unused_3643_; 
v_unused_3643_ = lean_ctor_get(v_x_3620_, 0);
lean_dec(v_unused_3643_);
v___x_3632_ = v_x_3620_;
v_isShared_3633_ = v_isSharedCheck_3642_;
goto v_resetjp_3631_;
}
else
{
lean_dec(v_x_3620_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3642_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3634_; uint8_t v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3638_; 
v___x_3634_ = lean_unsigned_to_nat(0u);
v___x_3635_ = 0;
v___x_3636_ = lean_io_promise_new();
if (v_isShared_3633_ == 0)
{
lean_ctor_set(v___x_3632_, 0, v___x_3636_);
v___x_3638_ = v___x_3632_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v___x_3636_);
v___x_3638_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3638_);
v___x_3640_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3634_, v___x_3635_, v___x_3639_, v___f_3619_);
return v___x_3640_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed(lean_object* v___f_3644_, lean_object* v_x_3645_, lean_object* v___y_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(v___f_3644_, v_x_3645_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(lean_object* v___f_3648_, lean_object* v_bytes_3649_){
_start:
{
lean_object* v___x_3651_; uint8_t v___x_3652_; lean_object* v_val_3654_; lean_object* v___x_3657_; 
v___x_3651_ = lean_unsigned_to_nat(0u);
v___x_3652_ = 0;
v___x_3657_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3649_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_a_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3665_; 
v_a_3658_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3660_ = v___x_3657_;
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_a_3658_);
lean_dec(v___x_3657_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3663_; 
if (v_isShared_3661_ == 0)
{
lean_ctor_set_tag(v___x_3660_, 1);
v___x_3663_ = v___x_3660_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v_a_3658_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
v_val_3654_ = v___x_3663_;
goto v___jp_3653_;
}
}
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
v_a_3666_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3657_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3657_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
lean_ctor_set_tag(v___x_3668_, 0);
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
v_val_3654_ = v___x_3671_;
goto v___jp_3653_;
}
}
}
v___jp_3653_:
{
lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3655_, 0, v_val_3654_);
v___x_3656_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3651_, v___x_3652_, v___x_3655_, v___f_3648_);
return v___x_3656_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed(lean_object* v___f_3674_, lean_object* v_bytes_3675_, lean_object* v___y_3676_){
_start:
{
lean_object* v_res_3677_; 
v_res_3677_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(v___f_3674_, v_bytes_3675_);
lean_dec_ref(v_bytes_3675_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_3687_, lean_object* v_key_3688_){
_start:
{
if (lean_obj_tag(v_d_3687_) == 8)
{
lean_object* v___x_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3720_; 
v___x_3691_ = l_Lasm_JS_Data_field(v_d_3687_, v_key_3688_);
v_isSharedCheck_3720_ = !lean_is_exclusive(v_d_3687_);
if (v_isSharedCheck_3720_ == 0)
{
lean_object* v_unused_3721_; 
v_unused_3721_ = lean_ctor_get(v_d_3687_, 0);
lean_dec(v_unused_3721_);
v___x_3693_ = v_d_3687_;
v_isShared_3694_ = v_isSharedCheck_3720_;
goto v_resetjp_3692_;
}
else
{
lean_dec(v_d_3687_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3720_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
switch(lean_obj_tag(v___x_3691_))
{
case 1:
{
lean_del_object(v___x_3693_);
goto v___jp_3689_;
}
case 0:
{
lean_del_object(v___x_3693_);
goto v___jp_3689_;
}
default: 
{
if (lean_obj_tag(v___x_3691_) == 2)
{
uint8_t v_b_3695_; lean_object* v___x_3696_; lean_object* v___x_3698_; 
v_b_3695_ = lean_ctor_get_uint8(v___x_3691_, 0);
lean_dec_ref_known(v___x_3691_, 0);
v___x_3696_ = lean_box(v_b_3695_);
if (v_isShared_3694_ == 0)
{
lean_ctor_set_tag(v___x_3693_, 1);
lean_ctor_set(v___x_3693_, 0, v___x_3696_);
v___x_3698_ = v___x_3693_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v___x_3696_);
v___x_3698_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3699_; 
v___x_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3698_);
return v___x_3699_;
}
}
else
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; uint8_t v___x_3711_; 
v___x_3701_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3702_ = lean_string_append(v___x_3701_, v_key_3688_);
v___x_3703_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3704_ = lean_string_append(v___x_3702_, v___x_3703_);
v___x_3705_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__3));
v___x_3706_ = lean_string_append(v___x_3704_, v___x_3705_);
v___x_3707_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3708_ = lean_string_append(v___x_3706_, v___x_3707_);
v___x_3709_ = l_Lasm_JS_Data_describe(v___x_3691_);
v___x_3710_ = lean_string_append(v___x_3708_, v___x_3709_);
lean_dec_ref(v___x_3709_);
v___x_3711_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3711_ == 0)
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3715_; 
v___x_3712_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___x_3713_ = lean_string_append(v___x_3710_, v___x_3712_);
if (v_isShared_3694_ == 0)
{
lean_ctor_set_tag(v___x_3693_, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3713_);
v___x_3715_ = v___x_3693_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v___x_3713_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
else
{
lean_object* v___x_3718_; 
if (v_isShared_3694_ == 0)
{
lean_ctor_set_tag(v___x_3693_, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3710_);
v___x_3718_ = v___x_3693_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v___x_3710_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3722_; 
lean_dec(v_d_3687_);
v___x_3722_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__6));
return v___x_3722_;
}
v___jp_3689_:
{
lean_object* v___x_3690_; 
v___x_3690_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_3690_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_3723_, lean_object* v_key_3724_){
_start:
{
lean_object* v_res_3725_; 
v_res_3725_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3723_, v_key_3724_);
lean_dec_ref(v_key_3724_);
return v_res_3725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_3728_, lean_object* v_key_3729_){
_start:
{
if (lean_obj_tag(v_d_3728_) == 8)
{
lean_object* v___x_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
v___x_3730_ = l_Lasm_JS_Data_field(v_d_3728_, v_key_3729_);
v_isSharedCheck_3737_ = !lean_is_exclusive(v_d_3728_);
if (v_isSharedCheck_3737_ == 0)
{
lean_object* v_unused_3738_; 
v_unused_3738_ = lean_ctor_get(v_d_3728_, 0);
lean_dec(v_unused_3738_);
v___x_3732_ = v_d_3728_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_dec(v_d_3728_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
lean_ctor_set_tag(v___x_3732_, 1);
lean_ctor_set(v___x_3732_, 0, v___x_3730_);
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v___x_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
else
{
lean_object* v___x_3739_; 
lean_dec(v_d_3728_);
v___x_3739_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3739_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3740_, lean_object* v_key_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3740_, v_key_3741_);
lean_dec_ref(v_key_3741_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(lean_object* v_context_3743_, lean_object* v_d_3744_){
_start:
{
lean_object* v___y_3747_; lean_object* v___y_3748_; lean_object* v___y_3753_; lean_object* v_received_3754_; lean_object* v___y_3773_; lean_object* v_a_3776_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3800_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0));
lean_inc(v_d_3744_);
v___x_3801_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3744_, v___x_3800_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v_a_3802_; 
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3802_);
lean_dec_ref_known(v___x_3801_, 1);
v_a_3776_ = v_a_3802_;
goto v___jp_3775_;
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; 
v_a_3803_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3803_);
lean_dec_ref_known(v___x_3801_, 1);
v___x_3804_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1));
lean_inc(v_d_3744_);
v___x_3805_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3744_, v___x_3804_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; 
lean_dec(v_a_3803_);
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3806_);
lean_dec_ref_known(v___x_3805_, 1);
v_a_3776_ = v_a_3806_;
goto v___jp_3775_;
}
else
{
lean_object* v_a_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3815_; 
lean_dec(v_d_3744_);
v_a_3807_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3809_ = v___x_3805_;
v_isShared_3810_ = v_isSharedCheck_3815_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_a_3807_);
lean_dec(v___x_3805_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3815_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3811_; lean_object* v___x_3813_; 
v___x_3811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3811_, 0, v_a_3803_);
lean_ctor_set(v___x_3811_, 1, v_a_3807_);
if (v_isShared_3810_ == 0)
{
lean_ctor_set_tag(v___x_3809_, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3811_);
v___x_3813_ = v___x_3809_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v___x_3811_);
v___x_3813_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
return v___x_3813_;
}
}
}
}
v___jp_3746_:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3749_ = lean_string_append(v___y_3747_, v___y_3748_);
lean_dec_ref(v___y_3748_);
v___x_3750_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3749_);
v___x_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
return v___x_3751_;
}
v___jp_3752_:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; uint8_t v___x_3766_; 
v___x_3755_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3756_ = lean_string_append(v___x_3755_, v_context_3743_);
v___x_3757_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3758_ = lean_string_append(v___x_3756_, v___x_3757_);
v___x_3759_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2));
v___x_3760_ = lean_string_append(v___x_3758_, v___x_3759_);
v___x_3761_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3762_ = lean_string_append(v___x_3760_, v___x_3761_);
v___x_3763_ = lean_string_append(v___x_3762_, v_received_3754_);
lean_dec_ref(v_received_3754_);
v___x_3764_ = lean_string_utf8_byte_size(v___y_3753_);
v___x_3765_ = lean_unsigned_to_nat(0u);
v___x_3766_ = lean_nat_dec_eq(v___x_3764_, v___x_3765_);
if (v___x_3766_ == 0)
{
lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3767_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_3768_ = lean_string_append(v___x_3767_, v___y_3753_);
lean_dec_ref(v___y_3753_);
v___x_3769_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_3770_ = lean_string_append(v___x_3768_, v___x_3769_);
v___y_3747_ = v___x_3763_;
v___y_3748_ = v___x_3770_;
goto v___jp_3746_;
}
else
{
lean_object* v___x_3771_; 
lean_dec_ref(v___y_3753_);
v___x_3771_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_3747_ = v___x_3763_;
v___y_3748_ = v___x_3771_;
goto v___jp_3746_;
}
}
v___jp_3772_:
{
lean_object* v___x_3774_; 
v___x_3774_ = l_Lasm_JS_Data_describe(v_d_3744_);
v___y_3753_ = v___y_3773_;
v_received_3754_ = v___x_3774_;
goto v___jp_3752_;
}
v___jp_3775_:
{
if (lean_obj_tag(v_d_3744_) == 9)
{
lean_object* v_value_3777_; lean_object* v_description_3778_; lean_object* v___x_3779_; uint8_t v___x_3780_; 
v_value_3777_ = lean_ctor_get(v_d_3744_, 0);
v_description_3778_ = lean_ctor_get(v_d_3744_, 1);
v___x_3779_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3780_ = lean_string_dec_eq(v_description_3778_, v___x_3779_);
if (v___x_3780_ == 0)
{
v___y_3773_ = v_a_3776_;
goto v___jp_3772_;
}
else
{
lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3797_; 
lean_inc(v_value_3777_);
v_isSharedCheck_3797_ = !lean_is_exclusive(v_d_3744_);
if (v_isSharedCheck_3797_ == 0)
{
lean_object* v_unused_3798_; lean_object* v_unused_3799_; 
v_unused_3798_ = lean_ctor_get(v_d_3744_, 1);
lean_dec(v_unused_3798_);
v_unused_3799_ = lean_ctor_get(v_d_3744_, 0);
lean_dec(v_unused_3799_);
v___x_3782_ = v_d_3744_;
v_isShared_3783_ = v_isSharedCheck_3797_;
goto v_resetjp_3781_;
}
else
{
lean_dec(v_d_3744_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3797_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
uint32_t v___x_3784_; uint64_t v___x_3785_; lean_object* v___x_3787_; 
v___x_3784_ = 206;
v___x_3785_ = 0ULL;
lean_inc(v_value_3777_);
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 1, v___x_3779_);
v___x_3787_ = v___x_3782_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_value_3777_);
lean_ctor_set(v_reuseFailAlloc_3796_, 1, v___x_3779_);
v___x_3787_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
uint32_t v___x_3788_; lean_object* v___x_3789_; 
v___x_3788_ = lasm_js_value_handle(v_value_3777_);
lean_dec(v_value_3777_);
v___x_3789_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3784_, v___x_3785_, v___x_3787_, v___x_3788_);
lean_dec_ref(v___x_3787_);
if (lean_obj_tag(v___x_3789_) == 0)
{
lean_object* v_a_3790_; uint8_t v___x_3791_; 
v_a_3790_ = lean_ctor_get(v___x_3789_, 0);
lean_inc(v_a_3790_);
lean_dec_ref_known(v___x_3789_, 1);
v___x_3791_ = lean_string_validate_utf8(v_a_3790_);
if (v___x_3791_ == 0)
{
lean_object* v___x_3792_; lean_object* v___x_3793_; 
lean_dec(v_a_3790_);
v___x_3792_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3793_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3792_);
v___y_3753_ = v_a_3776_;
v_received_3754_ = v___x_3793_;
goto v___jp_3752_;
}
else
{
lean_object* v___x_3794_; 
v___x_3794_ = lean_string_from_utf8_unchecked(v_a_3790_);
v___y_3753_ = v_a_3776_;
v_received_3754_ = v___x_3794_;
goto v___jp_3752_;
}
}
else
{
lean_object* v___x_3795_; 
lean_dec_ref_known(v___x_3789_, 1);
v___x_3795_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v___y_3753_ = v_a_3776_;
v_received_3754_ = v___x_3795_;
goto v___jp_3752_;
}
}
}
}
}
else
{
v___y_3773_ = v_a_3776_;
goto v___jp_3772_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3816_, lean_object* v_d_3817_, lean_object* v_a_3818_){
_start:
{
lean_object* v_res_3819_; 
v_res_3819_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3816_, v_d_3817_);
lean_dec_ref(v_context_3816_);
return v_res_3819_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(lean_object* v_context_3820_, lean_object* v_x_3821_){
_start:
{
lean_object* v_val_3824_; 
if (lean_obj_tag(v_x_3821_) == 0)
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3834_; 
v_a_3826_ = lean_ctor_get(v_x_3821_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v_x_3821_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3828_ = v_x_3821_;
v_isShared_3829_ = v_isSharedCheck_3834_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v_x_3821_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3834_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_a_3826_);
v___x_3831_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
lean_object* v___x_3832_; 
v___x_3832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3831_);
return v___x_3832_;
}
}
}
else
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3848_; 
v_a_3835_ = lean_ctor_get(v_x_3821_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v_x_3821_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3837_ = v_x_3821_;
v_isShared_3838_ = v_isSharedCheck_3848_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v_x_3821_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3848_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v___x_3839_; 
v___x_3839_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3820_, v_a_3835_);
if (lean_obj_tag(v___x_3839_) == 0)
{
lean_object* v_a_3840_; lean_object* v___x_3842_; 
v_a_3840_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_a_3840_);
lean_dec_ref_known(v___x_3839_, 1);
if (v_isShared_3838_ == 0)
{
lean_ctor_set(v___x_3837_, 0, v_a_3840_);
v___x_3842_ = v___x_3837_;
goto v_reusejp_3841_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v_a_3840_);
v___x_3842_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3841_;
}
v_reusejp_3841_:
{
v_val_3824_ = v___x_3842_;
goto v___jp_3823_;
}
}
else
{
lean_object* v_a_3844_; lean_object* v___x_3846_; 
v_a_3844_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_a_3844_);
lean_dec_ref_known(v___x_3839_, 1);
if (v_isShared_3838_ == 0)
{
lean_ctor_set_tag(v___x_3837_, 0);
lean_ctor_set(v___x_3837_, 0, v_a_3844_);
v___x_3846_ = v___x_3837_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_a_3844_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
v_val_3824_ = v___x_3846_;
goto v___jp_3823_;
}
}
}
}
v___jp_3823_:
{
lean_object* v___x_3825_; 
v___x_3825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3825_, 0, v_val_3824_);
return v___x_3825_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed(lean_object* v_context_3849_, lean_object* v_x_3850_, lean_object* v___y_3851_){
_start:
{
lean_object* v_res_3852_; 
v_res_3852_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(v_context_3849_, v_x_3850_);
lean_dec_ref(v_context_3849_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(lean_object* v___f_3853_, lean_object* v_x_3854_){
_start:
{
if (lean_obj_tag(v_x_3854_) == 0)
{
lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3864_; 
lean_dec_ref(v___f_3853_);
v_a_3856_ = lean_ctor_get(v_x_3854_, 0);
v_isSharedCheck_3864_ = !lean_is_exclusive(v_x_3854_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3858_ = v_x_3854_;
v_isShared_3859_ = v_isSharedCheck_3864_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_dec(v_x_3854_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3864_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3861_; 
if (v_isShared_3859_ == 0)
{
v___x_3861_ = v___x_3858_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v_a_3856_);
v___x_3861_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
lean_object* v___x_3862_; 
v___x_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3862_, 0, v___x_3861_);
return v___x_3862_;
}
}
}
else
{
lean_object* v_a_3865_; lean_object* v___x_3866_; 
v_a_3865_ = lean_ctor_get(v_x_3854_, 0);
lean_inc(v_a_3865_);
lean_dec_ref_known(v_x_3854_, 1);
v___x_3866_ = lean_apply_2(v___f_3853_, v_a_3865_, lean_box(0));
return v___x_3866_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3867_, lean_object* v_x_3868_, lean_object* v___y_3869_){
_start:
{
lean_object* v_res_3870_; 
v_res_3870_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(v___f_3867_, v_x_3868_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(lean_object* v_context_3871_, uint32_t v_op_3872_, uint64_t v_flags_3873_, lean_object* v_payload_3874_, lean_object* v_failurePrefix_3875_){
_start:
{
lean_object* v___f_3877_; lean_object* v___f_3878_; lean_object* v___f_3879_; lean_object* v___f_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___f_3883_; lean_object* v___f_3884_; lean_object* v___x_3885_; uint8_t v___x_3886_; lean_object* v_val_3888_; lean_object* v___x_3891_; 
v___f_3877_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3877_, 0, v_context_3871_);
v___f_3878_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3878_, 0, v___f_3877_);
v___f_3879_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3879_, 0, v___f_3878_);
lean_inc_ref(v_failurePrefix_3875_);
v___f_3880_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3880_, 0, v_failurePrefix_3875_);
v___x_3881_ = lean_box_uint32(v_op_3872_);
v___x_3882_ = lean_box_uint64(v_flags_3873_);
lean_inc_ref(v___f_3879_);
v___f_3883_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3883_, 0, v_failurePrefix_3875_);
lean_closure_set(v___f_3883_, 1, v___x_3881_);
lean_closure_set(v___f_3883_, 2, v___x_3882_);
lean_closure_set(v___f_3883_, 3, v_payload_3874_);
lean_closure_set(v___f_3883_, 4, v___f_3880_);
lean_closure_set(v___f_3883_, 5, v___f_3879_);
lean_closure_set(v___f_3883_, 6, v___f_3879_);
v___f_3884_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3884_, 0, v___f_3883_);
v___x_3885_ = lean_unsigned_to_nat(0u);
v___x_3886_ = 0;
v___x_3891_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3899_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3894_ = v___x_3891_;
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_a_3892_);
lean_dec(v___x_3891_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3897_; 
if (v_isShared_3895_ == 0)
{
lean_ctor_set_tag(v___x_3894_, 1);
v___x_3897_ = v___x_3894_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_a_3892_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
v_val_3888_ = v___x_3897_;
goto v___jp_3887_;
}
}
}
else
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
v_a_3900_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v___x_3891_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3891_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
lean_ctor_set_tag(v___x_3902_, 0);
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
v_val_3888_ = v___x_3905_;
goto v___jp_3887_;
}
}
}
v___jp_3887_:
{
lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3889_, 0, v_val_3888_);
v___x_3890_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3885_, v___x_3886_, v___x_3889_, v___f_3884_);
return v___x_3890_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___boxed(lean_object* v_context_3908_, lean_object* v_op_3909_, lean_object* v_flags_3910_, lean_object* v_payload_3911_, lean_object* v_failurePrefix_3912_, lean_object* v_a_3913_){
_start:
{
uint32_t v_op_boxed_3914_; uint64_t v_flags_boxed_3915_; lean_object* v_res_3916_; 
v_op_boxed_3914_ = lean_unbox_uint32(v_op_3909_);
lean_dec(v_op_3909_);
v_flags_boxed_3915_ = lean_unbox_uint64(v_flags_3910_);
lean_dec_ref(v_flags_3910_);
v_res_3916_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v_context_3908_, v_op_boxed_3914_, v_flags_boxed_3915_, v_payload_3911_, v_failurePrefix_3912_);
return v_res_3916_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(uint8_t v_await_3917_, uint64_t v_extra_3918_){
_start:
{
uint64_t v___x_3919_; uint64_t v___y_3921_; 
v___x_3919_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3917_ == 0)
{
uint64_t v___x_3924_; 
v___x_3924_ = 0ULL;
v___y_3921_ = v___x_3924_;
goto v___jp_3920_;
}
else
{
uint64_t v___x_3925_; 
v___x_3925_ = 2ULL;
v___y_3921_ = v___x_3925_;
goto v___jp_3920_;
}
v___jp_3920_:
{
uint64_t v___x_3922_; uint64_t v___x_3923_; 
v___x_3922_ = lean_uint64_lor(v___x_3919_, v___y_3921_);
v___x_3923_ = lean_uint64_lor(v___x_3922_, v_extra_3918_);
return v___x_3923_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0___boxed(lean_object* v_await_3926_, lean_object* v_extra_3927_){
_start:
{
uint8_t v_await_boxed_3928_; uint64_t v_extra_boxed_3929_; uint64_t v_res_3930_; lean_object* v_r_3931_; 
v_await_boxed_3928_ = lean_unbox(v_await_3926_);
v_extra_boxed_3929_ = lean_unbox_uint64(v_extra_3927_);
lean_dec_ref(v_extra_3927_);
v_res_3930_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v_await_boxed_3928_, v_extra_boxed_3929_);
v_r_3931_ = lean_box_uint64(v_res_3930_);
return v_r_3931_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3932_; uint8_t v___x_3933_; uint64_t v___x_3934_; 
v___x_3932_ = 8ULL;
v___x_3933_ = 0;
v___x_3934_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v___x_3933_, v___x_3932_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(lean_object* v_o_3935_, lean_object* v_name_3936_, lean_object* v_args_3937_){
_start:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; uint32_t v___x_3944_; uint64_t v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; 
v___x_3939_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3940_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3940_, 0, v_o_3935_);
lean_ctor_set(v___x_3940_, 1, v___x_3939_);
lean_inc_ref(v_name_3936_);
v___x_3941_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3941_, 0, v_name_3936_);
v___x_3942_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3943_ = lean_string_append(v___x_3942_, v_name_3936_);
lean_dec_ref(v_name_3936_);
v___x_3944_ = 205;
v___x_3945_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0);
v___x_3946_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3946_, 0, v_args_3937_);
v___x_3947_ = lean_unsigned_to_nat(3u);
v___x_3948_ = lean_mk_empty_array_with_capacity(v___x_3947_);
v___x_3949_ = lean_array_push(v___x_3948_, v___x_3940_);
v___x_3950_ = lean_array_push(v___x_3949_, v___x_3941_);
v___x_3951_ = lean_array_push(v___x_3950_, v___x_3946_);
v___x_3952_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
v___x_3953_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v___x_3943_, v___x_3944_, v___x_3945_, v___x_3952_, v___x_3939_);
return v___x_3953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___boxed(lean_object* v_o_3954_, lean_object* v_name_3955_, lean_object* v_args_3956_, lean_object* v___y_3957_){
_start:
{
lean_object* v_res_3958_; 
v_res_3958_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_o_3954_, v_name_3955_, v_args_3956_);
return v_res_3958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read(lean_object* v_self_3960_){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3962_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_3963_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3964_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_3960_, v___x_3962_, v___x_3963_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read___boxed(lean_object* v_self_3965_, lean_object* v_a_3966_){
_start:
{
lean_object* v_res_3967_; 
v_res_3967_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_read(v_self_3965_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(lean_object* v_self_3969_){
_start:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; 
v___x_3971_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_3972_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3973_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3969_, v___x_3971_, v___x_3972_);
return v___x_3973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___boxed(lean_object* v_self_3974_, lean_object* v_a_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(v_self_3974_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(lean_object* v_self_3977_, lean_object* v_reason_3978_){
_start:
{
lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; 
v___x_3980_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_3981_ = lean_unsigned_to_nat(1u);
v___x_3982_ = lean_mk_empty_array_with_capacity(v___x_3981_);
v___x_3983_ = lean_array_push(v___x_3982_, v_reason_3978_);
v___x_3984_ = l_Lasm_JS_Web_Support_args(v___x_3983_);
v___x_3985_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3977_, v___x_3980_, v___x_3984_);
return v___x_3985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel___boxed(lean_object* v_self_3986_, lean_object* v_reason_3987_, lean_object* v_a_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(v_self_3986_, v_reason_3987_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f(lean_object* v_v_3996_){
_start:
{
lean_object* v___f_3998_; lean_object* v___x_3999_; 
v___f_3998_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___closed__2));
lean_inc(v_v_3996_);
v___x_3999_ = l_Lasm_JS_Web_Support_isInstance(v___f_3998_, v_v_3996_);
if (lean_obj_tag(v___x_3999_) == 0)
{
lean_object* v_a_4000_; lean_object* v___x_4002_; uint8_t v_isShared_4003_; uint8_t v_isSharedCheck_4013_; 
v_a_4000_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4013_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4013_ == 0)
{
v___x_4002_ = v___x_3999_;
v_isShared_4003_ = v_isSharedCheck_4013_;
goto v_resetjp_4001_;
}
else
{
lean_inc(v_a_4000_);
lean_dec(v___x_3999_);
v___x_4002_ = lean_box(0);
v_isShared_4003_ = v_isSharedCheck_4013_;
goto v_resetjp_4001_;
}
v_resetjp_4001_:
{
uint8_t v___x_4004_; 
v___x_4004_ = lean_unbox(v_a_4000_);
lean_dec(v_a_4000_);
if (v___x_4004_ == 0)
{
lean_object* v___x_4005_; lean_object* v___x_4007_; 
lean_dec(v_v_3996_);
v___x_4005_ = lean_box(0);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4005_);
v___x_4007_ = v___x_4002_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v___x_4005_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
else
{
lean_object* v___x_4009_; lean_object* v___x_4011_; 
v___x_4009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4009_, 0, v_v_3996_);
if (v_isShared_4003_ == 0)
{
lean_ctor_set(v___x_4002_, 0, v___x_4009_);
v___x_4011_ = v___x_4002_;
goto v_reusejp_4010_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v___x_4009_);
v___x_4011_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4010_;
}
v_reusejp_4010_:
{
return v___x_4011_;
}
}
}
}
else
{
lean_object* v_a_4014_; lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4021_; 
lean_dec(v_v_3996_);
v_a_4014_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4021_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4021_ == 0)
{
v___x_4016_ = v___x_3999_;
v_isShared_4017_ = v_isSharedCheck_4021_;
goto v_resetjp_4015_;
}
else
{
lean_inc(v_a_4014_);
lean_dec(v___x_3999_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4021_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v___x_4019_; 
if (v_isShared_4017_ == 0)
{
v___x_4019_ = v___x_4016_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_a_4014_);
v___x_4019_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
return v___x_4019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f___boxed(lean_object* v_v_4022_, lean_object* v_a_4023_){
_start:
{
lean_object* v_res_4024_; 
v_res_4024_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_cast_x3f(v_v_4022_);
return v_res_4024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(lean_object* v_context_4025_, lean_object* v_d_4026_){
_start:
{
lean_object* v___y_4029_; lean_object* v___y_4030_; 
if (lean_obj_tag(v_d_4026_) == 9)
{
lean_object* v_value_4034_; lean_object* v___x_4035_; 
v_value_4034_ = lean_ctor_get(v_d_4026_, 0);
lean_inc(v_value_4034_);
lean_dec_ref_known(v_d_4026_, 2);
v___x_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4035_, 0, v_value_4034_);
return v___x_4035_;
}
else
{
lean_object* v___x_4036_; lean_object* v_received_4038_; 
v___x_4036_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4026_) == 9)
{
lean_object* v_value_4052_; lean_object* v_description_4053_; uint8_t v___x_4054_; 
v_value_4052_ = lean_ctor_get(v_d_4026_, 0);
v_description_4053_ = lean_ctor_get(v_d_4026_, 1);
v___x_4054_ = lean_string_dec_eq(v_description_4053_, v___x_4036_);
if (v___x_4054_ == 0)
{
goto v___jp_4050_;
}
else
{
uint32_t v___x_4055_; uint64_t v___x_4056_; lean_object* v___x_4057_; uint32_t v___x_4058_; lean_object* v___x_4059_; 
lean_inc_n(v_value_4052_, 2);
lean_dec_ref_known(v_d_4026_, 2);
v___x_4055_ = 206;
v___x_4056_ = 0ULL;
v___x_4057_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4057_, 0, v_value_4052_);
lean_ctor_set(v___x_4057_, 1, v___x_4036_);
v___x_4058_ = lasm_js_value_handle(v_value_4052_);
lean_dec(v_value_4052_);
v___x_4059_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4055_, v___x_4056_, v___x_4057_, v___x_4058_);
lean_dec_ref_known(v___x_4057_, 2);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v_a_4060_; uint8_t v___x_4061_; 
v_a_4060_ = lean_ctor_get(v___x_4059_, 0);
lean_inc(v_a_4060_);
lean_dec_ref_known(v___x_4059_, 1);
v___x_4061_ = lean_string_validate_utf8(v_a_4060_);
if (v___x_4061_ == 0)
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
lean_dec(v_a_4060_);
v___x_4062_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4063_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4062_);
v_received_4038_ = v___x_4063_;
goto v___jp_4037_;
}
else
{
lean_object* v___x_4064_; 
v___x_4064_ = lean_string_from_utf8_unchecked(v_a_4060_);
v_received_4038_ = v___x_4064_;
goto v___jp_4037_;
}
}
else
{
lean_object* v___x_4065_; 
lean_dec_ref_known(v___x_4059_, 1);
v___x_4065_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4038_ = v___x_4065_;
goto v___jp_4037_;
}
}
}
else
{
goto v___jp_4050_;
}
v___jp_4037_:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; uint8_t v___x_4048_; 
v___x_4039_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4040_ = lean_string_append(v___x_4039_, v_context_4025_);
v___x_4041_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4042_ = lean_string_append(v___x_4040_, v___x_4041_);
v___x_4043_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0));
v___x_4044_ = lean_string_append(v___x_4042_, v___x_4043_);
v___x_4045_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4046_ = lean_string_append(v___x_4044_, v___x_4045_);
v___x_4047_ = lean_string_append(v___x_4046_, v_received_4038_);
lean_dec_ref(v_received_4038_);
v___x_4048_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4048_ == 0)
{
lean_object* v___x_4049_; 
v___x_4049_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4029_ = v___x_4047_;
v___y_4030_ = v___x_4049_;
goto v___jp_4028_;
}
else
{
v___y_4029_ = v___x_4047_;
v___y_4030_ = v___x_4036_;
goto v___jp_4028_;
}
}
v___jp_4050_:
{
lean_object* v___x_4051_; 
v___x_4051_ = l_Lasm_JS_Data_describe(v_d_4026_);
v_received_4038_ = v___x_4051_;
goto v___jp_4037_;
}
}
v___jp_4028_:
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4031_ = lean_string_append(v___y_4029_, v___y_4030_);
v___x_4032_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4032_, 0, v___x_4031_);
v___x_4033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4032_);
return v___x_4033_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0___boxed(lean_object* v_context_4066_, lean_object* v_d_4067_, lean_object* v_a_4068_){
_start:
{
lean_object* v_res_4069_; 
v_res_4069_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v_context_4066_, v_d_4067_);
lean_dec_ref(v_context_4066_);
return v_res_4069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(lean_object* v_b_4070_, lean_object* v_args_4071_, uint8_t v_await_4072_){
_start:
{
uint64_t v___y_4075_; uint64_t v___y_4076_; uint64_t v___x_4119_; uint64_t v___y_4121_; 
v___x_4119_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4072_ == 0)
{
uint64_t v___x_4126_; 
v___x_4126_ = 0ULL;
v___y_4121_ = v___x_4126_;
goto v___jp_4120_;
}
else
{
uint64_t v___x_4127_; 
v___x_4127_ = 2ULL;
v___y_4121_ = v___x_4127_;
goto v___jp_4120_;
}
v___jp_4074_:
{
uint64_t v_flags_4077_; uint32_t v___x_4078_; lean_object* v___x_4079_; uint32_t v___x_4080_; lean_object* v___x_4081_; 
v_flags_4077_ = lean_uint64_lor(v___y_4075_, v___y_4076_);
v___x_4078_ = 214;
v___x_4079_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4070_, v_args_4071_);
v___x_4080_ = 0;
v___x_4081_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4078_, v_flags_4077_, v___x_4079_, v___x_4080_);
lean_dec(v___x_4079_);
if (lean_obj_tag(v___x_4081_) == 0)
{
if (lean_obj_tag(v___x_4081_) == 0)
{
lean_object* v_a_4082_; lean_object* v___x_4083_; 
v_a_4082_ = lean_ctor_get(v___x_4081_, 0);
lean_inc(v_a_4082_);
lean_dec_ref_known(v___x_4081_, 1);
v___x_4083_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4082_);
lean_dec(v_a_4082_);
if (lean_obj_tag(v___x_4083_) == 0)
{
lean_object* v_a_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v_a_4084_ = lean_ctor_get(v___x_4083_, 0);
lean_inc(v_a_4084_);
lean_dec_ref_known(v___x_4083_, 1);
v___x_4085_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4070_);
v___x_4086_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v___x_4085_, v_a_4084_);
lean_dec_ref(v___x_4085_);
return v___x_4086_;
}
else
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4094_; 
v_a_4087_ = lean_ctor_get(v___x_4083_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_4083_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4089_ = v___x_4083_;
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4083_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4092_; 
if (v_isShared_4090_ == 0)
{
v___x_4092_ = v___x_4089_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_a_4087_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
return v___x_4092_;
}
}
}
}
else
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4102_; 
v_a_4095_ = lean_ctor_get(v___x_4081_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4081_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4097_ = v___x_4081_;
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4081_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
lean_ctor_set_tag(v___x_4097_, 1);
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
else
{
lean_object* v_a_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4118_; 
v_a_4103_ = lean_ctor_get(v___x_4081_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4081_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4105_ = v___x_4081_;
v_isShared_4106_ = v_isSharedCheck_4118_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_a_4103_);
lean_dec(v___x_4081_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4118_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4116_; 
v___x_4107_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4108_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4070_);
v___x_4109_ = lean_string_append(v___x_4107_, v___x_4108_);
lean_dec_ref(v___x_4108_);
v___x_4110_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4111_ = lean_string_append(v___x_4109_, v___x_4110_);
v___x_4112_ = lean_io_error_to_string(v_a_4103_);
v___x_4113_ = lean_string_append(v___x_4111_, v___x_4112_);
lean_dec_ref(v___x_4112_);
v___x_4114_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4113_);
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 0, v___x_4114_);
v___x_4116_ = v___x_4105_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v___x_4114_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
v___jp_4120_:
{
uint8_t v_construct_4122_; uint64_t v___x_4123_; 
v_construct_4122_ = lean_ctor_get_uint8(v_b_4070_, sizeof(void*)*4);
v___x_4123_ = lean_uint64_lor(v___x_4119_, v___y_4121_);
if (v_construct_4122_ == 0)
{
uint64_t v___x_4124_; 
v___x_4124_ = 0ULL;
v___y_4075_ = v___x_4123_;
v___y_4076_ = v___x_4124_;
goto v___jp_4074_;
}
else
{
uint64_t v___x_4125_; 
v___x_4125_ = 4ULL;
v___y_4075_ = v___x_4123_;
v___y_4076_ = v___x_4125_;
goto v___jp_4074_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0___boxed(lean_object* v_b_4128_, lean_object* v_args_4129_, lean_object* v_await_4130_, lean_object* v_a_4131_){
_start:
{
uint8_t v_await_boxed_4132_; lean_object* v_res_4133_; 
v_await_boxed_4132_ = lean_unbox(v_await_4130_);
v_res_4133_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v_b_4128_, v_args_4129_, v_await_boxed_4132_);
lean_dec_ref(v_b_4128_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new(lean_object* v_stream_4141_){
_start:
{
lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; uint8_t v___x_4150_; lean_object* v___x_4151_; 
v___x_4143_ = lean_unsigned_to_nat(1u);
v___x_4144_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__1));
v___x_4145_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4146_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4146_, 0, v_stream_4141_);
lean_ctor_set(v___x_4146_, 1, v___x_4145_);
v___x_4147_ = lean_mk_empty_array_with_capacity(v___x_4143_);
v___x_4148_ = lean_array_push(v___x_4147_, v___x_4146_);
v___x_4149_ = l_Lasm_JS_Web_Support_args(v___x_4148_);
v___x_4150_ = 0;
v___x_4151_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v___x_4144_, v___x_4149_, v___x_4150_);
return v___x_4151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___boxed(lean_object* v_stream_4152_, lean_object* v_a_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_new(v_stream_4152_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(lean_object* v_self_4155_){
_start:
{
lean_object* v___f_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; uint8_t v___x_4160_; lean_object* v_val_4162_; lean_object* v___x_4165_; 
v___f_4157_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4158_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_4159_ = lean_unsigned_to_nat(0u);
v___x_4160_ = 0;
v___x_4165_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_4155_, v___x_4158_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_object* v_a_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4173_; 
v_a_4166_ = lean_ctor_get(v___x_4165_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4168_ = v___x_4165_;
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_a_4166_);
lean_dec(v___x_4165_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4171_; 
if (v_isShared_4169_ == 0)
{
lean_ctor_set_tag(v___x_4168_, 1);
v___x_4171_ = v___x_4168_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_a_4166_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
v_val_4162_ = v___x_4171_;
goto v___jp_4161_;
}
}
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4181_; 
v_a_4174_ = lean_ctor_get(v___x_4165_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4176_ = v___x_4165_;
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4165_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4179_; 
if (v_isShared_4177_ == 0)
{
lean_ctor_set_tag(v___x_4176_, 0);
v___x_4179_ = v___x_4176_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v_a_4174_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
v_val_4162_ = v___x_4179_;
goto v___jp_4161_;
}
}
}
v___jp_4161_:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; 
v___x_4163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4163_, 0, v_val_4162_);
v___x_4164_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4159_, v___x_4160_, v___x_4163_, v___f_4157_);
return v___x_4164_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed___boxed(lean_object* v_self_4182_, lean_object* v_a_4183_){
_start:
{
lean_object* v_res_4184_; 
v_res_4184_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(v_self_4182_);
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object* v_x_4185_){
_start:
{
if (lean_obj_tag(v_x_4185_) == 0)
{
lean_object* v___x_4186_; 
v___x_4186_ = lean_box(0);
return v___x_4186_;
}
else
{
lean_object* v_val_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4200_; 
v_val_4187_ = lean_ctor_get(v_x_4185_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v_x_4185_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4189_ = v_x_4185_;
v_isShared_4190_ = v_isSharedCheck_4200_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_val_4187_);
lean_dec(v_x_4185_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4200_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; uint8_t v___x_4194_; 
v___x_4191_ = lean_nat_to_int(v_val_4187_);
v___x_4192_ = lean_nat_abs(v___x_4191_);
v___x_4193_ = lean_cstr_to_nat("9007199254740991");
v___x_4194_ = lean_nat_dec_le(v___x_4192_, v___x_4193_);
lean_dec(v___x_4192_);
if (v___x_4194_ == 0)
{
lean_object* v___x_4196_; 
if (v_isShared_4190_ == 0)
{
lean_ctor_set_tag(v___x_4189_, 5);
lean_ctor_set(v___x_4189_, 0, v___x_4191_);
v___x_4196_ = v___x_4189_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v___x_4191_);
v___x_4196_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
return v___x_4196_;
}
}
else
{
double v___x_4198_; lean_object* v___x_4199_; 
lean_del_object(v___x_4189_);
v___x_4198_ = l_Float_ofInt(v___x_4191_);
lean_dec(v___x_4191_);
v___x_4199_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4199_, 0, v___x_4198_);
return v___x_4199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(lean_object* v_x_4201_){
_start:
{
if (lean_obj_tag(v_x_4201_) == 0)
{
lean_object* v___x_4202_; 
v___x_4202_ = lean_box(0);
return v___x_4202_;
}
else
{
lean_object* v_val_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; 
v_val_4203_ = lean_ctor_get(v_x_4201_, 0);
lean_inc(v_val_4203_);
lean_dec_ref_known(v_x_4201_, 1);
v___x_4204_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0));
v___x_4205_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_val_4203_);
v___x_4206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4206_, 0, v___x_4204_);
lean_ctor_set(v___x_4206_, 1, v___x_4205_);
v___x_4207_ = lean_unsigned_to_nat(1u);
v___x_4208_ = lean_mk_empty_array_with_capacity(v___x_4207_);
v___x_4209_ = lean_array_push(v___x_4208_, v___x_4206_);
v___x_4210_ = l_Lasm_JS_Web_Support_fields(v___x_4209_);
lean_dec_ref(v___x_4209_);
return v___x_4210_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read(lean_object* v_self_4211_, lean_object* v_view_4212_, lean_object* v_options_4213_){
_start:
{
lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4215_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_4216_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4216_, 0, v_view_4212_);
v___x_4217_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(v_options_4213_);
v___x_4218_ = lean_unsigned_to_nat(2u);
v___x_4219_ = lean_mk_empty_array_with_capacity(v___x_4218_);
v___x_4220_ = lean_array_push(v___x_4219_, v___x_4216_);
v___x_4221_ = lean_array_push(v___x_4220_, v___x_4217_);
v___x_4222_ = l_Lasm_JS_Web_Support_args(v___x_4221_);
v___x_4223_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_4211_, v___x_4215_, v___x_4222_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read___boxed(lean_object* v_self_4224_, lean_object* v_view_4225_, lean_object* v_options_4226_, lean_object* v_a_4227_){
_start:
{
lean_object* v_res_4228_; 
v_res_4228_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_read(v_self_4224_, v_view_4225_, v_options_4226_);
return v_res_4228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(lean_object* v_self_4229_){
_start:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4231_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_4232_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4233_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4229_, v___x_4231_, v___x_4232_);
return v___x_4233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock___boxed(lean_object* v_self_4234_, lean_object* v_a_4235_){
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(v_self_4234_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(lean_object* v_self_4237_, lean_object* v_reason_4238_){
_start:
{
lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; 
v___x_4240_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_4241_ = lean_unsigned_to_nat(1u);
v___x_4242_ = lean_mk_empty_array_with_capacity(v___x_4241_);
v___x_4243_ = lean_array_push(v___x_4242_, v_reason_4238_);
v___x_4244_ = l_Lasm_JS_Web_Support_args(v___x_4243_);
v___x_4245_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4237_, v___x_4240_, v___x_4244_);
return v___x_4245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel___boxed(lean_object* v_self_4246_, lean_object* v_reason_4247_, lean_object* v_a_4248_){
_start:
{
lean_object* v_res_4249_; 
v_res_4249_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(v_self_4246_, v_reason_4247_);
return v_res_4249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f(lean_object* v_v_4256_){
_start:
{
lean_object* v___f_4258_; lean_object* v___x_4259_; 
v___f_4258_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___closed__2));
lean_inc(v_v_4256_);
v___x_4259_ = l_Lasm_JS_Web_Support_isInstance(v___f_4258_, v_v_4256_);
if (lean_obj_tag(v___x_4259_) == 0)
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4273_; 
v_a_4260_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4262_ = v___x_4259_;
v_isShared_4263_ = v_isSharedCheck_4273_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4259_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4273_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
uint8_t v___x_4264_; 
v___x_4264_ = lean_unbox(v_a_4260_);
lean_dec(v_a_4260_);
if (v___x_4264_ == 0)
{
lean_object* v___x_4265_; lean_object* v___x_4267_; 
lean_dec(v_v_4256_);
v___x_4265_ = lean_box(0);
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v___x_4265_);
v___x_4267_ = v___x_4262_;
goto v_reusejp_4266_;
}
else
{
lean_object* v_reuseFailAlloc_4268_; 
v_reuseFailAlloc_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4268_, 0, v___x_4265_);
v___x_4267_ = v_reuseFailAlloc_4268_;
goto v_reusejp_4266_;
}
v_reusejp_4266_:
{
return v___x_4267_;
}
}
else
{
lean_object* v___x_4269_; lean_object* v___x_4271_; 
v___x_4269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4269_, 0, v_v_4256_);
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v___x_4269_);
v___x_4271_ = v___x_4262_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v___x_4269_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
}
}
else
{
lean_object* v_a_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4281_; 
lean_dec(v_v_4256_);
v_a_4274_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4276_ = v___x_4259_;
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_a_4274_);
lean_dec(v___x_4259_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4279_; 
if (v_isShared_4277_ == 0)
{
v___x_4279_ = v___x_4276_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v_a_4274_);
v___x_4279_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
return v___x_4279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f___boxed(lean_object* v_v_4282_, lean_object* v_a_4283_){
_start:
{
lean_object* v_res_4284_; 
v_res_4284_ = l_Lasm_JS_Web_ReadableStreamDefaultController_cast_x3f(v_v_4282_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(lean_object* v_context_4286_, lean_object* v_d_4287_){
_start:
{
lean_object* v___y_4293_; lean_object* v___y_4294_; 
switch(lean_obj_tag(v_d_4287_))
{
case 1:
{
goto v___jp_4289_;
}
case 0:
{
goto v___jp_4289_;
}
default: 
{
if (lean_obj_tag(v_d_4287_) == 3)
{
double v_n_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
v_n_4298_ = lean_ctor_get_float(v_d_4287_, 0);
lean_dec_ref_known(v_d_4287_, 0);
v___x_4299_ = lean_box_float(v_n_4298_);
v___x_4300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4300_, 0, v___x_4299_);
v___x_4301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4301_, 0, v___x_4300_);
return v___x_4301_;
}
else
{
lean_object* v___x_4302_; lean_object* v_received_4304_; 
v___x_4302_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4287_) == 9)
{
lean_object* v_value_4318_; lean_object* v_description_4319_; uint8_t v___x_4320_; 
v_value_4318_ = lean_ctor_get(v_d_4287_, 0);
v_description_4319_ = lean_ctor_get(v_d_4287_, 1);
v___x_4320_ = lean_string_dec_eq(v_description_4319_, v___x_4302_);
if (v___x_4320_ == 0)
{
goto v___jp_4316_;
}
else
{
uint32_t v___x_4321_; uint64_t v___x_4322_; lean_object* v___x_4323_; uint32_t v___x_4324_; lean_object* v___x_4325_; 
lean_inc_n(v_value_4318_, 2);
lean_dec_ref_known(v_d_4287_, 2);
v___x_4321_ = 206;
v___x_4322_ = 0ULL;
v___x_4323_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4323_, 0, v_value_4318_);
lean_ctor_set(v___x_4323_, 1, v___x_4302_);
v___x_4324_ = lasm_js_value_handle(v_value_4318_);
lean_dec(v_value_4318_);
v___x_4325_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4321_, v___x_4322_, v___x_4323_, v___x_4324_);
lean_dec_ref_known(v___x_4323_, 2);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v_a_4326_; uint8_t v___x_4327_; 
v_a_4326_ = lean_ctor_get(v___x_4325_, 0);
lean_inc(v_a_4326_);
lean_dec_ref_known(v___x_4325_, 1);
v___x_4327_ = lean_string_validate_utf8(v_a_4326_);
if (v___x_4327_ == 0)
{
lean_object* v___x_4328_; lean_object* v___x_4329_; 
lean_dec(v_a_4326_);
v___x_4328_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4329_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4328_);
v_received_4304_ = v___x_4329_;
goto v___jp_4303_;
}
else
{
lean_object* v___x_4330_; 
v___x_4330_ = lean_string_from_utf8_unchecked(v_a_4326_);
v_received_4304_ = v___x_4330_;
goto v___jp_4303_;
}
}
else
{
lean_object* v___x_4331_; 
lean_dec_ref_known(v___x_4325_, 1);
v___x_4331_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4304_ = v___x_4331_;
goto v___jp_4303_;
}
}
}
else
{
goto v___jp_4316_;
}
v___jp_4303_:
{
lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; uint8_t v___x_4314_; 
v___x_4305_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4306_ = lean_string_append(v___x_4305_, v_context_4286_);
v___x_4307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4308_ = lean_string_append(v___x_4306_, v___x_4307_);
v___x_4309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___closed__0));
v___x_4310_ = lean_string_append(v___x_4308_, v___x_4309_);
v___x_4311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4312_ = lean_string_append(v___x_4310_, v___x_4311_);
v___x_4313_ = lean_string_append(v___x_4312_, v_received_4304_);
lean_dec_ref(v_received_4304_);
v___x_4314_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4314_ == 0)
{
lean_object* v___x_4315_; 
v___x_4315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4293_ = v___x_4313_;
v___y_4294_ = v___x_4315_;
goto v___jp_4292_;
}
else
{
v___y_4293_ = v___x_4313_;
v___y_4294_ = v___x_4302_;
goto v___jp_4292_;
}
}
v___jp_4316_:
{
lean_object* v___x_4317_; 
v___x_4317_ = l_Lasm_JS_Data_describe(v_d_4287_);
v_received_4304_ = v___x_4317_;
goto v___jp_4303_;
}
}
}
}
v___jp_4289_:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; 
v___x_4290_ = lean_box(0);
v___x_4291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4291_, 0, v___x_4290_);
return v___x_4291_;
}
v___jp_4292_:
{
lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; 
v___x_4295_ = lean_string_append(v___y_4293_, v___y_4294_);
v___x_4296_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4296_, 0, v___x_4295_);
v___x_4297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
return v___x_4297_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4332_, lean_object* v_d_4333_, lean_object* v_a_4334_){
_start:
{
lean_object* v_res_4335_; 
v_res_4335_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4332_, v_d_4333_);
lean_dec_ref(v_context_4332_);
return v_res_4335_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(lean_object* v_context_4336_, lean_object* v_bytes_4337_){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4337_);
if (lean_obj_tag(v___x_4339_) == 0)
{
lean_object* v_a_4340_; lean_object* v___x_4341_; 
v_a_4340_ = lean_ctor_get(v___x_4339_, 0);
lean_inc(v_a_4340_);
lean_dec_ref_known(v___x_4339_, 1);
v___x_4341_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4336_, v_a_4340_);
return v___x_4341_;
}
else
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4349_; 
v_a_4342_ = lean_ctor_get(v___x_4339_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4339_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4344_ = v___x_4339_;
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v___x_4339_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4342_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
return v___x_4347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0___boxed(lean_object* v_context_4350_, lean_object* v_bytes_4351_, lean_object* v_a_4352_){
_start:
{
lean_object* v_res_4353_; 
v_res_4353_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v_context_4350_, v_bytes_4351_);
lean_dec_ref(v_bytes_4351_);
lean_dec_ref(v_context_4350_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(lean_object* v_o_4355_, lean_object* v_key_4356_){
_start:
{
lean_object* v_k_4358_; lean_object* v___x_4359_; 
v_k_4358_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4358_, 0, v_key_4356_);
v___x_4359_ = l_Lasm_JS_Wire_encodeIO(v_k_4358_);
if (lean_obj_tag(v___x_4359_) == 0)
{
lean_object* v_a_4360_; uint32_t v___x_4361_; uint32_t v___x_4362_; uint64_t v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; 
v_a_4360_ = lean_ctor_get(v___x_4359_, 0);
lean_inc(v_a_4360_);
lean_dec_ref_known(v___x_4359_, 1);
v___x_4361_ = 203;
v___x_4362_ = lasm_js_value_handle(v_o_4355_);
v___x_4363_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4364_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4365_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4365_, 0, v_o_4355_);
lean_ctor_set(v___x_4365_, 1, v___x_4364_);
v___x_4366_ = lean_unsigned_to_nat(2u);
v___x_4367_ = lean_mk_empty_array_with_capacity(v___x_4366_);
lean_inc_ref(v_k_4358_);
v___x_4368_ = lean_array_push(v___x_4367_, v_k_4358_);
v___x_4369_ = lean_array_push(v___x_4368_, v___x_4365_);
v___x_4370_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4370_, 0, v___x_4369_);
v___x_4371_ = lasm_js_call(v___x_4361_, v___x_4362_, v___x_4363_, v_a_4360_, v___x_4370_);
lean_dec_ref_known(v___x_4370_, 1);
lean_dec(v_a_4360_);
if (lean_obj_tag(v___x_4371_) == 0)
{
lean_object* v_a_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; 
v_a_4372_ = lean_ctor_get(v___x_4371_, 0);
lean_inc(v_a_4372_);
lean_dec_ref_known(v___x_4371_, 1);
v___x_4373_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4374_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4358_);
v___x_4375_ = lean_string_append(v___x_4373_, v___x_4374_);
lean_dec_ref(v___x_4374_);
v___x_4376_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v___x_4375_, v_a_4372_);
lean_dec(v_a_4372_);
lean_dec_ref(v___x_4375_);
return v___x_4376_;
}
else
{
lean_object* v_a_4377_; lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_4384_; 
lean_dec_ref_known(v_k_4358_, 1);
v_a_4377_ = lean_ctor_get(v___x_4371_, 0);
v_isSharedCheck_4384_ = !lean_is_exclusive(v___x_4371_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4379_ = v___x_4371_;
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
else
{
lean_inc(v_a_4377_);
lean_dec(v___x_4371_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
lean_object* v___x_4382_; 
if (v_isShared_4380_ == 0)
{
v___x_4382_ = v___x_4379_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v_a_4377_);
v___x_4382_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
return v___x_4382_;
}
}
}
}
else
{
lean_object* v_a_4385_; lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4392_; 
lean_dec_ref_known(v_k_4358_, 1);
lean_dec(v_o_4355_);
v_a_4385_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4392_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4392_ == 0)
{
v___x_4387_ = v___x_4359_;
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
else
{
lean_inc(v_a_4385_);
lean_dec(v___x_4359_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4390_; 
if (v_isShared_4388_ == 0)
{
v___x_4390_ = v___x_4387_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_a_4385_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___boxed(lean_object* v_o_4393_, lean_object* v_key_4394_, lean_object* v_a_4395_){
_start:
{
lean_object* v_res_4396_; 
v_res_4396_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_o_4393_, v_key_4394_);
return v_res_4396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(lean_object* v_self_4398_){
_start:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4400_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4401_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4398_, v___x_4400_);
return v___x_4401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___boxed(lean_object* v_self_4402_, lean_object* v_a_4403_){
_start:
{
lean_object* v_res_4404_; 
v_res_4404_ = l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(v_self_4402_);
return v_res_4404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close(lean_object* v_self_4405_){
_start:
{
lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; 
v___x_4407_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4408_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4409_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4405_, v___x_4407_, v___x_4408_);
return v___x_4409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close___boxed(lean_object* v_self_4410_, lean_object* v_a_4411_){
_start:
{
lean_object* v_res_4412_; 
v_res_4412_ = l_Lasm_JS_Web_ReadableStreamDefaultController_close(v_self_4410_);
return v_res_4412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(lean_object* v_self_4414_, lean_object* v_chunk_4415_){
_start:
{
lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4417_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4418_ = lean_unsigned_to_nat(1u);
v___x_4419_ = lean_mk_empty_array_with_capacity(v___x_4418_);
v___x_4420_ = lean_array_push(v___x_4419_, v_chunk_4415_);
v___x_4421_ = l_Lasm_JS_Web_Support_args(v___x_4420_);
v___x_4422_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4414_, v___x_4417_, v___x_4421_);
return v___x_4422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___boxed(lean_object* v_self_4423_, lean_object* v_chunk_4424_, lean_object* v_a_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(v_self_4423_, v_chunk_4424_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error(lean_object* v_self_4428_, lean_object* v_e_4429_){
_start:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; 
v___x_4431_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4432_ = lean_unsigned_to_nat(1u);
v___x_4433_ = lean_mk_empty_array_with_capacity(v___x_4432_);
v___x_4434_ = lean_array_push(v___x_4433_, v_e_4429_);
v___x_4435_ = l_Lasm_JS_Web_Support_args(v___x_4434_);
v___x_4436_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4428_, v___x_4431_, v___x_4435_);
return v___x_4436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error___boxed(lean_object* v_self_4437_, lean_object* v_e_4438_, lean_object* v_a_4439_){
_start:
{
lean_object* v_res_4440_; 
v_res_4440_ = l_Lasm_JS_Web_ReadableStreamDefaultController_error(v_self_4437_, v_e_4438_);
return v_res_4440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f(lean_object* v_v_4447_){
_start:
{
lean_object* v___f_4449_; lean_object* v___x_4450_; 
v___f_4449_ = ((lean_object*)(l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___closed__2));
lean_inc(v_v_4447_);
v___x_4450_ = l_Lasm_JS_Web_Support_isInstance(v___f_4449_, v_v_4447_);
if (lean_obj_tag(v___x_4450_) == 0)
{
lean_object* v_a_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4464_; 
v_a_4451_ = lean_ctor_get(v___x_4450_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4450_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4453_ = v___x_4450_;
v_isShared_4454_ = v_isSharedCheck_4464_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_a_4451_);
lean_dec(v___x_4450_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4464_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
uint8_t v___x_4455_; 
v___x_4455_ = lean_unbox(v_a_4451_);
lean_dec(v_a_4451_);
if (v___x_4455_ == 0)
{
lean_object* v___x_4456_; lean_object* v___x_4458_; 
lean_dec(v_v_4447_);
v___x_4456_ = lean_box(0);
if (v_isShared_4454_ == 0)
{
lean_ctor_set(v___x_4453_, 0, v___x_4456_);
v___x_4458_ = v___x_4453_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v___x_4456_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
else
{
lean_object* v___x_4460_; lean_object* v___x_4462_; 
v___x_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4460_, 0, v_v_4447_);
if (v_isShared_4454_ == 0)
{
lean_ctor_set(v___x_4453_, 0, v___x_4460_);
v___x_4462_ = v___x_4453_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v___x_4460_);
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
lean_dec(v_v_4447_);
v_a_4465_ = lean_ctor_get(v___x_4450_, 0);
v_isSharedCheck_4472_ = !lean_is_exclusive(v___x_4450_);
if (v_isSharedCheck_4472_ == 0)
{
v___x_4467_ = v___x_4450_;
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
else
{
lean_inc(v_a_4465_);
lean_dec(v___x_4450_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f___boxed(lean_object* v_v_4473_, lean_object* v_a_4474_){
_start:
{
lean_object* v_res_4475_; 
v_res_4475_ = l_Lasm_JS_Web_ReadableByteStreamController_cast_x3f(v_v_4473_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(lean_object* v_context_4477_, lean_object* v_d_4478_){
_start:
{
lean_object* v___y_4484_; lean_object* v___y_4485_; 
switch(lean_obj_tag(v_d_4478_))
{
case 1:
{
goto v___jp_4480_;
}
case 0:
{
goto v___jp_4480_;
}
default: 
{
if (lean_obj_tag(v_d_4478_) == 9)
{
lean_object* v_value_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; 
v_value_4489_ = lean_ctor_get(v_d_4478_, 0);
lean_inc(v_value_4489_);
lean_dec_ref_known(v_d_4478_, 2);
v___x_4490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4490_, 0, v_value_4489_);
v___x_4491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4491_, 0, v___x_4490_);
return v___x_4491_;
}
else
{
lean_object* v___x_4492_; lean_object* v_received_4494_; 
v___x_4492_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4478_) == 9)
{
lean_object* v_value_4508_; lean_object* v_description_4509_; uint8_t v___x_4510_; 
v_value_4508_ = lean_ctor_get(v_d_4478_, 0);
v_description_4509_ = lean_ctor_get(v_d_4478_, 1);
v___x_4510_ = lean_string_dec_eq(v_description_4509_, v___x_4492_);
if (v___x_4510_ == 0)
{
goto v___jp_4506_;
}
else
{
uint32_t v___x_4511_; uint64_t v___x_4512_; lean_object* v___x_4513_; uint32_t v___x_4514_; lean_object* v___x_4515_; 
lean_inc_n(v_value_4508_, 2);
lean_dec_ref_known(v_d_4478_, 2);
v___x_4511_ = 206;
v___x_4512_ = 0ULL;
v___x_4513_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4513_, 0, v_value_4508_);
lean_ctor_set(v___x_4513_, 1, v___x_4492_);
v___x_4514_ = lasm_js_value_handle(v_value_4508_);
lean_dec(v_value_4508_);
v___x_4515_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4511_, v___x_4512_, v___x_4513_, v___x_4514_);
lean_dec_ref_known(v___x_4513_, 2);
if (lean_obj_tag(v___x_4515_) == 0)
{
lean_object* v_a_4516_; uint8_t v___x_4517_; 
v_a_4516_ = lean_ctor_get(v___x_4515_, 0);
lean_inc(v_a_4516_);
lean_dec_ref_known(v___x_4515_, 1);
v___x_4517_ = lean_string_validate_utf8(v_a_4516_);
if (v___x_4517_ == 0)
{
lean_object* v___x_4518_; lean_object* v___x_4519_; 
lean_dec(v_a_4516_);
v___x_4518_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4519_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4518_);
v_received_4494_ = v___x_4519_;
goto v___jp_4493_;
}
else
{
lean_object* v___x_4520_; 
v___x_4520_ = lean_string_from_utf8_unchecked(v_a_4516_);
v_received_4494_ = v___x_4520_;
goto v___jp_4493_;
}
}
else
{
lean_object* v___x_4521_; 
lean_dec_ref_known(v___x_4515_, 1);
v___x_4521_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4494_ = v___x_4521_;
goto v___jp_4493_;
}
}
}
else
{
goto v___jp_4506_;
}
v___jp_4493_:
{
lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; uint8_t v___x_4504_; 
v___x_4495_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4496_ = lean_string_append(v___x_4495_, v_context_4477_);
v___x_4497_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4498_ = lean_string_append(v___x_4496_, v___x_4497_);
v___x_4499_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___closed__0));
v___x_4500_ = lean_string_append(v___x_4498_, v___x_4499_);
v___x_4501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4502_ = lean_string_append(v___x_4500_, v___x_4501_);
v___x_4503_ = lean_string_append(v___x_4502_, v_received_4494_);
lean_dec_ref(v_received_4494_);
v___x_4504_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4504_ == 0)
{
lean_object* v___x_4505_; 
v___x_4505_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4484_ = v___x_4503_;
v___y_4485_ = v___x_4505_;
goto v___jp_4483_;
}
else
{
v___y_4484_ = v___x_4503_;
v___y_4485_ = v___x_4492_;
goto v___jp_4483_;
}
}
v___jp_4506_:
{
lean_object* v___x_4507_; 
v___x_4507_ = l_Lasm_JS_Data_describe(v_d_4478_);
v_received_4494_ = v___x_4507_;
goto v___jp_4493_;
}
}
}
}
v___jp_4480_:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; 
v___x_4481_ = lean_box(0);
v___x_4482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4481_);
return v___x_4482_;
}
v___jp_4483_:
{
lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4486_ = lean_string_append(v___y_4484_, v___y_4485_);
v___x_4487_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4487_, 0, v___x_4486_);
v___x_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4488_, 0, v___x_4487_);
return v___x_4488_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4522_, lean_object* v_d_4523_, lean_object* v_a_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4522_, v_d_4523_);
lean_dec_ref(v_context_4522_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(lean_object* v_context_4526_, lean_object* v_bytes_4527_){
_start:
{
lean_object* v___x_4529_; 
v___x_4529_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4527_);
if (lean_obj_tag(v___x_4529_) == 0)
{
lean_object* v_a_4530_; lean_object* v___x_4531_; 
v_a_4530_ = lean_ctor_get(v___x_4529_, 0);
lean_inc(v_a_4530_);
lean_dec_ref_known(v___x_4529_, 1);
v___x_4531_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4526_, v_a_4530_);
return v___x_4531_;
}
else
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4539_; 
v_a_4532_ = lean_ctor_get(v___x_4529_, 0);
v_isSharedCheck_4539_ = !lean_is_exclusive(v___x_4529_);
if (v_isSharedCheck_4539_ == 0)
{
v___x_4534_ = v___x_4529_;
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4529_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v___x_4537_; 
if (v_isShared_4535_ == 0)
{
v___x_4537_ = v___x_4534_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v_a_4532_);
v___x_4537_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
return v___x_4537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0___boxed(lean_object* v_context_4540_, lean_object* v_bytes_4541_, lean_object* v_a_4542_){
_start:
{
lean_object* v_res_4543_; 
v_res_4543_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v_context_4540_, v_bytes_4541_);
lean_dec_ref(v_bytes_4541_);
lean_dec_ref(v_context_4540_);
return v_res_4543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(lean_object* v_o_4544_, lean_object* v_key_4545_){
_start:
{
lean_object* v_k_4547_; lean_object* v___x_4548_; 
v_k_4547_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4547_, 0, v_key_4545_);
v___x_4548_ = l_Lasm_JS_Wire_encodeIO(v_k_4547_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v_a_4549_; uint32_t v___x_4550_; uint32_t v___x_4551_; uint64_t v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; 
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
lean_inc(v_a_4549_);
lean_dec_ref_known(v___x_4548_, 1);
v___x_4550_ = 203;
v___x_4551_ = lasm_js_value_handle(v_o_4544_);
v___x_4552_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4553_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4554_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4554_, 0, v_o_4544_);
lean_ctor_set(v___x_4554_, 1, v___x_4553_);
v___x_4555_ = lean_unsigned_to_nat(2u);
v___x_4556_ = lean_mk_empty_array_with_capacity(v___x_4555_);
lean_inc_ref(v_k_4547_);
v___x_4557_ = lean_array_push(v___x_4556_, v_k_4547_);
v___x_4558_ = lean_array_push(v___x_4557_, v___x_4554_);
v___x_4559_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4558_);
v___x_4560_ = lasm_js_call(v___x_4550_, v___x_4551_, v___x_4552_, v_a_4549_, v___x_4559_);
lean_dec_ref_known(v___x_4559_, 1);
lean_dec(v_a_4549_);
if (lean_obj_tag(v___x_4560_) == 0)
{
lean_object* v_a_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; 
v_a_4561_ = lean_ctor_get(v___x_4560_, 0);
lean_inc(v_a_4561_);
lean_dec_ref_known(v___x_4560_, 1);
v___x_4562_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4563_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4547_);
v___x_4564_ = lean_string_append(v___x_4562_, v___x_4563_);
lean_dec_ref(v___x_4563_);
v___x_4565_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v___x_4564_, v_a_4561_);
lean_dec(v_a_4561_);
lean_dec_ref(v___x_4564_);
return v___x_4565_;
}
else
{
lean_object* v_a_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4573_; 
lean_dec_ref_known(v_k_4547_, 1);
v_a_4566_ = lean_ctor_get(v___x_4560_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4560_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4568_ = v___x_4560_;
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_a_4566_);
lean_dec(v___x_4560_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v___x_4571_; 
if (v_isShared_4569_ == 0)
{
v___x_4571_ = v___x_4568_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v_a_4566_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
return v___x_4571_;
}
}
}
}
else
{
lean_object* v_a_4574_; lean_object* v___x_4576_; uint8_t v_isShared_4577_; uint8_t v_isSharedCheck_4581_; 
lean_dec_ref_known(v_k_4547_, 1);
lean_dec(v_o_4544_);
v_a_4574_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4576_ = v___x_4548_;
v_isShared_4577_ = v_isSharedCheck_4581_;
goto v_resetjp_4575_;
}
else
{
lean_inc(v_a_4574_);
lean_dec(v___x_4548_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0___boxed(lean_object* v_o_4582_, lean_object* v_key_4583_, lean_object* v_a_4584_){
_start:
{
lean_object* v_res_4585_; 
v_res_4585_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_o_4582_, v_key_4583_);
return v_res_4585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(lean_object* v_self_4587_){
_start:
{
lean_object* v___x_4589_; lean_object* v___x_4590_; 
v___x_4589_ = ((lean_object*)(l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___closed__0));
v___x_4590_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_self_4587_, v___x_4589_);
return v___x_4590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___boxed(lean_object* v_self_4591_, lean_object* v_a_4592_){
_start:
{
lean_object* v_res_4593_; 
v_res_4593_ = l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(v_self_4591_);
return v_res_4593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(lean_object* v_self_4594_){
_start:
{
lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4596_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4597_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4594_, v___x_4596_);
return v___x_4597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize___boxed(lean_object* v_self_4598_, lean_object* v_a_4599_){
_start:
{
lean_object* v_res_4600_; 
v_res_4600_ = l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(v_self_4598_);
return v_res_4600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close(lean_object* v_self_4601_){
_start:
{
lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; 
v___x_4603_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4604_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4605_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4601_, v___x_4603_, v___x_4604_);
return v___x_4605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close___boxed(lean_object* v_self_4606_, lean_object* v_a_4607_){
_start:
{
lean_object* v_res_4608_; 
v_res_4608_ = l_Lasm_JS_Web_ReadableByteStreamController_close(v_self_4606_);
return v_res_4608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue(lean_object* v_self_4609_, lean_object* v_chunk_4610_){
_start:
{
lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; 
v___x_4612_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4613_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4613_, 0, v_chunk_4610_);
v___x_4614_ = lean_unsigned_to_nat(1u);
v___x_4615_ = lean_mk_empty_array_with_capacity(v___x_4614_);
v___x_4616_ = lean_array_push(v___x_4615_, v___x_4613_);
v___x_4617_ = l_Lasm_JS_Web_Support_args(v___x_4616_);
v___x_4618_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4609_, v___x_4612_, v___x_4617_);
return v___x_4618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue___boxed(lean_object* v_self_4619_, lean_object* v_chunk_4620_, lean_object* v_a_4621_){
_start:
{
lean_object* v_res_4622_; 
v_res_4622_ = l_Lasm_JS_Web_ReadableByteStreamController_enqueue(v_self_4619_, v_chunk_4620_);
return v_res_4622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error(lean_object* v_self_4623_, lean_object* v_e_4624_){
_start:
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; 
v___x_4626_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4627_ = lean_unsigned_to_nat(1u);
v___x_4628_ = lean_mk_empty_array_with_capacity(v___x_4627_);
v___x_4629_ = lean_array_push(v___x_4628_, v_e_4624_);
v___x_4630_ = l_Lasm_JS_Web_Support_args(v___x_4629_);
v___x_4631_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4623_, v___x_4626_, v___x_4630_);
return v___x_4631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error___boxed(lean_object* v_self_4632_, lean_object* v_e_4633_, lean_object* v_a_4634_){
_start:
{
lean_object* v_res_4635_; 
v_res_4635_ = l_Lasm_JS_Web_ReadableByteStreamController_error(v_self_4632_, v_e_4633_);
return v_res_4635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f(lean_object* v_v_4642_){
_start:
{
lean_object* v___f_4644_; lean_object* v___x_4645_; 
v___f_4644_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___closed__2));
lean_inc(v_v_4642_);
v___x_4645_ = l_Lasm_JS_Web_Support_isInstance(v___f_4644_, v_v_4642_);
if (lean_obj_tag(v___x_4645_) == 0)
{
lean_object* v_a_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4659_; 
v_a_4646_ = lean_ctor_get(v___x_4645_, 0);
v_isSharedCheck_4659_ = !lean_is_exclusive(v___x_4645_);
if (v_isSharedCheck_4659_ == 0)
{
v___x_4648_ = v___x_4645_;
v_isShared_4649_ = v_isSharedCheck_4659_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_a_4646_);
lean_dec(v___x_4645_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4659_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
uint8_t v___x_4650_; 
v___x_4650_ = lean_unbox(v_a_4646_);
lean_dec(v_a_4646_);
if (v___x_4650_ == 0)
{
lean_object* v___x_4651_; lean_object* v___x_4653_; 
lean_dec(v_v_4642_);
v___x_4651_ = lean_box(0);
if (v_isShared_4649_ == 0)
{
lean_ctor_set(v___x_4648_, 0, v___x_4651_);
v___x_4653_ = v___x_4648_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v___x_4651_);
v___x_4653_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
return v___x_4653_;
}
}
else
{
lean_object* v___x_4655_; lean_object* v___x_4657_; 
v___x_4655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4655_, 0, v_v_4642_);
if (v_isShared_4649_ == 0)
{
lean_ctor_set(v___x_4648_, 0, v___x_4655_);
v___x_4657_ = v___x_4648_;
goto v_reusejp_4656_;
}
else
{
lean_object* v_reuseFailAlloc_4658_; 
v_reuseFailAlloc_4658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4658_, 0, v___x_4655_);
v___x_4657_ = v_reuseFailAlloc_4658_;
goto v_reusejp_4656_;
}
v_reusejp_4656_:
{
return v___x_4657_;
}
}
}
}
else
{
lean_object* v_a_4660_; lean_object* v___x_4662_; uint8_t v_isShared_4663_; uint8_t v_isSharedCheck_4667_; 
lean_dec(v_v_4642_);
v_a_4660_ = lean_ctor_get(v___x_4645_, 0);
v_isSharedCheck_4667_ = !lean_is_exclusive(v___x_4645_);
if (v_isSharedCheck_4667_ == 0)
{
v___x_4662_ = v___x_4645_;
v_isShared_4663_ = v_isSharedCheck_4667_;
goto v_resetjp_4661_;
}
else
{
lean_inc(v_a_4660_);
lean_dec(v___x_4645_);
v___x_4662_ = lean_box(0);
v_isShared_4663_ = v_isSharedCheck_4667_;
goto v_resetjp_4661_;
}
v_resetjp_4661_:
{
lean_object* v___x_4665_; 
if (v_isShared_4663_ == 0)
{
v___x_4665_ = v___x_4662_;
goto v_reusejp_4664_;
}
else
{
lean_object* v_reuseFailAlloc_4666_; 
v_reuseFailAlloc_4666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4666_, 0, v_a_4660_);
v___x_4665_ = v_reuseFailAlloc_4666_;
goto v_reusejp_4664_;
}
v_reusejp_4664_:
{
return v___x_4665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f___boxed(lean_object* v_v_4668_, lean_object* v_a_4669_){
_start:
{
lean_object* v_res_4670_; 
v_res_4670_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_cast_x3f(v_v_4668_);
return v_res_4670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(lean_object* v_context_4672_, lean_object* v_d_4673_){
_start:
{
lean_object* v___y_4679_; lean_object* v___y_4680_; 
switch(lean_obj_tag(v_d_4673_))
{
case 1:
{
goto v___jp_4675_;
}
case 0:
{
goto v___jp_4675_;
}
default: 
{
if (lean_obj_tag(v_d_4673_) == 6)
{
lean_object* v_b_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; 
v_b_4684_ = lean_ctor_get(v_d_4673_, 0);
lean_inc_ref(v_b_4684_);
lean_dec_ref_known(v_d_4673_, 1);
v___x_4685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4685_, 0, v_b_4684_);
v___x_4686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4686_, 0, v___x_4685_);
return v___x_4686_;
}
else
{
lean_object* v___x_4687_; lean_object* v_received_4689_; 
v___x_4687_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4673_) == 9)
{
lean_object* v_value_4703_; lean_object* v_description_4704_; uint8_t v___x_4705_; 
v_value_4703_ = lean_ctor_get(v_d_4673_, 0);
v_description_4704_ = lean_ctor_get(v_d_4673_, 1);
v___x_4705_ = lean_string_dec_eq(v_description_4704_, v___x_4687_);
if (v___x_4705_ == 0)
{
goto v___jp_4701_;
}
else
{
uint32_t v___x_4706_; uint64_t v___x_4707_; lean_object* v___x_4708_; uint32_t v___x_4709_; lean_object* v___x_4710_; 
lean_inc_n(v_value_4703_, 2);
lean_dec_ref_known(v_d_4673_, 2);
v___x_4706_ = 206;
v___x_4707_ = 0ULL;
v___x_4708_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4708_, 0, v_value_4703_);
lean_ctor_set(v___x_4708_, 1, v___x_4687_);
v___x_4709_ = lasm_js_value_handle(v_value_4703_);
lean_dec(v_value_4703_);
v___x_4710_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4706_, v___x_4707_, v___x_4708_, v___x_4709_);
lean_dec_ref_known(v___x_4708_, 2);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_object* v_a_4711_; uint8_t v___x_4712_; 
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4711_);
lean_dec_ref_known(v___x_4710_, 1);
v___x_4712_ = lean_string_validate_utf8(v_a_4711_);
if (v___x_4712_ == 0)
{
lean_object* v___x_4713_; lean_object* v___x_4714_; 
lean_dec(v_a_4711_);
v___x_4713_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4714_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4713_);
v_received_4689_ = v___x_4714_;
goto v___jp_4688_;
}
else
{
lean_object* v___x_4715_; 
v___x_4715_ = lean_string_from_utf8_unchecked(v_a_4711_);
v_received_4689_ = v___x_4715_;
goto v___jp_4688_;
}
}
else
{
lean_object* v___x_4716_; 
lean_dec_ref_known(v___x_4710_, 1);
v___x_4716_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4689_ = v___x_4716_;
goto v___jp_4688_;
}
}
}
else
{
goto v___jp_4701_;
}
v___jp_4688_:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; uint8_t v___x_4699_; 
v___x_4690_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4691_ = lean_string_append(v___x_4690_, v_context_4672_);
v___x_4692_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4693_ = lean_string_append(v___x_4691_, v___x_4692_);
v___x_4694_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___closed__0));
v___x_4695_ = lean_string_append(v___x_4693_, v___x_4694_);
v___x_4696_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4697_ = lean_string_append(v___x_4695_, v___x_4696_);
v___x_4698_ = lean_string_append(v___x_4697_, v_received_4689_);
lean_dec_ref(v_received_4689_);
v___x_4699_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4699_ == 0)
{
lean_object* v___x_4700_; 
v___x_4700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4679_ = v___x_4698_;
v___y_4680_ = v___x_4700_;
goto v___jp_4678_;
}
else
{
v___y_4679_ = v___x_4698_;
v___y_4680_ = v___x_4687_;
goto v___jp_4678_;
}
}
v___jp_4701_:
{
lean_object* v___x_4702_; 
v___x_4702_ = l_Lasm_JS_Data_describe(v_d_4673_);
v_received_4689_ = v___x_4702_;
goto v___jp_4688_;
}
}
}
}
v___jp_4675_:
{
lean_object* v___x_4676_; lean_object* v___x_4677_; 
v___x_4676_ = lean_box(0);
v___x_4677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4677_, 0, v___x_4676_);
return v___x_4677_;
}
v___jp_4678_:
{
lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; 
v___x_4681_ = lean_string_append(v___y_4679_, v___y_4680_);
v___x_4682_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4682_, 0, v___x_4681_);
v___x_4683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4683_, 0, v___x_4682_);
return v___x_4683_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4717_, lean_object* v_d_4718_, lean_object* v_a_4719_){
_start:
{
lean_object* v_res_4720_; 
v_res_4720_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4717_, v_d_4718_);
lean_dec_ref(v_context_4717_);
return v_res_4720_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(lean_object* v_context_4721_, lean_object* v_bytes_4722_){
_start:
{
lean_object* v___x_4724_; 
v___x_4724_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4722_);
if (lean_obj_tag(v___x_4724_) == 0)
{
lean_object* v_a_4725_; lean_object* v___x_4726_; 
v_a_4725_ = lean_ctor_get(v___x_4724_, 0);
lean_inc(v_a_4725_);
lean_dec_ref_known(v___x_4724_, 1);
v___x_4726_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4721_, v_a_4725_);
return v___x_4726_;
}
else
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4734_; 
v_a_4727_ = lean_ctor_get(v___x_4724_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4724_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4729_ = v___x_4724_;
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4724_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
lean_object* v___x_4732_; 
if (v_isShared_4730_ == 0)
{
v___x_4732_ = v___x_4729_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v_a_4727_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
return v___x_4732_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0___boxed(lean_object* v_context_4735_, lean_object* v_bytes_4736_, lean_object* v_a_4737_){
_start:
{
lean_object* v_res_4738_; 
v_res_4738_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v_context_4735_, v_bytes_4736_);
lean_dec_ref(v_bytes_4736_);
lean_dec_ref(v_context_4735_);
return v_res_4738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(lean_object* v_o_4739_, lean_object* v_key_4740_){
_start:
{
lean_object* v_k_4742_; lean_object* v___x_4743_; 
v_k_4742_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4742_, 0, v_key_4740_);
v___x_4743_ = l_Lasm_JS_Wire_encodeIO(v_k_4742_);
if (lean_obj_tag(v___x_4743_) == 0)
{
lean_object* v_a_4744_; uint32_t v___x_4745_; uint32_t v___x_4746_; uint64_t v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; 
v_a_4744_ = lean_ctor_get(v___x_4743_, 0);
lean_inc(v_a_4744_);
lean_dec_ref_known(v___x_4743_, 1);
v___x_4745_ = 203;
v___x_4746_ = lasm_js_value_handle(v_o_4739_);
v___x_4747_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4748_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4749_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4749_, 0, v_o_4739_);
lean_ctor_set(v___x_4749_, 1, v___x_4748_);
v___x_4750_ = lean_unsigned_to_nat(2u);
v___x_4751_ = lean_mk_empty_array_with_capacity(v___x_4750_);
lean_inc_ref(v_k_4742_);
v___x_4752_ = lean_array_push(v___x_4751_, v_k_4742_);
v___x_4753_ = lean_array_push(v___x_4752_, v___x_4749_);
v___x_4754_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4754_, 0, v___x_4753_);
v___x_4755_ = lasm_js_call(v___x_4745_, v___x_4746_, v___x_4747_, v_a_4744_, v___x_4754_);
lean_dec_ref_known(v___x_4754_, 1);
lean_dec(v_a_4744_);
if (lean_obj_tag(v___x_4755_) == 0)
{
lean_object* v_a_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v_a_4756_ = lean_ctor_get(v___x_4755_, 0);
lean_inc(v_a_4756_);
lean_dec_ref_known(v___x_4755_, 1);
v___x_4757_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4758_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4742_);
v___x_4759_ = lean_string_append(v___x_4757_, v___x_4758_);
lean_dec_ref(v___x_4758_);
v___x_4760_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v___x_4759_, v_a_4756_);
lean_dec(v_a_4756_);
lean_dec_ref(v___x_4759_);
return v___x_4760_;
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4768_; 
lean_dec_ref_known(v_k_4742_, 1);
v_a_4761_ = lean_ctor_get(v___x_4755_, 0);
v_isSharedCheck_4768_ = !lean_is_exclusive(v___x_4755_);
if (v_isSharedCheck_4768_ == 0)
{
v___x_4763_ = v___x_4755_;
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4755_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4768_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4766_; 
if (v_isShared_4764_ == 0)
{
v___x_4766_ = v___x_4763_;
goto v_reusejp_4765_;
}
else
{
lean_object* v_reuseFailAlloc_4767_; 
v_reuseFailAlloc_4767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4767_, 0, v_a_4761_);
v___x_4766_ = v_reuseFailAlloc_4767_;
goto v_reusejp_4765_;
}
v_reusejp_4765_:
{
return v___x_4766_;
}
}
}
}
else
{
lean_object* v_a_4769_; lean_object* v___x_4771_; uint8_t v_isShared_4772_; uint8_t v_isSharedCheck_4776_; 
lean_dec_ref_known(v_k_4742_, 1);
lean_dec(v_o_4739_);
v_a_4769_ = lean_ctor_get(v___x_4743_, 0);
v_isSharedCheck_4776_ = !lean_is_exclusive(v___x_4743_);
if (v_isSharedCheck_4776_ == 0)
{
v___x_4771_ = v___x_4743_;
v_isShared_4772_ = v_isSharedCheck_4776_;
goto v_resetjp_4770_;
}
else
{
lean_inc(v_a_4769_);
lean_dec(v___x_4743_);
v___x_4771_ = lean_box(0);
v_isShared_4772_ = v_isSharedCheck_4776_;
goto v_resetjp_4770_;
}
v_resetjp_4770_:
{
lean_object* v___x_4774_; 
if (v_isShared_4772_ == 0)
{
v___x_4774_ = v___x_4771_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v_a_4769_);
v___x_4774_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
return v___x_4774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0___boxed(lean_object* v_o_4777_, lean_object* v_key_4778_, lean_object* v_a_4779_){
_start:
{
lean_object* v_res_4780_; 
v_res_4780_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_o_4777_, v_key_4778_);
return v_res_4780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(lean_object* v_self_4782_){
_start:
{
lean_object* v___x_4784_; lean_object* v___x_4785_; 
v___x_4784_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___closed__0));
v___x_4785_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_self_4782_, v___x_4784_);
return v___x_4785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___boxed(lean_object* v_self_4786_, lean_object* v_a_4787_){
_start:
{
lean_object* v_res_4788_; 
v_res_4788_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(v_self_4786_);
return v_res_4788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(lean_object* v_self_4790_, lean_object* v_bytesWritten_4791_){
_start:
{
lean_object* v___x_4793_; lean_object* v___y_4795_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; uint8_t v___x_4804_; 
v___x_4793_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___closed__0));
v___x_4801_ = lean_nat_to_int(v_bytesWritten_4791_);
v___x_4802_ = lean_nat_abs(v___x_4801_);
v___x_4803_ = lean_cstr_to_nat("9007199254740991");
v___x_4804_ = lean_nat_dec_le(v___x_4802_, v___x_4803_);
lean_dec(v___x_4802_);
if (v___x_4804_ == 0)
{
lean_object* v___x_4805_; 
v___x_4805_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4805_, 0, v___x_4801_);
v___y_4795_ = v___x_4805_;
goto v___jp_4794_;
}
else
{
double v___x_4806_; lean_object* v___x_4807_; 
v___x_4806_ = l_Float_ofInt(v___x_4801_);
lean_dec(v___x_4801_);
v___x_4807_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4807_, 0, v___x_4806_);
v___y_4795_ = v___x_4807_;
goto v___jp_4794_;
}
v___jp_4794_:
{
lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; 
v___x_4796_ = lean_unsigned_to_nat(1u);
v___x_4797_ = lean_mk_empty_array_with_capacity(v___x_4796_);
v___x_4798_ = lean_array_push(v___x_4797_, v___y_4795_);
v___x_4799_ = l_Lasm_JS_Web_Support_args(v___x_4798_);
v___x_4800_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4790_, v___x_4793_, v___x_4799_);
return v___x_4800_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___boxed(lean_object* v_self_4808_, lean_object* v_bytesWritten_4809_, lean_object* v_a_4810_){
_start:
{
lean_object* v_res_4811_; 
v_res_4811_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(v_self_4808_, v_bytesWritten_4809_);
return v_res_4811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(lean_object* v_self_4813_, lean_object* v_view_4814_){
_start:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; 
v___x_4816_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___closed__0));
v___x_4817_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4817_, 0, v_view_4814_);
v___x_4818_ = lean_unsigned_to_nat(1u);
v___x_4819_ = lean_mk_empty_array_with_capacity(v___x_4818_);
v___x_4820_ = lean_array_push(v___x_4819_, v___x_4817_);
v___x_4821_ = l_Lasm_JS_Web_Support_args(v___x_4820_);
v___x_4822_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4813_, v___x_4816_, v___x_4821_);
return v___x_4822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___boxed(lean_object* v_self_4823_, lean_object* v_view_4824_, lean_object* v_a_4825_){
_start:
{
lean_object* v_res_4826_; 
v_res_4826_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(v_self_4823_, v_view_4824_);
return v_res_4826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_cast_x3f(lean_object* v_v_4833_){
_start:
{
lean_object* v___f_4835_; lean_object* v___x_4836_; 
v___f_4835_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_cast_x3f___closed__2));
lean_inc(v_v_4833_);
v___x_4836_ = l_Lasm_JS_Web_Support_isInstance(v___f_4835_, v_v_4833_);
if (lean_obj_tag(v___x_4836_) == 0)
{
lean_object* v_a_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4850_; 
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4850_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4850_ == 0)
{
v___x_4839_ = v___x_4836_;
v_isShared_4840_ = v_isSharedCheck_4850_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_a_4837_);
lean_dec(v___x_4836_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4850_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
uint8_t v___x_4841_; 
v___x_4841_ = lean_unbox(v_a_4837_);
lean_dec(v_a_4837_);
if (v___x_4841_ == 0)
{
lean_object* v___x_4842_; lean_object* v___x_4844_; 
lean_dec(v_v_4833_);
v___x_4842_ = lean_box(0);
if (v_isShared_4840_ == 0)
{
lean_ctor_set(v___x_4839_, 0, v___x_4842_);
v___x_4844_ = v___x_4839_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v___x_4842_);
v___x_4844_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
return v___x_4844_;
}
}
else
{
lean_object* v___x_4846_; lean_object* v___x_4848_; 
v___x_4846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4846_, 0, v_v_4833_);
if (v_isShared_4840_ == 0)
{
lean_ctor_set(v___x_4839_, 0, v___x_4846_);
v___x_4848_ = v___x_4839_;
goto v_reusejp_4847_;
}
else
{
lean_object* v_reuseFailAlloc_4849_; 
v_reuseFailAlloc_4849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4849_, 0, v___x_4846_);
v___x_4848_ = v_reuseFailAlloc_4849_;
goto v_reusejp_4847_;
}
v_reusejp_4847_:
{
return v___x_4848_;
}
}
}
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4858_; 
lean_dec(v_v_4833_);
v_a_4851_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4853_ = v___x_4836_;
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4836_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v___x_4856_; 
if (v_isShared_4854_ == 0)
{
v___x_4856_ = v___x_4853_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v_a_4851_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
return v___x_4856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_cast_x3f___boxed(lean_object* v_v_4859_, lean_object* v_a_4860_){
_start:
{
lean_object* v_res_4861_; 
v_res_4861_ = l_Lasm_JS_Web_WritableStream_cast_x3f(v_v_4859_);
return v_res_4861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(lean_object* v_context_4862_, lean_object* v_d_4863_){
_start:
{
lean_object* v___y_4866_; lean_object* v___y_4867_; 
if (lean_obj_tag(v_d_4863_) == 9)
{
lean_object* v_value_4871_; lean_object* v___x_4872_; 
v_value_4871_ = lean_ctor_get(v_d_4863_, 0);
lean_inc(v_value_4871_);
lean_dec_ref_known(v_d_4863_, 2);
v___x_4872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4872_, 0, v_value_4871_);
return v___x_4872_;
}
else
{
lean_object* v___x_4873_; lean_object* v_received_4875_; 
v___x_4873_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4863_) == 9)
{
lean_object* v_value_4889_; lean_object* v_description_4890_; uint8_t v___x_4891_; 
v_value_4889_ = lean_ctor_get(v_d_4863_, 0);
v_description_4890_ = lean_ctor_get(v_d_4863_, 1);
v___x_4891_ = lean_string_dec_eq(v_description_4890_, v___x_4873_);
if (v___x_4891_ == 0)
{
goto v___jp_4887_;
}
else
{
uint32_t v___x_4892_; uint64_t v___x_4893_; lean_object* v___x_4894_; uint32_t v___x_4895_; lean_object* v___x_4896_; 
lean_inc_n(v_value_4889_, 2);
lean_dec_ref_known(v_d_4863_, 2);
v___x_4892_ = 206;
v___x_4893_ = 0ULL;
v___x_4894_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4894_, 0, v_value_4889_);
lean_ctor_set(v___x_4894_, 1, v___x_4873_);
v___x_4895_ = lasm_js_value_handle(v_value_4889_);
lean_dec(v_value_4889_);
v___x_4896_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4892_, v___x_4893_, v___x_4894_, v___x_4895_);
lean_dec_ref_known(v___x_4894_, 2);
if (lean_obj_tag(v___x_4896_) == 0)
{
lean_object* v_a_4897_; uint8_t v___x_4898_; 
v_a_4897_ = lean_ctor_get(v___x_4896_, 0);
lean_inc(v_a_4897_);
lean_dec_ref_known(v___x_4896_, 1);
v___x_4898_ = lean_string_validate_utf8(v_a_4897_);
if (v___x_4898_ == 0)
{
lean_object* v___x_4899_; lean_object* v___x_4900_; 
lean_dec(v_a_4897_);
v___x_4899_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4900_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4899_);
v_received_4875_ = v___x_4900_;
goto v___jp_4874_;
}
else
{
lean_object* v___x_4901_; 
v___x_4901_ = lean_string_from_utf8_unchecked(v_a_4897_);
v_received_4875_ = v___x_4901_;
goto v___jp_4874_;
}
}
else
{
lean_object* v___x_4902_; 
lean_dec_ref_known(v___x_4896_, 1);
v___x_4902_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4875_ = v___x_4902_;
goto v___jp_4874_;
}
}
}
else
{
goto v___jp_4887_;
}
v___jp_4874_:
{
lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; uint8_t v___x_4885_; 
v___x_4876_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4877_ = lean_string_append(v___x_4876_, v_context_4862_);
v___x_4878_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4879_ = lean_string_append(v___x_4877_, v___x_4878_);
v___x_4880_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStream___closed__0));
v___x_4881_ = lean_string_append(v___x_4879_, v___x_4880_);
v___x_4882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4883_ = lean_string_append(v___x_4881_, v___x_4882_);
v___x_4884_ = lean_string_append(v___x_4883_, v_received_4875_);
lean_dec_ref(v_received_4875_);
v___x_4885_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4885_ == 0)
{
lean_object* v___x_4886_; 
v___x_4886_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4866_ = v___x_4884_;
v___y_4867_ = v___x_4886_;
goto v___jp_4865_;
}
else
{
v___y_4866_ = v___x_4884_;
v___y_4867_ = v___x_4873_;
goto v___jp_4865_;
}
}
v___jp_4887_:
{
lean_object* v___x_4888_; 
v___x_4888_ = l_Lasm_JS_Data_describe(v_d_4863_);
v_received_4875_ = v___x_4888_;
goto v___jp_4874_;
}
}
v___jp_4865_:
{
lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; 
v___x_4868_ = lean_string_append(v___y_4866_, v___y_4867_);
v___x_4869_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4869_, 0, v___x_4868_);
v___x_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4870_, 0, v___x_4869_);
return v___x_4870_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0___boxed(lean_object* v_context_4903_, lean_object* v_d_4904_, lean_object* v_a_4905_){
_start:
{
lean_object* v_res_4906_; 
v_res_4906_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v_context_4903_, v_d_4904_);
lean_dec_ref(v_context_4903_);
return v_res_4906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(lean_object* v_b_4907_, lean_object* v_args_4908_, uint8_t v_await_4909_){
_start:
{
uint64_t v___y_4912_; uint64_t v___y_4913_; uint64_t v___x_4956_; uint64_t v___y_4958_; 
v___x_4956_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4909_ == 0)
{
uint64_t v___x_4963_; 
v___x_4963_ = 0ULL;
v___y_4958_ = v___x_4963_;
goto v___jp_4957_;
}
else
{
uint64_t v___x_4964_; 
v___x_4964_ = 2ULL;
v___y_4958_ = v___x_4964_;
goto v___jp_4957_;
}
v___jp_4911_:
{
uint64_t v_flags_4914_; uint32_t v___x_4915_; lean_object* v___x_4916_; uint32_t v___x_4917_; lean_object* v___x_4918_; 
v_flags_4914_ = lean_uint64_lor(v___y_4912_, v___y_4913_);
v___x_4915_ = 214;
v___x_4916_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4907_, v_args_4908_);
v___x_4917_ = 0;
v___x_4918_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4915_, v_flags_4914_, v___x_4916_, v___x_4917_);
lean_dec(v___x_4916_);
if (lean_obj_tag(v___x_4918_) == 0)
{
if (lean_obj_tag(v___x_4918_) == 0)
{
lean_object* v_a_4919_; lean_object* v___x_4920_; 
v_a_4919_ = lean_ctor_get(v___x_4918_, 0);
lean_inc(v_a_4919_);
lean_dec_ref_known(v___x_4918_, 1);
v___x_4920_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4919_);
lean_dec(v_a_4919_);
if (lean_obj_tag(v___x_4920_) == 0)
{
lean_object* v_a_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; 
v_a_4921_ = lean_ctor_get(v___x_4920_, 0);
lean_inc(v_a_4921_);
lean_dec_ref_known(v___x_4920_, 1);
v___x_4922_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4907_);
v___x_4923_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v___x_4922_, v_a_4921_);
lean_dec_ref(v___x_4922_);
return v___x_4923_;
}
else
{
lean_object* v_a_4924_; lean_object* v___x_4926_; uint8_t v_isShared_4927_; uint8_t v_isSharedCheck_4931_; 
v_a_4924_ = lean_ctor_get(v___x_4920_, 0);
v_isSharedCheck_4931_ = !lean_is_exclusive(v___x_4920_);
if (v_isSharedCheck_4931_ == 0)
{
v___x_4926_ = v___x_4920_;
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
else
{
lean_inc(v_a_4924_);
lean_dec(v___x_4920_);
v___x_4926_ = lean_box(0);
v_isShared_4927_ = v_isSharedCheck_4931_;
goto v_resetjp_4925_;
}
v_resetjp_4925_:
{
lean_object* v___x_4929_; 
if (v_isShared_4927_ == 0)
{
v___x_4929_ = v___x_4926_;
goto v_reusejp_4928_;
}
else
{
lean_object* v_reuseFailAlloc_4930_; 
v_reuseFailAlloc_4930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4930_, 0, v_a_4924_);
v___x_4929_ = v_reuseFailAlloc_4930_;
goto v_reusejp_4928_;
}
v_reusejp_4928_:
{
return v___x_4929_;
}
}
}
}
else
{
lean_object* v_a_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4939_; 
v_a_4932_ = lean_ctor_get(v___x_4918_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4934_ = v___x_4918_;
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_a_4932_);
lean_dec(v___x_4918_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4937_; 
if (v_isShared_4935_ == 0)
{
lean_ctor_set_tag(v___x_4934_, 1);
v___x_4937_ = v___x_4934_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4955_; 
v_a_4940_ = lean_ctor_get(v___x_4918_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4942_ = v___x_4918_;
v_isShared_4943_ = v_isSharedCheck_4955_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_a_4940_);
lean_dec(v___x_4918_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4955_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4953_; 
v___x_4944_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4945_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4907_);
v___x_4946_ = lean_string_append(v___x_4944_, v___x_4945_);
lean_dec_ref(v___x_4945_);
v___x_4947_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4948_ = lean_string_append(v___x_4946_, v___x_4947_);
v___x_4949_ = lean_io_error_to_string(v_a_4940_);
v___x_4950_ = lean_string_append(v___x_4948_, v___x_4949_);
lean_dec_ref(v___x_4949_);
v___x_4951_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4951_, 0, v___x_4950_);
if (v_isShared_4943_ == 0)
{
lean_ctor_set(v___x_4942_, 0, v___x_4951_);
v___x_4953_ = v___x_4942_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4954_; 
v_reuseFailAlloc_4954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4954_, 0, v___x_4951_);
v___x_4953_ = v_reuseFailAlloc_4954_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
return v___x_4953_;
}
}
}
}
v___jp_4957_:
{
uint8_t v_construct_4959_; uint64_t v___x_4960_; 
v_construct_4959_ = lean_ctor_get_uint8(v_b_4907_, sizeof(void*)*4);
v___x_4960_ = lean_uint64_lor(v___x_4956_, v___y_4958_);
if (v_construct_4959_ == 0)
{
uint64_t v___x_4961_; 
v___x_4961_ = 0ULL;
v___y_4912_ = v___x_4960_;
v___y_4913_ = v___x_4961_;
goto v___jp_4911_;
}
else
{
uint64_t v___x_4962_; 
v___x_4962_ = 4ULL;
v___y_4912_ = v___x_4960_;
v___y_4913_ = v___x_4962_;
goto v___jp_4911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0___boxed(lean_object* v_b_4965_, lean_object* v_args_4966_, lean_object* v_await_4967_, lean_object* v_a_4968_){
_start:
{
uint8_t v_await_boxed_4969_; lean_object* v_res_4970_; 
v_await_boxed_4969_ = lean_unbox(v_await_4967_);
v_res_4970_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v_b_4965_, v_args_4966_, v_await_boxed_4969_);
lean_dec_ref(v_b_4965_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new(lean_object* v_underlyingSink_4978_, lean_object* v_strategy_4979_){
_start:
{
lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; uint8_t v___x_4988_; lean_object* v___x_4989_; 
v___x_4981_ = lean_unsigned_to_nat(2u);
v___x_4982_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_new___closed__1));
v___x_4983_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_4979_);
v___x_4984_ = lean_mk_empty_array_with_capacity(v___x_4981_);
v___x_4985_ = lean_array_push(v___x_4984_, v_underlyingSink_4978_);
v___x_4986_ = lean_array_push(v___x_4985_, v___x_4983_);
v___x_4987_ = l_Lasm_JS_Web_Support_args(v___x_4986_);
v___x_4988_ = 0;
v___x_4989_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v___x_4982_, v___x_4987_, v___x_4988_);
return v___x_4989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new___boxed(lean_object* v_underlyingSink_4990_, lean_object* v_strategy_4991_, lean_object* v_a_4992_){
_start:
{
lean_object* v_res_4993_; 
v_res_4993_ = l_Lasm_JS_Web_WritableStream_new(v_underlyingSink_4990_, v_strategy_4991_);
return v_res_4993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked(lean_object* v_self_4994_){
_start:
{
lean_object* v___x_4996_; lean_object* v___x_4997_; 
v___x_4996_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_4997_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4994_, v___x_4996_);
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked___boxed(lean_object* v_self_4998_, lean_object* v_a_4999_){
_start:
{
lean_object* v_res_5000_; 
v_res_5000_ = l_Lasm_JS_Web_WritableStream_locked(v_self_4998_);
return v_res_5000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort(lean_object* v_self_5001_, lean_object* v_reason_5002_){
_start:
{
lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; 
v___x_5004_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_5005_ = lean_unsigned_to_nat(1u);
v___x_5006_ = lean_mk_empty_array_with_capacity(v___x_5005_);
v___x_5007_ = lean_array_push(v___x_5006_, v_reason_5002_);
v___x_5008_ = l_Lasm_JS_Web_Support_args(v___x_5007_);
v___x_5009_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5001_, v___x_5004_, v___x_5008_);
return v___x_5009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort___boxed(lean_object* v_self_5010_, lean_object* v_reason_5011_, lean_object* v_a_5012_){
_start:
{
lean_object* v_res_5013_; 
v_res_5013_ = l_Lasm_JS_Web_WritableStream_abort(v_self_5010_, v_reason_5011_);
return v_res_5013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close(lean_object* v_self_5014_){
_start:
{
lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; 
v___x_5016_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_5017_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5018_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5014_, v___x_5016_, v___x_5017_);
return v___x_5018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close___boxed(lean_object* v_self_5019_, lean_object* v_a_5020_){
_start:
{
lean_object* v_res_5021_; 
v_res_5021_ = l_Lasm_JS_Web_WritableStream_close(v_self_5019_);
return v_res_5021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter(lean_object* v_self_5023_){
_start:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; 
v___x_5025_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_getWriter___closed__0));
v___x_5026_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5027_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5023_, v___x_5025_, v___x_5026_);
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5035_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5035_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5035_ == 0)
{
v___x_5030_ = v___x_5027_;
v_isShared_5031_ = v_isSharedCheck_5035_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v___x_5027_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5035_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v___x_5033_; 
if (v_isShared_5031_ == 0)
{
v___x_5033_ = v___x_5030_;
goto v_reusejp_5032_;
}
else
{
lean_object* v_reuseFailAlloc_5034_; 
v_reuseFailAlloc_5034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5034_, 0, v_a_5028_);
v___x_5033_ = v_reuseFailAlloc_5034_;
goto v_reusejp_5032_;
}
v_reusejp_5032_:
{
return v___x_5033_;
}
}
}
else
{
lean_object* v_a_5036_; lean_object* v___x_5038_; uint8_t v_isShared_5039_; uint8_t v_isSharedCheck_5043_; 
v_a_5036_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5043_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5043_ == 0)
{
v___x_5038_ = v___x_5027_;
v_isShared_5039_ = v_isSharedCheck_5043_;
goto v_resetjp_5037_;
}
else
{
lean_inc(v_a_5036_);
lean_dec(v___x_5027_);
v___x_5038_ = lean_box(0);
v_isShared_5039_ = v_isSharedCheck_5043_;
goto v_resetjp_5037_;
}
v_resetjp_5037_:
{
lean_object* v___x_5041_; 
if (v_isShared_5039_ == 0)
{
v___x_5041_ = v___x_5038_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v_a_5036_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter___boxed(lean_object* v_self_5044_, lean_object* v_a_5045_){
_start:
{
lean_object* v_res_5046_; 
v_res_5046_ = l_Lasm_JS_Web_WritableStream_getWriter(v_self_5044_);
return v_res_5046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f(lean_object* v_v_5053_){
_start:
{
lean_object* v___f_5055_; lean_object* v___x_5056_; 
v___f_5055_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___closed__2));
lean_inc(v_v_5053_);
v___x_5056_ = l_Lasm_JS_Web_Support_isInstance(v___f_5055_, v_v_5053_);
if (lean_obj_tag(v___x_5056_) == 0)
{
lean_object* v_a_5057_; lean_object* v___x_5059_; uint8_t v_isShared_5060_; uint8_t v_isSharedCheck_5070_; 
v_a_5057_ = lean_ctor_get(v___x_5056_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5070_ == 0)
{
v___x_5059_ = v___x_5056_;
v_isShared_5060_ = v_isSharedCheck_5070_;
goto v_resetjp_5058_;
}
else
{
lean_inc(v_a_5057_);
lean_dec(v___x_5056_);
v___x_5059_ = lean_box(0);
v_isShared_5060_ = v_isSharedCheck_5070_;
goto v_resetjp_5058_;
}
v_resetjp_5058_:
{
uint8_t v___x_5061_; 
v___x_5061_ = lean_unbox(v_a_5057_);
lean_dec(v_a_5057_);
if (v___x_5061_ == 0)
{
lean_object* v___x_5062_; lean_object* v___x_5064_; 
lean_dec(v_v_5053_);
v___x_5062_ = lean_box(0);
if (v_isShared_5060_ == 0)
{
lean_ctor_set(v___x_5059_, 0, v___x_5062_);
v___x_5064_ = v___x_5059_;
goto v_reusejp_5063_;
}
else
{
lean_object* v_reuseFailAlloc_5065_; 
v_reuseFailAlloc_5065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5065_, 0, v___x_5062_);
v___x_5064_ = v_reuseFailAlloc_5065_;
goto v_reusejp_5063_;
}
v_reusejp_5063_:
{
return v___x_5064_;
}
}
else
{
lean_object* v___x_5066_; lean_object* v___x_5068_; 
v___x_5066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5066_, 0, v_v_5053_);
if (v_isShared_5060_ == 0)
{
lean_ctor_set(v___x_5059_, 0, v___x_5066_);
v___x_5068_ = v___x_5059_;
goto v_reusejp_5067_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v___x_5066_);
v___x_5068_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5067_;
}
v_reusejp_5067_:
{
return v___x_5068_;
}
}
}
}
else
{
lean_object* v_a_5071_; lean_object* v___x_5073_; uint8_t v_isShared_5074_; uint8_t v_isSharedCheck_5078_; 
lean_dec(v_v_5053_);
v_a_5071_ = lean_ctor_get(v___x_5056_, 0);
v_isSharedCheck_5078_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5078_ == 0)
{
v___x_5073_ = v___x_5056_;
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
else
{
lean_inc(v_a_5071_);
lean_dec(v___x_5056_);
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
v_reuseFailAlloc_5077_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f___boxed(lean_object* v_v_5079_, lean_object* v_a_5080_){
_start:
{
lean_object* v_res_5081_; 
v_res_5081_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_cast_x3f(v_v_5079_);
return v_res_5081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(lean_object* v_context_5082_, lean_object* v_d_5083_){
_start:
{
lean_object* v___y_5086_; lean_object* v___y_5087_; 
if (lean_obj_tag(v_d_5083_) == 9)
{
lean_object* v_value_5091_; lean_object* v___x_5092_; 
v_value_5091_ = lean_ctor_get(v_d_5083_, 0);
lean_inc(v_value_5091_);
lean_dec_ref_known(v_d_5083_, 2);
v___x_5092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5092_, 0, v_value_5091_);
return v___x_5092_;
}
else
{
lean_object* v___x_5093_; lean_object* v_received_5095_; 
v___x_5093_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5083_) == 9)
{
lean_object* v_value_5109_; lean_object* v_description_5110_; uint8_t v___x_5111_; 
v_value_5109_ = lean_ctor_get(v_d_5083_, 0);
v_description_5110_ = lean_ctor_get(v_d_5083_, 1);
v___x_5111_ = lean_string_dec_eq(v_description_5110_, v___x_5093_);
if (v___x_5111_ == 0)
{
goto v___jp_5107_;
}
else
{
uint32_t v___x_5112_; uint64_t v___x_5113_; lean_object* v___x_5114_; uint32_t v___x_5115_; lean_object* v___x_5116_; 
lean_inc_n(v_value_5109_, 2);
lean_dec_ref_known(v_d_5083_, 2);
v___x_5112_ = 206;
v___x_5113_ = 0ULL;
v___x_5114_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5114_, 0, v_value_5109_);
lean_ctor_set(v___x_5114_, 1, v___x_5093_);
v___x_5115_ = lasm_js_value_handle(v_value_5109_);
lean_dec(v_value_5109_);
v___x_5116_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5112_, v___x_5113_, v___x_5114_, v___x_5115_);
lean_dec_ref_known(v___x_5114_, 2);
if (lean_obj_tag(v___x_5116_) == 0)
{
lean_object* v_a_5117_; uint8_t v___x_5118_; 
v_a_5117_ = lean_ctor_get(v___x_5116_, 0);
lean_inc(v_a_5117_);
lean_dec_ref_known(v___x_5116_, 1);
v___x_5118_ = lean_string_validate_utf8(v_a_5117_);
if (v___x_5118_ == 0)
{
lean_object* v___x_5119_; lean_object* v___x_5120_; 
lean_dec(v_a_5117_);
v___x_5119_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5120_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5119_);
v_received_5095_ = v___x_5120_;
goto v___jp_5094_;
}
else
{
lean_object* v___x_5121_; 
v___x_5121_ = lean_string_from_utf8_unchecked(v_a_5117_);
v_received_5095_ = v___x_5121_;
goto v___jp_5094_;
}
}
else
{
lean_object* v___x_5122_; 
lean_dec_ref_known(v___x_5116_, 1);
v___x_5122_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5095_ = v___x_5122_;
goto v___jp_5094_;
}
}
}
else
{
goto v___jp_5107_;
}
v___jp_5094_:
{
lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; uint8_t v___x_5105_; 
v___x_5096_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5097_ = lean_string_append(v___x_5096_, v_context_5082_);
v___x_5098_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5099_ = lean_string_append(v___x_5097_, v___x_5098_);
v___x_5100_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0));
v___x_5101_ = lean_string_append(v___x_5099_, v___x_5100_);
v___x_5102_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5103_ = lean_string_append(v___x_5101_, v___x_5102_);
v___x_5104_ = lean_string_append(v___x_5103_, v_received_5095_);
lean_dec_ref(v_received_5095_);
v___x_5105_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5105_ == 0)
{
lean_object* v___x_5106_; 
v___x_5106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5086_ = v___x_5104_;
v___y_5087_ = v___x_5106_;
goto v___jp_5085_;
}
else
{
v___y_5086_ = v___x_5104_;
v___y_5087_ = v___x_5093_;
goto v___jp_5085_;
}
}
v___jp_5107_:
{
lean_object* v___x_5108_; 
v___x_5108_ = l_Lasm_JS_Data_describe(v_d_5083_);
v_received_5095_ = v___x_5108_;
goto v___jp_5094_;
}
}
v___jp_5085_:
{
lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; 
v___x_5088_ = lean_string_append(v___y_5086_, v___y_5087_);
v___x_5089_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5089_, 0, v___x_5088_);
v___x_5090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5090_, 0, v___x_5089_);
return v___x_5090_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0___boxed(lean_object* v_context_5123_, lean_object* v_d_5124_, lean_object* v_a_5125_){
_start:
{
lean_object* v_res_5126_; 
v_res_5126_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(v_context_5123_, v_d_5124_);
lean_dec_ref(v_context_5123_);
return v_res_5126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(lean_object* v_b_5127_, lean_object* v_args_5128_, uint8_t v_await_5129_){
_start:
{
uint64_t v___y_5132_; uint64_t v___y_5133_; uint64_t v___x_5176_; uint64_t v___y_5178_; 
v___x_5176_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5129_ == 0)
{
uint64_t v___x_5183_; 
v___x_5183_ = 0ULL;
v___y_5178_ = v___x_5183_;
goto v___jp_5177_;
}
else
{
uint64_t v___x_5184_; 
v___x_5184_ = 2ULL;
v___y_5178_ = v___x_5184_;
goto v___jp_5177_;
}
v___jp_5131_:
{
uint64_t v_flags_5134_; uint32_t v___x_5135_; lean_object* v___x_5136_; uint32_t v___x_5137_; lean_object* v___x_5138_; 
v_flags_5134_ = lean_uint64_lor(v___y_5132_, v___y_5133_);
v___x_5135_ = 214;
v___x_5136_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5127_, v_args_5128_);
v___x_5137_ = 0;
v___x_5138_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5135_, v_flags_5134_, v___x_5136_, v___x_5137_);
lean_dec(v___x_5136_);
if (lean_obj_tag(v___x_5138_) == 0)
{
if (lean_obj_tag(v___x_5138_) == 0)
{
lean_object* v_a_5139_; lean_object* v___x_5140_; 
v_a_5139_ = lean_ctor_get(v___x_5138_, 0);
lean_inc(v_a_5139_);
lean_dec_ref_known(v___x_5138_, 1);
v___x_5140_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5139_);
lean_dec(v_a_5139_);
if (lean_obj_tag(v___x_5140_) == 0)
{
lean_object* v_a_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; 
v_a_5141_ = lean_ctor_get(v___x_5140_, 0);
lean_inc(v_a_5141_);
lean_dec_ref_known(v___x_5140_, 1);
v___x_5142_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5127_);
v___x_5143_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(v___x_5142_, v_a_5141_);
lean_dec_ref(v___x_5142_);
return v___x_5143_;
}
else
{
lean_object* v_a_5144_; lean_object* v___x_5146_; uint8_t v_isShared_5147_; uint8_t v_isSharedCheck_5151_; 
v_a_5144_ = lean_ctor_get(v___x_5140_, 0);
v_isSharedCheck_5151_ = !lean_is_exclusive(v___x_5140_);
if (v_isSharedCheck_5151_ == 0)
{
v___x_5146_ = v___x_5140_;
v_isShared_5147_ = v_isSharedCheck_5151_;
goto v_resetjp_5145_;
}
else
{
lean_inc(v_a_5144_);
lean_dec(v___x_5140_);
v___x_5146_ = lean_box(0);
v_isShared_5147_ = v_isSharedCheck_5151_;
goto v_resetjp_5145_;
}
v_resetjp_5145_:
{
lean_object* v___x_5149_; 
if (v_isShared_5147_ == 0)
{
v___x_5149_ = v___x_5146_;
goto v_reusejp_5148_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v_a_5144_);
v___x_5149_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5148_;
}
v_reusejp_5148_:
{
return v___x_5149_;
}
}
}
}
else
{
lean_object* v_a_5152_; lean_object* v___x_5154_; uint8_t v_isShared_5155_; uint8_t v_isSharedCheck_5159_; 
v_a_5152_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5159_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5159_ == 0)
{
v___x_5154_ = v___x_5138_;
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
else
{
lean_inc(v_a_5152_);
lean_dec(v___x_5138_);
v___x_5154_ = lean_box(0);
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
v_resetjp_5153_:
{
lean_object* v___x_5157_; 
if (v_isShared_5155_ == 0)
{
lean_ctor_set_tag(v___x_5154_, 1);
v___x_5157_ = v___x_5154_;
goto v_reusejp_5156_;
}
else
{
lean_object* v_reuseFailAlloc_5158_; 
v_reuseFailAlloc_5158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5158_, 0, v_a_5152_);
v___x_5157_ = v_reuseFailAlloc_5158_;
goto v_reusejp_5156_;
}
v_reusejp_5156_:
{
return v___x_5157_;
}
}
}
}
else
{
lean_object* v_a_5160_; lean_object* v___x_5162_; uint8_t v_isShared_5163_; uint8_t v_isSharedCheck_5175_; 
v_a_5160_ = lean_ctor_get(v___x_5138_, 0);
v_isSharedCheck_5175_ = !lean_is_exclusive(v___x_5138_);
if (v_isSharedCheck_5175_ == 0)
{
v___x_5162_ = v___x_5138_;
v_isShared_5163_ = v_isSharedCheck_5175_;
goto v_resetjp_5161_;
}
else
{
lean_inc(v_a_5160_);
lean_dec(v___x_5138_);
v___x_5162_ = lean_box(0);
v_isShared_5163_ = v_isSharedCheck_5175_;
goto v_resetjp_5161_;
}
v_resetjp_5161_:
{
lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5173_; 
v___x_5164_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5165_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5127_);
v___x_5166_ = lean_string_append(v___x_5164_, v___x_5165_);
lean_dec_ref(v___x_5165_);
v___x_5167_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5168_ = lean_string_append(v___x_5166_, v___x_5167_);
v___x_5169_ = lean_io_error_to_string(v_a_5160_);
v___x_5170_ = lean_string_append(v___x_5168_, v___x_5169_);
lean_dec_ref(v___x_5169_);
v___x_5171_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5171_, 0, v___x_5170_);
if (v_isShared_5163_ == 0)
{
lean_ctor_set(v___x_5162_, 0, v___x_5171_);
v___x_5173_ = v___x_5162_;
goto v_reusejp_5172_;
}
else
{
lean_object* v_reuseFailAlloc_5174_; 
v_reuseFailAlloc_5174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5174_, 0, v___x_5171_);
v___x_5173_ = v_reuseFailAlloc_5174_;
goto v_reusejp_5172_;
}
v_reusejp_5172_:
{
return v___x_5173_;
}
}
}
}
v___jp_5177_:
{
uint8_t v_construct_5179_; uint64_t v___x_5180_; 
v_construct_5179_ = lean_ctor_get_uint8(v_b_5127_, sizeof(void*)*4);
v___x_5180_ = lean_uint64_lor(v___x_5176_, v___y_5178_);
if (v_construct_5179_ == 0)
{
uint64_t v___x_5181_; 
v___x_5181_ = 0ULL;
v___y_5132_ = v___x_5180_;
v___y_5133_ = v___x_5181_;
goto v___jp_5131_;
}
else
{
uint64_t v___x_5182_; 
v___x_5182_ = 4ULL;
v___y_5132_ = v___x_5180_;
v___y_5133_ = v___x_5182_;
goto v___jp_5131_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0___boxed(lean_object* v_b_5185_, lean_object* v_args_5186_, lean_object* v_await_5187_, lean_object* v_a_5188_){
_start:
{
uint8_t v_await_boxed_5189_; lean_object* v_res_5190_; 
v_await_boxed_5189_ = lean_unbox(v_await_5187_);
v_res_5190_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v_b_5185_, v_args_5186_, v_await_boxed_5189_);
lean_dec_ref(v_b_5185_);
return v_res_5190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new(lean_object* v_stream_5198_){
_start:
{
lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; uint8_t v___x_5207_; lean_object* v___x_5208_; 
v___x_5200_ = lean_unsigned_to_nat(1u);
v___x_5201_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__1));
v___x_5202_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5203_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5203_, 0, v_stream_5198_);
lean_ctor_set(v___x_5203_, 1, v___x_5202_);
v___x_5204_ = lean_mk_empty_array_with_capacity(v___x_5200_);
v___x_5205_ = lean_array_push(v___x_5204_, v___x_5203_);
v___x_5206_ = l_Lasm_JS_Web_Support_args(v___x_5205_);
v___x_5207_ = 0;
v___x_5208_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v___x_5201_, v___x_5206_, v___x_5207_);
return v___x_5208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___boxed(lean_object* v_stream_5209_, lean_object* v_a_5210_){
_start:
{
lean_object* v_res_5211_; 
v_res_5211_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_new(v_stream_5209_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(lean_object* v_self_5212_){
_start:
{
lean_object* v___f_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; uint8_t v___x_5217_; lean_object* v_val_5219_; lean_object* v___x_5222_; 
v___f_5214_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_5215_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_5216_ = lean_unsigned_to_nat(0u);
v___x_5217_ = 0;
v___x_5222_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5212_, v___x_5215_);
if (lean_obj_tag(v___x_5222_) == 0)
{
lean_object* v_a_5223_; lean_object* v___x_5225_; uint8_t v_isShared_5226_; uint8_t v_isSharedCheck_5230_; 
v_a_5223_ = lean_ctor_get(v___x_5222_, 0);
v_isSharedCheck_5230_ = !lean_is_exclusive(v___x_5222_);
if (v_isSharedCheck_5230_ == 0)
{
v___x_5225_ = v___x_5222_;
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
else
{
lean_inc(v_a_5223_);
lean_dec(v___x_5222_);
v___x_5225_ = lean_box(0);
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
v_resetjp_5224_:
{
lean_object* v___x_5228_; 
if (v_isShared_5226_ == 0)
{
lean_ctor_set_tag(v___x_5225_, 1);
v___x_5228_ = v___x_5225_;
goto v_reusejp_5227_;
}
else
{
lean_object* v_reuseFailAlloc_5229_; 
v_reuseFailAlloc_5229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5229_, 0, v_a_5223_);
v___x_5228_ = v_reuseFailAlloc_5229_;
goto v_reusejp_5227_;
}
v_reusejp_5227_:
{
v_val_5219_ = v___x_5228_;
goto v___jp_5218_;
}
}
}
else
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5238_; 
v_a_5231_ = lean_ctor_get(v___x_5222_, 0);
v_isSharedCheck_5238_ = !lean_is_exclusive(v___x_5222_);
if (v_isSharedCheck_5238_ == 0)
{
v___x_5233_ = v___x_5222_;
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v___x_5222_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
lean_ctor_set_tag(v___x_5233_, 0);
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_a_5231_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
v_val_5219_ = v___x_5236_;
goto v___jp_5218_;
}
}
}
v___jp_5218_:
{
lean_object* v___x_5220_; lean_object* v___x_5221_; 
v___x_5220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5220_, 0, v_val_5219_);
v___x_5221_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5216_, v___x_5217_, v___x_5220_, v___f_5214_);
return v___x_5221_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed___boxed(lean_object* v_self_5239_, lean_object* v_a_5240_){
_start:
{
lean_object* v_res_5241_; 
v_res_5241_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(v_self_5239_);
return v_res_5241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(lean_object* v_self_5242_){
_start:
{
lean_object* v___x_5244_; lean_object* v___x_5245_; 
v___x_5244_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_5245_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_5242_, v___x_5244_);
return v___x_5245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize___boxed(lean_object* v_self_5246_, lean_object* v_a_5247_){
_start:
{
lean_object* v_res_5248_; 
v_res_5248_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(v_self_5246_);
return v_res_5248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(lean_object* v_self_5250_){
_start:
{
lean_object* v___f_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; uint8_t v___x_5255_; lean_object* v_val_5257_; lean_object* v___x_5260_; 
v___f_5252_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_5253_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___closed__0));
v___x_5254_ = lean_unsigned_to_nat(0u);
v___x_5255_ = 0;
v___x_5260_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5250_, v___x_5253_);
if (lean_obj_tag(v___x_5260_) == 0)
{
lean_object* v_a_5261_; lean_object* v___x_5263_; uint8_t v_isShared_5264_; uint8_t v_isSharedCheck_5268_; 
v_a_5261_ = lean_ctor_get(v___x_5260_, 0);
v_isSharedCheck_5268_ = !lean_is_exclusive(v___x_5260_);
if (v_isSharedCheck_5268_ == 0)
{
v___x_5263_ = v___x_5260_;
v_isShared_5264_ = v_isSharedCheck_5268_;
goto v_resetjp_5262_;
}
else
{
lean_inc(v_a_5261_);
lean_dec(v___x_5260_);
v___x_5263_ = lean_box(0);
v_isShared_5264_ = v_isSharedCheck_5268_;
goto v_resetjp_5262_;
}
v_resetjp_5262_:
{
lean_object* v___x_5266_; 
if (v_isShared_5264_ == 0)
{
lean_ctor_set_tag(v___x_5263_, 1);
v___x_5266_ = v___x_5263_;
goto v_reusejp_5265_;
}
else
{
lean_object* v_reuseFailAlloc_5267_; 
v_reuseFailAlloc_5267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5267_, 0, v_a_5261_);
v___x_5266_ = v_reuseFailAlloc_5267_;
goto v_reusejp_5265_;
}
v_reusejp_5265_:
{
v_val_5257_ = v___x_5266_;
goto v___jp_5256_;
}
}
}
else
{
lean_object* v_a_5269_; lean_object* v___x_5271_; uint8_t v_isShared_5272_; uint8_t v_isSharedCheck_5276_; 
v_a_5269_ = lean_ctor_get(v___x_5260_, 0);
v_isSharedCheck_5276_ = !lean_is_exclusive(v___x_5260_);
if (v_isSharedCheck_5276_ == 0)
{
v___x_5271_ = v___x_5260_;
v_isShared_5272_ = v_isSharedCheck_5276_;
goto v_resetjp_5270_;
}
else
{
lean_inc(v_a_5269_);
lean_dec(v___x_5260_);
v___x_5271_ = lean_box(0);
v_isShared_5272_ = v_isSharedCheck_5276_;
goto v_resetjp_5270_;
}
v_resetjp_5270_:
{
lean_object* v___x_5274_; 
if (v_isShared_5272_ == 0)
{
lean_ctor_set_tag(v___x_5271_, 0);
v___x_5274_ = v___x_5271_;
goto v_reusejp_5273_;
}
else
{
lean_object* v_reuseFailAlloc_5275_; 
v_reuseFailAlloc_5275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5275_, 0, v_a_5269_);
v___x_5274_ = v_reuseFailAlloc_5275_;
goto v_reusejp_5273_;
}
v_reusejp_5273_:
{
v_val_5257_ = v___x_5274_;
goto v___jp_5256_;
}
}
}
v___jp_5256_:
{
lean_object* v___x_5258_; lean_object* v___x_5259_; 
v___x_5258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5258_, 0, v_val_5257_);
v___x_5259_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5254_, v___x_5255_, v___x_5258_, v___f_5252_);
return v___x_5259_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___boxed(lean_object* v_self_5277_, lean_object* v_a_5278_){
_start:
{
lean_object* v_res_5279_; 
v_res_5279_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(v_self_5277_);
return v_res_5279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(lean_object* v_self_5280_, lean_object* v_reason_5281_){
_start:
{
lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; 
v___x_5283_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_5284_ = lean_unsigned_to_nat(1u);
v___x_5285_ = lean_mk_empty_array_with_capacity(v___x_5284_);
v___x_5286_ = lean_array_push(v___x_5285_, v_reason_5281_);
v___x_5287_ = l_Lasm_JS_Web_Support_args(v___x_5286_);
v___x_5288_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5280_, v___x_5283_, v___x_5287_);
return v___x_5288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort___boxed(lean_object* v_self_5289_, lean_object* v_reason_5290_, lean_object* v_a_5291_){
_start:
{
lean_object* v_res_5292_; 
v_res_5292_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(v_self_5289_, v_reason_5290_);
return v_res_5292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close(lean_object* v_self_5293_){
_start:
{
lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; 
v___x_5295_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_5296_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5297_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5293_, v___x_5295_, v___x_5296_);
return v___x_5297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close___boxed(lean_object* v_self_5298_, lean_object* v_a_5299_){
_start:
{
lean_object* v_res_5300_; 
v_res_5300_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_close(v_self_5298_);
return v_res_5300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(lean_object* v_self_5301_){
_start:
{
lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; 
v___x_5303_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_5304_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5305_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5301_, v___x_5303_, v___x_5304_);
return v___x_5305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock___boxed(lean_object* v_self_5306_, lean_object* v_a_5307_){
_start:
{
lean_object* v_res_5308_; 
v_res_5308_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(v_self_5306_);
return v_res_5308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write(lean_object* v_self_5309_, lean_object* v_chunk_5310_){
_start:
{
lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; 
v___x_5312_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0));
v___x_5313_ = lean_unsigned_to_nat(1u);
v___x_5314_ = lean_mk_empty_array_with_capacity(v___x_5313_);
v___x_5315_ = lean_array_push(v___x_5314_, v_chunk_5310_);
v___x_5316_ = l_Lasm_JS_Web_Support_args(v___x_5315_);
v___x_5317_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5309_, v___x_5312_, v___x_5316_);
return v___x_5317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write___boxed(lean_object* v_self_5318_, lean_object* v_chunk_5319_, lean_object* v_a_5320_){
_start:
{
lean_object* v_res_5321_; 
v_res_5321_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_write(v_self_5318_, v_chunk_5319_);
return v_res_5321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f(lean_object* v_v_5328_){
_start:
{
lean_object* v___f_5330_; lean_object* v___x_5331_; 
v___f_5330_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___closed__2));
lean_inc(v_v_5328_);
v___x_5331_ = l_Lasm_JS_Web_Support_isInstance(v___f_5330_, v_v_5328_);
if (lean_obj_tag(v___x_5331_) == 0)
{
lean_object* v_a_5332_; lean_object* v___x_5334_; uint8_t v_isShared_5335_; uint8_t v_isSharedCheck_5345_; 
v_a_5332_ = lean_ctor_get(v___x_5331_, 0);
v_isSharedCheck_5345_ = !lean_is_exclusive(v___x_5331_);
if (v_isSharedCheck_5345_ == 0)
{
v___x_5334_ = v___x_5331_;
v_isShared_5335_ = v_isSharedCheck_5345_;
goto v_resetjp_5333_;
}
else
{
lean_inc(v_a_5332_);
lean_dec(v___x_5331_);
v___x_5334_ = lean_box(0);
v_isShared_5335_ = v_isSharedCheck_5345_;
goto v_resetjp_5333_;
}
v_resetjp_5333_:
{
uint8_t v___x_5336_; 
v___x_5336_ = lean_unbox(v_a_5332_);
lean_dec(v_a_5332_);
if (v___x_5336_ == 0)
{
lean_object* v___x_5337_; lean_object* v___x_5339_; 
lean_dec(v_v_5328_);
v___x_5337_ = lean_box(0);
if (v_isShared_5335_ == 0)
{
lean_ctor_set(v___x_5334_, 0, v___x_5337_);
v___x_5339_ = v___x_5334_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5340_; 
v_reuseFailAlloc_5340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5340_, 0, v___x_5337_);
v___x_5339_ = v_reuseFailAlloc_5340_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
return v___x_5339_;
}
}
else
{
lean_object* v___x_5341_; lean_object* v___x_5343_; 
v___x_5341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5341_, 0, v_v_5328_);
if (v_isShared_5335_ == 0)
{
lean_ctor_set(v___x_5334_, 0, v___x_5341_);
v___x_5343_ = v___x_5334_;
goto v_reusejp_5342_;
}
else
{
lean_object* v_reuseFailAlloc_5344_; 
v_reuseFailAlloc_5344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5344_, 0, v___x_5341_);
v___x_5343_ = v_reuseFailAlloc_5344_;
goto v_reusejp_5342_;
}
v_reusejp_5342_:
{
return v___x_5343_;
}
}
}
}
else
{
lean_object* v_a_5346_; lean_object* v___x_5348_; uint8_t v_isShared_5349_; uint8_t v_isSharedCheck_5353_; 
lean_dec(v_v_5328_);
v_a_5346_ = lean_ctor_get(v___x_5331_, 0);
v_isSharedCheck_5353_ = !lean_is_exclusive(v___x_5331_);
if (v_isSharedCheck_5353_ == 0)
{
v___x_5348_ = v___x_5331_;
v_isShared_5349_ = v_isSharedCheck_5353_;
goto v_resetjp_5347_;
}
else
{
lean_inc(v_a_5346_);
lean_dec(v___x_5331_);
v___x_5348_ = lean_box(0);
v_isShared_5349_ = v_isSharedCheck_5353_;
goto v_resetjp_5347_;
}
v_resetjp_5347_:
{
lean_object* v___x_5351_; 
if (v_isShared_5349_ == 0)
{
v___x_5351_ = v___x_5348_;
goto v_reusejp_5350_;
}
else
{
lean_object* v_reuseFailAlloc_5352_; 
v_reuseFailAlloc_5352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5352_, 0, v_a_5346_);
v___x_5351_ = v_reuseFailAlloc_5352_;
goto v_reusejp_5350_;
}
v_reusejp_5350_:
{
return v___x_5351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f___boxed(lean_object* v_v_5354_, lean_object* v_a_5355_){
_start:
{
lean_object* v_res_5356_; 
v_res_5356_ = l_Lasm_JS_Web_WritableStreamDefaultController_cast_x3f(v_v_5354_);
return v_res_5356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal(lean_object* v_self_5357_){
_start:
{
lean_object* v___x_5359_; lean_object* v___x_5360_; 
v___x_5359_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_5360_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5357_, v___x_5359_);
if (lean_obj_tag(v___x_5360_) == 0)
{
lean_object* v_a_5361_; lean_object* v___x_5363_; uint8_t v_isShared_5364_; uint8_t v_isSharedCheck_5368_; 
v_a_5361_ = lean_ctor_get(v___x_5360_, 0);
v_isSharedCheck_5368_ = !lean_is_exclusive(v___x_5360_);
if (v_isSharedCheck_5368_ == 0)
{
v___x_5363_ = v___x_5360_;
v_isShared_5364_ = v_isSharedCheck_5368_;
goto v_resetjp_5362_;
}
else
{
lean_inc(v_a_5361_);
lean_dec(v___x_5360_);
v___x_5363_ = lean_box(0);
v_isShared_5364_ = v_isSharedCheck_5368_;
goto v_resetjp_5362_;
}
v_resetjp_5362_:
{
lean_object* v___x_5366_; 
if (v_isShared_5364_ == 0)
{
v___x_5366_ = v___x_5363_;
goto v_reusejp_5365_;
}
else
{
lean_object* v_reuseFailAlloc_5367_; 
v_reuseFailAlloc_5367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5367_, 0, v_a_5361_);
v___x_5366_ = v_reuseFailAlloc_5367_;
goto v_reusejp_5365_;
}
v_reusejp_5365_:
{
return v___x_5366_;
}
}
}
else
{
lean_object* v_a_5369_; lean_object* v___x_5371_; uint8_t v_isShared_5372_; uint8_t v_isSharedCheck_5376_; 
v_a_5369_ = lean_ctor_get(v___x_5360_, 0);
v_isSharedCheck_5376_ = !lean_is_exclusive(v___x_5360_);
if (v_isSharedCheck_5376_ == 0)
{
v___x_5371_ = v___x_5360_;
v_isShared_5372_ = v_isSharedCheck_5376_;
goto v_resetjp_5370_;
}
else
{
lean_inc(v_a_5369_);
lean_dec(v___x_5360_);
v___x_5371_ = lean_box(0);
v_isShared_5372_ = v_isSharedCheck_5376_;
goto v_resetjp_5370_;
}
v_resetjp_5370_:
{
lean_object* v___x_5374_; 
if (v_isShared_5372_ == 0)
{
v___x_5374_ = v___x_5371_;
goto v_reusejp_5373_;
}
else
{
lean_object* v_reuseFailAlloc_5375_; 
v_reuseFailAlloc_5375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5375_, 0, v_a_5369_);
v___x_5374_ = v_reuseFailAlloc_5375_;
goto v_reusejp_5373_;
}
v_reusejp_5373_:
{
return v___x_5374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal___boxed(lean_object* v_self_5377_, lean_object* v_a_5378_){
_start:
{
lean_object* v_res_5379_; 
v_res_5379_ = l_Lasm_JS_Web_WritableStreamDefaultController_signal(v_self_5377_);
return v_res_5379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error(lean_object* v_self_5380_, lean_object* v_e_5381_){
_start:
{
lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; 
v___x_5383_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5384_ = lean_unsigned_to_nat(1u);
v___x_5385_ = lean_mk_empty_array_with_capacity(v___x_5384_);
v___x_5386_ = lean_array_push(v___x_5385_, v_e_5381_);
v___x_5387_ = l_Lasm_JS_Web_Support_args(v___x_5386_);
v___x_5388_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5380_, v___x_5383_, v___x_5387_);
return v___x_5388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error___boxed(lean_object* v_self_5389_, lean_object* v_e_5390_, lean_object* v_a_5391_){
_start:
{
lean_object* v_res_5392_; 
v_res_5392_ = l_Lasm_JS_Web_WritableStreamDefaultController_error(v_self_5389_, v_e_5390_);
return v_res_5392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_cast_x3f(lean_object* v_v_5399_){
_start:
{
lean_object* v___f_5401_; lean_object* v___x_5402_; 
v___f_5401_ = ((lean_object*)(l_Lasm_JS_Web_TransformStream_cast_x3f___closed__2));
lean_inc(v_v_5399_);
v___x_5402_ = l_Lasm_JS_Web_Support_isInstance(v___f_5401_, v_v_5399_);
if (lean_obj_tag(v___x_5402_) == 0)
{
lean_object* v_a_5403_; lean_object* v___x_5405_; uint8_t v_isShared_5406_; uint8_t v_isSharedCheck_5416_; 
v_a_5403_ = lean_ctor_get(v___x_5402_, 0);
v_isSharedCheck_5416_ = !lean_is_exclusive(v___x_5402_);
if (v_isSharedCheck_5416_ == 0)
{
v___x_5405_ = v___x_5402_;
v_isShared_5406_ = v_isSharedCheck_5416_;
goto v_resetjp_5404_;
}
else
{
lean_inc(v_a_5403_);
lean_dec(v___x_5402_);
v___x_5405_ = lean_box(0);
v_isShared_5406_ = v_isSharedCheck_5416_;
goto v_resetjp_5404_;
}
v_resetjp_5404_:
{
uint8_t v___x_5407_; 
v___x_5407_ = lean_unbox(v_a_5403_);
lean_dec(v_a_5403_);
if (v___x_5407_ == 0)
{
lean_object* v___x_5408_; lean_object* v___x_5410_; 
lean_dec(v_v_5399_);
v___x_5408_ = lean_box(0);
if (v_isShared_5406_ == 0)
{
lean_ctor_set(v___x_5405_, 0, v___x_5408_);
v___x_5410_ = v___x_5405_;
goto v_reusejp_5409_;
}
else
{
lean_object* v_reuseFailAlloc_5411_; 
v_reuseFailAlloc_5411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5411_, 0, v___x_5408_);
v___x_5410_ = v_reuseFailAlloc_5411_;
goto v_reusejp_5409_;
}
v_reusejp_5409_:
{
return v___x_5410_;
}
}
else
{
lean_object* v___x_5412_; lean_object* v___x_5414_; 
v___x_5412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5412_, 0, v_v_5399_);
if (v_isShared_5406_ == 0)
{
lean_ctor_set(v___x_5405_, 0, v___x_5412_);
v___x_5414_ = v___x_5405_;
goto v_reusejp_5413_;
}
else
{
lean_object* v_reuseFailAlloc_5415_; 
v_reuseFailAlloc_5415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5415_, 0, v___x_5412_);
v___x_5414_ = v_reuseFailAlloc_5415_;
goto v_reusejp_5413_;
}
v_reusejp_5413_:
{
return v___x_5414_;
}
}
}
}
else
{
lean_object* v_a_5417_; lean_object* v___x_5419_; uint8_t v_isShared_5420_; uint8_t v_isSharedCheck_5424_; 
lean_dec(v_v_5399_);
v_a_5417_ = lean_ctor_get(v___x_5402_, 0);
v_isSharedCheck_5424_ = !lean_is_exclusive(v___x_5402_);
if (v_isSharedCheck_5424_ == 0)
{
v___x_5419_ = v___x_5402_;
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
else
{
lean_inc(v_a_5417_);
lean_dec(v___x_5402_);
v___x_5419_ = lean_box(0);
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
v_resetjp_5418_:
{
lean_object* v___x_5422_; 
if (v_isShared_5420_ == 0)
{
v___x_5422_ = v___x_5419_;
goto v_reusejp_5421_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v_a_5417_);
v___x_5422_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5421_;
}
v_reusejp_5421_:
{
return v___x_5422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_cast_x3f___boxed(lean_object* v_v_5425_, lean_object* v_a_5426_){
_start:
{
lean_object* v_res_5427_; 
v_res_5427_ = l_Lasm_JS_Web_TransformStream_cast_x3f(v_v_5425_);
return v_res_5427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(lean_object* v_context_5428_, lean_object* v_d_5429_){
_start:
{
lean_object* v___y_5432_; lean_object* v___y_5433_; 
if (lean_obj_tag(v_d_5429_) == 9)
{
lean_object* v_value_5437_; lean_object* v___x_5438_; 
v_value_5437_ = lean_ctor_get(v_d_5429_, 0);
lean_inc(v_value_5437_);
lean_dec_ref_known(v_d_5429_, 2);
v___x_5438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5438_, 0, v_value_5437_);
return v___x_5438_;
}
else
{
lean_object* v___x_5439_; lean_object* v_received_5441_; 
v___x_5439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5429_) == 9)
{
lean_object* v_value_5455_; lean_object* v_description_5456_; uint8_t v___x_5457_; 
v_value_5455_ = lean_ctor_get(v_d_5429_, 0);
v_description_5456_ = lean_ctor_get(v_d_5429_, 1);
v___x_5457_ = lean_string_dec_eq(v_description_5456_, v___x_5439_);
if (v___x_5457_ == 0)
{
goto v___jp_5453_;
}
else
{
uint32_t v___x_5458_; uint64_t v___x_5459_; lean_object* v___x_5460_; uint32_t v___x_5461_; lean_object* v___x_5462_; 
lean_inc_n(v_value_5455_, 2);
lean_dec_ref_known(v_d_5429_, 2);
v___x_5458_ = 206;
v___x_5459_ = 0ULL;
v___x_5460_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5460_, 0, v_value_5455_);
lean_ctor_set(v___x_5460_, 1, v___x_5439_);
v___x_5461_ = lasm_js_value_handle(v_value_5455_);
lean_dec(v_value_5455_);
v___x_5462_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5458_, v___x_5459_, v___x_5460_, v___x_5461_);
lean_dec_ref_known(v___x_5460_, 2);
if (lean_obj_tag(v___x_5462_) == 0)
{
lean_object* v_a_5463_; uint8_t v___x_5464_; 
v_a_5463_ = lean_ctor_get(v___x_5462_, 0);
lean_inc(v_a_5463_);
lean_dec_ref_known(v___x_5462_, 1);
v___x_5464_ = lean_string_validate_utf8(v_a_5463_);
if (v___x_5464_ == 0)
{
lean_object* v___x_5465_; lean_object* v___x_5466_; 
lean_dec(v_a_5463_);
v___x_5465_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5466_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5465_);
v_received_5441_ = v___x_5466_;
goto v___jp_5440_;
}
else
{
lean_object* v___x_5467_; 
v___x_5467_ = lean_string_from_utf8_unchecked(v_a_5463_);
v_received_5441_ = v___x_5467_;
goto v___jp_5440_;
}
}
else
{
lean_object* v___x_5468_; 
lean_dec_ref_known(v___x_5462_, 1);
v___x_5468_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5441_ = v___x_5468_;
goto v___jp_5440_;
}
}
}
else
{
goto v___jp_5453_;
}
v___jp_5440_:
{
lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; uint8_t v___x_5451_; 
v___x_5442_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5443_ = lean_string_append(v___x_5442_, v_context_5428_);
v___x_5444_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5445_ = lean_string_append(v___x_5443_, v___x_5444_);
v___x_5446_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTransformStream___closed__0));
v___x_5447_ = lean_string_append(v___x_5445_, v___x_5446_);
v___x_5448_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5449_ = lean_string_append(v___x_5447_, v___x_5448_);
v___x_5450_ = lean_string_append(v___x_5449_, v_received_5441_);
lean_dec_ref(v_received_5441_);
v___x_5451_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5451_ == 0)
{
lean_object* v___x_5452_; 
v___x_5452_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5432_ = v___x_5450_;
v___y_5433_ = v___x_5452_;
goto v___jp_5431_;
}
else
{
v___y_5432_ = v___x_5450_;
v___y_5433_ = v___x_5439_;
goto v___jp_5431_;
}
}
v___jp_5453_:
{
lean_object* v___x_5454_; 
v___x_5454_ = l_Lasm_JS_Data_describe(v_d_5429_);
v_received_5441_ = v___x_5454_;
goto v___jp_5440_;
}
}
v___jp_5431_:
{
lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; 
v___x_5434_ = lean_string_append(v___y_5432_, v___y_5433_);
v___x_5435_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5435_, 0, v___x_5434_);
v___x_5436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5436_, 0, v___x_5435_);
return v___x_5436_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0___boxed(lean_object* v_context_5469_, lean_object* v_d_5470_, lean_object* v_a_5471_){
_start:
{
lean_object* v_res_5472_; 
v_res_5472_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v_context_5469_, v_d_5470_);
lean_dec_ref(v_context_5469_);
return v_res_5472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(lean_object* v_b_5473_, lean_object* v_args_5474_, uint8_t v_await_5475_){
_start:
{
uint64_t v___y_5478_; uint64_t v___y_5479_; uint64_t v___x_5522_; uint64_t v___y_5524_; 
v___x_5522_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5475_ == 0)
{
uint64_t v___x_5529_; 
v___x_5529_ = 0ULL;
v___y_5524_ = v___x_5529_;
goto v___jp_5523_;
}
else
{
uint64_t v___x_5530_; 
v___x_5530_ = 2ULL;
v___y_5524_ = v___x_5530_;
goto v___jp_5523_;
}
v___jp_5477_:
{
uint64_t v_flags_5480_; uint32_t v___x_5481_; lean_object* v___x_5482_; uint32_t v___x_5483_; lean_object* v___x_5484_; 
v_flags_5480_ = lean_uint64_lor(v___y_5478_, v___y_5479_);
v___x_5481_ = 214;
v___x_5482_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5473_, v_args_5474_);
v___x_5483_ = 0;
v___x_5484_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5481_, v_flags_5480_, v___x_5482_, v___x_5483_);
lean_dec(v___x_5482_);
if (lean_obj_tag(v___x_5484_) == 0)
{
if (lean_obj_tag(v___x_5484_) == 0)
{
lean_object* v_a_5485_; lean_object* v___x_5486_; 
v_a_5485_ = lean_ctor_get(v___x_5484_, 0);
lean_inc(v_a_5485_);
lean_dec_ref_known(v___x_5484_, 1);
v___x_5486_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5485_);
lean_dec(v_a_5485_);
if (lean_obj_tag(v___x_5486_) == 0)
{
lean_object* v_a_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; 
v_a_5487_ = lean_ctor_get(v___x_5486_, 0);
lean_inc(v_a_5487_);
lean_dec_ref_known(v___x_5486_, 1);
v___x_5488_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5473_);
v___x_5489_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v___x_5488_, v_a_5487_);
lean_dec_ref(v___x_5488_);
return v___x_5489_;
}
else
{
lean_object* v_a_5490_; lean_object* v___x_5492_; uint8_t v_isShared_5493_; uint8_t v_isSharedCheck_5497_; 
v_a_5490_ = lean_ctor_get(v___x_5486_, 0);
v_isSharedCheck_5497_ = !lean_is_exclusive(v___x_5486_);
if (v_isSharedCheck_5497_ == 0)
{
v___x_5492_ = v___x_5486_;
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
else
{
lean_inc(v_a_5490_);
lean_dec(v___x_5486_);
v___x_5492_ = lean_box(0);
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
v_resetjp_5491_:
{
lean_object* v___x_5495_; 
if (v_isShared_5493_ == 0)
{
v___x_5495_ = v___x_5492_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5496_; 
v_reuseFailAlloc_5496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5496_, 0, v_a_5490_);
v___x_5495_ = v_reuseFailAlloc_5496_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
return v___x_5495_;
}
}
}
}
else
{
lean_object* v_a_5498_; lean_object* v___x_5500_; uint8_t v_isShared_5501_; uint8_t v_isSharedCheck_5505_; 
v_a_5498_ = lean_ctor_get(v___x_5484_, 0);
v_isSharedCheck_5505_ = !lean_is_exclusive(v___x_5484_);
if (v_isSharedCheck_5505_ == 0)
{
v___x_5500_ = v___x_5484_;
v_isShared_5501_ = v_isSharedCheck_5505_;
goto v_resetjp_5499_;
}
else
{
lean_inc(v_a_5498_);
lean_dec(v___x_5484_);
v___x_5500_ = lean_box(0);
v_isShared_5501_ = v_isSharedCheck_5505_;
goto v_resetjp_5499_;
}
v_resetjp_5499_:
{
lean_object* v___x_5503_; 
if (v_isShared_5501_ == 0)
{
lean_ctor_set_tag(v___x_5500_, 1);
v___x_5503_ = v___x_5500_;
goto v_reusejp_5502_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v_a_5498_);
v___x_5503_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5502_;
}
v_reusejp_5502_:
{
return v___x_5503_;
}
}
}
}
else
{
lean_object* v_a_5506_; lean_object* v___x_5508_; uint8_t v_isShared_5509_; uint8_t v_isSharedCheck_5521_; 
v_a_5506_ = lean_ctor_get(v___x_5484_, 0);
v_isSharedCheck_5521_ = !lean_is_exclusive(v___x_5484_);
if (v_isSharedCheck_5521_ == 0)
{
v___x_5508_ = v___x_5484_;
v_isShared_5509_ = v_isSharedCheck_5521_;
goto v_resetjp_5507_;
}
else
{
lean_inc(v_a_5506_);
lean_dec(v___x_5484_);
v___x_5508_ = lean_box(0);
v_isShared_5509_ = v_isSharedCheck_5521_;
goto v_resetjp_5507_;
}
v_resetjp_5507_:
{
lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5519_; 
v___x_5510_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5511_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5473_);
v___x_5512_ = lean_string_append(v___x_5510_, v___x_5511_);
lean_dec_ref(v___x_5511_);
v___x_5513_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5514_ = lean_string_append(v___x_5512_, v___x_5513_);
v___x_5515_ = lean_io_error_to_string(v_a_5506_);
v___x_5516_ = lean_string_append(v___x_5514_, v___x_5515_);
lean_dec_ref(v___x_5515_);
v___x_5517_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5517_, 0, v___x_5516_);
if (v_isShared_5509_ == 0)
{
lean_ctor_set(v___x_5508_, 0, v___x_5517_);
v___x_5519_ = v___x_5508_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v___x_5517_);
v___x_5519_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5518_;
}
v_reusejp_5518_:
{
return v___x_5519_;
}
}
}
}
v___jp_5523_:
{
uint8_t v_construct_5525_; uint64_t v___x_5526_; 
v_construct_5525_ = lean_ctor_get_uint8(v_b_5473_, sizeof(void*)*4);
v___x_5526_ = lean_uint64_lor(v___x_5522_, v___y_5524_);
if (v_construct_5525_ == 0)
{
uint64_t v___x_5527_; 
v___x_5527_ = 0ULL;
v___y_5478_ = v___x_5526_;
v___y_5479_ = v___x_5527_;
goto v___jp_5477_;
}
else
{
uint64_t v___x_5528_; 
v___x_5528_ = 4ULL;
v___y_5478_ = v___x_5526_;
v___y_5479_ = v___x_5528_;
goto v___jp_5477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0___boxed(lean_object* v_b_5531_, lean_object* v_args_5532_, lean_object* v_await_5533_, lean_object* v_a_5534_){
_start:
{
uint8_t v_await_boxed_5535_; lean_object* v_res_5536_; 
v_await_boxed_5535_ = lean_unbox(v_await_5533_);
v_res_5536_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v_b_5531_, v_args_5532_, v_await_boxed_5535_);
lean_dec_ref(v_b_5531_);
return v_res_5536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new(lean_object* v_transformer_5544_, lean_object* v_writableStrategy_5545_, lean_object* v_readableStrategy_5546_){
_start:
{
lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; uint8_t v___x_5557_; lean_object* v___x_5558_; 
v___x_5548_ = lean_unsigned_to_nat(3u);
v___x_5549_ = ((lean_object*)(l_Lasm_JS_Web_TransformStream_new___closed__1));
v___x_5550_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_writableStrategy_5545_);
v___x_5551_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_readableStrategy_5546_);
v___x_5552_ = lean_mk_empty_array_with_capacity(v___x_5548_);
v___x_5553_ = lean_array_push(v___x_5552_, v_transformer_5544_);
v___x_5554_ = lean_array_push(v___x_5553_, v___x_5550_);
v___x_5555_ = lean_array_push(v___x_5554_, v___x_5551_);
v___x_5556_ = l_Lasm_JS_Web_Support_args(v___x_5555_);
v___x_5557_ = 0;
v___x_5558_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v___x_5549_, v___x_5556_, v___x_5557_);
return v___x_5558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new___boxed(lean_object* v_transformer_5559_, lean_object* v_writableStrategy_5560_, lean_object* v_readableStrategy_5561_, lean_object* v_a_5562_){
_start:
{
lean_object* v_res_5563_; 
v_res_5563_ = l_Lasm_JS_Web_TransformStream_new(v_transformer_5559_, v_writableStrategy_5560_, v_readableStrategy_5561_);
return v_res_5563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable(lean_object* v_self_5564_){
_start:
{
lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5566_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_5567_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5564_, v___x_5566_);
if (lean_obj_tag(v___x_5567_) == 0)
{
lean_object* v_a_5568_; lean_object* v___x_5570_; uint8_t v_isShared_5571_; uint8_t v_isSharedCheck_5575_; 
v_a_5568_ = lean_ctor_get(v___x_5567_, 0);
v_isSharedCheck_5575_ = !lean_is_exclusive(v___x_5567_);
if (v_isSharedCheck_5575_ == 0)
{
v___x_5570_ = v___x_5567_;
v_isShared_5571_ = v_isSharedCheck_5575_;
goto v_resetjp_5569_;
}
else
{
lean_inc(v_a_5568_);
lean_dec(v___x_5567_);
v___x_5570_ = lean_box(0);
v_isShared_5571_ = v_isSharedCheck_5575_;
goto v_resetjp_5569_;
}
v_resetjp_5569_:
{
lean_object* v___x_5573_; 
if (v_isShared_5571_ == 0)
{
v___x_5573_ = v___x_5570_;
goto v_reusejp_5572_;
}
else
{
lean_object* v_reuseFailAlloc_5574_; 
v_reuseFailAlloc_5574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5574_, 0, v_a_5568_);
v___x_5573_ = v_reuseFailAlloc_5574_;
goto v_reusejp_5572_;
}
v_reusejp_5572_:
{
return v___x_5573_;
}
}
}
else
{
lean_object* v_a_5576_; lean_object* v___x_5578_; uint8_t v_isShared_5579_; uint8_t v_isSharedCheck_5583_; 
v_a_5576_ = lean_ctor_get(v___x_5567_, 0);
v_isSharedCheck_5583_ = !lean_is_exclusive(v___x_5567_);
if (v_isSharedCheck_5583_ == 0)
{
v___x_5578_ = v___x_5567_;
v_isShared_5579_ = v_isSharedCheck_5583_;
goto v_resetjp_5577_;
}
else
{
lean_inc(v_a_5576_);
lean_dec(v___x_5567_);
v___x_5578_ = lean_box(0);
v_isShared_5579_ = v_isSharedCheck_5583_;
goto v_resetjp_5577_;
}
v_resetjp_5577_:
{
lean_object* v___x_5581_; 
if (v_isShared_5579_ == 0)
{
v___x_5581_ = v___x_5578_;
goto v_reusejp_5580_;
}
else
{
lean_object* v_reuseFailAlloc_5582_; 
v_reuseFailAlloc_5582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5582_, 0, v_a_5576_);
v___x_5581_ = v_reuseFailAlloc_5582_;
goto v_reusejp_5580_;
}
v_reusejp_5580_:
{
return v___x_5581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable___boxed(lean_object* v_self_5584_, lean_object* v_a_5585_){
_start:
{
lean_object* v_res_5586_; 
v_res_5586_ = l_Lasm_JS_Web_TransformStream_readable(v_self_5584_);
return v_res_5586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable(lean_object* v_self_5587_){
_start:
{
lean_object* v___x_5589_; lean_object* v___x_5590_; 
v___x_5589_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_5590_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5587_, v___x_5589_);
if (lean_obj_tag(v___x_5590_) == 0)
{
lean_object* v_a_5591_; lean_object* v___x_5593_; uint8_t v_isShared_5594_; uint8_t v_isSharedCheck_5598_; 
v_a_5591_ = lean_ctor_get(v___x_5590_, 0);
v_isSharedCheck_5598_ = !lean_is_exclusive(v___x_5590_);
if (v_isSharedCheck_5598_ == 0)
{
v___x_5593_ = v___x_5590_;
v_isShared_5594_ = v_isSharedCheck_5598_;
goto v_resetjp_5592_;
}
else
{
lean_inc(v_a_5591_);
lean_dec(v___x_5590_);
v___x_5593_ = lean_box(0);
v_isShared_5594_ = v_isSharedCheck_5598_;
goto v_resetjp_5592_;
}
v_resetjp_5592_:
{
lean_object* v___x_5596_; 
if (v_isShared_5594_ == 0)
{
v___x_5596_ = v___x_5593_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v_a_5591_);
v___x_5596_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
return v___x_5596_;
}
}
}
else
{
lean_object* v_a_5599_; lean_object* v___x_5601_; uint8_t v_isShared_5602_; uint8_t v_isSharedCheck_5606_; 
v_a_5599_ = lean_ctor_get(v___x_5590_, 0);
v_isSharedCheck_5606_ = !lean_is_exclusive(v___x_5590_);
if (v_isSharedCheck_5606_ == 0)
{
v___x_5601_ = v___x_5590_;
v_isShared_5602_ = v_isSharedCheck_5606_;
goto v_resetjp_5600_;
}
else
{
lean_inc(v_a_5599_);
lean_dec(v___x_5590_);
v___x_5601_ = lean_box(0);
v_isShared_5602_ = v_isSharedCheck_5606_;
goto v_resetjp_5600_;
}
v_resetjp_5600_:
{
lean_object* v___x_5604_; 
if (v_isShared_5602_ == 0)
{
v___x_5604_ = v___x_5601_;
goto v_reusejp_5603_;
}
else
{
lean_object* v_reuseFailAlloc_5605_; 
v_reuseFailAlloc_5605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5605_, 0, v_a_5599_);
v___x_5604_ = v_reuseFailAlloc_5605_;
goto v_reusejp_5603_;
}
v_reusejp_5603_:
{
return v___x_5604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable___boxed(lean_object* v_self_5607_, lean_object* v_a_5608_){
_start:
{
lean_object* v_res_5609_; 
v_res_5609_ = l_Lasm_JS_Web_TransformStream_writable(v_self_5607_);
return v_res_5609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f(lean_object* v_v_5616_){
_start:
{
lean_object* v___f_5618_; lean_object* v___x_5619_; 
v___f_5618_ = ((lean_object*)(l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___closed__2));
lean_inc(v_v_5616_);
v___x_5619_ = l_Lasm_JS_Web_Support_isInstance(v___f_5618_, v_v_5616_);
if (lean_obj_tag(v___x_5619_) == 0)
{
lean_object* v_a_5620_; lean_object* v___x_5622_; uint8_t v_isShared_5623_; uint8_t v_isSharedCheck_5633_; 
v_a_5620_ = lean_ctor_get(v___x_5619_, 0);
v_isSharedCheck_5633_ = !lean_is_exclusive(v___x_5619_);
if (v_isSharedCheck_5633_ == 0)
{
v___x_5622_ = v___x_5619_;
v_isShared_5623_ = v_isSharedCheck_5633_;
goto v_resetjp_5621_;
}
else
{
lean_inc(v_a_5620_);
lean_dec(v___x_5619_);
v___x_5622_ = lean_box(0);
v_isShared_5623_ = v_isSharedCheck_5633_;
goto v_resetjp_5621_;
}
v_resetjp_5621_:
{
uint8_t v___x_5624_; 
v___x_5624_ = lean_unbox(v_a_5620_);
lean_dec(v_a_5620_);
if (v___x_5624_ == 0)
{
lean_object* v___x_5625_; lean_object* v___x_5627_; 
lean_dec(v_v_5616_);
v___x_5625_ = lean_box(0);
if (v_isShared_5623_ == 0)
{
lean_ctor_set(v___x_5622_, 0, v___x_5625_);
v___x_5627_ = v___x_5622_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5628_; 
v_reuseFailAlloc_5628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5628_, 0, v___x_5625_);
v___x_5627_ = v_reuseFailAlloc_5628_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
return v___x_5627_;
}
}
else
{
lean_object* v___x_5629_; lean_object* v___x_5631_; 
v___x_5629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5629_, 0, v_v_5616_);
if (v_isShared_5623_ == 0)
{
lean_ctor_set(v___x_5622_, 0, v___x_5629_);
v___x_5631_ = v___x_5622_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5632_; 
v_reuseFailAlloc_5632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5632_, 0, v___x_5629_);
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
lean_object* v_a_5634_; lean_object* v___x_5636_; uint8_t v_isShared_5637_; uint8_t v_isSharedCheck_5641_; 
lean_dec(v_v_5616_);
v_a_5634_ = lean_ctor_get(v___x_5619_, 0);
v_isSharedCheck_5641_ = !lean_is_exclusive(v___x_5619_);
if (v_isSharedCheck_5641_ == 0)
{
v___x_5636_ = v___x_5619_;
v_isShared_5637_ = v_isSharedCheck_5641_;
goto v_resetjp_5635_;
}
else
{
lean_inc(v_a_5634_);
lean_dec(v___x_5619_);
v___x_5636_ = lean_box(0);
v_isShared_5637_ = v_isSharedCheck_5641_;
goto v_resetjp_5635_;
}
v_resetjp_5635_:
{
lean_object* v___x_5639_; 
if (v_isShared_5637_ == 0)
{
v___x_5639_ = v___x_5636_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5640_; 
v_reuseFailAlloc_5640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5640_, 0, v_a_5634_);
v___x_5639_ = v_reuseFailAlloc_5640_;
goto v_reusejp_5638_;
}
v_reusejp_5638_:
{
return v___x_5639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f___boxed(lean_object* v_v_5642_, lean_object* v_a_5643_){
_start:
{
lean_object* v_res_5644_; 
v_res_5644_ = l_Lasm_JS_Web_TransformStreamDefaultController_cast_x3f(v_v_5642_);
return v_res_5644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(lean_object* v_self_5645_){
_start:
{
lean_object* v___x_5647_; lean_object* v___x_5648_; 
v___x_5647_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_5648_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_5645_, v___x_5647_);
return v___x_5648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize___boxed(lean_object* v_self_5649_, lean_object* v_a_5650_){
_start:
{
lean_object* v_res_5651_; 
v_res_5651_ = l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(v_self_5649_);
return v_res_5651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(lean_object* v_self_5652_, lean_object* v_chunk_5653_){
_start:
{
lean_object* v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; 
v___x_5655_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_5656_ = lean_unsigned_to_nat(1u);
v___x_5657_ = lean_mk_empty_array_with_capacity(v___x_5656_);
v___x_5658_ = lean_array_push(v___x_5657_, v_chunk_5653_);
v___x_5659_ = l_Lasm_JS_Web_Support_args(v___x_5658_);
v___x_5660_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5652_, v___x_5655_, v___x_5659_);
return v___x_5660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue___boxed(lean_object* v_self_5661_, lean_object* v_chunk_5662_, lean_object* v_a_5663_){
_start:
{
lean_object* v_res_5664_; 
v_res_5664_ = l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(v_self_5661_, v_chunk_5662_);
return v_res_5664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error(lean_object* v_self_5665_, lean_object* v_reason_5666_){
_start:
{
lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; 
v___x_5668_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5669_ = lean_unsigned_to_nat(1u);
v___x_5670_ = lean_mk_empty_array_with_capacity(v___x_5669_);
v___x_5671_ = lean_array_push(v___x_5670_, v_reason_5666_);
v___x_5672_ = l_Lasm_JS_Web_Support_args(v___x_5671_);
v___x_5673_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5665_, v___x_5668_, v___x_5672_);
return v___x_5673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error___boxed(lean_object* v_self_5674_, lean_object* v_reason_5675_, lean_object* v_a_5676_){
_start:
{
lean_object* v_res_5677_; 
v_res_5677_ = l_Lasm_JS_Web_TransformStreamDefaultController_error(v_self_5674_, v_reason_5675_);
return v_res_5677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate(lean_object* v_self_5679_){
_start:
{
lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; 
v___x_5681_ = ((lean_object*)(l_Lasm_JS_Web_TransformStreamDefaultController_terminate___closed__0));
v___x_5682_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5683_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5679_, v___x_5681_, v___x_5682_);
return v___x_5683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate___boxed(lean_object* v_self_5684_, lean_object* v_a_5685_){
_start:
{
lean_object* v_res_5686_; 
v_res_5686_ = l_Lasm_JS_Web_TransformStreamDefaultController_terminate(v_self_5684_);
return v_res_5686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f(lean_object* v_v_5693_){
_start:
{
lean_object* v___f_5695_; lean_object* v___x_5696_; 
v___f_5695_ = ((lean_object*)(l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___closed__2));
lean_inc(v_v_5693_);
v___x_5696_ = l_Lasm_JS_Web_Support_isInstance(v___f_5695_, v_v_5693_);
if (lean_obj_tag(v___x_5696_) == 0)
{
lean_object* v_a_5697_; lean_object* v___x_5699_; uint8_t v_isShared_5700_; uint8_t v_isSharedCheck_5710_; 
v_a_5697_ = lean_ctor_get(v___x_5696_, 0);
v_isSharedCheck_5710_ = !lean_is_exclusive(v___x_5696_);
if (v_isSharedCheck_5710_ == 0)
{
v___x_5699_ = v___x_5696_;
v_isShared_5700_ = v_isSharedCheck_5710_;
goto v_resetjp_5698_;
}
else
{
lean_inc(v_a_5697_);
lean_dec(v___x_5696_);
v___x_5699_ = lean_box(0);
v_isShared_5700_ = v_isSharedCheck_5710_;
goto v_resetjp_5698_;
}
v_resetjp_5698_:
{
uint8_t v___x_5701_; 
v___x_5701_ = lean_unbox(v_a_5697_);
lean_dec(v_a_5697_);
if (v___x_5701_ == 0)
{
lean_object* v___x_5702_; lean_object* v___x_5704_; 
lean_dec(v_v_5693_);
v___x_5702_ = lean_box(0);
if (v_isShared_5700_ == 0)
{
lean_ctor_set(v___x_5699_, 0, v___x_5702_);
v___x_5704_ = v___x_5699_;
goto v_reusejp_5703_;
}
else
{
lean_object* v_reuseFailAlloc_5705_; 
v_reuseFailAlloc_5705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5705_, 0, v___x_5702_);
v___x_5704_ = v_reuseFailAlloc_5705_;
goto v_reusejp_5703_;
}
v_reusejp_5703_:
{
return v___x_5704_;
}
}
else
{
lean_object* v___x_5706_; lean_object* v___x_5708_; 
v___x_5706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5706_, 0, v_v_5693_);
if (v_isShared_5700_ == 0)
{
lean_ctor_set(v___x_5699_, 0, v___x_5706_);
v___x_5708_ = v___x_5699_;
goto v_reusejp_5707_;
}
else
{
lean_object* v_reuseFailAlloc_5709_; 
v_reuseFailAlloc_5709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5709_, 0, v___x_5706_);
v___x_5708_ = v_reuseFailAlloc_5709_;
goto v_reusejp_5707_;
}
v_reusejp_5707_:
{
return v___x_5708_;
}
}
}
}
else
{
lean_object* v_a_5711_; lean_object* v___x_5713_; uint8_t v_isShared_5714_; uint8_t v_isSharedCheck_5718_; 
lean_dec(v_v_5693_);
v_a_5711_ = lean_ctor_get(v___x_5696_, 0);
v_isSharedCheck_5718_ = !lean_is_exclusive(v___x_5696_);
if (v_isSharedCheck_5718_ == 0)
{
v___x_5713_ = v___x_5696_;
v_isShared_5714_ = v_isSharedCheck_5718_;
goto v_resetjp_5712_;
}
else
{
lean_inc(v_a_5711_);
lean_dec(v___x_5696_);
v___x_5713_ = lean_box(0);
v_isShared_5714_ = v_isSharedCheck_5718_;
goto v_resetjp_5712_;
}
v_resetjp_5712_:
{
lean_object* v___x_5716_; 
if (v_isShared_5714_ == 0)
{
v___x_5716_ = v___x_5713_;
goto v_reusejp_5715_;
}
else
{
lean_object* v_reuseFailAlloc_5717_; 
v_reuseFailAlloc_5717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5717_, 0, v_a_5711_);
v___x_5716_ = v_reuseFailAlloc_5717_;
goto v_reusejp_5715_;
}
v_reusejp_5715_:
{
return v___x_5716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f___boxed(lean_object* v_v_5719_, lean_object* v_a_5720_){
_start:
{
lean_object* v_res_5721_; 
v_res_5721_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_cast_x3f(v_v_5719_);
return v_res_5721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5722_, lean_object* v_d_5723_){
_start:
{
lean_object* v___y_5726_; lean_object* v___y_5727_; 
if (lean_obj_tag(v_d_5723_) == 9)
{
lean_object* v_value_5731_; lean_object* v___x_5732_; 
v_value_5731_ = lean_ctor_get(v_d_5723_, 0);
lean_inc(v_value_5731_);
lean_dec_ref_known(v_d_5723_, 2);
v___x_5732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5732_, 0, v_value_5731_);
return v___x_5732_;
}
else
{
lean_object* v___x_5733_; lean_object* v_received_5735_; 
v___x_5733_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5723_) == 9)
{
lean_object* v_value_5749_; lean_object* v_description_5750_; uint8_t v___x_5751_; 
v_value_5749_ = lean_ctor_get(v_d_5723_, 0);
v_description_5750_ = lean_ctor_get(v_d_5723_, 1);
v___x_5751_ = lean_string_dec_eq(v_description_5750_, v___x_5733_);
if (v___x_5751_ == 0)
{
goto v___jp_5747_;
}
else
{
uint32_t v___x_5752_; uint64_t v___x_5753_; lean_object* v___x_5754_; uint32_t v___x_5755_; lean_object* v___x_5756_; 
lean_inc_n(v_value_5749_, 2);
lean_dec_ref_known(v_d_5723_, 2);
v___x_5752_ = 206;
v___x_5753_ = 0ULL;
v___x_5754_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5754_, 0, v_value_5749_);
lean_ctor_set(v___x_5754_, 1, v___x_5733_);
v___x_5755_ = lasm_js_value_handle(v_value_5749_);
lean_dec(v_value_5749_);
v___x_5756_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5752_, v___x_5753_, v___x_5754_, v___x_5755_);
lean_dec_ref_known(v___x_5754_, 2);
if (lean_obj_tag(v___x_5756_) == 0)
{
lean_object* v_a_5757_; uint8_t v___x_5758_; 
v_a_5757_ = lean_ctor_get(v___x_5756_, 0);
lean_inc(v_a_5757_);
lean_dec_ref_known(v___x_5756_, 1);
v___x_5758_ = lean_string_validate_utf8(v_a_5757_);
if (v___x_5758_ == 0)
{
lean_object* v___x_5759_; lean_object* v___x_5760_; 
lean_dec(v_a_5757_);
v___x_5759_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5760_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5759_);
v_received_5735_ = v___x_5760_;
goto v___jp_5734_;
}
else
{
lean_object* v___x_5761_; 
v___x_5761_ = lean_string_from_utf8_unchecked(v_a_5757_);
v_received_5735_ = v___x_5761_;
goto v___jp_5734_;
}
}
else
{
lean_object* v___x_5762_; 
lean_dec_ref_known(v___x_5756_, 1);
v___x_5762_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5735_ = v___x_5762_;
goto v___jp_5734_;
}
}
}
else
{
goto v___jp_5747_;
}
v___jp_5734_:
{
lean_object* v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; uint8_t v___x_5745_; 
v___x_5736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5737_ = lean_string_append(v___x_5736_, v_context_5722_);
v___x_5738_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5739_ = lean_string_append(v___x_5737_, v___x_5738_);
v___x_5740_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0));
v___x_5741_ = lean_string_append(v___x_5739_, v___x_5740_);
v___x_5742_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5743_ = lean_string_append(v___x_5741_, v___x_5742_);
v___x_5744_ = lean_string_append(v___x_5743_, v_received_5735_);
lean_dec_ref(v_received_5735_);
v___x_5745_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5745_ == 0)
{
lean_object* v___x_5746_; 
v___x_5746_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5726_ = v___x_5744_;
v___y_5727_ = v___x_5746_;
goto v___jp_5725_;
}
else
{
v___y_5726_ = v___x_5744_;
v___y_5727_ = v___x_5733_;
goto v___jp_5725_;
}
}
v___jp_5747_:
{
lean_object* v___x_5748_; 
v___x_5748_ = l_Lasm_JS_Data_describe(v_d_5723_);
v_received_5735_ = v___x_5748_;
goto v___jp_5734_;
}
}
v___jp_5725_:
{
lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; 
v___x_5728_ = lean_string_append(v___y_5726_, v___y_5727_);
v___x_5729_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5729_, 0, v___x_5728_);
v___x_5730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5730_, 0, v___x_5729_);
return v___x_5730_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5763_, lean_object* v_d_5764_, lean_object* v_a_5765_){
_start:
{
lean_object* v_res_5766_; 
v_res_5766_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v_context_5763_, v_d_5764_);
lean_dec_ref(v_context_5763_);
return v_res_5766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(lean_object* v_b_5767_, lean_object* v_args_5768_, uint8_t v_await_5769_){
_start:
{
uint64_t v___y_5772_; uint64_t v___y_5773_; uint64_t v___x_5816_; uint64_t v___y_5818_; 
v___x_5816_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5769_ == 0)
{
uint64_t v___x_5823_; 
v___x_5823_ = 0ULL;
v___y_5818_ = v___x_5823_;
goto v___jp_5817_;
}
else
{
uint64_t v___x_5824_; 
v___x_5824_ = 2ULL;
v___y_5818_ = v___x_5824_;
goto v___jp_5817_;
}
v___jp_5771_:
{
uint64_t v_flags_5774_; uint32_t v___x_5775_; lean_object* v___x_5776_; uint32_t v___x_5777_; lean_object* v___x_5778_; 
v_flags_5774_ = lean_uint64_lor(v___y_5772_, v___y_5773_);
v___x_5775_ = 214;
v___x_5776_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5767_, v_args_5768_);
v___x_5777_ = 0;
v___x_5778_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5775_, v_flags_5774_, v___x_5776_, v___x_5777_);
lean_dec(v___x_5776_);
if (lean_obj_tag(v___x_5778_) == 0)
{
if (lean_obj_tag(v___x_5778_) == 0)
{
lean_object* v_a_5779_; lean_object* v___x_5780_; 
v_a_5779_ = lean_ctor_get(v___x_5778_, 0);
lean_inc(v_a_5779_);
lean_dec_ref_known(v___x_5778_, 1);
v___x_5780_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5779_);
lean_dec(v_a_5779_);
if (lean_obj_tag(v___x_5780_) == 0)
{
lean_object* v_a_5781_; lean_object* v___x_5782_; lean_object* v___x_5783_; 
v_a_5781_ = lean_ctor_get(v___x_5780_, 0);
lean_inc(v_a_5781_);
lean_dec_ref_known(v___x_5780_, 1);
v___x_5782_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5767_);
v___x_5783_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v___x_5782_, v_a_5781_);
lean_dec_ref(v___x_5782_);
return v___x_5783_;
}
else
{
lean_object* v_a_5784_; lean_object* v___x_5786_; uint8_t v_isShared_5787_; uint8_t v_isSharedCheck_5791_; 
v_a_5784_ = lean_ctor_get(v___x_5780_, 0);
v_isSharedCheck_5791_ = !lean_is_exclusive(v___x_5780_);
if (v_isSharedCheck_5791_ == 0)
{
v___x_5786_ = v___x_5780_;
v_isShared_5787_ = v_isSharedCheck_5791_;
goto v_resetjp_5785_;
}
else
{
lean_inc(v_a_5784_);
lean_dec(v___x_5780_);
v___x_5786_ = lean_box(0);
v_isShared_5787_ = v_isSharedCheck_5791_;
goto v_resetjp_5785_;
}
v_resetjp_5785_:
{
lean_object* v___x_5789_; 
if (v_isShared_5787_ == 0)
{
v___x_5789_ = v___x_5786_;
goto v_reusejp_5788_;
}
else
{
lean_object* v_reuseFailAlloc_5790_; 
v_reuseFailAlloc_5790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5790_, 0, v_a_5784_);
v___x_5789_ = v_reuseFailAlloc_5790_;
goto v_reusejp_5788_;
}
v_reusejp_5788_:
{
return v___x_5789_;
}
}
}
}
else
{
lean_object* v_a_5792_; lean_object* v___x_5794_; uint8_t v_isShared_5795_; uint8_t v_isSharedCheck_5799_; 
v_a_5792_ = lean_ctor_get(v___x_5778_, 0);
v_isSharedCheck_5799_ = !lean_is_exclusive(v___x_5778_);
if (v_isSharedCheck_5799_ == 0)
{
v___x_5794_ = v___x_5778_;
v_isShared_5795_ = v_isSharedCheck_5799_;
goto v_resetjp_5793_;
}
else
{
lean_inc(v_a_5792_);
lean_dec(v___x_5778_);
v___x_5794_ = lean_box(0);
v_isShared_5795_ = v_isSharedCheck_5799_;
goto v_resetjp_5793_;
}
v_resetjp_5793_:
{
lean_object* v___x_5797_; 
if (v_isShared_5795_ == 0)
{
lean_ctor_set_tag(v___x_5794_, 1);
v___x_5797_ = v___x_5794_;
goto v_reusejp_5796_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v_a_5792_);
v___x_5797_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5796_;
}
v_reusejp_5796_:
{
return v___x_5797_;
}
}
}
}
else
{
lean_object* v_a_5800_; lean_object* v___x_5802_; uint8_t v_isShared_5803_; uint8_t v_isSharedCheck_5815_; 
v_a_5800_ = lean_ctor_get(v___x_5778_, 0);
v_isSharedCheck_5815_ = !lean_is_exclusive(v___x_5778_);
if (v_isSharedCheck_5815_ == 0)
{
v___x_5802_ = v___x_5778_;
v_isShared_5803_ = v_isSharedCheck_5815_;
goto v_resetjp_5801_;
}
else
{
lean_inc(v_a_5800_);
lean_dec(v___x_5778_);
v___x_5802_ = lean_box(0);
v_isShared_5803_ = v_isSharedCheck_5815_;
goto v_resetjp_5801_;
}
v_resetjp_5801_:
{
lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5813_; 
v___x_5804_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5805_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5767_);
v___x_5806_ = lean_string_append(v___x_5804_, v___x_5805_);
lean_dec_ref(v___x_5805_);
v___x_5807_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5808_ = lean_string_append(v___x_5806_, v___x_5807_);
v___x_5809_ = lean_io_error_to_string(v_a_5800_);
v___x_5810_ = lean_string_append(v___x_5808_, v___x_5809_);
lean_dec_ref(v___x_5809_);
v___x_5811_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5811_, 0, v___x_5810_);
if (v_isShared_5803_ == 0)
{
lean_ctor_set(v___x_5802_, 0, v___x_5811_);
v___x_5813_ = v___x_5802_;
goto v_reusejp_5812_;
}
else
{
lean_object* v_reuseFailAlloc_5814_; 
v_reuseFailAlloc_5814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5814_, 0, v___x_5811_);
v___x_5813_ = v_reuseFailAlloc_5814_;
goto v_reusejp_5812_;
}
v_reusejp_5812_:
{
return v___x_5813_;
}
}
}
}
v___jp_5817_:
{
uint8_t v_construct_5819_; uint64_t v___x_5820_; 
v_construct_5819_ = lean_ctor_get_uint8(v_b_5767_, sizeof(void*)*4);
v___x_5820_ = lean_uint64_lor(v___x_5816_, v___y_5818_);
if (v_construct_5819_ == 0)
{
uint64_t v___x_5821_; 
v___x_5821_ = 0ULL;
v___y_5772_ = v___x_5820_;
v___y_5773_ = v___x_5821_;
goto v___jp_5771_;
}
else
{
uint64_t v___x_5822_; 
v___x_5822_ = 4ULL;
v___y_5772_ = v___x_5820_;
v___y_5773_ = v___x_5822_;
goto v___jp_5771_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5825_, lean_object* v_args_5826_, lean_object* v_await_5827_, lean_object* v_a_5828_){
_start:
{
uint8_t v_await_boxed_5829_; lean_object* v_res_5830_; 
v_await_boxed_5829_ = lean_unbox(v_await_5827_);
v_res_5830_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v_b_5825_, v_args_5826_, v_await_boxed_5829_);
lean_dec_ref(v_b_5825_);
return v_res_5830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(double v_init_5838_){
_start:
{
lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; uint8_t v___x_5850_; lean_object* v___x_5851_; 
v___x_5840_ = lean_unsigned_to_nat(1u);
v___x_5841_ = ((lean_object*)(l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__1));
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
v___x_5851_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v___x_5841_, v___x_5849_, v___x_5850_);
return v___x_5851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___boxed(lean_object* v_init_5852_, lean_object* v_a_5853_){
_start:
{
double v_init_boxed_5854_; lean_object* v_res_5855_; 
v_init_boxed_5854_ = lean_unbox_float(v_init_5852_);
lean_dec_ref(v_init_5852_);
v_res_5855_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(v_init_boxed_5854_);
return v_res_5855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(lean_object* v_self_5856_){
_start:
{
lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5858_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5859_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5856_, v___x_5858_);
return v___x_5859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5860_, lean_object* v_a_5861_){
_start:
{
lean_object* v_res_5862_; 
v_res_5862_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(v_self_5860_);
return v_res_5862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(lean_object* v_context_5863_, lean_object* v_d_5864_){
_start:
{
lean_object* v___y_5867_; lean_object* v___y_5868_; 
if (lean_obj_tag(v_d_5864_) == 9)
{
lean_object* v_value_5872_; lean_object* v___x_5873_; 
v_value_5872_ = lean_ctor_get(v_d_5864_, 0);
lean_inc(v_value_5872_);
lean_dec_ref_known(v_d_5864_, 2);
v___x_5873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5873_, 0, v_value_5872_);
return v___x_5873_;
}
else
{
lean_object* v___x_5874_; lean_object* v_received_5876_; 
v___x_5874_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5864_) == 9)
{
lean_object* v_value_5890_; lean_object* v_description_5891_; uint8_t v___x_5892_; 
v_value_5890_ = lean_ctor_get(v_d_5864_, 0);
v_description_5891_ = lean_ctor_get(v_d_5864_, 1);
v___x_5892_ = lean_string_dec_eq(v_description_5891_, v___x_5874_);
if (v___x_5892_ == 0)
{
goto v___jp_5888_;
}
else
{
uint32_t v___x_5893_; uint64_t v___x_5894_; lean_object* v___x_5895_; uint32_t v___x_5896_; lean_object* v___x_5897_; 
lean_inc_n(v_value_5890_, 2);
lean_dec_ref_known(v_d_5864_, 2);
v___x_5893_ = 206;
v___x_5894_ = 0ULL;
v___x_5895_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5895_, 0, v_value_5890_);
lean_ctor_set(v___x_5895_, 1, v___x_5874_);
v___x_5896_ = lasm_js_value_handle(v_value_5890_);
lean_dec(v_value_5890_);
v___x_5897_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5893_, v___x_5894_, v___x_5895_, v___x_5896_);
lean_dec_ref_known(v___x_5895_, 2);
if (lean_obj_tag(v___x_5897_) == 0)
{
lean_object* v_a_5898_; uint8_t v___x_5899_; 
v_a_5898_ = lean_ctor_get(v___x_5897_, 0);
lean_inc(v_a_5898_);
lean_dec_ref_known(v___x_5897_, 1);
v___x_5899_ = lean_string_validate_utf8(v_a_5898_);
if (v___x_5899_ == 0)
{
lean_object* v___x_5900_; lean_object* v___x_5901_; 
lean_dec(v_a_5898_);
v___x_5900_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5901_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5900_);
v_received_5876_ = v___x_5901_;
goto v___jp_5875_;
}
else
{
lean_object* v___x_5902_; 
v___x_5902_ = lean_string_from_utf8_unchecked(v_a_5898_);
v_received_5876_ = v___x_5902_;
goto v___jp_5875_;
}
}
else
{
lean_object* v___x_5903_; 
lean_dec_ref_known(v___x_5897_, 1);
v___x_5903_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5876_ = v___x_5903_;
goto v___jp_5875_;
}
}
}
else
{
goto v___jp_5888_;
}
v___jp_5875_:
{
lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; uint8_t v___x_5886_; 
v___x_5877_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5878_ = lean_string_append(v___x_5877_, v_context_5863_);
v___x_5879_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5880_ = lean_string_append(v___x_5878_, v___x_5879_);
v___x_5881_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJSFunction___closed__0));
v___x_5882_ = lean_string_append(v___x_5880_, v___x_5881_);
v___x_5883_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5884_ = lean_string_append(v___x_5882_, v___x_5883_);
v___x_5885_ = lean_string_append(v___x_5884_, v_received_5876_);
lean_dec_ref(v_received_5876_);
v___x_5886_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5886_ == 0)
{
lean_object* v___x_5887_; 
v___x_5887_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5867_ = v___x_5885_;
v___y_5868_ = v___x_5887_;
goto v___jp_5866_;
}
else
{
v___y_5867_ = v___x_5885_;
v___y_5868_ = v___x_5874_;
goto v___jp_5866_;
}
}
v___jp_5888_:
{
lean_object* v___x_5889_; 
v___x_5889_ = l_Lasm_JS_Data_describe(v_d_5864_);
v_received_5876_ = v___x_5889_;
goto v___jp_5875_;
}
}
v___jp_5866_:
{
lean_object* v___x_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; 
v___x_5869_ = lean_string_append(v___y_5867_, v___y_5868_);
v___x_5870_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5870_, 0, v___x_5869_);
v___x_5871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5871_, 0, v___x_5870_);
return v___x_5871_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5904_, lean_object* v_d_5905_, lean_object* v_a_5906_){
_start:
{
lean_object* v_res_5907_; 
v_res_5907_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5904_, v_d_5905_);
lean_dec_ref(v_context_5904_);
return v_res_5907_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(lean_object* v_context_5908_, lean_object* v_bytes_5909_){
_start:
{
lean_object* v___x_5911_; 
v___x_5911_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5909_);
if (lean_obj_tag(v___x_5911_) == 0)
{
lean_object* v_a_5912_; lean_object* v___x_5913_; 
v_a_5912_ = lean_ctor_get(v___x_5911_, 0);
lean_inc(v_a_5912_);
lean_dec_ref_known(v___x_5911_, 1);
v___x_5913_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5908_, v_a_5912_);
return v___x_5913_;
}
else
{
lean_object* v_a_5914_; lean_object* v___x_5916_; uint8_t v_isShared_5917_; uint8_t v_isSharedCheck_5921_; 
v_a_5914_ = lean_ctor_get(v___x_5911_, 0);
v_isSharedCheck_5921_ = !lean_is_exclusive(v___x_5911_);
if (v_isSharedCheck_5921_ == 0)
{
v___x_5916_ = v___x_5911_;
v_isShared_5917_ = v_isSharedCheck_5921_;
goto v_resetjp_5915_;
}
else
{
lean_inc(v_a_5914_);
lean_dec(v___x_5911_);
v___x_5916_ = lean_box(0);
v_isShared_5917_ = v_isSharedCheck_5921_;
goto v_resetjp_5915_;
}
v_resetjp_5915_:
{
lean_object* v___x_5919_; 
if (v_isShared_5917_ == 0)
{
v___x_5919_ = v___x_5916_;
goto v_reusejp_5918_;
}
else
{
lean_object* v_reuseFailAlloc_5920_; 
v_reuseFailAlloc_5920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5920_, 0, v_a_5914_);
v___x_5919_ = v_reuseFailAlloc_5920_;
goto v_reusejp_5918_;
}
v_reusejp_5918_:
{
return v___x_5919_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0___boxed(lean_object* v_context_5922_, lean_object* v_bytes_5923_, lean_object* v_a_5924_){
_start:
{
lean_object* v_res_5925_; 
v_res_5925_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v_context_5922_, v_bytes_5923_);
lean_dec_ref(v_bytes_5923_);
lean_dec_ref(v_context_5922_);
return v_res_5925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(lean_object* v_o_5926_, lean_object* v_key_5927_){
_start:
{
lean_object* v_k_5929_; lean_object* v___x_5930_; 
v_k_5929_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_5929_, 0, v_key_5927_);
v___x_5930_ = l_Lasm_JS_Wire_encodeIO(v_k_5929_);
if (lean_obj_tag(v___x_5930_) == 0)
{
lean_object* v_a_5931_; uint32_t v___x_5932_; uint32_t v___x_5933_; uint64_t v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; 
v_a_5931_ = lean_ctor_get(v___x_5930_, 0);
lean_inc(v_a_5931_);
lean_dec_ref_known(v___x_5930_, 1);
v___x_5932_ = 203;
v___x_5933_ = lasm_js_value_handle(v_o_5926_);
v___x_5934_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_5935_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5936_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5936_, 0, v_o_5926_);
lean_ctor_set(v___x_5936_, 1, v___x_5935_);
v___x_5937_ = lean_unsigned_to_nat(2u);
v___x_5938_ = lean_mk_empty_array_with_capacity(v___x_5937_);
lean_inc_ref(v_k_5929_);
v___x_5939_ = lean_array_push(v___x_5938_, v_k_5929_);
v___x_5940_ = lean_array_push(v___x_5939_, v___x_5936_);
v___x_5941_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5941_, 0, v___x_5940_);
v___x_5942_ = lasm_js_call(v___x_5932_, v___x_5933_, v___x_5934_, v_a_5931_, v___x_5941_);
lean_dec_ref_known(v___x_5941_, 1);
lean_dec(v_a_5931_);
if (lean_obj_tag(v___x_5942_) == 0)
{
lean_object* v_a_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; 
v_a_5943_ = lean_ctor_get(v___x_5942_, 0);
lean_inc(v_a_5943_);
lean_dec_ref_known(v___x_5942_, 1);
v___x_5944_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_5945_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_5929_);
v___x_5946_ = lean_string_append(v___x_5944_, v___x_5945_);
lean_dec_ref(v___x_5945_);
v___x_5947_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v___x_5946_, v_a_5943_);
lean_dec(v_a_5943_);
lean_dec_ref(v___x_5946_);
return v___x_5947_;
}
else
{
lean_object* v_a_5948_; lean_object* v___x_5950_; uint8_t v_isShared_5951_; uint8_t v_isSharedCheck_5955_; 
lean_dec_ref_known(v_k_5929_, 1);
v_a_5948_ = lean_ctor_get(v___x_5942_, 0);
v_isSharedCheck_5955_ = !lean_is_exclusive(v___x_5942_);
if (v_isSharedCheck_5955_ == 0)
{
v___x_5950_ = v___x_5942_;
v_isShared_5951_ = v_isSharedCheck_5955_;
goto v_resetjp_5949_;
}
else
{
lean_inc(v_a_5948_);
lean_dec(v___x_5942_);
v___x_5950_ = lean_box(0);
v_isShared_5951_ = v_isSharedCheck_5955_;
goto v_resetjp_5949_;
}
v_resetjp_5949_:
{
lean_object* v___x_5953_; 
if (v_isShared_5951_ == 0)
{
v___x_5953_ = v___x_5950_;
goto v_reusejp_5952_;
}
else
{
lean_object* v_reuseFailAlloc_5954_; 
v_reuseFailAlloc_5954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5954_, 0, v_a_5948_);
v___x_5953_ = v_reuseFailAlloc_5954_;
goto v_reusejp_5952_;
}
v_reusejp_5952_:
{
return v___x_5953_;
}
}
}
}
else
{
lean_object* v_a_5956_; lean_object* v___x_5958_; uint8_t v_isShared_5959_; uint8_t v_isSharedCheck_5963_; 
lean_dec_ref_known(v_k_5929_, 1);
lean_dec(v_o_5926_);
v_a_5956_ = lean_ctor_get(v___x_5930_, 0);
v_isSharedCheck_5963_ = !lean_is_exclusive(v___x_5930_);
if (v_isSharedCheck_5963_ == 0)
{
v___x_5958_ = v___x_5930_;
v_isShared_5959_ = v_isSharedCheck_5963_;
goto v_resetjp_5957_;
}
else
{
lean_inc(v_a_5956_);
lean_dec(v___x_5930_);
v___x_5958_ = lean_box(0);
v_isShared_5959_ = v_isSharedCheck_5963_;
goto v_resetjp_5957_;
}
v_resetjp_5957_:
{
lean_object* v___x_5961_; 
if (v_isShared_5959_ == 0)
{
v___x_5961_ = v___x_5958_;
goto v_reusejp_5960_;
}
else
{
lean_object* v_reuseFailAlloc_5962_; 
v_reuseFailAlloc_5962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5962_, 0, v_a_5956_);
v___x_5961_ = v_reuseFailAlloc_5962_;
goto v_reusejp_5960_;
}
v_reusejp_5960_:
{
return v___x_5961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0___boxed(lean_object* v_o_5964_, lean_object* v_key_5965_, lean_object* v_a_5966_){
_start:
{
lean_object* v_res_5967_; 
v_res_5967_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_o_5964_, v_key_5965_);
return v_res_5967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(lean_object* v_self_5968_){
_start:
{
lean_object* v___x_5970_; lean_object* v___x_5971_; 
v___x_5970_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5971_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5968_, v___x_5970_);
return v___x_5971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size___boxed(lean_object* v_self_5972_, lean_object* v_a_5973_){
_start:
{
lean_object* v_res_5974_; 
v_res_5974_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(v_self_5972_);
return v_res_5974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f(lean_object* v_v_5981_){
_start:
{
lean_object* v___f_5983_; lean_object* v___x_5984_; 
v___f_5983_ = ((lean_object*)(l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___closed__2));
lean_inc(v_v_5981_);
v___x_5984_ = l_Lasm_JS_Web_Support_isInstance(v___f_5983_, v_v_5981_);
if (lean_obj_tag(v___x_5984_) == 0)
{
lean_object* v_a_5985_; lean_object* v___x_5987_; uint8_t v_isShared_5988_; uint8_t v_isSharedCheck_5998_; 
v_a_5985_ = lean_ctor_get(v___x_5984_, 0);
v_isSharedCheck_5998_ = !lean_is_exclusive(v___x_5984_);
if (v_isSharedCheck_5998_ == 0)
{
v___x_5987_ = v___x_5984_;
v_isShared_5988_ = v_isSharedCheck_5998_;
goto v_resetjp_5986_;
}
else
{
lean_inc(v_a_5985_);
lean_dec(v___x_5984_);
v___x_5987_ = lean_box(0);
v_isShared_5988_ = v_isSharedCheck_5998_;
goto v_resetjp_5986_;
}
v_resetjp_5986_:
{
uint8_t v___x_5989_; 
v___x_5989_ = lean_unbox(v_a_5985_);
lean_dec(v_a_5985_);
if (v___x_5989_ == 0)
{
lean_object* v___x_5990_; lean_object* v___x_5992_; 
lean_dec(v_v_5981_);
v___x_5990_ = lean_box(0);
if (v_isShared_5988_ == 0)
{
lean_ctor_set(v___x_5987_, 0, v___x_5990_);
v___x_5992_ = v___x_5987_;
goto v_reusejp_5991_;
}
else
{
lean_object* v_reuseFailAlloc_5993_; 
v_reuseFailAlloc_5993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5993_, 0, v___x_5990_);
v___x_5992_ = v_reuseFailAlloc_5993_;
goto v_reusejp_5991_;
}
v_reusejp_5991_:
{
return v___x_5992_;
}
}
else
{
lean_object* v___x_5994_; lean_object* v___x_5996_; 
v___x_5994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5994_, 0, v_v_5981_);
if (v_isShared_5988_ == 0)
{
lean_ctor_set(v___x_5987_, 0, v___x_5994_);
v___x_5996_ = v___x_5987_;
goto v_reusejp_5995_;
}
else
{
lean_object* v_reuseFailAlloc_5997_; 
v_reuseFailAlloc_5997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5997_, 0, v___x_5994_);
v___x_5996_ = v_reuseFailAlloc_5997_;
goto v_reusejp_5995_;
}
v_reusejp_5995_:
{
return v___x_5996_;
}
}
}
}
else
{
lean_object* v_a_5999_; lean_object* v___x_6001_; uint8_t v_isShared_6002_; uint8_t v_isSharedCheck_6006_; 
lean_dec(v_v_5981_);
v_a_5999_ = lean_ctor_get(v___x_5984_, 0);
v_isSharedCheck_6006_ = !lean_is_exclusive(v___x_5984_);
if (v_isSharedCheck_6006_ == 0)
{
v___x_6001_ = v___x_5984_;
v_isShared_6002_ = v_isSharedCheck_6006_;
goto v_resetjp_6000_;
}
else
{
lean_inc(v_a_5999_);
lean_dec(v___x_5984_);
v___x_6001_ = lean_box(0);
v_isShared_6002_ = v_isSharedCheck_6006_;
goto v_resetjp_6000_;
}
v_resetjp_6000_:
{
lean_object* v___x_6004_; 
if (v_isShared_6002_ == 0)
{
v___x_6004_ = v___x_6001_;
goto v_reusejp_6003_;
}
else
{
lean_object* v_reuseFailAlloc_6005_; 
v_reuseFailAlloc_6005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6005_, 0, v_a_5999_);
v___x_6004_ = v_reuseFailAlloc_6005_;
goto v_reusejp_6003_;
}
v_reusejp_6003_:
{
return v___x_6004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f___boxed(lean_object* v_v_6007_, lean_object* v_a_6008_){
_start:
{
lean_object* v_res_6009_; 
v_res_6009_ = l_Lasm_JS_Web_CountQueuingStrategy_cast_x3f(v_v_6007_);
return v_res_6009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_6010_, lean_object* v_d_6011_){
_start:
{
lean_object* v___y_6014_; lean_object* v___y_6015_; 
if (lean_obj_tag(v_d_6011_) == 9)
{
lean_object* v_value_6019_; lean_object* v___x_6020_; 
v_value_6019_ = lean_ctor_get(v_d_6011_, 0);
lean_inc(v_value_6019_);
lean_dec_ref_known(v_d_6011_, 2);
v___x_6020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6020_, 0, v_value_6019_);
return v___x_6020_;
}
else
{
lean_object* v___x_6021_; lean_object* v_received_6023_; 
v___x_6021_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_6011_) == 9)
{
lean_object* v_value_6037_; lean_object* v_description_6038_; uint8_t v___x_6039_; 
v_value_6037_ = lean_ctor_get(v_d_6011_, 0);
v_description_6038_ = lean_ctor_get(v_d_6011_, 1);
v___x_6039_ = lean_string_dec_eq(v_description_6038_, v___x_6021_);
if (v___x_6039_ == 0)
{
goto v___jp_6035_;
}
else
{
uint32_t v___x_6040_; uint64_t v___x_6041_; lean_object* v___x_6042_; uint32_t v___x_6043_; lean_object* v___x_6044_; 
lean_inc_n(v_value_6037_, 2);
lean_dec_ref_known(v_d_6011_, 2);
v___x_6040_ = 206;
v___x_6041_ = 0ULL;
v___x_6042_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6042_, 0, v_value_6037_);
lean_ctor_set(v___x_6042_, 1, v___x_6021_);
v___x_6043_ = lasm_js_value_handle(v_value_6037_);
lean_dec(v_value_6037_);
v___x_6044_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_6040_, v___x_6041_, v___x_6042_, v___x_6043_);
lean_dec_ref_known(v___x_6042_, 2);
if (lean_obj_tag(v___x_6044_) == 0)
{
lean_object* v_a_6045_; uint8_t v___x_6046_; 
v_a_6045_ = lean_ctor_get(v___x_6044_, 0);
lean_inc(v_a_6045_);
lean_dec_ref_known(v___x_6044_, 1);
v___x_6046_ = lean_string_validate_utf8(v_a_6045_);
if (v___x_6046_ == 0)
{
lean_object* v___x_6047_; lean_object* v___x_6048_; 
lean_dec(v_a_6045_);
v___x_6047_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_6048_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_6047_);
v_received_6023_ = v___x_6048_;
goto v___jp_6022_;
}
else
{
lean_object* v___x_6049_; 
v___x_6049_ = lean_string_from_utf8_unchecked(v_a_6045_);
v_received_6023_ = v___x_6049_;
goto v___jp_6022_;
}
}
else
{
lean_object* v___x_6050_; 
lean_dec_ref_known(v___x_6044_, 1);
v___x_6050_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_6023_ = v___x_6050_;
goto v___jp_6022_;
}
}
}
else
{
goto v___jp_6035_;
}
v___jp_6022_:
{
lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; uint8_t v___x_6033_; 
v___x_6024_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_6025_ = lean_string_append(v___x_6024_, v_context_6010_);
v___x_6026_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_6027_ = lean_string_append(v___x_6025_, v___x_6026_);
v___x_6028_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0));
v___x_6029_ = lean_string_append(v___x_6027_, v___x_6028_);
v___x_6030_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_6031_ = lean_string_append(v___x_6029_, v___x_6030_);
v___x_6032_ = lean_string_append(v___x_6031_, v_received_6023_);
lean_dec_ref(v_received_6023_);
v___x_6033_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_6033_ == 0)
{
lean_object* v___x_6034_; 
v___x_6034_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_6014_ = v___x_6032_;
v___y_6015_ = v___x_6034_;
goto v___jp_6013_;
}
else
{
v___y_6014_ = v___x_6032_;
v___y_6015_ = v___x_6021_;
goto v___jp_6013_;
}
}
v___jp_6035_:
{
lean_object* v___x_6036_; 
v___x_6036_ = l_Lasm_JS_Data_describe(v_d_6011_);
v_received_6023_ = v___x_6036_;
goto v___jp_6022_;
}
}
v___jp_6013_:
{
lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; 
v___x_6016_ = lean_string_append(v___y_6014_, v___y_6015_);
v___x_6017_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6017_, 0, v___x_6016_);
v___x_6018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6018_, 0, v___x_6017_);
return v___x_6018_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_6051_, lean_object* v_d_6052_, lean_object* v_a_6053_){
_start:
{
lean_object* v_res_6054_; 
v_res_6054_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v_context_6051_, v_d_6052_);
lean_dec_ref(v_context_6051_);
return v_res_6054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(lean_object* v_b_6055_, lean_object* v_args_6056_, uint8_t v_await_6057_){
_start:
{
uint64_t v___y_6060_; uint64_t v___y_6061_; uint64_t v___x_6104_; uint64_t v___y_6106_; 
v___x_6104_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_6057_ == 0)
{
uint64_t v___x_6111_; 
v___x_6111_ = 0ULL;
v___y_6106_ = v___x_6111_;
goto v___jp_6105_;
}
else
{
uint64_t v___x_6112_; 
v___x_6112_ = 2ULL;
v___y_6106_ = v___x_6112_;
goto v___jp_6105_;
}
v___jp_6059_:
{
uint64_t v_flags_6062_; uint32_t v___x_6063_; lean_object* v___x_6064_; uint32_t v___x_6065_; lean_object* v___x_6066_; 
v_flags_6062_ = lean_uint64_lor(v___y_6060_, v___y_6061_);
v___x_6063_ = 214;
v___x_6064_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_6055_, v_args_6056_);
v___x_6065_ = 0;
v___x_6066_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_6063_, v_flags_6062_, v___x_6064_, v___x_6065_);
lean_dec(v___x_6064_);
if (lean_obj_tag(v___x_6066_) == 0)
{
if (lean_obj_tag(v___x_6066_) == 0)
{
lean_object* v_a_6067_; lean_object* v___x_6068_; 
v_a_6067_ = lean_ctor_get(v___x_6066_, 0);
lean_inc(v_a_6067_);
lean_dec_ref_known(v___x_6066_, 1);
v___x_6068_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_6067_);
lean_dec(v_a_6067_);
if (lean_obj_tag(v___x_6068_) == 0)
{
lean_object* v_a_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; 
v_a_6069_ = lean_ctor_get(v___x_6068_, 0);
lean_inc(v_a_6069_);
lean_dec_ref_known(v___x_6068_, 1);
v___x_6070_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6055_);
v___x_6071_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v___x_6070_, v_a_6069_);
lean_dec_ref(v___x_6070_);
return v___x_6071_;
}
else
{
lean_object* v_a_6072_; lean_object* v___x_6074_; uint8_t v_isShared_6075_; uint8_t v_isSharedCheck_6079_; 
v_a_6072_ = lean_ctor_get(v___x_6068_, 0);
v_isSharedCheck_6079_ = !lean_is_exclusive(v___x_6068_);
if (v_isSharedCheck_6079_ == 0)
{
v___x_6074_ = v___x_6068_;
v_isShared_6075_ = v_isSharedCheck_6079_;
goto v_resetjp_6073_;
}
else
{
lean_inc(v_a_6072_);
lean_dec(v___x_6068_);
v___x_6074_ = lean_box(0);
v_isShared_6075_ = v_isSharedCheck_6079_;
goto v_resetjp_6073_;
}
v_resetjp_6073_:
{
lean_object* v___x_6077_; 
if (v_isShared_6075_ == 0)
{
v___x_6077_ = v___x_6074_;
goto v_reusejp_6076_;
}
else
{
lean_object* v_reuseFailAlloc_6078_; 
v_reuseFailAlloc_6078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6078_, 0, v_a_6072_);
v___x_6077_ = v_reuseFailAlloc_6078_;
goto v_reusejp_6076_;
}
v_reusejp_6076_:
{
return v___x_6077_;
}
}
}
}
else
{
lean_object* v_a_6080_; lean_object* v___x_6082_; uint8_t v_isShared_6083_; uint8_t v_isSharedCheck_6087_; 
v_a_6080_ = lean_ctor_get(v___x_6066_, 0);
v_isSharedCheck_6087_ = !lean_is_exclusive(v___x_6066_);
if (v_isSharedCheck_6087_ == 0)
{
v___x_6082_ = v___x_6066_;
v_isShared_6083_ = v_isSharedCheck_6087_;
goto v_resetjp_6081_;
}
else
{
lean_inc(v_a_6080_);
lean_dec(v___x_6066_);
v___x_6082_ = lean_box(0);
v_isShared_6083_ = v_isSharedCheck_6087_;
goto v_resetjp_6081_;
}
v_resetjp_6081_:
{
lean_object* v___x_6085_; 
if (v_isShared_6083_ == 0)
{
lean_ctor_set_tag(v___x_6082_, 1);
v___x_6085_ = v___x_6082_;
goto v_reusejp_6084_;
}
else
{
lean_object* v_reuseFailAlloc_6086_; 
v_reuseFailAlloc_6086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6086_, 0, v_a_6080_);
v___x_6085_ = v_reuseFailAlloc_6086_;
goto v_reusejp_6084_;
}
v_reusejp_6084_:
{
return v___x_6085_;
}
}
}
}
else
{
lean_object* v_a_6088_; lean_object* v___x_6090_; uint8_t v_isShared_6091_; uint8_t v_isSharedCheck_6103_; 
v_a_6088_ = lean_ctor_get(v___x_6066_, 0);
v_isSharedCheck_6103_ = !lean_is_exclusive(v___x_6066_);
if (v_isSharedCheck_6103_ == 0)
{
v___x_6090_ = v___x_6066_;
v_isShared_6091_ = v_isSharedCheck_6103_;
goto v_resetjp_6089_;
}
else
{
lean_inc(v_a_6088_);
lean_dec(v___x_6066_);
v___x_6090_ = lean_box(0);
v_isShared_6091_ = v_isSharedCheck_6103_;
goto v_resetjp_6089_;
}
v_resetjp_6089_:
{
lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6101_; 
v___x_6092_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_6093_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6055_);
v___x_6094_ = lean_string_append(v___x_6092_, v___x_6093_);
lean_dec_ref(v___x_6093_);
v___x_6095_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_6096_ = lean_string_append(v___x_6094_, v___x_6095_);
v___x_6097_ = lean_io_error_to_string(v_a_6088_);
v___x_6098_ = lean_string_append(v___x_6096_, v___x_6097_);
lean_dec_ref(v___x_6097_);
v___x_6099_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6099_, 0, v___x_6098_);
if (v_isShared_6091_ == 0)
{
lean_ctor_set(v___x_6090_, 0, v___x_6099_);
v___x_6101_ = v___x_6090_;
goto v_reusejp_6100_;
}
else
{
lean_object* v_reuseFailAlloc_6102_; 
v_reuseFailAlloc_6102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6102_, 0, v___x_6099_);
v___x_6101_ = v_reuseFailAlloc_6102_;
goto v_reusejp_6100_;
}
v_reusejp_6100_:
{
return v___x_6101_;
}
}
}
}
v___jp_6105_:
{
uint8_t v_construct_6107_; uint64_t v___x_6108_; 
v_construct_6107_ = lean_ctor_get_uint8(v_b_6055_, sizeof(void*)*4);
v___x_6108_ = lean_uint64_lor(v___x_6104_, v___y_6106_);
if (v_construct_6107_ == 0)
{
uint64_t v___x_6109_; 
v___x_6109_ = 0ULL;
v___y_6060_ = v___x_6108_;
v___y_6061_ = v___x_6109_;
goto v___jp_6059_;
}
else
{
uint64_t v___x_6110_; 
v___x_6110_ = 4ULL;
v___y_6060_ = v___x_6108_;
v___y_6061_ = v___x_6110_;
goto v___jp_6059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0___boxed(lean_object* v_b_6113_, lean_object* v_args_6114_, lean_object* v_await_6115_, lean_object* v_a_6116_){
_start:
{
uint8_t v_await_boxed_6117_; lean_object* v_res_6118_; 
v_await_boxed_6117_ = lean_unbox(v_await_6115_);
v_res_6118_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v_b_6113_, v_args_6114_, v_await_boxed_6117_);
lean_dec_ref(v_b_6113_);
return v_res_6118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new(double v_init_6126_){
_start:
{
lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; uint8_t v___x_6138_; lean_object* v___x_6139_; 
v___x_6128_ = lean_unsigned_to_nat(1u);
v___x_6129_ = ((lean_object*)(l_Lasm_JS_Web_CountQueuingStrategy_new___closed__1));
v___x_6130_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_6131_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_6131_, 0, v_init_6126_);
v___x_6132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6132_, 0, v___x_6130_);
lean_ctor_set(v___x_6132_, 1, v___x_6131_);
v___x_6133_ = lean_mk_empty_array_with_capacity(v___x_6128_);
lean_inc_ref(v___x_6133_);
v___x_6134_ = lean_array_push(v___x_6133_, v___x_6132_);
v___x_6135_ = l_Lasm_JS_Web_Support_fields(v___x_6134_);
lean_dec_ref(v___x_6134_);
v___x_6136_ = lean_array_push(v___x_6133_, v___x_6135_);
v___x_6137_ = l_Lasm_JS_Web_Support_args(v___x_6136_);
v___x_6138_ = 0;
v___x_6139_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v___x_6129_, v___x_6137_, v___x_6138_);
return v___x_6139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___boxed(lean_object* v_init_6140_, lean_object* v_a_6141_){
_start:
{
double v_init_boxed_6142_; lean_object* v_res_6143_; 
v_init_boxed_6142_ = lean_unbox_float(v_init_6140_);
lean_dec_ref(v_init_6140_);
v_res_6143_ = l_Lasm_JS_Web_CountQueuingStrategy_new(v_init_boxed_6142_);
return v_res_6143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(lean_object* v_self_6144_){
_start:
{
lean_object* v___x_6146_; lean_object* v___x_6147_; 
v___x_6146_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_6147_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_6144_, v___x_6146_);
return v___x_6147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark___boxed(lean_object* v_self_6148_, lean_object* v_a_6149_){
_start:
{
lean_object* v_res_6150_; 
v_res_6150_ = l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(v_self_6148_);
return v_res_6150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size(lean_object* v_self_6151_){
_start:
{
lean_object* v___x_6153_; lean_object* v___x_6154_; 
v___x_6153_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_6154_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_6151_, v___x_6153_);
return v___x_6154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size___boxed(lean_object* v_self_6155_, lean_object* v_a_6156_){
_start:
{
lean_object* v_res_6157_; 
v_res_6157_ = l_Lasm_JS_Web_CountQueuingStrategy_size(v_self_6155_);
return v_res_6157_;
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
