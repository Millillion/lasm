// Lean compiler output
// Module: Lasm.JS.Cloudflare.R2
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Support public import Lasm.JS.Web.Streams public import Lasm.JS.Web.File public import Lasm.JS.Web.Fetch
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
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
extern lean_object* l_Lasm_JS_instFromJSData;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(size_t, size_t, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_nat_to_int(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_instToJSRecord___redArg(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Bucket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Bucket___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Bucket = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Cloudflare.R2Bucket"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Object = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Object___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Cloudflare.R2Object"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Object___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Object___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2Object___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Object___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Object___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Object___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Object = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Object___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ObjectBody = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Cloudflare.R2ObjectBody"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ObjectBody___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Checksums = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Checksums___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Cloudflare.R2Checksums"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Checksums___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Checksums___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2Checksums___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Checksums___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Checksums___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Checksums___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Checksums = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Checksums___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2MultipartUpload = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Cloudflare.R2MultipartUpload"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Bucket___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2MultipartUpload___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lasm.JS.Cloudflare.R2ListOptionsInclude.httpMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lasm.JS.Cloudflare.R2ListOptionsInclude.customMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedR2ListOptionsInclude_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedR2ListOptionsInclude;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "httpMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "customMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Cloudflare.R2ListOptionsInclude"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "etagMatches"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "etagDoesNotMatch"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "uploadedBefore"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "uploadedAfter"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "secondsGranularity"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__1_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__1_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_r2Conditional_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_r2Conditional_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_headers_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_headers_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2ConditionalR2ConditionalOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeR2ConditionalR2ConditionalOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeR2ConditionalR2ConditionalOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeR2ConditionalR2ConditionalOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeR2ConditionalR2ConditionalOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeR2ConditionalR2ConditionalOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeR2ConditionalR2ConditionalOrHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2ConditionalOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeHeadersR2ConditionalOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeHeadersR2ConditionalOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2ConditionalOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeHeadersR2ConditionalOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2ConditionalOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeHeadersR2ConditionalOrHeaders___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "offset"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Range___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Cloudflare.R2Range"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_r2Range_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_r2Range_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_headers_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_headers_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_arrayBuffer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_arrayBuffer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "onlyIf"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "range"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ssecKey"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2GetOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2GetOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2GetOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2GetOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2GetOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "contentType"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "contentLanguage"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "contentDisposition"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "contentEncoding"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "cacheControl"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "cacheExpiry"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Cloudflare.R2HTTPMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_r2HTTPMetadata_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_r2HTTPMetadata_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_headers_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_headers_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "md5"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sha1"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sha256"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sha384"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sha512"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "storageClass"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "limit"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prefix"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cursor"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "delimiter"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "startAfter"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "include"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "objects"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "delimitedPrefixes"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "truncated"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Cloudflare.R2Objects"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Cloudflare.R2StringChecksums"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "partNumber"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "etag"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Cloudflare.R2UploadedPart"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Option (Lasm.JS.Cloudflare.R2Object)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Bucket_head___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "head"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Bucket_head___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Bucket_head___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_head(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_head___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0(lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Option (Lasm.JS.Cloudflare.R2ObjectBody)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Bucket_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Bucket_get___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Bucket_get___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_R2Bucket_put___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "put"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Bucket_put___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "createMultipartUpload"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "resumeMultipartUpload"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Bucket_delete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Bucket_delete___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Bucket_delete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_delete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_delete___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Array (String)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "an element is not String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__6_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__7_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__9 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Array (Lasm.JS.Cloudflare.R2Object)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "an element is not Lasm.JS.Cloudflare.R2Object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Bucket_list___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "list"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Bucket_list___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Bucket_list___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_list(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_list___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Object_key___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Object_key___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Object_key___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_key(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_key___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Object_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Object_version___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Object_version___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_version(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_version___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Object_size___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Object_size___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Object_size___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_size(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_etag(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_etag___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Object_httpEtag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "httpEtag"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Object_httpEtag___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Object_httpEtag___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpEtag(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpEtag___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Object_checksums___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "checksums"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Object_checksums___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Object_checksums___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_checksums(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_checksums___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Object_uploaded___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "uploaded"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Object_uploaded___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Object_uploaded___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_uploaded(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_uploaded___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Option (Lasm.JS.Cloudflare.R2HTTPMetadata)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpMetadata(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpMetadata___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Cloudflare.Support.recordOf"};
static const lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Object.entries"};
static const lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__1_value),((lean_object*)&l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "record field "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", got "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "expected an object or null, got "};
static const lean_object* l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_customMetadata(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_customMetadata___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Nat)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__1_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__2;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Option (Float)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Option (Lasm.JS.Cloudflare.R2Range)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_range(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_range___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_storageClass(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_storageClass___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ssecKeyMd5"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "writeHttpMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2ObjectBody_body___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_body___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_body___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_body(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_body___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "bodyUsed"};
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arrayBuffer"};
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__1_value;
static const lean_array_object l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2ObjectBody_bytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bytes"};
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bytes___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_bytes___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bytes___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2ObjectBody_text___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_text___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_text___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_text(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_text___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2ObjectBody_json___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "json"};
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_json___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_json___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_json(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_json___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2ObjectBody_blob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "blob"};
static const lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_blob___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2ObjectBody_blob___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_blob(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_blob___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_md5(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_md5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha256(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha256___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha384(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha384___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha512(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha512___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2Checksums_toJSON___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toJSON"};
static const lean_object* l_Lasm_JS_Cloudflare_R2Checksums_toJSON___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2Checksums_toJSON___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_toJSON(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_toJSON___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_key(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_key___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "uploadId"};
static const lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__0(lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "uploadPart"};
static const lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart(lean_object*, double, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2MultipartUpload_abort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_abort___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2MultipartUpload_abort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_abort(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_abort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_R2MultipartUpload_complete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "complete"};
static const lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_complete___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_R2MultipartUpload_complete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_complete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_complete___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Cloudflare_instFromJSR2Bucket___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___lam__0(lean_object* v_self_36_){
_start:
{
lean_inc(v_self_36_);
return v_self_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___lam__0___boxed(lean_object* v_self_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lasm_JS_Cloudflare_instCoeR2ObjectBodyR2Object___lam__0(v_self_37_);
lean_dec(v_self_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorIdx(uint8_t v_x_55_){
_start:
{
if (v_x_55_ == 0)
{
lean_object* v___x_56_; 
v___x_56_ = lean_unsigned_to_nat(0u);
return v___x_56_;
}
else
{
lean_object* v___x_57_; 
v___x_57_ = lean_unsigned_to_nat(1u);
return v___x_57_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorIdx___boxed(lean_object* v_x_58_){
_start:
{
uint8_t v_x_boxed_59_; lean_object* v_res_60_; 
v_x_boxed_59_ = lean_unbox(v_x_58_);
v_res_60_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorIdx(v_x_boxed_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim___redArg(lean_object* v_k_61_){
_start:
{
lean_inc(v_k_61_);
return v_k_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim___redArg___boxed(lean_object* v_k_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim___redArg(v_k_62_);
lean_dec(v_k_62_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim(lean_object* v_motive_64_, lean_object* v_ctorIdx_65_, uint8_t v_t_66_, lean_object* v_h_67_, lean_object* v_k_68_){
_start:
{
lean_inc(v_k_68_);
return v_k_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim___boxed(lean_object* v_motive_69_, lean_object* v_ctorIdx_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_k_73_){
_start:
{
uint8_t v_t_boxed_74_; lean_object* v_res_75_; 
v_t_boxed_74_ = lean_unbox(v_t_71_);
v_res_75_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorElim(v_motive_69_, v_ctorIdx_70_, v_t_boxed_74_, v_h_72_, v_k_73_);
lean_dec(v_k_73_);
lean_dec(v_ctorIdx_70_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim___redArg(lean_object* v_httpMetadata_76_){
_start:
{
lean_inc(v_httpMetadata_76_);
return v_httpMetadata_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim___redArg___boxed(lean_object* v_httpMetadata_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim___redArg(v_httpMetadata_77_);
lean_dec(v_httpMetadata_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim(lean_object* v_motive_79_, uint8_t v_t_80_, lean_object* v_h_81_, lean_object* v_httpMetadata_82_){
_start:
{
lean_inc(v_httpMetadata_82_);
return v_httpMetadata_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim___boxed(lean_object* v_motive_83_, lean_object* v_t_84_, lean_object* v_h_85_, lean_object* v_httpMetadata_86_){
_start:
{
uint8_t v_t_boxed_87_; lean_object* v_res_88_; 
v_t_boxed_87_ = lean_unbox(v_t_84_);
v_res_88_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_httpMetadata_elim(v_motive_83_, v_t_boxed_87_, v_h_85_, v_httpMetadata_86_);
lean_dec(v_httpMetadata_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim___redArg(lean_object* v_customMetadata_89_){
_start:
{
lean_inc(v_customMetadata_89_);
return v_customMetadata_89_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim___redArg___boxed(lean_object* v_customMetadata_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim___redArg(v_customMetadata_90_);
lean_dec(v_customMetadata_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim(lean_object* v_motive_92_, uint8_t v_t_93_, lean_object* v_h_94_, lean_object* v_customMetadata_95_){
_start:
{
lean_inc(v_customMetadata_95_);
return v_customMetadata_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim___boxed(lean_object* v_motive_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_customMetadata_99_){
_start:
{
uint8_t v_t_boxed_100_; lean_object* v_res_101_; 
v_t_boxed_100_ = lean_unbox(v_t_97_);
v_res_101_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_customMetadata_elim(v_motive_96_, v_t_boxed_100_, v_h_98_, v_customMetadata_99_);
lean_dec(v_customMetadata_99_);
return v_res_101_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude_beq(uint8_t v_x_102_, uint8_t v_y_103_){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_104_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorIdx(v_x_102_);
v___x_105_ = l_Lasm_JS_Cloudflare_R2ListOptionsInclude_ctorIdx(v_y_103_);
v___x_106_ = lean_nat_dec_eq(v___x_104_, v___x_105_);
lean_dec(v___x_105_);
lean_dec(v___x_104_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude_beq___boxed(lean_object* v_x_107_, lean_object* v_y_108_){
_start:
{
uint8_t v_x_21__boxed_109_; uint8_t v_y_22__boxed_110_; uint8_t v_res_111_; lean_object* v_r_112_; 
v_x_21__boxed_109_ = lean_unbox(v_x_107_);
v_y_22__boxed_110_ = lean_unbox(v_y_108_);
v_res_111_ = l_Lasm_JS_Cloudflare_instBEqR2ListOptionsInclude_beq(v_x_21__boxed_109_, v_y_22__boxed_110_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(2u);
v___x_122_ = lean_nat_to_int(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(1u);
v___x_124_ = lean_nat_to_int(v___x_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr(uint8_t v_x_125_, lean_object* v_prec_126_){
_start:
{
lean_object* v___y_128_; lean_object* v___y_135_; 
if (v_x_125_ == 0)
{
lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(1024u);
v___x_142_ = lean_nat_dec_le(v___x_141_, v_prec_126_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4, &l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4_once, _init_l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4);
v___y_128_ = v___x_143_;
goto v___jp_127_;
}
else
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5, &l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5_once, _init_l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5);
v___y_128_ = v___x_144_;
goto v___jp_127_;
}
}
else
{
lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_145_ = lean_unsigned_to_nat(1024u);
v___x_146_ = lean_nat_dec_le(v___x_145_, v_prec_126_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
v___x_147_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4, &l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4_once, _init_l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__4);
v___y_135_ = v___x_147_;
goto v___jp_134_;
}
else
{
lean_object* v___x_148_; 
v___x_148_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5, &l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5_once, _init_l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__5);
v___y_135_ = v___x_148_;
goto v___jp_134_;
}
}
v___jp_127_:
{
lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_129_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__1));
lean_inc(v___y_128_);
v___x_130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_130_, 0, v___y_128_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = 0;
v___x_132_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_132_, 0, v___x_130_);
lean_ctor_set_uint8(v___x_132_, sizeof(void*)*1, v___x_131_);
v___x_133_ = l_Repr_addAppParen(v___x_132_, v_prec_126_);
return v___x_133_;
}
v___jp_134_:
{
lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_136_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___closed__3));
lean_inc(v___y_135_);
v___x_137_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_137_, 0, v___y_135_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
v___x_138_ = 0;
v___x_139_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_139_, 0, v___x_137_);
lean_ctor_set_uint8(v___x_139_, sizeof(void*)*1, v___x_138_);
v___x_140_ = l_Repr_addAppParen(v___x_139_, v_prec_126_);
return v___x_140_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr___boxed(lean_object* v_x_149_, lean_object* v_prec_150_){
_start:
{
uint8_t v_x_117__boxed_151_; lean_object* v_res_152_; 
v_x_117__boxed_151_ = lean_unbox(v_x_149_);
v_res_152_ = l_Lasm_JS_Cloudflare_instReprR2ListOptionsInclude_repr(v_x_117__boxed_151_, v_prec_150_);
lean_dec(v_prec_150_);
return v_res_152_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedR2ListOptionsInclude_default(void){
_start:
{
uint8_t v___x_155_; 
v___x_155_ = 0;
return v___x_155_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedR2ListOptionsInclude(void){
_start:
{
uint8_t v___x_156_; 
v___x_156_ = 0;
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0(uint8_t v_x_163_){
_start:
{
if (v_x_163_ == 0)
{
lean_object* v___x_164_; 
v___x_164_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__1));
return v___x_164_;
}
else
{
lean_object* v___x_165_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__3));
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___boxed(lean_object* v_x_166_){
_start:
{
uint8_t v_x_40__boxed_167_; lean_object* v_res_168_; 
v_x_40__boxed_167_ = lean_unbox(v_x_166_);
v_res_168_ = l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0(v_x_40__boxed_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0(lean_object* v_x_180_){
_start:
{
if (lean_obj_tag(v_x_180_) == 4)
{
lean_object* v_s_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v_s_183_ = lean_ctor_get(v_x_180_, 0);
v___x_184_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_185_ = lean_string_dec_eq(v_s_183_, v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_187_ = lean_string_dec_eq(v_s_183_, v___x_186_);
if (v___x_187_ == 0)
{
goto v___jp_181_;
}
else
{
lean_object* v___x_188_; 
v___x_188_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__2));
return v___x_188_;
}
}
else
{
lean_object* v___x_189_; 
v___x_189_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__3));
return v___x_189_;
}
}
else
{
goto v___jp_181_;
}
v___jp_181_:
{
lean_object* v___x_182_; 
v___x_182_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___closed__1));
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0___boxed(lean_object* v_x_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lasm_JS_Cloudflare_instFromJSR2ListOptionsInclude___lam__0(v_x_190_);
lean_dec(v_x_190_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0(lean_object* v___f_204_, lean_object* v___f_205_, lean_object* v_d_206_){
_start:
{
lean_object* v_etagMatches_207_; lean_object* v_etagDoesNotMatch_208_; lean_object* v_uploadedBefore_209_; lean_object* v_uploadedAfter_210_; lean_object* v_secondsGranularity_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v_etagMatches_207_ = lean_ctor_get(v_d_206_, 0);
lean_inc(v_etagMatches_207_);
v_etagDoesNotMatch_208_ = lean_ctor_get(v_d_206_, 1);
lean_inc(v_etagDoesNotMatch_208_);
v_uploadedBefore_209_ = lean_ctor_get(v_d_206_, 2);
lean_inc(v_uploadedBefore_209_);
v_uploadedAfter_210_ = lean_ctor_get(v_d_206_, 3);
lean_inc(v_uploadedAfter_210_);
v_secondsGranularity_211_ = lean_ctor_get(v_d_206_, 4);
lean_inc(v_secondsGranularity_211_);
lean_dec_ref(v_d_206_);
v___x_212_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__0));
lean_inc_ref(v___f_204_);
v___x_213_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_204_, v_etagMatches_207_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__1));
v___x_216_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_204_, v_etagDoesNotMatch_208_);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__2));
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v_uploadedBefore_209_);
v___x_220_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__3));
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v_uploadedAfter_210_);
v___x_222_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__4));
v___x_223_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_205_, v_secondsGranularity_211_);
v___x_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_unsigned_to_nat(5u);
v___x_226_ = lean_mk_empty_array_with_capacity(v___x_225_);
v___x_227_ = lean_array_push(v___x_226_, v___x_214_);
v___x_228_ = lean_array_push(v___x_227_, v___x_217_);
v___x_229_ = lean_array_push(v___x_228_, v___x_219_);
v___x_230_ = lean_array_push(v___x_229_, v___x_221_);
v___x_231_ = lean_array_push(v___x_230_, v___x_224_);
v___x_232_ = l_Lasm_JS_Web_Support_fields(v___x_231_);
lean_dec_ref(v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorIdx(lean_object* v_x_239_){
_start:
{
if (lean_obj_tag(v_x_239_) == 0)
{
lean_object* v___x_240_; 
v___x_240_ = lean_unsigned_to_nat(0u);
return v___x_240_;
}
else
{
lean_object* v___x_241_; 
v___x_241_ = lean_unsigned_to_nat(1u);
return v___x_241_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorIdx___boxed(lean_object* v_x_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorIdx(v_x_242_);
lean_dec_ref(v_x_242_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___redArg(lean_object* v_t_244_, lean_object* v_k_245_){
_start:
{
if (lean_obj_tag(v_t_244_) == 0)
{
lean_object* v_value_246_; lean_object* v___x_247_; 
v_value_246_ = lean_ctor_get(v_t_244_, 0);
lean_inc_ref(v_value_246_);
lean_dec_ref_known(v_t_244_, 1);
v___x_247_ = lean_apply_1(v_k_245_, v_value_246_);
return v___x_247_;
}
else
{
lean_object* v_value_248_; lean_object* v___x_249_; 
v_value_248_ = lean_ctor_get(v_t_244_, 0);
lean_inc(v_value_248_);
lean_dec_ref_known(v_t_244_, 1);
v___x_249_ = lean_apply_1(v_k_245_, v_value_248_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim(lean_object* v_motive_250_, lean_object* v_ctorIdx_251_, lean_object* v_t_252_, lean_object* v_h_253_, lean_object* v_k_254_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___redArg(v_t_252_, v_k_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___boxed(lean_object* v_motive_256_, lean_object* v_ctorIdx_257_, lean_object* v_t_258_, lean_object* v_h_259_, lean_object* v_k_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim(v_motive_256_, v_ctorIdx_257_, v_t_258_, v_h_259_, v_k_260_);
lean_dec(v_ctorIdx_257_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_r2Conditional_elim___redArg(lean_object* v_t_262_, lean_object* v_r2Conditional_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___redArg(v_t_262_, v_r2Conditional_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_r2Conditional_elim(lean_object* v_motive_265_, lean_object* v_t_266_, lean_object* v_h_267_, lean_object* v_r2Conditional_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___redArg(v_t_266_, v_r2Conditional_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_headers_elim___redArg(lean_object* v_t_270_, lean_object* v_headers_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___redArg(v_t_270_, v_headers_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_headers_elim(lean_object* v_motive_273_, lean_object* v_t_274_, lean_object* v_h_275_, lean_object* v_headers_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l_Lasm_JS_Cloudflare_R2ConditionalOrHeaders_ctorElim___redArg(v_t_274_, v_headers_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___lam__0(lean_object* v_x_278_){
_start:
{
if (lean_obj_tag(v_x_278_) == 0)
{
lean_object* v_value_279_; lean_object* v_etagMatches_280_; lean_object* v_etagDoesNotMatch_281_; lean_object* v_uploadedBefore_282_; lean_object* v_uploadedAfter_283_; lean_object* v_secondsGranularity_284_; lean_object* v___f_285_; lean_object* v___f_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_value_279_ = lean_ctor_get(v_x_278_, 0);
lean_inc_ref(v_value_279_);
lean_dec_ref_known(v_x_278_, 1);
v_etagMatches_280_ = lean_ctor_get(v_value_279_, 0);
lean_inc(v_etagMatches_280_);
v_etagDoesNotMatch_281_ = lean_ctor_get(v_value_279_, 1);
lean_inc(v_etagDoesNotMatch_281_);
v_uploadedBefore_282_ = lean_ctor_get(v_value_279_, 2);
lean_inc(v_uploadedBefore_282_);
v_uploadedAfter_283_ = lean_ctor_get(v_value_279_, 3);
lean_inc(v_uploadedAfter_283_);
v_secondsGranularity_284_ = lean_ctor_get(v_value_279_, 4);
lean_inc(v_secondsGranularity_284_);
lean_dec_ref(v_value_279_);
v___f_285_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___f_286_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__1));
v___x_287_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__0));
v___x_288_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_285_, v_etagMatches_280_);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__1));
v___x_291_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_285_, v_etagDoesNotMatch_281_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__2));
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v_uploadedBefore_282_);
v___x_295_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__3));
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
lean_ctor_set(v___x_296_, 1, v_uploadedAfter_283_);
v___x_297_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__4));
v___x_298_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_286_, v_secondsGranularity_284_);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = lean_unsigned_to_nat(5u);
v___x_301_ = lean_mk_empty_array_with_capacity(v___x_300_);
v___x_302_ = lean_array_push(v___x_301_, v___x_289_);
v___x_303_ = lean_array_push(v___x_302_, v___x_292_);
v___x_304_ = lean_array_push(v___x_303_, v___x_294_);
v___x_305_ = lean_array_push(v___x_304_, v___x_296_);
v___x_306_ = lean_array_push(v___x_305_, v___x_299_);
v___x_307_ = l_Lasm_JS_Web_Support_fields(v___x_306_);
lean_dec_ref(v___x_306_);
return v___x_307_;
}
else
{
lean_object* v_value_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_value_308_ = lean_ctor_get(v_x_278_, 0);
lean_inc(v_value_308_);
lean_dec_ref_known(v_x_278_, 1);
v___x_309_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_310_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_310_, 0, v_value_308_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2ConditionalR2ConditionalOrHeaders___lam__0(lean_object* v_value_313_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_314_, 0, v_value_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2ConditionalOrHeaders___lam__0(lean_object* v_value_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_318_, 0, v_value_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0(lean_object* v___f_324_, lean_object* v___f_325_, lean_object* v_d_326_){
_start:
{
lean_object* v_offset_327_; lean_object* v_length_328_; lean_object* v_suffix_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v_offset_327_ = lean_ctor_get(v_d_326_, 0);
lean_inc(v_offset_327_);
v_length_328_ = lean_ctor_get(v_d_326_, 1);
lean_inc(v_length_328_);
v_suffix_329_ = lean_ctor_get(v_d_326_, 2);
lean_inc(v_suffix_329_);
lean_dec_ref(v_d_326_);
v___x_330_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
lean_inc_ref(v___f_324_);
v___x_331_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_324_, v_offset_327_);
v___x_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_330_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
v___x_333_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
v___x_334_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_325_, v_length_328_);
v___x_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
v___x_336_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
v___x_337_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_324_, v_suffix_329_);
v___x_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_336_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
v___x_339_ = lean_unsigned_to_nat(3u);
v___x_340_ = lean_mk_empty_array_with_capacity(v___x_339_);
v___x_341_ = lean_array_push(v___x_340_, v___x_332_);
v___x_342_ = lean_array_push(v___x_341_, v___x_335_);
v___x_343_ = lean_array_push(v___x_342_, v___x_338_);
v___x_344_ = l_Lasm_JS_Web_Support_fields(v___x_343_);
lean_dec_ref(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0(lean_object* v___x_351_, lean_object* v___x_352_, lean_object* v_d_353_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
lean_inc_ref(v___x_351_);
v___x_355_ = l_Lasm_JS_readField___redArg(v___x_351_, v_d_353_, v___x_354_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
v_a_356_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_355_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_355_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v_a_364_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_a_364_);
lean_dec_ref_known(v___x_355_, 1);
v___x_365_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
v___x_366_ = l_Lasm_JS_readField___redArg(v___x_352_, v_d_353_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
lean_dec(v_a_364_);
lean_dec_ref(v___x_351_);
v_a_367_ = lean_ctor_get(v___x_366_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_366_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_a_375_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_375_);
lean_dec_ref_known(v___x_366_, 1);
v___x_376_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
v___x_377_ = l_Lasm_JS_readField___redArg(v___x_351_, v_d_353_, v___x_376_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
lean_dec(v_a_375_);
lean_dec(v_a_364_);
v_a_378_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_377_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_377_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
else
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_394_; 
v_a_386_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_394_ == 0)
{
v___x_388_ = v___x_377_;
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_377_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; lean_object* v___x_392_; 
v___x_390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_390_, 0, v_a_364_);
lean_ctor_set(v___x_390_, 1, v_a_375_);
lean_ctor_set(v___x_390_, 2, v_a_386_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_390_);
v___x_392_ = v___x_388_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0___boxed(lean_object* v___x_395_, lean_object* v___x_396_, lean_object* v_d_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0(v___x_395_, v___x_396_, v_d_397_);
lean_dec(v_d_397_);
return v_res_398_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = l_Lasm_JS_instFromJSFloat;
v___x_400_ = l_Lasm_JS_instFromJSOption___redArg(v___x_399_);
return v___x_400_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = l_Lasm_JS_instFromJSNat;
v___x_402_ = l_Lasm_JS_instFromJSOption___redArg(v___x_401_);
return v___x_402_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___f_405_; 
v___x_403_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1, &l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1);
v___x_404_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0);
v___f_405_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0___boxed), 3, 2);
lean_closure_set(v___f_405_, 0, v___x_404_);
lean_closure_set(v___f_405_, 1, v___x_403_);
return v___f_405_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__4(void){
_start:
{
uint8_t v___x_407_; lean_object* v___x_408_; lean_object* v___f_409_; lean_object* v___x_410_; 
v___x_407_ = 0;
v___x_408_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3));
v___f_409_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2, &l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2);
v___x_410_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_410_, 0, v___f_409_);
lean_ctor_set(v___x_410_, 1, v___x_408_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*2, v___x_407_);
return v___x_410_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range(void){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__4, &l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__4_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__4);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorIdx(lean_object* v_x_412_){
_start:
{
if (lean_obj_tag(v_x_412_) == 0)
{
lean_object* v___x_413_; 
v___x_413_ = lean_unsigned_to_nat(0u);
return v___x_413_;
}
else
{
lean_object* v___x_414_; 
v___x_414_ = lean_unsigned_to_nat(1u);
return v___x_414_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorIdx___boxed(lean_object* v_x_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorIdx(v_x_415_);
lean_dec_ref(v_x_415_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(lean_object* v_t_417_, lean_object* v_k_418_){
_start:
{
if (lean_obj_tag(v_t_417_) == 0)
{
lean_object* v_value_419_; lean_object* v___x_420_; 
v_value_419_ = lean_ctor_get(v_t_417_, 0);
lean_inc_ref(v_value_419_);
lean_dec_ref_known(v_t_417_, 1);
v___x_420_ = lean_apply_1(v_k_418_, v_value_419_);
return v___x_420_;
}
else
{
lean_object* v_value_421_; lean_object* v___x_422_; 
v_value_421_ = lean_ctor_get(v_t_417_, 0);
lean_inc(v_value_421_);
lean_dec_ref_known(v_t_417_, 1);
v___x_422_ = lean_apply_1(v_k_418_, v_value_421_);
return v___x_422_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim(lean_object* v_motive_423_, lean_object* v_ctorIdx_424_, lean_object* v_t_425_, lean_object* v_h_426_, lean_object* v_k_427_){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_425_, v_k_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___boxed(lean_object* v_motive_429_, lean_object* v_ctorIdx_430_, lean_object* v_t_431_, lean_object* v_h_432_, lean_object* v_k_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim(v_motive_429_, v_ctorIdx_430_, v_t_431_, v_h_432_, v_k_433_);
lean_dec(v_ctorIdx_430_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_r2Range_elim___redArg(lean_object* v_t_435_, lean_object* v_r2Range_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_435_, v_r2Range_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_r2Range_elim(lean_object* v_motive_438_, lean_object* v_t_439_, lean_object* v_h_440_, lean_object* v_r2Range_441_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_439_, v_r2Range_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_headers_elim___redArg(lean_object* v_t_443_, lean_object* v_headers_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_443_, v_headers_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_headers_elim(lean_object* v_motive_446_, lean_object* v_t_447_, lean_object* v_h_448_, lean_object* v_headers_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_447_, v_headers_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___lam__0(lean_object* v_x_451_){
_start:
{
if (lean_obj_tag(v_x_451_) == 0)
{
lean_object* v_value_452_; lean_object* v_offset_453_; lean_object* v_length_454_; lean_object* v_suffix_455_; lean_object* v___f_456_; lean_object* v___f_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_value_452_ = lean_ctor_get(v_x_451_, 0);
lean_inc_ref(v_value_452_);
lean_dec_ref_known(v_x_451_, 1);
v_offset_453_ = lean_ctor_get(v_value_452_, 0);
lean_inc(v_offset_453_);
v_length_454_ = lean_ctor_get(v_value_452_, 1);
lean_inc(v_length_454_);
v_suffix_455_ = lean_ctor_get(v_value_452_, 2);
lean_inc(v_suffix_455_);
lean_dec_ref(v_value_452_);
v___f_456_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0));
v___f_457_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1));
v___x_458_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
v___x_459_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_456_, v_offset_453_);
v___x_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set(v___x_460_, 1, v___x_459_);
v___x_461_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
v___x_462_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_457_, v_length_454_);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_461_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
v___x_465_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_456_, v_suffix_455_);
v___x_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_464_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = lean_unsigned_to_nat(3u);
v___x_468_ = lean_mk_empty_array_with_capacity(v___x_467_);
v___x_469_ = lean_array_push(v___x_468_, v___x_460_);
v___x_470_ = lean_array_push(v___x_469_, v___x_463_);
v___x_471_ = lean_array_push(v___x_470_, v___x_466_);
v___x_472_ = l_Lasm_JS_Web_Support_fields(v___x_471_);
lean_dec_ref(v___x_471_);
return v___x_472_;
}
else
{
lean_object* v_value_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v_value_473_ = lean_ctor_get(v_x_451_, 0);
lean_inc(v_value_473_);
lean_dec_ref_known(v_x_451_, 1);
v___x_474_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_475_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_475_, 0, v_value_473_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
return v___x_475_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders___lam__0(lean_object* v_value_478_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v_value_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders___lam__0(lean_object* v_value_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v_value_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorIdx(lean_object* v_x_486_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v___x_487_; 
v___x_487_ = lean_unsigned_to_nat(0u);
return v___x_487_;
}
else
{
lean_object* v___x_488_; 
v___x_488_ = lean_unsigned_to_nat(1u);
return v___x_488_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorIdx___boxed(lean_object* v_x_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorIdx(v_x_489_);
lean_dec_ref(v_x_489_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(lean_object* v_t_491_, lean_object* v_k_492_){
_start:
{
lean_object* v_value_493_; lean_object* v___x_494_; 
v_value_493_ = lean_ctor_get(v_t_491_, 0);
lean_inc_ref(v_value_493_);
lean_dec_ref(v_t_491_);
v___x_494_ = lean_apply_1(v_k_492_, v_value_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim(lean_object* v_motive_495_, lean_object* v_ctorIdx_496_, lean_object* v_t_497_, lean_object* v_h_498_, lean_object* v_k_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_497_, v_k_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___boxed(lean_object* v_motive_501_, lean_object* v_ctorIdx_502_, lean_object* v_t_503_, lean_object* v_h_504_, lean_object* v_k_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim(v_motive_501_, v_ctorIdx_502_, v_t_503_, v_h_504_, v_k_505_);
lean_dec(v_ctorIdx_502_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_arrayBuffer_elim___redArg(lean_object* v_t_507_, lean_object* v_arrayBuffer_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_507_, v_arrayBuffer_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_arrayBuffer_elim(lean_object* v_motive_510_, lean_object* v_t_511_, lean_object* v_h_512_, lean_object* v_arrayBuffer_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_511_, v_arrayBuffer_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_domString_elim___redArg(lean_object* v_t_515_, lean_object* v_domString_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_515_, v_domString_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_domString_elim(lean_object* v_motive_518_, lean_object* v_t_519_, lean_object* v_h_520_, lean_object* v_domString_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_519_, v_domString_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___lam__0(lean_object* v_x_523_){
_start:
{
if (lean_obj_tag(v_x_523_) == 0)
{
lean_object* v_value_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
v_value_524_ = lean_ctor_get(v_x_523_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_x_523_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v_x_523_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_value_524_);
lean_dec(v_x_523_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
lean_ctor_set_tag(v___x_526_, 6);
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_value_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
else
{
lean_object* v_value_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_value_532_ = lean_ctor_get(v_x_523_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v_x_523_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v_x_523_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_value_532_);
lean_dec(v_x_523_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 4);
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_value_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString___lam__0(lean_object* v_value_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v_value_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString___lam__0(lean_object* v_value_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v_value_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0(lean_object* v___f_553_, lean_object* v___f_554_, lean_object* v___f_555_, lean_object* v_d_556_){
_start:
{
lean_object* v_onlyIf_557_; lean_object* v_range_558_; lean_object* v_ssecKey_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v_onlyIf_557_ = lean_ctor_get(v_d_556_, 0);
lean_inc(v_onlyIf_557_);
v_range_558_ = lean_ctor_get(v_d_556_, 1);
lean_inc(v_range_558_);
v_ssecKey_559_ = lean_ctor_get(v_d_556_, 2);
lean_inc(v_ssecKey_559_);
lean_dec_ref(v_d_556_);
v___x_560_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0));
v___x_561_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_553_, v_onlyIf_557_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_560_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1));
v___x_564_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_554_, v_range_558_);
v___x_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_563_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
v___x_566_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_567_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_555_, v_ssecKey_559_);
v___x_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_566_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
v___x_569_ = lean_unsigned_to_nat(3u);
v___x_570_ = lean_mk_empty_array_with_capacity(v___x_569_);
v___x_571_ = lean_array_push(v___x_570_, v___x_562_);
v___x_572_ = lean_array_push(v___x_571_, v___x_565_);
v___x_573_ = lean_array_push(v___x_572_, v___x_568_);
v___x_574_ = l_Lasm_JS_Web_Support_fields(v___x_573_);
lean_dec_ref(v___x_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorIdx(lean_object* v_x_580_){
_start:
{
switch(lean_obj_tag(v_x_580_))
{
case 0:
{
lean_object* v___x_581_; 
v___x_581_ = lean_unsigned_to_nat(0u);
return v___x_581_;
}
case 1:
{
lean_object* v___x_582_; 
v___x_582_ = lean_unsigned_to_nat(1u);
return v___x_582_;
}
case 2:
{
lean_object* v___x_583_; 
v___x_583_ = lean_unsigned_to_nat(2u);
return v___x_583_;
}
default: 
{
lean_object* v___x_584_; 
v___x_584_ = lean_unsigned_to_nat(3u);
return v___x_584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorIdx___boxed(lean_object* v_x_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorIdx(v_x_585_);
lean_dec_ref(v_x_585_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(lean_object* v_t_587_, lean_object* v_k_588_){
_start:
{
switch(lean_obj_tag(v_t_587_))
{
case 1:
{
lean_object* v_value_589_; lean_object* v___x_590_; 
v_value_589_ = lean_ctor_get(v_t_587_, 0);
lean_inc_ref(v_value_589_);
lean_dec_ref_known(v_t_587_, 1);
v___x_590_ = lean_apply_1(v_k_588_, v_value_589_);
return v___x_590_;
}
case 3:
{
lean_object* v_value_591_; lean_object* v___x_592_; 
v_value_591_ = lean_ctor_get(v_t_587_, 0);
lean_inc_ref(v_value_591_);
lean_dec_ref_known(v_t_587_, 1);
v___x_592_ = lean_apply_1(v_k_588_, v_value_591_);
return v___x_592_;
}
default: 
{
lean_object* v_value_593_; lean_object* v___x_594_; 
v_value_593_ = lean_ctor_get(v_t_587_, 0);
lean_inc(v_value_593_);
lean_dec_ref(v_t_587_);
v___x_594_ = lean_apply_1(v_k_588_, v_value_593_);
return v___x_594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim(lean_object* v_motive_595_, lean_object* v_ctorIdx_596_, lean_object* v_t_597_, lean_object* v_h_598_, lean_object* v_k_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_597_, v_k_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___boxed(lean_object* v_motive_601_, lean_object* v_ctorIdx_602_, lean_object* v_t_603_, lean_object* v_h_604_, lean_object* v_k_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim(v_motive_601_, v_ctorIdx_602_, v_t_603_, v_h_604_, v_k_605_);
lean_dec(v_ctorIdx_602_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_readableStream_elim___redArg(lean_object* v_t_607_, lean_object* v_readableStream_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_607_, v_readableStream_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_readableStream_elim(lean_object* v_motive_610_, lean_object* v_t_611_, lean_object* v_h_612_, lean_object* v_readableStream_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_611_, v_readableStream_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_domString_elim___redArg(lean_object* v_t_615_, lean_object* v_domString_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_615_, v_domString_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_domString_elim(lean_object* v_motive_618_, lean_object* v_t_619_, lean_object* v_h_620_, lean_object* v_domString_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_619_, v_domString_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_blob_elim___redArg(lean_object* v_t_623_, lean_object* v_blob_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_623_, v_blob_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_blob_elim(lean_object* v_motive_626_, lean_object* v_t_627_, lean_object* v_h_628_, lean_object* v_blob_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_627_, v_blob_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_bufferSource_elim___redArg(lean_object* v_t_631_, lean_object* v_bufferSource_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_631_, v_bufferSource_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_bufferSource_elim(lean_object* v_motive_634_, lean_object* v_t_635_, lean_object* v_h_636_, lean_object* v_bufferSource_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_635_, v_bufferSource_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_x_639_){
_start:
{
switch(lean_obj_tag(v_x_639_))
{
case 1:
{
lean_object* v_value_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
v_value_640_ = lean_ctor_get(v_x_639_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v_x_639_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v_x_639_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_value_640_);
lean_dec(v_x_639_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
lean_ctor_set_tag(v___x_642_, 4);
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_value_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
case 3:
{
lean_object* v_value_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
v_value_648_ = lean_ctor_get(v_x_639_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v_x_639_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v_x_639_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_value_648_);
lean_dec(v_x_639_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
lean_ctor_set_tag(v___x_650_, 6);
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_value_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
default: 
{
lean_object* v_value_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_value_656_ = lean_ctor_get(v_x_639_, 0);
lean_inc(v_value_656_);
lean_dec_ref(v_x_639_);
v___x_657_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_658_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_658_, 0, v_value_656_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
return v___x_658_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_value_661_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_662_, 0, v_value_661_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_value_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_666_, 0, v_value_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_value_669_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_670_, 0, v_value_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_value_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_674_, 0, v_value_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0(lean_object* v___f_683_, lean_object* v_d_684_){
_start:
{
lean_object* v_contentType_685_; lean_object* v_contentLanguage_686_; lean_object* v_contentDisposition_687_; lean_object* v_contentEncoding_688_; lean_object* v_cacheControl_689_; lean_object* v_cacheExpiry_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v_contentType_685_ = lean_ctor_get(v_d_684_, 0);
lean_inc(v_contentType_685_);
v_contentLanguage_686_ = lean_ctor_get(v_d_684_, 1);
lean_inc(v_contentLanguage_686_);
v_contentDisposition_687_ = lean_ctor_get(v_d_684_, 2);
lean_inc(v_contentDisposition_687_);
v_contentEncoding_688_ = lean_ctor_get(v_d_684_, 3);
lean_inc(v_contentEncoding_688_);
v_cacheControl_689_ = lean_ctor_get(v_d_684_, 4);
lean_inc(v_cacheControl_689_);
v_cacheExpiry_690_ = lean_ctor_get(v_d_684_, 5);
lean_inc(v_cacheExpiry_690_);
lean_dec_ref(v_d_684_);
v___x_691_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
lean_inc_ref_n(v___f_683_, 4);
v___x_692_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_683_, v_contentType_685_);
v___x_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_691_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
v___x_695_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_683_, v_contentLanguage_686_);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_694_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
v___x_698_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_683_, v_contentDisposition_687_);
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_697_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___x_700_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
v___x_701_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_683_, v_contentEncoding_688_);
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_700_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
v___x_704_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_683_, v_cacheControl_689_);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
lean_ctor_set(v___x_707_, 1, v_cacheExpiry_690_);
v___x_708_ = lean_unsigned_to_nat(6u);
v___x_709_ = lean_mk_empty_array_with_capacity(v___x_708_);
v___x_710_ = lean_array_push(v___x_709_, v___x_693_);
v___x_711_ = lean_array_push(v___x_710_, v___x_696_);
v___x_712_ = lean_array_push(v___x_711_, v___x_699_);
v___x_713_ = lean_array_push(v___x_712_, v___x_702_);
v___x_714_ = lean_array_push(v___x_713_, v___x_705_);
v___x_715_ = lean_array_push(v___x_714_, v___x_707_);
v___x_716_ = l_Lasm_JS_Web_Support_fields(v___x_715_);
lean_dec_ref(v___x_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0(lean_object* v___x_720_, lean_object* v___x_721_, lean_object* v_d_722_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
lean_inc_ref(v___x_720_);
v___x_724_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_722_, v___x_723_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
lean_dec_ref(v___x_721_);
lean_dec_ref(v___x_720_);
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_a_733_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_724_, 1);
v___x_734_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
lean_inc_ref(v___x_720_);
v___x_735_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_722_, v___x_734_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
lean_dec(v_a_733_);
lean_dec_ref(v___x_721_);
lean_dec_ref(v___x_720_);
v_a_736_ = lean_ctor_get(v___x_735_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v___x_735_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___x_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_a_744_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_735_, 1);
v___x_745_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
lean_inc_ref(v___x_720_);
v___x_746_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_722_, v___x_745_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec_ref(v___x_721_);
lean_dec_ref(v___x_720_);
v_a_747_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_746_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_746_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v_a_755_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_755_);
lean_dec_ref_known(v___x_746_, 1);
v___x_756_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
lean_inc_ref(v___x_720_);
v___x_757_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_722_, v___x_756_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec_ref(v___x_721_);
lean_dec_ref(v___x_720_);
v_a_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_a_766_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_757_, 1);
v___x_767_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
v___x_768_ = l_Lasm_JS_readField___redArg(v___x_720_, v_d_722_, v___x_767_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
lean_dec_ref(v___x_721_);
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
lean_object* v_a_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_a_777_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_768_, 1);
v___x_778_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
v___x_779_ = l_Lasm_JS_readField___redArg(v___x_721_, v_d_722_, v___x_778_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_a_777_);
lean_dec(v_a_766_);
lean_dec(v_a_755_);
lean_dec(v_a_744_);
lean_dec(v_a_733_);
v_a_780_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_779_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_779_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_796_; 
v_a_788_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_796_ == 0)
{
v___x_790_ = v___x_779_;
v_isShared_791_ = v_isSharedCheck_796_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_779_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_796_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_792_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_792_, 0, v_a_733_);
lean_ctor_set(v___x_792_, 1, v_a_744_);
lean_ctor_set(v___x_792_, 2, v_a_755_);
lean_ctor_set(v___x_792_, 3, v_a_766_);
lean_ctor_set(v___x_792_, 4, v_a_777_);
lean_ctor_set(v___x_792_, 5, v_a_788_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 0, v___x_792_);
v___x_794_ = v___x_790_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0___boxed(lean_object* v___x_797_, lean_object* v___x_798_, lean_object* v_d_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0(v___x_797_, v___x_798_, v_d_799_);
lean_dec(v_d_799_);
return v_res_800_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = l_Lasm_JS_instFromJSString;
v___x_802_ = l_Lasm_JS_instFromJSOption___redArg(v___x_801_);
return v___x_802_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1(void){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___f_805_; 
v___x_803_ = l_Lasm_JS_instFromJSData;
v___x_804_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0);
v___f_805_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0___boxed), 3, 2);
lean_closure_set(v___f_805_, 0, v___x_804_);
lean_closure_set(v___f_805_, 1, v___x_803_);
return v___f_805_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3(void){
_start:
{
uint8_t v___x_807_; lean_object* v___x_808_; lean_object* v___f_809_; lean_object* v___x_810_; 
v___x_807_ = 0;
v___x_808_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__2));
v___f_809_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1);
v___x_810_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_810_, 0, v___f_809_);
lean_ctor_set(v___x_810_, 1, v___x_808_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*2, v___x_807_);
return v___x_810_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata(void){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorIdx(lean_object* v_x_812_){
_start:
{
if (lean_obj_tag(v_x_812_) == 0)
{
lean_object* v___x_813_; 
v___x_813_ = lean_unsigned_to_nat(0u);
return v___x_813_;
}
else
{
lean_object* v___x_814_; 
v___x_814_ = lean_unsigned_to_nat(1u);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorIdx___boxed(lean_object* v_x_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorIdx(v_x_815_);
lean_dec_ref(v_x_815_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(lean_object* v_t_817_, lean_object* v_k_818_){
_start:
{
if (lean_obj_tag(v_t_817_) == 0)
{
lean_object* v_value_819_; lean_object* v___x_820_; 
v_value_819_ = lean_ctor_get(v_t_817_, 0);
lean_inc_ref(v_value_819_);
lean_dec_ref_known(v_t_817_, 1);
v___x_820_ = lean_apply_1(v_k_818_, v_value_819_);
return v___x_820_;
}
else
{
lean_object* v_value_821_; lean_object* v___x_822_; 
v_value_821_ = lean_ctor_get(v_t_817_, 0);
lean_inc(v_value_821_);
lean_dec_ref_known(v_t_817_, 1);
v___x_822_ = lean_apply_1(v_k_818_, v_value_821_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim(lean_object* v_motive_823_, lean_object* v_ctorIdx_824_, lean_object* v_t_825_, lean_object* v_h_826_, lean_object* v_k_827_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_825_, v_k_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___boxed(lean_object* v_motive_829_, lean_object* v_ctorIdx_830_, lean_object* v_t_831_, lean_object* v_h_832_, lean_object* v_k_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim(v_motive_829_, v_ctorIdx_830_, v_t_831_, v_h_832_, v_k_833_);
lean_dec(v_ctorIdx_830_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_r2HTTPMetadata_elim___redArg(lean_object* v_t_835_, lean_object* v_r2HTTPMetadata_836_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_835_, v_r2HTTPMetadata_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_r2HTTPMetadata_elim(lean_object* v_motive_838_, lean_object* v_t_839_, lean_object* v_h_840_, lean_object* v_r2HTTPMetadata_841_){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_839_, v_r2HTTPMetadata_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_headers_elim___redArg(lean_object* v_t_843_, lean_object* v_headers_844_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_843_, v_headers_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_headers_elim(lean_object* v_motive_846_, lean_object* v_t_847_, lean_object* v_h_848_, lean_object* v_headers_849_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_847_, v_headers_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___lam__0(lean_object* v_x_851_){
_start:
{
if (lean_obj_tag(v_x_851_) == 0)
{
lean_object* v_value_852_; lean_object* v_contentType_853_; lean_object* v_contentLanguage_854_; lean_object* v_contentDisposition_855_; lean_object* v_contentEncoding_856_; lean_object* v_cacheControl_857_; lean_object* v_cacheExpiry_858_; lean_object* v___f_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v_value_852_ = lean_ctor_get(v_x_851_, 0);
lean_inc_ref(v_value_852_);
lean_dec_ref_known(v_x_851_, 1);
v_contentType_853_ = lean_ctor_get(v_value_852_, 0);
lean_inc(v_contentType_853_);
v_contentLanguage_854_ = lean_ctor_get(v_value_852_, 1);
lean_inc(v_contentLanguage_854_);
v_contentDisposition_855_ = lean_ctor_get(v_value_852_, 2);
lean_inc(v_contentDisposition_855_);
v_contentEncoding_856_ = lean_ctor_get(v_value_852_, 3);
lean_inc(v_contentEncoding_856_);
v_cacheControl_857_ = lean_ctor_get(v_value_852_, 4);
lean_inc(v_cacheControl_857_);
v_cacheExpiry_858_ = lean_ctor_get(v_value_852_, 5);
lean_inc(v_cacheExpiry_858_);
lean_dec_ref(v_value_852_);
v___f_859_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___x_860_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
v___x_861_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_859_, v_contentType_853_);
v___x_862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_860_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
v___x_864_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_859_, v_contentLanguage_854_);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
v___x_867_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_859_, v_contentDisposition_855_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_866_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
v___x_870_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_859_, v_contentEncoding_856_);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_869_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
v___x_873_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_859_, v_cacheControl_857_);
v___x_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_872_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v_cacheExpiry_858_);
v___x_877_ = lean_unsigned_to_nat(6u);
v___x_878_ = lean_mk_empty_array_with_capacity(v___x_877_);
v___x_879_ = lean_array_push(v___x_878_, v___x_862_);
v___x_880_ = lean_array_push(v___x_879_, v___x_865_);
v___x_881_ = lean_array_push(v___x_880_, v___x_868_);
v___x_882_ = lean_array_push(v___x_881_, v___x_871_);
v___x_883_ = lean_array_push(v___x_882_, v___x_874_);
v___x_884_ = lean_array_push(v___x_883_, v___x_876_);
v___x_885_ = l_Lasm_JS_Web_Support_fields(v___x_884_);
lean_dec_ref(v___x_884_);
return v___x_885_;
}
else
{
lean_object* v_value_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v_value_886_ = lean_ctor_get(v_x_851_, 0);
lean_inc(v_value_886_);
lean_dec_ref_known(v_x_851_, 1);
v___x_887_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_888_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_888_, 0, v_value_886_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
return v___x_888_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders___lam__0(lean_object* v_value_891_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v_value_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders___lam__0(lean_object* v_value_895_){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_896_, 0, v_value_895_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorIdx(lean_object* v_x_899_){
_start:
{
if (lean_obj_tag(v_x_899_) == 0)
{
lean_object* v___x_900_; 
v___x_900_ = lean_unsigned_to_nat(0u);
return v___x_900_;
}
else
{
lean_object* v___x_901_; 
v___x_901_ = lean_unsigned_to_nat(1u);
return v___x_901_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorIdx___boxed(lean_object* v_x_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorIdx(v_x_902_);
lean_dec_ref(v_x_902_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(lean_object* v_t_904_, lean_object* v_k_905_){
_start:
{
lean_object* v_value_906_; lean_object* v___x_907_; 
v_value_906_ = lean_ctor_get(v_t_904_, 0);
lean_inc_ref(v_value_906_);
lean_dec_ref(v_t_904_);
v___x_907_ = lean_apply_1(v_k_905_, v_value_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim(lean_object* v_motive_908_, lean_object* v_ctorIdx_909_, lean_object* v_t_910_, lean_object* v_h_911_, lean_object* v_k_912_){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_910_, v_k_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___boxed(lean_object* v_motive_914_, lean_object* v_ctorIdx_915_, lean_object* v_t_916_, lean_object* v_h_917_, lean_object* v_k_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim(v_motive_914_, v_ctorIdx_915_, v_t_916_, v_h_917_, v_k_918_);
lean_dec(v_ctorIdx_915_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_domString_elim___redArg(lean_object* v_t_920_, lean_object* v_domString_921_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_920_, v_domString_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_domString_elim(lean_object* v_motive_923_, lean_object* v_t_924_, lean_object* v_h_925_, lean_object* v_domString_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_924_, v_domString_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_bufferSource_elim___redArg(lean_object* v_t_928_, lean_object* v_bufferSource_929_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_928_, v_bufferSource_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_bufferSource_elim(lean_object* v_motive_931_, lean_object* v_t_932_, lean_object* v_h_933_, lean_object* v_bufferSource_934_){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_932_, v_bufferSource_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___lam__0(lean_object* v_x_936_){
_start:
{
if (lean_obj_tag(v_x_936_) == 0)
{
lean_object* v_value_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
v_value_937_ = lean_ctor_get(v_x_936_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v_x_936_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v_x_936_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_value_937_);
lean_dec(v_x_936_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set_tag(v___x_939_, 4);
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_value_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
else
{
lean_object* v_value_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
v_value_945_ = lean_ctor_get(v_x_936_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v_x_936_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v_x_936_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_value_945_);
lean_dec(v_x_936_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
lean_ctor_set_tag(v___x_947_, 6);
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_value_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource___lam__0(lean_object* v_value_955_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v_value_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource___lam__0(lean_object* v_value_959_){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_960_, 0, v_value_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0(lean_object* v___f_969_, lean_object* v___f_970_, lean_object* v___x_971_, lean_object* v___f_972_, lean_object* v___f_973_, lean_object* v___f_974_, lean_object* v_d_975_){
_start:
{
lean_object* v_onlyIf_976_; lean_object* v_httpMetadata_977_; lean_object* v_customMetadata_978_; lean_object* v_md5_979_; lean_object* v_sha1_980_; lean_object* v_sha256_981_; lean_object* v_sha384_982_; lean_object* v_sha512_983_; lean_object* v_storageClass_984_; lean_object* v_ssecKey_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v_onlyIf_976_ = lean_ctor_get(v_d_975_, 0);
lean_inc(v_onlyIf_976_);
v_httpMetadata_977_ = lean_ctor_get(v_d_975_, 1);
lean_inc(v_httpMetadata_977_);
v_customMetadata_978_ = lean_ctor_get(v_d_975_, 2);
lean_inc(v_customMetadata_978_);
v_md5_979_ = lean_ctor_get(v_d_975_, 3);
lean_inc(v_md5_979_);
v_sha1_980_ = lean_ctor_get(v_d_975_, 4);
lean_inc(v_sha1_980_);
v_sha256_981_ = lean_ctor_get(v_d_975_, 5);
lean_inc(v_sha256_981_);
v_sha384_982_ = lean_ctor_get(v_d_975_, 6);
lean_inc(v_sha384_982_);
v_sha512_983_ = lean_ctor_get(v_d_975_, 7);
lean_inc(v_sha512_983_);
v_storageClass_984_ = lean_ctor_get(v_d_975_, 8);
lean_inc(v_storageClass_984_);
v_ssecKey_985_ = lean_ctor_get(v_d_975_, 9);
lean_inc(v_ssecKey_985_);
lean_dec_ref(v_d_975_);
v___x_986_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0));
v___x_987_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_969_, v_onlyIf_976_);
v___x_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_990_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_970_, v_httpMetadata_977_);
v___x_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_993_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_971_, v_customMetadata_978_);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_972_, 4);
v___x_996_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_972_, v_md5_979_);
v___x_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
v___x_999_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_972_, v_sha1_980_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
v___x_1002_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_972_, v_sha256_981_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
v___x_1005_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_972_, v_sha384_982_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
v___x_1008_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_972_, v_sha512_983_);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1007_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_1011_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_973_, v_storageClass_984_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1010_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_1014_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_974_, v_ssecKey_985_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = lean_unsigned_to_nat(10u);
v___x_1017_ = lean_mk_empty_array_with_capacity(v___x_1016_);
v___x_1018_ = lean_array_push(v___x_1017_, v___x_988_);
v___x_1019_ = lean_array_push(v___x_1018_, v___x_991_);
v___x_1020_ = lean_array_push(v___x_1019_, v___x_994_);
v___x_1021_ = lean_array_push(v___x_1020_, v___x_997_);
v___x_1022_ = lean_array_push(v___x_1021_, v___x_1000_);
v___x_1023_ = lean_array_push(v___x_1022_, v___x_1003_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_1006_);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_1009_);
v___x_1026_ = lean_array_push(v___x_1025_, v___x_1012_);
v___x_1027_ = lean_array_push(v___x_1026_, v___x_1015_);
v___x_1028_ = l_Lasm_JS_Web_Support_fields(v___x_1027_);
lean_dec_ref(v___x_1027_);
return v___x_1028_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0(void){
_start:
{
lean_object* v___f_1029_; lean_object* v___x_1030_; 
v___f_1029_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___x_1030_ = l_Lasm_JS_Web_instToJSRecord___redArg(v___f_1029_);
return v___x_1030_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1(void){
_start:
{
lean_object* v___f_1031_; lean_object* v___f_1032_; lean_object* v___f_1033_; lean_object* v___x_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; 
v___f_1031_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0));
v___f_1032_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___f_1033_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___closed__0));
v___x_1034_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0, &l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0_once, _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0);
v___f_1035_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___closed__0));
v___f_1036_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___closed__0));
v___f_1037_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0), 7, 6);
lean_closure_set(v___f_1037_, 0, v___f_1036_);
lean_closure_set(v___f_1037_, 1, v___f_1035_);
lean_closure_set(v___f_1037_, 2, v___x_1034_);
lean_closure_set(v___f_1037_, 3, v___f_1033_);
lean_closure_set(v___f_1037_, 4, v___f_1032_);
lean_closure_set(v___f_1037_, 5, v___f_1031_);
return v___f_1037_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions(void){
_start:
{
lean_object* v___f_1038_; 
v___f_1038_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1, &l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1_once, _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1);
return v___f_1038_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___lam__0(lean_object* v___f_1039_, lean_object* v___x_1040_, lean_object* v___f_1041_, lean_object* v___f_1042_, lean_object* v_d_1043_){
_start:
{
lean_object* v_httpMetadata_1044_; lean_object* v_customMetadata_1045_; lean_object* v_storageClass_1046_; lean_object* v_ssecKey_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_httpMetadata_1044_ = lean_ctor_get(v_d_1043_, 0);
lean_inc(v_httpMetadata_1044_);
v_customMetadata_1045_ = lean_ctor_get(v_d_1043_, 1);
lean_inc(v_customMetadata_1045_);
v_storageClass_1046_ = lean_ctor_get(v_d_1043_, 2);
lean_inc(v_storageClass_1046_);
v_ssecKey_1047_ = lean_ctor_get(v_d_1043_, 3);
lean_inc(v_ssecKey_1047_);
lean_dec_ref(v_d_1043_);
v___x_1048_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_1049_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1039_, v_httpMetadata_1044_);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_1052_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1040_, v_customMetadata_1045_);
v___x_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1051_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_1055_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1041_, v_storageClass_1046_);
v___x_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_1058_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1042_, v_ssecKey_1047_);
v___x_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = lean_unsigned_to_nat(4u);
v___x_1061_ = lean_mk_empty_array_with_capacity(v___x_1060_);
v___x_1062_ = lean_array_push(v___x_1061_, v___x_1050_);
v___x_1063_ = lean_array_push(v___x_1062_, v___x_1053_);
v___x_1064_ = lean_array_push(v___x_1063_, v___x_1056_);
v___x_1065_ = lean_array_push(v___x_1064_, v___x_1059_);
v___x_1066_ = l_Lasm_JS_Web_Support_fields(v___x_1065_);
lean_dec_ref(v___x_1065_);
return v___x_1066_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0(void){
_start:
{
lean_object* v___f_1067_; lean_object* v___f_1068_; lean_object* v___x_1069_; lean_object* v___f_1070_; lean_object* v___f_1071_; 
v___f_1067_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0));
v___f_1068_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___x_1069_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0, &l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0_once, _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0);
v___f_1070_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___closed__0));
v___f_1071_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___lam__0), 5, 4);
lean_closure_set(v___f_1071_, 0, v___f_1070_);
lean_closure_set(v___f_1071_, 1, v___x_1069_);
lean_closure_set(v___f_1071_, 2, v___f_1068_);
lean_closure_set(v___f_1071_, 3, v___f_1067_);
return v___f_1071_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions(void){
_start:
{
lean_object* v___f_1072_; 
v___f_1072_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0, &l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0_once, _init_l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0);
return v___f_1072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object* v_x_1073_){
_start:
{
if (lean_obj_tag(v_x_1073_) == 0)
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_unsigned_to_nat(0u);
return v___x_1074_;
}
else
{
lean_object* v___x_1075_; 
v___x_1075_ = lean_unsigned_to_nat(1u);
return v___x_1075_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object* v_x_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorIdx(v_x_1076_);
lean_dec_ref(v_x_1076_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object* v_t_1078_, lean_object* v_k_1079_){
_start:
{
lean_object* v_value_1080_; lean_object* v___x_1081_; 
v_value_1080_ = lean_ctor_get(v_t_1078_, 0);
lean_inc_ref(v_value_1080_);
lean_dec_ref(v_t_1078_);
v___x_1081_ = lean_apply_1(v_k_1079_, v_value_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim(lean_object* v_motive_1082_, lean_object* v_ctorIdx_1083_, lean_object* v_t_1084_, lean_object* v_h_1085_, lean_object* v_k_1086_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1084_, v_k_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object* v_motive_1088_, lean_object* v_ctorIdx_1089_, lean_object* v_t_1090_, lean_object* v_h_1091_, lean_object* v_k_1092_){
_start:
{
lean_object* v_res_1093_; 
v_res_1093_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim(v_motive_1088_, v_ctorIdx_1089_, v_t_1090_, v_h_1091_, v_k_1092_);
lean_dec(v_ctorIdx_1089_);
return v_res_1093_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object* v_t_1094_, lean_object* v_domString_1095_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1094_, v_domString_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_domString_elim(lean_object* v_motive_1097_, lean_object* v_t_1098_, lean_object* v_h_1099_, lean_object* v_domString_1100_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1098_, v_domString_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object* v_t_1102_, lean_object* v_sequence_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1102_, v_sequence_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object* v_motive_1105_, lean_object* v_t_1106_, lean_object* v_h_1107_, lean_object* v_sequence_1108_){
_start:
{
lean_object* v___x_1109_; 
v___x_1109_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1106_, v_sequence_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_x_1110_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1111_, 0, v_x_1110_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object* v___f_1131_, lean_object* v_x_1132_){
_start:
{
if (lean_obj_tag(v_x_1132_) == 0)
{
lean_object* v_value_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
lean_dec_ref(v___f_1131_);
v_value_1133_ = lean_ctor_get(v_x_1132_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_x_1132_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1135_ = v_x_1132_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_value_1133_);
lean_dec(v_x_1132_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 4);
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_value_1133_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
else
{
lean_object* v_value_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1152_; 
v_value_1141_ = lean_ctor_get(v_x_1132_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v_x_1132_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1143_ = v_x_1132_;
v_isShared_1144_ = v_isSharedCheck_1152_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_value_1141_);
lean_dec(v_x_1132_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1152_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1145_; size_t v_sz_1146_; size_t v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1145_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9));
v_sz_1146_ = lean_array_size(v_value_1141_);
v___x_1147_ = ((size_t)0ULL);
v___x_1148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1145_, v___f_1131_, v_sz_1146_, v___x_1147_, v_value_1141_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set_tag(v___x_1143_, 7);
lean_ctor_set(v___x_1143_, 0, v___x_1148_);
v___x_1150_ = v___x_1143_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1158_, 0, v_value_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1162_, 0, v_value_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0(lean_object* v___f_1171_, lean_object* v___f_1172_, lean_object* v___x_1173_, lean_object* v_d_1174_){
_start:
{
lean_object* v_limit_1175_; lean_object* v_prefix_1176_; lean_object* v_cursor_1177_; lean_object* v_delimiter_1178_; lean_object* v_startAfter_1179_; lean_object* v_include_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v_limit_1175_ = lean_ctor_get(v_d_1174_, 0);
lean_inc(v_limit_1175_);
v_prefix_1176_ = lean_ctor_get(v_d_1174_, 1);
lean_inc(v_prefix_1176_);
v_cursor_1177_ = lean_ctor_get(v_d_1174_, 2);
lean_inc(v_cursor_1177_);
v_delimiter_1178_ = lean_ctor_get(v_d_1174_, 3);
lean_inc(v_delimiter_1178_);
v_startAfter_1179_ = lean_ctor_get(v_d_1174_, 4);
lean_inc(v_startAfter_1179_);
v_include_1180_ = lean_ctor_get(v_d_1174_, 5);
lean_inc(v_include_1180_);
lean_dec_ref(v_d_1174_);
v___x_1181_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__0));
v___x_1182_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1171_, v_limit_1175_);
v___x_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1181_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
v___x_1184_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__1));
lean_inc_ref_n(v___f_1172_, 3);
v___x_1185_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1172_, v_prefix_1176_);
v___x_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2));
v___x_1188_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1172_, v_cursor_1177_);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_1190_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__3));
v___x_1191_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1172_, v_delimiter_1178_);
v___x_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1190_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
v___x_1193_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__4));
v___x_1194_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1172_, v_startAfter_1179_);
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1193_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__5));
v___x_1197_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1173_, v_include_1180_);
v___x_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1196_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
v___x_1199_ = lean_unsigned_to_nat(6u);
v___x_1200_ = lean_mk_empty_array_with_capacity(v___x_1199_);
v___x_1201_ = lean_array_push(v___x_1200_, v___x_1183_);
v___x_1202_ = lean_array_push(v___x_1201_, v___x_1186_);
v___x_1203_ = lean_array_push(v___x_1202_, v___x_1189_);
v___x_1204_ = lean_array_push(v___x_1203_, v___x_1192_);
v___x_1205_ = lean_array_push(v___x_1204_, v___x_1195_);
v___x_1206_ = lean_array_push(v___x_1205_, v___x_1198_);
v___x_1207_ = l_Lasm_JS_Web_Support_fields(v___x_1206_);
lean_dec_ref(v___x_1206_);
return v___x_1207_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0(void){
_start:
{
lean_object* v___f_1208_; lean_object* v___x_1209_; 
v___f_1208_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___closed__0));
v___x_1209_ = l_Lasm_JS_instToJSArray___redArg(v___f_1208_);
return v___x_1209_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1(void){
_start:
{
lean_object* v___x_1210_; lean_object* v___f_1211_; lean_object* v___f_1212_; lean_object* v___f_1213_; 
v___x_1210_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0, &l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0_once, _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0);
v___f_1211_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___f_1212_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1));
v___f_1213_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0), 4, 3);
lean_closure_set(v___f_1213_, 0, v___f_1212_);
lean_closure_set(v___f_1213_, 1, v___f_1211_);
lean_closure_set(v___f_1213_, 2, v___x_1210_);
return v___f_1213_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions(void){
_start:
{
lean_object* v___f_1214_; 
v___f_1214_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1, &l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1_once, _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1);
return v___f_1214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0(lean_object* v___x_1218_, lean_object* v___x_1219_, lean_object* v___x_1220_, lean_object* v___x_1221_, lean_object* v_d_1222_){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__0));
v___x_1224_ = l_Lasm_JS_readField___redArg(v___x_1218_, v_d_1222_, v___x_1223_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec_ref(v___x_1221_);
lean_dec_ref(v___x_1220_);
lean_dec_ref(v___x_1219_);
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1224_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1224_);
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
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v_a_1233_ = lean_ctor_get(v___x_1224_, 0);
lean_inc(v_a_1233_);
lean_dec_ref_known(v___x_1224_, 1);
v___x_1234_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__1));
v___x_1235_ = l_Lasm_JS_readField___redArg(v___x_1219_, v_d_1222_, v___x_1234_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
lean_dec(v_a_1233_);
lean_dec_ref(v___x_1221_);
lean_dec_ref(v___x_1220_);
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1235_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1235_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_a_1236_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_a_1244_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1235_, 1);
v___x_1245_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__2));
v___x_1246_ = l_Lasm_JS_readField___redArg(v___x_1220_, v_d_1222_, v___x_1245_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec(v_a_1244_);
lean_dec(v_a_1233_);
lean_dec_ref(v___x_1221_);
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1246_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1246_);
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
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v_a_1255_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1246_, 1);
v___x_1256_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2));
v___x_1257_ = l_Lasm_JS_readField___redArg(v___x_1221_, v_d_1222_, v___x_1256_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec(v_a_1255_);
lean_dec(v_a_1244_);
lean_dec(v_a_1233_);
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1257_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1257_);
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
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1275_; 
v_a_1266_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1268_ = v___x_1257_;
v_isShared_1269_ = v_isSharedCheck_1275_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1257_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1275_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1273_; 
v___x_1270_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1270_, 0, v_a_1233_);
lean_ctor_set(v___x_1270_, 1, v_a_1244_);
lean_ctor_set(v___x_1270_, 2, v_a_1266_);
v___x_1271_ = lean_unbox(v_a_1255_);
lean_dec(v_a_1255_);
lean_ctor_set_uint8(v___x_1270_, sizeof(void*)*3, v___x_1271_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1270_);
v___x_1273_ = v___x_1268_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1270_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___boxed(lean_object* v___x_1276_, lean_object* v___x_1277_, lean_object* v___x_1278_, lean_object* v___x_1279_, lean_object* v_d_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0(v___x_1276_, v___x_1277_, v___x_1278_, v___x_1279_, v_d_1280_);
lean_dec(v_d_1280_);
return v_res_1281_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0(void){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Object));
v___x_1283_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1282_);
return v___x_1283_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = l_Lasm_JS_instFromJSString;
v___x_1285_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1284_);
return v___x_1285_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___f_1290_; 
v___x_1286_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0);
v___x_1287_ = l_Lasm_JS_instFromJSBool;
v___x_1288_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1, &l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1);
v___x_1289_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0);
v___f_1290_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1290_, 0, v___x_1289_);
lean_closure_set(v___f_1290_, 1, v___x_1288_);
lean_closure_set(v___f_1290_, 2, v___x_1287_);
lean_closure_set(v___f_1290_, 3, v___x_1286_);
return v___f_1290_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4(void){
_start:
{
uint8_t v___x_1292_; lean_object* v___x_1293_; lean_object* v___f_1294_; lean_object* v___x_1295_; 
v___x_1292_ = 0;
v___x_1293_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__3));
v___f_1294_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2, &l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2);
v___x_1295_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1295_, 0, v___f_1294_);
lean_ctor_set(v___x_1295_, 1, v___x_1293_);
lean_ctor_set_uint8(v___x_1295_, sizeof(void*)*2, v___x_1292_);
return v___x_1295_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects(void){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4, &l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0(lean_object* v___x_1297_, lean_object* v_d_1298_){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
lean_inc_ref(v___x_1297_);
v___x_1300_ = l_Lasm_JS_readField___redArg(v___x_1297_, v_d_1298_, v___x_1299_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec_ref(v___x_1297_);
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1300_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1300_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v_a_1309_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___x_1300_, 1);
v___x_1310_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
lean_inc_ref(v___x_1297_);
v___x_1311_ = l_Lasm_JS_readField___redArg(v___x_1297_, v_d_1298_, v___x_1310_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_dec(v_a_1309_);
lean_dec_ref(v___x_1297_);
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1311_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v_a_1320_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1320_);
lean_dec_ref_known(v___x_1311_, 1);
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
lean_inc_ref(v___x_1297_);
v___x_1322_ = l_Lasm_JS_readField___redArg(v___x_1297_, v_d_1298_, v___x_1321_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
lean_dec(v_a_1320_);
lean_dec(v_a_1309_);
lean_dec_ref(v___x_1297_);
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1322_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1322_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v_a_1331_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1322_, 1);
v___x_1332_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
lean_inc_ref(v___x_1297_);
v___x_1333_ = l_Lasm_JS_readField___redArg(v___x_1297_, v_d_1298_, v___x_1332_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec(v_a_1331_);
lean_dec(v_a_1320_);
lean_dec(v_a_1309_);
lean_dec_ref(v___x_1297_);
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1333_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1333_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v_a_1342_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1333_, 1);
v___x_1343_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
v___x_1344_ = l_Lasm_JS_readField___redArg(v___x_1297_, v_d_1298_, v___x_1343_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
lean_dec(v_a_1342_);
lean_dec(v_a_1331_);
lean_dec(v_a_1320_);
lean_dec(v_a_1309_);
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1344_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1344_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
v___x_1350_ = v___x_1347_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1345_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1361_; 
v_a_1353_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1355_ = v___x_1344_;
v_isShared_1356_ = v_isSharedCheck_1361_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1344_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1361_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1357_; lean_object* v___x_1359_; 
v___x_1357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1357_, 0, v_a_1309_);
lean_ctor_set(v___x_1357_, 1, v_a_1320_);
lean_ctor_set(v___x_1357_, 2, v_a_1331_);
lean_ctor_set(v___x_1357_, 3, v_a_1342_);
lean_ctor_set(v___x_1357_, 4, v_a_1353_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1357_);
v___x_1359_ = v___x_1355_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0___boxed(lean_object* v___x_1362_, lean_object* v_d_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0(v___x_1362_, v_d_1363_);
lean_dec(v_d_1363_);
return v_res_1364_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___f_1366_; 
v___x_1365_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0);
v___f_1366_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1366_, 0, v___x_1365_);
return v___f_1366_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2(void){
_start:
{
uint8_t v___x_1368_; lean_object* v___x_1369_; lean_object* v___f_1370_; lean_object* v___x_1371_; 
v___x_1368_ = 0;
v___x_1369_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__1));
v___f_1370_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0);
v___x_1371_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1371_, 0, v___f_1370_);
lean_ctor_set(v___x_1371_, 1, v___x_1369_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*2, v___x_1368_);
return v___x_1371_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums(void){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2, &l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions___lam__0(lean_object* v___f_1373_, lean_object* v_d_1374_){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1375_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_1376_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1373_, v_d_1374_);
v___x_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1375_);
lean_ctor_set(v___x_1377_, 1, v___x_1376_);
v___x_1378_ = lean_unsigned_to_nat(1u);
v___x_1379_ = lean_mk_empty_array_with_capacity(v___x_1378_);
v___x_1380_ = lean_array_push(v___x_1379_, v___x_1377_);
v___x_1381_ = l_Lasm_JS_Web_Support_fields(v___x_1380_);
lean_dec_ref(v___x_1380_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0(lean_object* v_d_1387_){
_start:
{
double v_partNumber_1388_; lean_object* v_etag_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v_partNumber_1388_ = lean_ctor_get_float(v_d_1387_, sizeof(void*)*1);
v_etag_1389_ = lean_ctor_get(v_d_1387_, 0);
v___x_1390_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0));
v___x_1391_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1391_, 0, v_partNumber_1388_);
v___x_1392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1390_);
lean_ctor_set(v___x_1392_, 1, v___x_1391_);
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
lean_inc_ref(v_etag_1389_);
v___x_1394_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1394_, 0, v_etag_1389_);
v___x_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1393_);
lean_ctor_set(v___x_1395_, 1, v___x_1394_);
v___x_1396_ = lean_unsigned_to_nat(2u);
v___x_1397_ = lean_mk_empty_array_with_capacity(v___x_1396_);
v___x_1398_ = lean_array_push(v___x_1397_, v___x_1392_);
v___x_1399_ = lean_array_push(v___x_1398_, v___x_1395_);
v___x_1400_ = l_Lasm_JS_Web_Support_fields(v___x_1399_);
lean_dec_ref(v___x_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___boxed(lean_object* v_d_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0(v_d_1401_);
lean_dec_ref(v_d_1401_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0(lean_object* v___x_1405_, lean_object* v___x_1406_, lean_object* v_d_1407_){
_start:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1408_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0));
v___x_1409_ = l_Lasm_JS_readField___redArg(v___x_1405_, v_d_1407_, v___x_1408_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_dec_ref(v___x_1406_);
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1409_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1409_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v_a_1418_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1409_, 1);
v___x_1419_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
v___x_1420_ = l_Lasm_JS_readField___redArg(v___x_1406_, v_d_1407_, v___x_1419_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec(v_a_1418_);
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1420_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1420_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1438_; 
v_a_1429_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1431_ = v___x_1420_;
v_isShared_1432_ = v_isSharedCheck_1438_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1420_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1438_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1433_; double v___x_1434_; lean_object* v___x_1436_; 
v___x_1433_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1433_, 0, v_a_1429_);
v___x_1434_ = lean_unbox_float(v_a_1418_);
lean_dec(v_a_1418_);
lean_ctor_set_float(v___x_1433_, sizeof(void*)*1, v___x_1434_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1433_);
v___x_1436_ = v___x_1431_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1433_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0___boxed(lean_object* v___x_1439_, lean_object* v___x_1440_, lean_object* v_d_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0(v___x_1439_, v___x_1440_, v_d_1441_);
lean_dec(v_d_1441_);
return v_res_1442_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0(void){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___f_1445_; 
v___x_1443_ = l_Lasm_JS_instFromJSString;
v___x_1444_ = l_Lasm_JS_instFromJSFloat;
v___f_1445_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1445_, 0, v___x_1444_);
lean_closure_set(v___f_1445_, 1, v___x_1443_);
return v___f_1445_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2(void){
_start:
{
uint8_t v___x_1447_; lean_object* v___x_1448_; lean_object* v___f_1449_; lean_object* v___x_1450_; 
v___x_1447_ = 0;
v___x_1448_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__1));
v___f_1449_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0);
v___x_1450_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1450_, 0, v___f_1449_);
lean_ctor_set(v___x_1450_, 1, v___x_1448_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*2, v___x_1447_);
return v___x_1450_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart(void){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2, &l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_1452_, lean_object* v_x_1453_){
_start:
{
if (lean_obj_tag(v_x_1453_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1466_; 
v_a_1455_ = lean_ctor_get(v_x_1453_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_x_1453_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1457_ = v_x_1453_;
v_isShared_1458_ = v_isSharedCheck_1466_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v_x_1453_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1466_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1459_ = lean_io_error_to_string(v_a_1455_);
v___x_1460_ = lean_string_append(v_failurePrefix_1452_, v___x_1459_);
lean_dec_ref(v___x_1459_);
v___x_1461_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1460_);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v___x_1461_);
v___x_1463_ = v___x_1457_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v___x_1461_);
v___x_1463_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1463_);
return v___x_1464_;
}
}
}
else
{
lean_object* v___x_1467_; 
lean_dec_ref(v_failurePrefix_1452_);
v___x_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1467_, 0, v_x_1453_);
return v___x_1467_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1468_, lean_object* v_x_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4(v_failurePrefix_1468_, v_x_1469_);
return v_res_1471_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_1477_ = lean_string_utf8_byte_size(v___x_1476_);
return v___x_1477_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; uint8_t v___x_1480_; 
v___x_1478_ = lean_unsigned_to_nat(0u);
v___x_1479_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4);
v___x_1480_ = lean_nat_dec_eq(v___x_1479_, v___x_1478_);
return v___x_1480_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__9));
v___x_1486_ = lean_unsigned_to_nat(46u);
v___x_1487_ = lean_unsigned_to_nat(193u);
v___x_1488_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__8));
v___x_1489_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__7));
v___x_1490_ = l_mkPanicMessageWithDecl(v___x_1489_, v___x_1488_, v___x_1487_, v___x_1486_, v___x_1485_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2(lean_object* v_context_1492_, lean_object* v_d_1493_){
_start:
{
lean_object* v___y_1499_; lean_object* v___y_1500_; 
switch(lean_obj_tag(v_d_1493_))
{
case 1:
{
goto v___jp_1495_;
}
case 0:
{
goto v___jp_1495_;
}
default: 
{
if (lean_obj_tag(v_d_1493_) == 9)
{
lean_object* v_value_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v_value_1504_ = lean_ctor_get(v_d_1493_, 0);
lean_inc(v_value_1504_);
lean_dec_ref_known(v_d_1493_, 2);
v___x_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1505_, 0, v_value_1504_);
v___x_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
return v___x_1506_;
}
else
{
lean_object* v___x_1507_; lean_object* v_received_1509_; 
v___x_1507_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
if (lean_obj_tag(v_d_1493_) == 9)
{
lean_object* v_value_1523_; lean_object* v_description_1524_; uint8_t v___x_1525_; 
v_value_1523_ = lean_ctor_get(v_d_1493_, 0);
v_description_1524_ = lean_ctor_get(v_d_1493_, 1);
v___x_1525_ = lean_string_dec_eq(v_description_1524_, v___x_1507_);
if (v___x_1525_ == 0)
{
goto v___jp_1521_;
}
else
{
uint32_t v___x_1526_; uint64_t v___x_1527_; lean_object* v___x_1528_; uint32_t v___x_1529_; lean_object* v___x_1530_; 
lean_inc_n(v_value_1523_, 2);
lean_dec_ref_known(v_d_1493_, 2);
v___x_1526_ = 206;
v___x_1527_ = 0ULL;
v___x_1528_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1528_, 0, v_value_1523_);
lean_ctor_set(v___x_1528_, 1, v___x_1507_);
v___x_1529_ = lasm_js_value_handle(v_value_1523_);
lean_dec(v_value_1523_);
v___x_1530_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1526_, v___x_1527_, v___x_1528_, v___x_1529_);
lean_dec_ref_known(v___x_1528_, 2);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; uint8_t v___x_1532_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v___x_1532_ = lean_string_validate_utf8(v_a_1531_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
lean_dec(v_a_1531_);
v___x_1533_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_1534_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1533_);
v_received_1509_ = v___x_1534_;
goto v___jp_1508_;
}
else
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_string_from_utf8_unchecked(v_a_1531_);
v_received_1509_ = v___x_1535_;
goto v___jp_1508_;
}
}
else
{
lean_object* v___x_1536_; 
lean_dec_ref_known(v___x_1530_, 1);
v___x_1536_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v_received_1509_ = v___x_1536_;
goto v___jp_1508_;
}
}
}
else
{
goto v___jp_1521_;
}
v___jp_1508_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; uint8_t v___x_1519_; 
v___x_1510_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_1511_ = lean_string_append(v___x_1510_, v_context_1492_);
v___x_1512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_1513_ = lean_string_append(v___x_1511_, v___x_1512_);
v___x_1514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__2));
v___x_1515_ = lean_string_append(v___x_1513_, v___x_1514_);
v___x_1516_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_1517_ = lean_string_append(v___x_1515_, v___x_1516_);
v___x_1518_ = lean_string_append(v___x_1517_, v_received_1509_);
lean_dec_ref(v_received_1509_);
v___x_1519_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; 
v___x_1520_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___y_1499_ = v___x_1518_;
v___y_1500_ = v___x_1520_;
goto v___jp_1498_;
}
else
{
v___y_1499_ = v___x_1518_;
v___y_1500_ = v___x_1507_;
goto v___jp_1498_;
}
}
v___jp_1521_:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Lasm_JS_Data_describe(v_d_1493_);
v_received_1509_ = v___x_1522_;
goto v___jp_1508_;
}
}
}
}
v___jp_1495_:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = lean_box(0);
v___x_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
return v___x_1497_;
}
v___jp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1501_ = lean_string_append(v___y_1499_, v___y_1500_);
v___x_1502_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
v___x_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
return v___x_1503_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1537_, lean_object* v_d_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2(v_context_1537_, v_d_1538_);
lean_dec_ref(v_context_1537_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0(lean_object* v_context_1541_, lean_object* v_x_1542_){
_start:
{
lean_object* v_val_1545_; 
if (lean_obj_tag(v_x_1542_) == 0)
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1555_; 
v_a_1547_ = lean_ctor_get(v_x_1542_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v_x_1542_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1549_ = v_x_1542_;
v_isShared_1550_ = v_isSharedCheck_1555_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v_x_1542_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1555_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1552_; 
if (v_isShared_1550_ == 0)
{
v___x_1552_ = v___x_1549_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1547_);
v___x_1552_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1553_; 
v___x_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
return v___x_1553_;
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1569_; 
v_a_1556_ = lean_ctor_get(v_x_1542_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v_x_1542_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1558_ = v_x_1542_;
v_isShared_1559_ = v_isSharedCheck_1569_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v_x_1542_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1569_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2(v_context_1541_, v_a_1556_);
if (lean_obj_tag(v___x_1560_) == 0)
{
lean_object* v_a_1561_; lean_object* v___x_1563_; 
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1561_);
lean_dec_ref_known(v___x_1560_, 1);
if (v_isShared_1559_ == 0)
{
lean_ctor_set(v___x_1558_, 0, v_a_1561_);
v___x_1563_ = v___x_1558_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
v_val_1545_ = v___x_1563_;
goto v___jp_1544_;
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; 
v_a_1565_ = lean_ctor_get(v___x_1560_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v___x_1560_, 1);
if (v_isShared_1559_ == 0)
{
lean_ctor_set_tag(v___x_1558_, 0);
lean_ctor_set(v___x_1558_, 0, v_a_1565_);
v___x_1567_ = v___x_1558_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1565_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
v_val_1545_ = v___x_1567_;
goto v___jp_1544_;
}
}
}
}
v___jp_1544_:
{
lean_object* v___x_1546_; 
v___x_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1546_, 0, v_val_1545_);
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1570_, lean_object* v_x_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0(v_context_1570_, v_x_1571_);
lean_dec_ref(v_context_1570_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8(lean_object* v___f_1574_, lean_object* v_x_1575_){
_start:
{
if (lean_obj_tag(v_x_1575_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1585_; 
lean_dec_ref(v___f_1574_);
v_a_1577_ = lean_ctor_get(v_x_1575_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_x_1575_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1579_ = v_x_1575_;
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v_x_1575_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1577_);
v___x_1582_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
lean_object* v___x_1583_; 
v___x_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
return v___x_1583_;
}
}
}
else
{
lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1597_; 
v_isSharedCheck_1597_ = !lean_is_exclusive(v_x_1575_);
if (v_isSharedCheck_1597_ == 0)
{
lean_object* v_unused_1598_; 
v_unused_1598_ = lean_ctor_get(v_x_1575_, 0);
lean_dec(v_unused_1598_);
v___x_1587_ = v_x_1575_;
v_isShared_1588_ = v_isSharedCheck_1597_;
goto v_resetjp_1586_;
}
else
{
lean_dec(v_x_1575_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1597_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1589_; uint8_t v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
v___x_1589_ = lean_unsigned_to_nat(0u);
v___x_1590_ = 0;
v___x_1591_ = lean_io_promise_new();
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 0, v___x_1591_);
v___x_1593_ = v___x_1587_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1591_);
v___x_1593_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1593_);
v___x_1595_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1589_, v___x_1590_, v___x_1594_, v___f_1574_);
return v___x_1595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8___boxed(lean_object* v___f_1599_, lean_object* v_x_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8(v___f_1599_, v_x_1600_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5(lean_object* v___x_1603_, uint8_t v___x_1604_, lean_object* v___f_1605_, lean_object* v_a_1606_, uint32_t v_op_1607_, uint64_t v_flags_1608_, lean_object* v_payload_1609_, lean_object* v_x_1610_){
_start:
{
lean_object* v_val_1613_; 
if (lean_obj_tag(v_x_1610_) == 0)
{
lean_object* v___x_1616_; 
lean_dec_ref(v___f_1605_);
lean_dec(v___x_1603_);
v___x_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1616_, 0, v_x_1610_);
return v___x_1616_;
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1631_; 
v_a_1617_ = lean_ctor_get(v_x_1610_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v_x_1610_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1619_ = v_x_1610_;
v_isShared_1620_ = v_isSharedCheck_1631_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v_x_1610_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1631_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
uint32_t v___x_1621_; lean_object* v___x_1622_; 
v___x_1621_ = 0;
v___x_1622_ = lasm_js_call_into(v_a_1606_, v_op_1607_, v___x_1621_, v_flags_1608_, v_a_1617_, v_payload_1609_);
lean_dec(v_a_1617_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_object* v_a_1623_; lean_object* v___x_1625_; 
v_a_1623_ = lean_ctor_get(v___x_1622_, 0);
lean_inc(v_a_1623_);
lean_dec_ref_known(v___x_1622_, 1);
if (v_isShared_1620_ == 0)
{
lean_ctor_set(v___x_1619_, 0, v_a_1623_);
v___x_1625_ = v___x_1619_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
v_val_1613_ = v___x_1625_;
goto v___jp_1612_;
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; 
v_a_1627_ = lean_ctor_get(v___x_1622_, 0);
lean_inc(v_a_1627_);
lean_dec_ref_known(v___x_1622_, 1);
if (v_isShared_1620_ == 0)
{
lean_ctor_set_tag(v___x_1619_, 0);
lean_ctor_set(v___x_1619_, 0, v_a_1627_);
v___x_1629_ = v___x_1619_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
v_val_1613_ = v___x_1629_;
goto v___jp_1612_;
}
}
}
}
v___jp_1612_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1614_, 0, v_val_1613_);
v___x_1615_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1603_, v___x_1604_, v___x_1614_, v___f_1605_);
return v___x_1615_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed(lean_object* v___x_1632_, lean_object* v___x_1633_, lean_object* v___f_1634_, lean_object* v_a_1635_, lean_object* v_op_1636_, lean_object* v_flags_1637_, lean_object* v_payload_1638_, lean_object* v_x_1639_, lean_object* v___y_1640_){
_start:
{
uint8_t v___x_1415__boxed_1641_; uint32_t v_op_boxed_1642_; uint64_t v_flags_boxed_1643_; lean_object* v_res_1644_; 
v___x_1415__boxed_1641_ = lean_unbox(v___x_1633_);
v_op_boxed_1642_ = lean_unbox_uint32(v_op_1636_);
lean_dec(v_op_1636_);
v_flags_boxed_1643_ = lean_unbox_uint64(v_flags_1637_);
lean_dec_ref(v_flags_1637_);
v_res_1644_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5(v___x_1632_, v___x_1415__boxed_1641_, v___f_1634_, v_a_1635_, v_op_boxed_1642_, v_flags_boxed_1643_, v_payload_1638_, v_x_1639_);
lean_dec(v_payload_1638_);
lean_dec(v_a_1635_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3(lean_object* v_a_1645_, lean_object* v_x_1646_){
_start:
{
if (lean_obj_tag(v_x_1646_) == 0)
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1656_; 
v_a_1648_ = lean_ctor_get(v_x_1646_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v_x_1646_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1650_ = v_x_1646_;
v_isShared_1651_ = v_isSharedCheck_1656_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v_x_1646_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1656_;
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
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
lean_object* v___x_1654_; 
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
return v___x_1654_;
}
}
}
else
{
lean_object* v___x_1657_; 
lean_dec_ref_known(v_x_1646_, 1);
v___x_1657_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1645_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed(lean_object* v_a_1658_, lean_object* v_x_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3(v_a_1658_, v_x_1659_);
lean_dec(v_a_1658_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7(lean_object* v___f_1662_, lean_object* v_a_1663_, uint32_t v_op_1664_, uint64_t v_flags_1665_, lean_object* v_payload_1666_, lean_object* v_x_1667_){
_start:
{
if (lean_obj_tag(v_x_1667_) == 0)
{
lean_object* v___x_1669_; 
lean_dec_ref(v___f_1662_);
v___x_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1669_, 0, v_x_1667_);
return v___x_1669_;
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1690_; 
v_a_1670_ = lean_ctor_get(v_x_1667_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v_x_1667_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1672_ = v_x_1667_;
v_isShared_1673_ = v_isSharedCheck_1690_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v_x_1667_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1690_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
uint32_t v___x_1674_; lean_object* v___x_1675_; uint8_t v___x_1676_; lean_object* v_val_1678_; lean_object* v___x_1681_; 
v___x_1674_ = 0;
v___x_1675_ = lean_unsigned_to_nat(0u);
v___x_1676_ = 0;
v___x_1681_ = lasm_js_call_into(v_a_1663_, v_op_1664_, v___x_1674_, v_flags_1665_, v_a_1670_, v_payload_1666_);
lean_dec(v_a_1670_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v___x_1684_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_a_1682_);
lean_dec_ref_known(v___x_1681_, 1);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v_a_1682_);
v___x_1684_ = v___x_1672_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1682_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
v_val_1678_ = v___x_1684_;
goto v___jp_1677_;
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; 
v_a_1686_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_a_1686_);
lean_dec_ref_known(v___x_1681_, 1);
if (v_isShared_1673_ == 0)
{
lean_ctor_set_tag(v___x_1672_, 0);
lean_ctor_set(v___x_1672_, 0, v_a_1686_);
v___x_1688_ = v___x_1672_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1686_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
v_val_1678_ = v___x_1688_;
goto v___jp_1677_;
}
}
v___jp_1677_:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_val_1678_);
v___x_1680_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1675_, v___x_1676_, v___x_1679_, v___f_1662_);
return v___x_1680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed(lean_object* v___f_1691_, lean_object* v_a_1692_, lean_object* v_op_1693_, lean_object* v_flags_1694_, lean_object* v_payload_1695_, lean_object* v_x_1696_, lean_object* v___y_1697_){
_start:
{
uint32_t v_op_boxed_1698_; uint64_t v_flags_boxed_1699_; lean_object* v_res_1700_; 
v_op_boxed_1698_ = lean_unbox_uint32(v_op_1693_);
lean_dec(v_op_1693_);
v_flags_boxed_1699_ = lean_unbox_uint64(v_flags_1694_);
lean_dec_ref(v_flags_1694_);
v_res_1700_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7(v___f_1691_, v_a_1692_, v_op_boxed_1698_, v_flags_boxed_1699_, v_payload_1695_, v_x_1696_);
lean_dec(v_payload_1695_);
lean_dec(v_a_1692_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_1701_, uint32_t v_op_1702_, uint64_t v_flags_1703_, lean_object* v_payload_1704_, lean_object* v___f_1705_, lean_object* v___f_1706_, lean_object* v___f_1707_, lean_object* v_x_1708_){
_start:
{
if (lean_obj_tag(v_x_1708_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1718_; 
lean_dec_ref(v___f_1707_);
lean_dec_ref(v___f_1706_);
lean_dec_ref(v___f_1705_);
lean_dec(v_payload_1704_);
v_a_1710_ = lean_ctor_get(v_x_1708_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v_x_1708_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1712_ = v_x_1708_;
v_isShared_1713_ = v_isSharedCheck_1718_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v_x_1708_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1718_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1716_; 
v___x_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1715_);
return v___x_1716_;
}
}
}
else
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1765_; 
v_a_1719_ = lean_ctor_get(v_x_1708_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_x_1708_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1721_ = v_x_1708_;
v_isShared_1722_ = v_isSharedCheck_1765_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v_x_1708_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1765_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; uint8_t v___x_1725_; 
v___x_1723_ = lean_string_utf8_byte_size(v_failurePrefix_1701_);
v___x_1724_ = lean_unsigned_to_nat(0u);
v___x_1725_ = lean_nat_dec_eq(v___x_1723_, v___x_1724_);
if (v___x_1725_ == 0)
{
lean_object* v___f_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___f_1730_; lean_object* v_val_1732_; lean_object* v___x_1737_; 
lean_dec_ref(v___f_1707_);
lean_inc(v_a_1719_);
v___f_1726_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1726_, 0, v_a_1719_);
v___x_1727_ = lean_box(v___x_1725_);
v___x_1728_ = lean_box_uint32(v_op_1702_);
v___x_1729_ = lean_box_uint64(v_flags_1703_);
lean_inc(v_payload_1704_);
v___f_1730_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1730_, 0, v___x_1724_);
lean_closure_set(v___f_1730_, 1, v___x_1727_);
lean_closure_set(v___f_1730_, 2, v___f_1726_);
lean_closure_set(v___f_1730_, 3, v_a_1719_);
lean_closure_set(v___f_1730_, 4, v___x_1728_);
lean_closure_set(v___f_1730_, 5, v___x_1729_);
lean_closure_set(v___f_1730_, 6, v_payload_1704_);
v___x_1737_ = l_Lasm_JS_Wire_encodeIO(v_payload_1704_);
lean_dec(v_payload_1704_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1740_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 0, v_a_1738_);
v___x_1740_ = v___x_1721_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_a_1738_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
v_val_1732_ = v___x_1740_;
goto v___jp_1731_;
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; 
v_a_1742_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1737_, 1);
if (v_isShared_1722_ == 0)
{
lean_ctor_set_tag(v___x_1721_, 0);
lean_ctor_set(v___x_1721_, 0, v_a_1742_);
v___x_1744_ = v___x_1721_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
v_val_1732_ = v___x_1744_;
goto v___jp_1731_;
}
}
v___jp_1731_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v_val_1732_);
v___x_1734_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1724_, v___x_1725_, v___x_1733_, v___f_1730_);
v___x_1735_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1724_, v___x_1725_, v___x_1734_, v___f_1705_);
v___x_1736_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1724_, v___x_1725_, v___x_1735_, v___f_1706_);
return v___x_1736_;
}
}
else
{
lean_object* v___f_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___f_1749_; uint8_t v___x_1750_; lean_object* v_val_1752_; lean_object* v___x_1756_; 
lean_dec_ref(v___f_1706_);
lean_dec_ref(v___f_1705_);
lean_inc(v_a_1719_);
v___f_1746_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1746_, 0, v_a_1719_);
v___x_1747_ = lean_box_uint32(v_op_1702_);
v___x_1748_ = lean_box_uint64(v_flags_1703_);
lean_inc(v_payload_1704_);
v___f_1749_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1749_, 0, v___f_1746_);
lean_closure_set(v___f_1749_, 1, v_a_1719_);
lean_closure_set(v___f_1749_, 2, v___x_1747_);
lean_closure_set(v___f_1749_, 3, v___x_1748_);
lean_closure_set(v___f_1749_, 4, v_payload_1704_);
v___x_1750_ = 0;
v___x_1756_ = l_Lasm_JS_Wire_encodeIO(v_payload_1704_);
lean_dec(v_payload_1704_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; lean_object* v___x_1759_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
lean_inc(v_a_1757_);
lean_dec_ref_known(v___x_1756_, 1);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 0, v_a_1757_);
v___x_1759_ = v___x_1721_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1757_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
v_val_1752_ = v___x_1759_;
goto v___jp_1751_;
}
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; 
v_a_1761_ = lean_ctor_get(v___x_1756_, 0);
lean_inc(v_a_1761_);
lean_dec_ref_known(v___x_1756_, 1);
if (v_isShared_1722_ == 0)
{
lean_ctor_set_tag(v___x_1721_, 0);
lean_ctor_set(v___x_1721_, 0, v_a_1761_);
v___x_1763_ = v___x_1721_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
v_val_1752_ = v___x_1763_;
goto v___jp_1751_;
}
}
v___jp_1751_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1753_, 0, v_val_1752_);
v___x_1754_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1724_, v___x_1750_, v___x_1753_, v___f_1749_);
v___x_1755_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1724_, v___x_1750_, v___x_1754_, v___f_1707_);
return v___x_1755_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_1766_, lean_object* v_op_1767_, lean_object* v_flags_1768_, lean_object* v_payload_1769_, lean_object* v___f_1770_, lean_object* v___f_1771_, lean_object* v___f_1772_, lean_object* v_x_1773_, lean_object* v___y_1774_){
_start:
{
uint32_t v_op_boxed_1775_; uint64_t v_flags_boxed_1776_; lean_object* v_res_1777_; 
v_op_boxed_1775_ = lean_unbox_uint32(v_op_1767_);
lean_dec(v_op_1767_);
v_flags_boxed_1776_ = lean_unbox_uint64(v_flags_1768_);
lean_dec_ref(v_flags_1768_);
v_res_1777_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6(v_failurePrefix_1766_, v_op_boxed_1775_, v_flags_boxed_1776_, v_payload_1769_, v___f_1770_, v___f_1771_, v___f_1772_, v_x_1773_);
lean_dec_ref(v_failurePrefix_1766_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1(lean_object* v___f_1778_, lean_object* v_bytes_1779_){
_start:
{
lean_object* v___x_1781_; uint8_t v___x_1782_; lean_object* v_val_1784_; lean_object* v___x_1787_; 
v___x_1781_ = lean_unsigned_to_nat(0u);
v___x_1782_ = 0;
v___x_1787_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1779_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1795_; 
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1790_ = v___x_1787_;
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v___x_1787_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1793_; 
if (v_isShared_1791_ == 0)
{
lean_ctor_set_tag(v___x_1790_, 1);
v___x_1793_ = v___x_1790_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_a_1788_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
v_val_1784_ = v___x_1793_;
goto v___jp_1783_;
}
}
}
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
v_a_1796_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1787_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1787_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set_tag(v___x_1798_, 0);
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
v_val_1784_ = v___x_1801_;
goto v___jp_1783_;
}
}
}
v___jp_1783_:
{
lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1785_, 0, v_val_1784_);
v___x_1786_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1781_, v___x_1782_, v___x_1785_, v___f_1778_);
return v___x_1786_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1804_, lean_object* v_bytes_1805_, lean_object* v___y_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1(v___f_1804_, v_bytes_1805_);
lean_dec_ref(v_bytes_1805_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2(lean_object* v___f_1808_, lean_object* v_x_1809_){
_start:
{
if (lean_obj_tag(v_x_1809_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1819_; 
lean_dec_ref(v___f_1808_);
v_a_1811_ = lean_ctor_get(v_x_1809_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_x_1809_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1813_ = v_x_1809_;
v_isShared_1814_ = v_isSharedCheck_1819_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v_x_1809_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1819_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1811_);
v___x_1816_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
lean_object* v___x_1817_; 
v___x_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1816_);
return v___x_1817_;
}
}
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1821_; 
v_a_1820_ = lean_ctor_get(v_x_1809_, 0);
lean_inc(v_a_1820_);
lean_dec_ref_known(v_x_1809_, 1);
v___x_1821_ = lean_apply_2(v___f_1808_, v_a_1820_, lean_box(0));
return v___x_1821_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1822_, lean_object* v_x_1823_, lean_object* v___y_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2(v___f_1822_, v_x_1823_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1(lean_object* v_context_1826_, uint32_t v_op_1827_, uint64_t v_flags_1828_, lean_object* v_payload_1829_, lean_object* v_failurePrefix_1830_){
_start:
{
lean_object* v___f_1832_; lean_object* v___f_1833_; lean_object* v___f_1834_; lean_object* v___f_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___f_1838_; lean_object* v___f_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; lean_object* v_val_1843_; lean_object* v___x_1846_; 
v___f_1832_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1832_, 0, v_context_1826_);
v___f_1833_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1833_, 0, v___f_1832_);
v___f_1834_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1834_, 0, v___f_1833_);
lean_inc_ref(v_failurePrefix_1830_);
v___f_1835_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1835_, 0, v_failurePrefix_1830_);
v___x_1836_ = lean_box_uint32(v_op_1827_);
v___x_1837_ = lean_box_uint64(v_flags_1828_);
lean_inc_ref(v___f_1834_);
v___f_1838_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1838_, 0, v_failurePrefix_1830_);
lean_closure_set(v___f_1838_, 1, v___x_1836_);
lean_closure_set(v___f_1838_, 2, v___x_1837_);
lean_closure_set(v___f_1838_, 3, v_payload_1829_);
lean_closure_set(v___f_1838_, 4, v___f_1835_);
lean_closure_set(v___f_1838_, 5, v___f_1834_);
lean_closure_set(v___f_1838_, 6, v___f_1834_);
v___f_1839_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1839_, 0, v___f_1838_);
v___x_1840_ = lean_unsigned_to_nat(0u);
v___x_1841_ = 0;
v___x_1846_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1854_; 
v_a_1847_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1849_ = v___x_1846_;
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_dec(v___x_1846_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1854_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1852_; 
if (v_isShared_1850_ == 0)
{
lean_ctor_set_tag(v___x_1849_, 1);
v___x_1852_ = v___x_1849_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1847_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
v_val_1843_ = v___x_1852_;
goto v___jp_1842_;
}
}
}
else
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1862_; 
v_a_1855_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1857_ = v___x_1846_;
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1846_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1862_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set_tag(v___x_1857_, 0);
v___x_1860_ = v___x_1857_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1855_);
v___x_1860_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
v_val_1843_ = v___x_1860_;
goto v___jp_1842_;
}
}
}
v___jp_1842_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1844_, 0, v_val_1843_);
v___x_1845_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1840_, v___x_1841_, v___x_1844_, v___f_1839_);
return v___x_1845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___boxed(lean_object* v_context_1863_, lean_object* v_op_1864_, lean_object* v_flags_1865_, lean_object* v_payload_1866_, lean_object* v_failurePrefix_1867_, lean_object* v_a_1868_){
_start:
{
uint32_t v_op_boxed_1869_; uint64_t v_flags_boxed_1870_; lean_object* v_res_1871_; 
v_op_boxed_1869_ = lean_unbox_uint32(v_op_1864_);
lean_dec(v_op_1864_);
v_flags_boxed_1870_ = lean_unbox_uint64(v_flags_1865_);
lean_dec_ref(v_flags_1865_);
v_res_1871_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1(v_context_1863_, v_op_boxed_1869_, v_flags_boxed_1870_, v_payload_1866_, v_failurePrefix_1867_);
return v_res_1871_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1872_; uint64_t v___x_1873_; 
v___x_1872_ = 0;
v___x_1873_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0(uint8_t v_await_1874_, uint64_t v_extra_1875_){
_start:
{
uint64_t v___x_1876_; uint64_t v___y_1878_; 
v___x_1876_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_1874_ == 0)
{
uint64_t v___x_1881_; 
v___x_1881_ = 0ULL;
v___y_1878_ = v___x_1881_;
goto v___jp_1877_;
}
else
{
uint64_t v___x_1882_; 
v___x_1882_ = 2ULL;
v___y_1878_ = v___x_1882_;
goto v___jp_1877_;
}
v___jp_1877_:
{
uint64_t v___x_1879_; uint64_t v___x_1880_; 
v___x_1879_ = lean_uint64_lor(v___x_1876_, v___y_1878_);
v___x_1880_ = lean_uint64_lor(v___x_1879_, v_extra_1875_);
return v___x_1880_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___boxed(lean_object* v_await_1883_, lean_object* v_extra_1884_){
_start:
{
uint8_t v_await_boxed_1885_; uint64_t v_extra_boxed_1886_; uint64_t v_res_1887_; lean_object* v_r_1888_; 
v_await_boxed_1885_ = lean_unbox(v_await_1883_);
v_extra_boxed_1886_ = lean_unbox_uint64(v_extra_1884_);
lean_dec_ref(v_extra_1884_);
v_res_1887_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0(v_await_boxed_1885_, v_extra_boxed_1886_);
v_r_1888_ = lean_box_uint64(v_res_1887_);
return v_r_1888_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1(void){
_start:
{
uint64_t v___x_1890_; uint8_t v___x_1891_; uint64_t v___x_1892_; 
v___x_1890_ = 8ULL;
v___x_1891_ = 0;
v___x_1892_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0(v___x_1891_, v___x_1890_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0(lean_object* v_o_1893_, lean_object* v_name_1894_, lean_object* v_args_1895_){
_start:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; uint32_t v___x_1902_; uint64_t v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1897_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_1898_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1898_, 0, v_o_1893_);
lean_ctor_set(v___x_1898_, 1, v___x_1897_);
lean_inc_ref(v_name_1894_);
v___x_1899_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1899_, 0, v_name_1894_);
v___x_1900_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_1901_ = lean_string_append(v___x_1900_, v_name_1894_);
lean_dec_ref(v_name_1894_);
v___x_1902_ = 205;
v___x_1903_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1);
v___x_1904_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1904_, 0, v_args_1895_);
v___x_1905_ = lean_unsigned_to_nat(3u);
v___x_1906_ = lean_mk_empty_array_with_capacity(v___x_1905_);
v___x_1907_ = lean_array_push(v___x_1906_, v___x_1898_);
v___x_1908_ = lean_array_push(v___x_1907_, v___x_1899_);
v___x_1909_ = lean_array_push(v___x_1908_, v___x_1904_);
v___x_1910_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
v___x_1911_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1(v___x_1901_, v___x_1902_, v___x_1903_, v___x_1910_, v___x_1897_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___boxed(lean_object* v_o_1912_, lean_object* v_name_1913_, lean_object* v_args_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0(v_o_1912_, v_name_1913_, v_args_1914_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_head(lean_object* v_self_1918_, lean_object* v_key_1919_){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1921_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_head___closed__0));
v___x_1922_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1922_, 0, v_key_1919_);
v___x_1923_ = lean_unsigned_to_nat(1u);
v___x_1924_ = lean_mk_empty_array_with_capacity(v___x_1923_);
v___x_1925_ = lean_array_push(v___x_1924_, v___x_1922_);
v___x_1926_ = l_Lasm_JS_Web_Support_args(v___x_1925_);
v___x_1927_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0(v_self_1918_, v___x_1921_, v___x_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_head___boxed(lean_object* v_self_1928_, lean_object* v_key_1929_, lean_object* v_a_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lasm_JS_Cloudflare_R2Bucket_head(v_self_1928_, v_key_1929_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__1(lean_object* v_x_1932_){
_start:
{
if (lean_obj_tag(v_x_1932_) == 0)
{
lean_object* v___x_1933_; 
v___x_1933_ = lean_box(0);
return v___x_1933_;
}
else
{
lean_object* v_val_1934_; 
v_val_1934_ = lean_ctor_get(v_x_1932_, 0);
lean_inc(v_val_1934_);
lean_dec_ref_known(v_x_1932_, 1);
if (lean_obj_tag(v_val_1934_) == 0)
{
lean_object* v_value_1935_; lean_object* v_offset_1936_; lean_object* v_length_1937_; lean_object* v_suffix_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v_value_1935_ = lean_ctor_get(v_val_1934_, 0);
lean_inc_ref(v_value_1935_);
lean_dec_ref_known(v_val_1934_, 1);
v_offset_1936_ = lean_ctor_get(v_value_1935_, 0);
lean_inc(v_offset_1936_);
v_length_1937_ = lean_ctor_get(v_value_1935_, 1);
lean_inc(v_length_1937_);
v_suffix_1938_ = lean_ctor_get(v_value_1935_, 2);
lean_inc(v_suffix_1938_);
lean_dec_ref(v_value_1935_);
v___x_1939_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
v___x_1940_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_offset_1936_);
lean_dec(v_offset_1936_);
v___x_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1939_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
v___x_1943_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_length_1937_);
v___x_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1942_);
lean_ctor_set(v___x_1944_, 1, v___x_1943_);
v___x_1945_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
v___x_1946_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_suffix_1938_);
lean_dec(v_suffix_1938_);
v___x_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1945_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
v___x_1948_ = lean_unsigned_to_nat(3u);
v___x_1949_ = lean_mk_empty_array_with_capacity(v___x_1948_);
v___x_1950_ = lean_array_push(v___x_1949_, v___x_1941_);
v___x_1951_ = lean_array_push(v___x_1950_, v___x_1944_);
v___x_1952_ = lean_array_push(v___x_1951_, v___x_1947_);
v___x_1953_ = l_Lasm_JS_Web_Support_fields(v___x_1952_);
lean_dec_ref(v___x_1952_);
return v___x_1953_;
}
else
{
lean_object* v_value_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v_value_1954_ = lean_ctor_get(v_val_1934_, 0);
lean_inc(v_value_1954_);
lean_dec_ref_known(v_val_1934_, 1);
v___x_1955_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_1956_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1956_, 0, v_value_1954_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
return v___x_1956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(lean_object* v_x_1957_){
_start:
{
if (lean_obj_tag(v_x_1957_) == 0)
{
lean_object* v___x_1958_; 
v___x_1958_ = lean_box(0);
return v___x_1958_;
}
else
{
lean_object* v_val_1959_; 
v_val_1959_ = lean_ctor_get(v_x_1957_, 0);
lean_inc(v_val_1959_);
lean_dec_ref_known(v_x_1957_, 1);
if (lean_obj_tag(v_val_1959_) == 0)
{
lean_object* v_value_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
v_value_1960_ = lean_ctor_get(v_val_1959_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v_val_1959_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v_val_1959_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_value_1960_);
lean_dec(v_val_1959_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
lean_ctor_set_tag(v___x_1962_, 6);
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_value_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
else
{
lean_object* v_value_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1975_; 
v_value_1968_ = lean_ctor_get(v_val_1959_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v_val_1959_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1970_ = v_val_1959_;
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_value_1968_);
lean_dec(v_val_1959_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1973_; 
if (v_isShared_1971_ == 0)
{
lean_ctor_set_tag(v___x_1970_, 4);
v___x_1973_ = v___x_1970_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_value_1968_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__0(lean_object* v_x_1976_){
_start:
{
if (lean_obj_tag(v_x_1976_) == 0)
{
lean_object* v___x_1977_; 
v___x_1977_ = lean_box(0);
return v___x_1977_;
}
else
{
lean_object* v_val_1978_; 
v_val_1978_ = lean_ctor_get(v_x_1976_, 0);
lean_inc(v_val_1978_);
lean_dec_ref_known(v_x_1976_, 1);
if (lean_obj_tag(v_val_1978_) == 0)
{
lean_object* v_value_1979_; lean_object* v_etagMatches_1980_; lean_object* v_etagDoesNotMatch_1981_; lean_object* v_uploadedBefore_1982_; lean_object* v_uploadedAfter_1983_; lean_object* v_secondsGranularity_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v_value_1979_ = lean_ctor_get(v_val_1978_, 0);
lean_inc_ref(v_value_1979_);
lean_dec_ref_known(v_val_1978_, 1);
v_etagMatches_1980_ = lean_ctor_get(v_value_1979_, 0);
lean_inc(v_etagMatches_1980_);
v_etagDoesNotMatch_1981_ = lean_ctor_get(v_value_1979_, 1);
lean_inc(v_etagDoesNotMatch_1981_);
v_uploadedBefore_1982_ = lean_ctor_get(v_value_1979_, 2);
lean_inc(v_uploadedBefore_1982_);
v_uploadedAfter_1983_ = lean_ctor_get(v_value_1979_, 3);
lean_inc(v_uploadedAfter_1983_);
v_secondsGranularity_1984_ = lean_ctor_get(v_value_1979_, 4);
lean_inc(v_secondsGranularity_1984_);
lean_dec_ref(v_value_1979_);
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__0));
v___x_1986_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_etagMatches_1980_);
v___x_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1985_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__1));
v___x_1989_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_etagDoesNotMatch_1981_);
v___x_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1988_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__2));
v___x_1992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1991_);
lean_ctor_set(v___x_1992_, 1, v_uploadedBefore_1982_);
v___x_1993_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__3));
v___x_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
lean_ctor_set(v___x_1994_, 1, v_uploadedAfter_1983_);
v___x_1995_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__4));
v___x_1996_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_secondsGranularity_1984_);
lean_dec(v_secondsGranularity_1984_);
v___x_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1995_);
lean_ctor_set(v___x_1997_, 1, v___x_1996_);
v___x_1998_ = lean_unsigned_to_nat(5u);
v___x_1999_ = lean_mk_empty_array_with_capacity(v___x_1998_);
v___x_2000_ = lean_array_push(v___x_1999_, v___x_1987_);
v___x_2001_ = lean_array_push(v___x_2000_, v___x_1990_);
v___x_2002_ = lean_array_push(v___x_2001_, v___x_1992_);
v___x_2003_ = lean_array_push(v___x_2002_, v___x_1994_);
v___x_2004_ = lean_array_push(v___x_2003_, v___x_1997_);
v___x_2005_ = l_Lasm_JS_Web_Support_fields(v___x_2004_);
lean_dec_ref(v___x_2004_);
return v___x_2005_;
}
else
{
lean_object* v_value_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v_value_2006_ = lean_ctor_get(v_val_1978_, 0);
lean_inc(v_value_2006_);
lean_dec_ref_known(v_val_1978_, 1);
v___x_2007_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2008_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2008_, 0, v_value_2006_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
return v___x_2008_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0(lean_object* v_x_2009_){
_start:
{
if (lean_obj_tag(v_x_2009_) == 0)
{
lean_object* v___x_2010_; 
v___x_2010_ = lean_box(0);
return v___x_2010_;
}
else
{
lean_object* v_val_2011_; lean_object* v_onlyIf_2012_; lean_object* v_range_2013_; lean_object* v_ssecKey_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v_val_2011_ = lean_ctor_get(v_x_2009_, 0);
lean_inc(v_val_2011_);
lean_dec_ref_known(v_x_2009_, 1);
v_onlyIf_2012_ = lean_ctor_get(v_val_2011_, 0);
lean_inc(v_onlyIf_2012_);
v_range_2013_ = lean_ctor_get(v_val_2011_, 1);
lean_inc(v_range_2013_);
v_ssecKey_2014_ = lean_ctor_get(v_val_2011_, 2);
lean_inc(v_ssecKey_2014_);
lean_dec(v_val_2011_);
v___x_2015_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0));
v___x_2016_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__0(v_onlyIf_2012_);
v___x_2017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2015_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
v___x_2018_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1));
v___x_2019_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__1(v_range_2013_);
v___x_2020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2018_);
lean_ctor_set(v___x_2020_, 1, v___x_2019_);
v___x_2021_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_2022_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(v_ssecKey_2014_);
v___x_2023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2021_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = lean_unsigned_to_nat(3u);
v___x_2025_ = lean_mk_empty_array_with_capacity(v___x_2024_);
v___x_2026_ = lean_array_push(v___x_2025_, v___x_2017_);
v___x_2027_ = lean_array_push(v___x_2026_, v___x_2020_);
v___x_2028_ = lean_array_push(v___x_2027_, v___x_2023_);
v___x_2029_ = l_Lasm_JS_Web_Support_fields(v___x_2028_);
lean_dec_ref(v___x_2028_);
return v___x_2029_;
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4(uint8_t v_await_2030_, uint64_t v_extra_2031_){
_start:
{
uint64_t v___x_2032_; uint64_t v___y_2034_; 
v___x_2032_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_2030_ == 0)
{
uint64_t v___x_2037_; 
v___x_2037_ = 0ULL;
v___y_2034_ = v___x_2037_;
goto v___jp_2033_;
}
else
{
uint64_t v___x_2038_; 
v___x_2038_ = 2ULL;
v___y_2034_ = v___x_2038_;
goto v___jp_2033_;
}
v___jp_2033_:
{
uint64_t v___x_2035_; uint64_t v___x_2036_; 
v___x_2035_ = lean_uint64_lor(v___x_2032_, v___y_2034_);
v___x_2036_ = lean_uint64_lor(v___x_2035_, v_extra_2031_);
return v___x_2036_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4___boxed(lean_object* v_await_2039_, lean_object* v_extra_2040_){
_start:
{
uint8_t v_await_boxed_2041_; uint64_t v_extra_boxed_2042_; uint64_t v_res_2043_; lean_object* v_r_2044_; 
v_await_boxed_2041_ = lean_unbox(v_await_2039_);
v_extra_boxed_2042_ = lean_unbox_uint64(v_extra_2040_);
lean_dec_ref(v_extra_2040_);
v_res_2043_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4(v_await_boxed_2041_, v_extra_boxed_2042_);
v_r_2044_ = lean_box_uint64(v_res_2043_);
return v_r_2044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6(lean_object* v_context_2046_, lean_object* v_d_2047_){
_start:
{
lean_object* v___y_2053_; lean_object* v___y_2054_; 
switch(lean_obj_tag(v_d_2047_))
{
case 1:
{
goto v___jp_2049_;
}
case 0:
{
goto v___jp_2049_;
}
default: 
{
if (lean_obj_tag(v_d_2047_) == 9)
{
lean_object* v_value_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v_value_2058_ = lean_ctor_get(v_d_2047_, 0);
lean_inc(v_value_2058_);
lean_dec_ref_known(v_d_2047_, 2);
v___x_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2059_, 0, v_value_2058_);
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
return v___x_2060_;
}
else
{
lean_object* v___x_2061_; lean_object* v_received_2063_; 
v___x_2061_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
if (lean_obj_tag(v_d_2047_) == 9)
{
lean_object* v_value_2077_; lean_object* v_description_2078_; uint8_t v___x_2079_; 
v_value_2077_ = lean_ctor_get(v_d_2047_, 0);
v_description_2078_ = lean_ctor_get(v_d_2047_, 1);
v___x_2079_ = lean_string_dec_eq(v_description_2078_, v___x_2061_);
if (v___x_2079_ == 0)
{
goto v___jp_2075_;
}
else
{
uint32_t v___x_2080_; uint64_t v___x_2081_; lean_object* v___x_2082_; uint32_t v___x_2083_; lean_object* v___x_2084_; 
lean_inc_n(v_value_2077_, 2);
lean_dec_ref_known(v_d_2047_, 2);
v___x_2080_ = 206;
v___x_2081_ = 0ULL;
v___x_2082_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2082_, 0, v_value_2077_);
lean_ctor_set(v___x_2082_, 1, v___x_2061_);
v___x_2083_ = lasm_js_value_handle(v_value_2077_);
lean_dec(v_value_2077_);
v___x_2084_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2080_, v___x_2081_, v___x_2082_, v___x_2083_);
lean_dec_ref_known(v___x_2082_, 2);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; uint8_t v___x_2086_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2084_, 1);
v___x_2086_ = lean_string_validate_utf8(v_a_2085_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
lean_dec(v_a_2085_);
v___x_2087_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_2088_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2087_);
v_received_2063_ = v___x_2088_;
goto v___jp_2062_;
}
else
{
lean_object* v___x_2089_; 
v___x_2089_ = lean_string_from_utf8_unchecked(v_a_2085_);
v_received_2063_ = v___x_2089_;
goto v___jp_2062_;
}
}
else
{
lean_object* v___x_2090_; 
lean_dec_ref_known(v___x_2084_, 1);
v___x_2090_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v_received_2063_ = v___x_2090_;
goto v___jp_2062_;
}
}
}
else
{
goto v___jp_2075_;
}
v___jp_2062_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; uint8_t v___x_2073_; 
v___x_2064_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_2065_ = lean_string_append(v___x_2064_, v_context_2046_);
v___x_2066_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_2067_ = lean_string_append(v___x_2065_, v___x_2066_);
v___x_2068_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6___closed__0));
v___x_2069_ = lean_string_append(v___x_2067_, v___x_2068_);
v___x_2070_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_2071_ = lean_string_append(v___x_2069_, v___x_2070_);
v___x_2072_ = lean_string_append(v___x_2071_, v_received_2063_);
lean_dec_ref(v_received_2063_);
v___x_2073_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; 
v___x_2074_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___y_2053_ = v___x_2072_;
v___y_2054_ = v___x_2074_;
goto v___jp_2052_;
}
else
{
v___y_2053_ = v___x_2072_;
v___y_2054_ = v___x_2061_;
goto v___jp_2052_;
}
}
v___jp_2075_:
{
lean_object* v___x_2076_; 
v___x_2076_ = l_Lasm_JS_Data_describe(v_d_2047_);
v_received_2063_ = v___x_2076_;
goto v___jp_2062_;
}
}
}
}
v___jp_2049_:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2050_ = lean_box(0);
v___x_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
return v___x_2051_;
}
v___jp_2052_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2055_ = lean_string_append(v___y_2053_, v___y_2054_);
v___x_2056_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
v___x_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
return v___x_2057_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6___boxed(lean_object* v_context_2091_, lean_object* v_d_2092_, lean_object* v_a_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6(v_context_2091_, v_d_2092_);
lean_dec_ref(v_context_2091_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0(lean_object* v_context_2095_, lean_object* v_x_2096_){
_start:
{
lean_object* v_val_2099_; 
if (lean_obj_tag(v_x_2096_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2109_; 
v_a_2101_ = lean_ctor_get(v_x_2096_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v_x_2096_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2103_ = v_x_2096_;
v_isShared_2104_ = v_isSharedCheck_2109_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v_x_2096_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2109_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
lean_object* v___x_2107_; 
v___x_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2106_);
return v___x_2107_;
}
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2123_; 
v_a_2110_ = lean_ctor_get(v_x_2096_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_x_2096_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2112_ = v_x_2096_;
v_isShared_2113_ = v_isSharedCheck_2123_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v_x_2096_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2123_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2114_; 
v___x_2114_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6(v_context_2095_, v_a_2110_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v___x_2117_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2115_);
lean_dec_ref_known(v___x_2114_, 1);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v_a_2115_);
v___x_2117_ = v___x_2112_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_a_2115_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
v_val_2099_ = v___x_2117_;
goto v___jp_2098_;
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; 
v_a_2119_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v___x_2114_, 1);
if (v_isShared_2113_ == 0)
{
lean_ctor_set_tag(v___x_2112_, 0);
lean_ctor_set(v___x_2112_, 0, v_a_2119_);
v___x_2121_ = v___x_2112_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_a_2119_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
v_val_2099_ = v___x_2121_;
goto v___jp_2098_;
}
}
}
}
v___jp_2098_:
{
lean_object* v___x_2100_; 
v___x_2100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2100_, 0, v_val_2099_);
return v___x_2100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0___boxed(lean_object* v_context_2124_, lean_object* v_x_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0(v_context_2124_, v_x_2125_);
lean_dec_ref(v_context_2124_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5(lean_object* v_context_2128_, uint32_t v_op_2129_, uint64_t v_flags_2130_, lean_object* v_payload_2131_, lean_object* v_failurePrefix_2132_){
_start:
{
lean_object* v___f_2134_; lean_object* v___f_2135_; lean_object* v___f_2136_; lean_object* v___f_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___f_2140_; lean_object* v___f_2141_; lean_object* v___x_2142_; uint8_t v___x_2143_; lean_object* v_val_2145_; lean_object* v___x_2148_; 
v___f_2134_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2134_, 0, v_context_2128_);
v___f_2135_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2135_, 0, v___f_2134_);
v___f_2136_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2136_, 0, v___f_2135_);
lean_inc_ref(v_failurePrefix_2132_);
v___f_2137_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2137_, 0, v_failurePrefix_2132_);
v___x_2138_ = lean_box_uint32(v_op_2129_);
v___x_2139_ = lean_box_uint64(v_flags_2130_);
lean_inc_ref(v___f_2136_);
v___f_2140_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2140_, 0, v_failurePrefix_2132_);
lean_closure_set(v___f_2140_, 1, v___x_2138_);
lean_closure_set(v___f_2140_, 2, v___x_2139_);
lean_closure_set(v___f_2140_, 3, v_payload_2131_);
lean_closure_set(v___f_2140_, 4, v___f_2137_);
lean_closure_set(v___f_2140_, 5, v___f_2136_);
lean_closure_set(v___f_2140_, 6, v___f_2136_);
v___f_2141_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2141_, 0, v___f_2140_);
v___x_2142_ = lean_unsigned_to_nat(0u);
v___x_2143_ = 0;
v___x_2148_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2148_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2148_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
lean_ctor_set_tag(v___x_2151_, 1);
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
v_val_2145_ = v___x_2154_;
goto v___jp_2144_;
}
}
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
v_a_2157_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2148_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2148_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
lean_ctor_set_tag(v___x_2159_, 0);
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
v_val_2145_ = v___x_2162_;
goto v___jp_2144_;
}
}
}
v___jp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2146_, 0, v_val_2145_);
v___x_2147_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2142_, v___x_2143_, v___x_2146_, v___f_2141_);
return v___x_2147_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___boxed(lean_object* v_context_2165_, lean_object* v_op_2166_, lean_object* v_flags_2167_, lean_object* v_payload_2168_, lean_object* v_failurePrefix_2169_, lean_object* v_a_2170_){
_start:
{
uint32_t v_op_boxed_2171_; uint64_t v_flags_boxed_2172_; lean_object* v_res_2173_; 
v_op_boxed_2171_ = lean_unbox_uint32(v_op_2166_);
lean_dec(v_op_2166_);
v_flags_boxed_2172_ = lean_unbox_uint64(v_flags_2167_);
lean_dec_ref(v_flags_2167_);
v_res_2173_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5(v_context_2165_, v_op_boxed_2171_, v_flags_boxed_2172_, v_payload_2168_, v_failurePrefix_2169_);
return v_res_2173_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2174_; uint8_t v___x_2175_; uint64_t v___x_2176_; 
v___x_2174_ = 8ULL;
v___x_2175_ = 0;
v___x_2176_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4(v___x_2175_, v___x_2174_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1(lean_object* v_o_2177_, lean_object* v_name_2178_, lean_object* v_args_2179_){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; uint32_t v___x_2186_; uint64_t v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2181_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2182_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2182_, 0, v_o_2177_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
lean_inc_ref(v_name_2178_);
v___x_2183_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2183_, 0, v_name_2178_);
v___x_2184_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_2185_ = lean_string_append(v___x_2184_, v_name_2178_);
lean_dec_ref(v_name_2178_);
v___x_2186_ = 205;
v___x_2187_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0);
v___x_2188_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2188_, 0, v_args_2179_);
v___x_2189_ = lean_unsigned_to_nat(3u);
v___x_2190_ = lean_mk_empty_array_with_capacity(v___x_2189_);
v___x_2191_ = lean_array_push(v___x_2190_, v___x_2182_);
v___x_2192_ = lean_array_push(v___x_2191_, v___x_2183_);
v___x_2193_ = lean_array_push(v___x_2192_, v___x_2188_);
v___x_2194_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
v___x_2195_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5(v___x_2185_, v___x_2186_, v___x_2187_, v___x_2194_, v___x_2181_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___boxed(lean_object* v_o_2196_, lean_object* v_name_2197_, lean_object* v_args_2198_, lean_object* v___y_2199_){
_start:
{
lean_object* v_res_2200_; 
v_res_2200_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1(v_o_2196_, v_name_2197_, v_args_2198_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_get(lean_object* v_self_2202_, lean_object* v_key_2203_, lean_object* v_options_2204_){
_start:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2206_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_get___closed__0));
v___x_2207_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2207_, 0, v_key_2203_);
v___x_2208_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0(v_options_2204_);
v___x_2209_ = lean_unsigned_to_nat(2u);
v___x_2210_ = lean_mk_empty_array_with_capacity(v___x_2209_);
v___x_2211_ = lean_array_push(v___x_2210_, v___x_2207_);
v___x_2212_ = lean_array_push(v___x_2211_, v___x_2208_);
v___x_2213_ = l_Lasm_JS_Web_Support_args(v___x_2212_);
v___x_2214_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1(v_self_2202_, v___x_2206_, v___x_2213_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_get___boxed(lean_object* v_self_2215_, lean_object* v_key_2216_, lean_object* v_options_2217_, lean_object* v_a_2218_){
_start:
{
lean_object* v_res_2219_; 
v_res_2219_ = l_Lasm_JS_Cloudflare_R2Bucket_get(v_self_2215_, v_key_2216_, v_options_2217_);
return v_res_2219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0(lean_object* v_x_2220_){
_start:
{
if (lean_obj_tag(v_x_2220_) == 0)
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2230_; 
v_a_2222_ = lean_ctor_get(v_x_2220_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v_x_2220_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2224_ = v_x_2220_;
v_isShared_2225_ = v_isSharedCheck_2230_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v_x_2220_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2230_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
lean_object* v___x_2228_; 
v___x_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
return v___x_2228_;
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2239_; 
v_a_2231_ = lean_ctor_get(v_x_2220_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v_x_2220_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2233_ = v_x_2220_;
v_isShared_2234_ = v_isSharedCheck_2239_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v_x_2220_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2239_;
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
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
return v___x_2237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0___boxed(lean_object* v_x_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0(v_x_2240_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(lean_object* v_x_2243_){
_start:
{
if (lean_obj_tag(v_x_2243_) == 0)
{
lean_object* v___x_2244_; 
v___x_2244_ = lean_box(0);
return v___x_2244_;
}
else
{
lean_object* v_val_2245_; 
v_val_2245_ = lean_ctor_get(v_x_2243_, 0);
lean_inc(v_val_2245_);
lean_dec_ref_known(v_x_2243_, 1);
if (lean_obj_tag(v_val_2245_) == 0)
{
lean_object* v_value_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
v_value_2246_ = lean_ctor_get(v_val_2245_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v_val_2245_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v_val_2245_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_value_2246_);
lean_dec(v_val_2245_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
lean_ctor_set_tag(v___x_2248_, 4);
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_value_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
else
{
lean_object* v_value_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2261_; 
v_value_2254_ = lean_ctor_get(v_val_2245_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v_val_2245_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2256_ = v_val_2245_;
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_value_2254_);
lean_dec(v_val_2245_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2259_; 
if (v_isShared_2257_ == 0)
{
lean_ctor_set_tag(v___x_2256_, 6);
v___x_2259_ = v___x_2256_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_value_2254_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__0(lean_object* v_x_2262_){
_start:
{
if (lean_obj_tag(v_x_2262_) == 0)
{
lean_object* v___x_2263_; 
v___x_2263_ = lean_box(0);
return v___x_2263_;
}
else
{
lean_object* v_val_2264_; 
v_val_2264_ = lean_ctor_get(v_x_2262_, 0);
lean_inc(v_val_2264_);
lean_dec_ref_known(v_x_2262_, 1);
if (lean_obj_tag(v_val_2264_) == 0)
{
lean_object* v_value_2265_; lean_object* v_contentType_2266_; lean_object* v_contentLanguage_2267_; lean_object* v_contentDisposition_2268_; lean_object* v_contentEncoding_2269_; lean_object* v_cacheControl_2270_; lean_object* v_cacheExpiry_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v_value_2265_ = lean_ctor_get(v_val_2264_, 0);
lean_inc_ref(v_value_2265_);
lean_dec_ref_known(v_val_2264_, 1);
v_contentType_2266_ = lean_ctor_get(v_value_2265_, 0);
lean_inc(v_contentType_2266_);
v_contentLanguage_2267_ = lean_ctor_get(v_value_2265_, 1);
lean_inc(v_contentLanguage_2267_);
v_contentDisposition_2268_ = lean_ctor_get(v_value_2265_, 2);
lean_inc(v_contentDisposition_2268_);
v_contentEncoding_2269_ = lean_ctor_get(v_value_2265_, 3);
lean_inc(v_contentEncoding_2269_);
v_cacheControl_2270_ = lean_ctor_get(v_value_2265_, 4);
lean_inc(v_cacheControl_2270_);
v_cacheExpiry_2271_ = lean_ctor_get(v_value_2265_, 5);
lean_inc(v_cacheExpiry_2271_);
lean_dec_ref(v_value_2265_);
v___x_2272_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
v___x_2273_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentType_2266_);
v___x_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2272_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
v___x_2275_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
v___x_2276_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentLanguage_2267_);
v___x_2277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2275_);
lean_ctor_set(v___x_2277_, 1, v___x_2276_);
v___x_2278_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
v___x_2279_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentDisposition_2268_);
v___x_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2278_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
v___x_2281_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
v___x_2282_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentEncoding_2269_);
v___x_2283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2281_);
lean_ctor_set(v___x_2283_, 1, v___x_2282_);
v___x_2284_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
v___x_2285_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_cacheControl_2270_);
v___x_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
v___x_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2287_);
lean_ctor_set(v___x_2288_, 1, v_cacheExpiry_2271_);
v___x_2289_ = lean_unsigned_to_nat(6u);
v___x_2290_ = lean_mk_empty_array_with_capacity(v___x_2289_);
v___x_2291_ = lean_array_push(v___x_2290_, v___x_2274_);
v___x_2292_ = lean_array_push(v___x_2291_, v___x_2277_);
v___x_2293_ = lean_array_push(v___x_2292_, v___x_2280_);
v___x_2294_ = lean_array_push(v___x_2293_, v___x_2283_);
v___x_2295_ = lean_array_push(v___x_2294_, v___x_2286_);
v___x_2296_ = lean_array_push(v___x_2295_, v___x_2288_);
v___x_2297_ = l_Lasm_JS_Web_Support_fields(v___x_2296_);
lean_dec_ref(v___x_2296_);
return v___x_2297_;
}
else
{
lean_object* v_value_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v_value_2298_ = lean_ctor_get(v_val_2264_, 0);
lean_inc(v_value_2298_);
lean_dec_ref_known(v_val_2264_, 1);
v___x_2299_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2300_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2300_, 0, v_value_2298_);
lean_ctor_set(v___x_2300_, 1, v___x_2299_);
return v___x_2300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__1(lean_object* v_x_2301_){
_start:
{
if (lean_obj_tag(v_x_2301_) == 0)
{
lean_object* v___x_2302_; 
v___x_2302_ = lean_box(0);
return v___x_2302_;
}
else
{
lean_object* v_val_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2313_; 
v_val_2303_ = lean_ctor_get(v_x_2301_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v_x_2301_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2305_ = v_x_2301_;
v_isShared_2306_ = v_isSharedCheck_2313_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_val_2303_);
lean_dec(v_x_2301_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2313_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
size_t v_sz_2307_; size_t v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2311_; 
v_sz_2307_ = lean_array_size(v_val_2303_);
v___x_2308_ = ((size_t)0ULL);
v___x_2309_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_2307_, v___x_2308_, v_val_2303_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set_tag(v___x_2305_, 8);
lean_ctor_set(v___x_2305_, 0, v___x_2309_);
v___x_2311_ = v___x_2305_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0(lean_object* v_x_2314_){
_start:
{
if (lean_obj_tag(v_x_2314_) == 0)
{
lean_object* v___x_2315_; 
v___x_2315_ = lean_box(0);
return v___x_2315_;
}
else
{
lean_object* v_val_2316_; lean_object* v_onlyIf_2317_; lean_object* v_httpMetadata_2318_; lean_object* v_customMetadata_2319_; lean_object* v_md5_2320_; lean_object* v_sha1_2321_; lean_object* v_sha256_2322_; lean_object* v_sha384_2323_; lean_object* v_sha512_2324_; lean_object* v_storageClass_2325_; lean_object* v_ssecKey_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v_val_2316_ = lean_ctor_get(v_x_2314_, 0);
lean_inc(v_val_2316_);
lean_dec_ref_known(v_x_2314_, 1);
v_onlyIf_2317_ = lean_ctor_get(v_val_2316_, 0);
lean_inc(v_onlyIf_2317_);
v_httpMetadata_2318_ = lean_ctor_get(v_val_2316_, 1);
lean_inc(v_httpMetadata_2318_);
v_customMetadata_2319_ = lean_ctor_get(v_val_2316_, 2);
lean_inc(v_customMetadata_2319_);
v_md5_2320_ = lean_ctor_get(v_val_2316_, 3);
lean_inc(v_md5_2320_);
v_sha1_2321_ = lean_ctor_get(v_val_2316_, 4);
lean_inc(v_sha1_2321_);
v_sha256_2322_ = lean_ctor_get(v_val_2316_, 5);
lean_inc(v_sha256_2322_);
v_sha384_2323_ = lean_ctor_get(v_val_2316_, 6);
lean_inc(v_sha384_2323_);
v_sha512_2324_ = lean_ctor_get(v_val_2316_, 7);
lean_inc(v_sha512_2324_);
v_storageClass_2325_ = lean_ctor_get(v_val_2316_, 8);
lean_inc(v_storageClass_2325_);
v_ssecKey_2326_ = lean_ctor_get(v_val_2316_, 9);
lean_inc(v_ssecKey_2326_);
lean_dec(v_val_2316_);
v___x_2327_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0));
v___x_2328_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__0(v_onlyIf_2317_);
v___x_2329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
v___x_2330_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_2331_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__0(v_httpMetadata_2318_);
v___x_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2330_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_2334_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__1(v_customMetadata_2319_);
v___x_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
v___x_2337_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_md5_2320_);
v___x_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2336_);
lean_ctor_set(v___x_2338_, 1, v___x_2337_);
v___x_2339_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
v___x_2340_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_sha1_2321_);
v___x_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2339_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
v___x_2342_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
v___x_2343_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_sha256_2322_);
v___x_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2342_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
v___x_2346_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_sha384_2323_);
v___x_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2345_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
v___x_2348_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
v___x_2349_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_sha512_2324_);
v___x_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2348_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
v___x_2351_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_2352_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_storageClass_2325_);
v___x_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2351_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
v___x_2354_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_2355_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(v_ssecKey_2326_);
v___x_2356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2354_);
lean_ctor_set(v___x_2356_, 1, v___x_2355_);
v___x_2357_ = lean_unsigned_to_nat(10u);
v___x_2358_ = lean_mk_empty_array_with_capacity(v___x_2357_);
v___x_2359_ = lean_array_push(v___x_2358_, v___x_2329_);
v___x_2360_ = lean_array_push(v___x_2359_, v___x_2332_);
v___x_2361_ = lean_array_push(v___x_2360_, v___x_2335_);
v___x_2362_ = lean_array_push(v___x_2361_, v___x_2338_);
v___x_2363_ = lean_array_push(v___x_2362_, v___x_2341_);
v___x_2364_ = lean_array_push(v___x_2363_, v___x_2344_);
v___x_2365_ = lean_array_push(v___x_2364_, v___x_2347_);
v___x_2366_ = lean_array_push(v___x_2365_, v___x_2350_);
v___x_2367_ = lean_array_push(v___x_2366_, v___x_2353_);
v___x_2368_ = lean_array_push(v___x_2367_, v___x_2356_);
v___x_2369_ = l_Lasm_JS_Web_Support_fields(v___x_2368_);
lean_dec_ref(v___x_2368_);
return v___x_2369_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put(lean_object* v_self_2372_, lean_object* v_key_2373_, lean_object* v_value_2374_, lean_object* v_options_2375_){
_start:
{
lean_object* v___f_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___y_2381_; 
v___f_2377_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0));
v___x_2378_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__1));
v___x_2379_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2379_, 0, v_key_2373_);
if (lean_obj_tag(v_value_2374_) == 0)
{
lean_object* v___x_2393_; 
v___x_2393_ = lean_box(1);
v___y_2381_ = v___x_2393_;
goto v___jp_2380_;
}
else
{
lean_object* v_val_2394_; 
v_val_2394_ = lean_ctor_get(v_value_2374_, 0);
lean_inc(v_val_2394_);
lean_dec_ref_known(v_value_2374_, 1);
switch(lean_obj_tag(v_val_2394_))
{
case 1:
{
lean_object* v_value_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
v_value_2395_ = lean_ctor_get(v_val_2394_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v_val_2394_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v_val_2394_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_value_2395_);
lean_dec(v_val_2394_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
lean_ctor_set_tag(v___x_2397_, 4);
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_value_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
v___y_2381_ = v___x_2400_;
goto v___jp_2380_;
}
}
}
case 3:
{
lean_object* v_value_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
v_value_2403_ = lean_ctor_get(v_val_2394_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v_val_2394_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v_val_2394_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_value_2403_);
lean_dec(v_val_2394_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
lean_ctor_set_tag(v___x_2405_, 6);
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_value_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
v___y_2381_ = v___x_2408_;
goto v___jp_2380_;
}
}
}
default: 
{
lean_object* v_value_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
v_value_2411_ = lean_ctor_get(v_val_2394_, 0);
lean_inc(v_value_2411_);
lean_dec(v_val_2394_);
v___x_2412_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2413_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2413_, 0, v_value_2411_);
lean_ctor_set(v___x_2413_, 1, v___x_2412_);
v___y_2381_ = v___x_2413_;
goto v___jp_2380_;
}
}
}
v___jp_2380_:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; uint8_t v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2382_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0(v_options_2375_);
v___x_2383_ = lean_unsigned_to_nat(3u);
v___x_2384_ = lean_mk_empty_array_with_capacity(v___x_2383_);
v___x_2385_ = lean_array_push(v___x_2384_, v___x_2379_);
v___x_2386_ = lean_array_push(v___x_2385_, v___y_2381_);
v___x_2387_ = lean_array_push(v___x_2386_, v___x_2382_);
v___x_2388_ = l_Lasm_JS_Web_Support_args(v___x_2387_);
v___x_2389_ = lean_unsigned_to_nat(0u);
v___x_2390_ = 0;
v___x_2391_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2372_, v___x_2378_, v___x_2388_);
v___x_2392_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2389_, v___x_2390_, v___x_2391_, v___f_2377_);
return v___x_2392_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___boxed(lean_object* v_self_2414_, lean_object* v_key_2415_, lean_object* v_value_2416_, lean_object* v_options_2417_, lean_object* v_a_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lasm_JS_Cloudflare_R2Bucket_put(v_self_2414_, v_key_2415_, v_value_2416_, v_options_2417_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload_spec__0(lean_object* v_x_2420_){
_start:
{
if (lean_obj_tag(v_x_2420_) == 0)
{
lean_object* v___x_2421_; 
v___x_2421_ = lean_box(0);
return v___x_2421_;
}
else
{
lean_object* v_val_2422_; lean_object* v_httpMetadata_2423_; lean_object* v_customMetadata_2424_; lean_object* v_storageClass_2425_; lean_object* v_ssecKey_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
v_val_2422_ = lean_ctor_get(v_x_2420_, 0);
lean_inc(v_val_2422_);
lean_dec_ref_known(v_x_2420_, 1);
v_httpMetadata_2423_ = lean_ctor_get(v_val_2422_, 0);
lean_inc(v_httpMetadata_2423_);
v_customMetadata_2424_ = lean_ctor_get(v_val_2422_, 1);
lean_inc(v_customMetadata_2424_);
v_storageClass_2425_ = lean_ctor_get(v_val_2422_, 2);
lean_inc(v_storageClass_2425_);
v_ssecKey_2426_ = lean_ctor_get(v_val_2422_, 3);
lean_inc(v_ssecKey_2426_);
lean_dec(v_val_2422_);
v___x_2427_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_2428_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__0(v_httpMetadata_2423_);
v___x_2429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2427_);
lean_ctor_set(v___x_2429_, 1, v___x_2428_);
v___x_2430_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_2431_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__1(v_customMetadata_2424_);
v___x_2432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2432_, 0, v___x_2430_);
lean_ctor_set(v___x_2432_, 1, v___x_2431_);
v___x_2433_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_2434_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_storageClass_2425_);
v___x_2435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2433_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_2437_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(v_ssecKey_2426_);
v___x_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2436_);
lean_ctor_set(v___x_2438_, 1, v___x_2437_);
v___x_2439_ = lean_unsigned_to_nat(4u);
v___x_2440_ = lean_mk_empty_array_with_capacity(v___x_2439_);
v___x_2441_ = lean_array_push(v___x_2440_, v___x_2429_);
v___x_2442_ = lean_array_push(v___x_2441_, v___x_2432_);
v___x_2443_ = lean_array_push(v___x_2442_, v___x_2435_);
v___x_2444_ = lean_array_push(v___x_2443_, v___x_2438_);
v___x_2445_ = l_Lasm_JS_Web_Support_fields(v___x_2444_);
lean_dec_ref(v___x_2444_);
return v___x_2445_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload(lean_object* v_self_2447_, lean_object* v_key_2448_, lean_object* v_options_2449_){
_start:
{
lean_object* v___f_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___f_2451_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0));
v___x_2452_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload___closed__0));
v___x_2453_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2453_, 0, v_key_2448_);
v___x_2454_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload_spec__0(v_options_2449_);
v___x_2455_ = lean_unsigned_to_nat(2u);
v___x_2456_ = lean_mk_empty_array_with_capacity(v___x_2455_);
v___x_2457_ = lean_array_push(v___x_2456_, v___x_2453_);
v___x_2458_ = lean_array_push(v___x_2457_, v___x_2454_);
v___x_2459_ = l_Lasm_JS_Web_Support_args(v___x_2458_);
v___x_2460_ = lean_unsigned_to_nat(0u);
v___x_2461_ = 0;
v___x_2462_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2447_, v___x_2452_, v___x_2459_);
v___x_2463_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2460_, v___x_2461_, v___x_2462_, v___f_2451_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload___boxed(lean_object* v_self_2464_, lean_object* v_key_2465_, lean_object* v_options_2466_, lean_object* v_a_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload(v_self_2464_, v_key_2465_, v_options_2466_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload(lean_object* v_self_2470_, lean_object* v_key_2471_, lean_object* v_uploadId_2472_){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2474_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload___closed__0));
v___x_2475_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2475_, 0, v_key_2471_);
v___x_2476_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2476_, 0, v_uploadId_2472_);
v___x_2477_ = lean_unsigned_to_nat(2u);
v___x_2478_ = lean_mk_empty_array_with_capacity(v___x_2477_);
v___x_2479_ = lean_array_push(v___x_2478_, v___x_2475_);
v___x_2480_ = lean_array_push(v___x_2479_, v___x_2476_);
v___x_2481_ = l_Lasm_JS_Web_Support_args(v___x_2480_);
v___x_2482_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2470_, v___x_2474_, v___x_2481_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2482_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2482_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
v_a_2491_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2482_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2482_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload___boxed(lean_object* v_self_2499_, lean_object* v_key_2500_, lean_object* v_uploadId_2501_, lean_object* v_a_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload(v_self_2499_, v_key_2500_, v_uploadId_2501_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_delete(lean_object* v_self_2505_, lean_object* v_keys_2506_){
_start:
{
lean_object* v___x_2508_; lean_object* v___y_2510_; 
v___x_2508_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_delete___closed__0));
if (lean_obj_tag(v_keys_2506_) == 0)
{
lean_object* v_value_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
v_value_2516_ = lean_ctor_get(v_keys_2506_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v_keys_2506_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v_keys_2506_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_value_2516_);
lean_dec(v_keys_2506_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
lean_ctor_set_tag(v___x_2518_, 4);
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_value_2516_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
v___y_2510_ = v___x_2521_;
goto v___jp_2509_;
}
}
}
else
{
lean_object* v_value_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2534_; 
v_value_2524_ = lean_ctor_get(v_keys_2506_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v_keys_2506_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2526_ = v_keys_2506_;
v_isShared_2527_ = v_isSharedCheck_2534_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_value_2524_);
lean_dec(v_keys_2506_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2534_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
size_t v_sz_2528_; size_t v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2532_; 
v_sz_2528_ = lean_array_size(v_value_2524_);
v___x_2529_ = ((size_t)0ULL);
v___x_2530_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2528_, v___x_2529_, v_value_2524_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set_tag(v___x_2526_, 7);
lean_ctor_set(v___x_2526_, 0, v___x_2530_);
v___x_2532_ = v___x_2526_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v___x_2530_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
v___y_2510_ = v___x_2532_;
goto v___jp_2509_;
}
}
}
v___jp_2509_:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2511_ = lean_unsigned_to_nat(1u);
v___x_2512_ = lean_mk_empty_array_with_capacity(v___x_2511_);
v___x_2513_ = lean_array_push(v___x_2512_, v___y_2510_);
v___x_2514_ = l_Lasm_JS_Web_Support_args(v___x_2513_);
v___x_2515_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2505_, v___x_2508_, v___x_2514_);
return v___x_2515_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_delete___boxed(lean_object* v_self_2535_, lean_object* v_keys_2536_, lean_object* v_a_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Lasm_JS_Cloudflare_R2Bucket_delete(v_self_2535_, v_keys_2536_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1(size_t v_sz_2539_, size_t v_i_2540_, lean_object* v_bs_2541_){
_start:
{
uint8_t v___x_2542_; 
v___x_2542_ = lean_usize_dec_lt(v_i_2540_, v_sz_2539_);
if (v___x_2542_ == 0)
{
return v_bs_2541_;
}
else
{
lean_object* v_v_2543_; lean_object* v___x_2544_; lean_object* v_bs_x27_2545_; lean_object* v___y_2547_; uint8_t v___x_2552_; 
v_v_2543_ = lean_array_uget(v_bs_2541_, v_i_2540_);
v___x_2544_ = lean_unsigned_to_nat(0u);
v_bs_x27_2545_ = lean_array_uset(v_bs_2541_, v_i_2540_, v___x_2544_);
v___x_2552_ = lean_unbox(v_v_2543_);
lean_dec(v_v_2543_);
if (v___x_2552_ == 0)
{
lean_object* v___x_2553_; 
v___x_2553_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__1));
v___y_2547_ = v___x_2553_;
goto v___jp_2546_;
}
else
{
lean_object* v___x_2554_; 
v___x_2554_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__3));
v___y_2547_ = v___x_2554_;
goto v___jp_2546_;
}
v___jp_2546_:
{
size_t v___x_2548_; size_t v___x_2549_; lean_object* v___x_2550_; 
v___x_2548_ = ((size_t)1ULL);
v___x_2549_ = lean_usize_add(v_i_2540_, v___x_2548_);
lean_inc(v___y_2547_);
v___x_2550_ = lean_array_uset(v_bs_x27_2545_, v_i_2540_, v___y_2547_);
v_i_2540_ = v___x_2549_;
v_bs_2541_ = v___x_2550_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_2555_, lean_object* v_i_2556_, lean_object* v_bs_2557_){
_start:
{
size_t v_sz_boxed_2558_; size_t v_i_boxed_2559_; lean_object* v_res_2560_; 
v_sz_boxed_2558_ = lean_unbox_usize(v_sz_2555_);
lean_dec(v_sz_2555_);
v_i_boxed_2559_ = lean_unbox_usize(v_i_2556_);
lean_dec(v_i_2556_);
v_res_2560_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1(v_sz_boxed_2558_, v_i_boxed_2559_, v_bs_2557_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0(lean_object* v_x_2561_){
_start:
{
if (lean_obj_tag(v_x_2561_) == 0)
{
lean_object* v___x_2562_; 
v___x_2562_ = lean_box(0);
return v___x_2562_;
}
else
{
lean_object* v_val_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2573_; 
v_val_2563_ = lean_ctor_get(v_x_2561_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v_x_2561_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2565_ = v_x_2561_;
v_isShared_2566_ = v_isSharedCheck_2573_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_val_2563_);
lean_dec(v_x_2561_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2573_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
size_t v_sz_2567_; size_t v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2571_; 
v_sz_2567_ = lean_array_size(v_val_2563_);
v___x_2568_ = ((size_t)0ULL);
v___x_2569_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1(v_sz_2567_, v___x_2568_, v_val_2563_);
if (v_isShared_2566_ == 0)
{
lean_ctor_set_tag(v___x_2565_, 7);
lean_ctor_set(v___x_2565_, 0, v___x_2569_);
v___x_2571_ = v___x_2565_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v___x_2569_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0(lean_object* v_x_2574_){
_start:
{
if (lean_obj_tag(v_x_2574_) == 0)
{
lean_object* v___x_2575_; 
v___x_2575_ = lean_box(0);
return v___x_2575_;
}
else
{
lean_object* v_val_2576_; lean_object* v_limit_2577_; lean_object* v_prefix_2578_; lean_object* v_cursor_2579_; lean_object* v_delimiter_2580_; lean_object* v_startAfter_2581_; lean_object* v_include_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v_val_2576_ = lean_ctor_get(v_x_2574_, 0);
lean_inc(v_val_2576_);
lean_dec_ref_known(v_x_2574_, 1);
v_limit_2577_ = lean_ctor_get(v_val_2576_, 0);
lean_inc(v_limit_2577_);
v_prefix_2578_ = lean_ctor_get(v_val_2576_, 1);
lean_inc(v_prefix_2578_);
v_cursor_2579_ = lean_ctor_get(v_val_2576_, 2);
lean_inc(v_cursor_2579_);
v_delimiter_2580_ = lean_ctor_get(v_val_2576_, 3);
lean_inc(v_delimiter_2580_);
v_startAfter_2581_ = lean_ctor_get(v_val_2576_, 4);
lean_inc(v_startAfter_2581_);
v_include_2582_ = lean_ctor_get(v_val_2576_, 5);
lean_inc(v_include_2582_);
lean_dec(v_val_2576_);
v___x_2583_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__0));
v___x_2584_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_limit_2577_);
v___x_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2583_);
lean_ctor_set(v___x_2585_, 1, v___x_2584_);
v___x_2586_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__1));
v___x_2587_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_2578_);
v___x_2588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2586_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2));
v___x_2590_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_cursor_2579_);
v___x_2591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2589_);
lean_ctor_set(v___x_2591_, 1, v___x_2590_);
v___x_2592_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__3));
v___x_2593_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_delimiter_2580_);
v___x_2594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2592_);
lean_ctor_set(v___x_2594_, 1, v___x_2593_);
v___x_2595_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__4));
v___x_2596_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_startAfter_2581_);
v___x_2597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2595_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
v___x_2598_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__5));
v___x_2599_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0(v_include_2582_);
v___x_2600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2598_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
v___x_2601_ = lean_unsigned_to_nat(6u);
v___x_2602_ = lean_mk_empty_array_with_capacity(v___x_2601_);
v___x_2603_ = lean_array_push(v___x_2602_, v___x_2585_);
v___x_2604_ = lean_array_push(v___x_2603_, v___x_2588_);
v___x_2605_ = lean_array_push(v___x_2604_, v___x_2591_);
v___x_2606_ = lean_array_push(v___x_2605_, v___x_2594_);
v___x_2607_ = lean_array_push(v___x_2606_, v___x_2597_);
v___x_2608_ = lean_array_push(v___x_2607_, v___x_2600_);
v___x_2609_ = l_Lasm_JS_Web_Support_fields(v___x_2608_);
lean_dec_ref(v___x_2608_);
return v___x_2609_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7(lean_object* v_d_2621_, lean_object* v_key_2622_){
_start:
{
if (lean_obj_tag(v_d_2621_) == 8)
{
lean_object* v___x_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2667_; 
v___x_2623_ = l_Lasm_JS_Data_field(v_d_2621_, v_key_2622_);
v_isSharedCheck_2667_ = !lean_is_exclusive(v_d_2621_);
if (v_isSharedCheck_2667_ == 0)
{
lean_object* v_unused_2668_; 
v_unused_2668_ = lean_ctor_get(v_d_2621_, 0);
lean_dec(v_unused_2668_);
v___x_2625_ = v_d_2621_;
v_isShared_2626_ = v_isSharedCheck_2667_;
goto v_resetjp_2624_;
}
else
{
lean_dec(v_d_2621_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2667_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v_a_2628_; 
if (lean_obj_tag(v___x_2623_) == 7)
{
lean_object* v_items_2653_; size_t v_sz_2654_; size_t v___x_2655_; lean_object* v___x_2656_; 
v_items_2653_ = lean_ctor_get(v___x_2623_, 0);
lean_inc_ref(v_items_2653_);
v_sz_2654_ = lean_array_size(v_items_2653_);
v___x_2655_ = ((size_t)0ULL);
v___x_2656_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_2654_, v___x_2655_, v_items_2653_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; uint8_t v___x_2661_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2657_);
lean_dec_ref_known(v___x_2656_, 1);
v___x_2658_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__6));
v___x_2659_ = lean_string_utf8_byte_size(v_a_2657_);
v___x_2660_ = lean_unsigned_to_nat(0u);
v___x_2661_ = lean_nat_dec_eq(v___x_2659_, v___x_2660_);
if (v___x_2661_ == 0)
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2662_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__7));
v___x_2663_ = lean_string_append(v___x_2662_, v_a_2657_);
lean_dec(v_a_2657_);
v___x_2664_ = lean_string_append(v___x_2658_, v___x_2663_);
lean_dec_ref(v___x_2663_);
v_a_2628_ = v___x_2664_;
goto v___jp_2627_;
}
else
{
lean_dec(v_a_2657_);
v_a_2628_ = v___x_2658_;
goto v___jp_2627_;
}
}
else
{
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2665_; 
v_a_2665_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2665_);
lean_dec_ref_known(v___x_2656_, 1);
v_a_2628_ = v_a_2665_;
goto v___jp_2627_;
}
else
{
lean_dec_ref_known(v___x_2623_, 1);
lean_del_object(v___x_2625_);
return v___x_2656_;
}
}
}
else
{
lean_object* v___x_2666_; 
v___x_2666_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v_a_2628_ = v___x_2666_;
goto v___jp_2627_;
}
v___jp_2627_:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; uint8_t v___x_2641_; 
v___x_2629_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_2630_ = lean_string_append(v___x_2629_, v_key_2622_);
v___x_2631_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_2632_ = lean_string_append(v___x_2630_, v___x_2631_);
v___x_2633_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__2));
v___x_2634_ = lean_string_append(v___x_2632_, v___x_2633_);
v___x_2635_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_2636_ = lean_string_append(v___x_2634_, v___x_2635_);
v___x_2637_ = l_Lasm_JS_Data_describe(v___x_2623_);
v___x_2638_ = lean_string_append(v___x_2636_, v___x_2637_);
lean_dec_ref(v___x_2637_);
v___x_2639_ = lean_string_utf8_byte_size(v_a_2628_);
v___x_2640_ = lean_unsigned_to_nat(0u);
v___x_2641_ = lean_nat_dec_eq(v___x_2639_, v___x_2640_);
if (v___x_2641_ == 0)
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2648_; 
v___x_2642_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_2643_ = lean_string_append(v___x_2642_, v_a_2628_);
lean_dec_ref(v_a_2628_);
v___x_2644_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_2645_ = lean_string_append(v___x_2643_, v___x_2644_);
v___x_2646_ = lean_string_append(v___x_2638_, v___x_2645_);
lean_dec_ref(v___x_2645_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set_tag(v___x_2625_, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2646_);
v___x_2648_ = v___x_2625_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v___x_2646_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
else
{
lean_object* v___x_2651_; 
lean_dec_ref(v_a_2628_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set_tag(v___x_2625_, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2638_);
v___x_2651_ = v___x_2625_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v___x_2638_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
}
else
{
lean_object* v___x_2669_; 
lean_dec(v_d_2621_);
v___x_2669_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__9));
return v___x_2669_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___boxed(lean_object* v_d_2670_, lean_object* v_key_2671_){
_start:
{
lean_object* v_res_2672_; 
v_res_2672_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7(v_d_2670_, v_key_2671_);
lean_dec_ref(v_key_2671_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7(size_t v_sz_2675_, size_t v_i_2676_, lean_object* v_bs_2677_){
_start:
{
uint8_t v___x_2678_; 
v___x_2678_ = lean_usize_dec_lt(v_i_2676_, v_sz_2675_);
if (v___x_2678_ == 0)
{
lean_object* v___x_2679_; 
v___x_2679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2679_, 0, v_bs_2677_);
return v___x_2679_;
}
else
{
lean_object* v_v_2680_; 
v_v_2680_ = lean_array_uget_borrowed(v_bs_2677_, v_i_2676_);
if (lean_obj_tag(v_v_2680_) == 9)
{
lean_object* v_value_2681_; lean_object* v___x_2682_; lean_object* v_bs_x27_2683_; size_t v___x_2684_; size_t v___x_2685_; lean_object* v___x_2686_; 
v_value_2681_ = lean_ctor_get(v_v_2680_, 0);
lean_inc(v_value_2681_);
v___x_2682_ = lean_unsigned_to_nat(0u);
v_bs_x27_2683_ = lean_array_uset(v_bs_2677_, v_i_2676_, v___x_2682_);
v___x_2684_ = ((size_t)1ULL);
v___x_2685_ = lean_usize_add(v_i_2676_, v___x_2684_);
v___x_2686_ = lean_array_uset(v_bs_x27_2683_, v_i_2676_, v_value_2681_);
v_i_2676_ = v___x_2685_;
v_bs_2677_ = v___x_2686_;
goto _start;
}
else
{
lean_object* v___x_2688_; 
lean_dec_ref(v_bs_2677_);
v___x_2688_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0));
return v___x_2688_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7___boxed(lean_object* v_sz_2689_, lean_object* v_i_2690_, lean_object* v_bs_2691_){
_start:
{
size_t v_sz_boxed_2692_; size_t v_i_boxed_2693_; lean_object* v_res_2694_; 
v_sz_boxed_2692_ = lean_unbox_usize(v_sz_2689_);
lean_dec(v_sz_2689_);
v_i_boxed_2693_ = lean_unbox_usize(v_i_2690_);
lean_dec(v_i_2690_);
v_res_2694_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7(v_sz_boxed_2692_, v_i_boxed_2693_, v_bs_2691_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6(lean_object* v_d_2699_, lean_object* v_key_2700_){
_start:
{
if (lean_obj_tag(v_d_2699_) == 8)
{
lean_object* v___x_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2745_; 
v___x_2701_ = l_Lasm_JS_Data_field(v_d_2699_, v_key_2700_);
v_isSharedCheck_2745_ = !lean_is_exclusive(v_d_2699_);
if (v_isSharedCheck_2745_ == 0)
{
lean_object* v_unused_2746_; 
v_unused_2746_ = lean_ctor_get(v_d_2699_, 0);
lean_dec(v_unused_2746_);
v___x_2703_ = v_d_2699_;
v_isShared_2704_ = v_isSharedCheck_2745_;
goto v_resetjp_2702_;
}
else
{
lean_dec(v_d_2699_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2745_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v_a_2706_; 
if (lean_obj_tag(v___x_2701_) == 7)
{
lean_object* v_items_2731_; size_t v_sz_2732_; size_t v___x_2733_; lean_object* v___x_2734_; 
v_items_2731_ = lean_ctor_get(v___x_2701_, 0);
lean_inc_ref(v_items_2731_);
v_sz_2732_ = lean_array_size(v_items_2731_);
v___x_2733_ = ((size_t)0ULL);
v___x_2734_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7(v_sz_2732_, v___x_2733_, v_items_2731_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; uint8_t v___x_2739_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2734_, 1);
v___x_2736_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__1));
v___x_2737_ = lean_string_utf8_byte_size(v_a_2735_);
v___x_2738_ = lean_unsigned_to_nat(0u);
v___x_2739_ = lean_nat_dec_eq(v___x_2737_, v___x_2738_);
if (v___x_2739_ == 0)
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2740_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__7));
v___x_2741_ = lean_string_append(v___x_2740_, v_a_2735_);
lean_dec(v_a_2735_);
v___x_2742_ = lean_string_append(v___x_2736_, v___x_2741_);
lean_dec_ref(v___x_2741_);
v_a_2706_ = v___x_2742_;
goto v___jp_2705_;
}
else
{
lean_dec(v_a_2735_);
v_a_2706_ = v___x_2736_;
goto v___jp_2705_;
}
}
else
{
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2743_; 
v_a_2743_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2743_);
lean_dec_ref_known(v___x_2734_, 1);
v_a_2706_ = v_a_2743_;
goto v___jp_2705_;
}
else
{
lean_dec_ref_known(v___x_2701_, 1);
lean_del_object(v___x_2703_);
return v___x_2734_;
}
}
}
else
{
lean_object* v___x_2744_; 
v___x_2744_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v_a_2706_ = v___x_2744_;
goto v___jp_2705_;
}
v___jp_2705_:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; uint8_t v___x_2719_; 
v___x_2707_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_2708_ = lean_string_append(v___x_2707_, v_key_2700_);
v___x_2709_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_2710_ = lean_string_append(v___x_2708_, v___x_2709_);
v___x_2711_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__0));
v___x_2712_ = lean_string_append(v___x_2710_, v___x_2711_);
v___x_2713_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_2714_ = lean_string_append(v___x_2712_, v___x_2713_);
v___x_2715_ = l_Lasm_JS_Data_describe(v___x_2701_);
v___x_2716_ = lean_string_append(v___x_2714_, v___x_2715_);
lean_dec_ref(v___x_2715_);
v___x_2717_ = lean_string_utf8_byte_size(v_a_2706_);
v___x_2718_ = lean_unsigned_to_nat(0u);
v___x_2719_ = lean_nat_dec_eq(v___x_2717_, v___x_2718_);
if (v___x_2719_ == 0)
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2726_; 
v___x_2720_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_2721_ = lean_string_append(v___x_2720_, v_a_2706_);
lean_dec_ref(v_a_2706_);
v___x_2722_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_2723_ = lean_string_append(v___x_2721_, v___x_2722_);
v___x_2724_ = lean_string_append(v___x_2716_, v___x_2723_);
lean_dec_ref(v___x_2723_);
if (v_isShared_2704_ == 0)
{
lean_ctor_set_tag(v___x_2703_, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2724_);
v___x_2726_ = v___x_2703_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v___x_2724_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
else
{
lean_object* v___x_2729_; 
lean_dec_ref(v_a_2706_);
if (v_isShared_2704_ == 0)
{
lean_ctor_set_tag(v___x_2703_, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2716_);
v___x_2729_ = v___x_2703_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2716_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
}
else
{
lean_object* v___x_2747_; 
lean_dec(v_d_2699_);
v___x_2747_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__2));
return v___x_2747_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___boxed(lean_object* v_d_2748_, lean_object* v_key_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6(v_d_2748_, v_key_2749_);
lean_dec_ref(v_key_2749_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8(lean_object* v_d_2754_, lean_object* v_key_2755_){
_start:
{
if (lean_obj_tag(v_d_2754_) == 8)
{
lean_object* v___x_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2784_; 
v___x_2756_ = l_Lasm_JS_Data_field(v_d_2754_, v_key_2755_);
v_isSharedCheck_2784_ = !lean_is_exclusive(v_d_2754_);
if (v_isSharedCheck_2784_ == 0)
{
lean_object* v_unused_2785_; 
v_unused_2785_ = lean_ctor_get(v_d_2754_, 0);
lean_dec(v_unused_2785_);
v___x_2758_ = v_d_2754_;
v_isShared_2759_ = v_isSharedCheck_2784_;
goto v_resetjp_2757_;
}
else
{
lean_dec(v_d_2754_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2784_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
if (lean_obj_tag(v___x_2756_) == 2)
{
uint8_t v_b_2760_; lean_object* v___x_2761_; lean_object* v___x_2763_; 
v_b_2760_ = lean_ctor_get_uint8(v___x_2756_, 0);
lean_dec_ref_known(v___x_2756_, 0);
v___x_2761_ = lean_box(v_b_2760_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set_tag(v___x_2758_, 1);
lean_ctor_set(v___x_2758_, 0, v___x_2761_);
v___x_2763_ = v___x_2758_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v___x_2761_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
else
{
lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; uint8_t v___x_2775_; 
v___x_2765_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_2766_ = lean_string_append(v___x_2765_, v_key_2755_);
v___x_2767_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_2768_ = lean_string_append(v___x_2766_, v___x_2767_);
v___x_2769_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__0));
v___x_2770_ = lean_string_append(v___x_2768_, v___x_2769_);
v___x_2771_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_2772_ = lean_string_append(v___x_2770_, v___x_2771_);
v___x_2773_ = l_Lasm_JS_Data_describe(v___x_2756_);
v___x_2774_ = lean_string_append(v___x_2772_, v___x_2773_);
lean_dec_ref(v___x_2773_);
v___x_2775_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2779_; 
v___x_2776_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___x_2777_ = lean_string_append(v___x_2774_, v___x_2776_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set_tag(v___x_2758_, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2777_);
v___x_2779_ = v___x_2758_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2777_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
else
{
lean_object* v___x_2782_; 
if (v_isShared_2759_ == 0)
{
lean_ctor_set_tag(v___x_2758_, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2774_);
v___x_2782_ = v___x_2758_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2774_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
}
else
{
lean_object* v___x_2786_; 
lean_dec(v_d_2754_);
v___x_2786_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__1));
return v___x_2786_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___boxed(lean_object* v_d_2787_, lean_object* v_key_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8(v_d_2787_, v_key_2788_);
lean_dec_ref(v_key_2788_);
return v_res_2789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5(lean_object* v_context_2790_, lean_object* v_d_2791_){
_start:
{
lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2800_; lean_object* v_received_2801_; lean_object* v___y_2820_; lean_object* v_a_2823_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__0));
lean_inc(v_d_2791_);
v___x_2848_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6(v_d_2791_, v___x_2847_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2849_);
lean_dec_ref_known(v___x_2848_, 1);
v_a_2823_ = v_a_2849_;
goto v___jp_2822_;
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v_a_2850_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2850_);
lean_dec_ref_known(v___x_2848_, 1);
v___x_2851_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__1));
lean_inc(v_d_2791_);
v___x_2852_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7(v_d_2791_, v___x_2851_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; 
lean_dec(v_a_2850_);
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2853_);
lean_dec_ref_known(v___x_2852_, 1);
v_a_2823_ = v_a_2853_;
goto v___jp_2822_;
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v_a_2854_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2854_);
lean_dec_ref_known(v___x_2852_, 1);
v___x_2855_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__2));
lean_inc(v_d_2791_);
v___x_2856_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8(v_d_2791_, v___x_2855_);
if (lean_obj_tag(v___x_2856_) == 0)
{
lean_object* v_a_2857_; 
lean_dec(v_a_2854_);
lean_dec(v_a_2850_);
v_a_2857_ = lean_ctor_get(v___x_2856_, 0);
lean_inc(v_a_2857_);
lean_dec_ref_known(v___x_2856_, 1);
v_a_2823_ = v_a_2857_;
goto v___jp_2822_;
}
else
{
lean_object* v_a_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; 
v_a_2858_ = lean_ctor_get(v___x_2856_, 0);
lean_inc(v_a_2858_);
lean_dec_ref_known(v___x_2856_, 1);
v___x_2859_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2));
lean_inc(v_d_2791_);
v___x_2860_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_2791_, v___x_2859_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_a_2861_; 
lean_dec(v_a_2858_);
lean_dec(v_a_2854_);
lean_dec(v_a_2850_);
v_a_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_a_2861_);
lean_dec_ref_known(v___x_2860_, 1);
v_a_2823_ = v_a_2861_;
goto v___jp_2822_;
}
else
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2871_; 
lean_dec(v_d_2791_);
v_a_2862_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2864_ = v___x_2860_;
v_isShared_2865_ = v_isSharedCheck_2871_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2860_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2871_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2866_; uint8_t v___x_2867_; lean_object* v___x_2869_; 
v___x_2866_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2866_, 0, v_a_2850_);
lean_ctor_set(v___x_2866_, 1, v_a_2854_);
lean_ctor_set(v___x_2866_, 2, v_a_2862_);
v___x_2867_ = lean_unbox(v_a_2858_);
lean_dec(v_a_2858_);
lean_ctor_set_uint8(v___x_2866_, sizeof(void*)*3, v___x_2867_);
if (v_isShared_2865_ == 0)
{
lean_ctor_set_tag(v___x_2864_, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2866_);
v___x_2869_ = v___x_2864_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v___x_2866_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
}
}
}
}
v___jp_2793_:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2796_ = lean_string_append(v___y_2794_, v___y_2795_);
lean_dec_ref(v___y_2795_);
v___x_2797_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2796_);
v___x_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2797_);
return v___x_2798_;
}
v___jp_2799_:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; uint8_t v___x_2813_; 
v___x_2802_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_2803_ = lean_string_append(v___x_2802_, v_context_2790_);
v___x_2804_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_2805_ = lean_string_append(v___x_2803_, v___x_2804_);
v___x_2806_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__3));
v___x_2807_ = lean_string_append(v___x_2805_, v___x_2806_);
v___x_2808_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_2809_ = lean_string_append(v___x_2807_, v___x_2808_);
v___x_2810_ = lean_string_append(v___x_2809_, v_received_2801_);
lean_dec_ref(v_received_2801_);
v___x_2811_ = lean_string_utf8_byte_size(v___y_2800_);
v___x_2812_ = lean_unsigned_to_nat(0u);
v___x_2813_ = lean_nat_dec_eq(v___x_2811_, v___x_2812_);
if (v___x_2813_ == 0)
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2814_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_2815_ = lean_string_append(v___x_2814_, v___y_2800_);
lean_dec_ref(v___y_2800_);
v___x_2816_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_2817_ = lean_string_append(v___x_2815_, v___x_2816_);
v___y_2794_ = v___x_2810_;
v___y_2795_ = v___x_2817_;
goto v___jp_2793_;
}
else
{
lean_object* v___x_2818_; 
lean_dec_ref(v___y_2800_);
v___x_2818_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_2794_ = v___x_2810_;
v___y_2795_ = v___x_2818_;
goto v___jp_2793_;
}
}
v___jp_2819_:
{
lean_object* v___x_2821_; 
v___x_2821_ = l_Lasm_JS_Data_describe(v_d_2791_);
v___y_2800_ = v___y_2820_;
v_received_2801_ = v___x_2821_;
goto v___jp_2799_;
}
v___jp_2822_:
{
if (lean_obj_tag(v_d_2791_) == 9)
{
lean_object* v_value_2824_; lean_object* v_description_2825_; lean_object* v___x_2826_; uint8_t v___x_2827_; 
v_value_2824_ = lean_ctor_get(v_d_2791_, 0);
v_description_2825_ = lean_ctor_get(v_d_2791_, 1);
v___x_2826_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2827_ = lean_string_dec_eq(v_description_2825_, v___x_2826_);
if (v___x_2827_ == 0)
{
v___y_2820_ = v_a_2823_;
goto v___jp_2819_;
}
else
{
lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2844_; 
lean_inc(v_value_2824_);
v_isSharedCheck_2844_ = !lean_is_exclusive(v_d_2791_);
if (v_isSharedCheck_2844_ == 0)
{
lean_object* v_unused_2845_; lean_object* v_unused_2846_; 
v_unused_2845_ = lean_ctor_get(v_d_2791_, 1);
lean_dec(v_unused_2845_);
v_unused_2846_ = lean_ctor_get(v_d_2791_, 0);
lean_dec(v_unused_2846_);
v___x_2829_ = v_d_2791_;
v_isShared_2830_ = v_isSharedCheck_2844_;
goto v_resetjp_2828_;
}
else
{
lean_dec(v_d_2791_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2844_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
uint32_t v___x_2831_; uint64_t v___x_2832_; lean_object* v___x_2834_; 
v___x_2831_ = 206;
v___x_2832_ = 0ULL;
lean_inc(v_value_2824_);
if (v_isShared_2830_ == 0)
{
lean_ctor_set(v___x_2829_, 1, v___x_2826_);
v___x_2834_ = v___x_2829_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_value_2824_);
lean_ctor_set(v_reuseFailAlloc_2843_, 1, v___x_2826_);
v___x_2834_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
uint32_t v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = lasm_js_value_handle(v_value_2824_);
lean_dec(v_value_2824_);
v___x_2836_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2831_, v___x_2832_, v___x_2834_, v___x_2835_);
lean_dec_ref(v___x_2834_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; uint8_t v___x_2838_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_a_2837_);
lean_dec_ref_known(v___x_2836_, 1);
v___x_2838_ = lean_string_validate_utf8(v_a_2837_);
if (v___x_2838_ == 0)
{
lean_object* v___x_2839_; lean_object* v___x_2840_; 
lean_dec(v_a_2837_);
v___x_2839_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_2840_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2839_);
v___y_2800_ = v_a_2823_;
v_received_2801_ = v___x_2840_;
goto v___jp_2799_;
}
else
{
lean_object* v___x_2841_; 
v___x_2841_ = lean_string_from_utf8_unchecked(v_a_2837_);
v___y_2800_ = v_a_2823_;
v_received_2801_ = v___x_2841_;
goto v___jp_2799_;
}
}
else
{
lean_object* v___x_2842_; 
lean_dec_ref_known(v___x_2836_, 1);
v___x_2842_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_2800_ = v_a_2823_;
v_received_2801_ = v___x_2842_;
goto v___jp_2799_;
}
}
}
}
}
else
{
v___y_2820_ = v_a_2823_;
goto v___jp_2819_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5___boxed(lean_object* v_context_2872_, lean_object* v_d_2873_, lean_object* v_a_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5(v_context_2872_, v_d_2873_);
lean_dec_ref(v_context_2872_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0(lean_object* v_context_2876_, lean_object* v_x_2877_){
_start:
{
lean_object* v_val_2880_; 
if (lean_obj_tag(v_x_2877_) == 0)
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2890_; 
v_a_2882_ = lean_ctor_get(v_x_2877_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v_x_2877_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2884_ = v_x_2877_;
v_isShared_2885_ = v_isSharedCheck_2890_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v_x_2877_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2890_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2887_; 
if (v_isShared_2885_ == 0)
{
v___x_2887_ = v___x_2884_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2882_);
v___x_2887_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
lean_object* v___x_2888_; 
v___x_2888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2887_);
return v___x_2888_;
}
}
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2904_; 
v_a_2891_ = lean_ctor_get(v_x_2877_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v_x_2877_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2893_ = v_x_2877_;
v_isShared_2894_ = v_isSharedCheck_2904_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v_x_2877_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2904_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; 
v___x_2895_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5(v_context_2876_, v_a_2891_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v_a_2896_; lean_object* v___x_2898_; 
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2895_, 1);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v_a_2896_);
v___x_2898_ = v___x_2893_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
v_val_2880_ = v___x_2898_;
goto v___jp_2879_;
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; 
v_a_2900_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___x_2895_, 1);
if (v_isShared_2894_ == 0)
{
lean_ctor_set_tag(v___x_2893_, 0);
lean_ctor_set(v___x_2893_, 0, v_a_2900_);
v___x_2902_ = v___x_2893_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2900_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
v_val_2880_ = v___x_2902_;
goto v___jp_2879_;
}
}
}
}
v___jp_2879_:
{
lean_object* v___x_2881_; 
v___x_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2881_, 0, v_val_2880_);
return v___x_2881_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0___boxed(lean_object* v_context_2905_, lean_object* v_x_2906_, lean_object* v___y_2907_){
_start:
{
lean_object* v_res_2908_; 
v_res_2908_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0(v_context_2905_, v_x_2906_);
lean_dec_ref(v_context_2905_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2(lean_object* v___f_2909_, lean_object* v_x_2910_){
_start:
{
if (lean_obj_tag(v_x_2910_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2920_; 
lean_dec_ref(v___f_2909_);
v_a_2912_ = lean_ctor_get(v_x_2910_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v_x_2910_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2914_ = v_x_2910_;
v_isShared_2915_ = v_isSharedCheck_2920_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v_x_2910_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2920_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
lean_object* v___x_2918_; 
v___x_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2917_);
return v___x_2918_;
}
}
}
else
{
lean_object* v_a_2921_; lean_object* v___x_2922_; 
v_a_2921_ = lean_ctor_get(v_x_2910_, 0);
lean_inc(v_a_2921_);
lean_dec_ref_known(v_x_2910_, 1);
v___x_2922_ = lean_apply_2(v___f_2909_, v_a_2921_, lean_box(0));
return v___x_2922_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2___boxed(lean_object* v___f_2923_, lean_object* v_x_2924_, lean_object* v___y_2925_){
_start:
{
lean_object* v_res_2926_; 
v_res_2926_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2(v___f_2923_, v_x_2924_);
return v_res_2926_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1(lean_object* v___f_2927_, lean_object* v_bytes_2928_){
_start:
{
lean_object* v___x_2930_; uint8_t v___x_2931_; lean_object* v_val_2933_; lean_object* v___x_2936_; 
v___x_2930_ = lean_unsigned_to_nat(0u);
v___x_2931_ = 0;
v___x_2936_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2928_);
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
lean_ctor_set_tag(v___x_2939_, 1);
v___x_2942_ = v___x_2939_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2937_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
v_val_2933_ = v___x_2942_;
goto v___jp_2932_;
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
lean_ctor_set_tag(v___x_2947_, 0);
v___x_2950_ = v___x_2947_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v_a_2945_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
v_val_2933_ = v___x_2950_;
goto v___jp_2932_;
}
}
}
v___jp_2932_:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; 
v___x_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2934_, 0, v_val_2933_);
v___x_2935_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2930_, v___x_2931_, v___x_2934_, v___f_2927_);
return v___x_2935_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1___boxed(lean_object* v___f_2953_, lean_object* v_bytes_2954_, lean_object* v___y_2955_){
_start:
{
lean_object* v_res_2956_; 
v_res_2956_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1(v___f_2953_, v_bytes_2954_);
lean_dec_ref(v_bytes_2954_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3(lean_object* v___f_2957_, lean_object* v_x_2958_){
_start:
{
if (lean_obj_tag(v_x_2958_) == 0)
{
lean_object* v_a_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2968_; 
lean_dec_ref(v___f_2957_);
v_a_2960_ = lean_ctor_get(v_x_2958_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v_x_2958_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2962_ = v_x_2958_;
v_isShared_2963_ = v_isSharedCheck_2968_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_a_2960_);
lean_dec(v_x_2958_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2968_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2965_; 
if (v_isShared_2963_ == 0)
{
v___x_2965_ = v___x_2962_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2960_);
v___x_2965_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2966_; 
v___x_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2965_);
return v___x_2966_;
}
}
}
else
{
lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2980_; 
v_isSharedCheck_2980_ = !lean_is_exclusive(v_x_2958_);
if (v_isSharedCheck_2980_ == 0)
{
lean_object* v_unused_2981_; 
v_unused_2981_ = lean_ctor_get(v_x_2958_, 0);
lean_dec(v_unused_2981_);
v___x_2970_ = v_x_2958_;
v_isShared_2971_ = v_isSharedCheck_2980_;
goto v_resetjp_2969_;
}
else
{
lean_dec(v_x_2958_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2980_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2972_; uint8_t v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2976_; 
v___x_2972_ = lean_unsigned_to_nat(0u);
v___x_2973_ = 0;
v___x_2974_ = lean_io_promise_new();
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 0, v___x_2974_);
v___x_2976_ = v___x_2970_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v___x_2974_);
v___x_2976_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
v___x_2978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2972_, v___x_2973_, v___x_2977_, v___f_2957_);
return v___x_2978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3___boxed(lean_object* v___f_2982_, lean_object* v_x_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3(v___f_2982_, v_x_2983_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9(lean_object* v_failurePrefix_2986_, uint32_t v_op_2987_, uint64_t v_flags_2988_, lean_object* v_payload_2989_, lean_object* v___f_2990_, lean_object* v___f_2991_, lean_object* v___f_2992_, lean_object* v_x_2993_){
_start:
{
if (lean_obj_tag(v_x_2993_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref(v___f_2992_);
lean_dec_ref(v___f_2991_);
lean_dec_ref(v___f_2990_);
lean_dec(v_payload_2989_);
v_a_2995_ = lean_ctor_get(v_x_2993_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v_x_2993_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2997_ = v_x_2993_;
v_isShared_2998_ = v_isSharedCheck_3003_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v_x_2993_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3003_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___x_3000_; 
if (v_isShared_2998_ == 0)
{
v___x_3000_ = v___x_2997_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2995_);
v___x_3000_ = v_reuseFailAlloc_3002_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
lean_object* v___x_3001_; 
v___x_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3001_, 0, v___x_3000_);
return v___x_3001_;
}
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3050_; 
v_a_3004_ = lean_ctor_get(v_x_2993_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v_x_2993_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3006_ = v_x_2993_;
v_isShared_3007_ = v_isSharedCheck_3050_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v_x_2993_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3050_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; uint8_t v___x_3010_; 
v___x_3008_ = lean_string_utf8_byte_size(v_failurePrefix_2986_);
v___x_3009_ = lean_unsigned_to_nat(0u);
v___x_3010_ = lean_nat_dec_eq(v___x_3008_, v___x_3009_);
if (v___x_3010_ == 0)
{
lean_object* v___f_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___f_3015_; lean_object* v_val_3017_; lean_object* v___x_3022_; 
lean_dec_ref(v___f_2992_);
lean_inc(v_a_3004_);
v___f_3011_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3011_, 0, v_a_3004_);
v___x_3012_ = lean_box(v___x_3010_);
v___x_3013_ = lean_box_uint32(v_op_2987_);
v___x_3014_ = lean_box_uint64(v_flags_2988_);
lean_inc(v_payload_2989_);
v___f_3015_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3015_, 0, v___x_3009_);
lean_closure_set(v___f_3015_, 1, v___x_3012_);
lean_closure_set(v___f_3015_, 2, v___f_3011_);
lean_closure_set(v___f_3015_, 3, v_a_3004_);
lean_closure_set(v___f_3015_, 4, v___x_3013_);
lean_closure_set(v___f_3015_, 5, v___x_3014_);
lean_closure_set(v___f_3015_, 6, v_payload_2989_);
v___x_3022_ = l_Lasm_JS_Wire_encodeIO(v_payload_2989_);
lean_dec(v_payload_2989_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3025_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 0, v_a_3023_);
v___x_3025_ = v___x_3006_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3023_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
v_val_3017_ = v___x_3025_;
goto v___jp_3016_;
}
}
else
{
lean_object* v_a_3027_; lean_object* v___x_3029_; 
v_a_3027_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3022_, 1);
if (v_isShared_3007_ == 0)
{
lean_ctor_set_tag(v___x_3006_, 0);
lean_ctor_set(v___x_3006_, 0, v_a_3027_);
v___x_3029_ = v___x_3006_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3027_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
v_val_3017_ = v___x_3029_;
goto v___jp_3016_;
}
}
v___jp_3016_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; 
v___x_3018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3018_, 0, v_val_3017_);
v___x_3019_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3009_, v___x_3010_, v___x_3018_, v___f_3015_);
v___x_3020_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3009_, v___x_3010_, v___x_3019_, v___f_2990_);
v___x_3021_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3009_, v___x_3010_, v___x_3020_, v___f_2991_);
return v___x_3021_;
}
}
else
{
lean_object* v___f_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___f_3034_; uint8_t v___x_3035_; lean_object* v_val_3037_; lean_object* v___x_3041_; 
lean_dec_ref(v___f_2991_);
lean_dec_ref(v___f_2990_);
lean_inc(v_a_3004_);
v___f_3031_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3031_, 0, v_a_3004_);
v___x_3032_ = lean_box_uint32(v_op_2987_);
v___x_3033_ = lean_box_uint64(v_flags_2988_);
lean_inc(v_payload_2989_);
v___f_3034_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3034_, 0, v___f_3031_);
lean_closure_set(v___f_3034_, 1, v_a_3004_);
lean_closure_set(v___f_3034_, 2, v___x_3032_);
lean_closure_set(v___f_3034_, 3, v___x_3033_);
lean_closure_set(v___f_3034_, 4, v_payload_2989_);
v___x_3035_ = 0;
v___x_3041_ = l_Lasm_JS_Wire_encodeIO(v_payload_2989_);
lean_dec(v_payload_2989_);
if (lean_obj_tag(v___x_3041_) == 0)
{
lean_object* v_a_3042_; lean_object* v___x_3044_; 
v_a_3042_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3042_);
lean_dec_ref_known(v___x_3041_, 1);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 0, v_a_3042_);
v___x_3044_ = v___x_3006_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3042_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
v_val_3037_ = v___x_3044_;
goto v___jp_3036_;
}
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3048_; 
v_a_3046_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3046_);
lean_dec_ref_known(v___x_3041_, 1);
if (v_isShared_3007_ == 0)
{
lean_ctor_set_tag(v___x_3006_, 0);
lean_ctor_set(v___x_3006_, 0, v_a_3046_);
v___x_3048_ = v___x_3006_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_a_3046_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
v_val_3037_ = v___x_3048_;
goto v___jp_3036_;
}
}
v___jp_3036_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3038_, 0, v_val_3037_);
v___x_3039_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3009_, v___x_3035_, v___x_3038_, v___f_3034_);
v___x_3040_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3009_, v___x_3035_, v___x_3039_, v___f_2992_);
return v___x_3040_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9___boxed(lean_object* v_failurePrefix_3051_, lean_object* v_op_3052_, lean_object* v_flags_3053_, lean_object* v_payload_3054_, lean_object* v___f_3055_, lean_object* v___f_3056_, lean_object* v___f_3057_, lean_object* v_x_3058_, lean_object* v___y_3059_){
_start:
{
uint32_t v_op_boxed_3060_; uint64_t v_flags_boxed_3061_; lean_object* v_res_3062_; 
v_op_boxed_3060_ = lean_unbox_uint32(v_op_3052_);
lean_dec(v_op_3052_);
v_flags_boxed_3061_ = lean_unbox_uint64(v_flags_3053_);
lean_dec_ref(v_flags_3053_);
v_res_3062_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9(v_failurePrefix_3051_, v_op_boxed_3060_, v_flags_boxed_3061_, v_payload_3054_, v___f_3055_, v___f_3056_, v___f_3057_, v_x_3058_);
lean_dec_ref(v_failurePrefix_3051_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3(lean_object* v_context_3063_, uint32_t v_op_3064_, uint64_t v_flags_3065_, lean_object* v_payload_3066_, lean_object* v_failurePrefix_3067_){
_start:
{
lean_object* v___f_3069_; lean_object* v___f_3070_; lean_object* v___f_3071_; lean_object* v___f_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___f_3075_; lean_object* v___f_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; lean_object* v_val_3080_; lean_object* v___x_3083_; 
v___f_3069_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3069_, 0, v_context_3063_);
v___f_3070_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3070_, 0, v___f_3069_);
v___f_3071_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3071_, 0, v___f_3070_);
lean_inc_ref(v_failurePrefix_3067_);
v___f_3072_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3072_, 0, v_failurePrefix_3067_);
v___x_3073_ = lean_box_uint32(v_op_3064_);
v___x_3074_ = lean_box_uint64(v_flags_3065_);
lean_inc_ref(v___f_3071_);
v___f_3075_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3075_, 0, v_failurePrefix_3067_);
lean_closure_set(v___f_3075_, 1, v___x_3073_);
lean_closure_set(v___f_3075_, 2, v___x_3074_);
lean_closure_set(v___f_3075_, 3, v_payload_3066_);
lean_closure_set(v___f_3075_, 4, v___f_3072_);
lean_closure_set(v___f_3075_, 5, v___f_3071_);
lean_closure_set(v___f_3075_, 6, v___f_3071_);
v___f_3076_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3076_, 0, v___f_3075_);
v___x_3077_ = lean_unsigned_to_nat(0u);
v___x_3078_ = 0;
v___x_3083_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3083_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3083_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
lean_ctor_set_tag(v___x_3086_, 1);
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
v_val_3080_ = v___x_3089_;
goto v___jp_3079_;
}
}
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
v_a_3092_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3083_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3083_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
lean_ctor_set_tag(v___x_3094_, 0);
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
v_val_3080_ = v___x_3097_;
goto v___jp_3079_;
}
}
}
v___jp_3079_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3081_, 0, v_val_3080_);
v___x_3082_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3077_, v___x_3078_, v___x_3081_, v___f_3076_);
return v___x_3082_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___boxed(lean_object* v_context_3100_, lean_object* v_op_3101_, lean_object* v_flags_3102_, lean_object* v_payload_3103_, lean_object* v_failurePrefix_3104_, lean_object* v_a_3105_){
_start:
{
uint32_t v_op_boxed_3106_; uint64_t v_flags_boxed_3107_; lean_object* v_res_3108_; 
v_op_boxed_3106_ = lean_unbox_uint32(v_op_3101_);
lean_dec(v_op_3101_);
v_flags_boxed_3107_ = lean_unbox_uint64(v_flags_3102_);
lean_dec_ref(v_flags_3102_);
v_res_3108_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3(v_context_3100_, v_op_boxed_3106_, v_flags_boxed_3107_, v_payload_3103_, v_failurePrefix_3104_);
return v_res_3108_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2(uint8_t v_await_3109_, uint64_t v_extra_3110_){
_start:
{
uint64_t v___x_3111_; uint64_t v___y_3113_; 
v___x_3111_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_3109_ == 0)
{
uint64_t v___x_3116_; 
v___x_3116_ = 0ULL;
v___y_3113_ = v___x_3116_;
goto v___jp_3112_;
}
else
{
uint64_t v___x_3117_; 
v___x_3117_ = 2ULL;
v___y_3113_ = v___x_3117_;
goto v___jp_3112_;
}
v___jp_3112_:
{
uint64_t v___x_3114_; uint64_t v___x_3115_; 
v___x_3114_ = lean_uint64_lor(v___x_3111_, v___y_3113_);
v___x_3115_ = lean_uint64_lor(v___x_3114_, v_extra_3110_);
return v___x_3115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2___boxed(lean_object* v_await_3118_, lean_object* v_extra_3119_){
_start:
{
uint8_t v_await_boxed_3120_; uint64_t v_extra_boxed_3121_; uint64_t v_res_3122_; lean_object* v_r_3123_; 
v_await_boxed_3120_ = lean_unbox(v_await_3118_);
v_extra_boxed_3121_ = lean_unbox_uint64(v_extra_3119_);
lean_dec_ref(v_extra_3119_);
v_res_3122_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2(v_await_boxed_3120_, v_extra_boxed_3121_);
v_r_3123_ = lean_box_uint64(v_res_3122_);
return v_r_3123_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3124_; uint8_t v___x_3125_; uint64_t v___x_3126_; 
v___x_3124_ = 8ULL;
v___x_3125_ = 0;
v___x_3126_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2(v___x_3125_, v___x_3124_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1(lean_object* v_o_3127_, lean_object* v_name_3128_, lean_object* v_args_3129_){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; uint32_t v___x_3136_; uint64_t v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3131_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3132_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3132_, 0, v_o_3127_);
lean_ctor_set(v___x_3132_, 1, v___x_3131_);
lean_inc_ref(v_name_3128_);
v___x_3133_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3133_, 0, v_name_3128_);
v___x_3134_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_3135_ = lean_string_append(v___x_3134_, v_name_3128_);
lean_dec_ref(v_name_3128_);
v___x_3136_ = 205;
v___x_3137_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0);
v___x_3138_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3138_, 0, v_args_3129_);
v___x_3139_ = lean_unsigned_to_nat(3u);
v___x_3140_ = lean_mk_empty_array_with_capacity(v___x_3139_);
v___x_3141_ = lean_array_push(v___x_3140_, v___x_3132_);
v___x_3142_ = lean_array_push(v___x_3141_, v___x_3133_);
v___x_3143_ = lean_array_push(v___x_3142_, v___x_3138_);
v___x_3144_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
v___x_3145_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3(v___x_3135_, v___x_3136_, v___x_3137_, v___x_3144_, v___x_3131_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___boxed(lean_object* v_o_3146_, lean_object* v_name_3147_, lean_object* v_args_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1(v_o_3146_, v_name_3147_, v_args_3148_);
return v_res_3150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_list(lean_object* v_self_3152_, lean_object* v_options_3153_){
_start:
{
lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3155_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_list___closed__0));
v___x_3156_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0(v_options_3153_);
v___x_3157_ = lean_unsigned_to_nat(1u);
v___x_3158_ = lean_mk_empty_array_with_capacity(v___x_3157_);
v___x_3159_ = lean_array_push(v___x_3158_, v___x_3156_);
v___x_3160_ = l_Lasm_JS_Web_Support_args(v___x_3159_);
v___x_3161_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1(v_self_3152_, v___x_3155_, v___x_3160_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_list___boxed(lean_object* v_self_3162_, lean_object* v_options_3163_, lean_object* v_a_3164_){
_start:
{
lean_object* v_res_3165_; 
v_res_3165_ = l_Lasm_JS_Cloudflare_R2Bucket_list(v_self_3162_, v_options_3163_);
return v_res_3165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_key(lean_object* v_self_3167_){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; 
v___x_3169_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_key___closed__0));
v___x_3170_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3167_, v___x_3169_);
return v___x_3170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_key___boxed(lean_object* v_self_3171_, lean_object* v_a_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l_Lasm_JS_Cloudflare_R2Object_key(v_self_3171_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_version(lean_object* v_self_3175_){
_start:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3177_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_version___closed__0));
v___x_3178_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3175_, v___x_3177_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_version___boxed(lean_object* v_self_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Lasm_JS_Cloudflare_R2Object_version(v_self_3179_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_size(lean_object* v_self_3183_){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_size___closed__0));
v___x_3186_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_3183_, v___x_3185_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_size___boxed(lean_object* v_self_3187_, lean_object* v_a_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l_Lasm_JS_Cloudflare_R2Object_size(v_self_3187_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_etag(lean_object* v_self_3190_){
_start:
{
lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3192_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
v___x_3193_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3190_, v___x_3192_);
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_etag___boxed(lean_object* v_self_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v_res_3196_; 
v_res_3196_ = l_Lasm_JS_Cloudflare_R2Object_etag(v_self_3194_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpEtag(lean_object* v_self_3198_){
_start:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3200_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_httpEtag___closed__0));
v___x_3201_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3198_, v___x_3200_);
return v___x_3201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpEtag___boxed(lean_object* v_self_3202_, lean_object* v_a_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_Lasm_JS_Cloudflare_R2Object_httpEtag(v_self_3202_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_checksums(lean_object* v_self_3206_){
_start:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3208_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_checksums___closed__0));
v___x_3209_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3206_, v___x_3208_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; lean_object* v___x_3212_; uint8_t v_isShared_3213_; uint8_t v_isSharedCheck_3217_; 
v_a_3210_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3217_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3212_ = v___x_3209_;
v_isShared_3213_ = v_isSharedCheck_3217_;
goto v_resetjp_3211_;
}
else
{
lean_inc(v_a_3210_);
lean_dec(v___x_3209_);
v___x_3212_ = lean_box(0);
v_isShared_3213_ = v_isSharedCheck_3217_;
goto v_resetjp_3211_;
}
v_resetjp_3211_:
{
lean_object* v___x_3215_; 
if (v_isShared_3213_ == 0)
{
v___x_3215_ = v___x_3212_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_a_3210_);
v___x_3215_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
return v___x_3215_;
}
}
}
else
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3225_; 
v_a_3218_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3220_ = v___x_3209_;
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3209_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3223_; 
if (v_isShared_3221_ == 0)
{
v___x_3223_ = v___x_3220_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_a_3218_);
v___x_3223_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
return v___x_3223_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_checksums___boxed(lean_object* v_self_3226_, lean_object* v_a_3227_){
_start:
{
lean_object* v_res_3228_; 
v_res_3228_ = l_Lasm_JS_Cloudflare_R2Object_checksums(v_self_3226_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_uploaded(lean_object* v_self_3230_){
_start:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3232_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_uploaded___closed__0));
v___x_3233_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3230_, v___x_3232_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_uploaded___boxed(lean_object* v_self_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v_res_3236_; 
v_res_3236_ = l_Lasm_JS_Cloudflare_R2Object_uploaded(v_self_3234_);
return v_res_3236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1(lean_object* v_context_3238_, lean_object* v_d_3239_){
_start:
{
lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3251_; lean_object* v_received_3252_; lean_object* v___y_3271_; lean_object* v_a_3274_; 
switch(lean_obj_tag(v_d_3239_))
{
case 1:
{
goto v___jp_3241_;
}
case 0:
{
goto v___jp_3241_;
}
default: 
{
lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
lean_inc(v_d_3239_);
v___x_3299_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3239_, v___x_3298_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
lean_inc(v_a_3300_);
lean_dec_ref_known(v___x_3299_, 1);
v_a_3274_ = v_a_3300_;
goto v___jp_3273_;
}
else
{
lean_object* v_a_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
v_a_3301_ = lean_ctor_get(v___x_3299_, 0);
lean_inc(v_a_3301_);
lean_dec_ref_known(v___x_3299_, 1);
v___x_3302_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
lean_inc(v_d_3239_);
v___x_3303_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3239_, v___x_3302_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_object* v_a_3304_; 
lean_dec(v_a_3301_);
v_a_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_a_3304_);
lean_dec_ref_known(v___x_3303_, 1);
v_a_3274_ = v_a_3304_;
goto v___jp_3273_;
}
else
{
lean_object* v_a_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v_a_3305_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_a_3305_);
lean_dec_ref_known(v___x_3303_, 1);
v___x_3306_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
lean_inc(v_d_3239_);
v___x_3307_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3239_, v___x_3306_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v_a_3308_; 
lean_dec(v_a_3305_);
lean_dec(v_a_3301_);
v_a_3308_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_a_3308_);
lean_dec_ref_known(v___x_3307_, 1);
v_a_3274_ = v_a_3308_;
goto v___jp_3273_;
}
else
{
lean_object* v_a_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v_a_3309_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_a_3309_);
lean_dec_ref_known(v___x_3307_, 1);
v___x_3310_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
lean_inc(v_d_3239_);
v___x_3311_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3239_, v___x_3310_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; 
lean_dec(v_a_3309_);
lean_dec(v_a_3305_);
lean_dec(v_a_3301_);
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3312_);
lean_dec_ref_known(v___x_3311_, 1);
v_a_3274_ = v_a_3312_;
goto v___jp_3273_;
}
else
{
lean_object* v_a_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
v_a_3313_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3313_);
lean_dec_ref_known(v___x_3311_, 1);
v___x_3314_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
lean_inc(v_d_3239_);
v___x_3315_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3239_, v___x_3314_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3316_; 
lean_dec(v_a_3313_);
lean_dec(v_a_3309_);
lean_dec(v_a_3305_);
lean_dec(v_a_3301_);
v_a_3316_ = lean_ctor_get(v___x_3315_, 0);
lean_inc(v_a_3316_);
lean_dec_ref_known(v___x_3315_, 1);
v_a_3274_ = v_a_3316_;
goto v___jp_3273_;
}
else
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3336_; 
v_a_3317_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3319_ = v___x_3315_;
v_isShared_3320_ = v_isSharedCheck_3336_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3315_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3336_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3321_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
lean_inc(v_d_3239_);
v___x_3322_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3239_, v___x_3321_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3323_; 
lean_del_object(v___x_3319_);
lean_dec(v_a_3317_);
lean_dec(v_a_3313_);
lean_dec(v_a_3309_);
lean_dec(v_a_3305_);
lean_dec(v_a_3301_);
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3322_, 1);
v_a_3274_ = v_a_3323_;
goto v___jp_3273_;
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3335_; 
lean_dec(v_d_3239_);
v_a_3324_ = lean_ctor_get(v___x_3322_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3326_ = v___x_3322_;
v_isShared_3327_ = v_isSharedCheck_3335_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3322_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3335_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3328_; lean_object* v___x_3330_; 
v___x_3328_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3328_, 0, v_a_3301_);
lean_ctor_set(v___x_3328_, 1, v_a_3305_);
lean_ctor_set(v___x_3328_, 2, v_a_3309_);
lean_ctor_set(v___x_3328_, 3, v_a_3313_);
lean_ctor_set(v___x_3328_, 4, v_a_3317_);
lean_ctor_set(v___x_3328_, 5, v_a_3324_);
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 0, v___x_3328_);
v___x_3330_ = v___x_3326_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v___x_3328_);
v___x_3330_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
lean_object* v___x_3332_; 
if (v_isShared_3320_ == 0)
{
lean_ctor_set_tag(v___x_3319_, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3330_);
v___x_3332_ = v___x_3319_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v___x_3330_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_3241_:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3242_ = lean_box(0);
v___x_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
return v___x_3243_;
}
v___jp_3244_:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3247_ = lean_string_append(v___y_3245_, v___y_3246_);
lean_dec_ref(v___y_3246_);
v___x_3248_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3247_);
v___x_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3248_);
return v___x_3249_;
}
v___jp_3250_:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; uint8_t v___x_3264_; 
v___x_3253_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_3254_ = lean_string_append(v___x_3253_, v_context_3238_);
v___x_3255_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_3256_ = lean_string_append(v___x_3254_, v___x_3255_);
v___x_3257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1___closed__0));
v___x_3258_ = lean_string_append(v___x_3256_, v___x_3257_);
v___x_3259_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_3260_ = lean_string_append(v___x_3258_, v___x_3259_);
v___x_3261_ = lean_string_append(v___x_3260_, v_received_3252_);
lean_dec_ref(v_received_3252_);
v___x_3262_ = lean_string_utf8_byte_size(v___y_3251_);
v___x_3263_ = lean_unsigned_to_nat(0u);
v___x_3264_ = lean_nat_dec_eq(v___x_3262_, v___x_3263_);
if (v___x_3264_ == 0)
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3265_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_3266_ = lean_string_append(v___x_3265_, v___y_3251_);
lean_dec_ref(v___y_3251_);
v___x_3267_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_3268_ = lean_string_append(v___x_3266_, v___x_3267_);
v___y_3245_ = v___x_3261_;
v___y_3246_ = v___x_3268_;
goto v___jp_3244_;
}
else
{
lean_object* v___x_3269_; 
lean_dec_ref(v___y_3251_);
v___x_3269_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_3245_ = v___x_3261_;
v___y_3246_ = v___x_3269_;
goto v___jp_3244_;
}
}
v___jp_3270_:
{
lean_object* v___x_3272_; 
v___x_3272_ = l_Lasm_JS_Data_describe(v_d_3239_);
v___y_3251_ = v___y_3271_;
v_received_3252_ = v___x_3272_;
goto v___jp_3250_;
}
v___jp_3273_:
{
if (lean_obj_tag(v_d_3239_) == 9)
{
lean_object* v_value_3275_; lean_object* v_description_3276_; lean_object* v___x_3277_; uint8_t v___x_3278_; 
v_value_3275_ = lean_ctor_get(v_d_3239_, 0);
v_description_3276_ = lean_ctor_get(v_d_3239_, 1);
v___x_3277_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3278_ = lean_string_dec_eq(v_description_3276_, v___x_3277_);
if (v___x_3278_ == 0)
{
v___y_3271_ = v_a_3274_;
goto v___jp_3270_;
}
else
{
lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3295_; 
lean_inc(v_value_3275_);
v_isSharedCheck_3295_ = !lean_is_exclusive(v_d_3239_);
if (v_isSharedCheck_3295_ == 0)
{
lean_object* v_unused_3296_; lean_object* v_unused_3297_; 
v_unused_3296_ = lean_ctor_get(v_d_3239_, 1);
lean_dec(v_unused_3296_);
v_unused_3297_ = lean_ctor_get(v_d_3239_, 0);
lean_dec(v_unused_3297_);
v___x_3280_ = v_d_3239_;
v_isShared_3281_ = v_isSharedCheck_3295_;
goto v_resetjp_3279_;
}
else
{
lean_dec(v_d_3239_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3295_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
uint32_t v___x_3282_; uint64_t v___x_3283_; lean_object* v___x_3285_; 
v___x_3282_ = 206;
v___x_3283_ = 0ULL;
lean_inc(v_value_3275_);
if (v_isShared_3281_ == 0)
{
lean_ctor_set(v___x_3280_, 1, v___x_3277_);
v___x_3285_ = v___x_3280_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_value_3275_);
lean_ctor_set(v_reuseFailAlloc_3294_, 1, v___x_3277_);
v___x_3285_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
uint32_t v___x_3286_; lean_object* v___x_3287_; 
v___x_3286_ = lasm_js_value_handle(v_value_3275_);
lean_dec(v_value_3275_);
v___x_3287_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3282_, v___x_3283_, v___x_3285_, v___x_3286_);
lean_dec_ref(v___x_3285_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_object* v_a_3288_; uint8_t v___x_3289_; 
v_a_3288_ = lean_ctor_get(v___x_3287_, 0);
lean_inc(v_a_3288_);
lean_dec_ref_known(v___x_3287_, 1);
v___x_3289_ = lean_string_validate_utf8(v_a_3288_);
if (v___x_3289_ == 0)
{
lean_object* v___x_3290_; lean_object* v___x_3291_; 
lean_dec(v_a_3288_);
v___x_3290_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_3291_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3290_);
v___y_3251_ = v_a_3274_;
v_received_3252_ = v___x_3291_;
goto v___jp_3250_;
}
else
{
lean_object* v___x_3292_; 
v___x_3292_ = lean_string_from_utf8_unchecked(v_a_3288_);
v___y_3251_ = v_a_3274_;
v_received_3252_ = v___x_3292_;
goto v___jp_3250_;
}
}
else
{
lean_object* v___x_3293_; 
lean_dec_ref_known(v___x_3287_, 1);
v___x_3293_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_3251_ = v_a_3274_;
v_received_3252_ = v___x_3293_;
goto v___jp_3250_;
}
}
}
}
}
else
{
v___y_3271_ = v_a_3274_;
goto v___jp_3270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3337_, lean_object* v_d_3338_, lean_object* v_a_3339_){
_start:
{
lean_object* v_res_3340_; 
v_res_3340_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1(v_context_3337_, v_d_3338_);
lean_dec_ref(v_context_3337_);
return v_res_3340_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0(lean_object* v_context_3341_, lean_object* v_bytes_3342_){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3342_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3346_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3345_);
lean_dec_ref_known(v___x_3344_, 1);
v___x_3346_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1(v_context_3341_, v_a_3345_);
return v___x_3346_;
}
else
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3354_; 
v_a_3347_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3349_ = v___x_3344_;
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3344_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_a_3347_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0___boxed(lean_object* v_context_3355_, lean_object* v_bytes_3356_, lean_object* v_a_3357_){
_start:
{
lean_object* v_res_3358_; 
v_res_3358_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0(v_context_3355_, v_bytes_3356_);
lean_dec_ref(v_bytes_3356_);
lean_dec_ref(v_context_3355_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0(lean_object* v_o_3360_, lean_object* v_key_3361_){
_start:
{
lean_object* v_k_3363_; lean_object* v___x_3364_; 
v_k_3363_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3363_, 0, v_key_3361_);
v___x_3364_ = l_Lasm_JS_Wire_encodeIO(v_k_3363_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; uint32_t v___x_3366_; uint32_t v___x_3367_; uint64_t v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_a_3365_);
lean_dec_ref_known(v___x_3364_, 1);
v___x_3366_ = 203;
v___x_3367_ = lasm_js_value_handle(v_o_3360_);
v___x_3368_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
v___x_3369_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3370_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3370_, 0, v_o_3360_);
lean_ctor_set(v___x_3370_, 1, v___x_3369_);
v___x_3371_ = lean_unsigned_to_nat(2u);
v___x_3372_ = lean_mk_empty_array_with_capacity(v___x_3371_);
lean_inc_ref(v_k_3363_);
v___x_3373_ = lean_array_push(v___x_3372_, v_k_3363_);
v___x_3374_ = lean_array_push(v___x_3373_, v___x_3370_);
v___x_3375_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3374_);
v___x_3376_ = lasm_js_call(v___x_3366_, v___x_3367_, v___x_3368_, v_a_3365_, v___x_3375_);
lean_dec_ref_known(v___x_3375_, 1);
lean_dec(v_a_3365_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3377_);
lean_dec_ref_known(v___x_3376_, 1);
v___x_3378_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0));
v___x_3379_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3363_);
v___x_3380_ = lean_string_append(v___x_3378_, v___x_3379_);
lean_dec_ref(v___x_3379_);
v___x_3381_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0(v___x_3380_, v_a_3377_);
lean_dec(v_a_3377_);
lean_dec_ref(v___x_3380_);
return v___x_3381_;
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3389_; 
lean_dec_ref_known(v_k_3363_, 1);
v_a_3382_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3384_ = v___x_3376_;
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3376_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3387_; 
if (v_isShared_3385_ == 0)
{
v___x_3387_ = v___x_3384_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_a_3382_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
}
}
else
{
lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3397_; 
lean_dec_ref_known(v_k_3363_, 1);
lean_dec(v_o_3360_);
v_a_3390_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3392_ = v___x_3364_;
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v___x_3364_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3395_; 
if (v_isShared_3393_ == 0)
{
v___x_3395_ = v___x_3392_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_a_3390_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___boxed(lean_object* v_o_3398_, lean_object* v_key_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0(v_o_3398_, v_key_3399_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpMetadata(lean_object* v_self_3402_){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3404_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_3405_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0(v_self_3402_, v___x_3404_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpMetadata___boxed(lean_object* v_self_3406_, lean_object* v_a_3407_){
_start:
{
lean_object* v_res_3408_; 
v_res_3408_ = l_Lasm_JS_Cloudflare_R2Object_httpMetadata(v_self_3406_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0(lean_object* v_v_3418_){
_start:
{
uint8_t v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3420_ = 0;
v___x_3421_ = lean_unsigned_to_nat(1u);
v___x_3422_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__3));
v___x_3423_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3424_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3424_, 0, v_v_3418_);
lean_ctor_set(v___x_3424_, 1, v___x_3423_);
v___x_3425_ = lean_mk_empty_array_with_capacity(v___x_3421_);
v___x_3426_ = lean_array_push(v___x_3425_, v___x_3424_);
v___x_3427_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v___x_3422_, v___x_3426_, v___x_3420_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
v_a_3428_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3427_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3427_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
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
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
else
{
lean_object* v_a_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3443_; 
v_a_3436_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3443_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3443_ == 0)
{
v___x_3438_ = v___x_3427_;
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_a_3436_);
lean_dec(v___x_3427_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3441_; 
if (v_isShared_3439_ == 0)
{
v___x_3441_ = v___x_3438_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v_a_3436_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___boxed(lean_object* v_v_3444_, lean_object* v_a_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0(v_v_3444_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1(size_t v_sz_3450_, size_t v_i_3451_, lean_object* v_bs_3452_){
_start:
{
uint8_t v___x_3454_; 
v___x_3454_ = lean_usize_dec_lt(v_i_3451_, v_sz_3450_);
if (v___x_3454_ == 0)
{
lean_object* v___x_3455_; 
v___x_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3455_, 0, v_bs_3452_);
return v___x_3455_;
}
else
{
lean_object* v_v_3456_; lean_object* v_snd_3457_; 
v_v_3456_ = lean_array_uget(v_bs_3452_, v_i_3451_);
v_snd_3457_ = lean_ctor_get(v_v_3456_, 1);
lean_inc(v_snd_3457_);
if (lean_obj_tag(v_snd_3457_) == 4)
{
lean_object* v_fst_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3472_; 
v_fst_3458_ = lean_ctor_get(v_v_3456_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_v_3456_);
if (v_isSharedCheck_3472_ == 0)
{
lean_object* v_unused_3473_; 
v_unused_3473_ = lean_ctor_get(v_v_3456_, 1);
lean_dec(v_unused_3473_);
v___x_3460_ = v_v_3456_;
v_isShared_3461_ = v_isSharedCheck_3472_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_fst_3458_);
lean_dec(v_v_3456_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3472_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v_s_3462_; lean_object* v___x_3463_; lean_object* v_bs_x27_3464_; lean_object* v___x_3466_; 
v_s_3462_ = lean_ctor_get(v_snd_3457_, 0);
lean_inc_ref(v_s_3462_);
lean_dec_ref_known(v_snd_3457_, 1);
v___x_3463_ = lean_unsigned_to_nat(0u);
v_bs_x27_3464_ = lean_array_uset(v_bs_3452_, v_i_3451_, v___x_3463_);
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 1, v_s_3462_);
v___x_3466_ = v___x_3460_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_fst_3458_);
lean_ctor_set(v_reuseFailAlloc_3471_, 1, v_s_3462_);
v___x_3466_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
size_t v___x_3467_; size_t v___x_3468_; lean_object* v___x_3469_; 
v___x_3467_ = ((size_t)1ULL);
v___x_3468_ = lean_usize_add(v_i_3451_, v___x_3467_);
v___x_3469_ = lean_array_uset(v_bs_x27_3464_, v_i_3451_, v___x_3466_);
v_i_3451_ = v___x_3468_;
v_bs_3452_ = v___x_3469_;
goto _start;
}
}
}
else
{
lean_object* v_fst_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___y_3487_; uint8_t v___x_3491_; 
lean_dec_ref(v_bs_3452_);
v_fst_3474_ = lean_ctor_get(v_v_3456_, 0);
lean_inc(v_fst_3474_);
lean_dec(v_v_3456_);
v___x_3475_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3476_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__0));
v___x_3477_ = lean_string_append(v___x_3476_, v_fst_3474_);
lean_dec(v_fst_3474_);
v___x_3478_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_3479_ = lean_string_append(v___x_3477_, v___x_3478_);
v___x_3480_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__1));
v___x_3481_ = lean_string_append(v___x_3479_, v___x_3480_);
v___x_3482_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__2));
v___x_3483_ = lean_string_append(v___x_3481_, v___x_3482_);
v___x_3484_ = l_Lasm_JS_Data_describe(v_snd_3457_);
v___x_3485_ = lean_string_append(v___x_3483_, v___x_3484_);
lean_dec_ref(v___x_3484_);
v___x_3491_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_3491_ == 0)
{
lean_object* v___x_3492_; 
v___x_3492_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___y_3487_ = v___x_3492_;
goto v___jp_3486_;
}
else
{
v___y_3487_ = v___x_3475_;
goto v___jp_3486_;
}
v___jp_3486_:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3488_ = lean_string_append(v___x_3485_, v___y_3487_);
v___x_3489_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3488_);
v___x_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
return v___x_3490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___boxed(lean_object* v_sz_3493_, lean_object* v_i_3494_, lean_object* v_bs_3495_, lean_object* v___y_3496_){
_start:
{
size_t v_sz_boxed_3497_; size_t v_i_boxed_3498_; lean_object* v_res_3499_; 
v_sz_boxed_3497_ = lean_unbox_usize(v_sz_3493_);
lean_dec(v_sz_3493_);
v_i_boxed_3498_ = lean_unbox_usize(v_i_3494_);
lean_dec(v_i_3494_);
v_res_3499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1(v_sz_boxed_3497_, v_i_boxed_3498_, v_bs_3495_);
return v_res_3499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0(lean_object* v_x_3501_){
_start:
{
switch(lean_obj_tag(v_x_3501_))
{
case 1:
{
goto v___jp_3503_;
}
case 0:
{
goto v___jp_3503_;
}
case 9:
{
lean_object* v_value_3506_; lean_object* v___x_3507_; 
v_value_3506_ = lean_ctor_get(v_x_3501_, 0);
lean_inc(v_value_3506_);
lean_dec_ref_known(v_x_3501_, 2);
v___x_3507_ = l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0(v_value_3506_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3516_; 
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3510_ = v___x_3507_;
v_isShared_3511_ = v_isSharedCheck_3516_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3507_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3516_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3512_; lean_object* v___x_3514_; 
v___x_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3512_, 0, v_a_3508_);
if (v_isShared_3511_ == 0)
{
lean_ctor_set(v___x_3510_, 0, v___x_3512_);
v___x_3514_ = v___x_3510_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v___x_3512_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
return v___x_3514_;
}
}
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
v_a_3517_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3507_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3507_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
case 8:
{
lean_object* v_fields_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3551_; 
v_fields_3525_ = lean_ctor_get(v_x_3501_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v_x_3501_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3527_ = v_x_3501_;
v_isShared_3528_ = v_isSharedCheck_3551_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_fields_3525_);
lean_dec(v_x_3501_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3551_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
size_t v_sz_3529_; size_t v___x_3530_; lean_object* v___x_3531_; 
v_sz_3529_ = lean_array_size(v_fields_3525_);
v___x_3530_ = ((size_t)0ULL);
v___x_3531_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1(v_sz_3529_, v___x_3530_, v_fields_3525_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3542_; 
v_a_3532_ = lean_ctor_get(v___x_3531_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3534_ = v___x_3531_;
v_isShared_3535_ = v_isSharedCheck_3542_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3531_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3542_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3537_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set_tag(v___x_3527_, 1);
lean_ctor_set(v___x_3527_, 0, v_a_3532_);
v___x_3537_ = v___x_3527_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3532_);
v___x_3537_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
lean_object* v___x_3539_; 
if (v_isShared_3535_ == 0)
{
lean_ctor_set(v___x_3534_, 0, v___x_3537_);
v___x_3539_ = v___x_3534_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3537_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
else
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_del_object(v___x_3527_);
v_a_3543_ = lean_ctor_get(v___x_3531_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3531_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3531_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
}
default: 
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3552_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0___closed__0));
v___x_3553_ = l_Lasm_JS_Data_describe(v_x_3501_);
v___x_3554_ = lean_string_append(v___x_3552_, v___x_3553_);
lean_dec_ref(v___x_3553_);
v___x_3555_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3554_);
v___x_3556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3555_);
return v___x_3556_;
}
}
v___jp_3503_:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3504_ = lean_box(0);
v___x_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
return v___x_3505_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0___boxed(lean_object* v_x_3557_, lean_object* v_a_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0(v_x_3557_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_customMetadata(lean_object* v_self_3560_){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3562_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_3563_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3560_, v___x_3562_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3565_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3564_);
lean_dec_ref_known(v___x_3563_, 1);
v___x_3565_ = l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0(v_a_3564_);
return v___x_3565_;
}
else
{
lean_object* v_a_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3573_; 
v_a_3566_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3568_ = v___x_3563_;
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_a_3566_);
lean_dec(v___x_3563_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
lean_object* v___x_3571_; 
if (v_isShared_3569_ == 0)
{
v___x_3571_ = v___x_3568_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_a_3566_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_customMetadata___boxed(lean_object* v_self_3574_, lean_object* v_a_3575_){
_start:
{
lean_object* v_res_3576_; 
v_res_3576_ = l_Lasm_JS_Cloudflare_R2Object_customMetadata(v_self_3574_);
return v_res_3576_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; 
v___x_3580_ = lean_unsigned_to_nat(0u);
v___x_3581_ = lean_nat_to_int(v___x_3580_);
return v___x_3581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_3586_, lean_object* v_key_3587_){
_start:
{
if (lean_obj_tag(v_d_3586_) == 8)
{
lean_object* v___x_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3634_; 
v___x_3590_ = l_Lasm_JS_Data_field(v_d_3586_, v_key_3587_);
v_isSharedCheck_3634_ = !lean_is_exclusive(v_d_3586_);
if (v_isSharedCheck_3634_ == 0)
{
lean_object* v_unused_3635_; 
v_unused_3635_ = lean_ctor_get(v_d_3586_, 0);
lean_dec(v_unused_3635_);
v___x_3592_ = v_d_3586_;
v_isShared_3593_ = v_isSharedCheck_3634_;
goto v_resetjp_3591_;
}
else
{
lean_dec(v_d_3586_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3634_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v_a_3595_; lean_object* v_a_3621_; 
switch(lean_obj_tag(v___x_3590_))
{
case 1:
{
lean_del_object(v___x_3592_);
goto v___jp_3588_;
}
case 0:
{
lean_del_object(v___x_3592_);
goto v___jp_3588_;
}
default: 
{
switch(lean_obj_tag(v___x_3590_))
{
case 3:
{
double v_n_3628_; lean_object* v___x_3629_; 
v_n_3628_ = lean_ctor_get_float(v___x_3590_, 0);
v___x_3629_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_3628_);
if (lean_obj_tag(v___x_3629_) == 0)
{
lean_object* v___x_3630_; 
v___x_3630_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__4));
v_a_3595_ = v___x_3630_;
goto v___jp_3594_;
}
else
{
lean_object* v_val_3631_; 
v_val_3631_ = lean_ctor_get(v___x_3629_, 0);
lean_inc(v_val_3631_);
lean_dec_ref_known(v___x_3629_, 1);
v_a_3621_ = v_val_3631_;
goto v___jp_3620_;
}
}
case 5:
{
lean_object* v_i_3632_; 
v_i_3632_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_i_3632_);
v_a_3621_ = v_i_3632_;
goto v___jp_3620_;
}
default: 
{
lean_object* v___x_3633_; 
v___x_3633_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v_a_3595_ = v___x_3633_;
goto v___jp_3594_;
}
}
}
}
v___jp_3594_:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; uint8_t v___x_3608_; 
v___x_3596_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_3597_ = lean_string_append(v___x_3596_, v_key_3587_);
v___x_3598_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_3599_ = lean_string_append(v___x_3597_, v___x_3598_);
v___x_3600_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__1));
v___x_3601_ = lean_string_append(v___x_3599_, v___x_3600_);
v___x_3602_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_3603_ = lean_string_append(v___x_3601_, v___x_3602_);
v___x_3604_ = l_Lasm_JS_Data_describe(v___x_3590_);
v___x_3605_ = lean_string_append(v___x_3603_, v___x_3604_);
lean_dec_ref(v___x_3604_);
v___x_3606_ = lean_string_utf8_byte_size(v_a_3595_);
v___x_3607_ = lean_unsigned_to_nat(0u);
v___x_3608_ = lean_nat_dec_eq(v___x_3606_, v___x_3607_);
if (v___x_3608_ == 0)
{
lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3615_; 
v___x_3609_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_3610_ = lean_string_append(v___x_3609_, v_a_3595_);
v___x_3611_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_3612_ = lean_string_append(v___x_3610_, v___x_3611_);
v___x_3613_ = lean_string_append(v___x_3605_, v___x_3612_);
lean_dec_ref(v___x_3612_);
if (v_isShared_3593_ == 0)
{
lean_ctor_set_tag(v___x_3592_, 0);
lean_ctor_set(v___x_3592_, 0, v___x_3613_);
v___x_3615_ = v___x_3592_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3616_; 
v_reuseFailAlloc_3616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3616_, 0, v___x_3613_);
v___x_3615_ = v_reuseFailAlloc_3616_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
return v___x_3615_;
}
}
else
{
lean_object* v___x_3618_; 
if (v_isShared_3593_ == 0)
{
lean_ctor_set_tag(v___x_3592_, 0);
lean_ctor_set(v___x_3592_, 0, v___x_3605_);
v___x_3618_ = v___x_3592_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3605_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
v___jp_3620_:
{
lean_object* v___x_3622_; uint8_t v___x_3623_; 
v___x_3622_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__2, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__2_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__2);
v___x_3623_ = lean_int_dec_le(v___x_3622_, v_a_3621_);
if (v___x_3623_ == 0)
{
lean_object* v___x_3624_; 
lean_dec(v_a_3621_);
v___x_3624_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__3));
v_a_3595_ = v___x_3624_;
goto v___jp_3594_;
}
else
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
lean_del_object(v___x_3592_);
lean_dec(v___x_3590_);
v___x_3625_ = l_Int_toNat(v_a_3621_);
lean_dec(v_a_3621_);
v___x_3626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3625_);
v___x_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3626_);
return v___x_3627_;
}
}
}
}
else
{
lean_object* v___x_3636_; 
lean_dec(v_d_3586_);
v___x_3636_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__5));
return v___x_3636_;
}
v___jp_3588_:
{
lean_object* v___x_3589_; 
v___x_3589_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___closed__0));
return v___x_3589_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_3637_, lean_object* v_key_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3(v_d_3637_, v_key_3638_);
lean_dec_ref(v_key_3638_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3645_, lean_object* v_key_3646_){
_start:
{
if (lean_obj_tag(v_d_3645_) == 8)
{
lean_object* v___x_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3678_; 
v___x_3649_ = l_Lasm_JS_Data_field(v_d_3645_, v_key_3646_);
v_isSharedCheck_3678_ = !lean_is_exclusive(v_d_3645_);
if (v_isSharedCheck_3678_ == 0)
{
lean_object* v_unused_3679_; 
v_unused_3679_ = lean_ctor_get(v_d_3645_, 0);
lean_dec(v_unused_3679_);
v___x_3651_ = v_d_3645_;
v_isShared_3652_ = v_isSharedCheck_3678_;
goto v_resetjp_3650_;
}
else
{
lean_dec(v_d_3645_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3678_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
switch(lean_obj_tag(v___x_3649_))
{
case 1:
{
lean_del_object(v___x_3651_);
goto v___jp_3647_;
}
case 0:
{
lean_del_object(v___x_3651_);
goto v___jp_3647_;
}
default: 
{
if (lean_obj_tag(v___x_3649_) == 3)
{
double v_n_3653_; lean_object* v___x_3654_; lean_object* v___x_3656_; 
v_n_3653_ = lean_ctor_get_float(v___x_3649_, 0);
lean_dec_ref_known(v___x_3649_, 0);
v___x_3654_ = lean_box_float(v_n_3653_);
if (v_isShared_3652_ == 0)
{
lean_ctor_set_tag(v___x_3651_, 1);
lean_ctor_set(v___x_3651_, 0, v___x_3654_);
v___x_3656_ = v___x_3651_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v___x_3654_);
v___x_3656_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
lean_object* v___x_3657_; 
v___x_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3656_);
return v___x_3657_;
}
}
else
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; uint8_t v___x_3669_; 
v___x_3659_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_3660_ = lean_string_append(v___x_3659_, v_key_3646_);
v___x_3661_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_3662_ = lean_string_append(v___x_3660_, v___x_3661_);
v___x_3663_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__1));
v___x_3664_ = lean_string_append(v___x_3662_, v___x_3663_);
v___x_3665_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_3666_ = lean_string_append(v___x_3664_, v___x_3665_);
v___x_3667_ = l_Lasm_JS_Data_describe(v___x_3649_);
v___x_3668_ = lean_string_append(v___x_3666_, v___x_3667_);
lean_dec_ref(v___x_3667_);
v___x_3669_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_3669_ == 0)
{
lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3673_; 
v___x_3670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___x_3671_ = lean_string_append(v___x_3668_, v___x_3670_);
if (v_isShared_3652_ == 0)
{
lean_ctor_set_tag(v___x_3651_, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3671_);
v___x_3673_ = v___x_3651_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v___x_3671_);
v___x_3673_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
return v___x_3673_;
}
}
else
{
lean_object* v___x_3676_; 
if (v_isShared_3652_ == 0)
{
lean_ctor_set_tag(v___x_3651_, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3668_);
v___x_3676_ = v___x_3651_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3668_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3680_; 
lean_dec(v_d_3645_);
v___x_3680_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__2));
return v___x_3680_;
}
v___jp_3647_:
{
lean_object* v___x_3648_; 
v___x_3648_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__0));
return v___x_3648_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3681_, lean_object* v_key_3682_){
_start:
{
lean_object* v_res_3683_; 
v_res_3683_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(v_d_3681_, v_key_3682_);
lean_dec_ref(v_key_3682_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1(lean_object* v_context_3685_, lean_object* v_d_3686_){
_start:
{
lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3698_; lean_object* v_received_3699_; lean_object* v___y_3718_; lean_object* v_a_3721_; 
switch(lean_obj_tag(v_d_3686_))
{
case 1:
{
goto v___jp_3688_;
}
case 0:
{
goto v___jp_3688_;
}
default: 
{
lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3745_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
lean_inc(v_d_3686_);
v___x_3746_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(v_d_3686_, v___x_3745_);
if (lean_obj_tag(v___x_3746_) == 0)
{
lean_object* v_a_3747_; 
v_a_3747_ = lean_ctor_get(v___x_3746_, 0);
lean_inc(v_a_3747_);
lean_dec_ref_known(v___x_3746_, 1);
v_a_3721_ = v_a_3747_;
goto v___jp_3720_;
}
else
{
lean_object* v_a_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; 
v_a_3748_ = lean_ctor_get(v___x_3746_, 0);
lean_inc(v_a_3748_);
lean_dec_ref_known(v___x_3746_, 1);
v___x_3749_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
lean_inc(v_d_3686_);
v___x_3750_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__3(v_d_3686_, v___x_3749_);
if (lean_obj_tag(v___x_3750_) == 0)
{
lean_object* v_a_3751_; 
lean_dec(v_a_3748_);
v_a_3751_ = lean_ctor_get(v___x_3750_, 0);
lean_inc(v_a_3751_);
lean_dec_ref_known(v___x_3750_, 1);
v_a_3721_ = v_a_3751_;
goto v___jp_3720_;
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3771_; 
v_a_3752_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3754_ = v___x_3750_;
v_isShared_3755_ = v_isSharedCheck_3771_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3750_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3771_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3756_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
lean_inc(v_d_3686_);
v___x_3757_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(v_d_3686_, v___x_3756_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_object* v_a_3758_; 
lean_del_object(v___x_3754_);
lean_dec(v_a_3752_);
lean_dec(v_a_3748_);
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
lean_inc(v_a_3758_);
lean_dec_ref_known(v___x_3757_, 1);
v_a_3721_ = v_a_3758_;
goto v___jp_3720_;
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3770_; 
lean_dec(v_d_3686_);
v_a_3759_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3761_ = v___x_3757_;
v_isShared_3762_ = v_isSharedCheck_3770_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3757_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3770_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; lean_object* v___x_3765_; 
v___x_3763_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3763_, 0, v_a_3748_);
lean_ctor_set(v___x_3763_, 1, v_a_3752_);
lean_ctor_set(v___x_3763_, 2, v_a_3759_);
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 0, v___x_3763_);
v___x_3765_ = v___x_3761_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v___x_3763_);
v___x_3765_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
lean_object* v___x_3767_; 
if (v_isShared_3755_ == 0)
{
lean_ctor_set_tag(v___x_3754_, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3765_);
v___x_3767_ = v___x_3754_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v___x_3765_);
v___x_3767_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
return v___x_3767_;
}
}
}
}
}
}
}
}
}
v___jp_3688_:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3689_ = lean_box(0);
v___x_3690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3689_);
return v___x_3690_;
}
v___jp_3691_:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3694_ = lean_string_append(v___y_3692_, v___y_3693_);
lean_dec_ref(v___y_3693_);
v___x_3695_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3695_, 0, v___x_3694_);
v___x_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3695_);
return v___x_3696_;
}
v___jp_3697_:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; uint8_t v___x_3711_; 
v___x_3700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_3701_ = lean_string_append(v___x_3700_, v_context_3685_);
v___x_3702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_3703_ = lean_string_append(v___x_3701_, v___x_3702_);
v___x_3704_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1___closed__0));
v___x_3705_ = lean_string_append(v___x_3703_, v___x_3704_);
v___x_3706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_3707_ = lean_string_append(v___x_3705_, v___x_3706_);
v___x_3708_ = lean_string_append(v___x_3707_, v_received_3699_);
lean_dec_ref(v_received_3699_);
v___x_3709_ = lean_string_utf8_byte_size(v___y_3698_);
v___x_3710_ = lean_unsigned_to_nat(0u);
v___x_3711_ = lean_nat_dec_eq(v___x_3709_, v___x_3710_);
if (v___x_3711_ == 0)
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3712_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_3713_ = lean_string_append(v___x_3712_, v___y_3698_);
lean_dec_ref(v___y_3698_);
v___x_3714_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_3715_ = lean_string_append(v___x_3713_, v___x_3714_);
v___y_3692_ = v___x_3708_;
v___y_3693_ = v___x_3715_;
goto v___jp_3691_;
}
else
{
lean_object* v___x_3716_; 
lean_dec_ref(v___y_3698_);
v___x_3716_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_3692_ = v___x_3708_;
v___y_3693_ = v___x_3716_;
goto v___jp_3691_;
}
}
v___jp_3717_:
{
lean_object* v___x_3719_; 
v___x_3719_ = l_Lasm_JS_Data_describe(v_d_3686_);
v___y_3698_ = v___y_3718_;
v_received_3699_ = v___x_3719_;
goto v___jp_3697_;
}
v___jp_3720_:
{
if (lean_obj_tag(v_d_3686_) == 9)
{
lean_object* v_value_3722_; lean_object* v_description_3723_; lean_object* v___x_3724_; uint8_t v___x_3725_; 
v_value_3722_ = lean_ctor_get(v_d_3686_, 0);
v_description_3723_ = lean_ctor_get(v_d_3686_, 1);
v___x_3724_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3725_ = lean_string_dec_eq(v_description_3723_, v___x_3724_);
if (v___x_3725_ == 0)
{
v___y_3718_ = v_a_3721_;
goto v___jp_3717_;
}
else
{
lean_object* v___x_3727_; uint8_t v_isShared_3728_; uint8_t v_isSharedCheck_3742_; 
lean_inc(v_value_3722_);
v_isSharedCheck_3742_ = !lean_is_exclusive(v_d_3686_);
if (v_isSharedCheck_3742_ == 0)
{
lean_object* v_unused_3743_; lean_object* v_unused_3744_; 
v_unused_3743_ = lean_ctor_get(v_d_3686_, 1);
lean_dec(v_unused_3743_);
v_unused_3744_ = lean_ctor_get(v_d_3686_, 0);
lean_dec(v_unused_3744_);
v___x_3727_ = v_d_3686_;
v_isShared_3728_ = v_isSharedCheck_3742_;
goto v_resetjp_3726_;
}
else
{
lean_dec(v_d_3686_);
v___x_3727_ = lean_box(0);
v_isShared_3728_ = v_isSharedCheck_3742_;
goto v_resetjp_3726_;
}
v_resetjp_3726_:
{
uint32_t v___x_3729_; uint64_t v___x_3730_; lean_object* v___x_3732_; 
v___x_3729_ = 206;
v___x_3730_ = 0ULL;
lean_inc(v_value_3722_);
if (v_isShared_3728_ == 0)
{
lean_ctor_set(v___x_3727_, 1, v___x_3724_);
v___x_3732_ = v___x_3727_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_value_3722_);
lean_ctor_set(v_reuseFailAlloc_3741_, 1, v___x_3724_);
v___x_3732_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
uint32_t v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = lasm_js_value_handle(v_value_3722_);
lean_dec(v_value_3722_);
v___x_3734_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3729_, v___x_3730_, v___x_3732_, v___x_3733_);
lean_dec_ref(v___x_3732_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_object* v_a_3735_; uint8_t v___x_3736_; 
v_a_3735_ = lean_ctor_get(v___x_3734_, 0);
lean_inc(v_a_3735_);
lean_dec_ref_known(v___x_3734_, 1);
v___x_3736_ = lean_string_validate_utf8(v_a_3735_);
if (v___x_3736_ == 0)
{
lean_object* v___x_3737_; lean_object* v___x_3738_; 
lean_dec(v_a_3735_);
v___x_3737_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_3738_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3737_);
v___y_3698_ = v_a_3721_;
v_received_3699_ = v___x_3738_;
goto v___jp_3697_;
}
else
{
lean_object* v___x_3739_; 
v___x_3739_ = lean_string_from_utf8_unchecked(v_a_3735_);
v___y_3698_ = v_a_3721_;
v_received_3699_ = v___x_3739_;
goto v___jp_3697_;
}
}
else
{
lean_object* v___x_3740_; 
lean_dec_ref_known(v___x_3734_, 1);
v___x_3740_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_3698_ = v_a_3721_;
v_received_3699_ = v___x_3740_;
goto v___jp_3697_;
}
}
}
}
}
else
{
v___y_3718_ = v_a_3721_;
goto v___jp_3717_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3772_, lean_object* v_d_3773_, lean_object* v_a_3774_){
_start:
{
lean_object* v_res_3775_; 
v_res_3775_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1(v_context_3772_, v_d_3773_);
lean_dec_ref(v_context_3772_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0(lean_object* v_context_3776_, lean_object* v_bytes_3777_){
_start:
{
lean_object* v___x_3779_; 
v___x_3779_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3777_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v_a_3780_; lean_object* v___x_3781_; 
v_a_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc(v_a_3780_);
lean_dec_ref_known(v___x_3779_, 1);
v___x_3781_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1(v_context_3776_, v_a_3780_);
return v___x_3781_;
}
else
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3789_; 
v_a_3782_ = lean_ctor_get(v___x_3779_, 0);
v_isSharedCheck_3789_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3789_ == 0)
{
v___x_3784_ = v___x_3779_;
v_isShared_3785_ = v_isSharedCheck_3789_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v___x_3779_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3789_;
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
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0___boxed(lean_object* v_context_3790_, lean_object* v_bytes_3791_, lean_object* v_a_3792_){
_start:
{
lean_object* v_res_3793_; 
v_res_3793_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0(v_context_3790_, v_bytes_3791_);
lean_dec_ref(v_bytes_3791_);
lean_dec_ref(v_context_3790_);
return v_res_3793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0(lean_object* v_o_3794_, lean_object* v_key_3795_){
_start:
{
lean_object* v_k_3797_; lean_object* v___x_3798_; 
v_k_3797_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3797_, 0, v_key_3795_);
v___x_3798_ = l_Lasm_JS_Wire_encodeIO(v_k_3797_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v_a_3799_; uint32_t v___x_3800_; uint32_t v___x_3801_; uint64_t v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; 
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_a_3799_);
lean_dec_ref_known(v___x_3798_, 1);
v___x_3800_ = 203;
v___x_3801_ = lasm_js_value_handle(v_o_3794_);
v___x_3802_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
v___x_3803_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3804_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3804_, 0, v_o_3794_);
lean_ctor_set(v___x_3804_, 1, v___x_3803_);
v___x_3805_ = lean_unsigned_to_nat(2u);
v___x_3806_ = lean_mk_empty_array_with_capacity(v___x_3805_);
lean_inc_ref(v_k_3797_);
v___x_3807_ = lean_array_push(v___x_3806_, v_k_3797_);
v___x_3808_ = lean_array_push(v___x_3807_, v___x_3804_);
v___x_3809_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3808_);
v___x_3810_ = lasm_js_call(v___x_3800_, v___x_3801_, v___x_3802_, v_a_3799_, v___x_3809_);
lean_dec_ref_known(v___x_3809_, 1);
lean_dec(v_a_3799_);
if (lean_obj_tag(v___x_3810_) == 0)
{
lean_object* v_a_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; 
v_a_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_a_3811_);
lean_dec_ref_known(v___x_3810_, 1);
v___x_3812_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0));
v___x_3813_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3797_);
v___x_3814_ = lean_string_append(v___x_3812_, v___x_3813_);
lean_dec_ref(v___x_3813_);
v___x_3815_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0(v___x_3814_, v_a_3811_);
lean_dec(v_a_3811_);
lean_dec_ref(v___x_3814_);
return v___x_3815_;
}
else
{
lean_object* v_a_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3823_; 
lean_dec_ref_known(v_k_3797_, 1);
v_a_3816_ = lean_ctor_get(v___x_3810_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v___x_3810_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3818_ = v___x_3810_;
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_a_3816_);
lean_dec(v___x_3810_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3821_; 
if (v_isShared_3819_ == 0)
{
v___x_3821_ = v___x_3818_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3816_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
}
else
{
lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3831_; 
lean_dec_ref_known(v_k_3797_, 1);
lean_dec(v_o_3794_);
v_a_3824_ = lean_ctor_get(v___x_3798_, 0);
v_isSharedCheck_3831_ = !lean_is_exclusive(v___x_3798_);
if (v_isSharedCheck_3831_ == 0)
{
v___x_3826_ = v___x_3798_;
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_dec(v___x_3798_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3831_;
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
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v_a_3824_);
v___x_3829_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
return v___x_3829_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0___boxed(lean_object* v_o_3832_, lean_object* v_key_3833_, lean_object* v_a_3834_){
_start:
{
lean_object* v_res_3835_; 
v_res_3835_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0(v_o_3832_, v_key_3833_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_range(lean_object* v_self_3836_){
_start:
{
lean_object* v___x_3838_; lean_object* v___x_3839_; 
v___x_3838_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1));
v___x_3839_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0(v_self_3836_, v___x_3838_);
return v___x_3839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_range___boxed(lean_object* v_self_3840_, lean_object* v_a_3841_){
_start:
{
lean_object* v_res_3842_; 
v_res_3842_ = l_Lasm_JS_Cloudflare_R2Object_range(v_self_3840_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_storageClass(lean_object* v_self_3843_){
_start:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3845_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_3846_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3843_, v___x_3845_);
return v___x_3846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_storageClass___boxed(lean_object* v_self_3847_, lean_object* v_a_3848_){
_start:
{
lean_object* v_res_3849_; 
v_res_3849_ = l_Lasm_JS_Cloudflare_R2Object_storageClass(v_self_3847_);
return v_res_3849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0(lean_object* v_o_3850_, lean_object* v_key_3851_){
_start:
{
lean_object* v_k_3853_; lean_object* v___x_3854_; 
v_k_3853_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3853_, 0, v_key_3851_);
v___x_3854_ = l_Lasm_JS_Wire_encodeIO(v_k_3853_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_a_3855_; uint32_t v___x_3856_; uint32_t v___x_3857_; uint64_t v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v_a_3855_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_a_3855_);
lean_dec_ref_known(v___x_3854_, 1);
v___x_3856_ = 203;
v___x_3857_ = lasm_js_value_handle(v_o_3850_);
v___x_3858_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
v___x_3859_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3860_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3860_, 0, v_o_3850_);
lean_ctor_set(v___x_3860_, 1, v___x_3859_);
v___x_3861_ = lean_unsigned_to_nat(2u);
v___x_3862_ = lean_mk_empty_array_with_capacity(v___x_3861_);
lean_inc_ref(v_k_3853_);
v___x_3863_ = lean_array_push(v___x_3862_, v_k_3853_);
v___x_3864_ = lean_array_push(v___x_3863_, v___x_3860_);
v___x_3865_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3865_, 0, v___x_3864_);
v___x_3866_ = lasm_js_call(v___x_3856_, v___x_3857_, v___x_3858_, v_a_3855_, v___x_3865_);
lean_dec_ref_known(v___x_3865_, 1);
lean_dec(v_a_3855_);
if (lean_obj_tag(v___x_3866_) == 0)
{
lean_object* v_a_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
lean_inc(v_a_3867_);
lean_dec_ref_known(v___x_3866_, 1);
v___x_3868_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0));
v___x_3869_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3853_);
v___x_3870_ = lean_string_append(v___x_3868_, v___x_3869_);
lean_dec_ref(v___x_3869_);
v___x_3871_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_3870_, v_a_3867_);
lean_dec(v_a_3867_);
lean_dec_ref(v___x_3870_);
return v___x_3871_;
}
else
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3879_; 
lean_dec_ref_known(v_k_3853_, 1);
v_a_3872_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3874_ = v___x_3866_;
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3866_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3877_; 
if (v_isShared_3875_ == 0)
{
v___x_3877_ = v___x_3874_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v_a_3872_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
}
else
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
lean_dec_ref_known(v_k_3853_, 1);
lean_dec(v_o_3850_);
v_a_3880_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3882_ = v___x_3854_;
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
else
{
lean_inc(v_a_3880_);
lean_dec(v___x_3854_);
v___x_3882_ = lean_box(0);
v_isShared_3883_ = v_isSharedCheck_3887_;
goto v_resetjp_3881_;
}
v_resetjp_3881_:
{
lean_object* v___x_3885_; 
if (v_isShared_3883_ == 0)
{
v___x_3885_ = v___x_3882_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v_a_3880_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0___boxed(lean_object* v_o_3888_, lean_object* v_key_3889_, lean_object* v_a_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0(v_o_3888_, v_key_3889_);
return v_res_3891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5(lean_object* v_self_3893_){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; 
v___x_3895_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5___closed__0));
v___x_3896_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0(v_self_3893_, v___x_3895_);
return v___x_3896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5___boxed(lean_object* v_self_3897_, lean_object* v_a_3898_){
_start:
{
lean_object* v_res_3899_; 
v_res_3899_ = l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5(v_self_3897_);
return v_res_3899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata(lean_object* v_self_3901_, lean_object* v_headers_3902_){
_start:
{
lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; 
v___x_3904_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata___closed__0));
v___x_3905_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3906_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3906_, 0, v_headers_3902_);
lean_ctor_set(v___x_3906_, 1, v___x_3905_);
v___x_3907_ = lean_unsigned_to_nat(1u);
v___x_3908_ = lean_mk_empty_array_with_capacity(v___x_3907_);
v___x_3909_ = lean_array_push(v___x_3908_, v___x_3906_);
v___x_3910_ = l_Lasm_JS_Web_Support_args(v___x_3909_);
v___x_3911_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3901_, v___x_3904_, v___x_3910_);
return v___x_3911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata___boxed(lean_object* v_self_3912_, lean_object* v_headers_3913_, lean_object* v_a_3914_){
_start:
{
lean_object* v_res_3915_; 
v_res_3915_ = l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata(v_self_3912_, v_headers_3913_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_body(lean_object* v_self_3917_){
_start:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3919_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_body___closed__0));
v___x_3920_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3917_, v___x_3919_);
if (lean_obj_tag(v___x_3920_) == 0)
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3928_; 
v_a_3921_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3923_ = v___x_3920_;
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___x_3920_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
return v___x_3926_;
}
}
}
else
{
lean_object* v_a_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3936_; 
v_a_3929_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3936_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3931_ = v___x_3920_;
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_a_3929_);
lean_dec(v___x_3920_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3934_; 
if (v_isShared_3932_ == 0)
{
v___x_3934_ = v___x_3931_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v_a_3929_);
v___x_3934_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
return v___x_3934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_body___boxed(lean_object* v_self_3937_, lean_object* v_a_3938_){
_start:
{
lean_object* v_res_3939_; 
v_res_3939_ = l_Lasm_JS_Cloudflare_R2ObjectBody_body(v_self_3937_);
return v_res_3939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed(lean_object* v_self_3941_){
_start:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; 
v___x_3943_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed___closed__0));
v___x_3944_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_3941_, v___x_3943_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed___boxed(lean_object* v_self_3945_, lean_object* v_a_3946_){
_start:
{
lean_object* v_res_3947_; 
v_res_3947_ = l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed(v_self_3945_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0(lean_object* v_x_3948_){
_start:
{
lean_object* v_val_3951_; 
if (lean_obj_tag(v_x_3948_) == 0)
{
lean_object* v_a_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3961_; 
v_a_3953_ = lean_ctor_get(v_x_3948_, 0);
v_isSharedCheck_3961_ = !lean_is_exclusive(v_x_3948_);
if (v_isSharedCheck_3961_ == 0)
{
v___x_3955_ = v_x_3948_;
v_isShared_3956_ = v_isSharedCheck_3961_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_a_3953_);
lean_dec(v_x_3948_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3961_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3958_; 
if (v_isShared_3956_ == 0)
{
v___x_3958_ = v___x_3955_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v_a_3953_);
v___x_3958_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
lean_object* v___x_3959_; 
v___x_3959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3958_);
return v___x_3959_;
}
}
}
else
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3975_; 
v_a_3962_ = lean_ctor_get(v_x_3948_, 0);
v_isSharedCheck_3975_ = !lean_is_exclusive(v_x_3948_);
if (v_isSharedCheck_3975_ == 0)
{
v___x_3964_ = v_x_3948_;
v_isShared_3965_ = v_isSharedCheck_3975_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v_x_3948_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3975_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3966_; 
v___x_3966_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_3962_);
if (lean_obj_tag(v___x_3966_) == 0)
{
lean_object* v_a_3967_; lean_object* v___x_3969_; 
v_a_3967_ = lean_ctor_get(v___x_3966_, 0);
lean_inc(v_a_3967_);
lean_dec_ref_known(v___x_3966_, 1);
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 0, v_a_3967_);
v___x_3969_ = v___x_3964_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v_a_3967_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
v_val_3951_ = v___x_3969_;
goto v___jp_3950_;
}
}
else
{
lean_object* v_a_3971_; lean_object* v___x_3973_; 
v_a_3971_ = lean_ctor_get(v___x_3966_, 0);
lean_inc(v_a_3971_);
lean_dec_ref_known(v___x_3966_, 1);
if (v_isShared_3965_ == 0)
{
lean_ctor_set_tag(v___x_3964_, 0);
lean_ctor_set(v___x_3964_, 0, v_a_3971_);
v___x_3973_ = v___x_3964_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v_a_3971_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
v_val_3951_ = v___x_3973_;
goto v___jp_3950_;
}
}
}
}
v___jp_3950_:
{
lean_object* v___x_3952_; 
v___x_3952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3952_, 0, v_val_3951_);
return v___x_3952_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0___boxed(lean_object* v_x_3976_, lean_object* v___y_3977_){
_start:
{
lean_object* v_res_3978_; 
v_res_3978_ = l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0(v_x_3976_);
return v_res_3978_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3(void){
_start:
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3983_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__2));
v___x_3984_ = l_Lasm_JS_Web_Support_args(v___x_3983_);
return v___x_3984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer(lean_object* v_self_3985_){
_start:
{
lean_object* v___f_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; uint8_t v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; 
v___f_3987_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__0));
v___x_3988_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__1));
v___x_3989_ = lean_unsigned_to_nat(0u);
v___x_3990_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_3991_ = 0;
v___x_3992_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3985_, v___x_3988_, v___x_3990_);
v___x_3993_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3989_, v___x_3991_, v___x_3992_, v___f_3987_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___boxed(lean_object* v_self_3994_, lean_object* v_a_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer(v_self_3994_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bytes(lean_object* v_self_3998_){
_start:
{
lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_4000_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_bytes___closed__0));
v___x_4001_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_4002_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_self_3998_, v___x_4000_, v___x_4001_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bytes___boxed(lean_object* v_self_4003_, lean_object* v_a_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l_Lasm_JS_Cloudflare_R2ObjectBody_bytes(v_self_4003_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_text(lean_object* v_self_4007_){
_start:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v___x_4009_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_text___closed__0));
v___x_4010_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_4011_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_4007_, v___x_4009_, v___x_4010_);
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_text___boxed(lean_object* v_self_4012_, lean_object* v_a_4013_){
_start:
{
lean_object* v_res_4014_; 
v_res_4014_ = l_Lasm_JS_Cloudflare_R2ObjectBody_text(v_self_4012_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_json(lean_object* v_self_4016_){
_start:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4018_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_json___closed__0));
v___x_4019_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_4020_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_4016_, v___x_4018_, v___x_4019_);
return v___x_4020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_json___boxed(lean_object* v_self_4021_, lean_object* v_a_4022_){
_start:
{
lean_object* v_res_4023_; 
v_res_4023_ = l_Lasm_JS_Cloudflare_R2ObjectBody_json(v_self_4021_);
return v_res_4023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_blob(lean_object* v_self_4025_){
_start:
{
lean_object* v___f_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; uint8_t v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___f_4027_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0));
v___x_4028_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_blob___closed__0));
v___x_4029_ = lean_unsigned_to_nat(0u);
v___x_4030_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_4031_ = 0;
v___x_4032_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_4025_, v___x_4028_, v___x_4030_);
v___x_4033_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4029_, v___x_4031_, v___x_4032_, v___f_4027_);
return v___x_4033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_blob___boxed(lean_object* v_self_4034_, lean_object* v_a_4035_){
_start:
{
lean_object* v_res_4036_; 
v_res_4036_ = l_Lasm_JS_Cloudflare_R2ObjectBody_blob(v_self_4034_);
return v_res_4036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_md5(lean_object* v_self_4037_){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4039_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
v___x_4040_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4037_, v___x_4039_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___x_4042_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_a_4041_);
lean_dec_ref_known(v___x_4040_, 1);
v___x_4042_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_4041_);
return v___x_4042_;
}
else
{
lean_object* v_a_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4050_; 
v_a_4043_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_4045_ = v___x_4040_;
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_a_4043_);
lean_dec(v___x_4040_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4048_; 
if (v_isShared_4046_ == 0)
{
v___x_4048_ = v___x_4045_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_a_4043_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_md5___boxed(lean_object* v_self_4051_, lean_object* v_a_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_Lasm_JS_Cloudflare_R2Checksums_md5(v_self_4051_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha1(lean_object* v_self_4054_){
_start:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; 
v___x_4056_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
v___x_4057_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4054_, v___x_4056_);
if (lean_obj_tag(v___x_4057_) == 0)
{
lean_object* v_a_4058_; lean_object* v___x_4059_; 
v_a_4058_ = lean_ctor_get(v___x_4057_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v___x_4057_, 1);
v___x_4059_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_4058_);
return v___x_4059_;
}
else
{
lean_object* v_a_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4067_; 
v_a_4060_ = lean_ctor_get(v___x_4057_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_4062_ = v___x_4057_;
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_a_4060_);
lean_dec(v___x_4057_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4065_; 
if (v_isShared_4063_ == 0)
{
v___x_4065_ = v___x_4062_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v_a_4060_);
v___x_4065_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
return v___x_4065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha1___boxed(lean_object* v_self_4068_, lean_object* v_a_4069_){
_start:
{
lean_object* v_res_4070_; 
v_res_4070_ = l_Lasm_JS_Cloudflare_R2Checksums_sha1(v_self_4068_);
return v_res_4070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha256(lean_object* v_self_4071_){
_start:
{
lean_object* v___x_4073_; lean_object* v___x_4074_; 
v___x_4073_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
v___x_4074_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4071_, v___x_4073_);
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v_a_4075_; lean_object* v___x_4076_; 
v_a_4075_ = lean_ctor_get(v___x_4074_, 0);
lean_inc(v_a_4075_);
lean_dec_ref_known(v___x_4074_, 1);
v___x_4076_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_4075_);
return v___x_4076_;
}
else
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4084_; 
v_a_4077_ = lean_ctor_get(v___x_4074_, 0);
v_isSharedCheck_4084_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4079_ = v___x_4074_;
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4074_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
if (v_isShared_4080_ == 0)
{
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_a_4077_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha256___boxed(lean_object* v_self_4085_, lean_object* v_a_4086_){
_start:
{
lean_object* v_res_4087_; 
v_res_4087_ = l_Lasm_JS_Cloudflare_R2Checksums_sha256(v_self_4085_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha384(lean_object* v_self_4088_){
_start:
{
lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___x_4090_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
v___x_4091_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4088_, v___x_4090_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4093_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
lean_inc(v_a_4092_);
lean_dec_ref_known(v___x_4091_, 1);
v___x_4093_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_4092_);
return v___x_4093_;
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
v_a_4094_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4091_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4091_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha384___boxed(lean_object* v_self_4102_, lean_object* v_a_4103_){
_start:
{
lean_object* v_res_4104_; 
v_res_4104_ = l_Lasm_JS_Cloudflare_R2Checksums_sha384(v_self_4102_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha512(lean_object* v_self_4105_){
_start:
{
lean_object* v___x_4107_; lean_object* v___x_4108_; 
v___x_4107_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
v___x_4108_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4105_, v___x_4107_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_object* v_a_4109_; lean_object* v___x_4110_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
lean_inc(v_a_4109_);
lean_dec_ref_known(v___x_4108_, 1);
v___x_4110_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_4109_);
return v___x_4110_;
}
else
{
lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4118_; 
v_a_4111_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4113_ = v___x_4108_;
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_dec(v___x_4108_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4111_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha512___boxed(lean_object* v_self_4119_, lean_object* v_a_4120_){
_start:
{
lean_object* v_res_4121_; 
v_res_4121_ = l_Lasm_JS_Cloudflare_R2Checksums_sha512(v_self_4119_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2(lean_object* v_context_4122_, lean_object* v_d_4123_){
_start:
{
lean_object* v___y_4126_; lean_object* v___y_4127_; lean_object* v___y_4132_; lean_object* v_received_4133_; lean_object* v___y_4152_; lean_object* v_a_4155_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4179_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
lean_inc(v_d_4123_);
v___x_4180_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4123_, v___x_4179_);
if (lean_obj_tag(v___x_4180_) == 0)
{
lean_object* v_a_4181_; 
v_a_4181_ = lean_ctor_get(v___x_4180_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v___x_4180_, 1);
v_a_4155_ = v_a_4181_;
goto v___jp_4154_;
}
else
{
lean_object* v_a_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; 
v_a_4182_ = lean_ctor_get(v___x_4180_, 0);
lean_inc(v_a_4182_);
lean_dec_ref_known(v___x_4180_, 1);
v___x_4183_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
lean_inc(v_d_4123_);
v___x_4184_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4123_, v___x_4183_);
if (lean_obj_tag(v___x_4184_) == 0)
{
lean_object* v_a_4185_; 
lean_dec(v_a_4182_);
v_a_4185_ = lean_ctor_get(v___x_4184_, 0);
lean_inc(v_a_4185_);
lean_dec_ref_known(v___x_4184_, 1);
v_a_4155_ = v_a_4185_;
goto v___jp_4154_;
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; 
v_a_4186_ = lean_ctor_get(v___x_4184_, 0);
lean_inc(v_a_4186_);
lean_dec_ref_known(v___x_4184_, 1);
v___x_4187_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
lean_inc(v_d_4123_);
v___x_4188_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4123_, v___x_4187_);
if (lean_obj_tag(v___x_4188_) == 0)
{
lean_object* v_a_4189_; 
lean_dec(v_a_4186_);
lean_dec(v_a_4182_);
v_a_4189_ = lean_ctor_get(v___x_4188_, 0);
lean_inc(v_a_4189_);
lean_dec_ref_known(v___x_4188_, 1);
v_a_4155_ = v_a_4189_;
goto v___jp_4154_;
}
else
{
lean_object* v_a_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; 
v_a_4190_ = lean_ctor_get(v___x_4188_, 0);
lean_inc(v_a_4190_);
lean_dec_ref_known(v___x_4188_, 1);
v___x_4191_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
lean_inc(v_d_4123_);
v___x_4192_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4123_, v___x_4191_);
if (lean_obj_tag(v___x_4192_) == 0)
{
lean_object* v_a_4193_; 
lean_dec(v_a_4190_);
lean_dec(v_a_4186_);
lean_dec(v_a_4182_);
v_a_4193_ = lean_ctor_get(v___x_4192_, 0);
lean_inc(v_a_4193_);
lean_dec_ref_known(v___x_4192_, 1);
v_a_4155_ = v_a_4193_;
goto v___jp_4154_;
}
else
{
lean_object* v_a_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
v_a_4194_ = lean_ctor_get(v___x_4192_, 0);
lean_inc(v_a_4194_);
lean_dec_ref_known(v___x_4192_, 1);
v___x_4195_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
lean_inc(v_d_4123_);
v___x_4196_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4123_, v___x_4195_);
if (lean_obj_tag(v___x_4196_) == 0)
{
lean_object* v_a_4197_; 
lean_dec(v_a_4194_);
lean_dec(v_a_4190_);
lean_dec(v_a_4186_);
lean_dec(v_a_4182_);
v_a_4197_ = lean_ctor_get(v___x_4196_, 0);
lean_inc(v_a_4197_);
lean_dec_ref_known(v___x_4196_, 1);
v_a_4155_ = v_a_4197_;
goto v___jp_4154_;
}
else
{
lean_object* v_a_4198_; lean_object* v___x_4200_; uint8_t v_isShared_4201_; uint8_t v_isSharedCheck_4206_; 
lean_dec(v_d_4123_);
v_a_4198_ = lean_ctor_get(v___x_4196_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4196_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4200_ = v___x_4196_;
v_isShared_4201_ = v_isSharedCheck_4206_;
goto v_resetjp_4199_;
}
else
{
lean_inc(v_a_4198_);
lean_dec(v___x_4196_);
v___x_4200_ = lean_box(0);
v_isShared_4201_ = v_isSharedCheck_4206_;
goto v_resetjp_4199_;
}
v_resetjp_4199_:
{
lean_object* v___x_4202_; lean_object* v___x_4204_; 
v___x_4202_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4202_, 0, v_a_4182_);
lean_ctor_set(v___x_4202_, 1, v_a_4186_);
lean_ctor_set(v___x_4202_, 2, v_a_4190_);
lean_ctor_set(v___x_4202_, 3, v_a_4194_);
lean_ctor_set(v___x_4202_, 4, v_a_4198_);
if (v_isShared_4201_ == 0)
{
lean_ctor_set_tag(v___x_4200_, 0);
lean_ctor_set(v___x_4200_, 0, v___x_4202_);
v___x_4204_ = v___x_4200_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v___x_4202_);
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
}
}
v___jp_4125_:
{
lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; 
v___x_4128_ = lean_string_append(v___y_4126_, v___y_4127_);
lean_dec_ref(v___y_4127_);
v___x_4129_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4129_, 0, v___x_4128_);
v___x_4130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
return v___x_4130_;
}
v___jp_4131_:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; uint8_t v___x_4145_; 
v___x_4134_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_4135_ = lean_string_append(v___x_4134_, v_context_4122_);
v___x_4136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_4137_ = lean_string_append(v___x_4135_, v___x_4136_);
v___x_4138_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__1));
v___x_4139_ = lean_string_append(v___x_4137_, v___x_4138_);
v___x_4140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_4141_ = lean_string_append(v___x_4139_, v___x_4140_);
v___x_4142_ = lean_string_append(v___x_4141_, v_received_4133_);
lean_dec_ref(v_received_4133_);
v___x_4143_ = lean_string_utf8_byte_size(v___y_4132_);
v___x_4144_ = lean_unsigned_to_nat(0u);
v___x_4145_ = lean_nat_dec_eq(v___x_4143_, v___x_4144_);
if (v___x_4145_ == 0)
{
lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v___x_4146_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_4147_ = lean_string_append(v___x_4146_, v___y_4132_);
lean_dec_ref(v___y_4132_);
v___x_4148_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_4149_ = lean_string_append(v___x_4147_, v___x_4148_);
v___y_4126_ = v___x_4142_;
v___y_4127_ = v___x_4149_;
goto v___jp_4125_;
}
else
{
lean_object* v___x_4150_; 
lean_dec_ref(v___y_4132_);
v___x_4150_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_4126_ = v___x_4142_;
v___y_4127_ = v___x_4150_;
goto v___jp_4125_;
}
}
v___jp_4151_:
{
lean_object* v___x_4153_; 
v___x_4153_ = l_Lasm_JS_Data_describe(v_d_4123_);
v___y_4132_ = v___y_4152_;
v_received_4133_ = v___x_4153_;
goto v___jp_4131_;
}
v___jp_4154_:
{
if (lean_obj_tag(v_d_4123_) == 9)
{
lean_object* v_value_4156_; lean_object* v_description_4157_; lean_object* v___x_4158_; uint8_t v___x_4159_; 
v_value_4156_ = lean_ctor_get(v_d_4123_, 0);
v_description_4157_ = lean_ctor_get(v_d_4123_, 1);
v___x_4158_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4159_ = lean_string_dec_eq(v_description_4157_, v___x_4158_);
if (v___x_4159_ == 0)
{
v___y_4152_ = v_a_4155_;
goto v___jp_4151_;
}
else
{
lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4176_; 
lean_inc(v_value_4156_);
v_isSharedCheck_4176_ = !lean_is_exclusive(v_d_4123_);
if (v_isSharedCheck_4176_ == 0)
{
lean_object* v_unused_4177_; lean_object* v_unused_4178_; 
v_unused_4177_ = lean_ctor_get(v_d_4123_, 1);
lean_dec(v_unused_4177_);
v_unused_4178_ = lean_ctor_get(v_d_4123_, 0);
lean_dec(v_unused_4178_);
v___x_4161_ = v_d_4123_;
v_isShared_4162_ = v_isSharedCheck_4176_;
goto v_resetjp_4160_;
}
else
{
lean_dec(v_d_4123_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4176_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
uint32_t v___x_4163_; uint64_t v___x_4164_; lean_object* v___x_4166_; 
v___x_4163_ = 206;
v___x_4164_ = 0ULL;
lean_inc(v_value_4156_);
if (v_isShared_4162_ == 0)
{
lean_ctor_set(v___x_4161_, 1, v___x_4158_);
v___x_4166_ = v___x_4161_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4175_; 
v_reuseFailAlloc_4175_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4175_, 0, v_value_4156_);
lean_ctor_set(v_reuseFailAlloc_4175_, 1, v___x_4158_);
v___x_4166_ = v_reuseFailAlloc_4175_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
uint32_t v___x_4167_; lean_object* v___x_4168_; 
v___x_4167_ = lasm_js_value_handle(v_value_4156_);
lean_dec(v_value_4156_);
v___x_4168_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4163_, v___x_4164_, v___x_4166_, v___x_4167_);
lean_dec_ref(v___x_4166_);
if (lean_obj_tag(v___x_4168_) == 0)
{
lean_object* v_a_4169_; uint8_t v___x_4170_; 
v_a_4169_ = lean_ctor_get(v___x_4168_, 0);
lean_inc(v_a_4169_);
lean_dec_ref_known(v___x_4168_, 1);
v___x_4170_ = lean_string_validate_utf8(v_a_4169_);
if (v___x_4170_ == 0)
{
lean_object* v___x_4171_; lean_object* v___x_4172_; 
lean_dec(v_a_4169_);
v___x_4171_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_4172_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4171_);
v___y_4132_ = v_a_4155_;
v_received_4133_ = v___x_4172_;
goto v___jp_4131_;
}
else
{
lean_object* v___x_4173_; 
v___x_4173_ = lean_string_from_utf8_unchecked(v_a_4169_);
v___y_4132_ = v_a_4155_;
v_received_4133_ = v___x_4173_;
goto v___jp_4131_;
}
}
else
{
lean_object* v___x_4174_; 
lean_dec_ref_known(v___x_4168_, 1);
v___x_4174_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_4132_ = v_a_4155_;
v_received_4133_ = v___x_4174_;
goto v___jp_4131_;
}
}
}
}
}
else
{
v___y_4152_ = v_a_4155_;
goto v___jp_4151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2___boxed(lean_object* v_context_4207_, lean_object* v_d_4208_, lean_object* v_a_4209_){
_start:
{
lean_object* v_res_4210_; 
v_res_4210_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2(v_context_4207_, v_d_4208_);
lean_dec_ref(v_context_4207_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1(lean_object* v_context_4211_, lean_object* v_bytes_4212_){
_start:
{
lean_object* v___x_4214_; 
v___x_4214_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4212_);
if (lean_obj_tag(v___x_4214_) == 0)
{
lean_object* v_a_4215_; lean_object* v___x_4216_; 
v_a_4215_ = lean_ctor_get(v___x_4214_, 0);
lean_inc(v_a_4215_);
lean_dec_ref_known(v___x_4214_, 1);
v___x_4216_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2(v_context_4211_, v_a_4215_);
return v___x_4216_;
}
else
{
lean_object* v_a_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4224_; 
v_a_4217_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4224_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4219_ = v___x_4214_;
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_a_4217_);
lean_dec(v___x_4214_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4224_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v___x_4222_; 
if (v_isShared_4220_ == 0)
{
v___x_4222_ = v___x_4219_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v_a_4217_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1___boxed(lean_object* v_context_4225_, lean_object* v_bytes_4226_, lean_object* v_a_4227_){
_start:
{
lean_object* v_res_4228_; 
v_res_4228_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1(v_context_4225_, v_bytes_4226_);
lean_dec_ref(v_bytes_4226_);
lean_dec_ref(v_context_4225_);
return v_res_4228_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0(uint8_t v_await_4229_, uint64_t v_extra_4230_){
_start:
{
uint64_t v___x_4231_; uint64_t v___y_4233_; 
v___x_4231_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_4229_ == 0)
{
uint64_t v___x_4236_; 
v___x_4236_ = 0ULL;
v___y_4233_ = v___x_4236_;
goto v___jp_4232_;
}
else
{
uint64_t v___x_4237_; 
v___x_4237_ = 2ULL;
v___y_4233_ = v___x_4237_;
goto v___jp_4232_;
}
v___jp_4232_:
{
uint64_t v___x_4234_; uint64_t v___x_4235_; 
v___x_4234_ = lean_uint64_lor(v___x_4231_, v___y_4233_);
v___x_4235_ = lean_uint64_lor(v___x_4234_, v_extra_4230_);
return v___x_4235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0___boxed(lean_object* v_await_4238_, lean_object* v_extra_4239_){
_start:
{
uint8_t v_await_boxed_4240_; uint64_t v_extra_boxed_4241_; uint64_t v_res_4242_; lean_object* v_r_4243_; 
v_await_boxed_4240_ = lean_unbox(v_await_4238_);
v_extra_boxed_4241_ = lean_unbox_uint64(v_extra_4239_);
lean_dec_ref(v_extra_4239_);
v_res_4242_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0(v_await_boxed_4240_, v_extra_boxed_4241_);
v_r_4243_ = lean_box_uint64(v_res_4242_);
return v_r_4243_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4244_; uint8_t v___x_4245_; uint64_t v___x_4246_; 
v___x_4244_ = 8ULL;
v___x_4245_ = 0;
v___x_4246_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0(v___x_4245_, v___x_4244_);
return v___x_4246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0(lean_object* v_o_4247_, lean_object* v_name_4248_, lean_object* v_args_4249_){
_start:
{
lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; uint64_t v___x_4254_; lean_object* v___x_4255_; 
v___x_4251_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4252_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4252_, 0, v_o_4247_);
lean_ctor_set(v___x_4252_, 1, v___x_4251_);
lean_inc_ref(v_name_4248_);
v___x_4253_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4253_, 0, v_name_4248_);
v___x_4254_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0);
v___x_4255_ = l_Lasm_JS_Value_invokeRaw(v___x_4252_, v___x_4253_, v_args_4249_, v___x_4254_);
if (lean_obj_tag(v___x_4255_) == 0)
{
lean_object* v_a_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v_a_4256_ = lean_ctor_get(v___x_4255_, 0);
lean_inc(v_a_4256_);
lean_dec_ref_known(v___x_4255_, 1);
v___x_4257_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_4258_ = lean_string_append(v___x_4257_, v_name_4248_);
lean_dec_ref(v_name_4248_);
v___x_4259_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1(v___x_4258_, v_a_4256_);
lean_dec(v_a_4256_);
lean_dec_ref(v___x_4258_);
return v___x_4259_;
}
else
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4267_; 
lean_dec_ref(v_name_4248_);
v_a_4260_ = lean_ctor_get(v___x_4255_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4255_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4262_ = v___x_4255_;
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4255_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___boxed(lean_object* v_o_4268_, lean_object* v_name_4269_, lean_object* v_args_4270_, lean_object* v_a_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0(v_o_4268_, v_name_4269_, v_args_4270_);
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_toJSON(lean_object* v_self_4274_){
_start:
{
lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; 
v___x_4276_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Checksums_toJSON___closed__0));
v___x_4277_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_4278_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0(v_self_4274_, v___x_4276_, v___x_4277_);
return v___x_4278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_toJSON___boxed(lean_object* v_self_4279_, lean_object* v_a_4280_){
_start:
{
lean_object* v_res_4281_; 
v_res_4281_ = l_Lasm_JS_Cloudflare_R2Checksums_toJSON(v_self_4279_);
return v_res_4281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_key(lean_object* v_self_4282_){
_start:
{
lean_object* v___x_4284_; lean_object* v___x_4285_; 
v___x_4284_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_key___closed__0));
v___x_4285_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4282_, v___x_4284_);
return v___x_4285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_key___boxed(lean_object* v_self_4286_, lean_object* v_a_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_key(v_self_4286_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId(lean_object* v_self_4290_){
_start:
{
lean_object* v___x_4292_; lean_object* v___x_4293_; 
v___x_4292_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId___closed__0));
v___x_4293_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4290_, v___x_4292_);
return v___x_4293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId___boxed(lean_object* v_self_4294_, lean_object* v_a_4295_){
_start:
{
lean_object* v_res_4296_; 
v_res_4296_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId(v_self_4294_);
return v_res_4296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__0(lean_object* v_x_4297_){
_start:
{
if (lean_obj_tag(v_x_4297_) == 0)
{
lean_object* v___x_4298_; 
v___x_4298_ = lean_box(0);
return v___x_4298_;
}
else
{
lean_object* v_val_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; 
v_val_4299_ = lean_ctor_get(v_x_4297_, 0);
lean_inc(v_val_4299_);
lean_dec_ref_known(v_x_4297_, 1);
v___x_4300_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_4301_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(v_val_4299_);
v___x_4302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4300_);
lean_ctor_set(v___x_4302_, 1, v___x_4301_);
v___x_4303_ = lean_unsigned_to_nat(1u);
v___x_4304_ = lean_mk_empty_array_with_capacity(v___x_4303_);
v___x_4305_ = lean_array_push(v___x_4304_, v___x_4302_);
v___x_4306_ = l_Lasm_JS_Web_Support_fields(v___x_4305_);
lean_dec_ref(v___x_4305_);
return v___x_4306_;
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1(uint8_t v_await_4307_, uint64_t v_extra_4308_){
_start:
{
uint64_t v___x_4309_; uint64_t v___y_4311_; 
v___x_4309_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_4307_ == 0)
{
uint64_t v___x_4314_; 
v___x_4314_ = 0ULL;
v___y_4311_ = v___x_4314_;
goto v___jp_4310_;
}
else
{
uint64_t v___x_4315_; 
v___x_4315_ = 2ULL;
v___y_4311_ = v___x_4315_;
goto v___jp_4310_;
}
v___jp_4310_:
{
uint64_t v___x_4312_; uint64_t v___x_4313_; 
v___x_4312_ = lean_uint64_lor(v___x_4309_, v___y_4311_);
v___x_4313_ = lean_uint64_lor(v___x_4312_, v_extra_4308_);
return v___x_4313_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1___boxed(lean_object* v_await_4316_, lean_object* v_extra_4317_){
_start:
{
uint8_t v_await_boxed_4318_; uint64_t v_extra_boxed_4319_; uint64_t v_res_4320_; lean_object* v_r_4321_; 
v_await_boxed_4318_ = lean_unbox(v_await_4316_);
v_extra_boxed_4319_ = lean_unbox_uint64(v_extra_4317_);
lean_dec_ref(v_extra_4317_);
v_res_4320_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1(v_await_boxed_4318_, v_extra_boxed_4319_);
v_r_4321_ = lean_box_uint64(v_res_4320_);
return v_r_4321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_4324_, lean_object* v_key_4325_){
_start:
{
if (lean_obj_tag(v_d_4324_) == 8)
{
lean_object* v___x_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4357_; 
v___x_4326_ = l_Lasm_JS_Data_field(v_d_4324_, v_key_4325_);
v_isSharedCheck_4357_ = !lean_is_exclusive(v_d_4324_);
if (v_isSharedCheck_4357_ == 0)
{
lean_object* v_unused_4358_; 
v_unused_4358_ = lean_ctor_get(v_d_4324_, 0);
lean_dec(v_unused_4358_);
v___x_4328_ = v_d_4324_;
v_isShared_4329_ = v_isSharedCheck_4357_;
goto v_resetjp_4327_;
}
else
{
lean_dec(v_d_4324_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4357_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
if (lean_obj_tag(v___x_4326_) == 4)
{
lean_object* v_s_4330_; lean_object* v___x_4332_; uint8_t v_isShared_4333_; uint8_t v_isSharedCheck_4337_; 
lean_del_object(v___x_4328_);
v_s_4330_ = lean_ctor_get(v___x_4326_, 0);
v_isSharedCheck_4337_ = !lean_is_exclusive(v___x_4326_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4332_ = v___x_4326_;
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
else
{
lean_inc(v_s_4330_);
lean_dec(v___x_4326_);
v___x_4332_ = lean_box(0);
v_isShared_4333_ = v_isSharedCheck_4337_;
goto v_resetjp_4331_;
}
v_resetjp_4331_:
{
lean_object* v___x_4335_; 
if (v_isShared_4333_ == 0)
{
lean_ctor_set_tag(v___x_4332_, 1);
v___x_4335_ = v___x_4332_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4336_; 
v_reuseFailAlloc_4336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4336_, 0, v_s_4330_);
v___x_4335_ = v_reuseFailAlloc_4336_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
return v___x_4335_;
}
}
}
else
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; uint8_t v___x_4348_; 
v___x_4338_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_4339_ = lean_string_append(v___x_4338_, v_key_4325_);
v___x_4340_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_4341_ = lean_string_append(v___x_4339_, v___x_4340_);
v___x_4342_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__1));
v___x_4343_ = lean_string_append(v___x_4341_, v___x_4342_);
v___x_4344_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_4345_ = lean_string_append(v___x_4343_, v___x_4344_);
v___x_4346_ = l_Lasm_JS_Data_describe(v___x_4326_);
v___x_4347_ = lean_string_append(v___x_4345_, v___x_4346_);
lean_dec_ref(v___x_4346_);
v___x_4348_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_4348_ == 0)
{
lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4352_; 
v___x_4349_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___x_4350_ = lean_string_append(v___x_4347_, v___x_4349_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set_tag(v___x_4328_, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4350_);
v___x_4352_ = v___x_4328_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v___x_4350_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
return v___x_4352_;
}
}
else
{
lean_object* v___x_4355_; 
if (v_isShared_4329_ == 0)
{
lean_ctor_set_tag(v___x_4328_, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4347_);
v___x_4355_ = v___x_4328_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v___x_4347_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
return v___x_4355_;
}
}
}
}
}
else
{
lean_object* v___x_4359_; 
lean_dec(v_d_4324_);
v___x_4359_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5___closed__0));
return v___x_4359_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_4360_, lean_object* v_key_4361_){
_start:
{
lean_object* v_res_4362_; 
v_res_4362_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5(v_d_4360_, v_key_4361_);
lean_dec_ref(v_key_4361_);
return v_res_4362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_4366_, lean_object* v_key_4367_){
_start:
{
if (lean_obj_tag(v_d_4366_) == 8)
{
lean_object* v___x_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4396_; 
v___x_4368_ = l_Lasm_JS_Data_field(v_d_4366_, v_key_4367_);
v_isSharedCheck_4396_ = !lean_is_exclusive(v_d_4366_);
if (v_isSharedCheck_4396_ == 0)
{
lean_object* v_unused_4397_; 
v_unused_4397_ = lean_ctor_get(v_d_4366_, 0);
lean_dec(v_unused_4397_);
v___x_4370_ = v_d_4366_;
v_isShared_4371_ = v_isSharedCheck_4396_;
goto v_resetjp_4369_;
}
else
{
lean_dec(v_d_4366_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4396_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
if (lean_obj_tag(v___x_4368_) == 3)
{
double v_n_4372_; lean_object* v___x_4373_; lean_object* v___x_4375_; 
v_n_4372_ = lean_ctor_get_float(v___x_4368_, 0);
lean_dec_ref_known(v___x_4368_, 0);
v___x_4373_ = lean_box_float(v_n_4372_);
if (v_isShared_4371_ == 0)
{
lean_ctor_set_tag(v___x_4370_, 1);
lean_ctor_set(v___x_4370_, 0, v___x_4373_);
v___x_4375_ = v___x_4370_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v___x_4373_);
v___x_4375_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
return v___x_4375_;
}
}
else
{
lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; uint8_t v___x_4387_; 
v___x_4377_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_4378_ = lean_string_append(v___x_4377_, v_key_4367_);
v___x_4379_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_4380_ = lean_string_append(v___x_4378_, v___x_4379_);
v___x_4381_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_4382_ = lean_string_append(v___x_4380_, v___x_4381_);
v___x_4383_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_4384_ = lean_string_append(v___x_4382_, v___x_4383_);
v___x_4385_ = l_Lasm_JS_Data_describe(v___x_4368_);
v___x_4386_ = lean_string_append(v___x_4384_, v___x_4385_);
lean_dec_ref(v___x_4385_);
v___x_4387_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_4387_ == 0)
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4391_; 
v___x_4388_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___x_4389_ = lean_string_append(v___x_4386_, v___x_4388_);
if (v_isShared_4371_ == 0)
{
lean_ctor_set_tag(v___x_4370_, 0);
lean_ctor_set(v___x_4370_, 0, v___x_4389_);
v___x_4391_ = v___x_4370_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v___x_4389_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
else
{
lean_object* v___x_4394_; 
if (v_isShared_4371_ == 0)
{
lean_ctor_set_tag(v___x_4370_, 0);
lean_ctor_set(v___x_4370_, 0, v___x_4386_);
v___x_4394_ = v___x_4370_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v___x_4386_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
}
}
}
}
}
else
{
lean_object* v___x_4398_; 
lean_dec(v_d_4366_);
v___x_4398_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__1));
return v___x_4398_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_4399_, lean_object* v_key_4400_){
_start:
{
lean_object* v_res_4401_; 
v_res_4401_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4(v_d_4399_, v_key_4400_);
lean_dec_ref(v_key_4400_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3(lean_object* v_context_4402_, lean_object* v_d_4403_){
_start:
{
lean_object* v___y_4406_; lean_object* v___y_4407_; lean_object* v___y_4412_; lean_object* v_received_4413_; lean_object* v___y_4432_; lean_object* v_a_4435_; lean_object* v___x_4459_; lean_object* v___x_4460_; 
v___x_4459_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0));
lean_inc(v_d_4403_);
v___x_4460_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4(v_d_4403_, v___x_4459_);
if (lean_obj_tag(v___x_4460_) == 0)
{
lean_object* v_a_4461_; 
v_a_4461_ = lean_ctor_get(v___x_4460_, 0);
lean_inc(v_a_4461_);
lean_dec_ref_known(v___x_4460_, 1);
v_a_4435_ = v_a_4461_;
goto v___jp_4434_;
}
else
{
lean_object* v_a_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v_a_4462_ = lean_ctor_get(v___x_4460_, 0);
lean_inc(v_a_4462_);
lean_dec_ref_known(v___x_4460_, 1);
v___x_4463_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
lean_inc(v_d_4403_);
v___x_4464_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5(v_d_4403_, v___x_4463_);
if (lean_obj_tag(v___x_4464_) == 0)
{
lean_object* v_a_4465_; 
lean_dec(v_a_4462_);
v_a_4465_ = lean_ctor_get(v___x_4464_, 0);
lean_inc(v_a_4465_);
lean_dec_ref_known(v___x_4464_, 1);
v_a_4435_ = v_a_4465_;
goto v___jp_4434_;
}
else
{
lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4475_; 
lean_dec(v_d_4403_);
v_a_4466_ = lean_ctor_get(v___x_4464_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4464_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4468_ = v___x_4464_;
v_isShared_4469_ = v_isSharedCheck_4475_;
goto v_resetjp_4467_;
}
else
{
lean_inc(v_a_4466_);
lean_dec(v___x_4464_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4475_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4470_; double v___x_4471_; lean_object* v___x_4473_; 
v___x_4470_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4470_, 0, v_a_4466_);
v___x_4471_ = lean_unbox_float(v_a_4462_);
lean_dec(v_a_4462_);
lean_ctor_set_float(v___x_4470_, sizeof(void*)*1, v___x_4471_);
if (v_isShared_4469_ == 0)
{
lean_ctor_set_tag(v___x_4468_, 0);
lean_ctor_set(v___x_4468_, 0, v___x_4470_);
v___x_4473_ = v___x_4468_;
goto v_reusejp_4472_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v___x_4470_);
v___x_4473_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4472_;
}
v_reusejp_4472_:
{
return v___x_4473_;
}
}
}
}
v___jp_4405_:
{
lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; 
v___x_4408_ = lean_string_append(v___y_4406_, v___y_4407_);
lean_dec_ref(v___y_4407_);
v___x_4409_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4409_, 0, v___x_4408_);
v___x_4410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4410_, 0, v___x_4409_);
return v___x_4410_;
}
v___jp_4411_:
{
lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; uint8_t v___x_4425_; 
v___x_4414_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_4415_ = lean_string_append(v___x_4414_, v_context_4402_);
v___x_4416_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_4417_ = lean_string_append(v___x_4415_, v___x_4416_);
v___x_4418_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__1));
v___x_4419_ = lean_string_append(v___x_4417_, v___x_4418_);
v___x_4420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_4421_ = lean_string_append(v___x_4419_, v___x_4420_);
v___x_4422_ = lean_string_append(v___x_4421_, v_received_4413_);
lean_dec_ref(v_received_4413_);
v___x_4423_ = lean_string_utf8_byte_size(v___y_4412_);
v___x_4424_ = lean_unsigned_to_nat(0u);
v___x_4425_ = lean_nat_dec_eq(v___x_4423_, v___x_4424_);
if (v___x_4425_ == 0)
{
lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; 
v___x_4426_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_4427_ = lean_string_append(v___x_4426_, v___y_4412_);
lean_dec_ref(v___y_4412_);
v___x_4428_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_4429_ = lean_string_append(v___x_4427_, v___x_4428_);
v___y_4406_ = v___x_4422_;
v___y_4407_ = v___x_4429_;
goto v___jp_4405_;
}
else
{
lean_object* v___x_4430_; 
lean_dec_ref(v___y_4412_);
v___x_4430_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_4406_ = v___x_4422_;
v___y_4407_ = v___x_4430_;
goto v___jp_4405_;
}
}
v___jp_4431_:
{
lean_object* v___x_4433_; 
v___x_4433_ = l_Lasm_JS_Data_describe(v_d_4403_);
v___y_4412_ = v___y_4432_;
v_received_4413_ = v___x_4433_;
goto v___jp_4411_;
}
v___jp_4434_:
{
if (lean_obj_tag(v_d_4403_) == 9)
{
lean_object* v_value_4436_; lean_object* v_description_4437_; lean_object* v___x_4438_; uint8_t v___x_4439_; 
v_value_4436_ = lean_ctor_get(v_d_4403_, 0);
v_description_4437_ = lean_ctor_get(v_d_4403_, 1);
v___x_4438_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4439_ = lean_string_dec_eq(v_description_4437_, v___x_4438_);
if (v___x_4439_ == 0)
{
v___y_4432_ = v_a_4435_;
goto v___jp_4431_;
}
else
{
lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4456_; 
lean_inc(v_value_4436_);
v_isSharedCheck_4456_ = !lean_is_exclusive(v_d_4403_);
if (v_isSharedCheck_4456_ == 0)
{
lean_object* v_unused_4457_; lean_object* v_unused_4458_; 
v_unused_4457_ = lean_ctor_get(v_d_4403_, 1);
lean_dec(v_unused_4457_);
v_unused_4458_ = lean_ctor_get(v_d_4403_, 0);
lean_dec(v_unused_4458_);
v___x_4441_ = v_d_4403_;
v_isShared_4442_ = v_isSharedCheck_4456_;
goto v_resetjp_4440_;
}
else
{
lean_dec(v_d_4403_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4456_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
uint32_t v___x_4443_; uint64_t v___x_4444_; lean_object* v___x_4446_; 
v___x_4443_ = 206;
v___x_4444_ = 0ULL;
lean_inc(v_value_4436_);
if (v_isShared_4442_ == 0)
{
lean_ctor_set(v___x_4441_, 1, v___x_4438_);
v___x_4446_ = v___x_4441_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_value_4436_);
lean_ctor_set(v_reuseFailAlloc_4455_, 1, v___x_4438_);
v___x_4446_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
uint32_t v___x_4447_; lean_object* v___x_4448_; 
v___x_4447_ = lasm_js_value_handle(v_value_4436_);
lean_dec(v_value_4436_);
v___x_4448_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4443_, v___x_4444_, v___x_4446_, v___x_4447_);
lean_dec_ref(v___x_4446_);
if (lean_obj_tag(v___x_4448_) == 0)
{
lean_object* v_a_4449_; uint8_t v___x_4450_; 
v_a_4449_ = lean_ctor_get(v___x_4448_, 0);
lean_inc(v_a_4449_);
lean_dec_ref_known(v___x_4448_, 1);
v___x_4450_ = lean_string_validate_utf8(v_a_4449_);
if (v___x_4450_ == 0)
{
lean_object* v___x_4451_; lean_object* v___x_4452_; 
lean_dec(v_a_4449_);
v___x_4451_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_4452_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4451_);
v___y_4412_ = v_a_4435_;
v_received_4413_ = v___x_4452_;
goto v___jp_4411_;
}
else
{
lean_object* v___x_4453_; 
v___x_4453_ = lean_string_from_utf8_unchecked(v_a_4449_);
v___y_4412_ = v_a_4435_;
v_received_4413_ = v___x_4453_;
goto v___jp_4411_;
}
}
else
{
lean_object* v___x_4454_; 
lean_dec_ref_known(v___x_4448_, 1);
v___x_4454_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_4412_ = v_a_4435_;
v_received_4413_ = v___x_4454_;
goto v___jp_4411_;
}
}
}
}
}
else
{
v___y_4432_ = v_a_4435_;
goto v___jp_4431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3___boxed(lean_object* v_context_4476_, lean_object* v_d_4477_, lean_object* v_a_4478_){
_start:
{
lean_object* v_res_4479_; 
v_res_4479_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3(v_context_4476_, v_d_4477_);
lean_dec_ref(v_context_4476_);
return v_res_4479_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0(lean_object* v_context_4480_, lean_object* v_x_4481_){
_start:
{
lean_object* v_val_4484_; 
if (lean_obj_tag(v_x_4481_) == 0)
{
lean_object* v_a_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4494_; 
v_a_4486_ = lean_ctor_get(v_x_4481_, 0);
v_isSharedCheck_4494_ = !lean_is_exclusive(v_x_4481_);
if (v_isSharedCheck_4494_ == 0)
{
v___x_4488_ = v_x_4481_;
v_isShared_4489_ = v_isSharedCheck_4494_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_a_4486_);
lean_dec(v_x_4481_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4494_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v___x_4491_; 
if (v_isShared_4489_ == 0)
{
v___x_4491_ = v___x_4488_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v_a_4486_);
v___x_4491_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
lean_object* v___x_4492_; 
v___x_4492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4492_, 0, v___x_4491_);
return v___x_4492_;
}
}
}
else
{
lean_object* v_a_4495_; lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4508_; 
v_a_4495_ = lean_ctor_get(v_x_4481_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v_x_4481_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4497_ = v_x_4481_;
v_isShared_4498_ = v_isSharedCheck_4508_;
goto v_resetjp_4496_;
}
else
{
lean_inc(v_a_4495_);
lean_dec(v_x_4481_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4508_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
lean_object* v___x_4499_; 
v___x_4499_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3(v_context_4480_, v_a_4495_);
if (lean_obj_tag(v___x_4499_) == 0)
{
lean_object* v_a_4500_; lean_object* v___x_4502_; 
v_a_4500_ = lean_ctor_get(v___x_4499_, 0);
lean_inc(v_a_4500_);
lean_dec_ref_known(v___x_4499_, 1);
if (v_isShared_4498_ == 0)
{
lean_ctor_set(v___x_4497_, 0, v_a_4500_);
v___x_4502_ = v___x_4497_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4503_; 
v_reuseFailAlloc_4503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4503_, 0, v_a_4500_);
v___x_4502_ = v_reuseFailAlloc_4503_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
v_val_4484_ = v___x_4502_;
goto v___jp_4483_;
}
}
else
{
lean_object* v_a_4504_; lean_object* v___x_4506_; 
v_a_4504_ = lean_ctor_get(v___x_4499_, 0);
lean_inc(v_a_4504_);
lean_dec_ref_known(v___x_4499_, 1);
if (v_isShared_4498_ == 0)
{
lean_ctor_set_tag(v___x_4497_, 0);
lean_ctor_set(v___x_4497_, 0, v_a_4504_);
v___x_4506_ = v___x_4497_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4504_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
v_val_4484_ = v___x_4506_;
goto v___jp_4483_;
}
}
}
}
v___jp_4483_:
{
lean_object* v___x_4485_; 
v___x_4485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4485_, 0, v_val_4484_);
return v___x_4485_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0___boxed(lean_object* v_context_4509_, lean_object* v_x_4510_, lean_object* v___y_4511_){
_start:
{
lean_object* v_res_4512_; 
v_res_4512_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0(v_context_4509_, v_x_4510_);
lean_dec_ref(v_context_4509_);
return v_res_4512_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4513_, uint32_t v_op_4514_, uint64_t v_flags_4515_, lean_object* v_payload_4516_, lean_object* v___f_4517_, lean_object* v___f_4518_, lean_object* v___f_4519_, lean_object* v_x_4520_){
_start:
{
if (lean_obj_tag(v_x_4520_) == 0)
{
lean_object* v_a_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4530_; 
lean_dec_ref(v___f_4519_);
lean_dec_ref(v___f_4518_);
lean_dec_ref(v___f_4517_);
lean_dec(v_payload_4516_);
v_a_4522_ = lean_ctor_get(v_x_4520_, 0);
v_isSharedCheck_4530_ = !lean_is_exclusive(v_x_4520_);
if (v_isSharedCheck_4530_ == 0)
{
v___x_4524_ = v_x_4520_;
v_isShared_4525_ = v_isSharedCheck_4530_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_a_4522_);
lean_dec(v_x_4520_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4530_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4527_; 
if (v_isShared_4525_ == 0)
{
v___x_4527_ = v___x_4524_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4529_; 
v_reuseFailAlloc_4529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4529_, 0, v_a_4522_);
v___x_4527_ = v_reuseFailAlloc_4529_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
lean_object* v___x_4528_; 
v___x_4528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4528_, 0, v___x_4527_);
return v___x_4528_;
}
}
}
else
{
lean_object* v_a_4531_; lean_object* v___x_4533_; uint8_t v_isShared_4534_; uint8_t v_isSharedCheck_4577_; 
v_a_4531_ = lean_ctor_get(v_x_4520_, 0);
v_isSharedCheck_4577_ = !lean_is_exclusive(v_x_4520_);
if (v_isSharedCheck_4577_ == 0)
{
v___x_4533_ = v_x_4520_;
v_isShared_4534_ = v_isSharedCheck_4577_;
goto v_resetjp_4532_;
}
else
{
lean_inc(v_a_4531_);
lean_dec(v_x_4520_);
v___x_4533_ = lean_box(0);
v_isShared_4534_ = v_isSharedCheck_4577_;
goto v_resetjp_4532_;
}
v_resetjp_4532_:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; uint8_t v___x_4537_; 
v___x_4535_ = lean_string_utf8_byte_size(v_failurePrefix_4513_);
v___x_4536_ = lean_unsigned_to_nat(0u);
v___x_4537_ = lean_nat_dec_eq(v___x_4535_, v___x_4536_);
if (v___x_4537_ == 0)
{
lean_object* v___f_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___f_4542_; lean_object* v_val_4544_; lean_object* v___x_4549_; 
lean_dec_ref(v___f_4519_);
lean_inc(v_a_4531_);
v___f_4538_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4538_, 0, v_a_4531_);
v___x_4539_ = lean_box(v___x_4537_);
v___x_4540_ = lean_box_uint32(v_op_4514_);
v___x_4541_ = lean_box_uint64(v_flags_4515_);
lean_inc(v_payload_4516_);
v___f_4542_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4542_, 0, v___x_4536_);
lean_closure_set(v___f_4542_, 1, v___x_4539_);
lean_closure_set(v___f_4542_, 2, v___f_4538_);
lean_closure_set(v___f_4542_, 3, v_a_4531_);
lean_closure_set(v___f_4542_, 4, v___x_4540_);
lean_closure_set(v___f_4542_, 5, v___x_4541_);
lean_closure_set(v___f_4542_, 6, v_payload_4516_);
v___x_4549_ = l_Lasm_JS_Wire_encodeIO(v_payload_4516_);
lean_dec(v_payload_4516_);
if (lean_obj_tag(v___x_4549_) == 0)
{
lean_object* v_a_4550_; lean_object* v___x_4552_; 
v_a_4550_ = lean_ctor_get(v___x_4549_, 0);
lean_inc(v_a_4550_);
lean_dec_ref_known(v___x_4549_, 1);
if (v_isShared_4534_ == 0)
{
lean_ctor_set(v___x_4533_, 0, v_a_4550_);
v___x_4552_ = v___x_4533_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_a_4550_);
v___x_4552_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
v_val_4544_ = v___x_4552_;
goto v___jp_4543_;
}
}
else
{
lean_object* v_a_4554_; lean_object* v___x_4556_; 
v_a_4554_ = lean_ctor_get(v___x_4549_, 0);
lean_inc(v_a_4554_);
lean_dec_ref_known(v___x_4549_, 1);
if (v_isShared_4534_ == 0)
{
lean_ctor_set_tag(v___x_4533_, 0);
lean_ctor_set(v___x_4533_, 0, v_a_4554_);
v___x_4556_ = v___x_4533_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v_a_4554_);
v___x_4556_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
v_val_4544_ = v___x_4556_;
goto v___jp_4543_;
}
}
v___jp_4543_:
{
lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4545_, 0, v_val_4544_);
v___x_4546_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4536_, v___x_4537_, v___x_4545_, v___f_4542_);
v___x_4547_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4536_, v___x_4537_, v___x_4546_, v___f_4517_);
v___x_4548_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4536_, v___x_4537_, v___x_4547_, v___f_4518_);
return v___x_4548_;
}
}
else
{
lean_object* v___f_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___f_4561_; uint8_t v___x_4562_; lean_object* v_val_4564_; lean_object* v___x_4568_; 
lean_dec_ref(v___f_4518_);
lean_dec_ref(v___f_4517_);
lean_inc(v_a_4531_);
v___f_4558_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4558_, 0, v_a_4531_);
v___x_4559_ = lean_box_uint32(v_op_4514_);
v___x_4560_ = lean_box_uint64(v_flags_4515_);
lean_inc(v_payload_4516_);
v___f_4561_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4561_, 0, v___f_4558_);
lean_closure_set(v___f_4561_, 1, v_a_4531_);
lean_closure_set(v___f_4561_, 2, v___x_4559_);
lean_closure_set(v___f_4561_, 3, v___x_4560_);
lean_closure_set(v___f_4561_, 4, v_payload_4516_);
v___x_4562_ = 0;
v___x_4568_ = l_Lasm_JS_Wire_encodeIO(v_payload_4516_);
lean_dec(v_payload_4516_);
if (lean_obj_tag(v___x_4568_) == 0)
{
lean_object* v_a_4569_; lean_object* v___x_4571_; 
v_a_4569_ = lean_ctor_get(v___x_4568_, 0);
lean_inc(v_a_4569_);
lean_dec_ref_known(v___x_4568_, 1);
if (v_isShared_4534_ == 0)
{
lean_ctor_set(v___x_4533_, 0, v_a_4569_);
v___x_4571_ = v___x_4533_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v_a_4569_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
v_val_4564_ = v___x_4571_;
goto v___jp_4563_;
}
}
else
{
lean_object* v_a_4573_; lean_object* v___x_4575_; 
v_a_4573_ = lean_ctor_get(v___x_4568_, 0);
lean_inc(v_a_4573_);
lean_dec_ref_known(v___x_4568_, 1);
if (v_isShared_4534_ == 0)
{
lean_ctor_set_tag(v___x_4533_, 0);
lean_ctor_set(v___x_4533_, 0, v_a_4573_);
v___x_4575_ = v___x_4533_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_a_4573_);
v___x_4575_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
v_val_4564_ = v___x_4575_;
goto v___jp_4563_;
}
}
v___jp_4563_:
{
lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___x_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4565_, 0, v_val_4564_);
v___x_4566_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4536_, v___x_4562_, v___x_4565_, v___f_4561_);
v___x_4567_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4536_, v___x_4562_, v___x_4566_, v___f_4519_);
return v___x_4567_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4578_, lean_object* v_op_4579_, lean_object* v_flags_4580_, lean_object* v_payload_4581_, lean_object* v___f_4582_, lean_object* v___f_4583_, lean_object* v___f_4584_, lean_object* v_x_4585_, lean_object* v___y_4586_){
_start:
{
uint32_t v_op_boxed_4587_; uint64_t v_flags_boxed_4588_; lean_object* v_res_4589_; 
v_op_boxed_4587_ = lean_unbox_uint32(v_op_4579_);
lean_dec(v_op_4579_);
v_flags_boxed_4588_ = lean_unbox_uint64(v_flags_4580_);
lean_dec_ref(v_flags_4580_);
v_res_4589_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9(v_failurePrefix_4578_, v_op_boxed_4587_, v_flags_boxed_4588_, v_payload_4581_, v___f_4582_, v___f_4583_, v___f_4584_, v_x_4585_);
lean_dec_ref(v_failurePrefix_4578_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2(lean_object* v___f_4590_, lean_object* v_x_4591_){
_start:
{
if (lean_obj_tag(v_x_4591_) == 0)
{
lean_object* v_a_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4601_; 
lean_dec_ref(v___f_4590_);
v_a_4593_ = lean_ctor_get(v_x_4591_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v_x_4591_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4595_ = v_x_4591_;
v_isShared_4596_ = v_isSharedCheck_4601_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_a_4593_);
lean_dec(v_x_4591_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4601_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4598_; 
if (v_isShared_4596_ == 0)
{
v___x_4598_ = v___x_4595_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_a_4593_);
v___x_4598_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
lean_object* v___x_4599_; 
v___x_4599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4598_);
return v___x_4599_;
}
}
}
else
{
lean_object* v_a_4602_; lean_object* v___x_4603_; 
v_a_4602_ = lean_ctor_get(v_x_4591_, 0);
lean_inc(v_a_4602_);
lean_dec_ref_known(v_x_4591_, 1);
v___x_4603_ = lean_apply_2(v___f_4590_, v_a_4602_, lean_box(0));
return v___x_4603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2___boxed(lean_object* v___f_4604_, lean_object* v_x_4605_, lean_object* v___y_4606_){
_start:
{
lean_object* v_res_4607_; 
v_res_4607_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2(v___f_4604_, v_x_4605_);
return v_res_4607_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1(lean_object* v___f_4608_, lean_object* v_bytes_4609_){
_start:
{
lean_object* v___x_4611_; uint8_t v___x_4612_; lean_object* v_val_4614_; lean_object* v___x_4617_; 
v___x_4611_ = lean_unsigned_to_nat(0u);
v___x_4612_ = 0;
v___x_4617_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4609_);
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_object* v_a_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4625_; 
v_a_4618_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4620_ = v___x_4617_;
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_a_4618_);
lean_dec(v___x_4617_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v___x_4623_; 
if (v_isShared_4621_ == 0)
{
lean_ctor_set_tag(v___x_4620_, 1);
v___x_4623_ = v___x_4620_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4618_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
v_val_4614_ = v___x_4623_;
goto v___jp_4613_;
}
}
}
else
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
v_a_4626_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4628_ = v___x_4617_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4617_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
lean_ctor_set_tag(v___x_4628_, 0);
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v_a_4626_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
v_val_4614_ = v___x_4631_;
goto v___jp_4613_;
}
}
}
v___jp_4613_:
{
lean_object* v___x_4615_; lean_object* v___x_4616_; 
v___x_4615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4615_, 0, v_val_4614_);
v___x_4616_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4611_, v___x_4612_, v___x_4615_, v___f_4608_);
return v___x_4616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4634_, lean_object* v_bytes_4635_, lean_object* v___y_4636_){
_start:
{
lean_object* v_res_4637_; 
v_res_4637_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1(v___f_4634_, v_bytes_4635_);
lean_dec_ref(v_bytes_4635_);
return v_res_4637_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3(lean_object* v___f_4638_, lean_object* v_x_4639_){
_start:
{
if (lean_obj_tag(v_x_4639_) == 0)
{
lean_object* v_a_4641_; lean_object* v___x_4643_; uint8_t v_isShared_4644_; uint8_t v_isSharedCheck_4649_; 
lean_dec_ref(v___f_4638_);
v_a_4641_ = lean_ctor_get(v_x_4639_, 0);
v_isSharedCheck_4649_ = !lean_is_exclusive(v_x_4639_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4643_ = v_x_4639_;
v_isShared_4644_ = v_isSharedCheck_4649_;
goto v_resetjp_4642_;
}
else
{
lean_inc(v_a_4641_);
lean_dec(v_x_4639_);
v___x_4643_ = lean_box(0);
v_isShared_4644_ = v_isSharedCheck_4649_;
goto v_resetjp_4642_;
}
v_resetjp_4642_:
{
lean_object* v___x_4646_; 
if (v_isShared_4644_ == 0)
{
v___x_4646_ = v___x_4643_;
goto v_reusejp_4645_;
}
else
{
lean_object* v_reuseFailAlloc_4648_; 
v_reuseFailAlloc_4648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4648_, 0, v_a_4641_);
v___x_4646_ = v_reuseFailAlloc_4648_;
goto v_reusejp_4645_;
}
v_reusejp_4645_:
{
lean_object* v___x_4647_; 
v___x_4647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4647_, 0, v___x_4646_);
return v___x_4647_;
}
}
}
else
{
lean_object* v___x_4651_; uint8_t v_isShared_4652_; uint8_t v_isSharedCheck_4661_; 
v_isSharedCheck_4661_ = !lean_is_exclusive(v_x_4639_);
if (v_isSharedCheck_4661_ == 0)
{
lean_object* v_unused_4662_; 
v_unused_4662_ = lean_ctor_get(v_x_4639_, 0);
lean_dec(v_unused_4662_);
v___x_4651_ = v_x_4639_;
v_isShared_4652_ = v_isSharedCheck_4661_;
goto v_resetjp_4650_;
}
else
{
lean_dec(v_x_4639_);
v___x_4651_ = lean_box(0);
v_isShared_4652_ = v_isSharedCheck_4661_;
goto v_resetjp_4650_;
}
v_resetjp_4650_:
{
lean_object* v___x_4653_; uint8_t v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4657_; 
v___x_4653_ = lean_unsigned_to_nat(0u);
v___x_4654_ = 0;
v___x_4655_ = lean_io_promise_new();
if (v_isShared_4652_ == 0)
{
lean_ctor_set(v___x_4651_, 0, v___x_4655_);
v___x_4657_ = v___x_4651_;
goto v_reusejp_4656_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v___x_4655_);
v___x_4657_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4656_;
}
v_reusejp_4656_:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4658_, 0, v___x_4657_);
v___x_4659_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4653_, v___x_4654_, v___x_4658_, v___f_4638_);
return v___x_4659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3___boxed(lean_object* v___f_4663_, lean_object* v_x_4664_, lean_object* v___y_4665_){
_start:
{
lean_object* v_res_4666_; 
v_res_4666_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3(v___f_4663_, v_x_4664_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2(lean_object* v_context_4667_, uint32_t v_op_4668_, uint64_t v_flags_4669_, lean_object* v_payload_4670_, lean_object* v_failurePrefix_4671_){
_start:
{
lean_object* v___f_4673_; lean_object* v___f_4674_; lean_object* v___f_4675_; lean_object* v___f_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___f_4679_; lean_object* v___f_4680_; lean_object* v___x_4681_; uint8_t v___x_4682_; lean_object* v_val_4684_; lean_object* v___x_4687_; 
v___f_4673_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4673_, 0, v_context_4667_);
v___f_4674_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4674_, 0, v___f_4673_);
v___f_4675_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4675_, 0, v___f_4674_);
lean_inc_ref(v_failurePrefix_4671_);
v___f_4676_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4676_, 0, v_failurePrefix_4671_);
v___x_4677_ = lean_box_uint32(v_op_4668_);
v___x_4678_ = lean_box_uint64(v_flags_4669_);
lean_inc_ref(v___f_4675_);
v___f_4679_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4679_, 0, v_failurePrefix_4671_);
lean_closure_set(v___f_4679_, 1, v___x_4677_);
lean_closure_set(v___f_4679_, 2, v___x_4678_);
lean_closure_set(v___f_4679_, 3, v_payload_4670_);
lean_closure_set(v___f_4679_, 4, v___f_4676_);
lean_closure_set(v___f_4679_, 5, v___f_4675_);
lean_closure_set(v___f_4679_, 6, v___f_4675_);
v___f_4680_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4680_, 0, v___f_4679_);
v___x_4681_ = lean_unsigned_to_nat(0u);
v___x_4682_ = 0;
v___x_4687_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4687_) == 0)
{
lean_object* v_a_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4695_; 
v_a_4688_ = lean_ctor_get(v___x_4687_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4687_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4690_ = v___x_4687_;
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_a_4688_);
lean_dec(v___x_4687_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v___x_4693_; 
if (v_isShared_4691_ == 0)
{
lean_ctor_set_tag(v___x_4690_, 1);
v___x_4693_ = v___x_4690_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v_a_4688_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
v_val_4684_ = v___x_4693_;
goto v___jp_4683_;
}
}
}
else
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
v_a_4696_ = lean_ctor_get(v___x_4687_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4687_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4687_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4687_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
lean_ctor_set_tag(v___x_4698_, 0);
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
v_val_4684_ = v___x_4701_;
goto v___jp_4683_;
}
}
}
v___jp_4683_:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4685_, 0, v_val_4684_);
v___x_4686_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4681_, v___x_4682_, v___x_4685_, v___f_4680_);
return v___x_4686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___boxed(lean_object* v_context_4704_, lean_object* v_op_4705_, lean_object* v_flags_4706_, lean_object* v_payload_4707_, lean_object* v_failurePrefix_4708_, lean_object* v_a_4709_){
_start:
{
uint32_t v_op_boxed_4710_; uint64_t v_flags_boxed_4711_; lean_object* v_res_4712_; 
v_op_boxed_4710_ = lean_unbox_uint32(v_op_4705_);
lean_dec(v_op_4705_);
v_flags_boxed_4711_ = lean_unbox_uint64(v_flags_4706_);
lean_dec_ref(v_flags_4706_);
v_res_4712_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2(v_context_4704_, v_op_boxed_4710_, v_flags_boxed_4711_, v_payload_4707_, v_failurePrefix_4708_);
return v_res_4712_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0(void){
_start:
{
uint64_t v___x_4713_; uint8_t v___x_4714_; uint64_t v___x_4715_; 
v___x_4713_ = 8ULL;
v___x_4714_ = 0;
v___x_4715_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1(v___x_4714_, v___x_4713_);
return v___x_4715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1(lean_object* v_o_4716_, lean_object* v_name_4717_, lean_object* v_args_4718_){
_start:
{
lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; uint32_t v___x_4725_; uint64_t v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; 
v___x_4720_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4721_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4721_, 0, v_o_4716_);
lean_ctor_set(v___x_4721_, 1, v___x_4720_);
lean_inc_ref(v_name_4717_);
v___x_4722_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4722_, 0, v_name_4717_);
v___x_4723_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_4724_ = lean_string_append(v___x_4723_, v_name_4717_);
lean_dec_ref(v_name_4717_);
v___x_4725_ = 205;
v___x_4726_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0);
v___x_4727_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4727_, 0, v_args_4718_);
v___x_4728_ = lean_unsigned_to_nat(3u);
v___x_4729_ = lean_mk_empty_array_with_capacity(v___x_4728_);
v___x_4730_ = lean_array_push(v___x_4729_, v___x_4721_);
v___x_4731_ = lean_array_push(v___x_4730_, v___x_4722_);
v___x_4732_ = lean_array_push(v___x_4731_, v___x_4727_);
v___x_4733_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4733_, 0, v___x_4732_);
v___x_4734_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2(v___x_4724_, v___x_4725_, v___x_4726_, v___x_4733_, v___x_4720_);
return v___x_4734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___boxed(lean_object* v_o_4735_, lean_object* v_name_4736_, lean_object* v_args_4737_, lean_object* v___y_4738_){
_start:
{
lean_object* v_res_4739_; 
v_res_4739_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1(v_o_4735_, v_name_4736_, v_args_4737_);
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart(lean_object* v_self_4741_, double v_partNumber_4742_, lean_object* v_value_4743_, lean_object* v_options_4744_){
_start:
{
lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___y_4749_; 
v___x_4746_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart___closed__0));
v___x_4747_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4747_, 0, v_partNumber_4742_);
switch(lean_obj_tag(v_value_4743_))
{
case 1:
{
lean_object* v_value_4758_; lean_object* v___x_4760_; uint8_t v_isShared_4761_; uint8_t v_isSharedCheck_4765_; 
v_value_4758_ = lean_ctor_get(v_value_4743_, 0);
v_isSharedCheck_4765_ = !lean_is_exclusive(v_value_4743_);
if (v_isSharedCheck_4765_ == 0)
{
v___x_4760_ = v_value_4743_;
v_isShared_4761_ = v_isSharedCheck_4765_;
goto v_resetjp_4759_;
}
else
{
lean_inc(v_value_4758_);
lean_dec(v_value_4743_);
v___x_4760_ = lean_box(0);
v_isShared_4761_ = v_isSharedCheck_4765_;
goto v_resetjp_4759_;
}
v_resetjp_4759_:
{
lean_object* v___x_4763_; 
if (v_isShared_4761_ == 0)
{
lean_ctor_set_tag(v___x_4760_, 4);
v___x_4763_ = v___x_4760_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4764_; 
v_reuseFailAlloc_4764_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4764_, 0, v_value_4758_);
v___x_4763_ = v_reuseFailAlloc_4764_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
v___y_4749_ = v___x_4763_;
goto v___jp_4748_;
}
}
}
case 3:
{
lean_object* v_value_4766_; lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_4773_; 
v_value_4766_ = lean_ctor_get(v_value_4743_, 0);
v_isSharedCheck_4773_ = !lean_is_exclusive(v_value_4743_);
if (v_isSharedCheck_4773_ == 0)
{
v___x_4768_ = v_value_4743_;
v_isShared_4769_ = v_isSharedCheck_4773_;
goto v_resetjp_4767_;
}
else
{
lean_inc(v_value_4766_);
lean_dec(v_value_4743_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_4773_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
lean_object* v___x_4771_; 
if (v_isShared_4769_ == 0)
{
lean_ctor_set_tag(v___x_4768_, 6);
v___x_4771_ = v___x_4768_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v_value_4766_);
v___x_4771_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
v___y_4749_ = v___x_4771_;
goto v___jp_4748_;
}
}
}
default: 
{
lean_object* v_value_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; 
v_value_4774_ = lean_ctor_get(v_value_4743_, 0);
lean_inc(v_value_4774_);
lean_dec_ref(v_value_4743_);
v___x_4775_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4776_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4776_, 0, v_value_4774_);
lean_ctor_set(v___x_4776_, 1, v___x_4775_);
v___y_4749_ = v___x_4776_;
goto v___jp_4748_;
}
}
v___jp_4748_:
{
lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4750_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__0(v_options_4744_);
v___x_4751_ = lean_unsigned_to_nat(3u);
v___x_4752_ = lean_mk_empty_array_with_capacity(v___x_4751_);
v___x_4753_ = lean_array_push(v___x_4752_, v___x_4747_);
v___x_4754_ = lean_array_push(v___x_4753_, v___y_4749_);
v___x_4755_ = lean_array_push(v___x_4754_, v___x_4750_);
v___x_4756_ = l_Lasm_JS_Web_Support_args(v___x_4755_);
v___x_4757_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1(v_self_4741_, v___x_4746_, v___x_4756_);
return v___x_4757_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart___boxed(lean_object* v_self_4777_, lean_object* v_partNumber_4778_, lean_object* v_value_4779_, lean_object* v_options_4780_, lean_object* v_a_4781_){
_start:
{
double v_partNumber_boxed_4782_; lean_object* v_res_4783_; 
v_partNumber_boxed_4782_ = lean_unbox_float(v_partNumber_4778_);
lean_dec_ref(v_partNumber_4778_);
v_res_4783_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart(v_self_4777_, v_partNumber_boxed_4782_, v_value_4779_, v_options_4780_);
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_abort(lean_object* v_self_4785_){
_start:
{
lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4787_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2MultipartUpload_abort___closed__0));
v___x_4788_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_4789_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4785_, v___x_4787_, v___x_4788_);
return v___x_4789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_abort___boxed(lean_object* v_self_4790_, lean_object* v_a_4791_){
_start:
{
lean_object* v_res_4792_; 
v_res_4792_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_abort(v_self_4790_);
return v_res_4792_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0(size_t v_sz_4793_, size_t v_i_4794_, lean_object* v_bs_4795_){
_start:
{
uint8_t v___x_4796_; 
v___x_4796_ = lean_usize_dec_lt(v_i_4794_, v_sz_4793_);
if (v___x_4796_ == 0)
{
return v_bs_4795_;
}
else
{
lean_object* v_v_4797_; double v_partNumber_4798_; lean_object* v_etag_4799_; lean_object* v___x_4800_; lean_object* v_bs_x27_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; size_t v___x_4813_; size_t v___x_4814_; lean_object* v___x_4815_; 
v_v_4797_ = lean_array_uget_borrowed(v_bs_4795_, v_i_4794_);
v_partNumber_4798_ = lean_ctor_get_float(v_v_4797_, sizeof(void*)*1);
v_etag_4799_ = lean_ctor_get(v_v_4797_, 0);
lean_inc_ref(v_etag_4799_);
v___x_4800_ = lean_unsigned_to_nat(0u);
v_bs_x27_4801_ = lean_array_uset(v_bs_4795_, v_i_4794_, v___x_4800_);
v___x_4802_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0));
v___x_4803_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4803_, 0, v_partNumber_4798_);
v___x_4804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4804_, 0, v___x_4802_);
lean_ctor_set(v___x_4804_, 1, v___x_4803_);
v___x_4805_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
v___x_4806_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4806_, 0, v_etag_4799_);
v___x_4807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4805_);
lean_ctor_set(v___x_4807_, 1, v___x_4806_);
v___x_4808_ = lean_unsigned_to_nat(2u);
v___x_4809_ = lean_mk_empty_array_with_capacity(v___x_4808_);
v___x_4810_ = lean_array_push(v___x_4809_, v___x_4804_);
v___x_4811_ = lean_array_push(v___x_4810_, v___x_4807_);
v___x_4812_ = l_Lasm_JS_Web_Support_fields(v___x_4811_);
lean_dec_ref(v___x_4811_);
v___x_4813_ = ((size_t)1ULL);
v___x_4814_ = lean_usize_add(v_i_4794_, v___x_4813_);
v___x_4815_ = lean_array_uset(v_bs_x27_4801_, v_i_4794_, v___x_4812_);
v_i_4794_ = v___x_4814_;
v_bs_4795_ = v___x_4815_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0___boxed(lean_object* v_sz_4817_, lean_object* v_i_4818_, lean_object* v_bs_4819_){
_start:
{
size_t v_sz_boxed_4820_; size_t v_i_boxed_4821_; lean_object* v_res_4822_; 
v_sz_boxed_4820_ = lean_unbox_usize(v_sz_4817_);
lean_dec(v_sz_4817_);
v_i_boxed_4821_ = lean_unbox_usize(v_i_4818_);
lean_dec(v_i_4818_);
v_res_4822_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0(v_sz_boxed_4820_, v_i_boxed_4821_, v_bs_4819_);
return v_res_4822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_complete(lean_object* v_self_4824_, lean_object* v_uploadedParts_4825_){
_start:
{
lean_object* v___f_4827_; lean_object* v___x_4828_; size_t v_sz_4829_; size_t v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; uint8_t v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; 
v___f_4827_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0));
v___x_4828_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2MultipartUpload_complete___closed__0));
v_sz_4829_ = lean_array_size(v_uploadedParts_4825_);
v___x_4830_ = ((size_t)0ULL);
v___x_4831_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0(v_sz_4829_, v___x_4830_, v_uploadedParts_4825_);
v___x_4832_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4832_, 0, v___x_4831_);
v___x_4833_ = lean_unsigned_to_nat(1u);
v___x_4834_ = lean_mk_empty_array_with_capacity(v___x_4833_);
v___x_4835_ = lean_array_push(v___x_4834_, v___x_4832_);
v___x_4836_ = l_Lasm_JS_Web_Support_args(v___x_4835_);
v___x_4837_ = lean_unsigned_to_nat(0u);
v___x_4838_ = 0;
v___x_4839_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_4824_, v___x_4828_, v___x_4836_);
v___x_4840_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4837_, v___x_4838_, v___x_4839_, v___f_4827_);
return v___x_4840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_complete___boxed(lean_object* v_self_4841_, lean_object* v_uploadedParts_4842_, lean_object* v_a_4843_){
_start:
{
lean_object* v_res_4844_; 
v_res_4844_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_complete(v_self_4841_, v_uploadedParts_4842_);
return v_res_4844_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_File(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Cloudflare_R2(uint8_t builtin) {
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
res = initialize_Lasm_JS_Cloudflare_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_File(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Cloudflare_instInhabitedR2ListOptionsInclude_default = _init_l_Lasm_JS_Cloudflare_instInhabitedR2ListOptionsInclude_default();
l_Lasm_JS_Cloudflare_instInhabitedR2ListOptionsInclude = _init_l_Lasm_JS_Cloudflare_instInhabitedR2ListOptionsInclude();
l_Lasm_JS_Cloudflare_instFromJSR2Range = _init_l_Lasm_JS_Cloudflare_instFromJSR2Range();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSR2Range);
l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata = _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata);
l_Lasm_JS_Cloudflare_instToJSR2PutOptions = _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instToJSR2PutOptions);
l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions = _init_l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions);
l_Lasm_JS_Cloudflare_instToJSR2ListOptions = _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instToJSR2ListOptions);
l_Lasm_JS_Cloudflare_instFromJSR2Objects = _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSR2Objects);
l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums = _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums);
l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart = _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
