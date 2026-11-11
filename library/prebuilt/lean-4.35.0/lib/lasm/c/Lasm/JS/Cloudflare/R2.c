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
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
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
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSR2Range___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Cloudflare.R2Range"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__1___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0(lean_object* v___f_324_, lean_object* v_d_325_){
_start:
{
lean_object* v_offset_326_; lean_object* v_length_327_; lean_object* v_suffix_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_offset_326_ = lean_ctor_get(v_d_325_, 0);
lean_inc(v_offset_326_);
v_length_327_ = lean_ctor_get(v_d_325_, 1);
lean_inc(v_length_327_);
v_suffix_328_ = lean_ctor_get(v_d_325_, 2);
lean_inc(v_suffix_328_);
lean_dec_ref(v_d_325_);
v___x_329_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
lean_inc_ref_n(v___f_324_, 2);
v___x_330_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_324_, v_offset_326_);
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_329_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
v___x_333_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_324_, v_length_327_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
v___x_336_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_324_, v_suffix_328_);
v___x_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_335_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
v___x_338_ = lean_unsigned_to_nat(3u);
v___x_339_ = lean_mk_empty_array_with_capacity(v___x_338_);
v___x_340_ = lean_array_push(v___x_339_, v___x_331_);
v___x_341_ = lean_array_push(v___x_340_, v___x_334_);
v___x_342_ = lean_array_push(v___x_341_, v___x_337_);
v___x_343_ = l_Lasm_JS_Web_Support_fields(v___x_342_);
lean_dec_ref(v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0(lean_object* v___x_348_, lean_object* v_d_349_){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
lean_inc_ref(v___x_348_);
v___x_351_ = l_Lasm_JS_readField___redArg(v___x_348_, v_d_349_, v___x_350_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec_ref(v___x_348_);
v_a_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v_a_360_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_351_, 1);
v___x_361_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
lean_inc_ref(v___x_348_);
v___x_362_ = l_Lasm_JS_readField___redArg(v___x_348_, v_d_349_, v___x_361_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_370_; 
lean_dec(v_a_360_);
lean_dec_ref(v___x_348_);
v_a_363_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_370_ == 0)
{
v___x_365_ = v___x_362_;
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_368_; 
if (v_isShared_366_ == 0)
{
v___x_368_ = v___x_365_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_363_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
else
{
lean_object* v_a_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_a_371_ = lean_ctor_get(v___x_362_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_362_, 1);
v___x_372_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
v___x_373_ = l_Lasm_JS_readField___redArg(v___x_348_, v_d_349_, v___x_372_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
lean_dec(v_a_371_);
lean_dec(v_a_360_);
v_a_374_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v___x_373_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_373_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
else
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_390_; 
v_a_382_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_390_ == 0)
{
v___x_384_ = v___x_373_;
v_isShared_385_ = v_isSharedCheck_390_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_373_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_390_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_386_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_386_, 0, v_a_360_);
lean_ctor_set(v___x_386_, 1, v_a_371_);
lean_ctor_set(v___x_386_, 2, v_a_382_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v___x_386_);
v___x_388_ = v___x_384_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0___boxed(lean_object* v___x_391_, lean_object* v_d_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0(v___x_391_, v_d_392_);
lean_dec(v_d_392_);
return v_res_393_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = l_Lasm_JS_instFromJSFloat;
v___x_395_ = l_Lasm_JS_instFromJSOption___redArg(v___x_394_);
return v___x_395_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1(void){
_start:
{
lean_object* v___x_396_; lean_object* v___f_397_; 
v___x_396_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__0);
v___f_397_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2Range___lam__0___boxed), 2, 1);
lean_closure_set(v___f_397_, 0, v___x_396_);
return v___f_397_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3(void){
_start:
{
uint8_t v___x_399_; lean_object* v___x_400_; lean_object* v___f_401_; lean_object* v___x_402_; 
v___x_399_ = 0;
v___x_400_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__2));
v___f_401_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1, &l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__1);
v___x_402_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_402_, 0, v___f_401_);
lean_ctor_set(v___x_402_, 1, v___x_400_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*2, v___x_399_);
return v___x_402_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Range(void){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3, &l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Range___closed__3);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorIdx(lean_object* v_x_404_){
_start:
{
if (lean_obj_tag(v_x_404_) == 0)
{
lean_object* v___x_405_; 
v___x_405_ = lean_unsigned_to_nat(0u);
return v___x_405_;
}
else
{
lean_object* v___x_406_; 
v___x_406_ = lean_unsigned_to_nat(1u);
return v___x_406_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorIdx___boxed(lean_object* v_x_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorIdx(v_x_407_);
lean_dec_ref(v_x_407_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(lean_object* v_t_409_, lean_object* v_k_410_){
_start:
{
if (lean_obj_tag(v_t_409_) == 0)
{
lean_object* v_value_411_; lean_object* v___x_412_; 
v_value_411_ = lean_ctor_get(v_t_409_, 0);
lean_inc_ref(v_value_411_);
lean_dec_ref_known(v_t_409_, 1);
v___x_412_ = lean_apply_1(v_k_410_, v_value_411_);
return v___x_412_;
}
else
{
lean_object* v_value_413_; lean_object* v___x_414_; 
v_value_413_ = lean_ctor_get(v_t_409_, 0);
lean_inc(v_value_413_);
lean_dec_ref_known(v_t_409_, 1);
v___x_414_ = lean_apply_1(v_k_410_, v_value_413_);
return v___x_414_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim(lean_object* v_motive_415_, lean_object* v_ctorIdx_416_, lean_object* v_t_417_, lean_object* v_h_418_, lean_object* v_k_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_417_, v_k_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___boxed(lean_object* v_motive_421_, lean_object* v_ctorIdx_422_, lean_object* v_t_423_, lean_object* v_h_424_, lean_object* v_k_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim(v_motive_421_, v_ctorIdx_422_, v_t_423_, v_h_424_, v_k_425_);
lean_dec(v_ctorIdx_422_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_r2Range_elim___redArg(lean_object* v_t_427_, lean_object* v_r2Range_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_427_, v_r2Range_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_r2Range_elim(lean_object* v_motive_430_, lean_object* v_t_431_, lean_object* v_h_432_, lean_object* v_r2Range_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_431_, v_r2Range_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_headers_elim___redArg(lean_object* v_t_435_, lean_object* v_headers_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_435_, v_headers_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2RangeOrHeaders_headers_elim(lean_object* v_motive_438_, lean_object* v_t_439_, lean_object* v_h_440_, lean_object* v_headers_441_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lasm_JS_Cloudflare_R2RangeOrHeaders_ctorElim___redArg(v_t_439_, v_headers_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2RangeOrHeaders___lam__0(lean_object* v_x_443_){
_start:
{
if (lean_obj_tag(v_x_443_) == 0)
{
lean_object* v_value_444_; lean_object* v_offset_445_; lean_object* v_length_446_; lean_object* v_suffix_447_; lean_object* v___f_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_value_444_ = lean_ctor_get(v_x_443_, 0);
lean_inc_ref(v_value_444_);
lean_dec_ref_known(v_x_443_, 1);
v_offset_445_ = lean_ctor_get(v_value_444_, 0);
lean_inc(v_offset_445_);
v_length_446_ = lean_ctor_get(v_value_444_, 1);
lean_inc(v_length_446_);
v_suffix_447_ = lean_ctor_get(v_value_444_, 2);
lean_inc(v_suffix_447_);
lean_dec_ref(v_value_444_);
v___f_448_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0));
v___x_449_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
v___x_450_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_448_, v_offset_445_);
v___x_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_449_);
lean_ctor_set(v___x_451_, 1, v___x_450_);
v___x_452_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
v___x_453_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_448_, v_length_446_);
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_452_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
v___x_455_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
v___x_456_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_448_, v_suffix_447_);
v___x_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_455_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = lean_unsigned_to_nat(3u);
v___x_459_ = lean_mk_empty_array_with_capacity(v___x_458_);
v___x_460_ = lean_array_push(v___x_459_, v___x_451_);
v___x_461_ = lean_array_push(v___x_460_, v___x_454_);
v___x_462_ = lean_array_push(v___x_461_, v___x_457_);
v___x_463_ = l_Lasm_JS_Web_Support_fields(v___x_462_);
lean_dec_ref(v___x_462_);
return v___x_463_;
}
else
{
lean_object* v_value_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v_value_464_ = lean_ctor_get(v_x_443_, 0);
lean_inc(v_value_464_);
lean_dec_ref_known(v_x_443_, 1);
v___x_465_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_466_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_466_, 0, v_value_464_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2RangeR2RangeOrHeaders___lam__0(lean_object* v_value_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v_value_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2RangeOrHeaders___lam__0(lean_object* v_value_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v_value_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorIdx(lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
lean_object* v___x_478_; 
v___x_478_ = lean_unsigned_to_nat(0u);
return v___x_478_;
}
else
{
lean_object* v___x_479_; 
v___x_479_ = lean_unsigned_to_nat(1u);
return v___x_479_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorIdx___boxed(lean_object* v_x_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorIdx(v_x_480_);
lean_dec_ref(v_x_480_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(lean_object* v_t_482_, lean_object* v_k_483_){
_start:
{
lean_object* v_value_484_; lean_object* v___x_485_; 
v_value_484_ = lean_ctor_get(v_t_482_, 0);
lean_inc_ref(v_value_484_);
lean_dec_ref(v_t_482_);
v___x_485_ = lean_apply_1(v_k_483_, v_value_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim(lean_object* v_motive_486_, lean_object* v_ctorIdx_487_, lean_object* v_t_488_, lean_object* v_h_489_, lean_object* v_k_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_488_, v_k_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___boxed(lean_object* v_motive_492_, lean_object* v_ctorIdx_493_, lean_object* v_t_494_, lean_object* v_h_495_, lean_object* v_k_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim(v_motive_492_, v_ctorIdx_493_, v_t_494_, v_h_495_, v_k_496_);
lean_dec(v_ctorIdx_493_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_arrayBuffer_elim___redArg(lean_object* v_t_498_, lean_object* v_arrayBuffer_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_498_, v_arrayBuffer_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_arrayBuffer_elim(lean_object* v_motive_501_, lean_object* v_t_502_, lean_object* v_h_503_, lean_object* v_arrayBuffer_504_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_502_, v_arrayBuffer_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_domString_elim___redArg(lean_object* v_t_506_, lean_object* v_domString_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_506_, v_domString_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_domString_elim(lean_object* v_motive_509_, lean_object* v_t_510_, lean_object* v_h_511_, lean_object* v_domString_512_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lasm_JS_Cloudflare_ArrayBufferOrDOMString_ctorElim___redArg(v_t_510_, v_domString_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___lam__0(lean_object* v_x_514_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
lean_object* v_value_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
v_value_515_ = lean_ctor_get(v_x_514_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v_x_514_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_value_515_);
lean_dec(v_x_514_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
lean_ctor_set_tag(v___x_517_, 6);
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_value_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
else
{
lean_object* v_value_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
v_value_523_ = lean_ctor_get(v_x_514_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v_x_514_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_value_523_);
lean_dec(v_x_514_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
lean_ctor_set_tag(v___x_525_, 4);
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_value_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayArrayBufferOrDOMString___lam__0(lean_object* v_value_533_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v_value_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringArrayBufferOrDOMString___lam__0(lean_object* v_value_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_538_, 0, v_value_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0(lean_object* v___f_544_, lean_object* v___f_545_, lean_object* v___f_546_, lean_object* v_d_547_){
_start:
{
lean_object* v_onlyIf_548_; lean_object* v_range_549_; lean_object* v_ssecKey_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v_onlyIf_548_ = lean_ctor_get(v_d_547_, 0);
lean_inc(v_onlyIf_548_);
v_range_549_ = lean_ctor_get(v_d_547_, 1);
lean_inc(v_range_549_);
v_ssecKey_550_ = lean_ctor_get(v_d_547_, 2);
lean_inc(v_ssecKey_550_);
lean_dec_ref(v_d_547_);
v___x_551_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0));
v___x_552_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_544_, v_onlyIf_548_);
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_551_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1));
v___x_555_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_545_, v_range_549_);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_554_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_558_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_546_, v_ssecKey_550_);
v___x_559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_557_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
v___x_560_ = lean_unsigned_to_nat(3u);
v___x_561_ = lean_mk_empty_array_with_capacity(v___x_560_);
v___x_562_ = lean_array_push(v___x_561_, v___x_553_);
v___x_563_ = lean_array_push(v___x_562_, v___x_556_);
v___x_564_ = lean_array_push(v___x_563_, v___x_559_);
v___x_565_ = l_Lasm_JS_Web_Support_fields(v___x_564_);
lean_dec_ref(v___x_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorIdx(lean_object* v_x_571_){
_start:
{
switch(lean_obj_tag(v_x_571_))
{
case 0:
{
lean_object* v___x_572_; 
v___x_572_ = lean_unsigned_to_nat(0u);
return v___x_572_;
}
case 1:
{
lean_object* v___x_573_; 
v___x_573_ = lean_unsigned_to_nat(1u);
return v___x_573_;
}
case 2:
{
lean_object* v___x_574_; 
v___x_574_ = lean_unsigned_to_nat(2u);
return v___x_574_;
}
default: 
{
lean_object* v___x_575_; 
v___x_575_ = lean_unsigned_to_nat(3u);
return v___x_575_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorIdx___boxed(lean_object* v_x_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorIdx(v_x_576_);
lean_dec_ref(v_x_576_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(lean_object* v_t_578_, lean_object* v_k_579_){
_start:
{
switch(lean_obj_tag(v_t_578_))
{
case 1:
{
lean_object* v_value_580_; lean_object* v___x_581_; 
v_value_580_ = lean_ctor_get(v_t_578_, 0);
lean_inc_ref(v_value_580_);
lean_dec_ref_known(v_t_578_, 1);
v___x_581_ = lean_apply_1(v_k_579_, v_value_580_);
return v___x_581_;
}
case 3:
{
lean_object* v_value_582_; lean_object* v___x_583_; 
v_value_582_ = lean_ctor_get(v_t_578_, 0);
lean_inc_ref(v_value_582_);
lean_dec_ref_known(v_t_578_, 1);
v___x_583_ = lean_apply_1(v_k_579_, v_value_582_);
return v___x_583_;
}
default: 
{
lean_object* v_value_584_; lean_object* v___x_585_; 
v_value_584_ = lean_ctor_get(v_t_578_, 0);
lean_inc(v_value_584_);
lean_dec_ref(v_t_578_);
v___x_585_ = lean_apply_1(v_k_579_, v_value_584_);
return v___x_585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim(lean_object* v_motive_586_, lean_object* v_ctorIdx_587_, lean_object* v_t_588_, lean_object* v_h_589_, lean_object* v_k_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_588_, v_k_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___boxed(lean_object* v_motive_592_, lean_object* v_ctorIdx_593_, lean_object* v_t_594_, lean_object* v_h_595_, lean_object* v_k_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim(v_motive_592_, v_ctorIdx_593_, v_t_594_, v_h_595_, v_k_596_);
lean_dec(v_ctorIdx_593_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_readableStream_elim___redArg(lean_object* v_t_598_, lean_object* v_readableStream_599_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_598_, v_readableStream_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_readableStream_elim(lean_object* v_motive_601_, lean_object* v_t_602_, lean_object* v_h_603_, lean_object* v_readableStream_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_602_, v_readableStream_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_domString_elim___redArg(lean_object* v_t_606_, lean_object* v_domString_607_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_606_, v_domString_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_domString_elim(lean_object* v_motive_609_, lean_object* v_t_610_, lean_object* v_h_611_, lean_object* v_domString_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_610_, v_domString_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_blob_elim___redArg(lean_object* v_t_614_, lean_object* v_blob_615_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_614_, v_blob_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_blob_elim(lean_object* v_motive_617_, lean_object* v_t_618_, lean_object* v_h_619_, lean_object* v_blob_620_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_618_, v_blob_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_bufferSource_elim___redArg(lean_object* v_t_622_, lean_object* v_bufferSource_623_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_622_, v_bufferSource_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_bufferSource_elim(lean_object* v_motive_625_, lean_object* v_t_626_, lean_object* v_h_627_, lean_object* v_bufferSource_628_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lasm_JS_Cloudflare_ReadableStreamOrDOMStringOrBlobOrBufferSource_ctorElim___redArg(v_t_626_, v_bufferSource_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_x_630_){
_start:
{
switch(lean_obj_tag(v_x_630_))
{
case 1:
{
lean_object* v_value_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
v_value_631_ = lean_ctor_get(v_x_630_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v_x_630_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v_x_630_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_value_631_);
lean_dec(v_x_630_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
lean_ctor_set_tag(v___x_633_, 4);
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_value_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
case 3:
{
lean_object* v_value_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_value_639_ = lean_ctor_get(v_x_630_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v_x_630_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v_x_630_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_value_639_);
lean_dec(v_x_630_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set_tag(v___x_641_, 6);
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_value_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
default: 
{
lean_object* v_value_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_value_647_ = lean_ctor_get(v_x_630_, 0);
lean_inc(v_value_647_);
lean_dec_ref(v_x_630_);
v___x_648_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_649_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_649_, 0, v_value_647_);
lean_ctor_set(v___x_649_, 1, v___x_648_);
return v___x_649_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_value_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_653_, 0, v_value_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_value_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_657_, 0, v_value_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBlobReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_value_660_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_661_, 0, v_value_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayReadableStreamOrDOMStringOrBlobOrBufferSource___lam__0(lean_object* v_value_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_665_, 0, v_value_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0(lean_object* v___f_674_, lean_object* v_d_675_){
_start:
{
lean_object* v_contentType_676_; lean_object* v_contentLanguage_677_; lean_object* v_contentDisposition_678_; lean_object* v_contentEncoding_679_; lean_object* v_cacheControl_680_; lean_object* v_cacheExpiry_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_contentType_676_ = lean_ctor_get(v_d_675_, 0);
lean_inc(v_contentType_676_);
v_contentLanguage_677_ = lean_ctor_get(v_d_675_, 1);
lean_inc(v_contentLanguage_677_);
v_contentDisposition_678_ = lean_ctor_get(v_d_675_, 2);
lean_inc(v_contentDisposition_678_);
v_contentEncoding_679_ = lean_ctor_get(v_d_675_, 3);
lean_inc(v_contentEncoding_679_);
v_cacheControl_680_ = lean_ctor_get(v_d_675_, 4);
lean_inc(v_cacheControl_680_);
v_cacheExpiry_681_ = lean_ctor_get(v_d_675_, 5);
lean_inc(v_cacheExpiry_681_);
lean_dec_ref(v_d_675_);
v___x_682_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
lean_inc_ref_n(v___f_674_, 4);
v___x_683_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_674_, v_contentType_676_);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_682_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
v___x_686_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_674_, v_contentLanguage_677_);
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_685_);
lean_ctor_set(v___x_687_, 1, v___x_686_);
v___x_688_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
v___x_689_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_674_, v_contentDisposition_678_);
v___x_690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_688_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
v___x_692_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_674_, v_contentEncoding_679_);
v___x_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_691_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
v___x_695_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_674_, v_cacheControl_680_);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_694_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
v___x_698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
lean_ctor_set(v___x_698_, 1, v_cacheExpiry_681_);
v___x_699_ = lean_unsigned_to_nat(6u);
v___x_700_ = lean_mk_empty_array_with_capacity(v___x_699_);
v___x_701_ = lean_array_push(v___x_700_, v___x_684_);
v___x_702_ = lean_array_push(v___x_701_, v___x_687_);
v___x_703_ = lean_array_push(v___x_702_, v___x_690_);
v___x_704_ = lean_array_push(v___x_703_, v___x_693_);
v___x_705_ = lean_array_push(v___x_704_, v___x_696_);
v___x_706_ = lean_array_push(v___x_705_, v___x_698_);
v___x_707_ = l_Lasm_JS_Web_Support_fields(v___x_706_);
lean_dec_ref(v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0(lean_object* v___x_711_, lean_object* v___x_712_, lean_object* v_d_713_){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
lean_inc_ref(v___x_711_);
v___x_715_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_713_, v___x_714_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
v_a_716_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_715_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_715_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_a_724_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_715_, 1);
v___x_725_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
lean_inc_ref(v___x_711_);
v___x_726_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_713_, v___x_725_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
v_a_727_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_726_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_726_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_a_735_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_726_, 1);
v___x_736_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
lean_inc_ref(v___x_711_);
v___x_737_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_713_, v___x_736_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
v_a_738_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_737_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_737_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
else
{
lean_object* v_a_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_a_746_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v___x_737_, 1);
v___x_747_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
lean_inc_ref(v___x_711_);
v___x_748_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_713_, v___x_747_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
lean_dec_ref(v___x_711_);
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v_a_757_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___x_748_, 1);
v___x_758_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
v___x_759_ = l_Lasm_JS_readField___redArg(v___x_711_, v_d_713_, v___x_758_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
lean_dec_ref(v___x_712_);
v_a_760_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_759_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_759_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_a_768_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_759_, 1);
v___x_769_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
v___x_770_ = l_Lasm_JS_readField___redArg(v___x_712_, v_d_713_, v___x_769_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec(v_a_768_);
lean_dec(v_a_757_);
lean_dec(v_a_746_);
lean_dec(v_a_735_);
lean_dec(v_a_724_);
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_787_; 
v_a_779_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_787_ == 0)
{
v___x_781_ = v___x_770_;
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_770_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_783_, 0, v_a_724_);
lean_ctor_set(v___x_783_, 1, v_a_735_);
lean_ctor_set(v___x_783_, 2, v_a_746_);
lean_ctor_set(v___x_783_, 3, v_a_757_);
lean_ctor_set(v___x_783_, 4, v_a_768_);
lean_ctor_set(v___x_783_, 5, v_a_779_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_783_);
v___x_785_ = v___x_781_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0___boxed(lean_object* v___x_788_, lean_object* v___x_789_, lean_object* v_d_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0(v___x_788_, v___x_789_, v_d_790_);
lean_dec(v_d_790_);
return v_res_791_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0(void){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_792_ = l_Lasm_JS_instFromJSString;
v___x_793_ = l_Lasm_JS_instFromJSOption___redArg(v___x_792_);
return v___x_793_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___f_796_; 
v___x_794_ = l_Lasm_JS_instFromJSData;
v___x_795_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0);
v___f_796_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___lam__0___boxed), 3, 2);
lean_closure_set(v___f_796_, 0, v___x_795_);
lean_closure_set(v___f_796_, 1, v___x_794_);
return v___f_796_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3(void){
_start:
{
uint8_t v___x_798_; lean_object* v___x_799_; lean_object* v___f_800_; lean_object* v___x_801_; 
v___x_798_ = 0;
v___x_799_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__2));
v___f_800_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__1);
v___x_801_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_801_, 0, v___f_800_);
lean_ctor_set(v___x_801_, 1, v___x_799_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*2, v___x_798_);
return v___x_801_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata(void){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__3);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorIdx(lean_object* v_x_803_){
_start:
{
if (lean_obj_tag(v_x_803_) == 0)
{
lean_object* v___x_804_; 
v___x_804_ = lean_unsigned_to_nat(0u);
return v___x_804_;
}
else
{
lean_object* v___x_805_; 
v___x_805_ = lean_unsigned_to_nat(1u);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorIdx___boxed(lean_object* v_x_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorIdx(v_x_806_);
lean_dec_ref(v_x_806_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(lean_object* v_t_808_, lean_object* v_k_809_){
_start:
{
if (lean_obj_tag(v_t_808_) == 0)
{
lean_object* v_value_810_; lean_object* v___x_811_; 
v_value_810_ = lean_ctor_get(v_t_808_, 0);
lean_inc_ref(v_value_810_);
lean_dec_ref_known(v_t_808_, 1);
v___x_811_ = lean_apply_1(v_k_809_, v_value_810_);
return v___x_811_;
}
else
{
lean_object* v_value_812_; lean_object* v___x_813_; 
v_value_812_ = lean_ctor_get(v_t_808_, 0);
lean_inc(v_value_812_);
lean_dec_ref_known(v_t_808_, 1);
v___x_813_ = lean_apply_1(v_k_809_, v_value_812_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim(lean_object* v_motive_814_, lean_object* v_ctorIdx_815_, lean_object* v_t_816_, lean_object* v_h_817_, lean_object* v_k_818_){
_start:
{
lean_object* v___x_819_; 
v___x_819_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_816_, v_k_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___boxed(lean_object* v_motive_820_, lean_object* v_ctorIdx_821_, lean_object* v_t_822_, lean_object* v_h_823_, lean_object* v_k_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim(v_motive_820_, v_ctorIdx_821_, v_t_822_, v_h_823_, v_k_824_);
lean_dec(v_ctorIdx_821_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_r2HTTPMetadata_elim___redArg(lean_object* v_t_826_, lean_object* v_r2HTTPMetadata_827_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_826_, v_r2HTTPMetadata_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_r2HTTPMetadata_elim(lean_object* v_motive_829_, lean_object* v_t_830_, lean_object* v_h_831_, lean_object* v_r2HTTPMetadata_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_830_, v_r2HTTPMetadata_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_headers_elim___redArg(lean_object* v_t_834_, lean_object* v_headers_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_834_, v_headers_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_headers_elim(lean_object* v_motive_837_, lean_object* v_t_838_, lean_object* v_h_839_, lean_object* v_headers_840_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = l_Lasm_JS_Cloudflare_R2HTTPMetadataOrHeaders_ctorElim___redArg(v_t_838_, v_headers_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___lam__0(lean_object* v_x_842_){
_start:
{
if (lean_obj_tag(v_x_842_) == 0)
{
lean_object* v_value_843_; lean_object* v_contentType_844_; lean_object* v_contentLanguage_845_; lean_object* v_contentDisposition_846_; lean_object* v_contentEncoding_847_; lean_object* v_cacheControl_848_; lean_object* v_cacheExpiry_849_; lean_object* v___f_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_value_843_ = lean_ctor_get(v_x_842_, 0);
lean_inc_ref(v_value_843_);
lean_dec_ref_known(v_x_842_, 1);
v_contentType_844_ = lean_ctor_get(v_value_843_, 0);
lean_inc(v_contentType_844_);
v_contentLanguage_845_ = lean_ctor_get(v_value_843_, 1);
lean_inc(v_contentLanguage_845_);
v_contentDisposition_846_ = lean_ctor_get(v_value_843_, 2);
lean_inc(v_contentDisposition_846_);
v_contentEncoding_847_ = lean_ctor_get(v_value_843_, 3);
lean_inc(v_contentEncoding_847_);
v_cacheControl_848_ = lean_ctor_get(v_value_843_, 4);
lean_inc(v_cacheControl_848_);
v_cacheExpiry_849_ = lean_ctor_get(v_value_843_, 5);
lean_inc(v_cacheExpiry_849_);
lean_dec_ref(v_value_843_);
v___f_850_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___x_851_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
v___x_852_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_850_, v_contentType_844_);
v___x_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_851_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
v___x_855_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_850_, v_contentLanguage_845_);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
v___x_858_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_850_, v_contentDisposition_846_);
v___x_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_857_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
v___x_860_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
v___x_861_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_850_, v_contentEncoding_847_);
v___x_862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_860_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
v___x_864_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_850_, v_cacheControl_848_);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
v___x_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
lean_ctor_set(v___x_867_, 1, v_cacheExpiry_849_);
v___x_868_ = lean_unsigned_to_nat(6u);
v___x_869_ = lean_mk_empty_array_with_capacity(v___x_868_);
v___x_870_ = lean_array_push(v___x_869_, v___x_853_);
v___x_871_ = lean_array_push(v___x_870_, v___x_856_);
v___x_872_ = lean_array_push(v___x_871_, v___x_859_);
v___x_873_ = lean_array_push(v___x_872_, v___x_862_);
v___x_874_ = lean_array_push(v___x_873_, v___x_865_);
v___x_875_ = lean_array_push(v___x_874_, v___x_867_);
v___x_876_ = l_Lasm_JS_Web_Support_fields(v___x_875_);
lean_dec_ref(v___x_875_);
return v___x_876_;
}
else
{
lean_object* v_value_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_value_877_ = lean_ctor_get(v_x_842_, 0);
lean_inc(v_value_877_);
lean_dec_ref_known(v_x_842_, 1);
v___x_878_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_879_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_879_, 0, v_value_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeR2HTTPMetadataR2HTTPMetadataOrHeaders___lam__0(lean_object* v_value_882_){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v_value_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeHeadersR2HTTPMetadataOrHeaders___lam__0(lean_object* v_value_886_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_887_, 0, v_value_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorIdx(lean_object* v_x_890_){
_start:
{
if (lean_obj_tag(v_x_890_) == 0)
{
lean_object* v___x_891_; 
v___x_891_ = lean_unsigned_to_nat(0u);
return v___x_891_;
}
else
{
lean_object* v___x_892_; 
v___x_892_ = lean_unsigned_to_nat(1u);
return v___x_892_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorIdx___boxed(lean_object* v_x_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorIdx(v_x_893_);
lean_dec_ref(v_x_893_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(lean_object* v_t_895_, lean_object* v_k_896_){
_start:
{
lean_object* v_value_897_; lean_object* v___x_898_; 
v_value_897_ = lean_ctor_get(v_t_895_, 0);
lean_inc_ref(v_value_897_);
lean_dec_ref(v_t_895_);
v___x_898_ = lean_apply_1(v_k_896_, v_value_897_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim(lean_object* v_motive_899_, lean_object* v_ctorIdx_900_, lean_object* v_t_901_, lean_object* v_h_902_, lean_object* v_k_903_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_901_, v_k_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___boxed(lean_object* v_motive_905_, lean_object* v_ctorIdx_906_, lean_object* v_t_907_, lean_object* v_h_908_, lean_object* v_k_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim(v_motive_905_, v_ctorIdx_906_, v_t_907_, v_h_908_, v_k_909_);
lean_dec(v_ctorIdx_906_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_domString_elim___redArg(lean_object* v_t_911_, lean_object* v_domString_912_){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_911_, v_domString_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_domString_elim(lean_object* v_motive_914_, lean_object* v_t_915_, lean_object* v_h_916_, lean_object* v_domString_917_){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_915_, v_domString_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_bufferSource_elim___redArg(lean_object* v_t_919_, lean_object* v_bufferSource_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_919_, v_bufferSource_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_bufferSource_elim(lean_object* v_motive_922_, lean_object* v_t_923_, lean_object* v_h_924_, lean_object* v_bufferSource_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_Lasm_JS_Cloudflare_DOMStringOrBufferSource_ctorElim___redArg(v_t_923_, v_bufferSource_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___lam__0(lean_object* v_x_927_){
_start:
{
if (lean_obj_tag(v_x_927_) == 0)
{
lean_object* v_value_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
v_value_928_ = lean_ctor_get(v_x_927_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v_x_927_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v_x_927_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_value_928_);
lean_dec(v_x_927_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
lean_ctor_set_tag(v___x_930_, 4);
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_value_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_object* v_value_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
v_value_936_ = lean_ctor_get(v_x_927_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v_x_927_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v_x_927_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_value_936_);
lean_dec(v_x_927_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
lean_ctor_set_tag(v___x_938_, 6);
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_value_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrBufferSource___lam__0(lean_object* v_value_946_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v_value_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrBufferSource___lam__0(lean_object* v_value_950_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_951_, 0, v_value_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0(lean_object* v___f_960_, lean_object* v___f_961_, lean_object* v___x_962_, lean_object* v___f_963_, lean_object* v___f_964_, lean_object* v___f_965_, lean_object* v_d_966_){
_start:
{
lean_object* v_onlyIf_967_; lean_object* v_httpMetadata_968_; lean_object* v_customMetadata_969_; lean_object* v_md5_970_; lean_object* v_sha1_971_; lean_object* v_sha256_972_; lean_object* v_sha384_973_; lean_object* v_sha512_974_; lean_object* v_storageClass_975_; lean_object* v_ssecKey_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v_onlyIf_967_ = lean_ctor_get(v_d_966_, 0);
lean_inc(v_onlyIf_967_);
v_httpMetadata_968_ = lean_ctor_get(v_d_966_, 1);
lean_inc(v_httpMetadata_968_);
v_customMetadata_969_ = lean_ctor_get(v_d_966_, 2);
lean_inc(v_customMetadata_969_);
v_md5_970_ = lean_ctor_get(v_d_966_, 3);
lean_inc(v_md5_970_);
v_sha1_971_ = lean_ctor_get(v_d_966_, 4);
lean_inc(v_sha1_971_);
v_sha256_972_ = lean_ctor_get(v_d_966_, 5);
lean_inc(v_sha256_972_);
v_sha384_973_ = lean_ctor_get(v_d_966_, 6);
lean_inc(v_sha384_973_);
v_sha512_974_ = lean_ctor_get(v_d_966_, 7);
lean_inc(v_sha512_974_);
v_storageClass_975_ = lean_ctor_get(v_d_966_, 8);
lean_inc(v_storageClass_975_);
v_ssecKey_976_ = lean_ctor_get(v_d_966_, 9);
lean_inc(v_ssecKey_976_);
lean_dec_ref(v_d_966_);
v___x_977_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0));
v___x_978_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_960_, v_onlyIf_967_);
v___x_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_977_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
v___x_980_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_981_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_961_, v_httpMetadata_968_);
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_984_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_962_, v_customMetadata_969_);
v___x_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_963_, 4);
v___x_987_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_963_, v_md5_970_);
v___x_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
v___x_990_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_963_, v_sha1_971_);
v___x_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
v___x_993_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_963_, v_sha256_972_);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
v___x_996_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_963_, v_sha384_973_);
v___x_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
v___x_999_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_963_, v_sha512_974_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_1002_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_964_, v_storageClass_975_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_1005_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_965_, v_ssecKey_976_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = lean_unsigned_to_nat(10u);
v___x_1008_ = lean_mk_empty_array_with_capacity(v___x_1007_);
v___x_1009_ = lean_array_push(v___x_1008_, v___x_979_);
v___x_1010_ = lean_array_push(v___x_1009_, v___x_982_);
v___x_1011_ = lean_array_push(v___x_1010_, v___x_985_);
v___x_1012_ = lean_array_push(v___x_1011_, v___x_988_);
v___x_1013_ = lean_array_push(v___x_1012_, v___x_991_);
v___x_1014_ = lean_array_push(v___x_1013_, v___x_994_);
v___x_1015_ = lean_array_push(v___x_1014_, v___x_997_);
v___x_1016_ = lean_array_push(v___x_1015_, v___x_1000_);
v___x_1017_ = lean_array_push(v___x_1016_, v___x_1003_);
v___x_1018_ = lean_array_push(v___x_1017_, v___x_1006_);
v___x_1019_ = l_Lasm_JS_Web_Support_fields(v___x_1018_);
lean_dec_ref(v___x_1018_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0(void){
_start:
{
lean_object* v___f_1020_; lean_object* v___x_1021_; 
v___f_1020_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___x_1021_ = l_Lasm_JS_Web_instToJSRecord___redArg(v___f_1020_);
return v___x_1021_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1(void){
_start:
{
lean_object* v___f_1022_; lean_object* v___f_1023_; lean_object* v___f_1024_; lean_object* v___x_1025_; lean_object* v___f_1026_; lean_object* v___f_1027_; lean_object* v___f_1028_; 
v___f_1022_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0));
v___f_1023_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___f_1024_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDOMStringOrBufferSource___closed__0));
v___x_1025_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0, &l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0_once, _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0);
v___f_1026_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___closed__0));
v___f_1027_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ConditionalOrHeaders___closed__0));
v___f_1028_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0), 7, 6);
lean_closure_set(v___f_1028_, 0, v___f_1027_);
lean_closure_set(v___f_1028_, 1, v___f_1026_);
lean_closure_set(v___f_1028_, 2, v___x_1025_);
lean_closure_set(v___f_1028_, 3, v___f_1024_);
lean_closure_set(v___f_1028_, 4, v___f_1023_);
lean_closure_set(v___f_1028_, 5, v___f_1022_);
return v___f_1028_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions(void){
_start:
{
lean_object* v___f_1029_; 
v___f_1029_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1, &l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1_once, _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__1);
return v___f_1029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___lam__0(lean_object* v___f_1030_, lean_object* v___x_1031_, lean_object* v___f_1032_, lean_object* v___f_1033_, lean_object* v_d_1034_){
_start:
{
lean_object* v_httpMetadata_1035_; lean_object* v_customMetadata_1036_; lean_object* v_storageClass_1037_; lean_object* v_ssecKey_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v_httpMetadata_1035_ = lean_ctor_get(v_d_1034_, 0);
lean_inc(v_httpMetadata_1035_);
v_customMetadata_1036_ = lean_ctor_get(v_d_1034_, 1);
lean_inc(v_customMetadata_1036_);
v_storageClass_1037_ = lean_ctor_get(v_d_1034_, 2);
lean_inc(v_storageClass_1037_);
v_ssecKey_1038_ = lean_ctor_get(v_d_1034_, 3);
lean_inc(v_ssecKey_1038_);
lean_dec_ref(v_d_1034_);
v___x_1039_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_1040_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1030_, v_httpMetadata_1035_);
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_1043_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1031_, v_customMetadata_1036_);
v___x_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___x_1045_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_1046_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1032_, v_storageClass_1037_);
v___x_1047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1045_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_1049_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1033_, v_ssecKey_1038_);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_unsigned_to_nat(4u);
v___x_1052_ = lean_mk_empty_array_with_capacity(v___x_1051_);
v___x_1053_ = lean_array_push(v___x_1052_, v___x_1041_);
v___x_1054_ = lean_array_push(v___x_1053_, v___x_1044_);
v___x_1055_ = lean_array_push(v___x_1054_, v___x_1047_);
v___x_1056_ = lean_array_push(v___x_1055_, v___x_1050_);
v___x_1057_ = l_Lasm_JS_Web_Support_fields(v___x_1056_);
lean_dec_ref(v___x_1056_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0(void){
_start:
{
lean_object* v___f_1058_; lean_object* v___f_1059_; lean_object* v___x_1060_; lean_object* v___f_1061_; lean_object* v___f_1062_; 
v___f_1058_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSArrayBufferOrDOMString___closed__0));
v___f_1059_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___x_1060_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0, &l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0_once, _init_l_Lasm_JS_Cloudflare_instToJSR2PutOptions___closed__0);
v___f_1061_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadataOrHeaders___closed__0));
v___f_1062_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___lam__0), 5, 4);
lean_closure_set(v___f_1062_, 0, v___f_1061_);
lean_closure_set(v___f_1062_, 1, v___x_1060_);
lean_closure_set(v___f_1062_, 2, v___f_1059_);
lean_closure_set(v___f_1062_, 3, v___f_1058_);
return v___f_1062_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions(void){
_start:
{
lean_object* v___f_1063_; 
v___f_1063_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0, &l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0_once, _init_l_Lasm_JS_Cloudflare_instToJSR2MultipartOptions___closed__0);
return v___f_1063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorIdx(lean_object* v_x_1064_){
_start:
{
if (lean_obj_tag(v_x_1064_) == 0)
{
lean_object* v___x_1065_; 
v___x_1065_ = lean_unsigned_to_nat(0u);
return v___x_1065_;
}
else
{
lean_object* v___x_1066_; 
v___x_1066_ = lean_unsigned_to_nat(1u);
return v___x_1066_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorIdx___boxed(lean_object* v_x_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorIdx(v_x_1067_);
lean_dec_ref(v_x_1067_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(lean_object* v_t_1069_, lean_object* v_k_1070_){
_start:
{
lean_object* v_value_1071_; lean_object* v___x_1072_; 
v_value_1071_ = lean_ctor_get(v_t_1069_, 0);
lean_inc_ref(v_value_1071_);
lean_dec_ref(v_t_1069_);
v___x_1072_ = lean_apply_1(v_k_1070_, v_value_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim(lean_object* v_motive_1073_, lean_object* v_ctorIdx_1074_, lean_object* v_t_1075_, lean_object* v_h_1076_, lean_object* v_k_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1075_, v_k_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___boxed(lean_object* v_motive_1079_, lean_object* v_ctorIdx_1080_, lean_object* v_t_1081_, lean_object* v_h_1082_, lean_object* v_k_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim(v_motive_1079_, v_ctorIdx_1080_, v_t_1081_, v_h_1082_, v_k_1083_);
lean_dec(v_ctorIdx_1080_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_domString_elim___redArg(lean_object* v_t_1085_, lean_object* v_domString_1086_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1085_, v_domString_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_domString_elim(lean_object* v_motive_1088_, lean_object* v_t_1089_, lean_object* v_h_1090_, lean_object* v_domString_1091_){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1089_, v_domString_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_sequence_elim___redArg(lean_object* v_t_1093_, lean_object* v_sequence_1094_){
_start:
{
lean_object* v___x_1095_; 
v___x_1095_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1093_, v_sequence_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_sequence_elim(lean_object* v_motive_1096_, lean_object* v_t_1097_, lean_object* v_h_1098_, lean_object* v_sequence_1099_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l_Lasm_JS_Cloudflare_DOMStringOrSequenceOfDOMString_ctorElim___redArg(v_t_1097_, v_sequence_1099_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_x_1101_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1102_, 0, v_x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1(lean_object* v___f_1122_, lean_object* v_x_1123_){
_start:
{
if (lean_obj_tag(v_x_1123_) == 0)
{
lean_object* v_value_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec_ref(v___f_1122_);
v_value_1124_ = lean_ctor_get(v_x_1123_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v_x_1123_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v_x_1123_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_value_1124_);
lean_dec(v_x_1123_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set_tag(v___x_1126_, 4);
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_value_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
else
{
lean_object* v_value_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1143_; 
v_value_1132_ = lean_ctor_get(v_x_1123_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_x_1123_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1134_ = v_x_1123_;
v_isShared_1135_ = v_isSharedCheck_1143_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_value_1132_);
lean_dec(v_x_1123_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1143_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; size_t v_sz_1137_; size_t v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1141_; 
v___x_1136_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDOMStringOrSequenceOfDOMString___lam__1___closed__9));
v_sz_1137_ = lean_array_size(v_value_1132_);
v___x_1138_ = ((size_t)0ULL);
v___x_1139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1136_, v___f_1122_, v_sz_1137_, v___x_1138_, v_value_1132_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set_tag(v___x_1134_, 7);
lean_ctor_set(v___x_1134_, 0, v___x_1139_);
v___x_1141_ = v___x_1134_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1139_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1149_, 0, v_value_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeArrayStringDOMStringOrSequenceOfDOMString___lam__0(lean_object* v_value_1152_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1153_, 0, v_value_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0(lean_object* v___f_1162_, lean_object* v___f_1163_, lean_object* v___x_1164_, lean_object* v_d_1165_){
_start:
{
lean_object* v_limit_1166_; lean_object* v_prefix_1167_; lean_object* v_cursor_1168_; lean_object* v_delimiter_1169_; lean_object* v_startAfter_1170_; lean_object* v_include_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v_limit_1166_ = lean_ctor_get(v_d_1165_, 0);
lean_inc(v_limit_1166_);
v_prefix_1167_ = lean_ctor_get(v_d_1165_, 1);
lean_inc(v_prefix_1167_);
v_cursor_1168_ = lean_ctor_get(v_d_1165_, 2);
lean_inc(v_cursor_1168_);
v_delimiter_1169_ = lean_ctor_get(v_d_1165_, 3);
lean_inc(v_delimiter_1169_);
v_startAfter_1170_ = lean_ctor_get(v_d_1165_, 4);
lean_inc(v_startAfter_1170_);
v_include_1171_ = lean_ctor_get(v_d_1165_, 5);
lean_inc(v_include_1171_);
lean_dec_ref(v_d_1165_);
v___x_1172_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__0));
v___x_1173_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1162_, v_limit_1166_);
v___x_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1172_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__1));
lean_inc_ref_n(v___f_1163_, 3);
v___x_1176_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1163_, v_prefix_1167_);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1175_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
v___x_1178_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2));
v___x_1179_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1163_, v_cursor_1168_);
v___x_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1178_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
v___x_1181_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__3));
v___x_1182_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1163_, v_delimiter_1169_);
v___x_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1181_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
v___x_1184_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__4));
v___x_1185_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1163_, v_startAfter_1170_);
v___x_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__5));
v___x_1188_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1164_, v_include_1171_);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_1190_ = lean_unsigned_to_nat(6u);
v___x_1191_ = lean_mk_empty_array_with_capacity(v___x_1190_);
v___x_1192_ = lean_array_push(v___x_1191_, v___x_1174_);
v___x_1193_ = lean_array_push(v___x_1192_, v___x_1177_);
v___x_1194_ = lean_array_push(v___x_1193_, v___x_1180_);
v___x_1195_ = lean_array_push(v___x_1194_, v___x_1183_);
v___x_1196_ = lean_array_push(v___x_1195_, v___x_1186_);
v___x_1197_ = lean_array_push(v___x_1196_, v___x_1189_);
v___x_1198_ = l_Lasm_JS_Web_Support_fields(v___x_1197_);
lean_dec_ref(v___x_1197_);
return v___x_1198_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0(void){
_start:
{
lean_object* v___f_1199_; lean_object* v___x_1200_; 
v___f_1199_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___closed__0));
v___x_1200_ = l_Lasm_JS_instToJSArray___redArg(v___f_1199_);
return v___x_1200_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___f_1202_; lean_object* v___f_1203_; lean_object* v___f_1204_; 
v___x_1201_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0, &l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0_once, _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__0);
v___f_1202_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___closed__0));
v___f_1203_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___closed__0));
v___f_1204_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0), 4, 3);
lean_closure_set(v___f_1204_, 0, v___f_1203_);
lean_closure_set(v___f_1204_, 1, v___f_1202_);
lean_closure_set(v___f_1204_, 2, v___x_1201_);
return v___f_1204_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions(void){
_start:
{
lean_object* v___f_1205_; 
v___f_1205_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1, &l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1_once, _init_l_Lasm_JS_Cloudflare_instToJSR2ListOptions___closed__1);
return v___f_1205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0(lean_object* v___x_1209_, lean_object* v___x_1210_, lean_object* v___x_1211_, lean_object* v___x_1212_, lean_object* v_d_1213_){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__0));
v___x_1215_ = l_Lasm_JS_readField___redArg(v___x_1209_, v_d_1213_, v___x_1214_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
lean_dec_ref(v___x_1212_);
lean_dec_ref(v___x_1211_);
lean_dec_ref(v___x_1210_);
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1218_ = v___x_1215_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v___x_1215_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v_a_1224_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1224_);
lean_dec_ref_known(v___x_1215_, 1);
v___x_1225_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__1));
v___x_1226_ = l_Lasm_JS_readField___redArg(v___x_1210_, v_d_1213_, v___x_1225_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
lean_dec(v_a_1224_);
lean_dec_ref(v___x_1212_);
lean_dec_ref(v___x_1211_);
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1226_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1226_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1227_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
else
{
lean_object* v_a_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v_a_1235_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_a_1235_);
lean_dec_ref_known(v___x_1226_, 1);
v___x_1236_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__2));
v___x_1237_ = l_Lasm_JS_readField___redArg(v___x_1211_, v_d_1213_, v___x_1236_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
lean_dec(v_a_1235_);
lean_dec(v_a_1224_);
lean_dec_ref(v___x_1212_);
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1237_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1237_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
else
{
lean_object* v_a_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v_a_1246_ = lean_ctor_get(v___x_1237_, 0);
lean_inc(v_a_1246_);
lean_dec_ref_known(v___x_1237_, 1);
v___x_1247_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2));
v___x_1248_ = l_Lasm_JS_readField___redArg(v___x_1212_, v_d_1213_, v___x_1247_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1256_; 
lean_dec(v_a_1246_);
lean_dec(v_a_1235_);
lean_dec(v_a_1224_);
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1251_ = v___x_1248_;
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1248_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1256_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_a_1249_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1266_; 
v_a_1257_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1259_ = v___x_1248_;
v_isShared_1260_ = v_isSharedCheck_1266_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1248_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1266_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1261_; uint8_t v___x_1262_; lean_object* v___x_1264_; 
v___x_1261_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1261_, 0, v_a_1224_);
lean_ctor_set(v___x_1261_, 1, v_a_1235_);
lean_ctor_set(v___x_1261_, 2, v_a_1257_);
v___x_1262_ = lean_unbox(v_a_1246_);
lean_dec(v_a_1246_);
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*3, v___x_1262_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v___x_1261_);
v___x_1264_ = v___x_1259_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1261_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___boxed(lean_object* v___x_1267_, lean_object* v___x_1268_, lean_object* v___x_1269_, lean_object* v___x_1270_, lean_object* v_d_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0(v___x_1267_, v___x_1268_, v___x_1269_, v___x_1270_, v_d_1271_);
lean_dec(v_d_1271_);
return v_res_1272_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Object));
v___x_1274_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1273_);
return v___x_1274_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1(void){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = l_Lasm_JS_instFromJSString;
v___x_1276_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1275_);
return v___x_1276_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2(void){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___f_1281_; 
v___x_1277_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0);
v___x_1278_ = l_Lasm_JS_instFromJSBool;
v___x_1279_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1, &l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__1);
v___x_1280_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__0);
v___f_1281_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1281_, 0, v___x_1280_);
lean_closure_set(v___f_1281_, 1, v___x_1279_);
lean_closure_set(v___f_1281_, 2, v___x_1278_);
lean_closure_set(v___f_1281_, 3, v___x_1277_);
return v___f_1281_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4(void){
_start:
{
uint8_t v___x_1283_; lean_object* v___x_1284_; lean_object* v___f_1285_; lean_object* v___x_1286_; 
v___x_1283_ = 0;
v___x_1284_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__3));
v___f_1285_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2, &l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__2);
v___x_1286_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1286_, 0, v___f_1285_);
lean_ctor_set(v___x_1286_, 1, v___x_1284_);
lean_ctor_set_uint8(v___x_1286_, sizeof(void*)*2, v___x_1283_);
return v___x_1286_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects(void){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4, &l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__4);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0(lean_object* v___x_1288_, lean_object* v_d_1289_){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
lean_inc_ref(v___x_1288_);
v___x_1291_ = l_Lasm_JS_readField___redArg(v___x_1288_, v_d_1289_, v___x_1290_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
lean_dec_ref(v___x_1288_);
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_a_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
else
{
lean_object* v_a_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v_a_1300_ = lean_ctor_get(v___x_1291_, 0);
lean_inc(v_a_1300_);
lean_dec_ref_known(v___x_1291_, 1);
v___x_1301_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
lean_inc_ref(v___x_1288_);
v___x_1302_ = l_Lasm_JS_readField___redArg(v___x_1288_, v_d_1289_, v___x_1301_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
lean_dec(v_a_1300_);
lean_dec_ref(v___x_1288_);
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1302_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1302_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_a_1311_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1302_, 1);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
lean_inc_ref(v___x_1288_);
v___x_1313_ = l_Lasm_JS_readField___redArg(v___x_1288_, v_d_1289_, v___x_1312_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
lean_dec(v_a_1311_);
lean_dec(v_a_1300_);
lean_dec_ref(v___x_1288_);
v_a_1314_ = lean_ctor_get(v___x_1313_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1313_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1313_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v_a_1322_ = lean_ctor_get(v___x_1313_, 0);
lean_inc(v_a_1322_);
lean_dec_ref_known(v___x_1313_, 1);
v___x_1323_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
lean_inc_ref(v___x_1288_);
v___x_1324_ = l_Lasm_JS_readField___redArg(v___x_1288_, v_d_1289_, v___x_1323_);
if (lean_obj_tag(v___x_1324_) == 0)
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v_a_1322_);
lean_dec(v_a_1311_);
lean_dec(v_a_1300_);
lean_dec_ref(v___x_1288_);
v_a_1325_ = lean_ctor_get(v___x_1324_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1324_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1324_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1324_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v_a_1333_ = lean_ctor_get(v___x_1324_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1324_, 1);
v___x_1334_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
v___x_1335_ = l_Lasm_JS_readField___redArg(v___x_1288_, v_d_1289_, v___x_1334_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
lean_dec(v_a_1333_);
lean_dec(v_a_1322_);
lean_dec(v_a_1311_);
lean_dec(v_a_1300_);
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1338_ = v___x_1335_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1335_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1336_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1352_; 
v_a_1344_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1346_ = v___x_1335_;
v_isShared_1347_ = v_isSharedCheck_1352_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1335_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1352_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1348_; lean_object* v___x_1350_; 
v___x_1348_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1348_, 0, v_a_1300_);
lean_ctor_set(v___x_1348_, 1, v_a_1311_);
lean_ctor_set(v___x_1348_, 2, v_a_1322_);
lean_ctor_set(v___x_1348_, 3, v_a_1333_);
lean_ctor_set(v___x_1348_, 4, v_a_1344_);
if (v_isShared_1347_ == 0)
{
lean_ctor_set(v___x_1346_, 0, v___x_1348_);
v___x_1350_ = v___x_1346_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v___x_1348_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0___boxed(lean_object* v___x_1353_, lean_object* v_d_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0(v___x_1353_, v_d_1354_);
lean_dec(v_d_1354_);
return v_res_1355_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___f_1357_; 
v___x_1356_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2HTTPMetadata___closed__0);
v___f_1357_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1357_, 0, v___x_1356_);
return v___f_1357_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2(void){
_start:
{
uint8_t v___x_1359_; lean_object* v___x_1360_; lean_object* v___f_1361_; lean_object* v___x_1362_; 
v___x_1359_ = 0;
v___x_1360_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__1));
v___f_1361_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__0);
v___x_1362_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1362_, 0, v___f_1361_);
lean_ctor_set(v___x_1362_, 1, v___x_1360_);
lean_ctor_set_uint8(v___x_1362_, sizeof(void*)*2, v___x_1359_);
return v___x_1362_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums(void){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2, &l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__2);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadPartOptions___lam__0(lean_object* v___f_1364_, lean_object* v_d_1365_){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1366_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_1367_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1364_, v_d_1365_);
v___x_1368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1366_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v___x_1369_ = lean_unsigned_to_nat(1u);
v___x_1370_ = lean_mk_empty_array_with_capacity(v___x_1369_);
v___x_1371_ = lean_array_push(v___x_1370_, v___x_1368_);
v___x_1372_ = l_Lasm_JS_Web_Support_fields(v___x_1371_);
lean_dec_ref(v___x_1371_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0(lean_object* v_d_1378_){
_start:
{
double v_partNumber_1379_; lean_object* v_etag_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v_partNumber_1379_ = lean_ctor_get_float(v_d_1378_, sizeof(void*)*1);
v_etag_1380_ = lean_ctor_get(v_d_1378_, 0);
v___x_1381_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0));
v___x_1382_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1382_, 0, v_partNumber_1379_);
v___x_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1381_);
lean_ctor_set(v___x_1383_, 1, v___x_1382_);
v___x_1384_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
lean_inc_ref(v_etag_1380_);
v___x_1385_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1385_, 0, v_etag_1380_);
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1384_);
lean_ctor_set(v___x_1386_, 1, v___x_1385_);
v___x_1387_ = lean_unsigned_to_nat(2u);
v___x_1388_ = lean_mk_empty_array_with_capacity(v___x_1387_);
v___x_1389_ = lean_array_push(v___x_1388_, v___x_1383_);
v___x_1390_ = lean_array_push(v___x_1389_, v___x_1386_);
v___x_1391_ = l_Lasm_JS_Web_Support_fields(v___x_1390_);
lean_dec_ref(v___x_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___boxed(lean_object* v_d_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0(v_d_1392_);
lean_dec_ref(v_d_1392_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0(lean_object* v___x_1396_, lean_object* v___x_1397_, lean_object* v_d_1398_){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0));
v___x_1400_ = l_Lasm_JS_readField___redArg(v___x_1396_, v_d_1398_, v___x_1399_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
lean_dec_ref(v___x_1397_);
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1400_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1400_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1400_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
else
{
lean_object* v_a_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v_a_1409_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1400_, 1);
v___x_1410_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
v___x_1411_ = l_Lasm_JS_readField___redArg(v___x_1397_, v_d_1398_, v___x_1410_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_dec(v_a_1409_);
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1411_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1411_);
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
v_reuseFailAlloc_1418_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1429_; 
v_a_1420_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1422_ = v___x_1411_;
v_isShared_1423_ = v_isSharedCheck_1429_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1411_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1429_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; double v___x_1425_; lean_object* v___x_1427_; 
v___x_1424_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1424_, 0, v_a_1420_);
v___x_1425_ = lean_unbox_float(v_a_1409_);
lean_dec(v_a_1409_);
lean_ctor_set_float(v___x_1424_, sizeof(void*)*1, v___x_1425_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v___x_1424_);
v___x_1427_ = v___x_1422_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1424_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0___boxed(lean_object* v___x_1430_, lean_object* v___x_1431_, lean_object* v_d_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0(v___x_1430_, v___x_1431_, v_d_1432_);
lean_dec(v_d_1432_);
return v_res_1433_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0(void){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___f_1436_; 
v___x_1434_ = l_Lasm_JS_instFromJSString;
v___x_1435_ = l_Lasm_JS_instFromJSFloat;
v___f_1436_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1436_, 0, v___x_1435_);
lean_closure_set(v___f_1436_, 1, v___x_1434_);
return v___f_1436_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2(void){
_start:
{
uint8_t v___x_1438_; lean_object* v___x_1439_; lean_object* v___f_1440_; lean_object* v___x_1441_; 
v___x_1438_ = 0;
v___x_1439_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__1));
v___f_1440_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0, &l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__0);
v___x_1441_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1441_, 0, v___f_1440_);
lean_ctor_set(v___x_1441_, 1, v___x_1439_);
lean_ctor_set_uint8(v___x_1441_, sizeof(void*)*2, v___x_1438_);
return v___x_1441_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart(void){
_start:
{
lean_object* v___x_1442_; 
v___x_1442_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2, &l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__2);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_1443_, lean_object* v_x_1444_){
_start:
{
if (lean_obj_tag(v_x_1444_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1457_; 
v_a_1446_ = lean_ctor_get(v_x_1444_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_x_1444_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1448_ = v_x_1444_;
v_isShared_1449_ = v_isSharedCheck_1457_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v_x_1444_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1457_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1454_; 
v___x_1450_ = lean_io_error_to_string(v_a_1446_);
v___x_1451_ = lean_string_append(v_failurePrefix_1443_, v___x_1450_);
lean_dec_ref(v___x_1450_);
v___x_1452_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1452_);
v___x_1454_ = v___x_1448_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
return v___x_1455_;
}
}
}
else
{
lean_object* v___x_1458_; 
lean_dec_ref(v_failurePrefix_1443_);
v___x_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1458_, 0, v_x_1444_);
return v___x_1458_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_1459_, lean_object* v_x_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4(v_failurePrefix_1459_, v_x_1460_);
return v_res_1462_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_1468_ = lean_string_utf8_byte_size(v___x_1467_);
return v___x_1468_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; uint8_t v___x_1471_; 
v___x_1469_ = lean_unsigned_to_nat(0u);
v___x_1470_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__4);
v___x_1471_ = lean_nat_dec_eq(v___x_1470_, v___x_1469_);
return v___x_1471_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1476_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__9));
v___x_1477_ = lean_unsigned_to_nat(46u);
v___x_1478_ = lean_unsigned_to_nat(193u);
v___x_1479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__8));
v___x_1480_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__7));
v___x_1481_ = l_mkPanicMessageWithDecl(v___x_1480_, v___x_1479_, v___x_1478_, v___x_1477_, v___x_1476_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2(lean_object* v_context_1483_, lean_object* v_d_1484_){
_start:
{
lean_object* v___y_1490_; lean_object* v___y_1491_; 
switch(lean_obj_tag(v_d_1484_))
{
case 1:
{
goto v___jp_1486_;
}
case 0:
{
goto v___jp_1486_;
}
default: 
{
if (lean_obj_tag(v_d_1484_) == 9)
{
lean_object* v_value_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v_value_1495_ = lean_ctor_get(v_d_1484_, 0);
lean_inc(v_value_1495_);
lean_dec_ref_known(v_d_1484_, 2);
v___x_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1496_, 0, v_value_1495_);
v___x_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
return v___x_1497_;
}
else
{
lean_object* v___x_1498_; lean_object* v_received_1500_; 
v___x_1498_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
if (lean_obj_tag(v_d_1484_) == 9)
{
lean_object* v_value_1514_; lean_object* v_description_1515_; uint8_t v___x_1516_; 
v_value_1514_ = lean_ctor_get(v_d_1484_, 0);
v_description_1515_ = lean_ctor_get(v_d_1484_, 1);
v___x_1516_ = lean_string_dec_eq(v_description_1515_, v___x_1498_);
if (v___x_1516_ == 0)
{
goto v___jp_1512_;
}
else
{
uint32_t v___x_1517_; uint64_t v___x_1518_; lean_object* v___x_1519_; uint32_t v___x_1520_; lean_object* v___x_1521_; 
lean_inc_n(v_value_1514_, 2);
lean_dec_ref_known(v_d_1484_, 2);
v___x_1517_ = 206;
v___x_1518_ = 0ULL;
v___x_1519_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1519_, 0, v_value_1514_);
lean_ctor_set(v___x_1519_, 1, v___x_1498_);
v___x_1520_ = lasm_js_value_handle(v_value_1514_);
lean_dec(v_value_1514_);
v___x_1521_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1517_, v___x_1518_, v___x_1519_, v___x_1520_);
lean_dec_ref_known(v___x_1519_, 2);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; uint8_t v___x_1523_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1523_ = lean_string_validate_utf8(v_a_1522_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
lean_dec(v_a_1522_);
v___x_1524_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_1525_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1524_);
v_received_1500_ = v___x_1525_;
goto v___jp_1499_;
}
else
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_string_from_utf8_unchecked(v_a_1522_);
v_received_1500_ = v___x_1526_;
goto v___jp_1499_;
}
}
else
{
lean_object* v___x_1527_; 
lean_dec_ref_known(v___x_1521_, 1);
v___x_1527_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v_received_1500_ = v___x_1527_;
goto v___jp_1499_;
}
}
}
else
{
goto v___jp_1512_;
}
v___jp_1499_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; uint8_t v___x_1510_; 
v___x_1501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_1502_ = lean_string_append(v___x_1501_, v_context_1483_);
v___x_1503_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_1504_ = lean_string_append(v___x_1502_, v___x_1503_);
v___x_1505_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__2));
v___x_1506_ = lean_string_append(v___x_1504_, v___x_1505_);
v___x_1507_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_1508_ = lean_string_append(v___x_1506_, v___x_1507_);
v___x_1509_ = lean_string_append(v___x_1508_, v_received_1500_);
lean_dec_ref(v_received_1500_);
v___x_1510_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; 
v___x_1511_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___y_1490_ = v___x_1509_;
v___y_1491_ = v___x_1511_;
goto v___jp_1489_;
}
else
{
v___y_1490_ = v___x_1509_;
v___y_1491_ = v___x_1498_;
goto v___jp_1489_;
}
}
v___jp_1512_:
{
lean_object* v___x_1513_; 
v___x_1513_ = l_Lasm_JS_Data_describe(v_d_1484_);
v_received_1500_ = v___x_1513_;
goto v___jp_1499_;
}
}
}
}
v___jp_1486_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = lean_box(0);
v___x_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1487_);
return v___x_1488_;
}
v___jp_1489_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1492_ = lean_string_append(v___y_1490_, v___y_1491_);
v___x_1493_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
v___x_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
return v___x_1494_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1528_, lean_object* v_d_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2(v_context_1528_, v_d_1529_);
lean_dec_ref(v_context_1528_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0(lean_object* v_context_1532_, lean_object* v_x_1533_){
_start:
{
lean_object* v_val_1536_; 
if (lean_obj_tag(v_x_1533_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1546_; 
v_a_1538_ = lean_ctor_get(v_x_1533_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v_x_1533_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1540_ = v_x_1533_;
v_isShared_1541_ = v_isSharedCheck_1546_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v_x_1533_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1546_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
lean_object* v___x_1544_; 
v___x_1544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1543_);
return v___x_1544_;
}
}
}
else
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1560_; 
v_a_1547_ = lean_ctor_get(v_x_1533_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v_x_1533_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1549_ = v_x_1533_;
v_isShared_1550_ = v_isSharedCheck_1560_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v_x_1533_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1560_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2(v_context_1532_, v_a_1547_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v___x_1554_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___x_1551_, 1);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v_a_1552_);
v___x_1554_ = v___x_1549_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
v_val_1536_ = v___x_1554_;
goto v___jp_1535_;
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; 
v_a_1556_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v___x_1551_, 1);
if (v_isShared_1550_ == 0)
{
lean_ctor_set_tag(v___x_1549_, 0);
lean_ctor_set(v___x_1549_, 0, v_a_1556_);
v___x_1558_ = v___x_1549_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1556_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
v_val_1536_ = v___x_1558_;
goto v___jp_1535_;
}
}
}
}
v___jp_1535_:
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1537_, 0, v_val_1536_);
return v___x_1537_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1561_, lean_object* v_x_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0(v_context_1561_, v_x_1562_);
lean_dec_ref(v_context_1561_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8(lean_object* v___f_1565_, lean_object* v_x_1566_){
_start:
{
if (lean_obj_tag(v_x_1566_) == 0)
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1576_; 
lean_dec_ref(v___f_1565_);
v_a_1568_ = lean_ctor_get(v_x_1566_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v_x_1566_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1570_ = v_x_1566_;
v_isShared_1571_ = v_isSharedCheck_1576_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v_x_1566_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1576_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
lean_object* v___x_1574_; 
v___x_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
return v___x_1574_;
}
}
}
else
{
lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1588_; 
v_isSharedCheck_1588_ = !lean_is_exclusive(v_x_1566_);
if (v_isSharedCheck_1588_ == 0)
{
lean_object* v_unused_1589_; 
v_unused_1589_ = lean_ctor_get(v_x_1566_, 0);
lean_dec(v_unused_1589_);
v___x_1578_ = v_x_1566_;
v_isShared_1579_ = v_isSharedCheck_1588_;
goto v_resetjp_1577_;
}
else
{
lean_dec(v_x_1566_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1588_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1580_; uint8_t v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1584_; 
v___x_1580_ = lean_unsigned_to_nat(0u);
v___x_1581_ = 0;
v___x_1582_ = lean_io_promise_new();
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 0, v___x_1582_);
v___x_1584_ = v___x_1578_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1582_);
v___x_1584_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
v___x_1586_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1580_, v___x_1581_, v___x_1585_, v___f_1565_);
return v___x_1586_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8___boxed(lean_object* v___f_1590_, lean_object* v_x_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8(v___f_1590_, v_x_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5(lean_object* v___x_1594_, uint8_t v___x_1595_, lean_object* v___f_1596_, lean_object* v_a_1597_, uint32_t v_op_1598_, uint64_t v_flags_1599_, lean_object* v_payload_1600_, lean_object* v_x_1601_){
_start:
{
lean_object* v_val_1604_; 
if (lean_obj_tag(v_x_1601_) == 0)
{
lean_object* v___x_1607_; 
lean_dec_ref(v___f_1596_);
lean_dec(v___x_1594_);
v___x_1607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1607_, 0, v_x_1601_);
return v___x_1607_;
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1622_; 
v_a_1608_ = lean_ctor_get(v_x_1601_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v_x_1601_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1610_ = v_x_1601_;
v_isShared_1611_ = v_isSharedCheck_1622_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v_x_1601_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1622_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
uint32_t v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = 0;
v___x_1613_ = lasm_js_call_into(v_a_1597_, v_op_1598_, v___x_1612_, v_flags_1599_, v_a_1608_, v_payload_1600_);
lean_dec(v_a_1608_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___x_1616_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___x_1613_, 1);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_a_1614_);
v___x_1616_ = v___x_1610_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_a_1614_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
v_val_1604_ = v___x_1616_;
goto v___jp_1603_;
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; 
v_a_1618_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1618_);
lean_dec_ref_known(v___x_1613_, 1);
if (v_isShared_1611_ == 0)
{
lean_ctor_set_tag(v___x_1610_, 0);
lean_ctor_set(v___x_1610_, 0, v_a_1618_);
v___x_1620_ = v___x_1610_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1618_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
v_val_1604_ = v___x_1620_;
goto v___jp_1603_;
}
}
}
}
v___jp_1603_:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_val_1604_);
v___x_1606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1594_, v___x_1595_, v___x_1605_, v___f_1596_);
return v___x_1606_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed(lean_object* v___x_1623_, lean_object* v___x_1624_, lean_object* v___f_1625_, lean_object* v_a_1626_, lean_object* v_op_1627_, lean_object* v_flags_1628_, lean_object* v_payload_1629_, lean_object* v_x_1630_, lean_object* v___y_1631_){
_start:
{
uint8_t v___x_1415__boxed_1632_; uint32_t v_op_boxed_1633_; uint64_t v_flags_boxed_1634_; lean_object* v_res_1635_; 
v___x_1415__boxed_1632_ = lean_unbox(v___x_1624_);
v_op_boxed_1633_ = lean_unbox_uint32(v_op_1627_);
lean_dec(v_op_1627_);
v_flags_boxed_1634_ = lean_unbox_uint64(v_flags_1628_);
lean_dec_ref(v_flags_1628_);
v_res_1635_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5(v___x_1623_, v___x_1415__boxed_1632_, v___f_1625_, v_a_1626_, v_op_boxed_1633_, v_flags_boxed_1634_, v_payload_1629_, v_x_1630_);
lean_dec(v_payload_1629_);
lean_dec(v_a_1626_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3(lean_object* v_a_1636_, lean_object* v_x_1637_){
_start:
{
if (lean_obj_tag(v_x_1637_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1647_; 
v_a_1639_ = lean_ctor_get(v_x_1637_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v_x_1637_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1641_ = v_x_1637_;
v_isShared_1642_ = v_isSharedCheck_1647_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v_x_1637_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1647_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
return v___x_1645_;
}
}
}
else
{
lean_object* v___x_1648_; 
lean_dec_ref_known(v_x_1637_, 1);
v___x_1648_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1636_);
return v___x_1648_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed(lean_object* v_a_1649_, lean_object* v_x_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3(v_a_1649_, v_x_1650_);
lean_dec(v_a_1649_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7(lean_object* v___f_1653_, lean_object* v_a_1654_, uint32_t v_op_1655_, uint64_t v_flags_1656_, lean_object* v_payload_1657_, lean_object* v_x_1658_){
_start:
{
if (lean_obj_tag(v_x_1658_) == 0)
{
lean_object* v___x_1660_; 
lean_dec_ref(v___f_1653_);
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v_x_1658_);
return v___x_1660_;
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1681_; 
v_a_1661_ = lean_ctor_get(v_x_1658_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_x_1658_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1663_ = v_x_1658_;
v_isShared_1664_ = v_isSharedCheck_1681_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v_x_1658_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1681_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
uint32_t v___x_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; lean_object* v_val_1669_; lean_object* v___x_1672_; 
v___x_1665_ = 0;
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = 0;
v___x_1672_ = lasm_js_call_into(v_a_1654_, v_op_1655_, v___x_1665_, v_flags_1656_, v_a_1661_, v_payload_1657_);
lean_dec(v_a_1661_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1673_);
lean_dec_ref_known(v___x_1672_, 1);
if (v_isShared_1664_ == 0)
{
lean_ctor_set(v___x_1663_, 0, v_a_1673_);
v___x_1675_ = v___x_1663_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1673_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
v_val_1669_ = v___x_1675_;
goto v___jp_1668_;
}
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; 
v_a_1677_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1672_, 1);
if (v_isShared_1664_ == 0)
{
lean_ctor_set_tag(v___x_1663_, 0);
lean_ctor_set(v___x_1663_, 0, v_a_1677_);
v___x_1679_ = v___x_1663_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
v_val_1669_ = v___x_1679_;
goto v___jp_1668_;
}
}
v___jp_1668_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1670_, 0, v_val_1669_);
v___x_1671_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1666_, v___x_1667_, v___x_1670_, v___f_1653_);
return v___x_1671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed(lean_object* v___f_1682_, lean_object* v_a_1683_, lean_object* v_op_1684_, lean_object* v_flags_1685_, lean_object* v_payload_1686_, lean_object* v_x_1687_, lean_object* v___y_1688_){
_start:
{
uint32_t v_op_boxed_1689_; uint64_t v_flags_boxed_1690_; lean_object* v_res_1691_; 
v_op_boxed_1689_ = lean_unbox_uint32(v_op_1684_);
lean_dec(v_op_1684_);
v_flags_boxed_1690_ = lean_unbox_uint64(v_flags_1685_);
lean_dec_ref(v_flags_1685_);
v_res_1691_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7(v___f_1682_, v_a_1683_, v_op_boxed_1689_, v_flags_boxed_1690_, v_payload_1686_, v_x_1687_);
lean_dec(v_payload_1686_);
lean_dec(v_a_1683_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_1692_, uint32_t v_op_1693_, uint64_t v_flags_1694_, lean_object* v_payload_1695_, lean_object* v___f_1696_, lean_object* v___f_1697_, lean_object* v___f_1698_, lean_object* v_x_1699_){
_start:
{
if (lean_obj_tag(v_x_1699_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1709_; 
lean_dec_ref(v___f_1698_);
lean_dec_ref(v___f_1697_);
lean_dec_ref(v___f_1696_);
lean_dec(v_payload_1695_);
v_a_1701_ = lean_ctor_get(v_x_1699_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_x_1699_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1703_ = v_x_1699_;
v_isShared_1704_ = v_isSharedCheck_1709_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v_x_1699_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1709_;
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
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1701_);
v___x_1706_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
lean_object* v___x_1707_; 
v___x_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1706_);
return v___x_1707_;
}
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1756_; 
v_a_1710_ = lean_ctor_get(v_x_1699_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_x_1699_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1712_ = v_x_1699_;
v_isShared_1713_ = v_isSharedCheck_1756_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v_x_1699_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1756_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; 
v___x_1714_ = lean_string_utf8_byte_size(v_failurePrefix_1692_);
v___x_1715_ = lean_unsigned_to_nat(0u);
v___x_1716_ = lean_nat_dec_eq(v___x_1714_, v___x_1715_);
if (v___x_1716_ == 0)
{
lean_object* v___f_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___f_1721_; lean_object* v_val_1723_; lean_object* v___x_1728_; 
lean_dec_ref(v___f_1698_);
lean_inc(v_a_1710_);
v___f_1717_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1717_, 0, v_a_1710_);
v___x_1718_ = lean_box(v___x_1716_);
v___x_1719_ = lean_box_uint32(v_op_1693_);
v___x_1720_ = lean_box_uint64(v_flags_1694_);
lean_inc(v_payload_1695_);
v___f_1721_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1721_, 0, v___x_1715_);
lean_closure_set(v___f_1721_, 1, v___x_1718_);
lean_closure_set(v___f_1721_, 2, v___f_1717_);
lean_closure_set(v___f_1721_, 3, v_a_1710_);
lean_closure_set(v___f_1721_, 4, v___x_1719_);
lean_closure_set(v___f_1721_, 5, v___x_1720_);
lean_closure_set(v___f_1721_, 6, v_payload_1695_);
v___x_1728_ = l_Lasm_JS_Wire_encodeIO(v_payload_1695_);
lean_dec(v_payload_1695_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1731_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1728_, 1);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v_a_1729_);
v___x_1731_ = v___x_1712_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1729_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
v_val_1723_ = v___x_1731_;
goto v___jp_1722_;
}
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; 
v_a_1733_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1733_);
lean_dec_ref_known(v___x_1728_, 1);
if (v_isShared_1713_ == 0)
{
lean_ctor_set_tag(v___x_1712_, 0);
lean_ctor_set(v___x_1712_, 0, v_a_1733_);
v___x_1735_ = v___x_1712_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_a_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
v_val_1723_ = v___x_1735_;
goto v___jp_1722_;
}
}
v___jp_1722_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1724_, 0, v_val_1723_);
v___x_1725_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1715_, v___x_1716_, v___x_1724_, v___f_1721_);
v___x_1726_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1715_, v___x_1716_, v___x_1725_, v___f_1696_);
v___x_1727_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1715_, v___x_1716_, v___x_1726_, v___f_1697_);
return v___x_1727_;
}
}
else
{
lean_object* v___f_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___f_1740_; uint8_t v___x_1741_; lean_object* v_val_1743_; lean_object* v___x_1747_; 
lean_dec_ref(v___f_1697_);
lean_dec_ref(v___f_1696_);
lean_inc(v_a_1710_);
v___f_1737_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1737_, 0, v_a_1710_);
v___x_1738_ = lean_box_uint32(v_op_1693_);
v___x_1739_ = lean_box_uint64(v_flags_1694_);
lean_inc(v_payload_1695_);
v___f_1740_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1740_, 0, v___f_1737_);
lean_closure_set(v___f_1740_, 1, v_a_1710_);
lean_closure_set(v___f_1740_, 2, v___x_1738_);
lean_closure_set(v___f_1740_, 3, v___x_1739_);
lean_closure_set(v___f_1740_, 4, v_payload_1695_);
v___x_1741_ = 0;
v___x_1747_ = l_Lasm_JS_Wire_encodeIO(v_payload_1695_);
lean_dec(v_payload_1695_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1747_, 1);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v_a_1748_);
v___x_1750_ = v___x_1712_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v_a_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
v_val_1743_ = v___x_1750_;
goto v___jp_1742_;
}
}
else
{
lean_object* v_a_1752_; lean_object* v___x_1754_; 
v_a_1752_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1752_);
lean_dec_ref_known(v___x_1747_, 1);
if (v_isShared_1713_ == 0)
{
lean_ctor_set_tag(v___x_1712_, 0);
lean_ctor_set(v___x_1712_, 0, v_a_1752_);
v___x_1754_ = v___x_1712_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
v_val_1743_ = v___x_1754_;
goto v___jp_1742_;
}
}
v___jp_1742_:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1744_, 0, v_val_1743_);
v___x_1745_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1715_, v___x_1741_, v___x_1744_, v___f_1740_);
v___x_1746_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1715_, v___x_1741_, v___x_1745_, v___f_1698_);
return v___x_1746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_1757_, lean_object* v_op_1758_, lean_object* v_flags_1759_, lean_object* v_payload_1760_, lean_object* v___f_1761_, lean_object* v___f_1762_, lean_object* v___f_1763_, lean_object* v_x_1764_, lean_object* v___y_1765_){
_start:
{
uint32_t v_op_boxed_1766_; uint64_t v_flags_boxed_1767_; lean_object* v_res_1768_; 
v_op_boxed_1766_ = lean_unbox_uint32(v_op_1758_);
lean_dec(v_op_1758_);
v_flags_boxed_1767_ = lean_unbox_uint64(v_flags_1759_);
lean_dec_ref(v_flags_1759_);
v_res_1768_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6(v_failurePrefix_1757_, v_op_boxed_1766_, v_flags_boxed_1767_, v_payload_1760_, v___f_1761_, v___f_1762_, v___f_1763_, v_x_1764_);
lean_dec_ref(v_failurePrefix_1757_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1(lean_object* v___f_1769_, lean_object* v_bytes_1770_){
_start:
{
lean_object* v___x_1772_; uint8_t v___x_1773_; lean_object* v_val_1775_; lean_object* v___x_1778_; 
v___x_1772_ = lean_unsigned_to_nat(0u);
v___x_1773_ = 0;
v___x_1778_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1770_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1778_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1778_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
lean_ctor_set_tag(v___x_1781_, 1);
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
v_val_1775_ = v___x_1784_;
goto v___jp_1774_;
}
}
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
v_a_1787_ = lean_ctor_get(v___x_1778_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1778_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1778_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
lean_ctor_set_tag(v___x_1789_, 0);
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
v_val_1775_ = v___x_1792_;
goto v___jp_1774_;
}
}
}
v___jp_1774_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1776_, 0, v_val_1775_);
v___x_1777_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1772_, v___x_1773_, v___x_1776_, v___f_1769_);
return v___x_1777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1795_, lean_object* v_bytes_1796_, lean_object* v___y_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1(v___f_1795_, v_bytes_1796_);
lean_dec_ref(v_bytes_1796_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2(lean_object* v___f_1799_, lean_object* v_x_1800_){
_start:
{
if (lean_obj_tag(v_x_1800_) == 0)
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1810_; 
lean_dec_ref(v___f_1799_);
v_a_1802_ = lean_ctor_get(v_x_1800_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v_x_1800_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1804_ = v_x_1800_;
v_isShared_1805_ = v_isSharedCheck_1810_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v_x_1800_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1810_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1808_; 
v___x_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
return v___x_1808_;
}
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1812_; 
v_a_1811_ = lean_ctor_get(v_x_1800_, 0);
lean_inc(v_a_1811_);
lean_dec_ref_known(v_x_1800_, 1);
v___x_1812_ = lean_apply_2(v___f_1799_, v_a_1811_, lean_box(0));
return v___x_1812_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1813_, lean_object* v_x_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2(v___f_1813_, v_x_1814_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1(lean_object* v_context_1817_, uint32_t v_op_1818_, uint64_t v_flags_1819_, lean_object* v_payload_1820_, lean_object* v_failurePrefix_1821_){
_start:
{
lean_object* v___f_1823_; lean_object* v___f_1824_; lean_object* v___f_1825_; lean_object* v___f_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___f_1829_; lean_object* v___f_1830_; lean_object* v___x_1831_; uint8_t v___x_1832_; lean_object* v_val_1834_; lean_object* v___x_1837_; 
v___f_1823_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1823_, 0, v_context_1817_);
v___f_1824_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1824_, 0, v___f_1823_);
v___f_1825_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1825_, 0, v___f_1824_);
lean_inc_ref(v_failurePrefix_1821_);
v___f_1826_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1826_, 0, v_failurePrefix_1821_);
v___x_1827_ = lean_box_uint32(v_op_1818_);
v___x_1828_ = lean_box_uint64(v_flags_1819_);
lean_inc_ref(v___f_1825_);
v___f_1829_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1829_, 0, v_failurePrefix_1821_);
lean_closure_set(v___f_1829_, 1, v___x_1827_);
lean_closure_set(v___f_1829_, 2, v___x_1828_);
lean_closure_set(v___f_1829_, 3, v_payload_1820_);
lean_closure_set(v___f_1829_, 4, v___f_1826_);
lean_closure_set(v___f_1829_, 5, v___f_1825_);
lean_closure_set(v___f_1829_, 6, v___f_1825_);
v___f_1830_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_1830_, 0, v___f_1829_);
v___x_1831_ = lean_unsigned_to_nat(0u);
v___x_1832_ = 0;
v___x_1837_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1837_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1837_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
lean_ctor_set_tag(v___x_1840_, 1);
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
v_val_1834_ = v___x_1843_;
goto v___jp_1833_;
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
v_a_1846_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1837_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1837_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
lean_ctor_set_tag(v___x_1848_, 0);
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
v_val_1834_ = v___x_1851_;
goto v___jp_1833_;
}
}
}
v___jp_1833_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1835_, 0, v_val_1834_);
v___x_1836_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1831_, v___x_1832_, v___x_1835_, v___f_1830_);
return v___x_1836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___boxed(lean_object* v_context_1854_, lean_object* v_op_1855_, lean_object* v_flags_1856_, lean_object* v_payload_1857_, lean_object* v_failurePrefix_1858_, lean_object* v_a_1859_){
_start:
{
uint32_t v_op_boxed_1860_; uint64_t v_flags_boxed_1861_; lean_object* v_res_1862_; 
v_op_boxed_1860_ = lean_unbox_uint32(v_op_1855_);
lean_dec(v_op_1855_);
v_flags_boxed_1861_ = lean_unbox_uint64(v_flags_1856_);
lean_dec_ref(v_flags_1856_);
v_res_1862_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1(v_context_1854_, v_op_boxed_1860_, v_flags_boxed_1861_, v_payload_1857_, v_failurePrefix_1858_);
return v_res_1862_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1863_; uint64_t v___x_1864_; 
v___x_1863_ = 0;
v___x_1864_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0(uint8_t v_await_1865_, uint64_t v_extra_1866_){
_start:
{
uint64_t v___x_1867_; uint64_t v___y_1869_; 
v___x_1867_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_1865_ == 0)
{
uint64_t v___x_1872_; 
v___x_1872_ = 0ULL;
v___y_1869_ = v___x_1872_;
goto v___jp_1868_;
}
else
{
uint64_t v___x_1873_; 
v___x_1873_ = 2ULL;
v___y_1869_ = v___x_1873_;
goto v___jp_1868_;
}
v___jp_1868_:
{
uint64_t v___x_1870_; uint64_t v___x_1871_; 
v___x_1870_ = lean_uint64_lor(v___x_1867_, v___y_1869_);
v___x_1871_ = lean_uint64_lor(v___x_1870_, v_extra_1866_);
return v___x_1871_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___boxed(lean_object* v_await_1874_, lean_object* v_extra_1875_){
_start:
{
uint8_t v_await_boxed_1876_; uint64_t v_extra_boxed_1877_; uint64_t v_res_1878_; lean_object* v_r_1879_; 
v_await_boxed_1876_ = lean_unbox(v_await_1874_);
v_extra_boxed_1877_ = lean_unbox_uint64(v_extra_1875_);
lean_dec_ref(v_extra_1875_);
v_res_1878_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0(v_await_boxed_1876_, v_extra_boxed_1877_);
v_r_1879_ = lean_box_uint64(v_res_1878_);
return v_r_1879_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1(void){
_start:
{
uint64_t v___x_1881_; uint8_t v___x_1882_; uint64_t v___x_1883_; 
v___x_1881_ = 8ULL;
v___x_1882_ = 0;
v___x_1883_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0(v___x_1882_, v___x_1881_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0(lean_object* v_o_1884_, lean_object* v_name_1885_, lean_object* v_args_1886_){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; uint32_t v___x_1893_; uint64_t v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1888_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_1889_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1889_, 0, v_o_1884_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
lean_inc_ref(v_name_1885_);
v___x_1890_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1890_, 0, v_name_1885_);
v___x_1891_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_1892_ = lean_string_append(v___x_1891_, v_name_1885_);
lean_dec_ref(v_name_1885_);
v___x_1893_ = 205;
v___x_1894_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__1);
v___x_1895_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1895_, 0, v_args_1886_);
v___x_1896_ = lean_unsigned_to_nat(3u);
v___x_1897_ = lean_mk_empty_array_with_capacity(v___x_1896_);
v___x_1898_ = lean_array_push(v___x_1897_, v___x_1889_);
v___x_1899_ = lean_array_push(v___x_1898_, v___x_1890_);
v___x_1900_ = lean_array_push(v___x_1899_, v___x_1895_);
v___x_1901_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
v___x_1902_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1(v___x_1892_, v___x_1893_, v___x_1894_, v___x_1901_, v___x_1888_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___boxed(lean_object* v_o_1903_, lean_object* v_name_1904_, lean_object* v_args_1905_, lean_object* v___y_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0(v_o_1903_, v_name_1904_, v_args_1905_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_head(lean_object* v_self_1909_, lean_object* v_key_1910_){
_start:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1912_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_head___closed__0));
v___x_1913_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1913_, 0, v_key_1910_);
v___x_1914_ = lean_unsigned_to_nat(1u);
v___x_1915_ = lean_mk_empty_array_with_capacity(v___x_1914_);
v___x_1916_ = lean_array_push(v___x_1915_, v___x_1913_);
v___x_1917_ = l_Lasm_JS_Web_Support_args(v___x_1916_);
v___x_1918_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0(v_self_1909_, v___x_1912_, v___x_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_head___boxed(lean_object* v_self_1919_, lean_object* v_key_1920_, lean_object* v_a_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_Lasm_JS_Cloudflare_R2Bucket_head(v_self_1919_, v_key_1920_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__1(lean_object* v_x_1923_){
_start:
{
if (lean_obj_tag(v_x_1923_) == 0)
{
lean_object* v___x_1924_; 
v___x_1924_ = lean_box(0);
return v___x_1924_;
}
else
{
lean_object* v_val_1925_; 
v_val_1925_ = lean_ctor_get(v_x_1923_, 0);
if (lean_obj_tag(v_val_1925_) == 0)
{
lean_object* v_value_1926_; lean_object* v_offset_1927_; lean_object* v_length_1928_; lean_object* v_suffix_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v_value_1926_ = lean_ctor_get(v_val_1925_, 0);
v_offset_1927_ = lean_ctor_get(v_value_1926_, 0);
v_length_1928_ = lean_ctor_get(v_value_1926_, 1);
v_suffix_1929_ = lean_ctor_get(v_value_1926_, 2);
v___x_1930_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
v___x_1931_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_offset_1927_);
v___x_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1930_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
v___x_1933_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
v___x_1934_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_length_1928_);
v___x_1935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1933_);
lean_ctor_set(v___x_1935_, 1, v___x_1934_);
v___x_1936_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
v___x_1937_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_suffix_1929_);
v___x_1938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1936_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = lean_unsigned_to_nat(3u);
v___x_1940_ = lean_mk_empty_array_with_capacity(v___x_1939_);
v___x_1941_ = lean_array_push(v___x_1940_, v___x_1932_);
v___x_1942_ = lean_array_push(v___x_1941_, v___x_1935_);
v___x_1943_ = lean_array_push(v___x_1942_, v___x_1938_);
v___x_1944_ = l_Lasm_JS_Web_Support_fields(v___x_1943_);
lean_dec_ref(v___x_1943_);
return v___x_1944_;
}
else
{
lean_object* v_value_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v_value_1945_ = lean_ctor_get(v_val_1925_, 0);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
lean_inc(v_value_1945_);
v___x_1947_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1947_, 0, v_value_1945_);
lean_ctor_set(v___x_1947_, 1, v___x_1946_);
return v___x_1947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__1___boxed(lean_object* v_x_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__1(v_x_1948_);
lean_dec(v_x_1948_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(lean_object* v_x_1950_){
_start:
{
if (lean_obj_tag(v_x_1950_) == 0)
{
lean_object* v___x_1951_; 
v___x_1951_ = lean_box(0);
return v___x_1951_;
}
else
{
lean_object* v_val_1952_; 
v_val_1952_ = lean_ctor_get(v_x_1950_, 0);
lean_inc(v_val_1952_);
lean_dec_ref_known(v_x_1950_, 1);
if (lean_obj_tag(v_val_1952_) == 0)
{
lean_object* v_value_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
v_value_1953_ = lean_ctor_get(v_val_1952_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_val_1952_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v_val_1952_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_value_1953_);
lean_dec(v_val_1952_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
lean_ctor_set_tag(v___x_1955_, 6);
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_value_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
else
{
lean_object* v_value_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
v_value_1961_ = lean_ctor_get(v_val_1952_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v_val_1952_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v_val_1952_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_value_1961_);
lean_dec(v_val_1952_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
lean_ctor_set_tag(v___x_1963_, 4);
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_value_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__0(lean_object* v_x_1969_){
_start:
{
if (lean_obj_tag(v_x_1969_) == 0)
{
lean_object* v___x_1970_; 
v___x_1970_ = lean_box(0);
return v___x_1970_;
}
else
{
lean_object* v_val_1971_; 
v_val_1971_ = lean_ctor_get(v_x_1969_, 0);
lean_inc(v_val_1971_);
lean_dec_ref_known(v_x_1969_, 1);
if (lean_obj_tag(v_val_1971_) == 0)
{
lean_object* v_value_1972_; lean_object* v_etagMatches_1973_; lean_object* v_etagDoesNotMatch_1974_; lean_object* v_uploadedBefore_1975_; lean_object* v_uploadedAfter_1976_; lean_object* v_secondsGranularity_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v_value_1972_ = lean_ctor_get(v_val_1971_, 0);
lean_inc_ref(v_value_1972_);
lean_dec_ref_known(v_val_1971_, 1);
v_etagMatches_1973_ = lean_ctor_get(v_value_1972_, 0);
lean_inc(v_etagMatches_1973_);
v_etagDoesNotMatch_1974_ = lean_ctor_get(v_value_1972_, 1);
lean_inc(v_etagDoesNotMatch_1974_);
v_uploadedBefore_1975_ = lean_ctor_get(v_value_1972_, 2);
lean_inc(v_uploadedBefore_1975_);
v_uploadedAfter_1976_ = lean_ctor_get(v_value_1972_, 3);
lean_inc(v_uploadedAfter_1976_);
v_secondsGranularity_1977_ = lean_ctor_get(v_value_1972_, 4);
lean_inc(v_secondsGranularity_1977_);
lean_dec_ref(v_value_1972_);
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__0));
v___x_1979_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_etagMatches_1973_);
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1978_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__1));
v___x_1982_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_etagDoesNotMatch_1974_);
v___x_1983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1981_);
lean_ctor_set(v___x_1983_, 1, v___x_1982_);
v___x_1984_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__2));
v___x_1985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
lean_ctor_set(v___x_1985_, 1, v_uploadedBefore_1975_);
v___x_1986_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__3));
v___x_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1986_);
lean_ctor_set(v___x_1987_, 1, v_uploadedAfter_1976_);
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Conditional___lam__0___closed__4));
v___x_1989_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_secondsGranularity_1977_);
lean_dec(v_secondsGranularity_1977_);
v___x_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1988_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
v___x_1991_ = lean_unsigned_to_nat(5u);
v___x_1992_ = lean_mk_empty_array_with_capacity(v___x_1991_);
v___x_1993_ = lean_array_push(v___x_1992_, v___x_1980_);
v___x_1994_ = lean_array_push(v___x_1993_, v___x_1983_);
v___x_1995_ = lean_array_push(v___x_1994_, v___x_1985_);
v___x_1996_ = lean_array_push(v___x_1995_, v___x_1987_);
v___x_1997_ = lean_array_push(v___x_1996_, v___x_1990_);
v___x_1998_ = l_Lasm_JS_Web_Support_fields(v___x_1997_);
lean_dec_ref(v___x_1997_);
return v___x_1998_;
}
else
{
lean_object* v_value_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v_value_1999_ = lean_ctor_get(v_val_1971_, 0);
lean_inc(v_value_1999_);
lean_dec_ref_known(v_val_1971_, 1);
v___x_2000_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2001_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2001_, 0, v_value_1999_);
lean_ctor_set(v___x_2001_, 1, v___x_2000_);
return v___x_2001_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0(lean_object* v_x_2002_){
_start:
{
if (lean_obj_tag(v_x_2002_) == 0)
{
lean_object* v___x_2003_; 
v___x_2003_ = lean_box(0);
return v___x_2003_;
}
else
{
lean_object* v_val_2004_; lean_object* v_onlyIf_2005_; lean_object* v_range_2006_; lean_object* v_ssecKey_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v_val_2004_ = lean_ctor_get(v_x_2002_, 0);
lean_inc(v_val_2004_);
lean_dec_ref_known(v_x_2002_, 1);
v_onlyIf_2005_ = lean_ctor_get(v_val_2004_, 0);
lean_inc(v_onlyIf_2005_);
v_range_2006_ = lean_ctor_get(v_val_2004_, 1);
lean_inc(v_range_2006_);
v_ssecKey_2007_ = lean_ctor_get(v_val_2004_, 2);
lean_inc(v_ssecKey_2007_);
lean_dec(v_val_2004_);
v___x_2008_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0));
v___x_2009_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__0(v_onlyIf_2005_);
v___x_2010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2010_, 0, v___x_2008_);
lean_ctor_set(v___x_2010_, 1, v___x_2009_);
v___x_2011_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1));
v___x_2012_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__1(v_range_2006_);
lean_dec(v_range_2006_);
v___x_2013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2011_);
lean_ctor_set(v___x_2013_, 1, v___x_2012_);
v___x_2014_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_2015_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(v_ssecKey_2007_);
v___x_2016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2014_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v___x_2017_ = lean_unsigned_to_nat(3u);
v___x_2018_ = lean_mk_empty_array_with_capacity(v___x_2017_);
v___x_2019_ = lean_array_push(v___x_2018_, v___x_2010_);
v___x_2020_ = lean_array_push(v___x_2019_, v___x_2013_);
v___x_2021_ = lean_array_push(v___x_2020_, v___x_2016_);
v___x_2022_ = l_Lasm_JS_Web_Support_fields(v___x_2021_);
lean_dec_ref(v___x_2021_);
return v___x_2022_;
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4(uint8_t v_await_2023_, uint64_t v_extra_2024_){
_start:
{
uint64_t v___x_2025_; uint64_t v___y_2027_; 
v___x_2025_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_2023_ == 0)
{
uint64_t v___x_2030_; 
v___x_2030_ = 0ULL;
v___y_2027_ = v___x_2030_;
goto v___jp_2026_;
}
else
{
uint64_t v___x_2031_; 
v___x_2031_ = 2ULL;
v___y_2027_ = v___x_2031_;
goto v___jp_2026_;
}
v___jp_2026_:
{
uint64_t v___x_2028_; uint64_t v___x_2029_; 
v___x_2028_ = lean_uint64_lor(v___x_2025_, v___y_2027_);
v___x_2029_ = lean_uint64_lor(v___x_2028_, v_extra_2024_);
return v___x_2029_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4___boxed(lean_object* v_await_2032_, lean_object* v_extra_2033_){
_start:
{
uint8_t v_await_boxed_2034_; uint64_t v_extra_boxed_2035_; uint64_t v_res_2036_; lean_object* v_r_2037_; 
v_await_boxed_2034_ = lean_unbox(v_await_2032_);
v_extra_boxed_2035_ = lean_unbox_uint64(v_extra_2033_);
lean_dec_ref(v_extra_2033_);
v_res_2036_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4(v_await_boxed_2034_, v_extra_boxed_2035_);
v_r_2037_ = lean_box_uint64(v_res_2036_);
return v_r_2037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6(lean_object* v_context_2039_, lean_object* v_d_2040_){
_start:
{
lean_object* v___y_2046_; lean_object* v___y_2047_; 
switch(lean_obj_tag(v_d_2040_))
{
case 1:
{
goto v___jp_2042_;
}
case 0:
{
goto v___jp_2042_;
}
default: 
{
if (lean_obj_tag(v_d_2040_) == 9)
{
lean_object* v_value_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v_value_2051_ = lean_ctor_get(v_d_2040_, 0);
lean_inc(v_value_2051_);
lean_dec_ref_known(v_d_2040_, 2);
v___x_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2052_, 0, v_value_2051_);
v___x_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
return v___x_2053_;
}
else
{
lean_object* v___x_2054_; lean_object* v_received_2056_; 
v___x_2054_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
if (lean_obj_tag(v_d_2040_) == 9)
{
lean_object* v_value_2070_; lean_object* v_description_2071_; uint8_t v___x_2072_; 
v_value_2070_ = lean_ctor_get(v_d_2040_, 0);
v_description_2071_ = lean_ctor_get(v_d_2040_, 1);
v___x_2072_ = lean_string_dec_eq(v_description_2071_, v___x_2054_);
if (v___x_2072_ == 0)
{
goto v___jp_2068_;
}
else
{
uint32_t v___x_2073_; uint64_t v___x_2074_; lean_object* v___x_2075_; uint32_t v___x_2076_; lean_object* v___x_2077_; 
lean_inc_n(v_value_2070_, 2);
lean_dec_ref_known(v_d_2040_, 2);
v___x_2073_ = 206;
v___x_2074_ = 0ULL;
v___x_2075_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2075_, 0, v_value_2070_);
lean_ctor_set(v___x_2075_, 1, v___x_2054_);
v___x_2076_ = lasm_js_value_handle(v_value_2070_);
lean_dec(v_value_2070_);
v___x_2077_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2073_, v___x_2074_, v___x_2075_, v___x_2076_);
lean_dec_ref_known(v___x_2075_, 2);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; uint8_t v___x_2079_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc(v_a_2078_);
lean_dec_ref_known(v___x_2077_, 1);
v___x_2079_ = lean_string_validate_utf8(v_a_2078_);
if (v___x_2079_ == 0)
{
lean_object* v___x_2080_; lean_object* v___x_2081_; 
lean_dec(v_a_2078_);
v___x_2080_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_2081_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2080_);
v_received_2056_ = v___x_2081_;
goto v___jp_2055_;
}
else
{
lean_object* v___x_2082_; 
v___x_2082_ = lean_string_from_utf8_unchecked(v_a_2078_);
v_received_2056_ = v___x_2082_;
goto v___jp_2055_;
}
}
else
{
lean_object* v___x_2083_; 
lean_dec_ref_known(v___x_2077_, 1);
v___x_2083_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v_received_2056_ = v___x_2083_;
goto v___jp_2055_;
}
}
}
else
{
goto v___jp_2068_;
}
v___jp_2055_:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; 
v___x_2057_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_2058_ = lean_string_append(v___x_2057_, v_context_2039_);
v___x_2059_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_2060_ = lean_string_append(v___x_2058_, v___x_2059_);
v___x_2061_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6___closed__0));
v___x_2062_ = lean_string_append(v___x_2060_, v___x_2061_);
v___x_2063_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_2064_ = lean_string_append(v___x_2062_, v___x_2063_);
v___x_2065_ = lean_string_append(v___x_2064_, v_received_2056_);
lean_dec_ref(v_received_2056_);
v___x_2066_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_2066_ == 0)
{
lean_object* v___x_2067_; 
v___x_2067_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___y_2046_ = v___x_2065_;
v___y_2047_ = v___x_2067_;
goto v___jp_2045_;
}
else
{
v___y_2046_ = v___x_2065_;
v___y_2047_ = v___x_2054_;
goto v___jp_2045_;
}
}
v___jp_2068_:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lasm_JS_Data_describe(v_d_2040_);
v_received_2056_ = v___x_2069_;
goto v___jp_2055_;
}
}
}
}
v___jp_2042_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = lean_box(0);
v___x_2044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
return v___x_2044_;
}
v___jp_2045_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2048_ = lean_string_append(v___y_2046_, v___y_2047_);
v___x_2049_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2048_);
v___x_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
return v___x_2050_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6___boxed(lean_object* v_context_2084_, lean_object* v_d_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6(v_context_2084_, v_d_2085_);
lean_dec_ref(v_context_2084_);
return v_res_2087_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0(lean_object* v_context_2088_, lean_object* v_x_2089_){
_start:
{
lean_object* v_val_2092_; 
if (lean_obj_tag(v_x_2089_) == 0)
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2102_; 
v_a_2094_ = lean_ctor_get(v_x_2089_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v_x_2089_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2096_ = v_x_2089_;
v_isShared_2097_ = v_isSharedCheck_2102_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v_x_2089_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2102_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2094_);
v___x_2099_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2100_; 
v___x_2100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2099_);
return v___x_2100_;
}
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2116_; 
v_a_2103_ = lean_ctor_get(v_x_2089_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v_x_2089_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2105_ = v_x_2089_;
v_isShared_2106_ = v_isSharedCheck_2116_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v_x_2089_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2116_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5_spec__6(v_context_2088_, v_a_2103_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2110_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2107_, 1);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v_a_2108_);
v___x_2110_ = v___x_2105_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2108_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
v_val_2092_ = v___x_2110_;
goto v___jp_2091_;
}
}
else
{
lean_object* v_a_2112_; lean_object* v___x_2114_; 
v_a_2112_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2112_);
lean_dec_ref_known(v___x_2107_, 1);
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 0);
lean_ctor_set(v___x_2105_, 0, v_a_2112_);
v___x_2114_ = v___x_2105_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2112_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
v_val_2092_ = v___x_2114_;
goto v___jp_2091_;
}
}
}
}
v___jp_2091_:
{
lean_object* v___x_2093_; 
v___x_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2093_, 0, v_val_2092_);
return v___x_2093_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0___boxed(lean_object* v_context_2117_, lean_object* v_x_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0(v_context_2117_, v_x_2118_);
lean_dec_ref(v_context_2117_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5(lean_object* v_context_2121_, uint32_t v_op_2122_, uint64_t v_flags_2123_, lean_object* v_payload_2124_, lean_object* v_failurePrefix_2125_){
_start:
{
lean_object* v___f_2127_; lean_object* v___f_2128_; lean_object* v___f_2129_; lean_object* v___f_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___f_2133_; lean_object* v___f_2134_; lean_object* v___x_2135_; uint8_t v___x_2136_; lean_object* v_val_2138_; lean_object* v___x_2141_; 
v___f_2127_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2127_, 0, v_context_2121_);
v___f_2128_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2128_, 0, v___f_2127_);
v___f_2129_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2129_, 0, v___f_2128_);
lean_inc_ref(v_failurePrefix_2125_);
v___f_2130_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2130_, 0, v_failurePrefix_2125_);
v___x_2131_ = lean_box_uint32(v_op_2122_);
v___x_2132_ = lean_box_uint64(v_flags_2123_);
lean_inc_ref(v___f_2129_);
v___f_2133_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2133_, 0, v_failurePrefix_2125_);
lean_closure_set(v___f_2133_, 1, v___x_2131_);
lean_closure_set(v___f_2133_, 2, v___x_2132_);
lean_closure_set(v___f_2133_, 3, v_payload_2124_);
lean_closure_set(v___f_2133_, 4, v___f_2130_);
lean_closure_set(v___f_2133_, 5, v___f_2129_);
lean_closure_set(v___f_2133_, 6, v___f_2129_);
v___f_2134_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2134_, 0, v___f_2133_);
v___x_2135_ = lean_unsigned_to_nat(0u);
v___x_2136_ = 0;
v___x_2141_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2149_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2144_ = v___x_2141_;
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_a_2142_);
lean_dec(v___x_2141_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2147_; 
if (v_isShared_2145_ == 0)
{
lean_ctor_set_tag(v___x_2144_, 1);
v___x_2147_ = v___x_2144_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_a_2142_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
v_val_2138_ = v___x_2147_;
goto v___jp_2137_;
}
}
}
else
{
lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2157_; 
v_a_2150_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2152_ = v___x_2141_;
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_dec(v___x_2141_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
lean_ctor_set_tag(v___x_2152_, 0);
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_a_2150_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
v_val_2138_ = v___x_2155_;
goto v___jp_2137_;
}
}
}
v___jp_2137_:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2139_, 0, v_val_2138_);
v___x_2140_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2135_, v___x_2136_, v___x_2139_, v___f_2134_);
return v___x_2140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5___boxed(lean_object* v_context_2158_, lean_object* v_op_2159_, lean_object* v_flags_2160_, lean_object* v_payload_2161_, lean_object* v_failurePrefix_2162_, lean_object* v_a_2163_){
_start:
{
uint32_t v_op_boxed_2164_; uint64_t v_flags_boxed_2165_; lean_object* v_res_2166_; 
v_op_boxed_2164_ = lean_unbox_uint32(v_op_2159_);
lean_dec(v_op_2159_);
v_flags_boxed_2165_ = lean_unbox_uint64(v_flags_2160_);
lean_dec_ref(v_flags_2160_);
v_res_2166_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5(v_context_2158_, v_op_boxed_2164_, v_flags_boxed_2165_, v_payload_2161_, v_failurePrefix_2162_);
return v_res_2166_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2167_; uint8_t v___x_2168_; uint64_t v___x_2169_; 
v___x_2167_ = 8ULL;
v___x_2168_ = 0;
v___x_2169_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__4(v___x_2168_, v___x_2167_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1(lean_object* v_o_2170_, lean_object* v_name_2171_, lean_object* v_args_2172_){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; uint32_t v___x_2179_; uint64_t v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2174_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2175_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2175_, 0, v_o_2170_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
lean_inc_ref(v_name_2171_);
v___x_2176_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2176_, 0, v_name_2171_);
v___x_2177_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_2178_ = lean_string_append(v___x_2177_, v_name_2171_);
lean_dec_ref(v_name_2171_);
v___x_2179_ = 205;
v___x_2180_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___closed__0);
v___x_2181_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2181_, 0, v_args_2172_);
v___x_2182_ = lean_unsigned_to_nat(3u);
v___x_2183_ = lean_mk_empty_array_with_capacity(v___x_2182_);
v___x_2184_ = lean_array_push(v___x_2183_, v___x_2175_);
v___x_2185_ = lean_array_push(v___x_2184_, v___x_2176_);
v___x_2186_ = lean_array_push(v___x_2185_, v___x_2181_);
v___x_2187_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
v___x_2188_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1_spec__5(v___x_2178_, v___x_2179_, v___x_2180_, v___x_2187_, v___x_2174_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1___boxed(lean_object* v_o_2189_, lean_object* v_name_2190_, lean_object* v_args_2191_, lean_object* v___y_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1(v_o_2189_, v_name_2190_, v_args_2191_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_get(lean_object* v_self_2195_, lean_object* v_key_2196_, lean_object* v_options_2197_){
_start:
{
lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2199_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_get___closed__0));
v___x_2200_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_key_2196_);
v___x_2201_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0(v_options_2197_);
v___x_2202_ = lean_unsigned_to_nat(2u);
v___x_2203_ = lean_mk_empty_array_with_capacity(v___x_2202_);
v___x_2204_ = lean_array_push(v___x_2203_, v___x_2200_);
v___x_2205_ = lean_array_push(v___x_2204_, v___x_2201_);
v___x_2206_ = l_Lasm_JS_Web_Support_args(v___x_2205_);
v___x_2207_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__1(v_self_2195_, v___x_2199_, v___x_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_get___boxed(lean_object* v_self_2208_, lean_object* v_key_2209_, lean_object* v_options_2210_, lean_object* v_a_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Lasm_JS_Cloudflare_R2Bucket_get(v_self_2208_, v_key_2209_, v_options_2210_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0(lean_object* v_x_2213_){
_start:
{
if (lean_obj_tag(v_x_2213_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2223_; 
v_a_2215_ = lean_ctor_get(v_x_2213_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_x_2213_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2217_ = v_x_2213_;
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v_x_2213_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
lean_object* v___x_2221_; 
v___x_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
return v___x_2221_;
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2232_; 
v_a_2224_ = lean_ctor_get(v_x_2213_, 0);
v_isSharedCheck_2232_ = !lean_is_exclusive(v_x_2213_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2226_ = v_x_2213_;
v_isShared_2227_ = v_isSharedCheck_2232_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v_x_2213_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2232_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
lean_object* v___x_2230_; 
v___x_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
return v___x_2230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0___boxed(lean_object* v_x_2233_, lean_object* v___y_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l_Lasm_JS_Cloudflare_R2Bucket_put___lam__0(v_x_2233_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(lean_object* v_x_2236_){
_start:
{
if (lean_obj_tag(v_x_2236_) == 0)
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_box(0);
return v___x_2237_;
}
else
{
lean_object* v_val_2238_; 
v_val_2238_ = lean_ctor_get(v_x_2236_, 0);
lean_inc(v_val_2238_);
lean_dec_ref_known(v_x_2236_, 1);
if (lean_obj_tag(v_val_2238_) == 0)
{
lean_object* v_value_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
v_value_2239_ = lean_ctor_get(v_val_2238_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_val_2238_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v_val_2238_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_value_2239_);
lean_dec(v_val_2238_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
lean_ctor_set_tag(v___x_2241_, 4);
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_value_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
else
{
lean_object* v_value_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2254_; 
v_value_2247_ = lean_ctor_get(v_val_2238_, 0);
v_isSharedCheck_2254_ = !lean_is_exclusive(v_val_2238_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2249_ = v_val_2238_;
v_isShared_2250_ = v_isSharedCheck_2254_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_value_2247_);
lean_dec(v_val_2238_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2254_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2252_; 
if (v_isShared_2250_ == 0)
{
lean_ctor_set_tag(v___x_2249_, 6);
v___x_2252_ = v___x_2249_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v_value_2247_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__0(lean_object* v_x_2255_){
_start:
{
if (lean_obj_tag(v_x_2255_) == 0)
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_box(0);
return v___x_2256_;
}
else
{
lean_object* v_val_2257_; 
v_val_2257_ = lean_ctor_get(v_x_2255_, 0);
lean_inc(v_val_2257_);
lean_dec_ref_known(v_x_2255_, 1);
if (lean_obj_tag(v_val_2257_) == 0)
{
lean_object* v_value_2258_; lean_object* v_contentType_2259_; lean_object* v_contentLanguage_2260_; lean_object* v_contentDisposition_2261_; lean_object* v_contentEncoding_2262_; lean_object* v_cacheControl_2263_; lean_object* v_cacheExpiry_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v_value_2258_ = lean_ctor_get(v_val_2257_, 0);
lean_inc_ref(v_value_2258_);
lean_dec_ref_known(v_val_2257_, 1);
v_contentType_2259_ = lean_ctor_get(v_value_2258_, 0);
lean_inc(v_contentType_2259_);
v_contentLanguage_2260_ = lean_ctor_get(v_value_2258_, 1);
lean_inc(v_contentLanguage_2260_);
v_contentDisposition_2261_ = lean_ctor_get(v_value_2258_, 2);
lean_inc(v_contentDisposition_2261_);
v_contentEncoding_2262_ = lean_ctor_get(v_value_2258_, 3);
lean_inc(v_contentEncoding_2262_);
v_cacheControl_2263_ = lean_ctor_get(v_value_2258_, 4);
lean_inc(v_cacheControl_2263_);
v_cacheExpiry_2264_ = lean_ctor_get(v_value_2258_, 5);
lean_inc(v_cacheExpiry_2264_);
lean_dec_ref(v_value_2258_);
v___x_2265_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
v___x_2266_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentType_2259_);
v___x_2267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2265_);
lean_ctor_set(v___x_2267_, 1, v___x_2266_);
v___x_2268_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
v___x_2269_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentLanguage_2260_);
v___x_2270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2268_);
lean_ctor_set(v___x_2270_, 1, v___x_2269_);
v___x_2271_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
v___x_2272_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentDisposition_2261_);
v___x_2273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2271_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
v___x_2274_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
v___x_2275_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_contentEncoding_2262_);
v___x_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2274_);
lean_ctor_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
v___x_2278_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_cacheControl_2263_);
v___x_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2277_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
v___x_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
lean_ctor_set(v___x_2281_, 1, v_cacheExpiry_2264_);
v___x_2282_ = lean_unsigned_to_nat(6u);
v___x_2283_ = lean_mk_empty_array_with_capacity(v___x_2282_);
v___x_2284_ = lean_array_push(v___x_2283_, v___x_2267_);
v___x_2285_ = lean_array_push(v___x_2284_, v___x_2270_);
v___x_2286_ = lean_array_push(v___x_2285_, v___x_2273_);
v___x_2287_ = lean_array_push(v___x_2286_, v___x_2276_);
v___x_2288_ = lean_array_push(v___x_2287_, v___x_2279_);
v___x_2289_ = lean_array_push(v___x_2288_, v___x_2281_);
v___x_2290_ = l_Lasm_JS_Web_Support_fields(v___x_2289_);
lean_dec_ref(v___x_2289_);
return v___x_2290_;
}
else
{
lean_object* v_value_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_value_2291_ = lean_ctor_get(v_val_2257_, 0);
lean_inc(v_value_2291_);
lean_dec_ref_known(v_val_2257_, 1);
v___x_2292_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2293_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2293_, 0, v_value_2291_);
lean_ctor_set(v___x_2293_, 1, v___x_2292_);
return v___x_2293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__1(lean_object* v_x_2294_){
_start:
{
if (lean_obj_tag(v_x_2294_) == 0)
{
lean_object* v___x_2295_; 
v___x_2295_ = lean_box(0);
return v___x_2295_;
}
else
{
lean_object* v_val_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2306_; 
v_val_2296_ = lean_ctor_get(v_x_2294_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v_x_2294_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2298_ = v_x_2294_;
v_isShared_2299_ = v_isSharedCheck_2306_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_val_2296_);
lean_dec(v_x_2294_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2306_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
size_t v_sz_2300_; size_t v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2304_; 
v_sz_2300_ = lean_array_size(v_val_2296_);
v___x_2301_ = ((size_t)0ULL);
v___x_2302_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__2(v_sz_2300_, v___x_2301_, v_val_2296_);
if (v_isShared_2299_ == 0)
{
lean_ctor_set_tag(v___x_2298_, 8);
lean_ctor_set(v___x_2298_, 0, v___x_2302_);
v___x_2304_ = v___x_2298_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v___x_2302_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0(lean_object* v_x_2307_){
_start:
{
if (lean_obj_tag(v_x_2307_) == 0)
{
lean_object* v___x_2308_; 
v___x_2308_ = lean_box(0);
return v___x_2308_;
}
else
{
lean_object* v_val_2309_; lean_object* v_onlyIf_2310_; lean_object* v_httpMetadata_2311_; lean_object* v_customMetadata_2312_; lean_object* v_md5_2313_; lean_object* v_sha1_2314_; lean_object* v_sha256_2315_; lean_object* v_sha384_2316_; lean_object* v_sha512_2317_; lean_object* v_storageClass_2318_; lean_object* v_ssecKey_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v_val_2309_ = lean_ctor_get(v_x_2307_, 0);
lean_inc(v_val_2309_);
lean_dec_ref_known(v_x_2307_, 1);
v_onlyIf_2310_ = lean_ctor_get(v_val_2309_, 0);
lean_inc(v_onlyIf_2310_);
v_httpMetadata_2311_ = lean_ctor_get(v_val_2309_, 1);
lean_inc(v_httpMetadata_2311_);
v_customMetadata_2312_ = lean_ctor_get(v_val_2309_, 2);
lean_inc(v_customMetadata_2312_);
v_md5_2313_ = lean_ctor_get(v_val_2309_, 3);
lean_inc(v_md5_2313_);
v_sha1_2314_ = lean_ctor_get(v_val_2309_, 4);
lean_inc(v_sha1_2314_);
v_sha256_2315_ = lean_ctor_get(v_val_2309_, 5);
lean_inc(v_sha256_2315_);
v_sha384_2316_ = lean_ctor_get(v_val_2309_, 6);
lean_inc(v_sha384_2316_);
v_sha512_2317_ = lean_ctor_get(v_val_2309_, 7);
lean_inc(v_sha512_2317_);
v_storageClass_2318_ = lean_ctor_get(v_val_2309_, 8);
lean_inc(v_storageClass_2318_);
v_ssecKey_2319_ = lean_ctor_get(v_val_2309_, 9);
lean_inc(v_ssecKey_2319_);
lean_dec(v_val_2309_);
v___x_2320_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__0));
v___x_2321_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__0(v_onlyIf_2310_);
v___x_2322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2320_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
v___x_2323_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_2324_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__0(v_httpMetadata_2311_);
v___x_2325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2323_);
lean_ctor_set(v___x_2325_, 1, v___x_2324_);
v___x_2326_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_2327_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__1(v_customMetadata_2312_);
v___x_2328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2326_);
lean_ctor_set(v___x_2328_, 1, v___x_2327_);
v___x_2329_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
v___x_2330_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_md5_2313_);
v___x_2331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2329_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
v___x_2332_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
v___x_2333_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_sha1_2314_);
v___x_2334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2332_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
v___x_2336_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_sha256_2315_);
v___x_2337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2335_);
lean_ctor_set(v___x_2337_, 1, v___x_2336_);
v___x_2338_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
v___x_2339_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_sha384_2316_);
v___x_2340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2338_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v___x_2341_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
v___x_2342_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__2(v_sha512_2317_);
v___x_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2341_);
lean_ctor_set(v___x_2343_, 1, v___x_2342_);
v___x_2344_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_2345_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_storageClass_2318_);
v___x_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2344_);
lean_ctor_set(v___x_2346_, 1, v___x_2345_);
v___x_2347_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_2348_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(v_ssecKey_2319_);
v___x_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2347_);
lean_ctor_set(v___x_2349_, 1, v___x_2348_);
v___x_2350_ = lean_unsigned_to_nat(10u);
v___x_2351_ = lean_mk_empty_array_with_capacity(v___x_2350_);
v___x_2352_ = lean_array_push(v___x_2351_, v___x_2322_);
v___x_2353_ = lean_array_push(v___x_2352_, v___x_2325_);
v___x_2354_ = lean_array_push(v___x_2353_, v___x_2328_);
v___x_2355_ = lean_array_push(v___x_2354_, v___x_2331_);
v___x_2356_ = lean_array_push(v___x_2355_, v___x_2334_);
v___x_2357_ = lean_array_push(v___x_2356_, v___x_2337_);
v___x_2358_ = lean_array_push(v___x_2357_, v___x_2340_);
v___x_2359_ = lean_array_push(v___x_2358_, v___x_2343_);
v___x_2360_ = lean_array_push(v___x_2359_, v___x_2346_);
v___x_2361_ = lean_array_push(v___x_2360_, v___x_2349_);
v___x_2362_ = l_Lasm_JS_Web_Support_fields(v___x_2361_);
lean_dec_ref(v___x_2361_);
return v___x_2362_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put(lean_object* v_self_2365_, lean_object* v_key_2366_, lean_object* v_value_2367_, lean_object* v_options_2368_){
_start:
{
lean_object* v___f_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___y_2374_; 
v___f_2370_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0));
v___x_2371_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__1));
v___x_2372_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2372_, 0, v_key_2366_);
if (lean_obj_tag(v_value_2367_) == 0)
{
lean_object* v___x_2386_; 
v___x_2386_ = lean_box(1);
v___y_2374_ = v___x_2386_;
goto v___jp_2373_;
}
else
{
lean_object* v_val_2387_; 
v_val_2387_ = lean_ctor_get(v_value_2367_, 0);
lean_inc(v_val_2387_);
lean_dec_ref_known(v_value_2367_, 1);
switch(lean_obj_tag(v_val_2387_))
{
case 1:
{
lean_object* v_value_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
v_value_2388_ = lean_ctor_get(v_val_2387_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v_val_2387_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v_val_2387_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_value_2388_);
lean_dec(v_val_2387_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
lean_ctor_set_tag(v___x_2390_, 4);
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_value_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
v___y_2374_ = v___x_2393_;
goto v___jp_2373_;
}
}
}
case 3:
{
lean_object* v_value_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2403_; 
v_value_2396_ = lean_ctor_get(v_val_2387_, 0);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_val_2387_);
if (v_isSharedCheck_2403_ == 0)
{
v___x_2398_ = v_val_2387_;
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_value_2396_);
lean_dec(v_val_2387_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2403_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2401_; 
if (v_isShared_2399_ == 0)
{
lean_ctor_set_tag(v___x_2398_, 6);
v___x_2401_ = v___x_2398_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_value_2396_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
v___y_2374_ = v___x_2401_;
goto v___jp_2373_;
}
}
}
default: 
{
lean_object* v_value_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v_value_2404_ = lean_ctor_get(v_val_2387_, 0);
lean_inc(v_value_2404_);
lean_dec(v_val_2387_);
v___x_2405_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2406_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2406_, 0, v_value_2404_);
lean_ctor_set(v___x_2406_, 1, v___x_2405_);
v___y_2374_ = v___x_2406_;
goto v___jp_2373_;
}
}
}
v___jp_2373_:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; uint8_t v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2375_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0(v_options_2368_);
v___x_2376_ = lean_unsigned_to_nat(3u);
v___x_2377_ = lean_mk_empty_array_with_capacity(v___x_2376_);
v___x_2378_ = lean_array_push(v___x_2377_, v___x_2372_);
v___x_2379_ = lean_array_push(v___x_2378_, v___y_2374_);
v___x_2380_ = lean_array_push(v___x_2379_, v___x_2375_);
v___x_2381_ = l_Lasm_JS_Web_Support_args(v___x_2380_);
v___x_2382_ = lean_unsigned_to_nat(0u);
v___x_2383_ = 0;
v___x_2384_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2365_, v___x_2371_, v___x_2381_);
v___x_2385_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2382_, v___x_2383_, v___x_2384_, v___f_2370_);
return v___x_2385_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_put___boxed(lean_object* v_self_2407_, lean_object* v_key_2408_, lean_object* v_value_2409_, lean_object* v_options_2410_, lean_object* v_a_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Lasm_JS_Cloudflare_R2Bucket_put(v_self_2407_, v_key_2408_, v_value_2409_, v_options_2410_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload_spec__0(lean_object* v_x_2413_){
_start:
{
if (lean_obj_tag(v_x_2413_) == 0)
{
lean_object* v___x_2414_; 
v___x_2414_ = lean_box(0);
return v___x_2414_;
}
else
{
lean_object* v_val_2415_; lean_object* v_httpMetadata_2416_; lean_object* v_customMetadata_2417_; lean_object* v_storageClass_2418_; lean_object* v_ssecKey_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v_val_2415_ = lean_ctor_get(v_x_2413_, 0);
lean_inc(v_val_2415_);
lean_dec_ref_known(v_x_2413_, 1);
v_httpMetadata_2416_ = lean_ctor_get(v_val_2415_, 0);
lean_inc(v_httpMetadata_2416_);
v_customMetadata_2417_ = lean_ctor_get(v_val_2415_, 1);
lean_inc(v_customMetadata_2417_);
v_storageClass_2418_ = lean_ctor_get(v_val_2415_, 2);
lean_inc(v_storageClass_2418_);
v_ssecKey_2419_ = lean_ctor_get(v_val_2415_, 3);
lean_inc(v_ssecKey_2419_);
lean_dec(v_val_2415_);
v___x_2420_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_2421_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__0(v_httpMetadata_2416_);
v___x_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2420_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_2424_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_put_spec__0_spec__1(v_customMetadata_2417_);
v___x_2425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2423_);
lean_ctor_set(v___x_2425_, 1, v___x_2424_);
v___x_2426_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_2427_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_storageClass_2418_);
v___x_2428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2426_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_2430_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(v_ssecKey_2419_);
v___x_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2429_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = lean_unsigned_to_nat(4u);
v___x_2433_ = lean_mk_empty_array_with_capacity(v___x_2432_);
v___x_2434_ = lean_array_push(v___x_2433_, v___x_2422_);
v___x_2435_ = lean_array_push(v___x_2434_, v___x_2425_);
v___x_2436_ = lean_array_push(v___x_2435_, v___x_2428_);
v___x_2437_ = lean_array_push(v___x_2436_, v___x_2431_);
v___x_2438_ = l_Lasm_JS_Web_Support_fields(v___x_2437_);
lean_dec_ref(v___x_2437_);
return v___x_2438_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload(lean_object* v_self_2440_, lean_object* v_key_2441_, lean_object* v_options_2442_){
_start:
{
lean_object* v___f_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; uint8_t v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___f_2444_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0));
v___x_2445_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload___closed__0));
v___x_2446_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2446_, 0, v_key_2441_);
v___x_2447_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload_spec__0(v_options_2442_);
v___x_2448_ = lean_unsigned_to_nat(2u);
v___x_2449_ = lean_mk_empty_array_with_capacity(v___x_2448_);
v___x_2450_ = lean_array_push(v___x_2449_, v___x_2446_);
v___x_2451_ = lean_array_push(v___x_2450_, v___x_2447_);
v___x_2452_ = l_Lasm_JS_Web_Support_args(v___x_2451_);
v___x_2453_ = lean_unsigned_to_nat(0u);
v___x_2454_ = 0;
v___x_2455_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2440_, v___x_2445_, v___x_2452_);
v___x_2456_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2453_, v___x_2454_, v___x_2455_, v___f_2444_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload___boxed(lean_object* v_self_2457_, lean_object* v_key_2458_, lean_object* v_options_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lasm_JS_Cloudflare_R2Bucket_createMultipartUpload(v_self_2457_, v_key_2458_, v_options_2459_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload(lean_object* v_self_2463_, lean_object* v_key_2464_, lean_object* v_uploadId_2465_){
_start:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2467_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload___closed__0));
v___x_2468_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2468_, 0, v_key_2464_);
v___x_2469_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2469_, 0, v_uploadId_2465_);
v___x_2470_ = lean_unsigned_to_nat(2u);
v___x_2471_ = lean_mk_empty_array_with_capacity(v___x_2470_);
v___x_2472_ = lean_array_push(v___x_2471_, v___x_2468_);
v___x_2473_ = lean_array_push(v___x_2472_, v___x_2469_);
v___x_2474_ = l_Lasm_JS_Web_Support_args(v___x_2473_);
v___x_2475_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2463_, v___x_2467_, v___x_2474_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2483_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2478_ = v___x_2475_;
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___x_2475_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2481_; 
if (v_isShared_2479_ == 0)
{
v___x_2481_ = v___x_2478_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_a_2476_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2491_; 
v_a_2484_ = lean_ctor_get(v___x_2475_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2475_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2486_ = v___x_2475_;
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2475_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2484_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload___boxed(lean_object* v_self_2492_, lean_object* v_key_2493_, lean_object* v_uploadId_2494_, lean_object* v_a_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l_Lasm_JS_Cloudflare_R2Bucket_resumeMultipartUpload(v_self_2492_, v_key_2493_, v_uploadId_2494_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_delete(lean_object* v_self_2498_, lean_object* v_keys_2499_){
_start:
{
lean_object* v___x_2501_; lean_object* v___y_2503_; 
v___x_2501_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_delete___closed__0));
if (lean_obj_tag(v_keys_2499_) == 0)
{
lean_object* v_value_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2516_; 
v_value_2509_ = lean_ctor_get(v_keys_2499_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_keys_2499_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2511_ = v_keys_2499_;
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_value_2509_);
lean_dec(v_keys_2499_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2514_; 
if (v_isShared_2512_ == 0)
{
lean_ctor_set_tag(v___x_2511_, 4);
v___x_2514_ = v___x_2511_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_value_2509_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
v___y_2503_ = v___x_2514_;
goto v___jp_2502_;
}
}
}
else
{
lean_object* v_value_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2527_; 
v_value_2517_ = lean_ctor_get(v_keys_2499_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v_keys_2499_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2519_ = v_keys_2499_;
v_isShared_2520_ = v_isSharedCheck_2527_;
goto v_resetjp_2518_;
}
else
{
lean_inc(v_value_2517_);
lean_dec(v_keys_2499_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2527_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
size_t v_sz_2521_; size_t v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2525_; 
v_sz_2521_ = lean_array_size(v_value_2517_);
v___x_2522_ = ((size_t)0ULL);
v___x_2523_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2521_, v___x_2522_, v_value_2517_);
if (v_isShared_2520_ == 0)
{
lean_ctor_set_tag(v___x_2519_, 7);
lean_ctor_set(v___x_2519_, 0, v___x_2523_);
v___x_2525_ = v___x_2519_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
v___y_2503_ = v___x_2525_;
goto v___jp_2502_;
}
}
}
v___jp_2502_:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2504_ = lean_unsigned_to_nat(1u);
v___x_2505_ = lean_mk_empty_array_with_capacity(v___x_2504_);
v___x_2506_ = lean_array_push(v___x_2505_, v___y_2503_);
v___x_2507_ = l_Lasm_JS_Web_Support_args(v___x_2506_);
v___x_2508_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2498_, v___x_2501_, v___x_2507_);
return v___x_2508_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_delete___boxed(lean_object* v_self_2528_, lean_object* v_keys_2529_, lean_object* v_a_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l_Lasm_JS_Cloudflare_R2Bucket_delete(v_self_2528_, v_keys_2529_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1(size_t v_sz_2532_, size_t v_i_2533_, lean_object* v_bs_2534_){
_start:
{
uint8_t v___x_2535_; 
v___x_2535_ = lean_usize_dec_lt(v_i_2533_, v_sz_2532_);
if (v___x_2535_ == 0)
{
return v_bs_2534_;
}
else
{
lean_object* v_v_2536_; lean_object* v___x_2537_; lean_object* v_bs_x27_2538_; lean_object* v___y_2540_; uint8_t v___x_2545_; 
v_v_2536_ = lean_array_uget(v_bs_2534_, v_i_2533_);
v___x_2537_ = lean_unsigned_to_nat(0u);
v_bs_x27_2538_ = lean_array_uset(v_bs_2534_, v_i_2533_, v___x_2537_);
v___x_2545_ = lean_unbox(v_v_2536_);
lean_dec(v_v_2536_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2546_; 
v___x_2546_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__1));
v___y_2540_ = v___x_2546_;
goto v___jp_2539_;
}
else
{
lean_object* v___x_2547_; 
v___x_2547_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__3));
v___y_2540_ = v___x_2547_;
goto v___jp_2539_;
}
v___jp_2539_:
{
size_t v___x_2541_; size_t v___x_2542_; lean_object* v___x_2543_; 
v___x_2541_ = ((size_t)1ULL);
v___x_2542_ = lean_usize_add(v_i_2533_, v___x_2541_);
lean_inc(v___y_2540_);
v___x_2543_ = lean_array_uset(v_bs_x27_2538_, v_i_2533_, v___y_2540_);
v_i_2533_ = v___x_2542_;
v_bs_2534_ = v___x_2543_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_2548_, lean_object* v_i_2549_, lean_object* v_bs_2550_){
_start:
{
size_t v_sz_boxed_2551_; size_t v_i_boxed_2552_; lean_object* v_res_2553_; 
v_sz_boxed_2551_ = lean_unbox_usize(v_sz_2548_);
lean_dec(v_sz_2548_);
v_i_boxed_2552_ = lean_unbox_usize(v_i_2549_);
lean_dec(v_i_2549_);
v_res_2553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1(v_sz_boxed_2551_, v_i_boxed_2552_, v_bs_2550_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0(lean_object* v_x_2554_){
_start:
{
if (lean_obj_tag(v_x_2554_) == 0)
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_box(0);
return v___x_2555_;
}
else
{
lean_object* v_val_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2566_; 
v_val_2556_ = lean_ctor_get(v_x_2554_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v_x_2554_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2558_ = v_x_2554_;
v_isShared_2559_ = v_isSharedCheck_2566_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_val_2556_);
lean_dec(v_x_2554_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2566_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
size_t v_sz_2560_; size_t v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2564_; 
v_sz_2560_ = lean_array_size(v_val_2556_);
v___x_2561_ = ((size_t)0ULL);
v___x_2562_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0_spec__1(v_sz_2560_, v___x_2561_, v_val_2556_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set_tag(v___x_2558_, 7);
lean_ctor_set(v___x_2558_, 0, v___x_2562_);
v___x_2564_ = v___x_2558_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v___x_2562_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0(lean_object* v_x_2567_){
_start:
{
if (lean_obj_tag(v_x_2567_) == 0)
{
lean_object* v___x_2568_; 
v___x_2568_ = lean_box(0);
return v___x_2568_;
}
else
{
lean_object* v_val_2569_; lean_object* v_limit_2570_; lean_object* v_prefix_2571_; lean_object* v_cursor_2572_; lean_object* v_delimiter_2573_; lean_object* v_startAfter_2574_; lean_object* v_include_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v_val_2569_ = lean_ctor_get(v_x_2567_, 0);
lean_inc(v_val_2569_);
lean_dec_ref_known(v_x_2567_, 1);
v_limit_2570_ = lean_ctor_get(v_val_2569_, 0);
lean_inc(v_limit_2570_);
v_prefix_2571_ = lean_ctor_get(v_val_2569_, 1);
lean_inc(v_prefix_2571_);
v_cursor_2572_ = lean_ctor_get(v_val_2569_, 2);
lean_inc(v_cursor_2572_);
v_delimiter_2573_ = lean_ctor_get(v_val_2569_, 3);
lean_inc(v_delimiter_2573_);
v_startAfter_2574_ = lean_ctor_get(v_val_2569_, 4);
lean_inc(v_startAfter_2574_);
v_include_2575_ = lean_ctor_get(v_val_2569_, 5);
lean_inc(v_include_2575_);
lean_dec(v_val_2569_);
v___x_2576_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__0));
v___x_2577_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_limit_2570_);
lean_dec(v_limit_2570_);
v___x_2578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__1));
v___x_2580_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_2571_);
v___x_2581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2579_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2));
v___x_2583_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_cursor_2572_);
v___x_2584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2582_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__3));
v___x_2586_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_delimiter_2573_);
v___x_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2585_);
lean_ctor_set(v___x_2587_, 1, v___x_2586_);
v___x_2588_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__4));
v___x_2589_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_startAfter_2574_);
v___x_2590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2588_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__5));
v___x_2592_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0_spec__0(v_include_2575_);
v___x_2593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2591_);
lean_ctor_set(v___x_2593_, 1, v___x_2592_);
v___x_2594_ = lean_unsigned_to_nat(6u);
v___x_2595_ = lean_mk_empty_array_with_capacity(v___x_2594_);
v___x_2596_ = lean_array_push(v___x_2595_, v___x_2578_);
v___x_2597_ = lean_array_push(v___x_2596_, v___x_2581_);
v___x_2598_ = lean_array_push(v___x_2597_, v___x_2584_);
v___x_2599_ = lean_array_push(v___x_2598_, v___x_2587_);
v___x_2600_ = lean_array_push(v___x_2599_, v___x_2590_);
v___x_2601_ = lean_array_push(v___x_2600_, v___x_2593_);
v___x_2602_ = l_Lasm_JS_Web_Support_fields(v___x_2601_);
lean_dec_ref(v___x_2601_);
return v___x_2602_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7(lean_object* v_d_2614_, lean_object* v_key_2615_){
_start:
{
if (lean_obj_tag(v_d_2614_) == 8)
{
lean_object* v___x_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2660_; 
v___x_2616_ = l_Lasm_JS_Data_field(v_d_2614_, v_key_2615_);
v_isSharedCheck_2660_ = !lean_is_exclusive(v_d_2614_);
if (v_isSharedCheck_2660_ == 0)
{
lean_object* v_unused_2661_; 
v_unused_2661_ = lean_ctor_get(v_d_2614_, 0);
lean_dec(v_unused_2661_);
v___x_2618_ = v_d_2614_;
v_isShared_2619_ = v_isSharedCheck_2660_;
goto v_resetjp_2617_;
}
else
{
lean_dec(v_d_2614_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2660_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v_a_2621_; 
if (lean_obj_tag(v___x_2616_) == 7)
{
lean_object* v_items_2646_; size_t v_sz_2647_; size_t v___x_2648_; lean_object* v___x_2649_; 
v_items_2646_ = lean_ctor_get(v___x_2616_, 0);
lean_inc_ref(v_items_2646_);
v_sz_2647_ = lean_array_size(v_items_2646_);
v___x_2648_ = ((size_t)0ULL);
v___x_2649_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_2647_, v___x_2648_, v_items_2646_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; uint8_t v___x_2654_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2649_, 1);
v___x_2651_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__6));
v___x_2652_ = lean_string_utf8_byte_size(v_a_2650_);
v___x_2653_ = lean_unsigned_to_nat(0u);
v___x_2654_ = lean_nat_dec_eq(v___x_2652_, v___x_2653_);
if (v___x_2654_ == 0)
{
lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2655_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__7));
v___x_2656_ = lean_string_append(v___x_2655_, v_a_2650_);
lean_dec(v_a_2650_);
v___x_2657_ = lean_string_append(v___x_2651_, v___x_2656_);
lean_dec_ref(v___x_2656_);
v_a_2621_ = v___x_2657_;
goto v___jp_2620_;
}
else
{
lean_dec(v_a_2650_);
v_a_2621_ = v___x_2651_;
goto v___jp_2620_;
}
}
else
{
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2658_; 
v_a_2658_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2658_);
lean_dec_ref_known(v___x_2649_, 1);
v_a_2621_ = v_a_2658_;
goto v___jp_2620_;
}
else
{
lean_dec_ref_known(v___x_2616_, 1);
lean_del_object(v___x_2618_);
return v___x_2649_;
}
}
}
else
{
lean_object* v___x_2659_; 
v___x_2659_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v_a_2621_ = v___x_2659_;
goto v___jp_2620_;
}
v___jp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; uint8_t v___x_2634_; 
v___x_2622_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_2623_ = lean_string_append(v___x_2622_, v_key_2615_);
v___x_2624_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_2625_ = lean_string_append(v___x_2623_, v___x_2624_);
v___x_2626_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__2));
v___x_2627_ = lean_string_append(v___x_2625_, v___x_2626_);
v___x_2628_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_2629_ = lean_string_append(v___x_2627_, v___x_2628_);
v___x_2630_ = l_Lasm_JS_Data_describe(v___x_2616_);
v___x_2631_ = lean_string_append(v___x_2629_, v___x_2630_);
lean_dec_ref(v___x_2630_);
v___x_2632_ = lean_string_utf8_byte_size(v_a_2621_);
v___x_2633_ = lean_unsigned_to_nat(0u);
v___x_2634_ = lean_nat_dec_eq(v___x_2632_, v___x_2633_);
if (v___x_2634_ == 0)
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2641_; 
v___x_2635_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_2636_ = lean_string_append(v___x_2635_, v_a_2621_);
lean_dec_ref(v_a_2621_);
v___x_2637_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_2638_ = lean_string_append(v___x_2636_, v___x_2637_);
v___x_2639_ = lean_string_append(v___x_2631_, v___x_2638_);
lean_dec_ref(v___x_2638_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set_tag(v___x_2618_, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2639_);
v___x_2641_ = v___x_2618_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2639_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
else
{
lean_object* v___x_2644_; 
lean_dec_ref(v_a_2621_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set_tag(v___x_2618_, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2631_);
v___x_2644_ = v___x_2618_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v___x_2631_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
}
}
}
else
{
lean_object* v___x_2662_; 
lean_dec(v_d_2614_);
v___x_2662_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__9));
return v___x_2662_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___boxed(lean_object* v_d_2663_, lean_object* v_key_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7(v_d_2663_, v_key_2664_);
lean_dec_ref(v_key_2664_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7(size_t v_sz_2668_, size_t v_i_2669_, lean_object* v_bs_2670_){
_start:
{
uint8_t v___x_2671_; 
v___x_2671_ = lean_usize_dec_lt(v_i_2669_, v_sz_2668_);
if (v___x_2671_ == 0)
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2672_, 0, v_bs_2670_);
return v___x_2672_;
}
else
{
lean_object* v_v_2673_; 
v_v_2673_ = lean_array_uget_borrowed(v_bs_2670_, v_i_2669_);
if (lean_obj_tag(v_v_2673_) == 9)
{
lean_object* v_value_2674_; lean_object* v___x_2675_; lean_object* v_bs_x27_2676_; size_t v___x_2677_; size_t v___x_2678_; lean_object* v___x_2679_; 
v_value_2674_ = lean_ctor_get(v_v_2673_, 0);
lean_inc(v_value_2674_);
v___x_2675_ = lean_unsigned_to_nat(0u);
v_bs_x27_2676_ = lean_array_uset(v_bs_2670_, v_i_2669_, v___x_2675_);
v___x_2677_ = ((size_t)1ULL);
v___x_2678_ = lean_usize_add(v_i_2669_, v___x_2677_);
v___x_2679_ = lean_array_uset(v_bs_x27_2676_, v_i_2669_, v_value_2674_);
v_i_2669_ = v___x_2678_;
v_bs_2670_ = v___x_2679_;
goto _start;
}
else
{
lean_object* v___x_2681_; 
lean_dec_ref(v_bs_2670_);
v___x_2681_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7___closed__0));
return v___x_2681_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7___boxed(lean_object* v_sz_2682_, lean_object* v_i_2683_, lean_object* v_bs_2684_){
_start:
{
size_t v_sz_boxed_2685_; size_t v_i_boxed_2686_; lean_object* v_res_2687_; 
v_sz_boxed_2685_ = lean_unbox_usize(v_sz_2682_);
lean_dec(v_sz_2682_);
v_i_boxed_2686_ = lean_unbox_usize(v_i_2683_);
lean_dec(v_i_2683_);
v_res_2687_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7(v_sz_boxed_2685_, v_i_boxed_2686_, v_bs_2684_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6(lean_object* v_d_2692_, lean_object* v_key_2693_){
_start:
{
if (lean_obj_tag(v_d_2692_) == 8)
{
lean_object* v___x_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2738_; 
v___x_2694_ = l_Lasm_JS_Data_field(v_d_2692_, v_key_2693_);
v_isSharedCheck_2738_ = !lean_is_exclusive(v_d_2692_);
if (v_isSharedCheck_2738_ == 0)
{
lean_object* v_unused_2739_; 
v_unused_2739_ = lean_ctor_get(v_d_2692_, 0);
lean_dec(v_unused_2739_);
v___x_2696_ = v_d_2692_;
v_isShared_2697_ = v_isSharedCheck_2738_;
goto v_resetjp_2695_;
}
else
{
lean_dec(v_d_2692_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2738_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v_a_2699_; 
if (lean_obj_tag(v___x_2694_) == 7)
{
lean_object* v_items_2724_; size_t v_sz_2725_; size_t v___x_2726_; lean_object* v___x_2727_; 
v_items_2724_ = lean_ctor_get(v___x_2694_, 0);
lean_inc_ref(v_items_2724_);
v_sz_2725_ = lean_array_size(v_items_2724_);
v___x_2726_ = ((size_t)0ULL);
v___x_2727_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6_spec__7(v_sz_2725_, v___x_2726_, v_items_2724_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; uint8_t v___x_2732_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2728_);
lean_dec_ref_known(v___x_2727_, 1);
v___x_2729_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__1));
v___x_2730_ = lean_string_utf8_byte_size(v_a_2728_);
v___x_2731_ = lean_unsigned_to_nat(0u);
v___x_2732_ = lean_nat_dec_eq(v___x_2730_, v___x_2731_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2733_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__7));
v___x_2734_ = lean_string_append(v___x_2733_, v_a_2728_);
lean_dec(v_a_2728_);
v___x_2735_ = lean_string_append(v___x_2729_, v___x_2734_);
lean_dec_ref(v___x_2734_);
v_a_2699_ = v___x_2735_;
goto v___jp_2698_;
}
else
{
lean_dec(v_a_2728_);
v_a_2699_ = v___x_2729_;
goto v___jp_2698_;
}
}
else
{
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2736_; 
v_a_2736_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2736_);
lean_dec_ref_known(v___x_2727_, 1);
v_a_2699_ = v_a_2736_;
goto v___jp_2698_;
}
else
{
lean_dec_ref_known(v___x_2694_, 1);
lean_del_object(v___x_2696_);
return v___x_2727_;
}
}
}
else
{
lean_object* v___x_2737_; 
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v_a_2699_ = v___x_2737_;
goto v___jp_2698_;
}
v___jp_2698_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; uint8_t v___x_2712_; 
v___x_2700_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_2701_ = lean_string_append(v___x_2700_, v_key_2693_);
v___x_2702_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_2703_ = lean_string_append(v___x_2701_, v___x_2702_);
v___x_2704_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__0));
v___x_2705_ = lean_string_append(v___x_2703_, v___x_2704_);
v___x_2706_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_2707_ = lean_string_append(v___x_2705_, v___x_2706_);
v___x_2708_ = l_Lasm_JS_Data_describe(v___x_2694_);
v___x_2709_ = lean_string_append(v___x_2707_, v___x_2708_);
lean_dec_ref(v___x_2708_);
v___x_2710_ = lean_string_utf8_byte_size(v_a_2699_);
v___x_2711_ = lean_unsigned_to_nat(0u);
v___x_2712_ = lean_nat_dec_eq(v___x_2710_, v___x_2711_);
if (v___x_2712_ == 0)
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2713_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_2714_ = lean_string_append(v___x_2713_, v_a_2699_);
lean_dec_ref(v_a_2699_);
v___x_2715_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_2716_ = lean_string_append(v___x_2714_, v___x_2715_);
v___x_2717_ = lean_string_append(v___x_2709_, v___x_2716_);
lean_dec_ref(v___x_2716_);
if (v_isShared_2697_ == 0)
{
lean_ctor_set_tag(v___x_2696_, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2717_);
v___x_2719_ = v___x_2696_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
else
{
lean_object* v___x_2722_; 
lean_dec_ref(v_a_2699_);
if (v_isShared_2697_ == 0)
{
lean_ctor_set_tag(v___x_2696_, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2709_);
v___x_2722_ = v___x_2696_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2709_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
}
else
{
lean_object* v___x_2740_; 
lean_dec(v_d_2692_);
v___x_2740_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___closed__2));
return v___x_2740_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6___boxed(lean_object* v_d_2741_, lean_object* v_key_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6(v_d_2741_, v_key_2742_);
lean_dec_ref(v_key_2742_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8(lean_object* v_d_2747_, lean_object* v_key_2748_){
_start:
{
if (lean_obj_tag(v_d_2747_) == 8)
{
lean_object* v___x_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2777_; 
v___x_2749_ = l_Lasm_JS_Data_field(v_d_2747_, v_key_2748_);
v_isSharedCheck_2777_ = !lean_is_exclusive(v_d_2747_);
if (v_isSharedCheck_2777_ == 0)
{
lean_object* v_unused_2778_; 
v_unused_2778_ = lean_ctor_get(v_d_2747_, 0);
lean_dec(v_unused_2778_);
v___x_2751_ = v_d_2747_;
v_isShared_2752_ = v_isSharedCheck_2777_;
goto v_resetjp_2750_;
}
else
{
lean_dec(v_d_2747_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2777_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
if (lean_obj_tag(v___x_2749_) == 2)
{
uint8_t v_b_2753_; lean_object* v___x_2754_; lean_object* v___x_2756_; 
v_b_2753_ = lean_ctor_get_uint8(v___x_2749_, 0);
lean_dec_ref_known(v___x_2749_, 0);
v___x_2754_ = lean_box(v_b_2753_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set_tag(v___x_2751_, 1);
lean_ctor_set(v___x_2751_, 0, v___x_2754_);
v___x_2756_ = v___x_2751_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v___x_2754_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
else
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; uint8_t v___x_2768_; 
v___x_2758_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_2759_ = lean_string_append(v___x_2758_, v_key_2748_);
v___x_2760_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_2761_ = lean_string_append(v___x_2759_, v___x_2760_);
v___x_2762_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__0));
v___x_2763_ = lean_string_append(v___x_2761_, v___x_2762_);
v___x_2764_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_2765_ = lean_string_append(v___x_2763_, v___x_2764_);
v___x_2766_ = l_Lasm_JS_Data_describe(v___x_2749_);
v___x_2767_ = lean_string_append(v___x_2765_, v___x_2766_);
lean_dec_ref(v___x_2766_);
v___x_2768_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_2768_ == 0)
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2772_; 
v___x_2769_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___x_2770_ = lean_string_append(v___x_2767_, v___x_2769_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set_tag(v___x_2751_, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2770_);
v___x_2772_ = v___x_2751_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v___x_2770_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
else
{
lean_object* v___x_2775_; 
if (v_isShared_2752_ == 0)
{
lean_ctor_set_tag(v___x_2751_, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2767_);
v___x_2775_ = v___x_2751_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v___x_2767_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
}
else
{
lean_object* v___x_2779_; 
lean_dec(v_d_2747_);
v___x_2779_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___closed__1));
return v___x_2779_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8___boxed(lean_object* v_d_2780_, lean_object* v_key_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8(v_d_2780_, v_key_2781_);
lean_dec_ref(v_key_2781_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5(lean_object* v_context_2783_, lean_object* v_d_2784_){
_start:
{
lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2793_; lean_object* v_received_2794_; lean_object* v___y_2813_; lean_object* v_a_2816_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2840_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__0));
lean_inc(v_d_2784_);
v___x_2841_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__6(v_d_2784_, v___x_2840_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
lean_dec_ref_known(v___x_2841_, 1);
v_a_2816_ = v_a_2842_;
goto v___jp_2815_;
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v_a_2843_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2843_);
lean_dec_ref_known(v___x_2841_, 1);
v___x_2844_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__1));
lean_inc(v_d_2784_);
v___x_2845_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7(v_d_2784_, v___x_2844_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; 
lean_dec(v_a_2843_);
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2845_, 1);
v_a_2816_ = v_a_2846_;
goto v___jp_2815_;
}
else
{
lean_object* v_a_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_a_2847_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2847_);
lean_dec_ref_known(v___x_2845_, 1);
v___x_2848_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___lam__0___closed__2));
lean_inc(v_d_2784_);
v___x_2849_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__8(v_d_2784_, v___x_2848_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; 
lean_dec(v_a_2847_);
lean_dec(v_a_2843_);
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2850_);
lean_dec_ref_known(v___x_2849_, 1);
v_a_2816_ = v_a_2850_;
goto v___jp_2815_;
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
v_a_2851_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2851_);
lean_dec_ref_known(v___x_2849_, 1);
v___x_2852_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptions___lam__0___closed__2));
lean_inc(v_d_2784_);
v___x_2853_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_2784_, v___x_2852_);
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v_a_2854_; 
lean_dec(v_a_2851_);
lean_dec(v_a_2847_);
lean_dec(v_a_2843_);
v_a_2854_ = lean_ctor_get(v___x_2853_, 0);
lean_inc(v_a_2854_);
lean_dec_ref_known(v___x_2853_, 1);
v_a_2816_ = v_a_2854_;
goto v___jp_2815_;
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2864_; 
lean_dec(v_d_2784_);
v_a_2855_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2857_ = v___x_2853_;
v_isShared_2858_ = v_isSharedCheck_2864_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2853_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2864_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2859_; uint8_t v___x_2860_; lean_object* v___x_2862_; 
v___x_2859_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2859_, 0, v_a_2843_);
lean_ctor_set(v___x_2859_, 1, v_a_2847_);
lean_ctor_set(v___x_2859_, 2, v_a_2855_);
v___x_2860_ = lean_unbox(v_a_2851_);
lean_dec(v_a_2851_);
lean_ctor_set_uint8(v___x_2859_, sizeof(void*)*3, v___x_2860_);
if (v_isShared_2858_ == 0)
{
lean_ctor_set_tag(v___x_2857_, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2859_);
v___x_2862_ = v___x_2857_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v___x_2859_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
}
}
v___jp_2786_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2789_ = lean_string_append(v___y_2787_, v___y_2788_);
lean_dec_ref(v___y_2788_);
v___x_2790_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2789_);
v___x_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
return v___x_2791_;
}
v___jp_2792_:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v___x_2795_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_2796_ = lean_string_append(v___x_2795_, v_context_2783_);
v___x_2797_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_2798_ = lean_string_append(v___x_2796_, v___x_2797_);
v___x_2799_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2Objects___closed__3));
v___x_2800_ = lean_string_append(v___x_2798_, v___x_2799_);
v___x_2801_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_2802_ = lean_string_append(v___x_2800_, v___x_2801_);
v___x_2803_ = lean_string_append(v___x_2802_, v_received_2794_);
lean_dec_ref(v_received_2794_);
v___x_2804_ = lean_string_utf8_byte_size(v___y_2793_);
v___x_2805_ = lean_unsigned_to_nat(0u);
v___x_2806_ = lean_nat_dec_eq(v___x_2804_, v___x_2805_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2807_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_2808_ = lean_string_append(v___x_2807_, v___y_2793_);
lean_dec_ref(v___y_2793_);
v___x_2809_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_2810_ = lean_string_append(v___x_2808_, v___x_2809_);
v___y_2787_ = v___x_2803_;
v___y_2788_ = v___x_2810_;
goto v___jp_2786_;
}
else
{
lean_object* v___x_2811_; 
lean_dec_ref(v___y_2793_);
v___x_2811_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_2787_ = v___x_2803_;
v___y_2788_ = v___x_2811_;
goto v___jp_2786_;
}
}
v___jp_2812_:
{
lean_object* v___x_2814_; 
v___x_2814_ = l_Lasm_JS_Data_describe(v_d_2784_);
v___y_2793_ = v___y_2813_;
v_received_2794_ = v___x_2814_;
goto v___jp_2792_;
}
v___jp_2815_:
{
if (lean_obj_tag(v_d_2784_) == 9)
{
lean_object* v_value_2817_; lean_object* v_description_2818_; lean_object* v___x_2819_; uint8_t v___x_2820_; 
v_value_2817_ = lean_ctor_get(v_d_2784_, 0);
v_description_2818_ = lean_ctor_get(v_d_2784_, 1);
v___x_2819_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_2820_ = lean_string_dec_eq(v_description_2818_, v___x_2819_);
if (v___x_2820_ == 0)
{
v___y_2813_ = v_a_2816_;
goto v___jp_2812_;
}
else
{
lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2837_; 
lean_inc(v_value_2817_);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_d_2784_);
if (v_isSharedCheck_2837_ == 0)
{
lean_object* v_unused_2838_; lean_object* v_unused_2839_; 
v_unused_2838_ = lean_ctor_get(v_d_2784_, 1);
lean_dec(v_unused_2838_);
v_unused_2839_ = lean_ctor_get(v_d_2784_, 0);
lean_dec(v_unused_2839_);
v___x_2822_ = v_d_2784_;
v_isShared_2823_ = v_isSharedCheck_2837_;
goto v_resetjp_2821_;
}
else
{
lean_dec(v_d_2784_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2837_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
uint32_t v___x_2824_; uint64_t v___x_2825_; lean_object* v___x_2827_; 
v___x_2824_ = 206;
v___x_2825_ = 0ULL;
lean_inc(v_value_2817_);
if (v_isShared_2823_ == 0)
{
lean_ctor_set(v___x_2822_, 1, v___x_2819_);
v___x_2827_ = v___x_2822_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_value_2817_);
lean_ctor_set(v_reuseFailAlloc_2836_, 1, v___x_2819_);
v___x_2827_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
uint32_t v___x_2828_; lean_object* v___x_2829_; 
v___x_2828_ = lasm_js_value_handle(v_value_2817_);
lean_dec(v_value_2817_);
v___x_2829_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2824_, v___x_2825_, v___x_2827_, v___x_2828_);
lean_dec_ref(v___x_2827_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_object* v_a_2830_; uint8_t v___x_2831_; 
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
lean_inc(v_a_2830_);
lean_dec_ref_known(v___x_2829_, 1);
v___x_2831_ = lean_string_validate_utf8(v_a_2830_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2832_; lean_object* v___x_2833_; 
lean_dec(v_a_2830_);
v___x_2832_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_2833_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2832_);
v___y_2793_ = v_a_2816_;
v_received_2794_ = v___x_2833_;
goto v___jp_2792_;
}
else
{
lean_object* v___x_2834_; 
v___x_2834_ = lean_string_from_utf8_unchecked(v_a_2830_);
v___y_2793_ = v_a_2816_;
v_received_2794_ = v___x_2834_;
goto v___jp_2792_;
}
}
else
{
lean_object* v___x_2835_; 
lean_dec_ref_known(v___x_2829_, 1);
v___x_2835_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_2793_ = v_a_2816_;
v_received_2794_ = v___x_2835_;
goto v___jp_2792_;
}
}
}
}
}
else
{
v___y_2813_ = v_a_2816_;
goto v___jp_2812_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5___boxed(lean_object* v_context_2865_, lean_object* v_d_2866_, lean_object* v_a_2867_){
_start:
{
lean_object* v_res_2868_; 
v_res_2868_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5(v_context_2865_, v_d_2866_);
lean_dec_ref(v_context_2865_);
return v_res_2868_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0(lean_object* v_context_2869_, lean_object* v_x_2870_){
_start:
{
lean_object* v_val_2873_; 
if (lean_obj_tag(v_x_2870_) == 0)
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2883_; 
v_a_2875_ = lean_ctor_get(v_x_2870_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v_x_2870_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2877_ = v_x_2870_;
v_isShared_2878_ = v_isSharedCheck_2883_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v_x_2870_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2883_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2881_; 
v___x_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2880_);
return v___x_2881_;
}
}
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2897_; 
v_a_2884_ = lean_ctor_get(v_x_2870_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v_x_2870_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2886_ = v_x_2870_;
v_isShared_2887_ = v_isSharedCheck_2897_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v_x_2870_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2897_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5(v_context_2869_, v_a_2884_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; lean_object* v___x_2891_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2888_, 1);
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 0, v_a_2889_);
v___x_2891_ = v___x_2886_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_a_2889_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
v_val_2873_ = v___x_2891_;
goto v___jp_2872_;
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; 
v_a_2893_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2893_);
lean_dec_ref_known(v___x_2888_, 1);
if (v_isShared_2887_ == 0)
{
lean_ctor_set_tag(v___x_2886_, 0);
lean_ctor_set(v___x_2886_, 0, v_a_2893_);
v___x_2895_ = v___x_2886_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2893_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
v_val_2873_ = v___x_2895_;
goto v___jp_2872_;
}
}
}
}
v___jp_2872_:
{
lean_object* v___x_2874_; 
v___x_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2874_, 0, v_val_2873_);
return v___x_2874_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0___boxed(lean_object* v_context_2898_, lean_object* v_x_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0(v_context_2898_, v_x_2899_);
lean_dec_ref(v_context_2898_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2(lean_object* v___f_2902_, lean_object* v_x_2903_){
_start:
{
if (lean_obj_tag(v_x_2903_) == 0)
{
lean_object* v_a_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2913_; 
lean_dec_ref(v___f_2902_);
v_a_2905_ = lean_ctor_get(v_x_2903_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v_x_2903_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2907_ = v_x_2903_;
v_isShared_2908_ = v_isSharedCheck_2913_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_a_2905_);
lean_dec(v_x_2903_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2913_;
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
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2905_);
v___x_2910_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2911_; 
v___x_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2910_);
return v___x_2911_;
}
}
}
else
{
lean_object* v_a_2914_; lean_object* v___x_2915_; 
v_a_2914_ = lean_ctor_get(v_x_2903_, 0);
lean_inc(v_a_2914_);
lean_dec_ref_known(v_x_2903_, 1);
v___x_2915_ = lean_apply_2(v___f_2902_, v_a_2914_, lean_box(0));
return v___x_2915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2___boxed(lean_object* v___f_2916_, lean_object* v_x_2917_, lean_object* v___y_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2(v___f_2916_, v_x_2917_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1(lean_object* v___f_2920_, lean_object* v_bytes_2921_){
_start:
{
lean_object* v___x_2923_; uint8_t v___x_2924_; lean_object* v_val_2926_; lean_object* v___x_2929_; 
v___x_2923_ = lean_unsigned_to_nat(0u);
v___x_2924_ = 0;
v___x_2929_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2921_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2937_; 
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2932_ = v___x_2929_;
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2929_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2935_; 
if (v_isShared_2933_ == 0)
{
lean_ctor_set_tag(v___x_2932_, 1);
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
v_val_2926_ = v___x_2935_;
goto v___jp_2925_;
}
}
}
else
{
lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2945_; 
v_a_2938_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2940_ = v___x_2929_;
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v___x_2929_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
lean_ctor_set_tag(v___x_2940_, 0);
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
v_val_2926_ = v___x_2943_;
goto v___jp_2925_;
}
}
}
v___jp_2925_:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2927_, 0, v_val_2926_);
v___x_2928_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2923_, v___x_2924_, v___x_2927_, v___f_2920_);
return v___x_2928_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1___boxed(lean_object* v___f_2946_, lean_object* v_bytes_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1(v___f_2946_, v_bytes_2947_);
lean_dec_ref(v_bytes_2947_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3(lean_object* v___f_2950_, lean_object* v_x_2951_){
_start:
{
if (lean_obj_tag(v_x_2951_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2961_; 
lean_dec_ref(v___f_2950_);
v_a_2953_ = lean_ctor_get(v_x_2951_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v_x_2951_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2955_ = v_x_2951_;
v_isShared_2956_ = v_isSharedCheck_2961_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v_x_2951_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2961_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2958_);
return v___x_2959_;
}
}
}
else
{
lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2973_; 
v_isSharedCheck_2973_ = !lean_is_exclusive(v_x_2951_);
if (v_isSharedCheck_2973_ == 0)
{
lean_object* v_unused_2974_; 
v_unused_2974_ = lean_ctor_get(v_x_2951_, 0);
lean_dec(v_unused_2974_);
v___x_2963_ = v_x_2951_;
v_isShared_2964_ = v_isSharedCheck_2973_;
goto v_resetjp_2962_;
}
else
{
lean_dec(v_x_2951_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2973_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2965_; uint8_t v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2969_; 
v___x_2965_ = lean_unsigned_to_nat(0u);
v___x_2966_ = 0;
v___x_2967_ = lean_io_promise_new();
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 0, v___x_2967_);
v___x_2969_ = v___x_2963_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2967_);
v___x_2969_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
v___x_2971_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2965_, v___x_2966_, v___x_2970_, v___f_2950_);
return v___x_2971_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3___boxed(lean_object* v___f_2975_, lean_object* v_x_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v_res_2978_; 
v_res_2978_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3(v___f_2975_, v_x_2976_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9(lean_object* v_failurePrefix_2979_, uint32_t v_op_2980_, uint64_t v_flags_2981_, lean_object* v_payload_2982_, lean_object* v___f_2983_, lean_object* v___f_2984_, lean_object* v___f_2985_, lean_object* v_x_2986_){
_start:
{
if (lean_obj_tag(v_x_2986_) == 0)
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2996_; 
lean_dec_ref(v___f_2985_);
lean_dec_ref(v___f_2984_);
lean_dec_ref(v___f_2983_);
lean_dec(v_payload_2982_);
v_a_2988_ = lean_ctor_get(v_x_2986_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v_x_2986_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2990_ = v_x_2986_;
v_isShared_2991_ = v_isSharedCheck_2996_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v_x_2986_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2996_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
lean_object* v___x_2994_; 
v___x_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2993_);
return v___x_2994_;
}
}
}
else
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3043_; 
v_a_2997_ = lean_ctor_get(v_x_2986_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v_x_2986_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_2999_ = v_x_2986_;
v_isShared_3000_ = v_isSharedCheck_3043_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v_x_2986_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3043_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
v___x_3001_ = lean_string_utf8_byte_size(v_failurePrefix_2979_);
v___x_3002_ = lean_unsigned_to_nat(0u);
v___x_3003_ = lean_nat_dec_eq(v___x_3001_, v___x_3002_);
if (v___x_3003_ == 0)
{
lean_object* v___f_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___f_3008_; lean_object* v_val_3010_; lean_object* v___x_3015_; 
lean_dec_ref(v___f_2985_);
lean_inc(v_a_2997_);
v___f_3004_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3004_, 0, v_a_2997_);
v___x_3005_ = lean_box(v___x_3003_);
v___x_3006_ = lean_box_uint32(v_op_2980_);
v___x_3007_ = lean_box_uint64(v_flags_2981_);
lean_inc(v_payload_2982_);
v___f_3008_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3008_, 0, v___x_3002_);
lean_closure_set(v___f_3008_, 1, v___x_3005_);
lean_closure_set(v___f_3008_, 2, v___f_3004_);
lean_closure_set(v___f_3008_, 3, v_a_2997_);
lean_closure_set(v___f_3008_, 4, v___x_3006_);
lean_closure_set(v___f_3008_, 5, v___x_3007_);
lean_closure_set(v___f_3008_, 6, v_payload_2982_);
v___x_3015_ = l_Lasm_JS_Wire_encodeIO(v_payload_2982_);
lean_dec(v_payload_2982_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v___x_3018_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3016_);
lean_dec_ref_known(v___x_3015_, 1);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 0, v_a_3016_);
v___x_3018_ = v___x_2999_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_a_3016_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
v_val_3010_ = v___x_3018_;
goto v___jp_3009_;
}
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; 
v_a_3020_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3020_);
lean_dec_ref_known(v___x_3015_, 1);
if (v_isShared_3000_ == 0)
{
lean_ctor_set_tag(v___x_2999_, 0);
lean_ctor_set(v___x_2999_, 0, v_a_3020_);
v___x_3022_ = v___x_2999_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3020_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
v_val_3010_ = v___x_3022_;
goto v___jp_3009_;
}
}
v___jp_3009_:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3011_, 0, v_val_3010_);
v___x_3012_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3002_, v___x_3003_, v___x_3011_, v___f_3008_);
v___x_3013_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3002_, v___x_3003_, v___x_3012_, v___f_2983_);
v___x_3014_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3002_, v___x_3003_, v___x_3013_, v___f_2984_);
return v___x_3014_;
}
}
else
{
lean_object* v___f_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___f_3027_; uint8_t v___x_3028_; lean_object* v_val_3030_; lean_object* v___x_3034_; 
lean_dec_ref(v___f_2984_);
lean_dec_ref(v___f_2983_);
lean_inc(v_a_2997_);
v___f_3024_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3024_, 0, v_a_2997_);
v___x_3025_ = lean_box_uint32(v_op_2980_);
v___x_3026_ = lean_box_uint64(v_flags_2981_);
lean_inc(v_payload_2982_);
v___f_3027_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3027_, 0, v___f_3024_);
lean_closure_set(v___f_3027_, 1, v_a_2997_);
lean_closure_set(v___f_3027_, 2, v___x_3025_);
lean_closure_set(v___f_3027_, 3, v___x_3026_);
lean_closure_set(v___f_3027_, 4, v_payload_2982_);
v___x_3028_ = 0;
v___x_3034_ = l_Lasm_JS_Wire_encodeIO(v_payload_2982_);
lean_dec(v_payload_2982_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v___x_3037_; 
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___x_3034_, 1);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 0, v_a_3035_);
v___x_3037_ = v___x_2999_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_a_3035_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
v_val_3030_ = v___x_3037_;
goto v___jp_3029_;
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; 
v_a_3039_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3039_);
lean_dec_ref_known(v___x_3034_, 1);
if (v_isShared_3000_ == 0)
{
lean_ctor_set_tag(v___x_2999_, 0);
lean_ctor_set(v___x_2999_, 0, v_a_3039_);
v___x_3041_ = v___x_2999_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3039_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
v_val_3030_ = v___x_3041_;
goto v___jp_3029_;
}
}
v___jp_3029_:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3031_, 0, v_val_3030_);
v___x_3032_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3002_, v___x_3028_, v___x_3031_, v___f_3027_);
v___x_3033_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3002_, v___x_3028_, v___x_3032_, v___f_2985_);
return v___x_3033_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9___boxed(lean_object* v_failurePrefix_3044_, lean_object* v_op_3045_, lean_object* v_flags_3046_, lean_object* v_payload_3047_, lean_object* v___f_3048_, lean_object* v___f_3049_, lean_object* v___f_3050_, lean_object* v_x_3051_, lean_object* v___y_3052_){
_start:
{
uint32_t v_op_boxed_3053_; uint64_t v_flags_boxed_3054_; lean_object* v_res_3055_; 
v_op_boxed_3053_ = lean_unbox_uint32(v_op_3045_);
lean_dec(v_op_3045_);
v_flags_boxed_3054_ = lean_unbox_uint64(v_flags_3046_);
lean_dec_ref(v_flags_3046_);
v_res_3055_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9(v_failurePrefix_3044_, v_op_boxed_3053_, v_flags_boxed_3054_, v_payload_3047_, v___f_3048_, v___f_3049_, v___f_3050_, v_x_3051_);
lean_dec_ref(v_failurePrefix_3044_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3(lean_object* v_context_3056_, uint32_t v_op_3057_, uint64_t v_flags_3058_, lean_object* v_payload_3059_, lean_object* v_failurePrefix_3060_){
_start:
{
lean_object* v___f_3062_; lean_object* v___f_3063_; lean_object* v___f_3064_; lean_object* v___f_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___f_3068_; lean_object* v___f_3069_; lean_object* v___x_3070_; uint8_t v___x_3071_; lean_object* v_val_3073_; lean_object* v___x_3076_; 
v___f_3062_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3062_, 0, v_context_3056_);
v___f_3063_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3063_, 0, v___f_3062_);
v___f_3064_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3064_, 0, v___f_3063_);
lean_inc_ref(v_failurePrefix_3060_);
v___f_3065_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3065_, 0, v_failurePrefix_3060_);
v___x_3066_ = lean_box_uint32(v_op_3057_);
v___x_3067_ = lean_box_uint64(v_flags_3058_);
lean_inc_ref(v___f_3064_);
v___f_3068_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3068_, 0, v_failurePrefix_3060_);
lean_closure_set(v___f_3068_, 1, v___x_3066_);
lean_closure_set(v___f_3068_, 2, v___x_3067_);
lean_closure_set(v___f_3068_, 3, v_payload_3059_);
lean_closure_set(v___f_3068_, 4, v___f_3065_);
lean_closure_set(v___f_3068_, 5, v___f_3064_);
lean_closure_set(v___f_3068_, 6, v___f_3064_);
v___f_3069_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3069_, 0, v___f_3068_);
v___x_3070_ = lean_unsigned_to_nat(0u);
v___x_3071_ = 0;
v___x_3076_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3076_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3076_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
lean_ctor_set_tag(v___x_3079_, 1);
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
v_val_3073_ = v___x_3082_;
goto v___jp_3072_;
}
}
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
v_a_3085_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_3076_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3076_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
lean_ctor_set_tag(v___x_3087_, 0);
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
v_val_3073_ = v___x_3090_;
goto v___jp_3072_;
}
}
}
v___jp_3072_:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3074_, 0, v_val_3073_);
v___x_3075_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3070_, v___x_3071_, v___x_3074_, v___f_3069_);
return v___x_3075_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3___boxed(lean_object* v_context_3093_, lean_object* v_op_3094_, lean_object* v_flags_3095_, lean_object* v_payload_3096_, lean_object* v_failurePrefix_3097_, lean_object* v_a_3098_){
_start:
{
uint32_t v_op_boxed_3099_; uint64_t v_flags_boxed_3100_; lean_object* v_res_3101_; 
v_op_boxed_3099_ = lean_unbox_uint32(v_op_3094_);
lean_dec(v_op_3094_);
v_flags_boxed_3100_ = lean_unbox_uint64(v_flags_3095_);
lean_dec_ref(v_flags_3095_);
v_res_3101_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3(v_context_3093_, v_op_boxed_3099_, v_flags_boxed_3100_, v_payload_3096_, v_failurePrefix_3097_);
return v_res_3101_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2(uint8_t v_await_3102_, uint64_t v_extra_3103_){
_start:
{
uint64_t v___x_3104_; uint64_t v___y_3106_; 
v___x_3104_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_3102_ == 0)
{
uint64_t v___x_3109_; 
v___x_3109_ = 0ULL;
v___y_3106_ = v___x_3109_;
goto v___jp_3105_;
}
else
{
uint64_t v___x_3110_; 
v___x_3110_ = 2ULL;
v___y_3106_ = v___x_3110_;
goto v___jp_3105_;
}
v___jp_3105_:
{
uint64_t v___x_3107_; uint64_t v___x_3108_; 
v___x_3107_ = lean_uint64_lor(v___x_3104_, v___y_3106_);
v___x_3108_ = lean_uint64_lor(v___x_3107_, v_extra_3103_);
return v___x_3108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2___boxed(lean_object* v_await_3111_, lean_object* v_extra_3112_){
_start:
{
uint8_t v_await_boxed_3113_; uint64_t v_extra_boxed_3114_; uint64_t v_res_3115_; lean_object* v_r_3116_; 
v_await_boxed_3113_ = lean_unbox(v_await_3111_);
v_extra_boxed_3114_ = lean_unbox_uint64(v_extra_3112_);
lean_dec_ref(v_extra_3112_);
v_res_3115_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2(v_await_boxed_3113_, v_extra_boxed_3114_);
v_r_3116_ = lean_box_uint64(v_res_3115_);
return v_r_3116_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3117_; uint8_t v___x_3118_; uint64_t v___x_3119_; 
v___x_3117_ = 8ULL;
v___x_3118_ = 0;
v___x_3119_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__2(v___x_3118_, v___x_3117_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1(lean_object* v_o_3120_, lean_object* v_name_3121_, lean_object* v_args_3122_){
_start:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; uint32_t v___x_3129_; uint64_t v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3124_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3125_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3125_, 0, v_o_3120_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
lean_inc_ref(v_name_3121_);
v___x_3126_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3126_, 0, v_name_3121_);
v___x_3127_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_3128_ = lean_string_append(v___x_3127_, v_name_3121_);
lean_dec_ref(v_name_3121_);
v___x_3129_ = 205;
v___x_3130_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___closed__0);
v___x_3131_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3131_, 0, v_args_3122_);
v___x_3132_ = lean_unsigned_to_nat(3u);
v___x_3133_ = lean_mk_empty_array_with_capacity(v___x_3132_);
v___x_3134_ = lean_array_push(v___x_3133_, v___x_3125_);
v___x_3135_ = lean_array_push(v___x_3134_, v___x_3126_);
v___x_3136_ = lean_array_push(v___x_3135_, v___x_3131_);
v___x_3137_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
v___x_3138_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3(v___x_3128_, v___x_3129_, v___x_3130_, v___x_3137_, v___x_3124_);
return v___x_3138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1___boxed(lean_object* v_o_3139_, lean_object* v_name_3140_, lean_object* v_args_3141_, lean_object* v___y_3142_){
_start:
{
lean_object* v_res_3143_; 
v_res_3143_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1(v_o_3139_, v_name_3140_, v_args_3141_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_list(lean_object* v_self_3145_, lean_object* v_options_3146_){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
v___x_3148_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_list___closed__0));
v___x_3149_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__0(v_options_3146_);
v___x_3150_ = lean_unsigned_to_nat(1u);
v___x_3151_ = lean_mk_empty_array_with_capacity(v___x_3150_);
v___x_3152_ = lean_array_push(v___x_3151_, v___x_3149_);
v___x_3153_ = l_Lasm_JS_Web_Support_args(v___x_3152_);
v___x_3154_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1(v_self_3145_, v___x_3148_, v___x_3153_);
return v___x_3154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Bucket_list___boxed(lean_object* v_self_3155_, lean_object* v_options_3156_, lean_object* v_a_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l_Lasm_JS_Cloudflare_R2Bucket_list(v_self_3155_, v_options_3156_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_key(lean_object* v_self_3160_){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3162_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_key___closed__0));
v___x_3163_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3160_, v___x_3162_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_key___boxed(lean_object* v_self_3164_, lean_object* v_a_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l_Lasm_JS_Cloudflare_R2Object_key(v_self_3164_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_version(lean_object* v_self_3168_){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3170_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_version___closed__0));
v___x_3171_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3168_, v___x_3170_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_version___boxed(lean_object* v_self_3172_, lean_object* v_a_3173_){
_start:
{
lean_object* v_res_3174_; 
v_res_3174_ = l_Lasm_JS_Cloudflare_R2Object_version(v_self_3172_);
return v_res_3174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_size(lean_object* v_self_3176_){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3178_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_size___closed__0));
v___x_3179_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_3176_, v___x_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_size___boxed(lean_object* v_self_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v_res_3182_; 
v_res_3182_ = l_Lasm_JS_Cloudflare_R2Object_size(v_self_3180_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_etag(lean_object* v_self_3183_){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
v___x_3186_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3183_, v___x_3185_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_etag___boxed(lean_object* v_self_3187_, lean_object* v_a_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l_Lasm_JS_Cloudflare_R2Object_etag(v_self_3187_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpEtag(lean_object* v_self_3191_){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_httpEtag___closed__0));
v___x_3194_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3191_, v___x_3193_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpEtag___boxed(lean_object* v_self_3195_, lean_object* v_a_3196_){
_start:
{
lean_object* v_res_3197_; 
v_res_3197_ = l_Lasm_JS_Cloudflare_R2Object_httpEtag(v_self_3195_);
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_checksums(lean_object* v_self_3199_){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3201_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_checksums___closed__0));
v___x_3202_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3199_, v___x_3201_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3202_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3202_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
v_a_3211_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3202_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3202_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_checksums___boxed(lean_object* v_self_3219_, lean_object* v_a_3220_){
_start:
{
lean_object* v_res_3221_; 
v_res_3221_ = l_Lasm_JS_Cloudflare_R2Object_checksums(v_self_3219_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_uploaded(lean_object* v_self_3223_){
_start:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_uploaded___closed__0));
v___x_3226_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3223_, v___x_3225_);
return v___x_3226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_uploaded___boxed(lean_object* v_self_3227_, lean_object* v_a_3228_){
_start:
{
lean_object* v_res_3229_; 
v_res_3229_ = l_Lasm_JS_Cloudflare_R2Object_uploaded(v_self_3227_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1(lean_object* v_context_3231_, lean_object* v_d_3232_){
_start:
{
lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3244_; lean_object* v_received_3245_; lean_object* v___y_3264_; lean_object* v_a_3267_; 
switch(lean_obj_tag(v_d_3232_))
{
case 1:
{
goto v___jp_3234_;
}
case 0:
{
goto v___jp_3234_;
}
default: 
{
lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3291_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__0));
lean_inc(v_d_3232_);
v___x_3292_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3232_, v___x_3291_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v_a_3293_; 
v_a_3293_ = lean_ctor_get(v___x_3292_, 0);
lean_inc(v_a_3293_);
lean_dec_ref_known(v___x_3292_, 1);
v_a_3267_ = v_a_3293_;
goto v___jp_3266_;
}
else
{
lean_object* v_a_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; 
v_a_3294_ = lean_ctor_get(v___x_3292_, 0);
lean_inc(v_a_3294_);
lean_dec_ref_known(v___x_3292_, 1);
v___x_3295_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__1));
lean_inc(v_d_3232_);
v___x_3296_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3232_, v___x_3295_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v_a_3297_; 
lean_dec(v_a_3294_);
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_a_3297_);
lean_dec_ref_known(v___x_3296_, 1);
v_a_3267_ = v_a_3297_;
goto v___jp_3266_;
}
else
{
lean_object* v_a_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v_a_3298_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_a_3298_);
lean_dec_ref_known(v___x_3296_, 1);
v___x_3299_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__2));
lean_inc(v_d_3232_);
v___x_3300_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3232_, v___x_3299_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; 
lean_dec(v_a_3298_);
lean_dec(v_a_3294_);
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_a_3301_);
lean_dec_ref_known(v___x_3300_, 1);
v_a_3267_ = v_a_3301_;
goto v___jp_3266_;
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v_a_3302_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_a_3302_);
lean_dec_ref_known(v___x_3300_, 1);
v___x_3303_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__3));
lean_inc(v_d_3232_);
v___x_3304_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3232_, v___x_3303_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_object* v_a_3305_; 
lean_dec(v_a_3302_);
lean_dec(v_a_3298_);
lean_dec(v_a_3294_);
v_a_3305_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_a_3305_);
lean_dec_ref_known(v___x_3304_, 1);
v_a_3267_ = v_a_3305_;
goto v___jp_3266_;
}
else
{
lean_object* v_a_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v_a_3306_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_a_3306_);
lean_dec_ref_known(v___x_3304_, 1);
v___x_3307_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__4));
lean_inc(v_d_3232_);
v___x_3308_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3232_, v___x_3307_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v_a_3309_; 
lean_dec(v_a_3306_);
lean_dec(v_a_3302_);
lean_dec(v_a_3298_);
lean_dec(v_a_3294_);
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
lean_inc(v_a_3309_);
lean_dec_ref_known(v___x_3308_, 1);
v_a_3267_ = v_a_3309_;
goto v___jp_3266_;
}
else
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3329_; 
v_a_3310_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3312_ = v___x_3308_;
v_isShared_3313_ = v_isSharedCheck_3329_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___x_3308_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3329_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; 
v___x_3314_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2HTTPMetadata___lam__0___closed__5));
lean_inc(v_d_3232_);
v___x_3315_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3232_, v___x_3314_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3316_; 
lean_del_object(v___x_3312_);
lean_dec(v_a_3310_);
lean_dec(v_a_3306_);
lean_dec(v_a_3302_);
lean_dec(v_a_3298_);
lean_dec(v_a_3294_);
v_a_3316_ = lean_ctor_get(v___x_3315_, 0);
lean_inc(v_a_3316_);
lean_dec_ref_known(v___x_3315_, 1);
v_a_3267_ = v_a_3316_;
goto v___jp_3266_;
}
else
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3328_; 
lean_dec(v_d_3232_);
v_a_3317_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3319_ = v___x_3315_;
v_isShared_3320_ = v_isSharedCheck_3328_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3315_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3328_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3321_; lean_object* v___x_3323_; 
v___x_3321_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3321_, 0, v_a_3294_);
lean_ctor_set(v___x_3321_, 1, v_a_3298_);
lean_ctor_set(v___x_3321_, 2, v_a_3302_);
lean_ctor_set(v___x_3321_, 3, v_a_3306_);
lean_ctor_set(v___x_3321_, 4, v_a_3310_);
lean_ctor_set(v___x_3321_, 5, v_a_3317_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 0, v___x_3321_);
v___x_3323_ = v___x_3319_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v___x_3321_);
v___x_3323_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
lean_object* v___x_3325_; 
if (v_isShared_3313_ == 0)
{
lean_ctor_set_tag(v___x_3312_, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3323_);
v___x_3325_ = v___x_3312_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v___x_3323_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
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
v___jp_3234_:
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = lean_box(0);
v___x_3236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3235_);
return v___x_3236_;
}
v___jp_3237_:
{
lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3240_ = lean_string_append(v___y_3238_, v___y_3239_);
lean_dec_ref(v___y_3239_);
v___x_3241_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3240_);
v___x_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
return v___x_3242_;
}
v___jp_3243_:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; uint8_t v___x_3257_; 
v___x_3246_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_3247_ = lean_string_append(v___x_3246_, v_context_3231_);
v___x_3248_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_3249_ = lean_string_append(v___x_3247_, v___x_3248_);
v___x_3250_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1___closed__0));
v___x_3251_ = lean_string_append(v___x_3249_, v___x_3250_);
v___x_3252_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_3253_ = lean_string_append(v___x_3251_, v___x_3252_);
v___x_3254_ = lean_string_append(v___x_3253_, v_received_3245_);
lean_dec_ref(v_received_3245_);
v___x_3255_ = lean_string_utf8_byte_size(v___y_3244_);
v___x_3256_ = lean_unsigned_to_nat(0u);
v___x_3257_ = lean_nat_dec_eq(v___x_3255_, v___x_3256_);
if (v___x_3257_ == 0)
{
lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3258_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_3259_ = lean_string_append(v___x_3258_, v___y_3244_);
lean_dec_ref(v___y_3244_);
v___x_3260_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_3261_ = lean_string_append(v___x_3259_, v___x_3260_);
v___y_3238_ = v___x_3254_;
v___y_3239_ = v___x_3261_;
goto v___jp_3237_;
}
else
{
lean_object* v___x_3262_; 
lean_dec_ref(v___y_3244_);
v___x_3262_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_3238_ = v___x_3254_;
v___y_3239_ = v___x_3262_;
goto v___jp_3237_;
}
}
v___jp_3263_:
{
lean_object* v___x_3265_; 
v___x_3265_ = l_Lasm_JS_Data_describe(v_d_3232_);
v___y_3244_ = v___y_3264_;
v_received_3245_ = v___x_3265_;
goto v___jp_3243_;
}
v___jp_3266_:
{
if (lean_obj_tag(v_d_3232_) == 9)
{
lean_object* v_value_3268_; lean_object* v_description_3269_; lean_object* v___x_3270_; uint8_t v___x_3271_; 
v_value_3268_ = lean_ctor_get(v_d_3232_, 0);
v_description_3269_ = lean_ctor_get(v_d_3232_, 1);
v___x_3270_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3271_ = lean_string_dec_eq(v_description_3269_, v___x_3270_);
if (v___x_3271_ == 0)
{
v___y_3264_ = v_a_3267_;
goto v___jp_3263_;
}
else
{
lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3288_; 
lean_inc(v_value_3268_);
v_isSharedCheck_3288_ = !lean_is_exclusive(v_d_3232_);
if (v_isSharedCheck_3288_ == 0)
{
lean_object* v_unused_3289_; lean_object* v_unused_3290_; 
v_unused_3289_ = lean_ctor_get(v_d_3232_, 1);
lean_dec(v_unused_3289_);
v_unused_3290_ = lean_ctor_get(v_d_3232_, 0);
lean_dec(v_unused_3290_);
v___x_3273_ = v_d_3232_;
v_isShared_3274_ = v_isSharedCheck_3288_;
goto v_resetjp_3272_;
}
else
{
lean_dec(v_d_3232_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3288_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
uint32_t v___x_3275_; uint64_t v___x_3276_; lean_object* v___x_3278_; 
v___x_3275_ = 206;
v___x_3276_ = 0ULL;
lean_inc(v_value_3268_);
if (v_isShared_3274_ == 0)
{
lean_ctor_set(v___x_3273_, 1, v___x_3270_);
v___x_3278_ = v___x_3273_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_value_3268_);
lean_ctor_set(v_reuseFailAlloc_3287_, 1, v___x_3270_);
v___x_3278_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
uint32_t v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = lasm_js_value_handle(v_value_3268_);
lean_dec(v_value_3268_);
v___x_3280_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3275_, v___x_3276_, v___x_3278_, v___x_3279_);
lean_dec_ref(v___x_3278_);
if (lean_obj_tag(v___x_3280_) == 0)
{
lean_object* v_a_3281_; uint8_t v___x_3282_; 
v_a_3281_ = lean_ctor_get(v___x_3280_, 0);
lean_inc(v_a_3281_);
lean_dec_ref_known(v___x_3280_, 1);
v___x_3282_ = lean_string_validate_utf8(v_a_3281_);
if (v___x_3282_ == 0)
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
lean_dec(v_a_3281_);
v___x_3283_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_3284_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3283_);
v___y_3244_ = v_a_3267_;
v_received_3245_ = v___x_3284_;
goto v___jp_3243_;
}
else
{
lean_object* v___x_3285_; 
v___x_3285_ = lean_string_from_utf8_unchecked(v_a_3281_);
v___y_3244_ = v_a_3267_;
v_received_3245_ = v___x_3285_;
goto v___jp_3243_;
}
}
else
{
lean_object* v___x_3286_; 
lean_dec_ref_known(v___x_3280_, 1);
v___x_3286_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_3244_ = v_a_3267_;
v_received_3245_ = v___x_3286_;
goto v___jp_3243_;
}
}
}
}
}
else
{
v___y_3264_ = v_a_3267_;
goto v___jp_3263_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3330_, lean_object* v_d_3331_, lean_object* v_a_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1(v_context_3330_, v_d_3331_);
lean_dec_ref(v_context_3330_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0(lean_object* v_context_3334_, lean_object* v_bytes_3335_){
_start:
{
lean_object* v___x_3337_; 
v___x_3337_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3335_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3339_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
v___x_3339_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0_spec__1(v_context_3334_, v_a_3338_);
return v___x_3339_;
}
else
{
lean_object* v_a_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3347_; 
v_a_3340_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3342_ = v___x_3337_;
v_isShared_3343_ = v_isSharedCheck_3347_;
goto v_resetjp_3341_;
}
else
{
lean_inc(v_a_3340_);
lean_dec(v___x_3337_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3347_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3345_; 
if (v_isShared_3343_ == 0)
{
v___x_3345_ = v___x_3342_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v_a_3340_);
v___x_3345_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
return v___x_3345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0___boxed(lean_object* v_context_3348_, lean_object* v_bytes_3349_, lean_object* v_a_3350_){
_start:
{
lean_object* v_res_3351_; 
v_res_3351_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0(v_context_3348_, v_bytes_3349_);
lean_dec_ref(v_bytes_3349_);
lean_dec_ref(v_context_3348_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0(lean_object* v_o_3353_, lean_object* v_key_3354_){
_start:
{
lean_object* v_k_3356_; lean_object* v___x_3357_; 
v_k_3356_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3356_, 0, v_key_3354_);
v___x_3357_ = l_Lasm_JS_Wire_encodeIO(v_k_3356_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v_a_3358_; uint32_t v___x_3359_; uint32_t v___x_3360_; uint64_t v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_a_3358_);
lean_dec_ref_known(v___x_3357_, 1);
v___x_3359_ = 203;
v___x_3360_ = lasm_js_value_handle(v_o_3353_);
v___x_3361_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
v___x_3362_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3363_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3363_, 0, v_o_3353_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
v___x_3364_ = lean_unsigned_to_nat(2u);
v___x_3365_ = lean_mk_empty_array_with_capacity(v___x_3364_);
lean_inc_ref(v_k_3356_);
v___x_3366_ = lean_array_push(v___x_3365_, v_k_3356_);
v___x_3367_ = lean_array_push(v___x_3366_, v___x_3363_);
v___x_3368_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
v___x_3369_ = lasm_js_call(v___x_3359_, v___x_3360_, v___x_3361_, v_a_3358_, v___x_3368_);
lean_dec_ref_known(v___x_3368_, 1);
lean_dec(v_a_3358_);
if (lean_obj_tag(v___x_3369_) == 0)
{
lean_object* v_a_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; 
v_a_3370_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_a_3370_);
lean_dec_ref_known(v___x_3369_, 1);
v___x_3371_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0));
v___x_3372_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3356_);
v___x_3373_ = lean_string_append(v___x_3371_, v___x_3372_);
lean_dec_ref(v___x_3372_);
v___x_3374_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0_spec__0(v___x_3373_, v_a_3370_);
lean_dec(v_a_3370_);
lean_dec_ref(v___x_3373_);
return v___x_3374_;
}
else
{
lean_object* v_a_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3382_; 
lean_dec_ref_known(v_k_3356_, 1);
v_a_3375_ = lean_ctor_get(v___x_3369_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___x_3369_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3377_ = v___x_3369_;
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_a_3375_);
lean_dec(v___x_3369_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3382_;
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
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_a_3375_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
return v___x_3380_;
}
}
}
}
else
{
lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3390_; 
lean_dec_ref_known(v_k_3356_, 1);
lean_dec(v_o_3353_);
v_a_3383_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3385_ = v___x_3357_;
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3357_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3388_; 
if (v_isShared_3386_ == 0)
{
v___x_3388_ = v___x_3385_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_a_3383_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
return v___x_3388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___boxed(lean_object* v_o_3391_, lean_object* v_key_3392_, lean_object* v_a_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0(v_o_3391_, v_key_3392_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpMetadata(lean_object* v_self_3395_){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; 
v___x_3397_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__0));
v___x_3398_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0(v_self_3395_, v___x_3397_);
return v___x_3398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_httpMetadata___boxed(lean_object* v_self_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Lasm_JS_Cloudflare_R2Object_httpMetadata(v_self_3399_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0(lean_object* v_v_3411_){
_start:
{
uint8_t v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3413_ = 0;
v___x_3414_ = lean_unsigned_to_nat(1u);
v___x_3415_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___closed__3));
v___x_3416_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3417_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3417_, 0, v_v_3411_);
lean_ctor_set(v___x_3417_, 1, v___x_3416_);
v___x_3418_ = lean_mk_empty_array_with_capacity(v___x_3414_);
v___x_3419_ = lean_array_push(v___x_3418_, v___x_3417_);
v___x_3420_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v___x_3415_, v___x_3419_, v___x_3413_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_object* v_a_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3428_; 
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3423_ = v___x_3420_;
v_isShared_3424_ = v_isSharedCheck_3428_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_a_3421_);
lean_dec(v___x_3420_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3428_;
goto v_resetjp_3422_;
}
v_resetjp_3422_:
{
lean_object* v___x_3426_; 
if (v_isShared_3424_ == 0)
{
v___x_3426_ = v___x_3423_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v_a_3421_);
v___x_3426_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
return v___x_3426_;
}
}
}
else
{
lean_object* v_a_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3436_; 
v_a_3429_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3431_ = v___x_3420_;
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_a_3429_);
lean_dec(v___x_3420_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v___x_3434_; 
if (v_isShared_3432_ == 0)
{
v___x_3434_ = v___x_3431_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_a_3429_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0___boxed(lean_object* v_v_3437_, lean_object* v_a_3438_){
_start:
{
lean_object* v_res_3439_; 
v_res_3439_ = l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0(v_v_3437_);
return v_res_3439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1(size_t v_sz_3443_, size_t v_i_3444_, lean_object* v_bs_3445_){
_start:
{
uint8_t v___x_3447_; 
v___x_3447_ = lean_usize_dec_lt(v_i_3444_, v_sz_3443_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; 
v___x_3448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3448_, 0, v_bs_3445_);
return v___x_3448_;
}
else
{
lean_object* v_v_3449_; lean_object* v_snd_3450_; 
v_v_3449_ = lean_array_uget(v_bs_3445_, v_i_3444_);
v_snd_3450_ = lean_ctor_get(v_v_3449_, 1);
lean_inc(v_snd_3450_);
if (lean_obj_tag(v_snd_3450_) == 4)
{
lean_object* v_fst_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3465_; 
v_fst_3451_ = lean_ctor_get(v_v_3449_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_v_3449_);
if (v_isSharedCheck_3465_ == 0)
{
lean_object* v_unused_3466_; 
v_unused_3466_ = lean_ctor_get(v_v_3449_, 1);
lean_dec(v_unused_3466_);
v___x_3453_ = v_v_3449_;
v_isShared_3454_ = v_isSharedCheck_3465_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_fst_3451_);
lean_dec(v_v_3449_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3465_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v_s_3455_; lean_object* v___x_3456_; lean_object* v_bs_x27_3457_; lean_object* v___x_3459_; 
v_s_3455_ = lean_ctor_get(v_snd_3450_, 0);
lean_inc_ref(v_s_3455_);
lean_dec_ref_known(v_snd_3450_, 1);
v___x_3456_ = lean_unsigned_to_nat(0u);
v_bs_x27_3457_ = lean_array_uset(v_bs_3445_, v_i_3444_, v___x_3456_);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 1, v_s_3455_);
v___x_3459_ = v___x_3453_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v_fst_3451_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_s_3455_);
v___x_3459_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
size_t v___x_3460_; size_t v___x_3461_; lean_object* v___x_3462_; 
v___x_3460_ = ((size_t)1ULL);
v___x_3461_ = lean_usize_add(v_i_3444_, v___x_3460_);
v___x_3462_ = lean_array_uset(v_bs_x27_3457_, v_i_3444_, v___x_3459_);
v_i_3444_ = v___x_3461_;
v_bs_3445_ = v___x_3462_;
goto _start;
}
}
}
else
{
lean_object* v_fst_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___y_3480_; uint8_t v___x_3484_; 
lean_dec_ref(v_bs_3445_);
v_fst_3467_ = lean_ctor_get(v_v_3449_, 0);
lean_inc(v_fst_3467_);
lean_dec(v_v_3449_);
v___x_3468_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3469_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__0));
v___x_3470_ = lean_string_append(v___x_3469_, v_fst_3467_);
lean_dec(v_fst_3467_);
v___x_3471_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_3472_ = lean_string_append(v___x_3470_, v___x_3471_);
v___x_3473_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__1));
v___x_3474_ = lean_string_append(v___x_3472_, v___x_3473_);
v___x_3475_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__2));
v___x_3476_ = lean_string_append(v___x_3474_, v___x_3475_);
v___x_3477_ = l_Lasm_JS_Data_describe(v_snd_3450_);
v___x_3478_ = lean_string_append(v___x_3476_, v___x_3477_);
lean_dec_ref(v___x_3477_);
v___x_3484_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_3484_ == 0)
{
lean_object* v___x_3485_; 
v___x_3485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___y_3480_ = v___x_3485_;
goto v___jp_3479_;
}
else
{
v___y_3480_ = v___x_3468_;
goto v___jp_3479_;
}
v___jp_3479_:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3481_ = lean_string_append(v___x_3478_, v___y_3480_);
v___x_3482_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3481_);
v___x_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3482_);
return v___x_3483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___boxed(lean_object* v_sz_3486_, lean_object* v_i_3487_, lean_object* v_bs_3488_, lean_object* v___y_3489_){
_start:
{
size_t v_sz_boxed_3490_; size_t v_i_boxed_3491_; lean_object* v_res_3492_; 
v_sz_boxed_3490_ = lean_unbox_usize(v_sz_3486_);
lean_dec(v_sz_3486_);
v_i_boxed_3491_ = lean_unbox_usize(v_i_3487_);
lean_dec(v_i_3487_);
v_res_3492_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1(v_sz_boxed_3490_, v_i_boxed_3491_, v_bs_3488_);
return v_res_3492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0(lean_object* v_x_3494_){
_start:
{
switch(lean_obj_tag(v_x_3494_))
{
case 1:
{
goto v___jp_3496_;
}
case 0:
{
goto v___jp_3496_;
}
case 9:
{
lean_object* v_value_3499_; lean_object* v___x_3500_; 
v_value_3499_ = lean_ctor_get(v_x_3494_, 0);
lean_inc(v_value_3499_);
lean_dec_ref_known(v_x_3494_, 2);
v___x_3500_ = l_Lasm_JS_Cloudflare_Support_recordOf___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__0(v_value_3499_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3509_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3503_ = v___x_3500_;
v_isShared_3504_ = v_isSharedCheck_3509_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v___x_3500_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3509_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3505_; lean_object* v___x_3507_; 
v___x_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3505_, 0, v_a_3501_);
if (v_isShared_3504_ == 0)
{
lean_ctor_set(v___x_3503_, 0, v___x_3505_);
v___x_3507_ = v___x_3503_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v___x_3505_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
else
{
lean_object* v_a_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3517_; 
v_a_3510_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3512_ = v___x_3500_;
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_a_3510_);
lean_dec(v___x_3500_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3515_; 
if (v_isShared_3513_ == 0)
{
v___x_3515_ = v___x_3512_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_a_3510_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
}
case 8:
{
lean_object* v_fields_3518_; lean_object* v___x_3520_; uint8_t v_isShared_3521_; uint8_t v_isSharedCheck_3544_; 
v_fields_3518_ = lean_ctor_get(v_x_3494_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v_x_3494_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3520_ = v_x_3494_;
v_isShared_3521_ = v_isSharedCheck_3544_;
goto v_resetjp_3519_;
}
else
{
lean_inc(v_fields_3518_);
lean_dec(v_x_3494_);
v___x_3520_ = lean_box(0);
v_isShared_3521_ = v_isSharedCheck_3544_;
goto v_resetjp_3519_;
}
v_resetjp_3519_:
{
size_t v_sz_3522_; size_t v___x_3523_; lean_object* v___x_3524_; 
v_sz_3522_ = lean_array_size(v_fields_3518_);
v___x_3523_ = ((size_t)0ULL);
v___x_3524_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1(v_sz_3522_, v___x_3523_, v_fields_3518_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3535_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3527_ = v___x_3524_;
v_isShared_3528_ = v_isSharedCheck_3535_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3524_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3535_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3530_; 
if (v_isShared_3521_ == 0)
{
lean_ctor_set_tag(v___x_3520_, 1);
lean_ctor_set(v___x_3520_, 0, v_a_3525_);
v___x_3530_ = v___x_3520_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3525_);
v___x_3530_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
lean_object* v___x_3532_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v___x_3530_);
v___x_3532_ = v___x_3527_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___x_3530_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_del_object(v___x_3520_);
v_a_3536_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___x_3524_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3524_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
}
default: 
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3545_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0___closed__0));
v___x_3546_ = l_Lasm_JS_Data_describe(v_x_3494_);
v___x_3547_ = lean_string_append(v___x_3545_, v___x_3546_);
lean_dec_ref(v___x_3546_);
v___x_3548_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3547_);
v___x_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3549_, 0, v___x_3548_);
return v___x_3549_;
}
}
v___jp_3496_:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = lean_box(0);
v___x_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3497_);
return v___x_3498_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0___boxed(lean_object* v_x_3550_, lean_object* v_a_3551_){
_start:
{
lean_object* v_res_3552_; 
v_res_3552_ = l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0(v_x_3550_);
return v_res_3552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_customMetadata(lean_object* v_self_3553_){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3555_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2ListOptionsInclude___lam__0___closed__2));
v___x_3556_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3553_, v___x_3555_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3558_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
lean_inc(v_a_3557_);
lean_dec_ref_known(v___x_3556_, 1);
v___x_3558_ = l_Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0(v_a_3557_);
return v___x_3558_;
}
else
{
lean_object* v_a_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3566_; 
v_a_3559_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3561_ = v___x_3556_;
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_a_3559_);
lean_dec(v___x_3556_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3566_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3564_; 
if (v_isShared_3562_ == 0)
{
v___x_3564_ = v___x_3561_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v_a_3559_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_customMetadata___boxed(lean_object* v_self_3567_, lean_object* v_a_3568_){
_start:
{
lean_object* v_res_3569_; 
v_res_3569_ = l_Lasm_JS_Cloudflare_R2Object_customMetadata(v_self_3567_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_3575_, lean_object* v_key_3576_){
_start:
{
if (lean_obj_tag(v_d_3575_) == 8)
{
lean_object* v___x_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3608_; 
v___x_3579_ = l_Lasm_JS_Data_field(v_d_3575_, v_key_3576_);
v_isSharedCheck_3608_ = !lean_is_exclusive(v_d_3575_);
if (v_isSharedCheck_3608_ == 0)
{
lean_object* v_unused_3609_; 
v_unused_3609_ = lean_ctor_get(v_d_3575_, 0);
lean_dec(v_unused_3609_);
v___x_3581_ = v_d_3575_;
v_isShared_3582_ = v_isSharedCheck_3608_;
goto v_resetjp_3580_;
}
else
{
lean_dec(v_d_3575_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3608_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
switch(lean_obj_tag(v___x_3579_))
{
case 1:
{
lean_del_object(v___x_3581_);
goto v___jp_3577_;
}
case 0:
{
lean_del_object(v___x_3581_);
goto v___jp_3577_;
}
default: 
{
if (lean_obj_tag(v___x_3579_) == 3)
{
double v_n_3583_; lean_object* v___x_3584_; lean_object* v___x_3586_; 
v_n_3583_ = lean_ctor_get_float(v___x_3579_, 0);
lean_dec_ref_known(v___x_3579_, 0);
v___x_3584_ = lean_box_float(v_n_3583_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set_tag(v___x_3581_, 1);
lean_ctor_set(v___x_3581_, 0, v___x_3584_);
v___x_3586_ = v___x_3581_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v___x_3584_);
v___x_3586_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
lean_object* v___x_3587_; 
v___x_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3586_);
return v___x_3587_;
}
}
else
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; uint8_t v___x_3599_; 
v___x_3589_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_3590_ = lean_string_append(v___x_3589_, v_key_3576_);
v___x_3591_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_3592_ = lean_string_append(v___x_3590_, v___x_3591_);
v___x_3593_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__1));
v___x_3594_ = lean_string_append(v___x_3592_, v___x_3593_);
v___x_3595_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_3596_ = lean_string_append(v___x_3594_, v___x_3595_);
v___x_3597_ = l_Lasm_JS_Data_describe(v___x_3579_);
v___x_3598_ = lean_string_append(v___x_3596_, v___x_3597_);
lean_dec_ref(v___x_3597_);
v___x_3599_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_3599_ == 0)
{
lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3603_; 
v___x_3600_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___x_3601_ = lean_string_append(v___x_3598_, v___x_3600_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set_tag(v___x_3581_, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3601_);
v___x_3603_ = v___x_3581_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v___x_3601_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
else
{
lean_object* v___x_3606_; 
if (v_isShared_3582_ == 0)
{
lean_ctor_set_tag(v___x_3581_, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3598_);
v___x_3606_ = v___x_3581_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v___x_3598_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
return v___x_3606_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3610_; 
lean_dec(v_d_3575_);
v___x_3610_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__2));
return v___x_3610_;
}
v___jp_3577_:
{
lean_object* v___x_3578_; 
v___x_3578_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___closed__0));
return v___x_3578_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_3611_, lean_object* v_key_3612_){
_start:
{
lean_object* v_res_3613_; 
v_res_3613_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(v_d_3611_, v_key_3612_);
lean_dec_ref(v_key_3612_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1(lean_object* v_context_3615_, lean_object* v_d_3616_){
_start:
{
lean_object* v___y_3622_; lean_object* v___y_3623_; lean_object* v___y_3628_; lean_object* v_received_3629_; lean_object* v___y_3648_; lean_object* v_a_3651_; 
switch(lean_obj_tag(v_d_3616_))
{
case 1:
{
goto v___jp_3618_;
}
case 0:
{
goto v___jp_3618_;
}
default: 
{
lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3675_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__0));
lean_inc(v_d_3616_);
v___x_3676_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(v_d_3616_, v___x_3675_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3677_; 
v_a_3677_ = lean_ctor_get(v___x_3676_, 0);
lean_inc(v_a_3677_);
lean_dec_ref_known(v___x_3676_, 1);
v_a_3651_ = v_a_3677_;
goto v___jp_3650_;
}
else
{
lean_object* v_a_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v_a_3678_ = lean_ctor_get(v___x_3676_, 0);
lean_inc(v_a_3678_);
lean_dec_ref_known(v___x_3676_, 1);
v___x_3679_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__1));
lean_inc(v_d_3616_);
v___x_3680_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(v_d_3616_, v___x_3679_);
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v_a_3681_; 
lean_dec(v_a_3678_);
v_a_3681_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_a_3681_);
lean_dec_ref_known(v___x_3680_, 1);
v_a_3651_ = v_a_3681_;
goto v___jp_3650_;
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3701_; 
v_a_3682_ = lean_ctor_get(v___x_3680_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3680_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3684_ = v___x_3680_;
v_isShared_3685_ = v_isSharedCheck_3701_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3680_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3701_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; 
v___x_3686_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Range___lam__0___closed__2));
lean_inc(v_d_3616_);
v___x_3687_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1_spec__2(v_d_3616_, v___x_3686_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; 
lean_del_object(v___x_3684_);
lean_dec(v_a_3682_);
lean_dec(v_a_3678_);
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3687_, 1);
v_a_3651_ = v_a_3688_;
goto v___jp_3650_;
}
else
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3700_; 
lean_dec(v_d_3616_);
v_a_3689_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3691_ = v___x_3687_;
v_isShared_3692_ = v_isSharedCheck_3700_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3687_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3700_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3693_; lean_object* v___x_3695_; 
v___x_3693_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3693_, 0, v_a_3678_);
lean_ctor_set(v___x_3693_, 1, v_a_3682_);
lean_ctor_set(v___x_3693_, 2, v_a_3689_);
if (v_isShared_3692_ == 0)
{
lean_ctor_set(v___x_3691_, 0, v___x_3693_);
v___x_3695_ = v___x_3691_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v___x_3693_);
v___x_3695_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
lean_object* v___x_3697_; 
if (v_isShared_3685_ == 0)
{
lean_ctor_set_tag(v___x_3684_, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3695_);
v___x_3697_ = v___x_3684_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v___x_3695_);
v___x_3697_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
return v___x_3697_;
}
}
}
}
}
}
}
}
}
v___jp_3618_:
{
lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3619_ = lean_box(0);
v___x_3620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3620_, 0, v___x_3619_);
return v___x_3620_;
}
v___jp_3621_:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; 
v___x_3624_ = lean_string_append(v___y_3622_, v___y_3623_);
lean_dec_ref(v___y_3623_);
v___x_3625_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
v___x_3626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3625_);
return v___x_3626_;
}
v___jp_3627_:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; uint8_t v___x_3641_; 
v___x_3630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_3631_ = lean_string_append(v___x_3630_, v_context_3615_);
v___x_3632_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_3633_ = lean_string_append(v___x_3631_, v___x_3632_);
v___x_3634_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1___closed__0));
v___x_3635_ = lean_string_append(v___x_3633_, v___x_3634_);
v___x_3636_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_3637_ = lean_string_append(v___x_3635_, v___x_3636_);
v___x_3638_ = lean_string_append(v___x_3637_, v_received_3629_);
lean_dec_ref(v_received_3629_);
v___x_3639_ = lean_string_utf8_byte_size(v___y_3628_);
v___x_3640_ = lean_unsigned_to_nat(0u);
v___x_3641_ = lean_nat_dec_eq(v___x_3639_, v___x_3640_);
if (v___x_3641_ == 0)
{
lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3642_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_3643_ = lean_string_append(v___x_3642_, v___y_3628_);
lean_dec_ref(v___y_3628_);
v___x_3644_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_3645_ = lean_string_append(v___x_3643_, v___x_3644_);
v___y_3622_ = v___x_3638_;
v___y_3623_ = v___x_3645_;
goto v___jp_3621_;
}
else
{
lean_object* v___x_3646_; 
lean_dec_ref(v___y_3628_);
v___x_3646_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_3622_ = v___x_3638_;
v___y_3623_ = v___x_3646_;
goto v___jp_3621_;
}
}
v___jp_3647_:
{
lean_object* v___x_3649_; 
v___x_3649_ = l_Lasm_JS_Data_describe(v_d_3616_);
v___y_3628_ = v___y_3648_;
v_received_3629_ = v___x_3649_;
goto v___jp_3627_;
}
v___jp_3650_:
{
if (lean_obj_tag(v_d_3616_) == 9)
{
lean_object* v_value_3652_; lean_object* v_description_3653_; lean_object* v___x_3654_; uint8_t v___x_3655_; 
v_value_3652_ = lean_ctor_get(v_d_3616_, 0);
v_description_3653_ = lean_ctor_get(v_d_3616_, 1);
v___x_3654_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3655_ = lean_string_dec_eq(v_description_3653_, v___x_3654_);
if (v___x_3655_ == 0)
{
v___y_3648_ = v_a_3651_;
goto v___jp_3647_;
}
else
{
lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3672_; 
lean_inc(v_value_3652_);
v_isSharedCheck_3672_ = !lean_is_exclusive(v_d_3616_);
if (v_isSharedCheck_3672_ == 0)
{
lean_object* v_unused_3673_; lean_object* v_unused_3674_; 
v_unused_3673_ = lean_ctor_get(v_d_3616_, 1);
lean_dec(v_unused_3673_);
v_unused_3674_ = lean_ctor_get(v_d_3616_, 0);
lean_dec(v_unused_3674_);
v___x_3657_ = v_d_3616_;
v_isShared_3658_ = v_isSharedCheck_3672_;
goto v_resetjp_3656_;
}
else
{
lean_dec(v_d_3616_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3672_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
uint32_t v___x_3659_; uint64_t v___x_3660_; lean_object* v___x_3662_; 
v___x_3659_ = 206;
v___x_3660_ = 0ULL;
lean_inc(v_value_3652_);
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 1, v___x_3654_);
v___x_3662_ = v___x_3657_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_value_3652_);
lean_ctor_set(v_reuseFailAlloc_3671_, 1, v___x_3654_);
v___x_3662_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
uint32_t v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = lasm_js_value_handle(v_value_3652_);
lean_dec(v_value_3652_);
v___x_3664_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3659_, v___x_3660_, v___x_3662_, v___x_3663_);
lean_dec_ref(v___x_3662_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; uint8_t v___x_3666_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
lean_dec_ref_known(v___x_3664_, 1);
v___x_3666_ = lean_string_validate_utf8(v_a_3665_);
if (v___x_3666_ == 0)
{
lean_object* v___x_3667_; lean_object* v___x_3668_; 
lean_dec(v_a_3665_);
v___x_3667_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_3668_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3667_);
v___y_3628_ = v_a_3651_;
v_received_3629_ = v___x_3668_;
goto v___jp_3627_;
}
else
{
lean_object* v___x_3669_; 
v___x_3669_ = lean_string_from_utf8_unchecked(v_a_3665_);
v___y_3628_ = v_a_3651_;
v_received_3629_ = v___x_3669_;
goto v___jp_3627_;
}
}
else
{
lean_object* v___x_3670_; 
lean_dec_ref_known(v___x_3664_, 1);
v___x_3670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_3628_ = v_a_3651_;
v_received_3629_ = v___x_3670_;
goto v___jp_3627_;
}
}
}
}
}
else
{
v___y_3648_ = v_a_3651_;
goto v___jp_3647_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3702_, lean_object* v_d_3703_, lean_object* v_a_3704_){
_start:
{
lean_object* v_res_3705_; 
v_res_3705_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1(v_context_3702_, v_d_3703_);
lean_dec_ref(v_context_3702_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0(lean_object* v_context_3706_, lean_object* v_bytes_3707_){
_start:
{
lean_object* v___x_3709_; 
v___x_3709_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3707_);
if (lean_obj_tag(v___x_3709_) == 0)
{
lean_object* v_a_3710_; lean_object* v___x_3711_; 
v_a_3710_ = lean_ctor_get(v___x_3709_, 0);
lean_inc(v_a_3710_);
lean_dec_ref_known(v___x_3709_, 1);
v___x_3711_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0_spec__1(v_context_3706_, v_a_3710_);
return v___x_3711_;
}
else
{
lean_object* v_a_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3719_; 
v_a_3712_ = lean_ctor_get(v___x_3709_, 0);
v_isSharedCheck_3719_ = !lean_is_exclusive(v___x_3709_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3714_ = v___x_3709_;
v_isShared_3715_ = v_isSharedCheck_3719_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_a_3712_);
lean_dec(v___x_3709_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3719_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v___x_3717_; 
if (v_isShared_3715_ == 0)
{
v___x_3717_ = v___x_3714_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v_a_3712_);
v___x_3717_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
return v___x_3717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0___boxed(lean_object* v_context_3720_, lean_object* v_bytes_3721_, lean_object* v_a_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0(v_context_3720_, v_bytes_3721_);
lean_dec_ref(v_bytes_3721_);
lean_dec_ref(v_context_3720_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0(lean_object* v_o_3724_, lean_object* v_key_3725_){
_start:
{
lean_object* v_k_3727_; lean_object* v___x_3728_; 
v_k_3727_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3727_, 0, v_key_3725_);
v___x_3728_ = l_Lasm_JS_Wire_encodeIO(v_k_3727_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; uint32_t v___x_3730_; uint32_t v___x_3731_; uint64_t v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_a_3729_);
lean_dec_ref_known(v___x_3728_, 1);
v___x_3730_ = 203;
v___x_3731_ = lasm_js_value_handle(v_o_3724_);
v___x_3732_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
v___x_3733_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3734_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3734_, 0, v_o_3724_);
lean_ctor_set(v___x_3734_, 1, v___x_3733_);
v___x_3735_ = lean_unsigned_to_nat(2u);
v___x_3736_ = lean_mk_empty_array_with_capacity(v___x_3735_);
lean_inc_ref(v_k_3727_);
v___x_3737_ = lean_array_push(v___x_3736_, v_k_3727_);
v___x_3738_ = lean_array_push(v___x_3737_, v___x_3734_);
v___x_3739_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3738_);
v___x_3740_ = lasm_js_call(v___x_3730_, v___x_3731_, v___x_3732_, v_a_3729_, v___x_3739_);
lean_dec_ref_known(v___x_3739_, 1);
lean_dec(v_a_3729_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3741_);
lean_dec_ref_known(v___x_3740_, 1);
v___x_3742_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0));
v___x_3743_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3727_);
v___x_3744_ = lean_string_append(v___x_3742_, v___x_3743_);
lean_dec_ref(v___x_3743_);
v___x_3745_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0_spec__0(v___x_3744_, v_a_3741_);
lean_dec(v_a_3741_);
lean_dec_ref(v___x_3744_);
return v___x_3745_;
}
else
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3753_; 
lean_dec_ref_known(v_k_3727_, 1);
v_a_3746_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3748_ = v___x_3740_;
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3740_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3751_; 
if (v_isShared_3749_ == 0)
{
v___x_3751_ = v___x_3748_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3746_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3761_; 
lean_dec_ref_known(v_k_3727_, 1);
lean_dec(v_o_3724_);
v_a_3754_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3756_ = v___x_3728_;
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3728_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3759_; 
if (v_isShared_3757_ == 0)
{
v___x_3759_ = v___x_3756_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3754_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0___boxed(lean_object* v_o_3762_, lean_object* v_key_3763_, lean_object* v_a_3764_){
_start:
{
lean_object* v_res_3765_; 
v_res_3765_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0(v_o_3762_, v_key_3763_);
return v_res_3765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_range(lean_object* v_self_3766_){
_start:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3768_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__1));
v___x_3769_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_range_spec__0(v_self_3766_, v___x_3768_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_range___boxed(lean_object* v_self_3770_, lean_object* v_a_3771_){
_start:
{
lean_object* v_res_3772_; 
v_res_3772_ = l_Lasm_JS_Cloudflare_R2Object_range(v_self_3770_);
return v_res_3772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_storageClass(lean_object* v_self_3773_){
_start:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3775_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__5));
v___x_3776_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3773_, v___x_3775_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_storageClass___boxed(lean_object* v_self_3777_, lean_object* v_a_3778_){
_start:
{
lean_object* v_res_3779_; 
v_res_3779_ = l_Lasm_JS_Cloudflare_R2Object_storageClass(v_self_3777_);
return v_res_3779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0(lean_object* v_o_3780_, lean_object* v_key_3781_){
_start:
{
lean_object* v_k_3783_; lean_object* v___x_3784_; 
v_k_3783_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3783_, 0, v_key_3781_);
v___x_3784_ = l_Lasm_JS_Wire_encodeIO(v_k_3783_);
if (lean_obj_tag(v___x_3784_) == 0)
{
lean_object* v_a_3785_; uint32_t v___x_3786_; uint32_t v___x_3787_; uint64_t v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; 
v_a_3785_ = lean_ctor_get(v___x_3784_, 0);
lean_inc(v_a_3785_);
lean_dec_ref_known(v___x_3784_, 1);
v___x_3786_ = 203;
v___x_3787_ = lasm_js_value_handle(v_o_3780_);
v___x_3788_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
v___x_3789_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3790_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3790_, 0, v_o_3780_);
lean_ctor_set(v___x_3790_, 1, v___x_3789_);
v___x_3791_ = lean_unsigned_to_nat(2u);
v___x_3792_ = lean_mk_empty_array_with_capacity(v___x_3791_);
lean_inc_ref(v_k_3783_);
v___x_3793_ = lean_array_push(v___x_3792_, v_k_3783_);
v___x_3794_ = lean_array_push(v___x_3793_, v___x_3790_);
v___x_3795_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3794_);
v___x_3796_ = lasm_js_call(v___x_3786_, v___x_3787_, v___x_3788_, v_a_3785_, v___x_3795_);
lean_dec_ref_known(v___x_3795_, 1);
lean_dec(v_a_3785_);
if (lean_obj_tag(v___x_3796_) == 0)
{
lean_object* v_a_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v_a_3797_ = lean_ctor_get(v___x_3796_, 0);
lean_inc(v_a_3797_);
lean_dec_ref_known(v___x_3796_, 1);
v___x_3798_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_httpMetadata_spec__0___closed__0));
v___x_3799_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3783_);
v___x_3800_ = lean_string_append(v___x_3798_, v___x_3799_);
lean_dec_ref(v___x_3799_);
v___x_3801_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_3800_, v_a_3797_);
lean_dec(v_a_3797_);
lean_dec_ref(v___x_3800_);
return v___x_3801_;
}
else
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
lean_dec_ref_known(v_k_3783_, 1);
v_a_3802_ = lean_ctor_get(v___x_3796_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3796_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3804_ = v___x_3796_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3796_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
else
{
lean_object* v_a_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3817_; 
lean_dec_ref_known(v_k_3783_, 1);
lean_dec(v_o_3780_);
v_a_3810_ = lean_ctor_get(v___x_3784_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3812_ = v___x_3784_;
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_a_3810_);
lean_dec(v___x_3784_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3815_; 
if (v_isShared_3813_ == 0)
{
v___x_3815_ = v___x_3812_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v_a_3810_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0___boxed(lean_object* v_o_3818_, lean_object* v_key_3819_, lean_object* v_a_3820_){
_start:
{
lean_object* v_res_3821_; 
v_res_3821_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0(v_o_3818_, v_key_3819_);
return v_res_3821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5(lean_object* v_self_3823_){
_start:
{
lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3825_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5___closed__0));
v___x_3826_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_R2Object_ssecKeyMd5_spec__0(v_self_3823_, v___x_3825_);
return v___x_3826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5___boxed(lean_object* v_self_3827_, lean_object* v_a_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lasm_JS_Cloudflare_R2Object_ssecKeyMd5(v_self_3827_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata(lean_object* v_self_3831_, lean_object* v_headers_3832_){
_start:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3834_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata___closed__0));
v___x_3835_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_3836_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3836_, 0, v_headers_3832_);
lean_ctor_set(v___x_3836_, 1, v___x_3835_);
v___x_3837_ = lean_unsigned_to_nat(1u);
v___x_3838_ = lean_mk_empty_array_with_capacity(v___x_3837_);
v___x_3839_ = lean_array_push(v___x_3838_, v___x_3836_);
v___x_3840_ = l_Lasm_JS_Web_Support_args(v___x_3839_);
v___x_3841_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3831_, v___x_3834_, v___x_3840_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata___boxed(lean_object* v_self_3842_, lean_object* v_headers_3843_, lean_object* v_a_3844_){
_start:
{
lean_object* v_res_3845_; 
v_res_3845_ = l_Lasm_JS_Cloudflare_R2Object_writeHttpMetadata(v_self_3842_, v_headers_3843_);
return v_res_3845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_body(lean_object* v_self_3847_){
_start:
{
lean_object* v___x_3849_; lean_object* v___x_3850_; 
v___x_3849_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_body___closed__0));
v___x_3850_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3847_, v___x_3849_);
if (lean_obj_tag(v___x_3850_) == 0)
{
lean_object* v_a_3851_; lean_object* v___x_3853_; uint8_t v_isShared_3854_; uint8_t v_isSharedCheck_3858_; 
v_a_3851_ = lean_ctor_get(v___x_3850_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3850_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3853_ = v___x_3850_;
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
else
{
lean_inc(v_a_3851_);
lean_dec(v___x_3850_);
v___x_3853_ = lean_box(0);
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
v_resetjp_3852_:
{
lean_object* v___x_3856_; 
if (v_isShared_3854_ == 0)
{
v___x_3856_ = v___x_3853_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v_a_3851_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
return v___x_3856_;
}
}
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3866_; 
v_a_3859_ = lean_ctor_get(v___x_3850_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3850_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3861_ = v___x_3850_;
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3850_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
if (v_isShared_3862_ == 0)
{
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3859_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_body___boxed(lean_object* v_self_3867_, lean_object* v_a_3868_){
_start:
{
lean_object* v_res_3869_; 
v_res_3869_ = l_Lasm_JS_Cloudflare_R2ObjectBody_body(v_self_3867_);
return v_res_3869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed(lean_object* v_self_3871_){
_start:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3873_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed___closed__0));
v___x_3874_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_3871_, v___x_3873_);
return v___x_3874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed___boxed(lean_object* v_self_3875_, lean_object* v_a_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l_Lasm_JS_Cloudflare_R2ObjectBody_bodyUsed(v_self_3875_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0(lean_object* v_x_3878_){
_start:
{
lean_object* v_val_3881_; 
if (lean_obj_tag(v_x_3878_) == 0)
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3891_; 
v_a_3883_ = lean_ctor_get(v_x_3878_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v_x_3878_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3885_ = v_x_3878_;
v_isShared_3886_ = v_isSharedCheck_3891_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v_x_3878_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3891_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v_a_3883_);
v___x_3888_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
lean_object* v___x_3889_; 
v___x_3889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
return v___x_3889_;
}
}
}
else
{
lean_object* v_a_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3905_; 
v_a_3892_ = lean_ctor_get(v_x_3878_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v_x_3878_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3894_ = v_x_3878_;
v_isShared_3895_ = v_isSharedCheck_3905_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_a_3892_);
lean_dec(v_x_3878_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3905_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3896_; 
v___x_3896_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_a_3892_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v___x_3899_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref_known(v___x_3896_, 1);
if (v_isShared_3895_ == 0)
{
lean_ctor_set(v___x_3894_, 0, v_a_3897_);
v___x_3899_ = v___x_3894_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v_a_3897_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
v_val_3881_ = v___x_3899_;
goto v___jp_3880_;
}
}
else
{
lean_object* v_a_3901_; lean_object* v___x_3903_; 
v_a_3901_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3901_);
lean_dec_ref_known(v___x_3896_, 1);
if (v_isShared_3895_ == 0)
{
lean_ctor_set_tag(v___x_3894_, 0);
lean_ctor_set(v___x_3894_, 0, v_a_3901_);
v___x_3903_ = v___x_3894_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3901_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
v_val_3881_ = v___x_3903_;
goto v___jp_3880_;
}
}
}
}
v___jp_3880_:
{
lean_object* v___x_3882_; 
v___x_3882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3882_, 0, v_val_3881_);
return v___x_3882_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0___boxed(lean_object* v_x_3906_, lean_object* v___y_3907_){
_start:
{
lean_object* v_res_3908_; 
v_res_3908_ = l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___lam__0(v_x_3906_);
return v_res_3908_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3(void){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3913_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__2));
v___x_3914_ = l_Lasm_JS_Web_Support_args(v___x_3913_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer(lean_object* v_self_3915_){
_start:
{
lean_object* v___f_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; uint8_t v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; 
v___f_3917_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__0));
v___x_3918_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__1));
v___x_3919_ = lean_unsigned_to_nat(0u);
v___x_3920_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_3921_ = 0;
v___x_3922_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3915_, v___x_3918_, v___x_3920_);
v___x_3923_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3919_, v___x_3921_, v___x_3922_, v___f_3917_);
return v___x_3923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___boxed(lean_object* v_self_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v_res_3926_; 
v_res_3926_ = l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer(v_self_3924_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bytes(lean_object* v_self_3928_){
_start:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3930_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_bytes___closed__0));
v___x_3931_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_3932_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_bytes_spec__0(v_self_3928_, v___x_3930_, v___x_3931_);
return v___x_3932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_bytes___boxed(lean_object* v_self_3933_, lean_object* v_a_3934_){
_start:
{
lean_object* v_res_3935_; 
v_res_3935_ = l_Lasm_JS_Cloudflare_R2ObjectBody_bytes(v_self_3933_);
return v_res_3935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_text(lean_object* v_self_3937_){
_start:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3939_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_text___closed__0));
v___x_3940_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_3941_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3937_, v___x_3939_, v___x_3940_);
return v___x_3941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_text___boxed(lean_object* v_self_3942_, lean_object* v_a_3943_){
_start:
{
lean_object* v_res_3944_; 
v_res_3944_ = l_Lasm_JS_Cloudflare_R2ObjectBody_text(v_self_3942_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_json(lean_object* v_self_3946_){
_start:
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3948_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_json___closed__0));
v___x_3949_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_3950_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_3946_, v___x_3948_, v___x_3949_);
return v___x_3950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_json___boxed(lean_object* v_self_3951_, lean_object* v_a_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Lasm_JS_Cloudflare_R2ObjectBody_json(v_self_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_blob(lean_object* v_self_3955_){
_start:
{
lean_object* v___f_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; uint8_t v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___f_3957_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0));
v___x_3958_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2ObjectBody_blob___closed__0));
v___x_3959_ = lean_unsigned_to_nat(0u);
v___x_3960_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_3961_ = 0;
v___x_3962_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3955_, v___x_3958_, v___x_3960_);
v___x_3963_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3959_, v___x_3961_, v___x_3962_, v___f_3957_);
return v___x_3963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2ObjectBody_blob___boxed(lean_object* v_self_3964_, lean_object* v_a_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_Lasm_JS_Cloudflare_R2ObjectBody_blob(v_self_3964_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_md5(lean_object* v_self_3967_){
_start:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3969_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
v___x_3970_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3967_, v___x_3969_);
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3972_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
lean_inc(v_a_3971_);
lean_dec_ref_known(v___x_3970_, 1);
v___x_3972_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_3971_);
return v___x_3972_;
}
else
{
lean_object* v_a_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3980_; 
v_a_3973_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3975_ = v___x_3970_;
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_a_3973_);
lean_dec(v___x_3970_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3978_; 
if (v_isShared_3976_ == 0)
{
v___x_3978_ = v___x_3975_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_a_3973_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_md5___boxed(lean_object* v_self_3981_, lean_object* v_a_3982_){
_start:
{
lean_object* v_res_3983_; 
v_res_3983_ = l_Lasm_JS_Cloudflare_R2Checksums_md5(v_self_3981_);
return v_res_3983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha1(lean_object* v_self_3984_){
_start:
{
lean_object* v___x_3986_; lean_object* v___x_3987_; 
v___x_3986_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
v___x_3987_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3984_, v___x_3986_);
if (lean_obj_tag(v___x_3987_) == 0)
{
lean_object* v_a_3988_; lean_object* v___x_3989_; 
v_a_3988_ = lean_ctor_get(v___x_3987_, 0);
lean_inc(v_a_3988_);
lean_dec_ref_known(v___x_3987_, 1);
v___x_3989_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_3988_);
return v___x_3989_;
}
else
{
lean_object* v_a_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_3997_; 
v_a_3990_ = lean_ctor_get(v___x_3987_, 0);
v_isSharedCheck_3997_ = !lean_is_exclusive(v___x_3987_);
if (v_isSharedCheck_3997_ == 0)
{
v___x_3992_ = v___x_3987_;
v_isShared_3993_ = v_isSharedCheck_3997_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_a_3990_);
lean_dec(v___x_3987_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_3997_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
lean_object* v___x_3995_; 
if (v_isShared_3993_ == 0)
{
v___x_3995_ = v___x_3992_;
goto v_reusejp_3994_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v_a_3990_);
v___x_3995_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3994_;
}
v_reusejp_3994_:
{
return v___x_3995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha1___boxed(lean_object* v_self_3998_, lean_object* v_a_3999_){
_start:
{
lean_object* v_res_4000_; 
v_res_4000_ = l_Lasm_JS_Cloudflare_R2Checksums_sha1(v_self_3998_);
return v_res_4000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha256(lean_object* v_self_4001_){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; 
v___x_4003_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
v___x_4004_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4001_, v___x_4003_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; lean_object* v___x_4006_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_a_4005_);
lean_dec_ref_known(v___x_4004_, 1);
v___x_4006_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_4005_);
return v___x_4006_;
}
else
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4014_; 
v_a_4007_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4014_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4009_ = v___x_4004_;
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v___x_4004_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4012_; 
if (v_isShared_4010_ == 0)
{
v___x_4012_ = v___x_4009_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_a_4007_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha256___boxed(lean_object* v_self_4015_, lean_object* v_a_4016_){
_start:
{
lean_object* v_res_4017_; 
v_res_4017_ = l_Lasm_JS_Cloudflare_R2Checksums_sha256(v_self_4015_);
return v_res_4017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha384(lean_object* v_self_4018_){
_start:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4020_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
v___x_4021_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4018_, v___x_4020_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; lean_object* v___x_4023_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v___x_4021_, 1);
v___x_4023_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_4022_);
return v___x_4023_;
}
else
{
lean_object* v_a_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4031_; 
v_a_4024_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4031_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4031_ == 0)
{
v___x_4026_ = v___x_4021_;
v_isShared_4027_ = v_isSharedCheck_4031_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_a_4024_);
lean_dec(v___x_4021_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4031_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
lean_object* v___x_4029_; 
if (v_isShared_4027_ == 0)
{
v___x_4029_ = v___x_4026_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v_a_4024_);
v___x_4029_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
return v___x_4029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha384___boxed(lean_object* v_self_4032_, lean_object* v_a_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lasm_JS_Cloudflare_R2Checksums_sha384(v_self_4032_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha512(lean_object* v_self_4035_){
_start:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4037_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
v___x_4038_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_4035_, v___x_4037_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4040_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
lean_inc(v_a_4039_);
lean_dec_ref_known(v___x_4038_, 1);
v___x_4040_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_4039_);
return v___x_4040_;
}
else
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4048_; 
v_a_4041_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4043_ = v___x_4038_;
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4038_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v___x_4046_; 
if (v_isShared_4044_ == 0)
{
v___x_4046_ = v___x_4043_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4041_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_sha512___boxed(lean_object* v_self_4049_, lean_object* v_a_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Lasm_JS_Cloudflare_R2Checksums_sha512(v_self_4049_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2(lean_object* v_context_4052_, lean_object* v_d_4053_){
_start:
{
lean_object* v___y_4056_; lean_object* v___y_4057_; lean_object* v___y_4062_; lean_object* v_received_4063_; lean_object* v___y_4082_; lean_object* v_a_4085_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v___x_4109_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__0));
lean_inc(v_d_4053_);
v___x_4110_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4053_, v___x_4109_);
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_object* v_a_4111_; 
v_a_4111_ = lean_ctor_get(v___x_4110_, 0);
lean_inc(v_a_4111_);
lean_dec_ref_known(v___x_4110_, 1);
v_a_4085_ = v_a_4111_;
goto v___jp_4084_;
}
else
{
lean_object* v_a_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; 
v_a_4112_ = lean_ctor_get(v___x_4110_, 0);
lean_inc(v_a_4112_);
lean_dec_ref_known(v___x_4110_, 1);
v___x_4113_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__1));
lean_inc(v_d_4053_);
v___x_4114_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4053_, v___x_4113_);
if (lean_obj_tag(v___x_4114_) == 0)
{
lean_object* v_a_4115_; 
lean_dec(v_a_4112_);
v_a_4115_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_a_4115_);
lean_dec_ref_known(v___x_4114_, 1);
v_a_4085_ = v_a_4115_;
goto v___jp_4084_;
}
else
{
lean_object* v_a_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v_a_4116_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_a_4116_);
lean_dec_ref_known(v___x_4114_, 1);
v___x_4117_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__2));
lean_inc(v_d_4053_);
v___x_4118_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4053_, v___x_4117_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v_a_4119_; 
lean_dec(v_a_4116_);
lean_dec(v_a_4112_);
v_a_4119_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4119_);
lean_dec_ref_known(v___x_4118_, 1);
v_a_4085_ = v_a_4119_;
goto v___jp_4084_;
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; 
v_a_4120_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4120_);
lean_dec_ref_known(v___x_4118_, 1);
v___x_4121_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__3));
lean_inc(v_d_4053_);
v___x_4122_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4053_, v___x_4121_);
if (lean_obj_tag(v___x_4122_) == 0)
{
lean_object* v_a_4123_; 
lean_dec(v_a_4120_);
lean_dec(v_a_4116_);
lean_dec(v_a_4112_);
v_a_4123_ = lean_ctor_get(v___x_4122_, 0);
lean_inc(v_a_4123_);
lean_dec_ref_known(v___x_4122_, 1);
v_a_4085_ = v_a_4123_;
goto v___jp_4084_;
}
else
{
lean_object* v_a_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; 
v_a_4124_ = lean_ctor_get(v___x_4122_, 0);
lean_inc(v_a_4124_);
lean_dec_ref_known(v___x_4122_, 1);
v___x_4125_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2PutOptions___lam__0___closed__4));
lean_inc(v_d_4053_);
v___x_4126_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_4053_, v___x_4125_);
if (lean_obj_tag(v___x_4126_) == 0)
{
lean_object* v_a_4127_; 
lean_dec(v_a_4124_);
lean_dec(v_a_4120_);
lean_dec(v_a_4116_);
lean_dec(v_a_4112_);
v_a_4127_ = lean_ctor_get(v___x_4126_, 0);
lean_inc(v_a_4127_);
lean_dec_ref_known(v___x_4126_, 1);
v_a_4085_ = v_a_4127_;
goto v___jp_4084_;
}
else
{
lean_object* v_a_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4136_; 
lean_dec(v_d_4053_);
v_a_4128_ = lean_ctor_get(v___x_4126_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4126_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4130_ = v___x_4126_;
v_isShared_4131_ = v_isSharedCheck_4136_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_a_4128_);
lean_dec(v___x_4126_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4136_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4132_; lean_object* v___x_4134_; 
v___x_4132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4132_, 0, v_a_4112_);
lean_ctor_set(v___x_4132_, 1, v_a_4116_);
lean_ctor_set(v___x_4132_, 2, v_a_4120_);
lean_ctor_set(v___x_4132_, 3, v_a_4124_);
lean_ctor_set(v___x_4132_, 4, v_a_4128_);
if (v_isShared_4131_ == 0)
{
lean_ctor_set_tag(v___x_4130_, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4132_);
v___x_4134_ = v___x_4130_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v___x_4132_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
}
}
}
v___jp_4055_:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; 
v___x_4058_ = lean_string_append(v___y_4056_, v___y_4057_);
lean_dec_ref(v___y_4057_);
v___x_4059_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4058_);
v___x_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4059_);
return v___x_4060_;
}
v___jp_4061_:
{
lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; uint8_t v___x_4075_; 
v___x_4064_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_4065_ = lean_string_append(v___x_4064_, v_context_4052_);
v___x_4066_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_4067_ = lean_string_append(v___x_4065_, v___x_4066_);
v___x_4068_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2StringChecksums___closed__1));
v___x_4069_ = lean_string_append(v___x_4067_, v___x_4068_);
v___x_4070_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_4071_ = lean_string_append(v___x_4069_, v___x_4070_);
v___x_4072_ = lean_string_append(v___x_4071_, v_received_4063_);
lean_dec_ref(v_received_4063_);
v___x_4073_ = lean_string_utf8_byte_size(v___y_4062_);
v___x_4074_ = lean_unsigned_to_nat(0u);
v___x_4075_ = lean_nat_dec_eq(v___x_4073_, v___x_4074_);
if (v___x_4075_ == 0)
{
lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4076_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_4077_ = lean_string_append(v___x_4076_, v___y_4062_);
lean_dec_ref(v___y_4062_);
v___x_4078_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_4079_ = lean_string_append(v___x_4077_, v___x_4078_);
v___y_4056_ = v___x_4072_;
v___y_4057_ = v___x_4079_;
goto v___jp_4055_;
}
else
{
lean_object* v___x_4080_; 
lean_dec_ref(v___y_4062_);
v___x_4080_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_4056_ = v___x_4072_;
v___y_4057_ = v___x_4080_;
goto v___jp_4055_;
}
}
v___jp_4081_:
{
lean_object* v___x_4083_; 
v___x_4083_ = l_Lasm_JS_Data_describe(v_d_4053_);
v___y_4062_ = v___y_4082_;
v_received_4063_ = v___x_4083_;
goto v___jp_4061_;
}
v___jp_4084_:
{
if (lean_obj_tag(v_d_4053_) == 9)
{
lean_object* v_value_4086_; lean_object* v_description_4087_; lean_object* v___x_4088_; uint8_t v___x_4089_; 
v_value_4086_ = lean_ctor_get(v_d_4053_, 0);
v_description_4087_ = lean_ctor_get(v_d_4053_, 1);
v___x_4088_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4089_ = lean_string_dec_eq(v_description_4087_, v___x_4088_);
if (v___x_4089_ == 0)
{
v___y_4082_ = v_a_4085_;
goto v___jp_4081_;
}
else
{
lean_object* v___x_4091_; uint8_t v_isShared_4092_; uint8_t v_isSharedCheck_4106_; 
lean_inc(v_value_4086_);
v_isSharedCheck_4106_ = !lean_is_exclusive(v_d_4053_);
if (v_isSharedCheck_4106_ == 0)
{
lean_object* v_unused_4107_; lean_object* v_unused_4108_; 
v_unused_4107_ = lean_ctor_get(v_d_4053_, 1);
lean_dec(v_unused_4107_);
v_unused_4108_ = lean_ctor_get(v_d_4053_, 0);
lean_dec(v_unused_4108_);
v___x_4091_ = v_d_4053_;
v_isShared_4092_ = v_isSharedCheck_4106_;
goto v_resetjp_4090_;
}
else
{
lean_dec(v_d_4053_);
v___x_4091_ = lean_box(0);
v_isShared_4092_ = v_isSharedCheck_4106_;
goto v_resetjp_4090_;
}
v_resetjp_4090_:
{
uint32_t v___x_4093_; uint64_t v___x_4094_; lean_object* v___x_4096_; 
v___x_4093_ = 206;
v___x_4094_ = 0ULL;
lean_inc(v_value_4086_);
if (v_isShared_4092_ == 0)
{
lean_ctor_set(v___x_4091_, 1, v___x_4088_);
v___x_4096_ = v___x_4091_;
goto v_reusejp_4095_;
}
else
{
lean_object* v_reuseFailAlloc_4105_; 
v_reuseFailAlloc_4105_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4105_, 0, v_value_4086_);
lean_ctor_set(v_reuseFailAlloc_4105_, 1, v___x_4088_);
v___x_4096_ = v_reuseFailAlloc_4105_;
goto v_reusejp_4095_;
}
v_reusejp_4095_:
{
uint32_t v___x_4097_; lean_object* v___x_4098_; 
v___x_4097_ = lasm_js_value_handle(v_value_4086_);
lean_dec(v_value_4086_);
v___x_4098_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4093_, v___x_4094_, v___x_4096_, v___x_4097_);
lean_dec_ref(v___x_4096_);
if (lean_obj_tag(v___x_4098_) == 0)
{
lean_object* v_a_4099_; uint8_t v___x_4100_; 
v_a_4099_ = lean_ctor_get(v___x_4098_, 0);
lean_inc(v_a_4099_);
lean_dec_ref_known(v___x_4098_, 1);
v___x_4100_ = lean_string_validate_utf8(v_a_4099_);
if (v___x_4100_ == 0)
{
lean_object* v___x_4101_; lean_object* v___x_4102_; 
lean_dec(v_a_4099_);
v___x_4101_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_4102_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4101_);
v___y_4062_ = v_a_4085_;
v_received_4063_ = v___x_4102_;
goto v___jp_4061_;
}
else
{
lean_object* v___x_4103_; 
v___x_4103_ = lean_string_from_utf8_unchecked(v_a_4099_);
v___y_4062_ = v_a_4085_;
v_received_4063_ = v___x_4103_;
goto v___jp_4061_;
}
}
else
{
lean_object* v___x_4104_; 
lean_dec_ref_known(v___x_4098_, 1);
v___x_4104_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_4062_ = v_a_4085_;
v_received_4063_ = v___x_4104_;
goto v___jp_4061_;
}
}
}
}
}
else
{
v___y_4082_ = v_a_4085_;
goto v___jp_4081_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2___boxed(lean_object* v_context_4137_, lean_object* v_d_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v_res_4140_; 
v_res_4140_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2(v_context_4137_, v_d_4138_);
lean_dec_ref(v_context_4137_);
return v_res_4140_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1(lean_object* v_context_4141_, lean_object* v_bytes_4142_){
_start:
{
lean_object* v___x_4144_; 
v___x_4144_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4142_);
if (lean_obj_tag(v___x_4144_) == 0)
{
lean_object* v_a_4145_; lean_object* v___x_4146_; 
v_a_4145_ = lean_ctor_get(v___x_4144_, 0);
lean_inc(v_a_4145_);
lean_dec_ref_known(v___x_4144_, 1);
v___x_4146_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1_spec__2(v_context_4141_, v_a_4145_);
return v___x_4146_;
}
else
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4154_; 
v_a_4147_ = lean_ctor_get(v___x_4144_, 0);
v_isSharedCheck_4154_ = !lean_is_exclusive(v___x_4144_);
if (v_isSharedCheck_4154_ == 0)
{
v___x_4149_ = v___x_4144_;
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v___x_4144_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4154_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4152_; 
if (v_isShared_4150_ == 0)
{
v___x_4152_ = v___x_4149_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v_a_4147_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1___boxed(lean_object* v_context_4155_, lean_object* v_bytes_4156_, lean_object* v_a_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1(v_context_4155_, v_bytes_4156_);
lean_dec_ref(v_bytes_4156_);
lean_dec_ref(v_context_4155_);
return v_res_4158_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0(uint8_t v_await_4159_, uint64_t v_extra_4160_){
_start:
{
uint64_t v___x_4161_; uint64_t v___y_4163_; 
v___x_4161_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_4159_ == 0)
{
uint64_t v___x_4166_; 
v___x_4166_ = 0ULL;
v___y_4163_ = v___x_4166_;
goto v___jp_4162_;
}
else
{
uint64_t v___x_4167_; 
v___x_4167_ = 2ULL;
v___y_4163_ = v___x_4167_;
goto v___jp_4162_;
}
v___jp_4162_:
{
uint64_t v___x_4164_; uint64_t v___x_4165_; 
v___x_4164_ = lean_uint64_lor(v___x_4161_, v___y_4163_);
v___x_4165_ = lean_uint64_lor(v___x_4164_, v_extra_4160_);
return v___x_4165_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0___boxed(lean_object* v_await_4168_, lean_object* v_extra_4169_){
_start:
{
uint8_t v_await_boxed_4170_; uint64_t v_extra_boxed_4171_; uint64_t v_res_4172_; lean_object* v_r_4173_; 
v_await_boxed_4170_ = lean_unbox(v_await_4168_);
v_extra_boxed_4171_ = lean_unbox_uint64(v_extra_4169_);
lean_dec_ref(v_extra_4169_);
v_res_4172_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0(v_await_boxed_4170_, v_extra_boxed_4171_);
v_r_4173_ = lean_box_uint64(v_res_4172_);
return v_r_4173_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4174_; uint8_t v___x_4175_; uint64_t v___x_4176_; 
v___x_4174_ = 8ULL;
v___x_4175_ = 0;
v___x_4176_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__0(v___x_4175_, v___x_4174_);
return v___x_4176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0(lean_object* v_o_4177_, lean_object* v_name_4178_, lean_object* v_args_4179_){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; uint64_t v___x_4184_; lean_object* v___x_4185_; 
v___x_4181_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4182_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4182_, 0, v_o_4177_);
lean_ctor_set(v___x_4182_, 1, v___x_4181_);
lean_inc_ref(v_name_4178_);
v___x_4183_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4183_, 0, v_name_4178_);
v___x_4184_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___closed__0);
v___x_4185_ = l_Lasm_JS_Value_invokeRaw(v___x_4182_, v___x_4183_, v_args_4179_, v___x_4184_);
if (lean_obj_tag(v___x_4185_) == 0)
{
lean_object* v_a_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; 
v_a_4186_ = lean_ctor_get(v___x_4185_, 0);
lean_inc(v_a_4186_);
lean_dec_ref_known(v___x_4185_, 1);
v___x_4187_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_4188_ = lean_string_append(v___x_4187_, v_name_4178_);
lean_dec_ref(v_name_4178_);
v___x_4189_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0_spec__1(v___x_4188_, v_a_4186_);
lean_dec(v_a_4186_);
lean_dec_ref(v___x_4188_);
return v___x_4189_;
}
else
{
lean_object* v_a_4190_; lean_object* v___x_4192_; uint8_t v_isShared_4193_; uint8_t v_isSharedCheck_4197_; 
lean_dec_ref(v_name_4178_);
v_a_4190_ = lean_ctor_get(v___x_4185_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v___x_4185_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4192_ = v___x_4185_;
v_isShared_4193_ = v_isSharedCheck_4197_;
goto v_resetjp_4191_;
}
else
{
lean_inc(v_a_4190_);
lean_dec(v___x_4185_);
v___x_4192_ = lean_box(0);
v_isShared_4193_ = v_isSharedCheck_4197_;
goto v_resetjp_4191_;
}
v_resetjp_4191_:
{
lean_object* v___x_4195_; 
if (v_isShared_4193_ == 0)
{
v___x_4195_ = v___x_4192_;
goto v_reusejp_4194_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v_a_4190_);
v___x_4195_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4194_;
}
v_reusejp_4194_:
{
return v___x_4195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0___boxed(lean_object* v_o_4198_, lean_object* v_name_4199_, lean_object* v_args_4200_, lean_object* v_a_4201_){
_start:
{
lean_object* v_res_4202_; 
v_res_4202_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0(v_o_4198_, v_name_4199_, v_args_4200_);
return v_res_4202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_toJSON(lean_object* v_self_4204_){
_start:
{
lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; 
v___x_4206_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Checksums_toJSON___closed__0));
v___x_4207_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_4208_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_R2Checksums_toJSON_spec__0(v_self_4204_, v___x_4206_, v___x_4207_);
return v___x_4208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2Checksums_toJSON___boxed(lean_object* v_self_4209_, lean_object* v_a_4210_){
_start:
{
lean_object* v_res_4211_; 
v_res_4211_ = l_Lasm_JS_Cloudflare_R2Checksums_toJSON(v_self_4209_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_key(lean_object* v_self_4212_){
_start:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; 
v___x_4214_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Object_key___closed__0));
v___x_4215_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4212_, v___x_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_key___boxed(lean_object* v_self_4216_, lean_object* v_a_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_key(v_self_4216_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId(lean_object* v_self_4220_){
_start:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4222_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId___closed__0));
v___x_4223_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4220_, v___x_4222_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId___boxed(lean_object* v_self_4224_, lean_object* v_a_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadId(v_self_4224_);
return v_res_4226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__0(lean_object* v_x_4227_){
_start:
{
if (lean_obj_tag(v_x_4227_) == 0)
{
lean_object* v___x_4228_; 
v___x_4228_ = lean_box(0);
return v___x_4228_;
}
else
{
lean_object* v_val_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
v_val_4229_ = lean_ctor_get(v_x_4227_, 0);
lean_inc(v_val_4229_);
lean_dec_ref_known(v_x_4227_, 1);
v___x_4230_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2GetOptions___lam__0___closed__2));
v___x_4231_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2Bucket_get_spec__0_spec__2(v_val_4229_);
v___x_4232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4232_, 0, v___x_4230_);
lean_ctor_set(v___x_4232_, 1, v___x_4231_);
v___x_4233_ = lean_unsigned_to_nat(1u);
v___x_4234_ = lean_mk_empty_array_with_capacity(v___x_4233_);
v___x_4235_ = lean_array_push(v___x_4234_, v___x_4232_);
v___x_4236_ = l_Lasm_JS_Web_Support_fields(v___x_4235_);
lean_dec_ref(v___x_4235_);
return v___x_4236_;
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1(uint8_t v_await_4237_, uint64_t v_extra_4238_){
_start:
{
uint64_t v___x_4239_; uint64_t v___y_4241_; 
v___x_4239_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__0___closed__0);
if (v_await_4237_ == 0)
{
uint64_t v___x_4244_; 
v___x_4244_ = 0ULL;
v___y_4241_ = v___x_4244_;
goto v___jp_4240_;
}
else
{
uint64_t v___x_4245_; 
v___x_4245_ = 2ULL;
v___y_4241_ = v___x_4245_;
goto v___jp_4240_;
}
v___jp_4240_:
{
uint64_t v___x_4242_; uint64_t v___x_4243_; 
v___x_4242_ = lean_uint64_lor(v___x_4239_, v___y_4241_);
v___x_4243_ = lean_uint64_lor(v___x_4242_, v_extra_4238_);
return v___x_4243_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1___boxed(lean_object* v_await_4246_, lean_object* v_extra_4247_){
_start:
{
uint8_t v_await_boxed_4248_; uint64_t v_extra_boxed_4249_; uint64_t v_res_4250_; lean_object* v_r_4251_; 
v_await_boxed_4248_ = lean_unbox(v_await_4246_);
v_extra_boxed_4249_ = lean_unbox_uint64(v_extra_4247_);
lean_dec_ref(v_extra_4247_);
v_res_4250_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1(v_await_boxed_4248_, v_extra_boxed_4249_);
v_r_4251_ = lean_box_uint64(v_res_4250_);
return v_r_4251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_4254_, lean_object* v_key_4255_){
_start:
{
if (lean_obj_tag(v_d_4254_) == 8)
{
lean_object* v___x_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4287_; 
v___x_4256_ = l_Lasm_JS_Data_field(v_d_4254_, v_key_4255_);
v_isSharedCheck_4287_ = !lean_is_exclusive(v_d_4254_);
if (v_isSharedCheck_4287_ == 0)
{
lean_object* v_unused_4288_; 
v_unused_4288_ = lean_ctor_get(v_d_4254_, 0);
lean_dec(v_unused_4288_);
v___x_4258_ = v_d_4254_;
v_isShared_4259_ = v_isSharedCheck_4287_;
goto v_resetjp_4257_;
}
else
{
lean_dec(v_d_4254_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4287_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
if (lean_obj_tag(v___x_4256_) == 4)
{
lean_object* v_s_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4267_; 
lean_del_object(v___x_4258_);
v_s_4260_ = lean_ctor_get(v___x_4256_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4256_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4262_ = v___x_4256_;
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_s_4260_);
lean_dec(v___x_4256_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4265_; 
if (v_isShared_4263_ == 0)
{
lean_ctor_set_tag(v___x_4262_, 1);
v___x_4265_ = v___x_4262_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_s_4260_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
return v___x_4265_;
}
}
}
else
{
lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; uint8_t v___x_4278_; 
v___x_4268_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_4269_ = lean_string_append(v___x_4268_, v_key_4255_);
v___x_4270_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_4271_ = lean_string_append(v___x_4269_, v___x_4270_);
v___x_4272_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Support_optionalRecordOf___at___00Lasm_JS_Cloudflare_R2Object_customMetadata_spec__0_spec__1___closed__1));
v___x_4273_ = lean_string_append(v___x_4271_, v___x_4272_);
v___x_4274_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_4275_ = lean_string_append(v___x_4273_, v___x_4274_);
v___x_4276_ = l_Lasm_JS_Data_describe(v___x_4256_);
v___x_4277_ = lean_string_append(v___x_4275_, v___x_4276_);
lean_dec_ref(v___x_4276_);
v___x_4278_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_4278_ == 0)
{
lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4282_; 
v___x_4279_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___x_4280_ = lean_string_append(v___x_4277_, v___x_4279_);
if (v_isShared_4259_ == 0)
{
lean_ctor_set_tag(v___x_4258_, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4280_);
v___x_4282_ = v___x_4258_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v___x_4280_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
else
{
lean_object* v___x_4285_; 
if (v_isShared_4259_ == 0)
{
lean_ctor_set_tag(v___x_4258_, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4277_);
v___x_4285_ = v___x_4258_;
goto v_reusejp_4284_;
}
else
{
lean_object* v_reuseFailAlloc_4286_; 
v_reuseFailAlloc_4286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4286_, 0, v___x_4277_);
v___x_4285_ = v_reuseFailAlloc_4286_;
goto v_reusejp_4284_;
}
v_reusejp_4284_:
{
return v___x_4285_;
}
}
}
}
}
else
{
lean_object* v___x_4289_; 
lean_dec(v_d_4254_);
v___x_4289_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5___closed__0));
return v___x_4289_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_4290_, lean_object* v_key_4291_){
_start:
{
lean_object* v_res_4292_; 
v_res_4292_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5(v_d_4290_, v_key_4291_);
lean_dec_ref(v_key_4291_);
return v_res_4292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_4296_, lean_object* v_key_4297_){
_start:
{
if (lean_obj_tag(v_d_4296_) == 8)
{
lean_object* v___x_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4326_; 
v___x_4298_ = l_Lasm_JS_Data_field(v_d_4296_, v_key_4297_);
v_isSharedCheck_4326_ = !lean_is_exclusive(v_d_4296_);
if (v_isSharedCheck_4326_ == 0)
{
lean_object* v_unused_4327_; 
v_unused_4327_ = lean_ctor_get(v_d_4296_, 0);
lean_dec(v_unused_4327_);
v___x_4300_ = v_d_4296_;
v_isShared_4301_ = v_isSharedCheck_4326_;
goto v_resetjp_4299_;
}
else
{
lean_dec(v_d_4296_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4326_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
if (lean_obj_tag(v___x_4298_) == 3)
{
double v_n_4302_; lean_object* v___x_4303_; lean_object* v___x_4305_; 
v_n_4302_ = lean_ctor_get_float(v___x_4298_, 0);
lean_dec_ref_known(v___x_4298_, 0);
v___x_4303_ = lean_box_float(v_n_4302_);
if (v_isShared_4301_ == 0)
{
lean_ctor_set_tag(v___x_4300_, 1);
lean_ctor_set(v___x_4300_, 0, v___x_4303_);
v___x_4305_ = v___x_4300_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v___x_4303_);
v___x_4305_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
return v___x_4305_;
}
}
else
{
lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; uint8_t v___x_4317_; 
v___x_4307_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__0));
v___x_4308_ = lean_string_append(v___x_4307_, v_key_4297_);
v___x_4309_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__1));
v___x_4310_ = lean_string_append(v___x_4308_, v___x_4309_);
v___x_4311_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_4312_ = lean_string_append(v___x_4310_, v___x_4311_);
v___x_4313_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__3));
v___x_4314_ = lean_string_append(v___x_4312_, v___x_4313_);
v___x_4315_ = l_Lasm_JS_Data_describe(v___x_4298_);
v___x_4316_ = lean_string_append(v___x_4314_, v___x_4315_);
lean_dec_ref(v___x_4315_);
v___x_4317_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__5);
if (v___x_4317_ == 0)
{
lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4321_; 
v___x_4318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__6));
v___x_4319_ = lean_string_append(v___x_4316_, v___x_4318_);
if (v_isShared_4301_ == 0)
{
lean_ctor_set_tag(v___x_4300_, 0);
lean_ctor_set(v___x_4300_, 0, v___x_4319_);
v___x_4321_ = v___x_4300_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4322_; 
v_reuseFailAlloc_4322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4322_, 0, v___x_4319_);
v___x_4321_ = v_reuseFailAlloc_4322_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
return v___x_4321_;
}
}
else
{
lean_object* v___x_4324_; 
if (v_isShared_4301_ == 0)
{
lean_ctor_set_tag(v___x_4300_, 0);
lean_ctor_set(v___x_4300_, 0, v___x_4316_);
v___x_4324_ = v___x_4300_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v___x_4316_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
}
}
else
{
lean_object* v___x_4328_; 
lean_dec(v_d_4296_);
v___x_4328_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___closed__1));
return v___x_4328_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_4329_, lean_object* v_key_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4(v_d_4329_, v_key_4330_);
lean_dec_ref(v_key_4330_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3(lean_object* v_context_4332_, lean_object* v_d_4333_){
_start:
{
lean_object* v___y_4336_; lean_object* v___y_4337_; lean_object* v___y_4342_; lean_object* v_received_4343_; lean_object* v___y_4362_; lean_object* v_a_4365_; lean_object* v___x_4389_; lean_object* v___x_4390_; 
v___x_4389_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0));
lean_inc(v_d_4333_);
v___x_4390_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__4(v_d_4333_, v___x_4389_);
if (lean_obj_tag(v___x_4390_) == 0)
{
lean_object* v_a_4391_; 
v_a_4391_ = lean_ctor_get(v___x_4390_, 0);
lean_inc(v_a_4391_);
lean_dec_ref_known(v___x_4390_, 1);
v_a_4365_ = v_a_4391_;
goto v___jp_4364_;
}
else
{
lean_object* v_a_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; 
v_a_4392_ = lean_ctor_get(v___x_4390_, 0);
lean_inc(v_a_4392_);
lean_dec_ref_known(v___x_4390_, 1);
v___x_4393_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
lean_inc(v_d_4333_);
v___x_4394_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3_spec__5(v_d_4333_, v___x_4393_);
if (lean_obj_tag(v___x_4394_) == 0)
{
lean_object* v_a_4395_; 
lean_dec(v_a_4392_);
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
lean_inc(v_a_4395_);
lean_dec_ref_known(v___x_4394_, 1);
v_a_4365_ = v_a_4395_;
goto v___jp_4364_;
}
else
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4405_; 
lean_dec(v_d_4333_);
v_a_4396_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4398_ = v___x_4394_;
v_isShared_4399_ = v_isSharedCheck_4405_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v___x_4394_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4405_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4400_; double v___x_4401_; lean_object* v___x_4403_; 
v___x_4400_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4400_, 0, v_a_4396_);
v___x_4401_ = lean_unbox_float(v_a_4392_);
lean_dec(v_a_4392_);
lean_ctor_set_float(v___x_4400_, sizeof(void*)*1, v___x_4401_);
if (v_isShared_4399_ == 0)
{
lean_ctor_set_tag(v___x_4398_, 0);
lean_ctor_set(v___x_4398_, 0, v___x_4400_);
v___x_4403_ = v___x_4398_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v___x_4400_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
}
v___jp_4335_:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4338_ = lean_string_append(v___y_4336_, v___y_4337_);
lean_dec_ref(v___y_4337_);
v___x_4339_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4339_, 0, v___x_4338_);
v___x_4340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4340_, 0, v___x_4339_);
return v___x_4340_;
}
v___jp_4341_:
{
lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; uint8_t v___x_4355_; 
v___x_4344_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__0));
v___x_4345_ = lean_string_append(v___x_4344_, v_context_4332_);
v___x_4346_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__1));
v___x_4347_ = lean_string_append(v___x_4345_, v___x_4346_);
v___x_4348_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSR2UploadedPart___closed__1));
v___x_4349_ = lean_string_append(v___x_4347_, v___x_4348_);
v___x_4350_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__3));
v___x_4351_ = lean_string_append(v___x_4349_, v___x_4350_);
v___x_4352_ = lean_string_append(v___x_4351_, v_received_4343_);
lean_dec_ref(v_received_4343_);
v___x_4353_ = lean_string_utf8_byte_size(v___y_4342_);
v___x_4354_ = lean_unsigned_to_nat(0u);
v___x_4355_ = lean_nat_dec_eq(v___x_4353_, v___x_4354_);
if (v___x_4355_ == 0)
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; 
v___x_4356_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__4));
v___x_4357_ = lean_string_append(v___x_4356_, v___y_4342_);
lean_dec_ref(v___y_4342_);
v___x_4358_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_list_spec__1_spec__3_spec__5_spec__7___closed__5));
v___x_4359_ = lean_string_append(v___x_4357_, v___x_4358_);
v___y_4336_ = v___x_4352_;
v___y_4337_ = v___x_4359_;
goto v___jp_4335_;
}
else
{
lean_object* v___x_4360_; 
lean_dec_ref(v___y_4342_);
v___x_4360_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___y_4336_ = v___x_4352_;
v___y_4337_ = v___x_4360_;
goto v___jp_4335_;
}
}
v___jp_4361_:
{
lean_object* v___x_4363_; 
v___x_4363_ = l_Lasm_JS_Data_describe(v_d_4333_);
v___y_4342_ = v___y_4362_;
v_received_4343_ = v___x_4363_;
goto v___jp_4341_;
}
v___jp_4364_:
{
if (lean_obj_tag(v_d_4333_) == 9)
{
lean_object* v_value_4366_; lean_object* v_description_4367_; lean_object* v___x_4368_; uint8_t v___x_4369_; 
v_value_4366_ = lean_ctor_get(v_d_4333_, 0);
v_description_4367_ = lean_ctor_get(v_d_4333_, 1);
v___x_4368_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4369_ = lean_string_dec_eq(v_description_4367_, v___x_4368_);
if (v___x_4369_ == 0)
{
v___y_4362_ = v_a_4365_;
goto v___jp_4361_;
}
else
{
lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4386_; 
lean_inc(v_value_4366_);
v_isSharedCheck_4386_ = !lean_is_exclusive(v_d_4333_);
if (v_isSharedCheck_4386_ == 0)
{
lean_object* v_unused_4387_; lean_object* v_unused_4388_; 
v_unused_4387_ = lean_ctor_get(v_d_4333_, 1);
lean_dec(v_unused_4387_);
v_unused_4388_ = lean_ctor_get(v_d_4333_, 0);
lean_dec(v_unused_4388_);
v___x_4371_ = v_d_4333_;
v_isShared_4372_ = v_isSharedCheck_4386_;
goto v_resetjp_4370_;
}
else
{
lean_dec(v_d_4333_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4386_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
uint32_t v___x_4373_; uint64_t v___x_4374_; lean_object* v___x_4376_; 
v___x_4373_ = 206;
v___x_4374_ = 0ULL;
lean_inc(v_value_4366_);
if (v_isShared_4372_ == 0)
{
lean_ctor_set(v___x_4371_, 1, v___x_4368_);
v___x_4376_ = v___x_4371_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_value_4366_);
lean_ctor_set(v_reuseFailAlloc_4385_, 1, v___x_4368_);
v___x_4376_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
uint32_t v___x_4377_; lean_object* v___x_4378_; 
v___x_4377_ = lasm_js_value_handle(v_value_4366_);
lean_dec(v_value_4366_);
v___x_4378_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4373_, v___x_4374_, v___x_4376_, v___x_4377_);
lean_dec_ref(v___x_4376_);
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; uint8_t v___x_4380_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
lean_inc(v_a_4379_);
lean_dec_ref_known(v___x_4378_, 1);
v___x_4380_ = lean_string_validate_utf8(v_a_4379_);
if (v___x_4380_ == 0)
{
lean_object* v___x_4381_; lean_object* v___x_4382_; 
lean_dec(v_a_4379_);
v___x_4381_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__10);
v___x_4382_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4381_);
v___y_4342_ = v_a_4365_;
v_received_4343_ = v___x_4382_;
goto v___jp_4341_;
}
else
{
lean_object* v___x_4383_; 
v___x_4383_ = lean_string_from_utf8_unchecked(v_a_4379_);
v___y_4342_ = v_a_4365_;
v_received_4343_ = v___x_4383_;
goto v___jp_4341_;
}
}
else
{
lean_object* v___x_4384_; 
lean_dec_ref_known(v___x_4378_, 1);
v___x_4384_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1_spec__2___closed__11));
v___y_4342_ = v_a_4365_;
v_received_4343_ = v___x_4384_;
goto v___jp_4341_;
}
}
}
}
}
else
{
v___y_4362_ = v_a_4365_;
goto v___jp_4361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3___boxed(lean_object* v_context_4406_, lean_object* v_d_4407_, lean_object* v_a_4408_){
_start:
{
lean_object* v_res_4409_; 
v_res_4409_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3(v_context_4406_, v_d_4407_);
lean_dec_ref(v_context_4406_);
return v_res_4409_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0(lean_object* v_context_4410_, lean_object* v_x_4411_){
_start:
{
lean_object* v_val_4414_; 
if (lean_obj_tag(v_x_4411_) == 0)
{
lean_object* v_a_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4424_; 
v_a_4416_ = lean_ctor_get(v_x_4411_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v_x_4411_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4418_ = v_x_4411_;
v_isShared_4419_ = v_isSharedCheck_4424_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_a_4416_);
lean_dec(v_x_4411_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4424_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4421_; 
if (v_isShared_4419_ == 0)
{
v___x_4421_ = v___x_4418_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4416_);
v___x_4421_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
lean_object* v___x_4422_; 
v___x_4422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4422_, 0, v___x_4421_);
return v___x_4422_;
}
}
}
else
{
lean_object* v_a_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4438_; 
v_a_4425_ = lean_ctor_get(v_x_4411_, 0);
v_isSharedCheck_4438_ = !lean_is_exclusive(v_x_4411_);
if (v_isSharedCheck_4438_ == 0)
{
v___x_4427_ = v_x_4411_;
v_isShared_4428_ = v_isSharedCheck_4438_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_a_4425_);
lean_dec(v_x_4411_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4438_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4429_; 
v___x_4429_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2_spec__3(v_context_4410_, v_a_4425_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v___x_4432_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4430_);
lean_dec_ref_known(v___x_4429_, 1);
if (v_isShared_4428_ == 0)
{
lean_ctor_set(v___x_4427_, 0, v_a_4430_);
v___x_4432_ = v___x_4427_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v_a_4430_);
v___x_4432_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
v_val_4414_ = v___x_4432_;
goto v___jp_4413_;
}
}
else
{
lean_object* v_a_4434_; lean_object* v___x_4436_; 
v_a_4434_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4434_);
lean_dec_ref_known(v___x_4429_, 1);
if (v_isShared_4428_ == 0)
{
lean_ctor_set_tag(v___x_4427_, 0);
lean_ctor_set(v___x_4427_, 0, v_a_4434_);
v___x_4436_ = v___x_4427_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v_a_4434_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
v_val_4414_ = v___x_4436_;
goto v___jp_4413_;
}
}
}
}
v___jp_4413_:
{
lean_object* v___x_4415_; 
v___x_4415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4415_, 0, v_val_4414_);
return v___x_4415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0___boxed(lean_object* v_context_4439_, lean_object* v_x_4440_, lean_object* v___y_4441_){
_start:
{
lean_object* v_res_4442_; 
v_res_4442_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0(v_context_4439_, v_x_4440_);
lean_dec_ref(v_context_4439_);
return v_res_4442_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_4443_, uint32_t v_op_4444_, uint64_t v_flags_4445_, lean_object* v_payload_4446_, lean_object* v___f_4447_, lean_object* v___f_4448_, lean_object* v___f_4449_, lean_object* v_x_4450_){
_start:
{
if (lean_obj_tag(v_x_4450_) == 0)
{
lean_object* v_a_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4460_; 
lean_dec_ref(v___f_4449_);
lean_dec_ref(v___f_4448_);
lean_dec_ref(v___f_4447_);
lean_dec(v_payload_4446_);
v_a_4452_ = lean_ctor_get(v_x_4450_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v_x_4450_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4454_ = v_x_4450_;
v_isShared_4455_ = v_isSharedCheck_4460_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_a_4452_);
lean_dec(v_x_4450_);
v___x_4454_ = lean_box(0);
v_isShared_4455_ = v_isSharedCheck_4460_;
goto v_resetjp_4453_;
}
v_resetjp_4453_:
{
lean_object* v___x_4457_; 
if (v_isShared_4455_ == 0)
{
v___x_4457_ = v___x_4454_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v_a_4452_);
v___x_4457_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
lean_object* v___x_4458_; 
v___x_4458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4458_, 0, v___x_4457_);
return v___x_4458_;
}
}
}
else
{
lean_object* v_a_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4507_; 
v_a_4461_ = lean_ctor_get(v_x_4450_, 0);
v_isSharedCheck_4507_ = !lean_is_exclusive(v_x_4450_);
if (v_isSharedCheck_4507_ == 0)
{
v___x_4463_ = v_x_4450_;
v_isShared_4464_ = v_isSharedCheck_4507_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_a_4461_);
lean_dec(v_x_4450_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4507_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; uint8_t v___x_4467_; 
v___x_4465_ = lean_string_utf8_byte_size(v_failurePrefix_4443_);
v___x_4466_ = lean_unsigned_to_nat(0u);
v___x_4467_ = lean_nat_dec_eq(v___x_4465_, v___x_4466_);
if (v___x_4467_ == 0)
{
lean_object* v___f_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___f_4472_; lean_object* v_val_4474_; lean_object* v___x_4479_; 
lean_dec_ref(v___f_4449_);
lean_inc(v_a_4461_);
v___f_4468_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4468_, 0, v_a_4461_);
v___x_4469_ = lean_box(v___x_4467_);
v___x_4470_ = lean_box_uint32(v_op_4444_);
v___x_4471_ = lean_box_uint64(v_flags_4445_);
lean_inc(v_payload_4446_);
v___f_4472_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4472_, 0, v___x_4466_);
lean_closure_set(v___f_4472_, 1, v___x_4469_);
lean_closure_set(v___f_4472_, 2, v___f_4468_);
lean_closure_set(v___f_4472_, 3, v_a_4461_);
lean_closure_set(v___f_4472_, 4, v___x_4470_);
lean_closure_set(v___f_4472_, 5, v___x_4471_);
lean_closure_set(v___f_4472_, 6, v_payload_4446_);
v___x_4479_ = l_Lasm_JS_Wire_encodeIO(v_payload_4446_);
lean_dec(v_payload_4446_);
if (lean_obj_tag(v___x_4479_) == 0)
{
lean_object* v_a_4480_; lean_object* v___x_4482_; 
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
lean_inc(v_a_4480_);
lean_dec_ref_known(v___x_4479_, 1);
if (v_isShared_4464_ == 0)
{
lean_ctor_set(v___x_4463_, 0, v_a_4480_);
v___x_4482_ = v___x_4463_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v_a_4480_);
v___x_4482_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
v_val_4474_ = v___x_4482_;
goto v___jp_4473_;
}
}
else
{
lean_object* v_a_4484_; lean_object* v___x_4486_; 
v_a_4484_ = lean_ctor_get(v___x_4479_, 0);
lean_inc(v_a_4484_);
lean_dec_ref_known(v___x_4479_, 1);
if (v_isShared_4464_ == 0)
{
lean_ctor_set_tag(v___x_4463_, 0);
lean_ctor_set(v___x_4463_, 0, v_a_4484_);
v___x_4486_ = v___x_4463_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4487_; 
v_reuseFailAlloc_4487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4487_, 0, v_a_4484_);
v___x_4486_ = v_reuseFailAlloc_4487_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
v_val_4474_ = v___x_4486_;
goto v___jp_4473_;
}
}
v___jp_4473_:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; 
v___x_4475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4475_, 0, v_val_4474_);
v___x_4476_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4466_, v___x_4467_, v___x_4475_, v___f_4472_);
v___x_4477_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4466_, v___x_4467_, v___x_4476_, v___f_4447_);
v___x_4478_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4466_, v___x_4467_, v___x_4477_, v___f_4448_);
return v___x_4478_;
}
}
else
{
lean_object* v___f_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___f_4491_; uint8_t v___x_4492_; lean_object* v_val_4494_; lean_object* v___x_4498_; 
lean_dec_ref(v___f_4448_);
lean_dec_ref(v___f_4447_);
lean_inc(v_a_4461_);
v___f_4488_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4488_, 0, v_a_4461_);
v___x_4489_ = lean_box_uint32(v_op_4444_);
v___x_4490_ = lean_box_uint64(v_flags_4445_);
lean_inc(v_payload_4446_);
v___f_4491_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4491_, 0, v___f_4488_);
lean_closure_set(v___f_4491_, 1, v_a_4461_);
lean_closure_set(v___f_4491_, 2, v___x_4489_);
lean_closure_set(v___f_4491_, 3, v___x_4490_);
lean_closure_set(v___f_4491_, 4, v_payload_4446_);
v___x_4492_ = 0;
v___x_4498_ = l_Lasm_JS_Wire_encodeIO(v_payload_4446_);
lean_dec(v_payload_4446_);
if (lean_obj_tag(v___x_4498_) == 0)
{
lean_object* v_a_4499_; lean_object* v___x_4501_; 
v_a_4499_ = lean_ctor_get(v___x_4498_, 0);
lean_inc(v_a_4499_);
lean_dec_ref_known(v___x_4498_, 1);
if (v_isShared_4464_ == 0)
{
lean_ctor_set(v___x_4463_, 0, v_a_4499_);
v___x_4501_ = v___x_4463_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v_a_4499_);
v___x_4501_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
v_val_4494_ = v___x_4501_;
goto v___jp_4493_;
}
}
else
{
lean_object* v_a_4503_; lean_object* v___x_4505_; 
v_a_4503_ = lean_ctor_get(v___x_4498_, 0);
lean_inc(v_a_4503_);
lean_dec_ref_known(v___x_4498_, 1);
if (v_isShared_4464_ == 0)
{
lean_ctor_set_tag(v___x_4463_, 0);
lean_ctor_set(v___x_4463_, 0, v_a_4503_);
v___x_4505_ = v___x_4463_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v_a_4503_);
v___x_4505_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
v_val_4494_ = v___x_4505_;
goto v___jp_4493_;
}
}
v___jp_4493_:
{
lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; 
v___x_4495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4495_, 0, v_val_4494_);
v___x_4496_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4466_, v___x_4492_, v___x_4495_, v___f_4491_);
v___x_4497_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4466_, v___x_4492_, v___x_4496_, v___f_4449_);
return v___x_4497_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_4508_, lean_object* v_op_4509_, lean_object* v_flags_4510_, lean_object* v_payload_4511_, lean_object* v___f_4512_, lean_object* v___f_4513_, lean_object* v___f_4514_, lean_object* v_x_4515_, lean_object* v___y_4516_){
_start:
{
uint32_t v_op_boxed_4517_; uint64_t v_flags_boxed_4518_; lean_object* v_res_4519_; 
v_op_boxed_4517_ = lean_unbox_uint32(v_op_4509_);
lean_dec(v_op_4509_);
v_flags_boxed_4518_ = lean_unbox_uint64(v_flags_4510_);
lean_dec_ref(v_flags_4510_);
v_res_4519_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9(v_failurePrefix_4508_, v_op_boxed_4517_, v_flags_boxed_4518_, v_payload_4511_, v___f_4512_, v___f_4513_, v___f_4514_, v_x_4515_);
lean_dec_ref(v_failurePrefix_4508_);
return v_res_4519_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2(lean_object* v___f_4520_, lean_object* v_x_4521_){
_start:
{
if (lean_obj_tag(v_x_4521_) == 0)
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4531_; 
lean_dec_ref(v___f_4520_);
v_a_4523_ = lean_ctor_get(v_x_4521_, 0);
v_isSharedCheck_4531_ = !lean_is_exclusive(v_x_4521_);
if (v_isSharedCheck_4531_ == 0)
{
v___x_4525_ = v_x_4521_;
v_isShared_4526_ = v_isSharedCheck_4531_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v_x_4521_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4531_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4528_; 
if (v_isShared_4526_ == 0)
{
v___x_4528_ = v___x_4525_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v_a_4523_);
v___x_4528_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
lean_object* v___x_4529_; 
v___x_4529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4528_);
return v___x_4529_;
}
}
}
else
{
lean_object* v_a_4532_; lean_object* v___x_4533_; 
v_a_4532_ = lean_ctor_get(v_x_4521_, 0);
lean_inc(v_a_4532_);
lean_dec_ref_known(v_x_4521_, 1);
v___x_4533_ = lean_apply_2(v___f_4520_, v_a_4532_, lean_box(0));
return v___x_4533_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2___boxed(lean_object* v___f_4534_, lean_object* v_x_4535_, lean_object* v___y_4536_){
_start:
{
lean_object* v_res_4537_; 
v_res_4537_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2(v___f_4534_, v_x_4535_);
return v_res_4537_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1(lean_object* v___f_4538_, lean_object* v_bytes_4539_){
_start:
{
lean_object* v___x_4541_; uint8_t v___x_4542_; lean_object* v_val_4544_; lean_object* v___x_4547_; 
v___x_4541_ = lean_unsigned_to_nat(0u);
v___x_4542_ = 0;
v___x_4547_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4539_);
if (lean_obj_tag(v___x_4547_) == 0)
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
v_a_4548_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4550_ = v___x_4547_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v___x_4547_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
lean_ctor_set_tag(v___x_4550_, 1);
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
v_val_4544_ = v___x_4553_;
goto v___jp_4543_;
}
}
}
else
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4563_; 
v_a_4556_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4558_ = v___x_4547_;
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v___x_4547_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4559_ == 0)
{
lean_ctor_set_tag(v___x_4558_, 0);
v___x_4561_ = v___x_4558_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_a_4556_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
v_val_4544_ = v___x_4561_;
goto v___jp_4543_;
}
}
}
v___jp_4543_:
{
lean_object* v___x_4545_; lean_object* v___x_4546_; 
v___x_4545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4545_, 0, v_val_4544_);
v___x_4546_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4541_, v___x_4542_, v___x_4545_, v___f_4538_);
return v___x_4546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1___boxed(lean_object* v___f_4564_, lean_object* v_bytes_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1(v___f_4564_, v_bytes_4565_);
lean_dec_ref(v_bytes_4565_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3(lean_object* v___f_4568_, lean_object* v_x_4569_){
_start:
{
if (lean_obj_tag(v_x_4569_) == 0)
{
lean_object* v_a_4571_; lean_object* v___x_4573_; uint8_t v_isShared_4574_; uint8_t v_isSharedCheck_4579_; 
lean_dec_ref(v___f_4568_);
v_a_4571_ = lean_ctor_get(v_x_4569_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v_x_4569_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4573_ = v_x_4569_;
v_isShared_4574_ = v_isSharedCheck_4579_;
goto v_resetjp_4572_;
}
else
{
lean_inc(v_a_4571_);
lean_dec(v_x_4569_);
v___x_4573_ = lean_box(0);
v_isShared_4574_ = v_isSharedCheck_4579_;
goto v_resetjp_4572_;
}
v_resetjp_4572_:
{
lean_object* v___x_4576_; 
if (v_isShared_4574_ == 0)
{
v___x_4576_ = v___x_4573_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_a_4571_);
v___x_4576_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
lean_object* v___x_4577_; 
v___x_4577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4576_);
return v___x_4577_;
}
}
}
else
{
lean_object* v___x_4581_; uint8_t v_isShared_4582_; uint8_t v_isSharedCheck_4591_; 
v_isSharedCheck_4591_ = !lean_is_exclusive(v_x_4569_);
if (v_isSharedCheck_4591_ == 0)
{
lean_object* v_unused_4592_; 
v_unused_4592_ = lean_ctor_get(v_x_4569_, 0);
lean_dec(v_unused_4592_);
v___x_4581_ = v_x_4569_;
v_isShared_4582_ = v_isSharedCheck_4591_;
goto v_resetjp_4580_;
}
else
{
lean_dec(v_x_4569_);
v___x_4581_ = lean_box(0);
v_isShared_4582_ = v_isSharedCheck_4591_;
goto v_resetjp_4580_;
}
v_resetjp_4580_:
{
lean_object* v___x_4583_; uint8_t v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4587_; 
v___x_4583_ = lean_unsigned_to_nat(0u);
v___x_4584_ = 0;
v___x_4585_ = lean_io_promise_new();
if (v_isShared_4582_ == 0)
{
lean_ctor_set(v___x_4581_, 0, v___x_4585_);
v___x_4587_ = v___x_4581_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4590_; 
v_reuseFailAlloc_4590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4590_, 0, v___x_4585_);
v___x_4587_ = v_reuseFailAlloc_4590_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
lean_object* v___x_4588_; lean_object* v___x_4589_; 
v___x_4588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4588_, 0, v___x_4587_);
v___x_4589_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4583_, v___x_4584_, v___x_4588_, v___f_4568_);
return v___x_4589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3___boxed(lean_object* v___f_4593_, lean_object* v_x_4594_, lean_object* v___y_4595_){
_start:
{
lean_object* v_res_4596_; 
v_res_4596_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3(v___f_4593_, v_x_4594_);
return v_res_4596_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2(lean_object* v_context_4597_, uint32_t v_op_4598_, uint64_t v_flags_4599_, lean_object* v_payload_4600_, lean_object* v_failurePrefix_4601_){
_start:
{
lean_object* v___f_4603_; lean_object* v___f_4604_; lean_object* v___f_4605_; lean_object* v___f_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___f_4609_; lean_object* v___f_4610_; lean_object* v___x_4611_; uint8_t v___x_4612_; lean_object* v_val_4614_; lean_object* v___x_4617_; 
v___f_4603_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4603_, 0, v_context_4597_);
v___f_4604_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4604_, 0, v___f_4603_);
v___f_4605_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4605_, 0, v___f_4604_);
lean_inc_ref(v_failurePrefix_4601_);
v___f_4606_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4606_, 0, v_failurePrefix_4601_);
v___x_4607_ = lean_box_uint32(v_op_4598_);
v___x_4608_ = lean_box_uint64(v_flags_4599_);
lean_inc_ref(v___f_4605_);
v___f_4609_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_4609_, 0, v_failurePrefix_4601_);
lean_closure_set(v___f_4609_, 1, v___x_4607_);
lean_closure_set(v___f_4609_, 2, v___x_4608_);
lean_closure_set(v___f_4609_, 3, v_payload_4600_);
lean_closure_set(v___f_4609_, 4, v___f_4606_);
lean_closure_set(v___f_4609_, 5, v___f_4605_);
lean_closure_set(v___f_4609_, 6, v___f_4605_);
v___f_4610_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4610_, 0, v___f_4609_);
v___x_4611_ = lean_unsigned_to_nat(0u);
v___x_4612_ = 0;
v___x_4617_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
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
v___x_4616_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4611_, v___x_4612_, v___x_4615_, v___f_4610_);
return v___x_4616_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2___boxed(lean_object* v_context_4634_, lean_object* v_op_4635_, lean_object* v_flags_4636_, lean_object* v_payload_4637_, lean_object* v_failurePrefix_4638_, lean_object* v_a_4639_){
_start:
{
uint32_t v_op_boxed_4640_; uint64_t v_flags_boxed_4641_; lean_object* v_res_4642_; 
v_op_boxed_4640_ = lean_unbox_uint32(v_op_4635_);
lean_dec(v_op_4635_);
v_flags_boxed_4641_ = lean_unbox_uint64(v_flags_4636_);
lean_dec_ref(v_flags_4636_);
v_res_4642_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2(v_context_4634_, v_op_boxed_4640_, v_flags_boxed_4641_, v_payload_4637_, v_failurePrefix_4638_);
return v_res_4642_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0(void){
_start:
{
uint64_t v___x_4643_; uint8_t v___x_4644_; uint64_t v___x_4645_; 
v___x_4643_ = 8ULL;
v___x_4644_ = 0;
v___x_4645_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__1(v___x_4644_, v___x_4643_);
return v___x_4645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1(lean_object* v_o_4646_, lean_object* v_name_4647_, lean_object* v_args_4648_){
_start:
{
lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; uint32_t v___x_4655_; uint64_t v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; 
v___x_4650_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4651_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4651_, 0, v_o_4646_);
lean_ctor_set(v___x_4651_, 1, v___x_4650_);
lean_inc_ref(v_name_4647_);
v___x_4652_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4652_, 0, v_name_4647_);
v___x_4653_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2Bucket_head_spec__0___closed__0));
v___x_4654_ = lean_string_append(v___x_4653_, v_name_4647_);
lean_dec_ref(v_name_4647_);
v___x_4655_ = 205;
v___x_4656_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___closed__0);
v___x_4657_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4657_, 0, v_args_4648_);
v___x_4658_ = lean_unsigned_to_nat(3u);
v___x_4659_ = lean_mk_empty_array_with_capacity(v___x_4658_);
v___x_4660_ = lean_array_push(v___x_4659_, v___x_4651_);
v___x_4661_ = lean_array_push(v___x_4660_, v___x_4652_);
v___x_4662_ = lean_array_push(v___x_4661_, v___x_4657_);
v___x_4663_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4663_, 0, v___x_4662_);
v___x_4664_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1_spec__2(v___x_4654_, v___x_4655_, v___x_4656_, v___x_4663_, v___x_4650_);
return v___x_4664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1___boxed(lean_object* v_o_4665_, lean_object* v_name_4666_, lean_object* v_args_4667_, lean_object* v___y_4668_){
_start:
{
lean_object* v_res_4669_; 
v_res_4669_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1(v_o_4665_, v_name_4666_, v_args_4667_);
return v_res_4669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart(lean_object* v_self_4671_, double v_partNumber_4672_, lean_object* v_value_4673_, lean_object* v_options_4674_){
_start:
{
lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___y_4679_; 
v___x_4676_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart___closed__0));
v___x_4677_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4677_, 0, v_partNumber_4672_);
switch(lean_obj_tag(v_value_4673_))
{
case 1:
{
lean_object* v_value_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4695_; 
v_value_4688_ = lean_ctor_get(v_value_4673_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v_value_4673_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4690_ = v_value_4673_;
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_value_4688_);
lean_dec(v_value_4673_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v___x_4693_; 
if (v_isShared_4691_ == 0)
{
lean_ctor_set_tag(v___x_4690_, 4);
v___x_4693_ = v___x_4690_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v_value_4688_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
v___y_4679_ = v___x_4693_;
goto v___jp_4678_;
}
}
}
case 3:
{
lean_object* v_value_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
v_value_4696_ = lean_ctor_get(v_value_4673_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v_value_4673_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v_value_4673_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_value_4696_);
lean_dec(v_value_4673_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
lean_ctor_set_tag(v___x_4698_, 6);
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_value_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
v___y_4679_ = v___x_4701_;
goto v___jp_4678_;
}
}
}
default: 
{
lean_object* v_value_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; 
v_value_4704_ = lean_ctor_get(v_value_4673_, 0);
lean_inc(v_value_4704_);
lean_dec_ref(v_value_4673_);
v___x_4705_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2Bucket___lam__0___closed__0));
v___x_4706_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4706_, 0, v_value_4704_);
lean_ctor_set(v___x_4706_, 1, v___x_4705_);
v___y_4679_ = v___x_4706_;
goto v___jp_4678_;
}
}
v___jp_4678_:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v___x_4680_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__0(v_options_4674_);
v___x_4681_ = lean_unsigned_to_nat(3u);
v___x_4682_ = lean_mk_empty_array_with_capacity(v___x_4681_);
v___x_4683_ = lean_array_push(v___x_4682_, v___x_4677_);
v___x_4684_ = lean_array_push(v___x_4683_, v___y_4679_);
v___x_4685_ = lean_array_push(v___x_4684_, v___x_4680_);
v___x_4686_ = l_Lasm_JS_Web_Support_args(v___x_4685_);
v___x_4687_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart_spec__1(v_self_4671_, v___x_4676_, v___x_4686_);
return v___x_4687_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart___boxed(lean_object* v_self_4707_, lean_object* v_partNumber_4708_, lean_object* v_value_4709_, lean_object* v_options_4710_, lean_object* v_a_4711_){
_start:
{
double v_partNumber_boxed_4712_; lean_object* v_res_4713_; 
v_partNumber_boxed_4712_ = lean_unbox_float(v_partNumber_4708_);
lean_dec_ref(v_partNumber_4708_);
v_res_4713_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_uploadPart(v_self_4707_, v_partNumber_boxed_4712_, v_value_4709_, v_options_4710_);
return v_res_4713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_abort(lean_object* v_self_4715_){
_start:
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4717_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2MultipartUpload_abort___closed__0));
v___x_4718_ = lean_obj_once(&l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3, &l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3_once, _init_l_Lasm_JS_Cloudflare_R2ObjectBody_arrayBuffer___closed__3);
v___x_4719_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4715_, v___x_4717_, v___x_4718_);
return v___x_4719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_abort___boxed(lean_object* v_self_4720_, lean_object* v_a_4721_){
_start:
{
lean_object* v_res_4722_; 
v_res_4722_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_abort(v_self_4720_);
return v_res_4722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0(size_t v_sz_4723_, size_t v_i_4724_, lean_object* v_bs_4725_){
_start:
{
uint8_t v___x_4726_; 
v___x_4726_ = lean_usize_dec_lt(v_i_4724_, v_sz_4723_);
if (v___x_4726_ == 0)
{
return v_bs_4725_;
}
else
{
lean_object* v_v_4727_; double v_partNumber_4728_; lean_object* v_etag_4729_; lean_object* v___x_4730_; lean_object* v_bs_x27_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; size_t v___x_4743_; size_t v___x_4744_; lean_object* v___x_4745_; 
v_v_4727_ = lean_array_uget_borrowed(v_bs_4725_, v_i_4724_);
v_partNumber_4728_ = lean_ctor_get_float(v_v_4727_, sizeof(void*)*1);
v_etag_4729_ = lean_ctor_get(v_v_4727_, 0);
lean_inc_ref(v_etag_4729_);
v___x_4730_ = lean_unsigned_to_nat(0u);
v_bs_x27_4731_ = lean_array_uset(v_bs_4725_, v_i_4724_, v___x_4730_);
v___x_4732_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__0));
v___x_4733_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4733_, 0, v_partNumber_4728_);
v___x_4734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4734_, 0, v___x_4732_);
lean_ctor_set(v___x_4734_, 1, v___x_4733_);
v___x_4735_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSR2UploadedPart___lam__0___closed__1));
v___x_4736_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4736_, 0, v_etag_4729_);
v___x_4737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4737_, 0, v___x_4735_);
lean_ctor_set(v___x_4737_, 1, v___x_4736_);
v___x_4738_ = lean_unsigned_to_nat(2u);
v___x_4739_ = lean_mk_empty_array_with_capacity(v___x_4738_);
v___x_4740_ = lean_array_push(v___x_4739_, v___x_4734_);
v___x_4741_ = lean_array_push(v___x_4740_, v___x_4737_);
v___x_4742_ = l_Lasm_JS_Web_Support_fields(v___x_4741_);
lean_dec_ref(v___x_4741_);
v___x_4743_ = ((size_t)1ULL);
v___x_4744_ = lean_usize_add(v_i_4724_, v___x_4743_);
v___x_4745_ = lean_array_uset(v_bs_x27_4731_, v_i_4724_, v___x_4742_);
v_i_4724_ = v___x_4744_;
v_bs_4725_ = v___x_4745_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0___boxed(lean_object* v_sz_4747_, lean_object* v_i_4748_, lean_object* v_bs_4749_){
_start:
{
size_t v_sz_boxed_4750_; size_t v_i_boxed_4751_; lean_object* v_res_4752_; 
v_sz_boxed_4750_ = lean_unbox_usize(v_sz_4747_);
lean_dec(v_sz_4747_);
v_i_boxed_4751_ = lean_unbox_usize(v_i_4748_);
lean_dec(v_i_4748_);
v_res_4752_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0(v_sz_boxed_4750_, v_i_boxed_4751_, v_bs_4749_);
return v_res_4752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_complete(lean_object* v_self_4754_, lean_object* v_uploadedParts_4755_){
_start:
{
lean_object* v___f_4757_; lean_object* v___x_4758_; size_t v_sz_4759_; size_t v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; uint8_t v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___f_4757_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2Bucket_put___closed__0));
v___x_4758_ = ((lean_object*)(l_Lasm_JS_Cloudflare_R2MultipartUpload_complete___closed__0));
v_sz_4759_ = lean_array_size(v_uploadedParts_4755_);
v___x_4760_ = ((size_t)0ULL);
v___x_4761_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_R2MultipartUpload_complete_spec__0(v_sz_4759_, v___x_4760_, v_uploadedParts_4755_);
v___x_4762_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4762_, 0, v___x_4761_);
v___x_4763_ = lean_unsigned_to_nat(1u);
v___x_4764_ = lean_mk_empty_array_with_capacity(v___x_4763_);
v___x_4765_ = lean_array_push(v___x_4764_, v___x_4762_);
v___x_4766_ = l_Lasm_JS_Web_Support_args(v___x_4765_);
v___x_4767_ = lean_unsigned_to_nat(0u);
v___x_4768_ = 0;
v___x_4769_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_4754_, v___x_4758_, v___x_4766_);
v___x_4770_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4767_, v___x_4768_, v___x_4769_, v___f_4757_);
return v___x_4770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_R2MultipartUpload_complete___boxed(lean_object* v_self_4771_, lean_object* v_uploadedParts_4772_, lean_object* v_a_4773_){
_start:
{
lean_object* v_res_4774_; 
v_res_4774_ = l_Lasm_JS_Cloudflare_R2MultipartUpload_complete(v_self_4771_, v_uploadedParts_4772_);
return v_res_4774_;
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
