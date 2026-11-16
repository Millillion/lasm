// Lean compiler output
// Module: Lasm.JS.Bun.S3
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.File public import Lasm.JS.Web.Fetch public import Lasm.JS.Bun.Core
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_MarkdownRenderCallbacksLink_ofFn_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SpawnBaseOptionsIgnorePipeInheritOnExit_ofFn_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_BunFile_exists_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_FileSink_write_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
extern lean_object* l_Lasm_JS_instFromJSString;
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Bun_password_spec__0(lean_object*);
lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_write_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_presign_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_Archive_write_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_BunFile_exists_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3Client___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3Client___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSS3Client___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3Client___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3Client___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSS3Client = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3Client___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3Client___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3Client___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3Client___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3Client___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3Client___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSS3Client___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSS3Client___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSS3Client___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3Client___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3Client___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Bun.S3Client"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3Client___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3Client___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3Client___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3Client___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSS3Client___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3Client___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3Client___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSS3Client = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3Client___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Bun.S3ListObjectsOptionsEncodingType.url"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2;
static lean_once_cell_t l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Bun.S3ListObjectsOptionsEncodingType"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumAlgorithm.crc32"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumAlgorithm.crc32c"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumAlgorithm.sha1"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumAlgorithm.sha256"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumAlgorithm.crc64nvme"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumAlgorithm_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumAlgorithm;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "CRC32"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "CRC32C"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "SHA1"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SHA256"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "CRC64NVME"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumAlgorithm"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumType.composite"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumType.fullObject"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumType;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "COMPOSITE"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "FULL_OBJECT"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumType"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.standard"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.reducedRedundancy"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.glacier"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.standardIa"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.onezoneIa"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.intelligentTiering"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.deepArchive"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__13_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.outposts"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__14 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__14_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__15 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__15_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.glacierIr"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__16 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__16_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__17 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__17_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.snow"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__18 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__18_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__19 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__19_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass.expressOnezone"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__20 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__20_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__21 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__21_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsStorageClass_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsStorageClass;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "STANDARD"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "REDUCED_REDUNDANCY"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "GLACIER"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "STANDARD_IA"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ONEZONE_IA"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "INTELLIGENT_TIERING"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "DEEP_ARCHIVE"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "OUTPOSTS"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "GLACIER_IR"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__17_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "SNOW"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__19_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "EXPRESS_ONEZONE"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__20_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__21 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__21_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType = (const lean_object*)&l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseEncodingType.url"};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType = (const lean_object*)&l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseEncodingType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsResponseEncodingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSS3ListObjectsResponseEncodingType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseEncodingType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseEncodingType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseEncodingType = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsResponseEncodingType___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseEncodingType"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_arrayBuffer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_arrayBuffer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_request_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_request_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_response_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_response_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_bunFile_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_bunFile_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_s3File_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_s3File_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_file_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_file_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_archive_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_archive_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeRequestDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeRequestDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeRequestDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeRequestDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeRequestDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instCoeRequestDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeResponseDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeResponseDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeResponseDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeResponseDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeResponseDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeResponseDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instCoeResponseDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBunFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeBunFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeBunFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeBunFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeBunFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeBunFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instCoeBunFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeS3FileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeS3FileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeS3FileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeS3FileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeS3FileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeS3FileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instCoeS3FileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instCoeFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeArchiveDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeArchiveDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeArchiveDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeArchiveDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeArchiveDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeArchiveDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive = (const lean_object*)&l_Lasm_JS_Bun_instCoeArchiveDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prefix"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "continuationToken"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "delimiter"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "maxKeys"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "startAfter"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "encodingType"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "fetchOwner"};
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__2_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__2_value)} };
static const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions = (const lean_object*)&l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__0;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseCommonPrefixes"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "displayName"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__1;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsOwner"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "isRestoreInProgress"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "restoreExpiryDate"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__1;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContentsRestoreStatus"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "checksumAlgorithm"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "checksumType"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eTag"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lastModified"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "owner"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "restoreStatus"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "storageClass"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__0;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__1;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__2;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__3;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__5;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__6;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Bun.S3ListObjectsResponseContents"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__8;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "commonPrefixes"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "contents"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isTruncated"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "keyCount"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "nextContinuationToken"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__0;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__2;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.S3ListObjectsResponse"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6_value;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Bun.S3Client.new"};
static const lean_object* l_Lasm_JS_Bun_S3Client_new___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Bun_S3Client_new___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Bun.S3Client"};
static const lean_object* l_Lasm_JS_Bun_S3Client_new___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_new___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_new___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_file___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "file"};
static const lean_object* l_Lasm_JS_Bun_S3Client_file___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_file___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_file(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_file___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Bun.S3Client.staticFile"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticFile___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Bun.S3Client.file"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticFile___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticFile___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticFile___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticFile___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticFile___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticFile___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_write___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "write"};
static const lean_object* l_Lasm_JS_Bun_S3Client_write___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_write___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_write(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_write___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticWrite___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Bun.S3Client.staticWrite"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticWrite___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticWrite___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticWrite___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Bun.S3Client.write"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticWrite___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticWrite___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticWrite___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticWrite___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticWrite___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticWrite___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticWrite___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticWrite(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticWrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_presign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "presign"};
static const lean_object* l_Lasm_JS_Bun_S3Client_presign___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_presign___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_presign(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_presign___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticPresign___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Bun.S3Client.staticPresign"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticPresign___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticPresign___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticPresign___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Bun.S3Client.presign"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticPresign___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticPresign___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticPresign___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticPresign___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticPresign___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticPresign___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticPresign___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticPresign(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticPresign___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_unlink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unlink"};
static const lean_object* l_Lasm_JS_Bun_S3Client_unlink___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_unlink___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_unlink(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_unlink___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticUnlink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.S3Client.staticUnlink"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticUnlink___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticUnlink___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Bun.S3Client.unlink"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticUnlink___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticUnlink___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticUnlink___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticUnlink___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticUnlink___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_delete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_JS_Bun_S3Client_delete___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_delete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_delete(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_delete___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticDelete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.S3Client.staticDelete"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticDelete___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticDelete___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticDelete___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Bun.S3Client.delete"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticDelete___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticDelete___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticDelete___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticDelete___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticDelete___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticDelete___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticDelete___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticDelete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticDelete___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_size(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_size___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Bun.S3Client.staticSize"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticSize___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticSize___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticSize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Bun.S3Client.size"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticSize___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticSize___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticSize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticSize___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticSize___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticSize___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticSize___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticSize___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_exists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "exists"};
static const lean_object* l_Lasm_JS_Bun_S3Client_exists___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_exists___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_exists(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_exists___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticExists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.S3Client.staticExists"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticExists___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticExists___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticExists___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Bun.S3Client.exists"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticExists___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticExists___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticExists___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticExists___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticExists___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticExists___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticExists___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticExists(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticExists___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_stat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stat"};
static const lean_object* l_Lasm_JS_Bun_S3Client_stat___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_stat___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_stat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_stat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticStat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Bun.S3Client.staticStat"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticStat___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticStat___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticStat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Bun.S3Client.stat"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticStat___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticStat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticStat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticStat___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticStat___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticStat___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticStat___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticStat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticStat___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Option (Array (Lasm.JS.Bun.S3ListObjectsResponseCommonPrefixes))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "an element is not Lasm.JS.Bun.S3ListObjectsResponseCommonPrefixes"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__7_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__9 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Option (Lasm.JS.Bun.S3ListObjectsResponseEncodingType)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__1_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__6_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Option (Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Option (Lasm.JS.Bun.S3ListObjectsResponseContentsOwner)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Option (Lasm.JS.Bun.S3ListObjectsResponseContentsRestoreStatus)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Option (Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumType)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "Option (Lasm.JS.Bun.S3ListObjectsResponseContentsChecksumAlgorithm)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Option (Array (Lasm.JS.Bun.S3ListObjectsResponseContents))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "an element is not Lasm.JS.Bun.S3ListObjectsResponseContents"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_list___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "list"};
static const lean_object* l_Lasm_JS_Bun_S3Client_list___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_list___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_list(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_list___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Bun.S3Client.staticList"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticList___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticList___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_S3Client_staticList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Bun.S3Client.list"};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticList___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticList___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_S3Client_staticList___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_S3Client_staticList___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_new___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_S3Client_staticList___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_S3Client_staticList___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_S3Client_staticList___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticList___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_s3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Bun"};
static const lean_object* l_Lasm_JS_Bun_s3___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_s3___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_s3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "s3"};
static const lean_object* l_Lasm_JS_Bun_s3___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_s3___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_s3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_s3___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_s3___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_s3___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_s3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_s3___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_s3___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_s3___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_s3___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_s3();
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_s3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3Client___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3Client___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3Client___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3Client___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Bun_instFromJSS3Client___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq___redArg(){
_start:
{
uint8_t v___x_23_; 
v___x_23_ = 1;
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq___redArg___boxed(lean_object* v___dummy_24_){
_start:
{
uint8_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq___redArg();
v_r_26_ = lean_box(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq(lean_object* v_x_27_, lean_object* v_y_28_){
_start:
{
uint8_t v___x_29_; 
v___x_29_ = 1;
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq___boxed(lean_object* v_x_30_, lean_object* v_y_31_){
_start:
{
uint8_t v_res_32_; lean_object* v_r_33_; 
v_res_32_ = l_Lasm_JS_Bun_instBEqS3ListObjectsOptionsEncodingType_beq(v_x_30_, v_y_31_);
v_r_33_ = lean_box(v_res_32_);
return v_r_33_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(2u);
v___x_40_ = lean_nat_to_int(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(1u);
v___x_42_ = lean_nat_to_int(v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg(lean_object* v_prec_43_){
_start:
{
lean_object* v___y_45_; lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = lean_unsigned_to_nat(1024u);
v___x_52_ = lean_nat_dec_le(v___x_51_, v_prec_43_);
if (v___x_52_ == 0)
{
lean_object* v___x_53_; 
v___x_53_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_45_ = v___x_53_;
goto v___jp_44_;
}
else
{
lean_object* v___x_54_; 
v___x_54_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_45_ = v___x_54_;
goto v___jp_44_;
}
v___jp_44_:
{
lean_object* v___x_46_; lean_object* v___x_47_; uint8_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_46_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__1));
lean_inc(v___y_45_);
v___x_47_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_47_, 0, v___y_45_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
v___x_48_ = 0;
v___x_49_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_49_, 0, v___x_47_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*1, v___x_48_);
v___x_50_ = l_Repr_addAppParen(v___x_49_, v_prec_43_);
return v___x_50_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___boxed(lean_object* v_prec_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg(v_prec_55_);
lean_dec(v_prec_55_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr(lean_object* v_x_57_, lean_object* v_prec_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg(v_prec_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___boxed(lean_object* v_x_60_, lean_object* v_prec_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr(v_x_60_, v_prec_61_);
lean_dec(v_prec_61_);
return v_res_62_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType_default(void){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_box(0);
return v___x_65_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_box(0);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0(lean_object* v_x_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__1));
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0(lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_79_) == 4)
{
lean_object* v_s_82_; lean_object* v___x_83_; uint8_t v___x_84_; 
v_s_82_ = lean_ctor_get(v_x_79_, 0);
v___x_83_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__0));
v___x_84_ = lean_string_dec_eq(v_s_82_, v___x_83_);
if (v___x_84_ == 0)
{
goto v___jp_80_;
}
else
{
lean_object* v___x_85_; 
v___x_85_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__2));
return v___x_85_;
}
}
else
{
goto v___jp_80_;
}
v___jp_80_:
{
lean_object* v___x_81_; 
v___x_81_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__1));
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___boxed(lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0(v_x_86_);
lean_dec(v_x_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorIdx(uint8_t v_x_95_){
_start:
{
switch(v_x_95_)
{
case 0:
{
lean_object* v___x_96_; 
v___x_96_ = lean_unsigned_to_nat(0u);
return v___x_96_;
}
case 1:
{
lean_object* v___x_97_; 
v___x_97_ = lean_unsigned_to_nat(1u);
return v___x_97_;
}
case 2:
{
lean_object* v___x_98_; 
v___x_98_ = lean_unsigned_to_nat(2u);
return v___x_98_;
}
case 3:
{
lean_object* v___x_99_; 
v___x_99_ = lean_unsigned_to_nat(3u);
return v___x_99_;
}
default: 
{
lean_object* v___x_100_; 
v___x_100_ = lean_unsigned_to_nat(4u);
return v___x_100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorIdx___boxed(lean_object* v_x_101_){
_start:
{
uint8_t v_x_boxed_102_; lean_object* v_res_103_; 
v_x_boxed_102_ = lean_unbox(v_x_101_);
v_res_103_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorIdx(v_x_boxed_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim___redArg(lean_object* v_k_104_){
_start:
{
lean_inc(v_k_104_);
return v_k_104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim___redArg___boxed(lean_object* v_k_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim___redArg(v_k_105_);
lean_dec(v_k_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim(lean_object* v_motive_107_, lean_object* v_ctorIdx_108_, uint8_t v_t_109_, lean_object* v_h_110_, lean_object* v_k_111_){
_start:
{
lean_inc(v_k_111_);
return v_k_111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim___boxed(lean_object* v_motive_112_, lean_object* v_ctorIdx_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_k_116_){
_start:
{
uint8_t v_t_boxed_117_; lean_object* v_res_118_; 
v_t_boxed_117_ = lean_unbox(v_t_114_);
v_res_118_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorElim(v_motive_112_, v_ctorIdx_113_, v_t_boxed_117_, v_h_115_, v_k_116_);
lean_dec(v_k_116_);
lean_dec(v_ctorIdx_113_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim___redArg(lean_object* v_crc32_119_){
_start:
{
lean_inc(v_crc32_119_);
return v_crc32_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim___redArg___boxed(lean_object* v_crc32_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim___redArg(v_crc32_120_);
lean_dec(v_crc32_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim(lean_object* v_motive_122_, uint8_t v_t_123_, lean_object* v_h_124_, lean_object* v_crc32_125_){
_start:
{
lean_inc(v_crc32_125_);
return v_crc32_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim___boxed(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_crc32_129_){
_start:
{
uint8_t v_t_boxed_130_; lean_object* v_res_131_; 
v_t_boxed_130_ = lean_unbox(v_t_127_);
v_res_131_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32_elim(v_motive_126_, v_t_boxed_130_, v_h_128_, v_crc32_129_);
lean_dec(v_crc32_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim___redArg(lean_object* v_crc32c_132_){
_start:
{
lean_inc(v_crc32c_132_);
return v_crc32c_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim___redArg___boxed(lean_object* v_crc32c_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim___redArg(v_crc32c_133_);
lean_dec(v_crc32c_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim(lean_object* v_motive_135_, uint8_t v_t_136_, lean_object* v_h_137_, lean_object* v_crc32c_138_){
_start:
{
lean_inc(v_crc32c_138_);
return v_crc32c_138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim___boxed(lean_object* v_motive_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_crc32c_142_){
_start:
{
uint8_t v_t_boxed_143_; lean_object* v_res_144_; 
v_t_boxed_143_ = lean_unbox(v_t_140_);
v_res_144_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc32c_elim(v_motive_139_, v_t_boxed_143_, v_h_141_, v_crc32c_142_);
lean_dec(v_crc32c_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim___redArg(lean_object* v_sha1_145_){
_start:
{
lean_inc(v_sha1_145_);
return v_sha1_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim___redArg___boxed(lean_object* v_sha1_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim___redArg(v_sha1_146_);
lean_dec(v_sha1_146_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim(lean_object* v_motive_148_, uint8_t v_t_149_, lean_object* v_h_150_, lean_object* v_sha1_151_){
_start:
{
lean_inc(v_sha1_151_);
return v_sha1_151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim___boxed(lean_object* v_motive_152_, lean_object* v_t_153_, lean_object* v_h_154_, lean_object* v_sha1_155_){
_start:
{
uint8_t v_t_boxed_156_; lean_object* v_res_157_; 
v_t_boxed_156_ = lean_unbox(v_t_153_);
v_res_157_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha1_elim(v_motive_152_, v_t_boxed_156_, v_h_154_, v_sha1_155_);
lean_dec(v_sha1_155_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim___redArg(lean_object* v_sha256_158_){
_start:
{
lean_inc(v_sha256_158_);
return v_sha256_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim___redArg___boxed(lean_object* v_sha256_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim___redArg(v_sha256_159_);
lean_dec(v_sha256_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim(lean_object* v_motive_161_, uint8_t v_t_162_, lean_object* v_h_163_, lean_object* v_sha256_164_){
_start:
{
lean_inc(v_sha256_164_);
return v_sha256_164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim___boxed(lean_object* v_motive_165_, lean_object* v_t_166_, lean_object* v_h_167_, lean_object* v_sha256_168_){
_start:
{
uint8_t v_t_boxed_169_; lean_object* v_res_170_; 
v_t_boxed_169_ = lean_unbox(v_t_166_);
v_res_170_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_sha256_elim(v_motive_165_, v_t_boxed_169_, v_h_167_, v_sha256_168_);
lean_dec(v_sha256_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim___redArg(lean_object* v_crc64nvme_171_){
_start:
{
lean_inc(v_crc64nvme_171_);
return v_crc64nvme_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim___redArg___boxed(lean_object* v_crc64nvme_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim___redArg(v_crc64nvme_172_);
lean_dec(v_crc64nvme_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim(lean_object* v_motive_174_, uint8_t v_t_175_, lean_object* v_h_176_, lean_object* v_crc64nvme_177_){
_start:
{
lean_inc(v_crc64nvme_177_);
return v_crc64nvme_177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim___boxed(lean_object* v_motive_178_, lean_object* v_t_179_, lean_object* v_h_180_, lean_object* v_crc64nvme_181_){
_start:
{
uint8_t v_t_boxed_182_; lean_object* v_res_183_; 
v_t_boxed_182_ = lean_unbox(v_t_179_);
v_res_183_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_crc64nvme_elim(v_motive_178_, v_t_boxed_182_, v_h_180_, v_crc64nvme_181_);
lean_dec(v_crc64nvme_181_);
return v_res_183_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm_beq(uint8_t v_x_184_, uint8_t v_y_185_){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_186_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorIdx(v_x_184_);
v___x_187_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumAlgorithm_ctorIdx(v_y_185_);
v___x_188_ = lean_nat_dec_eq(v___x_186_, v___x_187_);
lean_dec(v___x_187_);
lean_dec(v___x_186_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm_beq___boxed(lean_object* v_x_189_, lean_object* v_y_190_){
_start:
{
uint8_t v_x_21__boxed_191_; uint8_t v_y_22__boxed_192_; uint8_t v_res_193_; lean_object* v_r_194_; 
v_x_21__boxed_191_ = lean_unbox(v_x_189_);
v_y_22__boxed_192_ = lean_unbox(v_y_190_);
v_res_193_ = l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumAlgorithm_beq(v_x_21__boxed_191_, v_y_22__boxed_192_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr(uint8_t v_x_212_, lean_object* v_prec_213_){
_start:
{
lean_object* v___y_215_; lean_object* v___y_222_; lean_object* v___y_229_; lean_object* v___y_236_; lean_object* v___y_243_; 
switch(v_x_212_)
{
case 0:
{
lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_249_ = lean_unsigned_to_nat(1024u);
v___x_250_ = lean_nat_dec_le(v___x_249_, v_prec_213_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
v___x_251_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_215_ = v___x_251_;
goto v___jp_214_;
}
else
{
lean_object* v___x_252_; 
v___x_252_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_215_ = v___x_252_;
goto v___jp_214_;
}
}
case 1:
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = lean_unsigned_to_nat(1024u);
v___x_254_ = lean_nat_dec_le(v___x_253_, v_prec_213_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
v___x_255_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_222_ = v___x_255_;
goto v___jp_221_;
}
else
{
lean_object* v___x_256_; 
v___x_256_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_222_ = v___x_256_;
goto v___jp_221_;
}
}
case 2:
{
lean_object* v___x_257_; uint8_t v___x_258_; 
v___x_257_ = lean_unsigned_to_nat(1024u);
v___x_258_ = lean_nat_dec_le(v___x_257_, v_prec_213_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; 
v___x_259_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_229_ = v___x_259_;
goto v___jp_228_;
}
else
{
lean_object* v___x_260_; 
v___x_260_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_229_ = v___x_260_;
goto v___jp_228_;
}
}
case 3:
{
lean_object* v___x_261_; uint8_t v___x_262_; 
v___x_261_ = lean_unsigned_to_nat(1024u);
v___x_262_ = lean_nat_dec_le(v___x_261_, v_prec_213_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; 
v___x_263_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_236_ = v___x_263_;
goto v___jp_235_;
}
else
{
lean_object* v___x_264_; 
v___x_264_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_236_ = v___x_264_;
goto v___jp_235_;
}
}
default: 
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = lean_unsigned_to_nat(1024u);
v___x_266_ = lean_nat_dec_le(v___x_265_, v_prec_213_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; 
v___x_267_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_243_ = v___x_267_;
goto v___jp_242_;
}
else
{
lean_object* v___x_268_; 
v___x_268_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_243_ = v___x_268_;
goto v___jp_242_;
}
}
}
v___jp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_216_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__1));
lean_inc(v___y_215_);
v___x_217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_217_, 0, v___y_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = 0;
v___x_219_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*1, v___x_218_);
v___x_220_ = l_Repr_addAppParen(v___x_219_, v_prec_213_);
return v___x_220_;
}
v___jp_221_:
{
lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_223_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__3));
lean_inc(v___y_222_);
v___x_224_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_224_, 0, v___y_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = 0;
v___x_226_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*1, v___x_225_);
v___x_227_ = l_Repr_addAppParen(v___x_226_, v_prec_213_);
return v___x_227_;
}
v___jp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__5));
lean_inc(v___y_229_);
v___x_231_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_231_, 0, v___y_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = 0;
v___x_233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set_uint8(v___x_233_, sizeof(void*)*1, v___x_232_);
v___x_234_ = l_Repr_addAppParen(v___x_233_, v_prec_213_);
return v___x_234_;
}
v___jp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_237_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__7));
lean_inc(v___y_236_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___y_236_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = 0;
v___x_240_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v___x_239_);
v___x_241_ = l_Repr_addAppParen(v___x_240_, v_prec_213_);
return v___x_241_;
}
v___jp_242_:
{
lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_244_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___closed__9));
lean_inc(v___y_243_);
v___x_245_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_245_, 0, v___y_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = 0;
v___x_247_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set_uint8(v___x_247_, sizeof(void*)*1, v___x_246_);
v___x_248_ = l_Repr_addAppParen(v___x_247_, v_prec_213_);
return v___x_248_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr___boxed(lean_object* v_x_269_, lean_object* v_prec_270_){
_start:
{
uint8_t v_x_275__boxed_271_; lean_object* v_res_272_; 
v_x_275__boxed_271_ = lean_unbox(v_x_269_);
v_res_272_ = l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumAlgorithm_repr(v_x_275__boxed_271_, v_prec_270_);
lean_dec(v_prec_270_);
return v_res_272_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumAlgorithm_default(void){
_start:
{
uint8_t v___x_275_; 
v___x_275_ = 0;
return v___x_275_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumAlgorithm(void){
_start:
{
uint8_t v___x_276_; 
v___x_276_ = 0;
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0(uint8_t v_x_292_){
_start:
{
switch(v_x_292_)
{
case 0:
{
lean_object* v___x_293_; 
v___x_293_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__1));
return v___x_293_;
}
case 1:
{
lean_object* v___x_294_; 
v___x_294_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__3));
return v___x_294_;
}
case 2:
{
lean_object* v___x_295_; 
v___x_295_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__5));
return v___x_295_;
}
case 3:
{
lean_object* v___x_296_; 
v___x_296_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__7));
return v___x_296_;
}
default: 
{
lean_object* v___x_297_; 
v___x_297_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__9));
return v___x_297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___boxed(lean_object* v_x_298_){
_start:
{
uint8_t v_x_91__boxed_299_; lean_object* v_res_300_; 
v_x_91__boxed_299_ = lean_unbox(v_x_298_);
v_res_300_ = l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0(v_x_91__boxed_299_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0(lean_object* v_x_320_){
_start:
{
if (lean_obj_tag(v_x_320_) == 4)
{
lean_object* v_s_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v_s_323_ = lean_ctor_get(v_x_320_, 0);
v___x_324_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0));
v___x_325_ = lean_string_dec_eq(v_s_323_, v___x_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2));
v___x_327_ = lean_string_dec_eq(v_s_323_, v___x_326_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4));
v___x_329_ = lean_string_dec_eq(v_s_323_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_330_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__6));
v___x_331_ = lean_string_dec_eq(v_s_323_, v___x_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_332_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__8));
v___x_333_ = lean_string_dec_eq(v_s_323_, v___x_332_);
if (v___x_333_ == 0)
{
goto v___jp_321_;
}
else
{
lean_object* v___x_334_; 
v___x_334_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__1));
return v___x_334_;
}
}
else
{
lean_object* v___x_335_; 
v___x_335_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2));
return v___x_335_;
}
}
else
{
lean_object* v___x_336_; 
v___x_336_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__3));
return v___x_336_;
}
}
else
{
lean_object* v___x_337_; 
v___x_337_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4));
return v___x_337_;
}
}
else
{
lean_object* v___x_338_; 
v___x_338_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__5));
return v___x_338_;
}
}
else
{
goto v___jp_321_;
}
v___jp_321_:
{
lean_object* v___x_322_; 
v___x_322_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0));
return v___x_322_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___boxed(lean_object* v_x_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0(v_x_339_);
lean_dec(v_x_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorIdx(uint8_t v_x_348_){
_start:
{
if (v_x_348_ == 0)
{
lean_object* v___x_349_; 
v___x_349_ = lean_unsigned_to_nat(0u);
return v___x_349_;
}
else
{
lean_object* v___x_350_; 
v___x_350_ = lean_unsigned_to_nat(1u);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorIdx___boxed(lean_object* v_x_351_){
_start:
{
uint8_t v_x_boxed_352_; lean_object* v_res_353_; 
v_x_boxed_352_ = lean_unbox(v_x_351_);
v_res_353_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorIdx(v_x_boxed_352_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim___redArg(lean_object* v_k_354_){
_start:
{
lean_inc(v_k_354_);
return v_k_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim___redArg___boxed(lean_object* v_k_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim___redArg(v_k_355_);
lean_dec(v_k_355_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim(lean_object* v_motive_357_, lean_object* v_ctorIdx_358_, uint8_t v_t_359_, lean_object* v_h_360_, lean_object* v_k_361_){
_start:
{
lean_inc(v_k_361_);
return v_k_361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim___boxed(lean_object* v_motive_362_, lean_object* v_ctorIdx_363_, lean_object* v_t_364_, lean_object* v_h_365_, lean_object* v_k_366_){
_start:
{
uint8_t v_t_boxed_367_; lean_object* v_res_368_; 
v_t_boxed_367_ = lean_unbox(v_t_364_);
v_res_368_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorElim(v_motive_362_, v_ctorIdx_363_, v_t_boxed_367_, v_h_365_, v_k_366_);
lean_dec(v_k_366_);
lean_dec(v_ctorIdx_363_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim___redArg(lean_object* v_composite_369_){
_start:
{
lean_inc(v_composite_369_);
return v_composite_369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim___redArg___boxed(lean_object* v_composite_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim___redArg(v_composite_370_);
lean_dec(v_composite_370_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim(lean_object* v_motive_372_, uint8_t v_t_373_, lean_object* v_h_374_, lean_object* v_composite_375_){
_start:
{
lean_inc(v_composite_375_);
return v_composite_375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim___boxed(lean_object* v_motive_376_, lean_object* v_t_377_, lean_object* v_h_378_, lean_object* v_composite_379_){
_start:
{
uint8_t v_t_boxed_380_; lean_object* v_res_381_; 
v_t_boxed_380_ = lean_unbox(v_t_377_);
v_res_381_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_composite_elim(v_motive_376_, v_t_boxed_380_, v_h_378_, v_composite_379_);
lean_dec(v_composite_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim___redArg(lean_object* v_fullObject_382_){
_start:
{
lean_inc(v_fullObject_382_);
return v_fullObject_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim___redArg___boxed(lean_object* v_fullObject_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim___redArg(v_fullObject_383_);
lean_dec(v_fullObject_383_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim(lean_object* v_motive_385_, uint8_t v_t_386_, lean_object* v_h_387_, lean_object* v_fullObject_388_){
_start:
{
lean_inc(v_fullObject_388_);
return v_fullObject_388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim___boxed(lean_object* v_motive_389_, lean_object* v_t_390_, lean_object* v_h_391_, lean_object* v_fullObject_392_){
_start:
{
uint8_t v_t_boxed_393_; lean_object* v_res_394_; 
v_t_boxed_393_ = lean_unbox(v_t_390_);
v_res_394_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_fullObject_elim(v_motive_389_, v_t_boxed_393_, v_h_391_, v_fullObject_392_);
lean_dec(v_fullObject_392_);
return v_res_394_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType_beq(uint8_t v_x_395_, uint8_t v_y_396_){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_397_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorIdx(v_x_395_);
v___x_398_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsChecksumType_ctorIdx(v_y_396_);
v___x_399_ = lean_nat_dec_eq(v___x_397_, v___x_398_);
lean_dec(v___x_398_);
lean_dec(v___x_397_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType_beq___boxed(lean_object* v_x_400_, lean_object* v_y_401_){
_start:
{
uint8_t v_x_21__boxed_402_; uint8_t v_y_22__boxed_403_; uint8_t v_res_404_; lean_object* v_r_405_; 
v_x_21__boxed_402_ = lean_unbox(v_x_400_);
v_y_22__boxed_403_ = lean_unbox(v_y_401_);
v_res_404_ = l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsChecksumType_beq(v_x_21__boxed_402_, v_y_22__boxed_403_);
v_r_405_ = lean_box(v_res_404_);
return v_r_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr(uint8_t v_x_414_, lean_object* v_prec_415_){
_start:
{
lean_object* v___y_417_; lean_object* v___y_424_; 
if (v_x_414_ == 0)
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = lean_unsigned_to_nat(1024u);
v___x_431_ = lean_nat_dec_le(v___x_430_, v_prec_415_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
v___x_432_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_417_ = v___x_432_;
goto v___jp_416_;
}
else
{
lean_object* v___x_433_; 
v___x_433_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_417_ = v___x_433_;
goto v___jp_416_;
}
}
else
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = lean_unsigned_to_nat(1024u);
v___x_435_ = lean_nat_dec_le(v___x_434_, v_prec_415_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; 
v___x_436_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_424_ = v___x_436_;
goto v___jp_423_;
}
else
{
lean_object* v___x_437_; 
v___x_437_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_424_ = v___x_437_;
goto v___jp_423_;
}
}
v___jp_416_:
{
lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_418_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__1));
lean_inc(v___y_417_);
v___x_419_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_419_, 0, v___y_417_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = 0;
v___x_421_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_421_, 0, v___x_419_);
lean_ctor_set_uint8(v___x_421_, sizeof(void*)*1, v___x_420_);
v___x_422_ = l_Repr_addAppParen(v___x_421_, v_prec_415_);
return v___x_422_;
}
v___jp_423_:
{
lean_object* v___x_425_; lean_object* v___x_426_; uint8_t v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_425_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___closed__3));
lean_inc(v___y_424_);
v___x_426_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_426_, 0, v___y_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = 0;
v___x_428_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*1, v___x_427_);
v___x_429_ = l_Repr_addAppParen(v___x_428_, v_prec_415_);
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr___boxed(lean_object* v_x_438_, lean_object* v_prec_439_){
_start:
{
uint8_t v_x_113__boxed_440_; lean_object* v_res_441_; 
v_x_113__boxed_440_ = lean_unbox(v_x_438_);
v_res_441_ = l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsChecksumType_repr(v_x_113__boxed_440_, v_prec_439_);
lean_dec(v_prec_439_);
return v_res_441_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumType_default(void){
_start:
{
uint8_t v___x_444_; 
v___x_444_ = 0;
return v___x_444_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumType(void){
_start:
{
uint8_t v___x_445_; 
v___x_445_ = 0;
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0(uint8_t v_x_452_){
_start:
{
if (v_x_452_ == 0)
{
lean_object* v___x_453_; 
v___x_453_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__1));
return v___x_453_;
}
else
{
lean_object* v___x_454_; 
v___x_454_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__3));
return v___x_454_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___boxed(lean_object* v_x_455_){
_start:
{
uint8_t v_x_40__boxed_456_; lean_object* v_res_457_; 
v_x_40__boxed_456_ = lean_unbox(v_x_455_);
v_res_457_ = l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0(v_x_40__boxed_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0(lean_object* v_x_468_){
_start:
{
if (lean_obj_tag(v_x_468_) == 4)
{
lean_object* v_s_471_; lean_object* v___x_472_; uint8_t v___x_473_; 
v_s_471_ = lean_ctor_get(v_x_468_, 0);
v___x_472_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0));
v___x_473_ = lean_string_dec_eq(v_s_471_, v___x_472_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_474_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2));
v___x_475_ = lean_string_dec_eq(v_s_471_, v___x_474_);
if (v___x_475_ == 0)
{
goto v___jp_469_;
}
else
{
lean_object* v___x_476_; 
v___x_476_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__1));
return v___x_476_;
}
}
else
{
lean_object* v___x_477_; 
v___x_477_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2));
return v___x_477_;
}
}
else
{
goto v___jp_469_;
}
v___jp_469_:
{
lean_object* v___x_470_; 
v___x_470_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0));
return v___x_470_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0___boxed(lean_object* v_x_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType___lam__0(v_x_478_);
lean_dec(v_x_478_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorIdx(uint8_t v_x_487_){
_start:
{
switch(v_x_487_)
{
case 0:
{
lean_object* v___x_488_; 
v___x_488_ = lean_unsigned_to_nat(0u);
return v___x_488_;
}
case 1:
{
lean_object* v___x_489_; 
v___x_489_ = lean_unsigned_to_nat(1u);
return v___x_489_;
}
case 2:
{
lean_object* v___x_490_; 
v___x_490_ = lean_unsigned_to_nat(2u);
return v___x_490_;
}
case 3:
{
lean_object* v___x_491_; 
v___x_491_ = lean_unsigned_to_nat(3u);
return v___x_491_;
}
case 4:
{
lean_object* v___x_492_; 
v___x_492_ = lean_unsigned_to_nat(4u);
return v___x_492_;
}
case 5:
{
lean_object* v___x_493_; 
v___x_493_ = lean_unsigned_to_nat(5u);
return v___x_493_;
}
case 6:
{
lean_object* v___x_494_; 
v___x_494_ = lean_unsigned_to_nat(6u);
return v___x_494_;
}
case 7:
{
lean_object* v___x_495_; 
v___x_495_ = lean_unsigned_to_nat(7u);
return v___x_495_;
}
case 8:
{
lean_object* v___x_496_; 
v___x_496_ = lean_unsigned_to_nat(8u);
return v___x_496_;
}
case 9:
{
lean_object* v___x_497_; 
v___x_497_ = lean_unsigned_to_nat(9u);
return v___x_497_;
}
default: 
{
lean_object* v___x_498_; 
v___x_498_ = lean_unsigned_to_nat(10u);
return v___x_498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorIdx___boxed(lean_object* v_x_499_){
_start:
{
uint8_t v_x_boxed_500_; lean_object* v_res_501_; 
v_x_boxed_500_ = lean_unbox(v_x_499_);
v_res_501_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorIdx(v_x_boxed_500_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim___redArg(lean_object* v_k_502_){
_start:
{
lean_inc(v_k_502_);
return v_k_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim___redArg___boxed(lean_object* v_k_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim___redArg(v_k_503_);
lean_dec(v_k_503_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim(lean_object* v_motive_505_, lean_object* v_ctorIdx_506_, uint8_t v_t_507_, lean_object* v_h_508_, lean_object* v_k_509_){
_start:
{
lean_inc(v_k_509_);
return v_k_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim___boxed(lean_object* v_motive_510_, lean_object* v_ctorIdx_511_, lean_object* v_t_512_, lean_object* v_h_513_, lean_object* v_k_514_){
_start:
{
uint8_t v_t_boxed_515_; lean_object* v_res_516_; 
v_t_boxed_515_ = lean_unbox(v_t_512_);
v_res_516_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorElim(v_motive_510_, v_ctorIdx_511_, v_t_boxed_515_, v_h_513_, v_k_514_);
lean_dec(v_k_514_);
lean_dec(v_ctorIdx_511_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim___redArg(lean_object* v_standard_517_){
_start:
{
lean_inc(v_standard_517_);
return v_standard_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim___redArg___boxed(lean_object* v_standard_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim___redArg(v_standard_518_);
lean_dec(v_standard_518_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim(lean_object* v_motive_520_, uint8_t v_t_521_, lean_object* v_h_522_, lean_object* v_standard_523_){
_start:
{
lean_inc(v_standard_523_);
return v_standard_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim___boxed(lean_object* v_motive_524_, lean_object* v_t_525_, lean_object* v_h_526_, lean_object* v_standard_527_){
_start:
{
uint8_t v_t_boxed_528_; lean_object* v_res_529_; 
v_t_boxed_528_ = lean_unbox(v_t_525_);
v_res_529_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standard_elim(v_motive_524_, v_t_boxed_528_, v_h_526_, v_standard_527_);
lean_dec(v_standard_527_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim___redArg(lean_object* v_reducedRedundancy_530_){
_start:
{
lean_inc(v_reducedRedundancy_530_);
return v_reducedRedundancy_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim___redArg___boxed(lean_object* v_reducedRedundancy_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim___redArg(v_reducedRedundancy_531_);
lean_dec(v_reducedRedundancy_531_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim(lean_object* v_motive_533_, uint8_t v_t_534_, lean_object* v_h_535_, lean_object* v_reducedRedundancy_536_){
_start:
{
lean_inc(v_reducedRedundancy_536_);
return v_reducedRedundancy_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim___boxed(lean_object* v_motive_537_, lean_object* v_t_538_, lean_object* v_h_539_, lean_object* v_reducedRedundancy_540_){
_start:
{
uint8_t v_t_boxed_541_; lean_object* v_res_542_; 
v_t_boxed_541_ = lean_unbox(v_t_538_);
v_res_542_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_reducedRedundancy_elim(v_motive_537_, v_t_boxed_541_, v_h_539_, v_reducedRedundancy_540_);
lean_dec(v_reducedRedundancy_540_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim___redArg(lean_object* v_glacier_543_){
_start:
{
lean_inc(v_glacier_543_);
return v_glacier_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim___redArg___boxed(lean_object* v_glacier_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim___redArg(v_glacier_544_);
lean_dec(v_glacier_544_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim(lean_object* v_motive_546_, uint8_t v_t_547_, lean_object* v_h_548_, lean_object* v_glacier_549_){
_start:
{
lean_inc(v_glacier_549_);
return v_glacier_549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim___boxed(lean_object* v_motive_550_, lean_object* v_t_551_, lean_object* v_h_552_, lean_object* v_glacier_553_){
_start:
{
uint8_t v_t_boxed_554_; lean_object* v_res_555_; 
v_t_boxed_554_ = lean_unbox(v_t_551_);
v_res_555_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacier_elim(v_motive_550_, v_t_boxed_554_, v_h_552_, v_glacier_553_);
lean_dec(v_glacier_553_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim___redArg(lean_object* v_standardIa_556_){
_start:
{
lean_inc(v_standardIa_556_);
return v_standardIa_556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim___redArg___boxed(lean_object* v_standardIa_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim___redArg(v_standardIa_557_);
lean_dec(v_standardIa_557_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim(lean_object* v_motive_559_, uint8_t v_t_560_, lean_object* v_h_561_, lean_object* v_standardIa_562_){
_start:
{
lean_inc(v_standardIa_562_);
return v_standardIa_562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim___boxed(lean_object* v_motive_563_, lean_object* v_t_564_, lean_object* v_h_565_, lean_object* v_standardIa_566_){
_start:
{
uint8_t v_t_boxed_567_; lean_object* v_res_568_; 
v_t_boxed_567_ = lean_unbox(v_t_564_);
v_res_568_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_standardIa_elim(v_motive_563_, v_t_boxed_567_, v_h_565_, v_standardIa_566_);
lean_dec(v_standardIa_566_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim___redArg(lean_object* v_onezoneIa_569_){
_start:
{
lean_inc(v_onezoneIa_569_);
return v_onezoneIa_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim___redArg___boxed(lean_object* v_onezoneIa_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim___redArg(v_onezoneIa_570_);
lean_dec(v_onezoneIa_570_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim(lean_object* v_motive_572_, uint8_t v_t_573_, lean_object* v_h_574_, lean_object* v_onezoneIa_575_){
_start:
{
lean_inc(v_onezoneIa_575_);
return v_onezoneIa_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim___boxed(lean_object* v_motive_576_, lean_object* v_t_577_, lean_object* v_h_578_, lean_object* v_onezoneIa_579_){
_start:
{
uint8_t v_t_boxed_580_; lean_object* v_res_581_; 
v_t_boxed_580_ = lean_unbox(v_t_577_);
v_res_581_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_onezoneIa_elim(v_motive_576_, v_t_boxed_580_, v_h_578_, v_onezoneIa_579_);
lean_dec(v_onezoneIa_579_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim___redArg(lean_object* v_intelligentTiering_582_){
_start:
{
lean_inc(v_intelligentTiering_582_);
return v_intelligentTiering_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim___redArg___boxed(lean_object* v_intelligentTiering_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim___redArg(v_intelligentTiering_583_);
lean_dec(v_intelligentTiering_583_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim(lean_object* v_motive_585_, uint8_t v_t_586_, lean_object* v_h_587_, lean_object* v_intelligentTiering_588_){
_start:
{
lean_inc(v_intelligentTiering_588_);
return v_intelligentTiering_588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim___boxed(lean_object* v_motive_589_, lean_object* v_t_590_, lean_object* v_h_591_, lean_object* v_intelligentTiering_592_){
_start:
{
uint8_t v_t_boxed_593_; lean_object* v_res_594_; 
v_t_boxed_593_ = lean_unbox(v_t_590_);
v_res_594_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_intelligentTiering_elim(v_motive_589_, v_t_boxed_593_, v_h_591_, v_intelligentTiering_592_);
lean_dec(v_intelligentTiering_592_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim___redArg(lean_object* v_deepArchive_595_){
_start:
{
lean_inc(v_deepArchive_595_);
return v_deepArchive_595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim___redArg___boxed(lean_object* v_deepArchive_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim___redArg(v_deepArchive_596_);
lean_dec(v_deepArchive_596_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim(lean_object* v_motive_598_, uint8_t v_t_599_, lean_object* v_h_600_, lean_object* v_deepArchive_601_){
_start:
{
lean_inc(v_deepArchive_601_);
return v_deepArchive_601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim___boxed(lean_object* v_motive_602_, lean_object* v_t_603_, lean_object* v_h_604_, lean_object* v_deepArchive_605_){
_start:
{
uint8_t v_t_boxed_606_; lean_object* v_res_607_; 
v_t_boxed_606_ = lean_unbox(v_t_603_);
v_res_607_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_deepArchive_elim(v_motive_602_, v_t_boxed_606_, v_h_604_, v_deepArchive_605_);
lean_dec(v_deepArchive_605_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim___redArg(lean_object* v_outposts_608_){
_start:
{
lean_inc(v_outposts_608_);
return v_outposts_608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim___redArg___boxed(lean_object* v_outposts_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim___redArg(v_outposts_609_);
lean_dec(v_outposts_609_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim(lean_object* v_motive_611_, uint8_t v_t_612_, lean_object* v_h_613_, lean_object* v_outposts_614_){
_start:
{
lean_inc(v_outposts_614_);
return v_outposts_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim___boxed(lean_object* v_motive_615_, lean_object* v_t_616_, lean_object* v_h_617_, lean_object* v_outposts_618_){
_start:
{
uint8_t v_t_boxed_619_; lean_object* v_res_620_; 
v_t_boxed_619_ = lean_unbox(v_t_616_);
v_res_620_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_outposts_elim(v_motive_615_, v_t_boxed_619_, v_h_617_, v_outposts_618_);
lean_dec(v_outposts_618_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim___redArg(lean_object* v_glacierIr_621_){
_start:
{
lean_inc(v_glacierIr_621_);
return v_glacierIr_621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim___redArg___boxed(lean_object* v_glacierIr_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim___redArg(v_glacierIr_622_);
lean_dec(v_glacierIr_622_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim(lean_object* v_motive_624_, uint8_t v_t_625_, lean_object* v_h_626_, lean_object* v_glacierIr_627_){
_start:
{
lean_inc(v_glacierIr_627_);
return v_glacierIr_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim___boxed(lean_object* v_motive_628_, lean_object* v_t_629_, lean_object* v_h_630_, lean_object* v_glacierIr_631_){
_start:
{
uint8_t v_t_boxed_632_; lean_object* v_res_633_; 
v_t_boxed_632_ = lean_unbox(v_t_629_);
v_res_633_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_glacierIr_elim(v_motive_628_, v_t_boxed_632_, v_h_630_, v_glacierIr_631_);
lean_dec(v_glacierIr_631_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim___redArg(lean_object* v_snow_634_){
_start:
{
lean_inc(v_snow_634_);
return v_snow_634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim___redArg___boxed(lean_object* v_snow_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim___redArg(v_snow_635_);
lean_dec(v_snow_635_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim(lean_object* v_motive_637_, uint8_t v_t_638_, lean_object* v_h_639_, lean_object* v_snow_640_){
_start:
{
lean_inc(v_snow_640_);
return v_snow_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim___boxed(lean_object* v_motive_641_, lean_object* v_t_642_, lean_object* v_h_643_, lean_object* v_snow_644_){
_start:
{
uint8_t v_t_boxed_645_; lean_object* v_res_646_; 
v_t_boxed_645_ = lean_unbox(v_t_642_);
v_res_646_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_snow_elim(v_motive_641_, v_t_boxed_645_, v_h_643_, v_snow_644_);
lean_dec(v_snow_644_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim___redArg(lean_object* v_expressOnezone_647_){
_start:
{
lean_inc(v_expressOnezone_647_);
return v_expressOnezone_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim___redArg___boxed(lean_object* v_expressOnezone_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim___redArg(v_expressOnezone_648_);
lean_dec(v_expressOnezone_648_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim(lean_object* v_motive_650_, uint8_t v_t_651_, lean_object* v_h_652_, lean_object* v_expressOnezone_653_){
_start:
{
lean_inc(v_expressOnezone_653_);
return v_expressOnezone_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim___boxed(lean_object* v_motive_654_, lean_object* v_t_655_, lean_object* v_h_656_, lean_object* v_expressOnezone_657_){
_start:
{
uint8_t v_t_boxed_658_; lean_object* v_res_659_; 
v_t_boxed_658_ = lean_unbox(v_t_655_);
v_res_659_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_expressOnezone_elim(v_motive_654_, v_t_boxed_658_, v_h_656_, v_expressOnezone_657_);
lean_dec(v_expressOnezone_657_);
return v_res_659_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass_beq(uint8_t v_x_660_, uint8_t v_y_661_){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_662_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorIdx(v_x_660_);
v___x_663_ = l_Lasm_JS_Bun_S3ListObjectsResponseContentsStorageClass_ctorIdx(v_y_661_);
v___x_664_ = lean_nat_dec_eq(v___x_662_, v___x_663_);
lean_dec(v___x_663_);
lean_dec(v___x_662_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass_beq___boxed(lean_object* v_x_665_, lean_object* v_y_666_){
_start:
{
uint8_t v_x_21__boxed_667_; uint8_t v_y_22__boxed_668_; uint8_t v_res_669_; lean_object* v_r_670_; 
v_x_21__boxed_667_ = lean_unbox(v_x_665_);
v_y_22__boxed_668_ = lean_unbox(v_y_666_);
v_res_669_ = l_Lasm_JS_Bun_instBEqS3ListObjectsResponseContentsStorageClass_beq(v_x_21__boxed_667_, v_y_22__boxed_668_);
v_r_670_ = lean_box(v_res_669_);
return v_r_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr(uint8_t v_x_706_, lean_object* v_prec_707_){
_start:
{
lean_object* v___y_709_; lean_object* v___y_716_; lean_object* v___y_723_; lean_object* v___y_730_; lean_object* v___y_737_; lean_object* v___y_744_; lean_object* v___y_751_; lean_object* v___y_758_; lean_object* v___y_765_; lean_object* v___y_772_; lean_object* v___y_779_; 
switch(v_x_706_)
{
case 0:
{
lean_object* v___x_785_; uint8_t v___x_786_; 
v___x_785_ = lean_unsigned_to_nat(1024u);
v___x_786_ = lean_nat_dec_le(v___x_785_, v_prec_707_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; 
v___x_787_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_709_ = v___x_787_;
goto v___jp_708_;
}
else
{
lean_object* v___x_788_; 
v___x_788_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_709_ = v___x_788_;
goto v___jp_708_;
}
}
case 1:
{
lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_789_ = lean_unsigned_to_nat(1024u);
v___x_790_ = lean_nat_dec_le(v___x_789_, v_prec_707_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_716_ = v___x_791_;
goto v___jp_715_;
}
else
{
lean_object* v___x_792_; 
v___x_792_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_716_ = v___x_792_;
goto v___jp_715_;
}
}
case 2:
{
lean_object* v___x_793_; uint8_t v___x_794_; 
v___x_793_ = lean_unsigned_to_nat(1024u);
v___x_794_ = lean_nat_dec_le(v___x_793_, v_prec_707_);
if (v___x_794_ == 0)
{
lean_object* v___x_795_; 
v___x_795_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_723_ = v___x_795_;
goto v___jp_722_;
}
else
{
lean_object* v___x_796_; 
v___x_796_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_723_ = v___x_796_;
goto v___jp_722_;
}
}
case 3:
{
lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_797_ = lean_unsigned_to_nat(1024u);
v___x_798_ = lean_nat_dec_le(v___x_797_, v_prec_707_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
v___x_799_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_730_ = v___x_799_;
goto v___jp_729_;
}
else
{
lean_object* v___x_800_; 
v___x_800_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_730_ = v___x_800_;
goto v___jp_729_;
}
}
case 4:
{
lean_object* v___x_801_; uint8_t v___x_802_; 
v___x_801_ = lean_unsigned_to_nat(1024u);
v___x_802_ = lean_nat_dec_le(v___x_801_, v_prec_707_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; 
v___x_803_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_737_ = v___x_803_;
goto v___jp_736_;
}
else
{
lean_object* v___x_804_; 
v___x_804_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_737_ = v___x_804_;
goto v___jp_736_;
}
}
case 5:
{
lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(1024u);
v___x_806_ = lean_nat_dec_le(v___x_805_, v_prec_707_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; 
v___x_807_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_744_ = v___x_807_;
goto v___jp_743_;
}
else
{
lean_object* v___x_808_; 
v___x_808_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_744_ = v___x_808_;
goto v___jp_743_;
}
}
case 6:
{
lean_object* v___x_809_; uint8_t v___x_810_; 
v___x_809_ = lean_unsigned_to_nat(1024u);
v___x_810_ = lean_nat_dec_le(v___x_809_, v_prec_707_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; 
v___x_811_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_751_ = v___x_811_;
goto v___jp_750_;
}
else
{
lean_object* v___x_812_; 
v___x_812_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_751_ = v___x_812_;
goto v___jp_750_;
}
}
case 7:
{
lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_813_ = lean_unsigned_to_nat(1024u);
v___x_814_ = lean_nat_dec_le(v___x_813_, v_prec_707_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; 
v___x_815_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_758_ = v___x_815_;
goto v___jp_757_;
}
else
{
lean_object* v___x_816_; 
v___x_816_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_758_ = v___x_816_;
goto v___jp_757_;
}
}
case 8:
{
lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_817_ = lean_unsigned_to_nat(1024u);
v___x_818_ = lean_nat_dec_le(v___x_817_, v_prec_707_);
if (v___x_818_ == 0)
{
lean_object* v___x_819_; 
v___x_819_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_765_ = v___x_819_;
goto v___jp_764_;
}
else
{
lean_object* v___x_820_; 
v___x_820_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_765_ = v___x_820_;
goto v___jp_764_;
}
}
case 9:
{
lean_object* v___x_821_; uint8_t v___x_822_; 
v___x_821_ = lean_unsigned_to_nat(1024u);
v___x_822_ = lean_nat_dec_le(v___x_821_, v_prec_707_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; 
v___x_823_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_772_ = v___x_823_;
goto v___jp_771_;
}
else
{
lean_object* v___x_824_; 
v___x_824_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_772_ = v___x_824_;
goto v___jp_771_;
}
}
default: 
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(1024u);
v___x_826_ = lean_nat_dec_le(v___x_825_, v_prec_707_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; 
v___x_827_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_779_ = v___x_827_;
goto v___jp_778_;
}
else
{
lean_object* v___x_828_; 
v___x_828_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_779_ = v___x_828_;
goto v___jp_778_;
}
}
}
v___jp_708_:
{
lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__1));
lean_inc(v___y_709_);
v___x_711_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_711_, 0, v___y_709_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = 0;
v___x_713_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_713_, 0, v___x_711_);
lean_ctor_set_uint8(v___x_713_, sizeof(void*)*1, v___x_712_);
v___x_714_ = l_Repr_addAppParen(v___x_713_, v_prec_707_);
return v___x_714_;
}
v___jp_715_:
{
lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_717_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__3));
lean_inc(v___y_716_);
v___x_718_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_718_, 0, v___y_716_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
v___x_719_ = 0;
v___x_720_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*1, v___x_719_);
v___x_721_ = l_Repr_addAppParen(v___x_720_, v_prec_707_);
return v___x_721_;
}
v___jp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_724_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__5));
lean_inc(v___y_723_);
v___x_725_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_725_, 0, v___y_723_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = 0;
v___x_727_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_727_, 0, v___x_725_);
lean_ctor_set_uint8(v___x_727_, sizeof(void*)*1, v___x_726_);
v___x_728_ = l_Repr_addAppParen(v___x_727_, v_prec_707_);
return v___x_728_;
}
v___jp_729_:
{
lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_731_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__7));
lean_inc(v___y_730_);
v___x_732_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_732_, 0, v___y_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = 0;
v___x_734_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_734_, 0, v___x_732_);
lean_ctor_set_uint8(v___x_734_, sizeof(void*)*1, v___x_733_);
v___x_735_ = l_Repr_addAppParen(v___x_734_, v_prec_707_);
return v___x_735_;
}
v___jp_736_:
{
lean_object* v___x_738_; lean_object* v___x_739_; uint8_t v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_738_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__9));
lean_inc(v___y_737_);
v___x_739_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_739_, 0, v___y_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = 0;
v___x_741_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set_uint8(v___x_741_, sizeof(void*)*1, v___x_740_);
v___x_742_ = l_Repr_addAppParen(v___x_741_, v_prec_707_);
return v___x_742_;
}
v___jp_743_:
{
lean_object* v___x_745_; lean_object* v___x_746_; uint8_t v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_745_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__11));
lean_inc(v___y_744_);
v___x_746_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_746_, 0, v___y_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = 0;
v___x_748_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set_uint8(v___x_748_, sizeof(void*)*1, v___x_747_);
v___x_749_ = l_Repr_addAppParen(v___x_748_, v_prec_707_);
return v___x_749_;
}
v___jp_750_:
{
lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_752_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__13));
lean_inc(v___y_751_);
v___x_753_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_753_, 0, v___y_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = 0;
v___x_755_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_755_, 0, v___x_753_);
lean_ctor_set_uint8(v___x_755_, sizeof(void*)*1, v___x_754_);
v___x_756_ = l_Repr_addAppParen(v___x_755_, v_prec_707_);
return v___x_756_;
}
v___jp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; uint8_t v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_759_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__15));
lean_inc(v___y_758_);
v___x_760_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_760_, 0, v___y_758_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = 0;
v___x_762_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_762_, 0, v___x_760_);
lean_ctor_set_uint8(v___x_762_, sizeof(void*)*1, v___x_761_);
v___x_763_ = l_Repr_addAppParen(v___x_762_, v_prec_707_);
return v___x_763_;
}
v___jp_764_:
{
lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_766_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__17));
lean_inc(v___y_765_);
v___x_767_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_767_, 0, v___y_765_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v___x_768_ = 0;
v___x_769_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set_uint8(v___x_769_, sizeof(void*)*1, v___x_768_);
v___x_770_ = l_Repr_addAppParen(v___x_769_, v_prec_707_);
return v___x_770_;
}
v___jp_771_:
{
lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_773_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__19));
lean_inc(v___y_772_);
v___x_774_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_774_, 0, v___y_772_);
lean_ctor_set(v___x_774_, 1, v___x_773_);
v___x_775_ = 0;
v___x_776_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_776_, 0, v___x_774_);
lean_ctor_set_uint8(v___x_776_, sizeof(void*)*1, v___x_775_);
v___x_777_ = l_Repr_addAppParen(v___x_776_, v_prec_707_);
return v___x_777_;
}
v___jp_778_:
{
lean_object* v___x_780_; lean_object* v___x_781_; uint8_t v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_780_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___closed__21));
lean_inc(v___y_779_);
v___x_781_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_781_, 0, v___y_779_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
v___x_782_ = 0;
v___x_783_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set_uint8(v___x_783_, sizeof(void*)*1, v___x_782_);
v___x_784_ = l_Repr_addAppParen(v___x_783_, v_prec_707_);
return v___x_784_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr___boxed(lean_object* v_x_829_, lean_object* v_prec_830_){
_start:
{
uint8_t v_x_599__boxed_831_; lean_object* v_res_832_; 
v_x_599__boxed_831_ = lean_unbox(v_x_829_);
v_res_832_ = l_Lasm_JS_Bun_instReprS3ListObjectsResponseContentsStorageClass_repr(v_x_599__boxed_831_, v_prec_830_);
lean_dec(v_prec_830_);
return v_res_832_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsStorageClass_default(void){
_start:
{
uint8_t v___x_835_; 
v___x_835_ = 0;
return v___x_835_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsStorageClass(void){
_start:
{
uint8_t v___x_836_; 
v___x_836_ = 0;
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0(uint8_t v_x_870_){
_start:
{
switch(v_x_870_)
{
case 0:
{
lean_object* v___x_871_; 
v___x_871_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__1));
return v___x_871_;
}
case 1:
{
lean_object* v___x_872_; 
v___x_872_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__3));
return v___x_872_;
}
case 2:
{
lean_object* v___x_873_; 
v___x_873_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__5));
return v___x_873_;
}
case 3:
{
lean_object* v___x_874_; 
v___x_874_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__7));
return v___x_874_;
}
case 4:
{
lean_object* v___x_875_; 
v___x_875_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__9));
return v___x_875_;
}
case 5:
{
lean_object* v___x_876_; 
v___x_876_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__11));
return v___x_876_;
}
case 6:
{
lean_object* v___x_877_; 
v___x_877_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__13));
return v___x_877_;
}
case 7:
{
lean_object* v___x_878_; 
v___x_878_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__15));
return v___x_878_;
}
case 8:
{
lean_object* v___x_879_; 
v___x_879_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__17));
return v___x_879_;
}
case 9:
{
lean_object* v___x_880_; 
v___x_880_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__19));
return v___x_880_;
}
default: 
{
lean_object* v___x_881_; 
v___x_881_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__21));
return v___x_881_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___boxed(lean_object* v_x_882_){
_start:
{
uint8_t v_x_193__boxed_883_; lean_object* v_res_884_; 
v_x_193__boxed_883_ = lean_unbox(v_x_882_);
v_res_884_ = l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0(v_x_193__boxed_883_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0(lean_object* v_x_922_){
_start:
{
if (lean_obj_tag(v_x_922_) == 4)
{
lean_object* v_s_925_; lean_object* v___x_926_; uint8_t v___x_927_; 
v_s_925_ = lean_ctor_get(v_x_922_, 0);
v___x_926_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0));
v___x_927_ = lean_string_dec_eq(v_s_925_, v___x_926_);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_928_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2));
v___x_929_ = lean_string_dec_eq(v_s_925_, v___x_928_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; uint8_t v___x_931_; 
v___x_930_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4));
v___x_931_ = lean_string_dec_eq(v_s_925_, v___x_930_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_932_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6));
v___x_933_ = lean_string_dec_eq(v_s_925_, v___x_932_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_934_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8));
v___x_935_ = lean_string_dec_eq(v_s_925_, v___x_934_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_936_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10));
v___x_937_ = lean_string_dec_eq(v_s_925_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_938_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__12));
v___x_939_ = lean_string_dec_eq(v_s_925_, v___x_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__14));
v___x_941_ = lean_string_dec_eq(v_s_925_, v___x_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; uint8_t v___x_943_; 
v___x_942_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__16));
v___x_943_ = lean_string_dec_eq(v_s_925_, v___x_942_);
if (v___x_943_ == 0)
{
lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_944_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__18));
v___x_945_ = lean_string_dec_eq(v_s_925_, v___x_944_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; uint8_t v___x_947_; 
v___x_946_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__20));
v___x_947_ = lean_string_dec_eq(v_s_925_, v___x_946_);
if (v___x_947_ == 0)
{
goto v___jp_923_;
}
else
{
lean_object* v___x_948_; 
v___x_948_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__1));
return v___x_948_;
}
}
else
{
lean_object* v___x_949_; 
v___x_949_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2));
return v___x_949_;
}
}
else
{
lean_object* v___x_950_; 
v___x_950_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__3));
return v___x_950_;
}
}
else
{
lean_object* v___x_951_; 
v___x_951_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4));
return v___x_951_;
}
}
else
{
lean_object* v___x_952_; 
v___x_952_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__5));
return v___x_952_;
}
}
else
{
lean_object* v___x_953_; 
v___x_953_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6));
return v___x_953_;
}
}
else
{
lean_object* v___x_954_; 
v___x_954_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__7));
return v___x_954_;
}
}
else
{
lean_object* v___x_955_; 
v___x_955_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8));
return v___x_955_;
}
}
else
{
lean_object* v___x_956_; 
v___x_956_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__9));
return v___x_956_;
}
}
else
{
lean_object* v___x_957_; 
v___x_957_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10));
return v___x_957_;
}
}
else
{
lean_object* v___x_958_; 
v___x_958_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__11));
return v___x_958_;
}
}
else
{
goto v___jp_923_;
}
v___jp_923_:
{
lean_object* v___x_924_; 
v___x_924_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0));
return v___x_924_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0___boxed(lean_object* v_x_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass___lam__0(v_x_959_);
lean_dec(v_x_959_);
return v_res_960_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq___redArg(){
_start:
{
uint8_t v___x_969_; 
v___x_969_ = 1;
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq___redArg___boxed(lean_object* v___dummy_970_){
_start:
{
uint8_t v_res_971_; lean_object* v_r_972_; 
v_res_971_ = l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq___redArg();
v_r_972_ = lean_box(v_res_971_);
return v_r_972_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq(lean_object* v_x_973_, lean_object* v_y_974_){
_start:
{
uint8_t v___x_975_; 
v___x_975_ = 1;
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq___boxed(lean_object* v_x_976_, lean_object* v_y_977_){
_start:
{
uint8_t v_res_978_; lean_object* v_r_979_; 
v_res_978_ = l_Lasm_JS_Bun_instBEqS3ListObjectsResponseEncodingType_beq(v_x_976_, v_y_977_);
v_r_979_ = lean_box(v_res_978_);
return v_r_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg(lean_object* v_prec_985_){
_start:
{
lean_object* v___y_987_; lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_993_ = lean_unsigned_to_nat(1024u);
v___x_994_ = lean_nat_dec_le(v___x_993_, v_prec_985_);
if (v___x_994_ == 0)
{
lean_object* v___x_995_; 
v___x_995_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__2);
v___y_987_ = v___x_995_;
goto v___jp_986_;
}
else
{
lean_object* v___x_996_; 
v___x_996_ = lean_obj_once(&l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3, &l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3_once, _init_l_Lasm_JS_Bun_instReprS3ListObjectsOptionsEncodingType_repr___redArg___closed__3);
v___y_987_ = v___x_996_;
goto v___jp_986_;
}
v___jp_986_:
{
lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_988_ = ((lean_object*)(l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___closed__1));
lean_inc(v___y_987_);
v___x_989_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_989_, 0, v___y_987_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = 0;
v___x_991_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set_uint8(v___x_991_, sizeof(void*)*1, v___x_990_);
v___x_992_ = l_Repr_addAppParen(v___x_991_, v_prec_985_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg___boxed(lean_object* v_prec_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg(v_prec_997_);
lean_dec(v_prec_997_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr(lean_object* v_x_999_, lean_object* v_prec_1000_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___redArg(v_prec_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr___boxed(lean_object* v_x_1002_, lean_object* v_prec_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lasm_JS_Bun_instReprS3ListObjectsResponseEncodingType_repr(v_x_1002_, v_prec_1003_);
lean_dec(v_prec_1003_);
return v_res_1004_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType_default(void){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_box(0);
return v___x_1007_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType(void){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_box(0);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsResponseEncodingType___lam__0(lean_object* v_x_1009_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__1));
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0(lean_object* v_x_1017_){
_start:
{
if (lean_obj_tag(v_x_1017_) == 4)
{
lean_object* v_s_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v_s_1020_ = lean_ctor_get(v_x_1017_, 0);
v___x_1021_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__0));
v___x_1022_ = lean_string_dec_eq(v_s_1020_, v___x_1021_);
if (v___x_1022_ == 0)
{
goto v___jp_1018_;
}
else
{
lean_object* v___x_1023_; 
v___x_1023_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___closed__1));
return v___x_1023_;
}
}
else
{
goto v___jp_1018_;
}
v___jp_1018_:
{
lean_object* v___x_1019_; 
v___x_1019_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___closed__0));
return v___x_1019_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0___boxed(lean_object* v_x_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType___lam__0(v_x_1024_);
lean_dec(v_x_1024_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorIdx(lean_object* v_x_1033_){
_start:
{
switch(lean_obj_tag(v_x_1033_))
{
case 0:
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_unsigned_to_nat(0u);
return v___x_1034_;
}
case 1:
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_unsigned_to_nat(1u);
return v___x_1035_;
}
case 2:
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_unsigned_to_nat(2u);
return v___x_1036_;
}
case 3:
{
lean_object* v___x_1037_; 
v___x_1037_ = lean_unsigned_to_nat(3u);
return v___x_1037_;
}
case 4:
{
lean_object* v___x_1038_; 
v___x_1038_ = lean_unsigned_to_nat(4u);
return v___x_1038_;
}
case 5:
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_unsigned_to_nat(5u);
return v___x_1039_;
}
case 6:
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_unsigned_to_nat(6u);
return v___x_1040_;
}
case 7:
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_unsigned_to_nat(7u);
return v___x_1041_;
}
case 8:
{
lean_object* v___x_1042_; 
v___x_1042_ = lean_unsigned_to_nat(8u);
return v___x_1042_;
}
default: 
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_unsigned_to_nat(9u);
return v___x_1043_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorIdx___boxed(lean_object* v_x_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorIdx(v_x_1044_);
lean_dec_ref(v_x_1044_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(lean_object* v_t_1046_, lean_object* v_k_1047_){
_start:
{
switch(lean_obj_tag(v_t_1046_))
{
case 0:
{
lean_object* v_value_1048_; lean_object* v___x_1049_; 
v_value_1048_ = lean_ctor_get(v_t_1046_, 0);
lean_inc_ref(v_value_1048_);
lean_dec_ref_known(v_t_1046_, 1);
v___x_1049_ = lean_apply_1(v_k_1047_, v_value_1048_);
return v___x_1049_;
}
case 1:
{
lean_object* v_value_1050_; lean_object* v___x_1051_; 
v_value_1050_ = lean_ctor_get(v_t_1046_, 0);
lean_inc_ref(v_value_1050_);
lean_dec_ref_known(v_t_1046_, 1);
v___x_1051_ = lean_apply_1(v_k_1047_, v_value_1050_);
return v___x_1051_;
}
case 2:
{
lean_object* v_value_1052_; lean_object* v___x_1053_; 
v_value_1052_ = lean_ctor_get(v_t_1046_, 0);
lean_inc_ref(v_value_1052_);
lean_dec_ref_known(v_t_1046_, 1);
v___x_1053_ = lean_apply_1(v_k_1047_, v_value_1052_);
return v___x_1053_;
}
default: 
{
lean_object* v_value_1054_; lean_object* v___x_1055_; 
v_value_1054_ = lean_ctor_get(v_t_1046_, 0);
lean_inc(v_value_1054_);
lean_dec_ref(v_t_1046_);
v___x_1055_ = lean_apply_1(v_k_1047_, v_value_1054_);
return v___x_1055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim(lean_object* v_motive_1056_, lean_object* v_ctorIdx_1057_, lean_object* v_t_1058_, lean_object* v_h_1059_, lean_object* v_k_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1058_, v_k_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___boxed(lean_object* v_motive_1062_, lean_object* v_ctorIdx_1063_, lean_object* v_t_1064_, lean_object* v_h_1065_, lean_object* v_k_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim(v_motive_1062_, v_ctorIdx_1063_, v_t_1064_, v_h_1065_, v_k_1066_);
lean_dec(v_ctorIdx_1063_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_domString_elim___redArg(lean_object* v_t_1068_, lean_object* v_domString_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1068_, v_domString_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_domString_elim(lean_object* v_motive_1071_, lean_object* v_t_1072_, lean_object* v_h_1073_, lean_object* v_domString_1074_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1072_, v_domString_1074_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_uint8Array_elim___redArg(lean_object* v_t_1076_, lean_object* v_uint8Array_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1076_, v_uint8Array_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_uint8Array_elim(lean_object* v_motive_1079_, lean_object* v_t_1080_, lean_object* v_h_1081_, lean_object* v_uint8Array_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1080_, v_uint8Array_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_arrayBuffer_elim___redArg(lean_object* v_t_1084_, lean_object* v_arrayBuffer_1085_){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1084_, v_arrayBuffer_1085_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_arrayBuffer_elim(lean_object* v_motive_1087_, lean_object* v_t_1088_, lean_object* v_h_1089_, lean_object* v_arrayBuffer_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1088_, v_arrayBuffer_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_request_elim___redArg(lean_object* v_t_1092_, lean_object* v_request_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1092_, v_request_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_request_elim(lean_object* v_motive_1095_, lean_object* v_t_1096_, lean_object* v_h_1097_, lean_object* v_request_1098_){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1096_, v_request_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_response_elim___redArg(lean_object* v_t_1100_, lean_object* v_response_1101_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1100_, v_response_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_response_elim(lean_object* v_motive_1103_, lean_object* v_t_1104_, lean_object* v_h_1105_, lean_object* v_response_1106_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1104_, v_response_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_bunFile_elim___redArg(lean_object* v_t_1108_, lean_object* v_bunFile_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1108_, v_bunFile_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_bunFile_elim(lean_object* v_motive_1111_, lean_object* v_t_1112_, lean_object* v_h_1113_, lean_object* v_bunFile_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1112_, v_bunFile_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_s3File_elim___redArg(lean_object* v_t_1116_, lean_object* v_s3File_1117_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1116_, v_s3File_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_s3File_elim(lean_object* v_motive_1119_, lean_object* v_t_1120_, lean_object* v_h_1121_, lean_object* v_s3File_1122_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1120_, v_s3File_1122_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_blob_elim___redArg(lean_object* v_t_1124_, lean_object* v_blob_1125_){
_start:
{
lean_object* v___x_1126_; 
v___x_1126_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1124_, v_blob_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_blob_elim(lean_object* v_motive_1127_, lean_object* v_t_1128_, lean_object* v_h_1129_, lean_object* v_blob_1130_){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1128_, v_blob_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_file_elim___redArg(lean_object* v_t_1132_, lean_object* v_file_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1132_, v_file_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_file_elim(lean_object* v_motive_1135_, lean_object* v_t_1136_, lean_object* v_h_1137_, lean_object* v_file_1138_){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1136_, v_file_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_archive_elim___redArg(lean_object* v_t_1140_, lean_object* v_archive_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1140_, v_archive_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_archive_elim(lean_object* v_motive_1143_, lean_object* v_t_1144_, lean_object* v_h_1145_, lean_object* v_archive_1146_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive_ctorElim___redArg(v_t_1144_, v_archive_1146_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_x_1148_){
_start:
{
switch(lean_obj_tag(v_x_1148_))
{
case 0:
{
lean_object* v_value_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
v_value_1149_ = lean_ctor_get(v_x_1148_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v_x_1148_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v_x_1148_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_value_1149_);
lean_dec(v_x_1148_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
lean_ctor_set_tag(v___x_1151_, 4);
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_value_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
case 1:
{
lean_object* v_value_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
v_value_1157_ = lean_ctor_get(v_x_1148_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_x_1148_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v_x_1148_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_value_1157_);
lean_dec(v_x_1148_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 6);
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_value_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
case 2:
{
lean_object* v_value_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
v_value_1165_ = lean_ctor_get(v_x_1148_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_x_1148_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v_x_1148_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_value_1165_);
lean_dec(v_x_1148_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 6);
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_value_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
default: 
{
lean_object* v_value_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v_value_1173_ = lean_ctor_get(v_x_1148_, 0);
lean_inc(v_value_1173_);
lean_dec_ref(v_x_1148_);
v___x_1174_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_1175_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_value_1173_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
return v___x_1175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_value_1178_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1179_, 0, v_value_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_value_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1183_, 0, v_value_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeResponseDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_value_1186_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1187_, 0, v_value_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBunFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_value_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1191_, 0, v_value_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeS3FileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_value_1194_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1195_, 0, v_value_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_value_1198_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1199_, 0, v_value_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeFileDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_value_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_1203_, 0, v_value_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeArchiveDOMStringOrUint8ArrayOrArrayBufferOrRequestOrResponseOrBunFileOrS3FileOrBlobOrFileOrArchive___lam__0(lean_object* v_value_1206_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_value_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0(lean_object* v___f_1217_, lean_object* v___f_1218_, lean_object* v___f_1219_, lean_object* v___f_1220_, lean_object* v_d_1221_){
_start:
{
lean_object* v_prefix_1222_; lean_object* v_continuationToken_1223_; lean_object* v_delimiter_1224_; lean_object* v_maxKeys_1225_; lean_object* v_startAfter_1226_; lean_object* v_encodingType_1227_; lean_object* v_fetchOwner_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v_prefix_1222_ = lean_ctor_get(v_d_1221_, 0);
lean_inc(v_prefix_1222_);
v_continuationToken_1223_ = lean_ctor_get(v_d_1221_, 1);
lean_inc(v_continuationToken_1223_);
v_delimiter_1224_ = lean_ctor_get(v_d_1221_, 2);
lean_inc(v_delimiter_1224_);
v_maxKeys_1225_ = lean_ctor_get(v_d_1221_, 3);
lean_inc(v_maxKeys_1225_);
v_startAfter_1226_ = lean_ctor_get(v_d_1221_, 4);
lean_inc(v_startAfter_1226_);
v_encodingType_1227_ = lean_ctor_get(v_d_1221_, 5);
lean_inc(v_encodingType_1227_);
v_fetchOwner_1228_ = lean_ctor_get(v_d_1221_, 6);
lean_inc(v_fetchOwner_1228_);
lean_dec_ref(v_d_1221_);
v___x_1229_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1217_, 3);
v___x_1230_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1217_, v_prefix_1222_);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1));
v___x_1233_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1217_, v_continuationToken_1223_);
v___x_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1232_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2));
v___x_1236_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1217_, v_delimiter_1224_);
v___x_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3));
v___x_1239_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1218_, v_maxKeys_1225_);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1238_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4));
v___x_1242_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1217_, v_startAfter_1226_);
v___x_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5));
v___x_1245_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1219_, v_encodingType_1227_);
v___x_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__6));
v___x_1248_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1220_, v_fetchOwner_1228_);
v___x_1249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1247_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = lean_unsigned_to_nat(7u);
v___x_1251_ = lean_mk_empty_array_with_capacity(v___x_1250_);
v___x_1252_ = lean_array_push(v___x_1251_, v___x_1231_);
v___x_1253_ = lean_array_push(v___x_1252_, v___x_1234_);
v___x_1254_ = lean_array_push(v___x_1253_, v___x_1237_);
v___x_1255_ = lean_array_push(v___x_1254_, v___x_1240_);
v___x_1256_ = lean_array_push(v___x_1255_, v___x_1243_);
v___x_1257_ = lean_array_push(v___x_1256_, v___x_1246_);
v___x_1258_ = lean_array_push(v___x_1257_, v___x_1249_);
v___x_1259_ = l_Lasm_JS_Web_Support_fields(v___x_1258_);
lean_dec_ref(v___x_1258_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___lam__0(lean_object* v___x_1269_, lean_object* v_d_1270_){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
v___x_1272_ = l_Lasm_JS_readField___redArg(v___x_1269_, v_d_1270_, v___x_1271_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1273_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
v_a_1281_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1272_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1272_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___lam__0___boxed(lean_object* v___x_1289_, lean_object* v_d_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___lam__0(v___x_1289_, v_d_1290_);
lean_dec(v_d_1290_);
return v_res_1291_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__0(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___f_1293_; 
v___x_1292_ = l_Lasm_JS_instFromJSString;
v___f_1293_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1293_, 0, v___x_1292_);
return v___f_1293_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__2(void){
_start:
{
uint8_t v___x_1295_; lean_object* v___x_1296_; lean_object* v___f_1297_; lean_object* v___x_1298_; 
v___x_1295_ = 0;
v___x_1296_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__1));
v___f_1297_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__0);
v___x_1298_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1298_, 0, v___f_1297_);
lean_ctor_set(v___x_1298_, 1, v___x_1296_);
lean_ctor_set_uint8(v___x_1298_, sizeof(void*)*2, v___x_1295_);
return v___x_1298_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes(void){
_start:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__2, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__2_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes___closed__2);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0(lean_object* v___x_1302_, lean_object* v_d_1303_){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__0));
lean_inc_ref(v___x_1302_);
v___x_1305_ = l_Lasm_JS_readField___redArg(v___x_1302_, v_d_1303_, v___x_1304_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
lean_dec_ref(v___x_1302_);
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
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
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v_a_1314_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_a_1314_);
lean_dec_ref_known(v___x_1305_, 1);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__1));
v___x_1316_ = l_Lasm_JS_readField___redArg(v___x_1302_, v_d_1303_, v___x_1315_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
lean_dec(v_a_1314_);
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1316_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1316_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_a_1317_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1333_; 
v_a_1325_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1327_ = v___x_1316_;
v_isShared_1328_ = v_isSharedCheck_1333_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1316_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1333_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1329_; lean_object* v___x_1331_; 
v___x_1329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1329_, 0, v_a_1314_);
lean_ctor_set(v___x_1329_, 1, v_a_1325_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 0, v___x_1329_);
v___x_1331_ = v___x_1327_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v___x_1329_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___boxed(lean_object* v___x_1334_, lean_object* v_d_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0(v___x_1334_, v_d_1335_);
lean_dec(v_d_1335_);
return v_res_1336_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0(void){
_start:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1337_ = l_Lasm_JS_instFromJSString;
v___x_1338_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1337_);
return v___x_1338_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__1(void){
_start:
{
lean_object* v___x_1339_; lean_object* v___f_1340_; 
v___x_1339_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0);
v___f_1340_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1340_, 0, v___x_1339_);
return v___f_1340_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__3(void){
_start:
{
uint8_t v___x_1342_; lean_object* v___x_1343_; lean_object* v___f_1344_; lean_object* v___x_1345_; 
v___x_1342_ = 0;
v___x_1343_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__2));
v___f_1344_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__1, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__1_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__1);
v___x_1345_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1345_, 0, v___f_1344_);
lean_ctor_set(v___x_1345_, 1, v___x_1343_);
lean_ctor_set_uint8(v___x_1345_, sizeof(void*)*2, v___x_1342_);
return v___x_1345_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner(void){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__3, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__3_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__3);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0(lean_object* v___x_1349_, lean_object* v___x_1350_, lean_object* v_d_1351_){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__0));
v___x_1353_ = l_Lasm_JS_readField___redArg(v___x_1349_, v_d_1351_, v___x_1352_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1361_; 
lean_dec_ref(v___x_1350_);
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1356_ = v___x_1353_;
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_a_1354_);
lean_dec(v___x_1353_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1359_; 
if (v_isShared_1357_ == 0)
{
v___x_1359_ = v___x_1356_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v_a_1354_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
else
{
lean_object* v_a_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v_a_1362_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1353_, 1);
v___x_1363_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__1));
v___x_1364_ = l_Lasm_JS_readField___redArg(v___x_1350_, v_d_1351_, v___x_1363_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec(v_a_1362_);
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1364_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1364_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1381_; 
v_a_1373_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1375_ = v___x_1364_;
v_isShared_1376_ = v_isSharedCheck_1381_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1364_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1381_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1379_; 
v___x_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1377_, 0, v_a_1362_);
lean_ctor_set(v___x_1377_, 1, v_a_1373_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1377_);
v___x_1379_ = v___x_1375_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1377_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___boxed(lean_object* v___x_1382_, lean_object* v___x_1383_, lean_object* v_d_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0(v___x_1382_, v___x_1383_, v_d_1384_);
lean_dec(v_d_1384_);
return v_res_1385_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0(void){
_start:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = l_Lasm_JS_instFromJSBool;
v___x_1387_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1386_);
return v___x_1387_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__1(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___f_1390_; 
v___x_1388_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0);
v___x_1389_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0);
v___f_1390_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1390_, 0, v___x_1389_);
lean_closure_set(v___f_1390_, 1, v___x_1388_);
return v___f_1390_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__3(void){
_start:
{
uint8_t v___x_1392_; lean_object* v___x_1393_; lean_object* v___f_1394_; lean_object* v___x_1395_; 
v___x_1392_ = 0;
v___x_1393_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__2));
v___f_1394_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__1, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__1_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__1);
v___x_1395_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1395_, 0, v___f_1394_);
lean_ctor_set(v___x_1395_, 1, v___x_1393_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*2, v___x_1392_);
return v___x_1395_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus(void){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__3, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__3_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__3);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0(lean_object* v___x_1406_, lean_object* v___x_1407_, lean_object* v___x_1408_, lean_object* v___x_1409_, lean_object* v___x_1410_, lean_object* v___x_1411_, lean_object* v___x_1412_, lean_object* v___x_1413_, lean_object* v_d_1414_){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__0));
v___x_1416_ = l_Lasm_JS_readField___redArg(v___x_1406_, v_d_1414_, v___x_1415_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
lean_dec_ref(v___x_1413_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v___x_1410_);
lean_dec_ref(v___x_1409_);
lean_dec_ref(v___x_1408_);
lean_dec_ref(v___x_1407_);
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1416_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1416_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v_a_1425_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1416_, 1);
v___x_1426_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__1));
v___x_1427_ = l_Lasm_JS_readField___redArg(v___x_1407_, v_d_1414_, v___x_1426_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
lean_dec(v_a_1425_);
lean_dec_ref(v___x_1413_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v___x_1410_);
lean_dec_ref(v___x_1409_);
lean_dec_ref(v___x_1408_);
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
lean_object* v_a_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v_a_1436_ = lean_ctor_get(v___x_1427_, 0);
lean_inc(v_a_1436_);
lean_dec_ref_known(v___x_1427_, 1);
v___x_1437_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__2));
lean_inc_ref(v___x_1408_);
v___x_1438_ = l_Lasm_JS_readField___redArg(v___x_1408_, v_d_1414_, v___x_1437_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
lean_dec(v_a_1436_);
lean_dec(v_a_1425_);
lean_dec_ref(v___x_1413_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v___x_1410_);
lean_dec_ref(v___x_1409_);
lean_dec_ref(v___x_1408_);
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1438_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v_a_1447_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1438_, 1);
v___x_1448_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__3));
v___x_1449_ = l_Lasm_JS_readField___redArg(v___x_1409_, v_d_1414_, v___x_1448_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec(v_a_1447_);
lean_dec(v_a_1436_);
lean_dec(v_a_1425_);
lean_dec_ref(v___x_1413_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v___x_1410_);
lean_dec_ref(v___x_1408_);
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1449_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1449_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v_a_1458_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1449_, 1);
v___x_1459_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__4));
v___x_1460_ = l_Lasm_JS_readField___redArg(v___x_1408_, v_d_1414_, v___x_1459_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec(v_a_1458_);
lean_dec(v_a_1447_);
lean_dec(v_a_1436_);
lean_dec(v_a_1425_);
lean_dec_ref(v___x_1413_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
lean_dec_ref(v___x_1410_);
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
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
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v_a_1469_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___x_1460_, 1);
v___x_1470_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__5));
v___x_1471_ = l_Lasm_JS_readField___redArg(v___x_1410_, v_d_1414_, v___x_1470_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec(v_a_1469_);
lean_dec(v_a_1458_);
lean_dec(v_a_1447_);
lean_dec(v_a_1436_);
lean_dec(v_a_1425_);
lean_dec_ref(v___x_1413_);
lean_dec_ref(v___x_1412_);
lean_dec_ref(v___x_1411_);
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
lean_object* v_a_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v_a_1480_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_a_1480_);
lean_dec_ref_known(v___x_1471_, 1);
v___x_1481_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__6));
v___x_1482_ = l_Lasm_JS_readField___redArg(v___x_1411_, v_d_1414_, v___x_1481_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec(v_a_1480_);
lean_dec(v_a_1469_);
lean_dec(v_a_1458_);
lean_dec(v_a_1447_);
lean_dec(v_a_1436_);
lean_dec(v_a_1425_);
lean_dec_ref(v___x_1413_);
lean_dec_ref(v___x_1412_);
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1482_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1482_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v_a_1491_ = lean_ctor_get(v___x_1482_, 0);
lean_inc(v_a_1491_);
lean_dec_ref_known(v___x_1482_, 1);
v___x_1492_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__7));
v___x_1493_ = l_Lasm_JS_readField___redArg(v___x_1412_, v_d_1414_, v___x_1492_);
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1501_; 
lean_dec(v_a_1491_);
lean_dec(v_a_1480_);
lean_dec(v_a_1469_);
lean_dec(v_a_1458_);
lean_dec(v_a_1447_);
lean_dec(v_a_1436_);
lean_dec(v_a_1425_);
lean_dec_ref(v___x_1413_);
v_a_1494_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1496_ = v___x_1493_;
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___x_1493_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1499_; 
if (v_isShared_1497_ == 0)
{
v___x_1499_ = v___x_1496_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_a_1494_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
}
else
{
lean_object* v_a_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v_a_1502_ = lean_ctor_get(v___x_1493_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1493_, 1);
v___x_1503_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__8));
v___x_1504_ = l_Lasm_JS_readField___redArg(v___x_1413_, v_d_1414_, v___x_1503_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec(v_a_1502_);
lean_dec(v_a_1491_);
lean_dec(v_a_1480_);
lean_dec(v_a_1469_);
lean_dec(v_a_1458_);
lean_dec(v_a_1447_);
lean_dec(v_a_1436_);
lean_dec(v_a_1425_);
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1504_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1504_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1521_; 
v_a_1513_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1515_ = v___x_1504_;
v_isShared_1516_ = v_isSharedCheck_1521_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1504_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1521_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; lean_object* v___x_1519_; 
v___x_1517_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1517_, 0, v_a_1425_);
lean_ctor_set(v___x_1517_, 1, v_a_1436_);
lean_ctor_set(v___x_1517_, 2, v_a_1447_);
lean_ctor_set(v___x_1517_, 3, v_a_1458_);
lean_ctor_set(v___x_1517_, 4, v_a_1469_);
lean_ctor_set(v___x_1517_, 5, v_a_1480_);
lean_ctor_set(v___x_1517_, 6, v_a_1491_);
lean_ctor_set(v___x_1517_, 7, v_a_1502_);
lean_ctor_set(v___x_1517_, 8, v_a_1513_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 0, v___x_1517_);
v___x_1519_ = v___x_1515_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1517_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___boxed(lean_object* v___x_1522_, lean_object* v___x_1523_, lean_object* v___x_1524_, lean_object* v___x_1525_, lean_object* v___x_1526_, lean_object* v___x_1527_, lean_object* v___x_1528_, lean_object* v___x_1529_, lean_object* v_d_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0(v___x_1522_, v___x_1523_, v___x_1524_, v___x_1525_, v___x_1526_, v___x_1527_, v___x_1528_, v___x_1529_, v_d_1530_);
lean_dec(v_d_1530_);
return v_res_1531_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__0(void){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumAlgorithm));
v___x_1533_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1532_);
return v___x_1533_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__1(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsChecksumType));
v___x_1535_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1534_);
return v___x_1535_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__2(void){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner;
v___x_1537_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1536_);
return v___x_1537_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__3(void){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus;
v___x_1539_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1538_);
return v___x_1539_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = l_Lasm_JS_instFromJSFloat;
v___x_1541_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1540_);
return v___x_1541_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__5(void){
_start:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1542_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsStorageClass));
v___x_1543_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1542_);
return v___x_1543_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__6(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___f_1552_; 
v___x_1544_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__5, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__5_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__5);
v___x_1545_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4);
v___x_1546_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__3, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__3_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__3);
v___x_1547_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__2, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__2_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__2);
v___x_1548_ = l_Lasm_JS_instFromJSString;
v___x_1549_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0);
v___x_1550_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__1, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__1_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__1);
v___x_1551_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__0);
v___f_1552_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___boxed), 9, 8);
lean_closure_set(v___f_1552_, 0, v___x_1551_);
lean_closure_set(v___f_1552_, 1, v___x_1550_);
lean_closure_set(v___f_1552_, 2, v___x_1549_);
lean_closure_set(v___f_1552_, 3, v___x_1548_);
lean_closure_set(v___f_1552_, 4, v___x_1547_);
lean_closure_set(v___f_1552_, 5, v___x_1546_);
lean_closure_set(v___f_1552_, 6, v___x_1545_);
lean_closure_set(v___f_1552_, 7, v___x_1544_);
return v___f_1552_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__8(void){
_start:
{
uint8_t v___x_1554_; lean_object* v___x_1555_; lean_object* v___f_1556_; lean_object* v___x_1557_; 
v___x_1554_ = 0;
v___x_1555_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__7));
v___f_1556_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__6, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__6_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__6);
v___x_1557_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1557_, 0, v___f_1556_);
lean_ctor_set(v___x_1557_, 1, v___x_1555_);
lean_ctor_set_uint8(v___x_1557_, sizeof(void*)*2, v___x_1554_);
return v___x_1557_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents(void){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__8, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__8_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__8);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0(lean_object* v___x_1565_, lean_object* v___x_1566_, lean_object* v___x_1567_, lean_object* v___x_1568_, lean_object* v___x_1569_, lean_object* v___x_1570_, lean_object* v_d_1571_){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__0));
v___x_1573_ = l_Lasm_JS_readField___redArg(v___x_1565_, v_d_1571_, v___x_1572_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec_ref(v___x_1570_);
lean_dec_ref(v___x_1569_);
lean_dec_ref(v___x_1568_);
lean_dec_ref(v___x_1567_);
lean_dec_ref(v___x_1566_);
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1573_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1573_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v_a_1582_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1573_, 1);
v___x_1583_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__1));
v___x_1584_ = l_Lasm_JS_readField___redArg(v___x_1566_, v_d_1571_, v___x_1583_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1570_);
lean_dec_ref(v___x_1569_);
lean_dec_ref(v___x_1568_);
lean_dec_ref(v___x_1567_);
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1584_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1584_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v___x_1584_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
else
{
lean_object* v_a_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v_a_1593_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1593_);
lean_dec_ref_known(v___x_1584_, 1);
v___x_1594_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1));
lean_inc_ref(v___x_1567_);
v___x_1595_ = l_Lasm_JS_readField___redArg(v___x_1567_, v_d_1571_, v___x_1594_);
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1570_);
lean_dec_ref(v___x_1569_);
lean_dec_ref(v___x_1568_);
lean_dec_ref(v___x_1567_);
v_a_1596_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v___x_1595_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1595_);
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
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v_a_1604_ = lean_ctor_get(v___x_1595_, 0);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1595_, 1);
v___x_1605_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2));
lean_inc_ref(v___x_1567_);
v___x_1606_ = l_Lasm_JS_readField___redArg(v___x_1567_, v_d_1571_, v___x_1605_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1570_);
lean_dec_ref(v___x_1569_);
lean_dec_ref(v___x_1568_);
lean_dec_ref(v___x_1567_);
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v_a_1615_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v___x_1606_, 1);
v___x_1616_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5));
v___x_1617_ = l_Lasm_JS_readField___redArg(v___x_1568_, v_d_1571_, v___x_1616_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_dec(v_a_1615_);
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1570_);
lean_dec_ref(v___x_1569_);
lean_dec_ref(v___x_1567_);
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1617_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1617_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
else
{
lean_object* v_a_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v_a_1626_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_a_1626_);
lean_dec_ref_known(v___x_1617_, 1);
v___x_1627_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__2));
v___x_1628_ = l_Lasm_JS_readField___redArg(v___x_1569_, v_d_1571_, v___x_1627_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_dec(v_a_1626_);
lean_dec(v_a_1615_);
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1570_);
lean_dec_ref(v___x_1567_);
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1628_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1628_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v_a_1637_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_a_1637_);
lean_dec_ref_known(v___x_1628_, 1);
v___x_1638_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__3));
lean_inc_ref(v___x_1570_);
v___x_1639_ = l_Lasm_JS_readField___redArg(v___x_1570_, v_d_1571_, v___x_1638_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec(v_a_1637_);
lean_dec(v_a_1626_);
lean_dec(v_a_1615_);
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1570_);
lean_dec_ref(v___x_1567_);
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1639_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1639_);
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
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v_a_1648_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1639_, 1);
v___x_1649_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3));
v___x_1650_ = l_Lasm_JS_readField___redArg(v___x_1570_, v_d_1571_, v___x_1649_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_dec(v_a_1648_);
lean_dec(v_a_1637_);
lean_dec(v_a_1626_);
lean_dec(v_a_1615_);
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1567_);
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1650_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1650_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v_a_1659_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1660_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__4));
lean_inc_ref(v___x_1567_);
v___x_1661_ = l_Lasm_JS_readField___redArg(v___x_1567_, v_d_1571_, v___x_1660_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_a_1659_);
lean_dec(v_a_1648_);
lean_dec(v_a_1637_);
lean_dec(v_a_1626_);
lean_dec(v_a_1615_);
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1567_);
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1661_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1661_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
else
{
lean_object* v_a_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v_a_1670_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v___x_1661_, 1);
v___x_1671_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__5));
lean_inc_ref(v___x_1567_);
v___x_1672_ = l_Lasm_JS_readField___redArg(v___x_1567_, v_d_1571_, v___x_1671_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec(v_a_1670_);
lean_dec(v_a_1659_);
lean_dec(v_a_1648_);
lean_dec(v_a_1637_);
lean_dec(v_a_1626_);
lean_dec(v_a_1615_);
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1567_);
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
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
lean_object* v_a_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_a_1681_ = lean_ctor_get(v___x_1672_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v___x_1672_, 1);
v___x_1682_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
lean_inc_ref(v___x_1567_);
v___x_1683_ = l_Lasm_JS_readField___redArg(v___x_1567_, v_d_1571_, v___x_1682_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
lean_dec(v_a_1681_);
lean_dec(v_a_1670_);
lean_dec(v_a_1659_);
lean_dec(v_a_1648_);
lean_dec(v_a_1637_);
lean_dec(v_a_1626_);
lean_dec(v_a_1615_);
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1567_);
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v___x_1683_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1683_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
else
{
lean_object* v_a_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v_a_1692_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1692_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1693_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4));
v___x_1694_ = l_Lasm_JS_readField___redArg(v___x_1567_, v_d_1571_, v___x_1693_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
lean_dec(v_a_1692_);
lean_dec(v_a_1681_);
lean_dec(v_a_1670_);
lean_dec(v_a_1659_);
lean_dec(v_a_1648_);
lean_dec(v_a_1637_);
lean_dec(v_a_1626_);
lean_dec(v_a_1615_);
lean_dec(v_a_1604_);
lean_dec(v_a_1593_);
lean_dec(v_a_1582_);
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_a_1695_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1711_; 
v_a_1703_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1705_ = v___x_1694_;
v_isShared_1706_ = v_isSharedCheck_1711_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1694_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1711_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1707_; lean_object* v___x_1709_; 
v___x_1707_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1707_, 0, v_a_1582_);
lean_ctor_set(v___x_1707_, 1, v_a_1593_);
lean_ctor_set(v___x_1707_, 2, v_a_1604_);
lean_ctor_set(v___x_1707_, 3, v_a_1615_);
lean_ctor_set(v___x_1707_, 4, v_a_1626_);
lean_ctor_set(v___x_1707_, 5, v_a_1637_);
lean_ctor_set(v___x_1707_, 6, v_a_1648_);
lean_ctor_set(v___x_1707_, 7, v_a_1659_);
lean_ctor_set(v___x_1707_, 8, v_a_1670_);
lean_ctor_set(v___x_1707_, 9, v_a_1681_);
lean_ctor_set(v___x_1707_, 10, v_a_1692_);
lean_ctor_set(v___x_1707_, 11, v_a_1703_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 0, v___x_1707_);
v___x_1709_ = v___x_1705_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___boxed(lean_object* v___x_1712_, lean_object* v___x_1713_, lean_object* v___x_1714_, lean_object* v___x_1715_, lean_object* v___x_1716_, lean_object* v___x_1717_, lean_object* v_d_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0(v___x_1712_, v___x_1713_, v___x_1714_, v___x_1715_, v___x_1716_, v___x_1717_, v_d_1718_);
lean_dec(v_d_1718_);
return v_res_1719_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__0(void){
_start:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes;
v___x_1721_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1720_);
return v___x_1721_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1(void){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__0);
v___x_1723_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1722_);
return v___x_1723_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__2(void){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents;
v___x_1725_ = l_Lasm_JS_instFromJSArray___redArg(v___x_1724_);
return v___x_1725_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3(void){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__2, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__2_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__2);
v___x_1727_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1726_);
return v___x_1727_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4(void){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseEncodingType));
v___x_1729_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1728_);
return v___x_1729_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___f_1736_; 
v___x_1730_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___closed__4);
v___x_1731_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0);
v___x_1732_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4);
v___x_1733_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0);
v___x_1734_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3);
v___x_1735_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1);
v___f_1736_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1736_, 0, v___x_1735_);
lean_closure_set(v___f_1736_, 1, v___x_1734_);
lean_closure_set(v___f_1736_, 2, v___x_1733_);
lean_closure_set(v___f_1736_, 3, v___x_1732_);
lean_closure_set(v___f_1736_, 4, v___x_1731_);
lean_closure_set(v___f_1736_, 5, v___x_1730_);
return v___f_1736_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7(void){
_start:
{
uint8_t v___x_1738_; lean_object* v___x_1739_; lean_object* v___f_1740_; lean_object* v___x_1741_; 
v___x_1738_ = 0;
v___x_1739_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6));
v___f_1740_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5);
v___x_1741_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1741_, 0, v___f_1740_);
lean_ctor_set(v___x_1741_, 1, v___x_1739_);
lean_ctor_set_uint8(v___x_1741_, sizeof(void*)*2, v___x_1738_);
return v___x_1741_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse(void){
_start:
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7);
return v___x_1742_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_1747_ = lean_string_utf8_byte_size(v___x_1746_);
return v___x_1747_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1748_ = lean_unsigned_to_nat(0u);
v___x_1749_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3);
v___x_1750_ = lean_nat_dec_eq(v___x_1749_, v___x_1748_);
return v___x_1750_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1755_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__8));
v___x_1756_ = lean_unsigned_to_nat(46u);
v___x_1757_ = lean_unsigned_to_nat(193u);
v___x_1758_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__7));
v___x_1759_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__6));
v___x_1760_ = l_mkPanicMessageWithDecl(v___x_1759_, v___x_1758_, v___x_1757_, v___x_1756_, v___x_1755_);
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0(lean_object* v_context_1762_, lean_object* v_d_1763_){
_start:
{
lean_object* v___y_1766_; lean_object* v___y_1767_; 
if (lean_obj_tag(v_d_1763_) == 9)
{
lean_object* v_value_1771_; lean_object* v___x_1772_; 
v_value_1771_ = lean_ctor_get(v_d_1763_, 0);
lean_inc(v_value_1771_);
lean_dec_ref_known(v_d_1763_, 2);
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v_value_1771_);
return v___x_1772_;
}
else
{
lean_object* v___x_1773_; lean_object* v_received_1775_; 
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
if (lean_obj_tag(v_d_1763_) == 9)
{
lean_object* v_value_1789_; lean_object* v_description_1790_; uint8_t v___x_1791_; 
v_value_1789_ = lean_ctor_get(v_d_1763_, 0);
v_description_1790_ = lean_ctor_get(v_d_1763_, 1);
v___x_1791_ = lean_string_dec_eq(v_description_1790_, v___x_1773_);
if (v___x_1791_ == 0)
{
goto v___jp_1787_;
}
else
{
uint32_t v___x_1792_; uint64_t v___x_1793_; lean_object* v___x_1794_; uint32_t v___x_1795_; lean_object* v___x_1796_; 
lean_inc_n(v_value_1789_, 2);
lean_dec_ref_known(v_d_1763_, 2);
v___x_1792_ = 206;
v___x_1793_ = 0ULL;
v___x_1794_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1794_, 0, v_value_1789_);
lean_ctor_set(v___x_1794_, 1, v___x_1773_);
v___x_1795_ = lasm_js_value_handle(v_value_1789_);
lean_dec(v_value_1789_);
v___x_1796_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1792_, v___x_1793_, v___x_1794_, v___x_1795_);
lean_dec_ref_known(v___x_1794_, 2);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; uint8_t v___x_1798_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref_known(v___x_1796_, 1);
v___x_1798_ = lean_string_validate_utf8(v_a_1797_);
if (v___x_1798_ == 0)
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
lean_dec(v_a_1797_);
v___x_1799_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9);
v___x_1800_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1799_);
v_received_1775_ = v___x_1800_;
goto v___jp_1774_;
}
else
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_string_from_utf8_unchecked(v_a_1797_);
v_received_1775_ = v___x_1801_;
goto v___jp_1774_;
}
}
else
{
lean_object* v___x_1802_; 
lean_dec_ref_known(v___x_1796_, 1);
v___x_1802_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__10));
v_received_1775_ = v___x_1802_;
goto v___jp_1774_;
}
}
}
else
{
goto v___jp_1787_;
}
v___jp_1774_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; uint8_t v___x_1785_; 
v___x_1776_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_1777_ = lean_string_append(v___x_1776_, v_context_1762_);
v___x_1778_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__1));
v___x_1779_ = lean_string_append(v___x_1777_, v___x_1778_);
v___x_1780_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3Client___closed__1));
v___x_1781_ = lean_string_append(v___x_1779_, v___x_1780_);
v___x_1782_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__2));
v___x_1783_ = lean_string_append(v___x_1781_, v___x_1782_);
v___x_1784_ = lean_string_append(v___x_1783_, v_received_1775_);
lean_dec_ref(v_received_1775_);
v___x_1785_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; 
v___x_1786_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__5));
v___y_1766_ = v___x_1784_;
v___y_1767_ = v___x_1786_;
goto v___jp_1765_;
}
else
{
v___y_1766_ = v___x_1784_;
v___y_1767_ = v___x_1773_;
goto v___jp_1765_;
}
}
v___jp_1787_:
{
lean_object* v___x_1788_; 
v___x_1788_ = l_Lasm_JS_Data_describe(v_d_1763_);
v_received_1775_ = v___x_1788_;
goto v___jp_1774_;
}
}
v___jp_1765_:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1768_ = lean_string_append(v___y_1766_, v___y_1767_);
v___x_1769_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
v___x_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1769_);
return v___x_1770_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___boxed(lean_object* v_context_1803_, lean_object* v_d_1804_, lean_object* v_a_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0(v_context_1803_, v_d_1804_);
lean_dec_ref(v_context_1803_);
return v_res_1806_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_1808_; uint64_t v___x_1809_; 
v___x_1808_ = 0;
v___x_1809_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0(lean_object* v_b_1810_, lean_object* v_args_1811_, uint8_t v_await_1812_){
_start:
{
uint64_t v___y_1815_; uint64_t v___y_1816_; uint64_t v___x_1859_; uint64_t v___y_1861_; 
v___x_1859_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_await_1812_ == 0)
{
uint64_t v___x_1866_; 
v___x_1866_ = 0ULL;
v___y_1861_ = v___x_1866_;
goto v___jp_1860_;
}
else
{
uint64_t v___x_1867_; 
v___x_1867_ = 2ULL;
v___y_1861_ = v___x_1867_;
goto v___jp_1860_;
}
v___jp_1814_:
{
uint64_t v_flags_1817_; uint32_t v___x_1818_; lean_object* v___x_1819_; uint32_t v___x_1820_; lean_object* v___x_1821_; 
v_flags_1817_ = lean_uint64_lor(v___y_1815_, v___y_1816_);
v___x_1818_ = 214;
v___x_1819_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1810_, v_args_1811_);
v___x_1820_ = 0;
v___x_1821_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1818_, v_flags_1817_, v___x_1819_, v___x_1820_);
lean_dec(v___x_1819_);
if (lean_obj_tag(v___x_1821_) == 0)
{
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; lean_object* v___x_1823_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1821_, 1);
v___x_1823_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1822_);
lean_dec(v_a_1822_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1810_);
v___x_1826_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0(v___x_1825_, v_a_1824_);
lean_dec_ref(v___x_1825_);
return v___x_1826_;
}
else
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
v_a_1827_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1823_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1823_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1827_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
else
{
lean_object* v_a_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1842_; 
v_a_1835_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1842_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1837_ = v___x_1821_;
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_a_1835_);
lean_dec(v___x_1821_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1842_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1840_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set_tag(v___x_1837_, 1);
v___x_1840_ = v___x_1837_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_a_1835_);
v___x_1840_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
return v___x_1840_;
}
}
}
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1858_; 
v_a_1843_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1845_ = v___x_1821_;
v_isShared_1846_ = v_isSharedCheck_1858_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1821_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1858_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1856_; 
v___x_1847_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_1848_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1810_);
v___x_1849_ = lean_string_append(v___x_1847_, v___x_1848_);
lean_dec_ref(v___x_1848_);
v___x_1850_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_1851_ = lean_string_append(v___x_1849_, v___x_1850_);
v___x_1852_ = lean_io_error_to_string(v_a_1843_);
v___x_1853_ = lean_string_append(v___x_1851_, v___x_1852_);
lean_dec_ref(v___x_1852_);
v___x_1854_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1854_);
v___x_1856_ = v___x_1845_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1854_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
v___jp_1860_:
{
uint8_t v_construct_1862_; uint64_t v___x_1863_; 
v_construct_1862_ = lean_ctor_get_uint8(v_b_1810_, sizeof(void*)*4);
v___x_1863_ = lean_uint64_lor(v___x_1859_, v___y_1861_);
if (v_construct_1862_ == 0)
{
uint64_t v___x_1864_; 
v___x_1864_ = 0ULL;
v___y_1815_ = v___x_1863_;
v___y_1816_ = v___x_1864_;
goto v___jp_1814_;
}
else
{
uint64_t v___x_1865_; 
v___x_1865_ = 4ULL;
v___y_1815_ = v___x_1863_;
v___y_1816_ = v___x_1865_;
goto v___jp_1814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___boxed(lean_object* v_b_1868_, lean_object* v_args_1869_, lean_object* v_await_1870_, lean_object* v_a_1871_){
_start:
{
uint8_t v_await_boxed_1872_; lean_object* v_res_1873_; 
v_await_boxed_1872_ = lean_unbox(v_await_1870_);
v_res_1873_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0(v_b_1868_, v_args_1869_, v_await_boxed_1872_);
lean_dec_ref(v_b_1868_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_new(lean_object* v_options_1883_){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; uint8_t v___x_1891_; lean_object* v___x_1892_; 
v___x_1885_ = lean_unsigned_to_nat(1u);
v___x_1886_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_new___closed__3));
v___x_1887_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_1883_);
v___x_1888_ = lean_mk_empty_array_with_capacity(v___x_1885_);
v___x_1889_ = lean_array_push(v___x_1888_, v___x_1887_);
v___x_1890_ = l_Lasm_JS_Web_Support_args(v___x_1889_);
v___x_1891_ = 0;
v___x_1892_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0(v___x_1886_, v___x_1890_, v___x_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_new___boxed(lean_object* v_options_1893_, lean_object* v_a_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l_Lasm_JS_Bun_S3Client_new(v_options_1893_);
lean_dec(v_options_1893_);
return v_res_1895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_file(lean_object* v_self_1897_, lean_object* v_path_1898_, lean_object* v_options_1899_){
_start:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1901_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_file___closed__0));
v___x_1902_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1902_, 0, v_path_1898_);
v___x_1903_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_1899_);
v___x_1904_ = lean_unsigned_to_nat(2u);
v___x_1905_ = lean_mk_empty_array_with_capacity(v___x_1904_);
v___x_1906_ = lean_array_push(v___x_1905_, v___x_1902_);
v___x_1907_ = lean_array_push(v___x_1906_, v___x_1903_);
v___x_1908_ = l_Lasm_JS_Web_Support_args(v___x_1907_);
v___x_1909_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1897_, v___x_1901_, v___x_1908_);
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
v_a_1910_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1909_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1909_);
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
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
v_a_1918_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1909_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1909_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_file___boxed(lean_object* v_self_1926_, lean_object* v_path_1927_, lean_object* v_options_1928_, lean_object* v_a_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Lasm_JS_Bun_S3Client_file(v_self_1926_, v_path_1927_, v_options_1928_);
lean_dec(v_options_1928_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticFile(lean_object* v_path_1939_, lean_object* v_options_1940_){
_start:
{
uint8_t v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1942_ = 0;
v___x_1943_ = lean_unsigned_to_nat(2u);
v___x_1944_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticFile___closed__2));
v___x_1945_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1945_, 0, v_path_1939_);
v___x_1946_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_1940_);
v___x_1947_ = lean_mk_empty_array_with_capacity(v___x_1943_);
v___x_1948_ = lean_array_push(v___x_1947_, v___x_1945_);
v___x_1949_ = lean_array_push(v___x_1948_, v___x_1946_);
v___x_1950_ = l_Lasm_JS_Web_Support_args(v___x_1949_);
v___x_1951_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1944_, v___x_1950_, v___x_1942_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1951_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1951_);
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
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
v_a_1960_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v___x_1951_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1951_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticFile___boxed(lean_object* v_path_1968_, lean_object* v_options_1969_, lean_object* v_a_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Lasm_JS_Bun_S3Client_staticFile(v_path_1968_, v_options_1969_);
lean_dec(v_options_1969_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_write(lean_object* v_self_1973_, lean_object* v_path_1974_, lean_object* v_data_1975_, lean_object* v_options_1976_){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___y_1981_; 
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_write___closed__0));
v___x_1979_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1979_, 0, v_path_1974_);
switch(lean_obj_tag(v_data_1975_))
{
case 0:
{
lean_object* v_value_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
v_value_1990_ = lean_ctor_get(v_data_1975_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_data_1975_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v_data_1975_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_value_1990_);
lean_dec(v_data_1975_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
lean_ctor_set_tag(v___x_1992_, 4);
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_value_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
v___y_1981_ = v___x_1995_;
goto v___jp_1980_;
}
}
}
case 1:
{
lean_object* v_value_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
v_value_1998_ = lean_ctor_get(v_data_1975_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v_data_1975_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v_data_1975_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_value_1998_);
lean_dec(v_data_1975_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
lean_ctor_set_tag(v___x_2000_, 6);
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_value_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
v___y_1981_ = v___x_2003_;
goto v___jp_1980_;
}
}
}
case 2:
{
lean_object* v_value_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
v_value_2006_ = lean_ctor_get(v_data_1975_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v_data_1975_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v_data_1975_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_value_2006_);
lean_dec(v_data_1975_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
lean_ctor_set_tag(v___x_2008_, 6);
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_value_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
v___y_1981_ = v___x_2011_;
goto v___jp_1980_;
}
}
}
default: 
{
lean_object* v_value_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v_value_2014_ = lean_ctor_get(v_data_1975_, 0);
lean_inc(v_value_2014_);
lean_dec_ref(v_data_1975_);
v___x_2015_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_2016_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2016_, 0, v_value_2014_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v___y_1981_ = v___x_2016_;
goto v___jp_1980_;
}
}
v___jp_1980_:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1982_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_1976_);
v___x_1983_ = lean_unsigned_to_nat(3u);
v___x_1984_ = lean_mk_empty_array_with_capacity(v___x_1983_);
v___x_1985_ = lean_array_push(v___x_1984_, v___x_1979_);
v___x_1986_ = lean_array_push(v___x_1985_, v___y_1981_);
v___x_1987_ = lean_array_push(v___x_1986_, v___x_1982_);
v___x_1988_ = l_Lasm_JS_Web_Support_args(v___x_1987_);
v___x_1989_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_FileSink_write_spec__0(v_self_1973_, v___x_1978_, v___x_1988_);
return v___x_1989_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_write___boxed(lean_object* v_self_2017_, lean_object* v_path_2018_, lean_object* v_data_2019_, lean_object* v_options_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v_res_2022_; 
v_res_2022_ = l_Lasm_JS_Bun_S3Client_write(v_self_2017_, v_path_2018_, v_data_2019_, v_options_2020_);
lean_dec(v_options_2020_);
return v_res_2022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticWrite(lean_object* v_path_2031_, lean_object* v_data_2032_, lean_object* v_options_2033_){
_start:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___y_2039_; 
v___x_2035_ = lean_unsigned_to_nat(3u);
v___x_2036_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticWrite___closed__2));
v___x_2037_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2037_, 0, v_path_2031_);
switch(lean_obj_tag(v_data_2032_))
{
case 0:
{
lean_object* v_value_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
v_value_2047_ = lean_ctor_get(v_data_2032_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v_data_2032_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v_data_2032_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_value_2047_);
lean_dec(v_data_2032_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
lean_ctor_set_tag(v___x_2049_, 4);
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_value_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
v___y_2039_ = v___x_2052_;
goto v___jp_2038_;
}
}
}
case 1:
{
lean_object* v_value_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
v_value_2055_ = lean_ctor_get(v_data_2032_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v_data_2032_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v_data_2032_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_value_2055_);
lean_dec(v_data_2032_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
lean_ctor_set_tag(v___x_2057_, 6);
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_value_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
v___y_2039_ = v___x_2060_;
goto v___jp_2038_;
}
}
}
case 2:
{
lean_object* v_value_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
v_value_2063_ = lean_ctor_get(v_data_2032_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v_data_2032_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v_data_2032_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_value_2063_);
lean_dec(v_data_2032_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
lean_ctor_set_tag(v___x_2065_, 6);
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_value_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
v___y_2039_ = v___x_2068_;
goto v___jp_2038_;
}
}
}
default: 
{
lean_object* v_value_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v_value_2071_ = lean_ctor_get(v_data_2032_, 0);
lean_inc(v_value_2071_);
lean_dec_ref(v_data_2032_);
v___x_2072_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_2073_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2073_, 0, v_value_2071_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
v___y_2039_ = v___x_2073_;
goto v___jp_2038_;
}
}
v___jp_2038_:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2040_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2033_);
v___x_2041_ = lean_mk_empty_array_with_capacity(v___x_2035_);
v___x_2042_ = lean_array_push(v___x_2041_, v___x_2037_);
v___x_2043_ = lean_array_push(v___x_2042_, v___y_2039_);
v___x_2044_ = lean_array_push(v___x_2043_, v___x_2040_);
v___x_2045_ = l_Lasm_JS_Web_Support_args(v___x_2044_);
v___x_2046_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_write_spec__1(v___x_2036_, v___x_2045_);
return v___x_2046_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticWrite___boxed(lean_object* v_path_2074_, lean_object* v_data_2075_, lean_object* v_options_2076_, lean_object* v_a_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Lasm_JS_Bun_S3Client_staticWrite(v_path_2074_, v_data_2075_, v_options_2076_);
lean_dec(v_options_2076_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_presign(lean_object* v_self_2080_, lean_object* v_path_2081_, lean_object* v_options_2082_){
_start:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2084_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_presign___closed__0));
v___x_2085_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2085_, 0, v_path_2081_);
v___x_2086_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_presign_spec__0(v_options_2082_);
v___x_2087_ = lean_unsigned_to_nat(2u);
v___x_2088_ = lean_mk_empty_array_with_capacity(v___x_2087_);
v___x_2089_ = lean_array_push(v___x_2088_, v___x_2085_);
v___x_2090_ = lean_array_push(v___x_2089_, v___x_2086_);
v___x_2091_ = l_Lasm_JS_Web_Support_args(v___x_2090_);
v___x_2092_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_2080_, v___x_2084_, v___x_2091_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_presign___boxed(lean_object* v_self_2093_, lean_object* v_path_2094_, lean_object* v_options_2095_, lean_object* v_a_2096_){
_start:
{
lean_object* v_res_2097_; 
v_res_2097_ = l_Lasm_JS_Bun_S3Client_presign(v_self_2093_, v_path_2094_, v_options_2095_);
lean_dec(v_options_2095_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticPresign(lean_object* v_path_2106_, lean_object* v_options_2107_){
_start:
{
uint8_t v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2109_ = 0;
v___x_2110_ = lean_unsigned_to_nat(2u);
v___x_2111_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticPresign___closed__2));
v___x_2112_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2112_, 0, v_path_2106_);
v___x_2113_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_presign_spec__0(v_options_2107_);
v___x_2114_ = lean_mk_empty_array_with_capacity(v___x_2110_);
v___x_2115_ = lean_array_push(v___x_2114_, v___x_2112_);
v___x_2116_ = lean_array_push(v___x_2115_, v___x_2113_);
v___x_2117_ = l_Lasm_JS_Web_Support_args(v___x_2116_);
v___x_2118_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_2111_, v___x_2117_, v___x_2109_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticPresign___boxed(lean_object* v_path_2119_, lean_object* v_options_2120_, lean_object* v_a_2121_){
_start:
{
lean_object* v_res_2122_; 
v_res_2122_ = l_Lasm_JS_Bun_S3Client_staticPresign(v_path_2119_, v_options_2120_);
lean_dec(v_options_2120_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_unlink(lean_object* v_self_2124_, lean_object* v_path_2125_, lean_object* v_options_2126_){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_unlink___closed__0));
v___x_2129_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2129_, 0, v_path_2125_);
v___x_2130_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2126_);
v___x_2131_ = lean_unsigned_to_nat(2u);
v___x_2132_ = lean_mk_empty_array_with_capacity(v___x_2131_);
v___x_2133_ = lean_array_push(v___x_2132_, v___x_2129_);
v___x_2134_ = lean_array_push(v___x_2133_, v___x_2130_);
v___x_2135_ = l_Lasm_JS_Web_Support_args(v___x_2134_);
v___x_2136_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2124_, v___x_2128_, v___x_2135_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_unlink___boxed(lean_object* v_self_2137_, lean_object* v_path_2138_, lean_object* v_options_2139_, lean_object* v_a_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l_Lasm_JS_Bun_S3Client_unlink(v_self_2137_, v_path_2138_, v_options_2139_);
lean_dec(v_options_2139_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink(lean_object* v_path_2150_, lean_object* v_options_2151_){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2153_ = lean_unsigned_to_nat(2u);
v___x_2154_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticUnlink___closed__2));
v___x_2155_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2155_, 0, v_path_2150_);
v___x_2156_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2151_);
v___x_2157_ = lean_mk_empty_array_with_capacity(v___x_2153_);
v___x_2158_ = lean_array_push(v___x_2157_, v___x_2155_);
v___x_2159_ = lean_array_push(v___x_2158_, v___x_2156_);
v___x_2160_ = l_Lasm_JS_Web_Support_args(v___x_2159_);
v___x_2161_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_Archive_write_spec__0(v___x_2154_, v___x_2160_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink___boxed(lean_object* v_path_2162_, lean_object* v_options_2163_, lean_object* v_a_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lasm_JS_Bun_S3Client_staticUnlink(v_path_2162_, v_options_2163_);
lean_dec(v_options_2163_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_delete(lean_object* v_self_2167_, lean_object* v_path_2168_, lean_object* v_options_2169_){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2171_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_delete___closed__0));
v___x_2172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2172_, 0, v_path_2168_);
v___x_2173_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2169_);
v___x_2174_ = lean_unsigned_to_nat(2u);
v___x_2175_ = lean_mk_empty_array_with_capacity(v___x_2174_);
v___x_2176_ = lean_array_push(v___x_2175_, v___x_2172_);
v___x_2177_ = lean_array_push(v___x_2176_, v___x_2173_);
v___x_2178_ = l_Lasm_JS_Web_Support_args(v___x_2177_);
v___x_2179_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2167_, v___x_2171_, v___x_2178_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_delete___boxed(lean_object* v_self_2180_, lean_object* v_path_2181_, lean_object* v_options_2182_, lean_object* v_a_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l_Lasm_JS_Bun_S3Client_delete(v_self_2180_, v_path_2181_, v_options_2182_);
lean_dec(v_options_2182_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticDelete(lean_object* v_path_2193_, lean_object* v_options_2194_){
_start:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2196_ = lean_unsigned_to_nat(2u);
v___x_2197_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticDelete___closed__2));
v___x_2198_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2198_, 0, v_path_2193_);
v___x_2199_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2194_);
v___x_2200_ = lean_mk_empty_array_with_capacity(v___x_2196_);
v___x_2201_ = lean_array_push(v___x_2200_, v___x_2198_);
v___x_2202_ = lean_array_push(v___x_2201_, v___x_2199_);
v___x_2203_ = l_Lasm_JS_Web_Support_args(v___x_2202_);
v___x_2204_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_Archive_write_spec__0(v___x_2197_, v___x_2203_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticDelete___boxed(lean_object* v_path_2205_, lean_object* v_options_2206_, lean_object* v_a_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Lasm_JS_Bun_S3Client_staticDelete(v_path_2205_, v_options_2206_);
lean_dec(v_options_2206_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_size(lean_object* v_self_2209_, lean_object* v_path_2210_, lean_object* v_options_2211_){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2213_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__7));
v___x_2214_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2214_, 0, v_path_2210_);
v___x_2215_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2211_);
v___x_2216_ = lean_unsigned_to_nat(2u);
v___x_2217_ = lean_mk_empty_array_with_capacity(v___x_2216_);
v___x_2218_ = lean_array_push(v___x_2217_, v___x_2214_);
v___x_2219_ = lean_array_push(v___x_2218_, v___x_2215_);
v___x_2220_ = l_Lasm_JS_Web_Support_args(v___x_2219_);
v___x_2221_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_FileSink_write_spec__0(v_self_2209_, v___x_2213_, v___x_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_size___boxed(lean_object* v_self_2222_, lean_object* v_path_2223_, lean_object* v_options_2224_, lean_object* v_a_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l_Lasm_JS_Bun_S3Client_size(v_self_2222_, v_path_2223_, v_options_2224_);
lean_dec(v_options_2224_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticSize(lean_object* v_path_2235_, lean_object* v_options_2236_){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2238_ = lean_unsigned_to_nat(2u);
v___x_2239_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticSize___closed__2));
v___x_2240_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2240_, 0, v_path_2235_);
v___x_2241_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2236_);
v___x_2242_ = lean_mk_empty_array_with_capacity(v___x_2238_);
v___x_2243_ = lean_array_push(v___x_2242_, v___x_2240_);
v___x_2244_ = lean_array_push(v___x_2243_, v___x_2241_);
v___x_2245_ = l_Lasm_JS_Web_Support_args(v___x_2244_);
v___x_2246_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_write_spec__1(v___x_2239_, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticSize___boxed(lean_object* v_path_2247_, lean_object* v_options_2248_, lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Lasm_JS_Bun_S3Client_staticSize(v_path_2247_, v_options_2248_);
lean_dec(v_options_2248_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_exists(lean_object* v_self_2252_, lean_object* v_path_2253_, lean_object* v_options_2254_){
_start:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2256_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_exists___closed__0));
v___x_2257_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2257_, 0, v_path_2253_);
v___x_2258_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2254_);
v___x_2259_ = lean_unsigned_to_nat(2u);
v___x_2260_ = lean_mk_empty_array_with_capacity(v___x_2259_);
v___x_2261_ = lean_array_push(v___x_2260_, v___x_2257_);
v___x_2262_ = lean_array_push(v___x_2261_, v___x_2258_);
v___x_2263_ = l_Lasm_JS_Web_Support_args(v___x_2262_);
v___x_2264_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_BunFile_exists_spec__0(v_self_2252_, v___x_2256_, v___x_2263_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_exists___boxed(lean_object* v_self_2265_, lean_object* v_path_2266_, lean_object* v_options_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lasm_JS_Bun_S3Client_exists(v_self_2265_, v_path_2266_, v_options_2267_);
lean_dec(v_options_2267_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0(lean_object* v_b_2270_, lean_object* v_args_2271_){
_start:
{
uint8_t v_construct_2273_; lean_object* v___x_2274_; uint32_t v___x_2275_; uint64_t v___x_2276_; uint64_t v___y_2278_; 
v_construct_2273_ = lean_ctor_get_uint8(v_b_2270_, sizeof(void*)*4);
v___x_2274_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2270_);
v___x_2275_ = 214;
v___x_2276_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_construct_2273_ == 0)
{
uint64_t v___x_2286_; 
v___x_2286_ = 0ULL;
v___y_2278_ = v___x_2286_;
goto v___jp_2277_;
}
else
{
uint64_t v___x_2287_; 
v___x_2287_ = 4ULL;
v___y_2278_ = v___x_2287_;
goto v___jp_2277_;
}
v___jp_2277_:
{
uint64_t v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2279_ = lean_uint64_lor(v___x_2276_, v___y_2278_);
v___x_2280_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2270_, v_args_2271_);
v___x_2281_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_2282_ = lean_string_append(v___x_2281_, v___x_2274_);
v___x_2283_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_2284_ = lean_string_append(v___x_2282_, v___x_2283_);
v___x_2285_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_BunFile_exists_spec__0_spec__0(v___x_2274_, v___x_2275_, v___x_2279_, v___x_2280_, v___x_2284_);
return v___x_2285_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0___boxed(lean_object* v_b_2288_, lean_object* v_args_2289_, lean_object* v_a_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0(v_b_2288_, v_args_2289_);
lean_dec_ref(v_b_2288_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticExists(lean_object* v_path_2300_, lean_object* v_options_2301_){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2303_ = lean_unsigned_to_nat(2u);
v___x_2304_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticExists___closed__2));
v___x_2305_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2305_, 0, v_path_2300_);
v___x_2306_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2301_);
v___x_2307_ = lean_mk_empty_array_with_capacity(v___x_2303_);
v___x_2308_ = lean_array_push(v___x_2307_, v___x_2305_);
v___x_2309_ = lean_array_push(v___x_2308_, v___x_2306_);
v___x_2310_ = l_Lasm_JS_Web_Support_args(v___x_2309_);
v___x_2311_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0(v___x_2304_, v___x_2310_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticExists___boxed(lean_object* v_path_2312_, lean_object* v_options_2313_, lean_object* v_a_2314_){
_start:
{
lean_object* v_res_2315_; 
v_res_2315_ = l_Lasm_JS_Bun_S3Client_staticExists(v_path_2312_, v_options_2313_);
lean_dec(v_options_2313_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_stat(lean_object* v_self_2317_, lean_object* v_path_2318_, lean_object* v_options_2319_){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2321_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_stat___closed__0));
v___x_2322_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2322_, 0, v_path_2318_);
v___x_2323_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2319_);
v___x_2324_ = lean_unsigned_to_nat(2u);
v___x_2325_ = lean_mk_empty_array_with_capacity(v___x_2324_);
v___x_2326_ = lean_array_push(v___x_2325_, v___x_2322_);
v___x_2327_ = lean_array_push(v___x_2326_, v___x_2323_);
v___x_2328_ = l_Lasm_JS_Web_Support_args(v___x_2327_);
v___x_2329_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0(v_self_2317_, v___x_2321_, v___x_2328_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_stat___boxed(lean_object* v_self_2330_, lean_object* v_path_2331_, lean_object* v_options_2332_, lean_object* v_a_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l_Lasm_JS_Bun_S3Client_stat(v_self_2330_, v_path_2331_, v_options_2332_);
lean_dec(v_options_2332_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0(lean_object* v_b_2335_, lean_object* v_args_2336_){
_start:
{
uint8_t v_construct_2338_; lean_object* v___x_2339_; uint32_t v___x_2340_; uint64_t v___x_2341_; uint64_t v___y_2343_; 
v_construct_2338_ = lean_ctor_get_uint8(v_b_2335_, sizeof(void*)*4);
v___x_2339_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2335_);
v___x_2340_ = 214;
v___x_2341_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_construct_2338_ == 0)
{
uint64_t v___x_2351_; 
v___x_2351_ = 0ULL;
v___y_2343_ = v___x_2351_;
goto v___jp_2342_;
}
else
{
uint64_t v___x_2352_; 
v___x_2352_ = 4ULL;
v___y_2343_ = v___x_2352_;
goto v___jp_2342_;
}
v___jp_2342_:
{
uint64_t v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2344_ = lean_uint64_lor(v___x_2341_, v___y_2343_);
v___x_2345_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2335_, v_args_2336_);
v___x_2346_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_2347_ = lean_string_append(v___x_2346_, v___x_2339_);
v___x_2348_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_2349_ = lean_string_append(v___x_2347_, v___x_2348_);
v___x_2350_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0_spec__1(v___x_2339_, v___x_2340_, v___x_2344_, v___x_2345_, v___x_2349_);
return v___x_2350_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0___boxed(lean_object* v_b_2353_, lean_object* v_args_2354_, lean_object* v_a_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0(v_b_2353_, v_args_2354_);
lean_dec_ref(v_b_2353_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticStat(lean_object* v_path_2365_, lean_object* v_options_2366_){
_start:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2368_ = lean_unsigned_to_nat(2u);
v___x_2369_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticStat___closed__2));
v___x_2370_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2370_, 0, v_path_2365_);
v___x_2371_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2366_);
v___x_2372_ = lean_mk_empty_array_with_capacity(v___x_2368_);
v___x_2373_ = lean_array_push(v___x_2372_, v___x_2370_);
v___x_2374_ = lean_array_push(v___x_2373_, v___x_2371_);
v___x_2375_ = l_Lasm_JS_Web_Support_args(v___x_2374_);
v___x_2376_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0(v___x_2369_, v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticStat___boxed(lean_object* v_path_2377_, lean_object* v_options_2378_, lean_object* v_a_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l_Lasm_JS_Bun_S3Client_staticStat(v_path_2377_, v_options_2378_);
lean_dec(v_options_2378_);
return v_res_2380_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2(uint8_t v_await_2381_, uint64_t v_extra_2382_){
_start:
{
uint64_t v___x_2383_; uint64_t v___y_2385_; 
v___x_2383_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_await_2381_ == 0)
{
uint64_t v___x_2388_; 
v___x_2388_ = 0ULL;
v___y_2385_ = v___x_2388_;
goto v___jp_2384_;
}
else
{
uint64_t v___x_2389_; 
v___x_2389_ = 2ULL;
v___y_2385_ = v___x_2389_;
goto v___jp_2384_;
}
v___jp_2384_:
{
uint64_t v___x_2386_; uint64_t v___x_2387_; 
v___x_2386_ = lean_uint64_lor(v___x_2383_, v___y_2385_);
v___x_2387_ = lean_uint64_lor(v___x_2386_, v_extra_2382_);
return v___x_2387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2___boxed(lean_object* v_await_2390_, lean_object* v_extra_2391_){
_start:
{
uint8_t v_await_boxed_2392_; uint64_t v_extra_boxed_2393_; uint64_t v_res_2394_; lean_object* v_r_2395_; 
v_await_boxed_2392_ = lean_unbox(v_await_2390_);
v_extra_boxed_2393_ = lean_unbox_uint64(v_extra_2391_);
lean_dec_ref(v_extra_2391_);
v_res_2394_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2(v_await_boxed_2392_, v_extra_boxed_2393_);
v_r_2395_ = lean_box_uint64(v_res_2394_);
return v_r_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6(size_t v_sz_2396_, size_t v_i_2397_, lean_object* v_bs_2398_){
_start:
{
uint8_t v___x_2399_; 
v___x_2399_ = lean_usize_dec_lt(v_i_2397_, v_sz_2396_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; 
v___x_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2400_, 0, v_bs_2398_);
return v___x_2400_;
}
else
{
lean_object* v_v_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v_v_2401_ = lean_array_uget_borrowed(v_bs_2398_, v_i_2397_);
v___x_2402_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
lean_inc(v_v_2401_);
v___x_2403_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_MarkdownRenderCallbacksLink_ofFn_spec__0_spec__0_spec__1(v_v_2401_, v___x_2402_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
lean_dec_ref(v_bs_2398_);
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2403_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2403_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
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
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2413_; lean_object* v_bs_x27_2414_; size_t v___x_2415_; size_t v___x_2416_; lean_object* v___x_2417_; 
v_a_2412_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2403_, 1);
v___x_2413_ = lean_unsigned_to_nat(0u);
v_bs_x27_2414_ = lean_array_uset(v_bs_2398_, v_i_2397_, v___x_2413_);
v___x_2415_ = ((size_t)1ULL);
v___x_2416_ = lean_usize_add(v_i_2397_, v___x_2415_);
v___x_2417_ = lean_array_uset(v_bs_x27_2414_, v_i_2397_, v_a_2412_);
v_i_2397_ = v___x_2416_;
v_bs_2398_ = v___x_2417_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6___boxed(lean_object* v_sz_2419_, lean_object* v_i_2420_, lean_object* v_bs_2421_){
_start:
{
size_t v_sz_boxed_2422_; size_t v_i_boxed_2423_; lean_object* v_res_2424_; 
v_sz_boxed_2422_ = lean_unbox_usize(v_sz_2419_);
lean_dec(v_sz_2419_);
v_i_boxed_2423_ = lean_unbox_usize(v_i_2420_);
lean_dec(v_i_2420_);
v_res_2424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6(v_sz_boxed_2422_, v_i_boxed_2423_, v_bs_2421_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5(lean_object* v_d_2437_, lean_object* v_key_2438_){
_start:
{
if (lean_obj_tag(v_d_2437_) == 8)
{
lean_object* v___x_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2494_; 
v___x_2441_ = l_Lasm_JS_Data_field(v_d_2437_, v_key_2438_);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_d_2437_);
if (v_isSharedCheck_2494_ == 0)
{
lean_object* v_unused_2495_; 
v_unused_2495_ = lean_ctor_get(v_d_2437_, 0);
lean_dec(v_unused_2495_);
v___x_2443_ = v_d_2437_;
v_isShared_2444_ = v_isSharedCheck_2494_;
goto v_resetjp_2442_;
}
else
{
lean_dec(v_d_2437_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2494_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v_a_2446_; 
switch(lean_obj_tag(v___x_2441_))
{
case 1:
{
lean_del_object(v___x_2443_);
goto v___jp_2439_;
}
case 0:
{
lean_del_object(v___x_2443_);
goto v___jp_2439_;
}
default: 
{
if (lean_obj_tag(v___x_2441_) == 7)
{
lean_object* v_items_2471_; size_t v_sz_2472_; size_t v___x_2473_; lean_object* v___x_2474_; 
v_items_2471_ = lean_ctor_get(v___x_2441_, 0);
lean_inc_ref(v_items_2471_);
v_sz_2472_ = lean_array_size(v_items_2471_);
v___x_2473_ = ((size_t)0ULL);
v___x_2474_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6(v_sz_2472_, v___x_2473_, v_items_2471_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; uint8_t v___x_2479_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2474_, 1);
v___x_2476_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__7));
v___x_2477_ = lean_string_utf8_byte_size(v_a_2475_);
v___x_2478_ = lean_unsigned_to_nat(0u);
v___x_2479_ = lean_nat_dec_eq(v___x_2477_, v___x_2478_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2480_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_2481_ = lean_string_append(v___x_2480_, v_a_2475_);
lean_dec(v_a_2475_);
v___x_2482_ = lean_string_append(v___x_2476_, v___x_2481_);
lean_dec_ref(v___x_2481_);
v_a_2446_ = v___x_2482_;
goto v___jp_2445_;
}
else
{
lean_dec(v_a_2475_);
v_a_2446_ = v___x_2476_;
goto v___jp_2445_;
}
}
else
{
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2483_; 
v_a_2483_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2483_);
lean_dec_ref_known(v___x_2474_, 1);
v_a_2446_ = v_a_2483_;
goto v___jp_2445_;
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2492_; 
lean_dec_ref_known(v___x_2441_, 1);
lean_del_object(v___x_2443_);
v_a_2484_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2486_ = v___x_2474_;
v_isShared_2487_ = v_isSharedCheck_2492_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2474_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2492_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; lean_object* v___x_2490_; 
v___x_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2488_, 0, v_a_2484_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 0, v___x_2488_);
v___x_2490_ = v___x_2486_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2488_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
}
else
{
lean_object* v___x_2493_; 
v___x_2493_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v_a_2446_ = v___x_2493_;
goto v___jp_2445_;
}
}
}
v___jp_2445_:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; uint8_t v___x_2459_; 
v___x_2447_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2448_ = lean_string_append(v___x_2447_, v_key_2438_);
v___x_2449_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2450_ = lean_string_append(v___x_2448_, v___x_2449_);
v___x_2451_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__3));
v___x_2452_ = lean_string_append(v___x_2450_, v___x_2451_);
v___x_2453_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2454_ = lean_string_append(v___x_2452_, v___x_2453_);
v___x_2455_ = l_Lasm_JS_Data_describe(v___x_2441_);
v___x_2456_ = lean_string_append(v___x_2454_, v___x_2455_);
lean_dec_ref(v___x_2455_);
v___x_2457_ = lean_string_utf8_byte_size(v_a_2446_);
v___x_2458_ = lean_unsigned_to_nat(0u);
v___x_2459_ = lean_nat_dec_eq(v___x_2457_, v___x_2458_);
if (v___x_2459_ == 0)
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2466_; 
v___x_2460_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_2461_ = lean_string_append(v___x_2460_, v_a_2446_);
lean_dec_ref(v_a_2446_);
v___x_2462_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_2463_ = lean_string_append(v___x_2461_, v___x_2462_);
v___x_2464_ = lean_string_append(v___x_2456_, v___x_2463_);
lean_dec_ref(v___x_2463_);
if (v_isShared_2444_ == 0)
{
lean_ctor_set_tag(v___x_2443_, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2464_);
v___x_2466_ = v___x_2443_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v___x_2464_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
else
{
lean_object* v___x_2469_; 
lean_dec_ref(v_a_2446_);
if (v_isShared_2444_ == 0)
{
lean_ctor_set_tag(v___x_2443_, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2456_);
v___x_2469_ = v___x_2443_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2456_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
}
else
{
lean_object* v___x_2496_; 
lean_dec(v_d_2437_);
v___x_2496_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__9));
return v___x_2496_;
}
v___jp_2439_:
{
lean_object* v___x_2440_; 
v___x_2440_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__0));
return v___x_2440_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___boxed(lean_object* v_d_2497_, lean_object* v_key_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5(v_d_2497_, v_key_2498_);
lean_dec_ref(v_key_2498_);
return v_res_2499_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0));
v___x_2504_ = lean_string_utf8_byte_size(v___x_2503_);
return v___x_2504_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; uint8_t v___x_2507_; 
v___x_2505_ = lean_unsigned_to_nat(0u);
v___x_2506_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2);
v___x_2507_ = lean_nat_dec_eq(v___x_2506_, v___x_2505_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7(lean_object* v_d_2515_, lean_object* v_key_2516_){
_start:
{
if (lean_obj_tag(v_d_2515_) == 8)
{
lean_object* v___x_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2547_; 
v___x_2519_ = l_Lasm_JS_Data_field(v_d_2515_, v_key_2516_);
v_isSharedCheck_2547_ = !lean_is_exclusive(v_d_2515_);
if (v_isSharedCheck_2547_ == 0)
{
lean_object* v_unused_2548_; 
v_unused_2548_ = lean_ctor_get(v_d_2515_, 0);
lean_dec(v_unused_2548_);
v___x_2521_ = v_d_2515_;
v_isShared_2522_ = v_isSharedCheck_2547_;
goto v_resetjp_2520_;
}
else
{
lean_dec(v_d_2515_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2547_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
switch(lean_obj_tag(v___x_2519_))
{
case 1:
{
lean_del_object(v___x_2521_);
goto v___jp_2517_;
}
case 0:
{
lean_del_object(v___x_2521_);
goto v___jp_2517_;
}
default: 
{
if (lean_obj_tag(v___x_2519_) == 4)
{
lean_object* v_s_2543_; lean_object* v___x_2544_; uint8_t v___x_2545_; 
v_s_2543_ = lean_ctor_get(v___x_2519_, 0);
lean_inc_ref(v_s_2543_);
v___x_2544_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__0));
v___x_2545_ = lean_string_dec_eq(v_s_2543_, v___x_2544_);
lean_dec_ref(v_s_2543_);
if (v___x_2545_ == 0)
{
goto v___jp_2523_;
}
else
{
lean_object* v___x_2546_; 
lean_dec_ref_known(v___x_2519_, 1);
lean_del_object(v___x_2521_);
v___x_2546_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__6));
return v___x_2546_;
}
}
else
{
goto v___jp_2523_;
}
}
}
v___jp_2523_:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; uint8_t v___x_2534_; 
v___x_2524_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2525_ = lean_string_append(v___x_2524_, v_key_2516_);
v___x_2526_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2527_ = lean_string_append(v___x_2525_, v___x_2526_);
v___x_2528_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__1));
v___x_2529_ = lean_string_append(v___x_2527_, v___x_2528_);
v___x_2530_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2531_ = lean_string_append(v___x_2529_, v___x_2530_);
v___x_2532_ = l_Lasm_JS_Data_describe(v___x_2519_);
v___x_2533_ = lean_string_append(v___x_2531_, v___x_2532_);
lean_dec_ref(v___x_2532_);
v___x_2534_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v___x_2534_ == 0)
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2538_; 
v___x_2535_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4));
v___x_2536_ = lean_string_append(v___x_2533_, v___x_2535_);
if (v_isShared_2522_ == 0)
{
lean_ctor_set_tag(v___x_2521_, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2536_);
v___x_2538_ = v___x_2521_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
else
{
lean_object* v___x_2541_; 
if (v_isShared_2522_ == 0)
{
lean_ctor_set_tag(v___x_2521_, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2533_);
v___x_2541_ = v___x_2521_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v___x_2533_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
}
else
{
lean_object* v___x_2549_; 
lean_dec(v_d_2515_);
v___x_2549_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__7));
return v___x_2549_;
}
v___jp_2517_:
{
lean_object* v___x_2518_; 
v___x_2518_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__0));
return v___x_2518_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___boxed(lean_object* v_d_2550_, lean_object* v_key_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7(v_d_2550_, v_key_2551_);
lean_dec_ref(v_key_2551_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12(lean_object* v_d_2558_, lean_object* v_key_2559_){
_start:
{
uint8_t v_a_2561_; 
if (lean_obj_tag(v_d_2558_) == 8)
{
lean_object* v___x_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2625_; 
v___x_2567_ = l_Lasm_JS_Data_field(v_d_2558_, v_key_2559_);
v_isSharedCheck_2625_ = !lean_is_exclusive(v_d_2558_);
if (v_isSharedCheck_2625_ == 0)
{
lean_object* v_unused_2626_; 
v_unused_2626_ = lean_ctor_get(v_d_2558_, 0);
lean_dec(v_unused_2626_);
v___x_2569_ = v_d_2558_;
v_isShared_2570_ = v_isSharedCheck_2625_;
goto v_resetjp_2568_;
}
else
{
lean_dec(v_d_2558_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2625_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
switch(lean_obj_tag(v___x_2567_))
{
case 1:
{
lean_del_object(v___x_2569_);
goto v___jp_2565_;
}
case 0:
{
lean_del_object(v___x_2569_);
goto v___jp_2565_;
}
default: 
{
if (lean_obj_tag(v___x_2567_) == 4)
{
lean_object* v_s_2591_; lean_object* v___x_2592_; uint8_t v___x_2593_; 
v_s_2591_ = lean_ctor_get(v___x_2567_, 0);
lean_inc_ref(v_s_2591_);
v___x_2592_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0));
v___x_2593_ = lean_string_dec_eq(v_s_2591_, v___x_2592_);
if (v___x_2593_ == 0)
{
lean_object* v___x_2594_; uint8_t v___x_2595_; 
v___x_2594_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2));
v___x_2595_ = lean_string_dec_eq(v_s_2591_, v___x_2594_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; uint8_t v___x_2597_; 
v___x_2596_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4));
v___x_2597_ = lean_string_dec_eq(v_s_2591_, v___x_2596_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; uint8_t v___x_2599_; 
v___x_2598_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6));
v___x_2599_ = lean_string_dec_eq(v_s_2591_, v___x_2598_);
if (v___x_2599_ == 0)
{
lean_object* v___x_2600_; uint8_t v___x_2601_; 
v___x_2600_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8));
v___x_2601_ = lean_string_dec_eq(v_s_2591_, v___x_2600_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; uint8_t v___x_2603_; 
v___x_2602_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10));
v___x_2603_ = lean_string_dec_eq(v_s_2591_, v___x_2602_);
if (v___x_2603_ == 0)
{
lean_object* v___x_2604_; uint8_t v___x_2605_; 
v___x_2604_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__12));
v___x_2605_ = lean_string_dec_eq(v_s_2591_, v___x_2604_);
if (v___x_2605_ == 0)
{
lean_object* v___x_2606_; uint8_t v___x_2607_; 
v___x_2606_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__14));
v___x_2607_ = lean_string_dec_eq(v_s_2591_, v___x_2606_);
if (v___x_2607_ == 0)
{
lean_object* v___x_2608_; uint8_t v___x_2609_; 
v___x_2608_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__16));
v___x_2609_ = lean_string_dec_eq(v_s_2591_, v___x_2608_);
if (v___x_2609_ == 0)
{
lean_object* v___x_2610_; uint8_t v___x_2611_; 
v___x_2610_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__18));
v___x_2611_ = lean_string_dec_eq(v_s_2591_, v___x_2610_);
if (v___x_2611_ == 0)
{
lean_object* v___x_2612_; uint8_t v___x_2613_; 
v___x_2612_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__20));
v___x_2613_ = lean_string_dec_eq(v_s_2591_, v___x_2612_);
lean_dec_ref(v_s_2591_);
if (v___x_2613_ == 0)
{
goto v___jp_2571_;
}
else
{
uint8_t v___x_2614_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_del_object(v___x_2569_);
v___x_2614_ = 10;
v_a_2561_ = v___x_2614_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2615_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2615_ = 9;
v_a_2561_ = v___x_2615_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2616_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2616_ = 8;
v_a_2561_ = v___x_2616_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2617_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2617_ = 7;
v_a_2561_ = v___x_2617_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2618_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2618_ = 6;
v_a_2561_ = v___x_2618_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2619_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2619_ = 5;
v_a_2561_ = v___x_2619_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2620_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2620_ = 4;
v_a_2561_ = v___x_2620_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2621_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2621_ = 3;
v_a_2561_ = v___x_2621_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2622_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2622_ = 2;
v_a_2561_ = v___x_2622_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2623_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2623_ = 1;
v_a_2561_ = v___x_2623_;
goto v___jp_2560_;
}
}
else
{
uint8_t v___x_2624_; 
lean_dec_ref_known(v___x_2567_, 1);
lean_dec_ref(v_s_2591_);
lean_del_object(v___x_2569_);
v___x_2624_ = 0;
v_a_2561_ = v___x_2624_;
goto v___jp_2560_;
}
}
else
{
goto v___jp_2571_;
}
}
}
v___jp_2571_:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; uint8_t v___x_2582_; 
v___x_2572_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2573_ = lean_string_append(v___x_2572_, v_key_2559_);
v___x_2574_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2575_ = lean_string_append(v___x_2573_, v___x_2574_);
v___x_2576_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__1));
v___x_2577_ = lean_string_append(v___x_2575_, v___x_2576_);
v___x_2578_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2579_ = lean_string_append(v___x_2577_, v___x_2578_);
v___x_2580_ = l_Lasm_JS_Data_describe(v___x_2567_);
v___x_2581_ = lean_string_append(v___x_2579_, v___x_2580_);
lean_dec_ref(v___x_2580_);
v___x_2582_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v___x_2582_ == 0)
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2586_; 
v___x_2583_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4));
v___x_2584_ = lean_string_append(v___x_2581_, v___x_2583_);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2584_);
v___x_2586_ = v___x_2569_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
else
{
lean_object* v___x_2589_; 
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2581_);
v___x_2589_ = v___x_2569_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v___x_2581_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
}
}
else
{
lean_object* v___x_2627_; 
lean_dec(v_d_2558_);
v___x_2627_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2));
return v___x_2627_;
}
v___jp_2560_:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = lean_box(v_a_2561_);
v___x_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2562_);
v___x_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2563_);
return v___x_2564_;
}
v___jp_2565_:
{
lean_object* v___x_2566_; 
v___x_2566_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__0));
return v___x_2566_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___boxed(lean_object* v_d_2628_, lean_object* v_key_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12(v_d_2628_, v_key_2629_);
lean_dec_ref(v_key_2629_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10(lean_object* v_d_2636_, lean_object* v_key_2637_){
_start:
{
if (lean_obj_tag(v_d_2636_) == 8)
{
lean_object* v___x_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2693_; 
v___x_2640_ = l_Lasm_JS_Data_field(v_d_2636_, v_key_2637_);
v_isSharedCheck_2693_ = !lean_is_exclusive(v_d_2636_);
if (v_isSharedCheck_2693_ == 0)
{
lean_object* v_unused_2694_; 
v_unused_2694_ = lean_ctor_get(v_d_2636_, 0);
lean_dec(v_unused_2694_);
v___x_2642_ = v_d_2636_;
v_isShared_2643_ = v_isSharedCheck_2693_;
goto v_resetjp_2641_;
}
else
{
lean_dec(v_d_2636_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2693_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v_a_2645_; 
switch(lean_obj_tag(v___x_2640_))
{
case 1:
{
lean_del_object(v___x_2642_);
goto v___jp_2638_;
}
case 0:
{
lean_del_object(v___x_2642_);
goto v___jp_2638_;
}
default: 
{
lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2670_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__0));
lean_inc(v___x_2640_);
v___x_2671_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_2640_, v___x_2670_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
lean_inc(v_a_2672_);
lean_dec_ref_known(v___x_2671_, 1);
v_a_2645_ = v_a_2672_;
goto v___jp_2644_;
}
else
{
lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2692_; 
v_a_2673_ = lean_ctor_get(v___x_2671_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2675_ = v___x_2671_;
v_isShared_2676_ = v_isSharedCheck_2692_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2671_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2692_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2677_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__1));
lean_inc(v___x_2640_);
v___x_2678_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_2640_, v___x_2677_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; 
lean_del_object(v___x_2675_);
lean_dec(v_a_2673_);
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v___x_2678_, 1);
v_a_2645_ = v_a_2679_;
goto v___jp_2644_;
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2691_; 
lean_del_object(v___x_2642_);
lean_dec(v___x_2640_);
v_a_2680_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2682_ = v___x_2678_;
v_isShared_2683_ = v_isSharedCheck_2691_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2678_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2691_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2684_; lean_object* v___x_2686_; 
v___x_2684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2684_, 0, v_a_2673_);
lean_ctor_set(v___x_2684_, 1, v_a_2680_);
if (v_isShared_2676_ == 0)
{
lean_ctor_set(v___x_2675_, 0, v___x_2684_);
v___x_2686_ = v___x_2675_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
lean_object* v___x_2688_; 
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v___x_2686_);
v___x_2688_ = v___x_2682_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2686_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
}
}
}
}
v___jp_2644_:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; uint8_t v___x_2658_; 
v___x_2646_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2647_ = lean_string_append(v___x_2646_, v_key_2637_);
v___x_2648_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2649_ = lean_string_append(v___x_2647_, v___x_2648_);
v___x_2650_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__1));
v___x_2651_ = lean_string_append(v___x_2649_, v___x_2650_);
v___x_2652_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2653_ = lean_string_append(v___x_2651_, v___x_2652_);
v___x_2654_ = l_Lasm_JS_Data_describe(v___x_2640_);
v___x_2655_ = lean_string_append(v___x_2653_, v___x_2654_);
lean_dec_ref(v___x_2654_);
v___x_2656_ = lean_string_utf8_byte_size(v_a_2645_);
v___x_2657_ = lean_unsigned_to_nat(0u);
v___x_2658_ = lean_nat_dec_eq(v___x_2656_, v___x_2657_);
if (v___x_2658_ == 0)
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2665_; 
v___x_2659_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_2660_ = lean_string_append(v___x_2659_, v_a_2645_);
lean_dec_ref(v_a_2645_);
v___x_2661_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_2662_ = lean_string_append(v___x_2660_, v___x_2661_);
v___x_2663_ = lean_string_append(v___x_2655_, v___x_2662_);
lean_dec_ref(v___x_2662_);
if (v_isShared_2643_ == 0)
{
lean_ctor_set_tag(v___x_2642_, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2663_);
v___x_2665_ = v___x_2642_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v___x_2663_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
else
{
lean_object* v___x_2668_; 
lean_dec_ref(v_a_2645_);
if (v_isShared_2643_ == 0)
{
lean_ctor_set_tag(v___x_2642_, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2655_);
v___x_2668_ = v___x_2642_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v___x_2655_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
}
}
else
{
lean_object* v___x_2695_; 
lean_dec(v_d_2636_);
v___x_2695_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__2));
return v___x_2695_;
}
v___jp_2638_:
{
lean_object* v___x_2639_; 
v___x_2639_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__0));
return v___x_2639_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___boxed(lean_object* v_d_2696_, lean_object* v_key_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10(v_d_2696_, v_key_2697_);
lean_dec_ref(v_key_2697_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11(lean_object* v_d_2704_, lean_object* v_key_2705_){
_start:
{
if (lean_obj_tag(v_d_2704_) == 8)
{
lean_object* v___x_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2761_; 
v___x_2708_ = l_Lasm_JS_Data_field(v_d_2704_, v_key_2705_);
v_isSharedCheck_2761_ = !lean_is_exclusive(v_d_2704_);
if (v_isSharedCheck_2761_ == 0)
{
lean_object* v_unused_2762_; 
v_unused_2762_ = lean_ctor_get(v_d_2704_, 0);
lean_dec(v_unused_2762_);
v___x_2710_ = v_d_2704_;
v_isShared_2711_ = v_isSharedCheck_2761_;
goto v_resetjp_2709_;
}
else
{
lean_dec(v_d_2704_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2761_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v_a_2713_; 
switch(lean_obj_tag(v___x_2708_))
{
case 1:
{
lean_del_object(v___x_2710_);
goto v___jp_2706_;
}
case 0:
{
lean_del_object(v___x_2710_);
goto v___jp_2706_;
}
default: 
{
lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2738_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__0));
lean_inc(v___x_2708_);
v___x_2739_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v___x_2708_, v___x_2738_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
v_a_2713_ = v_a_2740_;
goto v___jp_2712_;
}
else
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2760_; 
v_a_2741_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2743_ = v___x_2739_;
v_isShared_2744_ = v_isSharedCheck_2760_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v___x_2739_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2760_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2745_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__1));
lean_inc(v___x_2708_);
v___x_2746_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_2708_, v___x_2745_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; 
lean_del_object(v___x_2743_);
lean_dec(v_a_2741_);
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2746_, 1);
v_a_2713_ = v_a_2747_;
goto v___jp_2712_;
}
else
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2759_; 
lean_del_object(v___x_2710_);
lean_dec(v___x_2708_);
v_a_2748_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2750_ = v___x_2746_;
v_isShared_2751_ = v_isSharedCheck_2759_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2746_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2759_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2752_; lean_object* v___x_2754_; 
v___x_2752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2752_, 0, v_a_2741_);
lean_ctor_set(v___x_2752_, 1, v_a_2748_);
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 0, v___x_2752_);
v___x_2754_ = v___x_2743_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v___x_2752_);
v___x_2754_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
lean_object* v___x_2756_; 
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v___x_2754_);
v___x_2756_ = v___x_2750_;
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
}
}
}
}
}
}
v___jp_2712_:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; uint8_t v___x_2726_; 
v___x_2714_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2715_ = lean_string_append(v___x_2714_, v_key_2705_);
v___x_2716_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2717_ = lean_string_append(v___x_2715_, v___x_2716_);
v___x_2718_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__1));
v___x_2719_ = lean_string_append(v___x_2717_, v___x_2718_);
v___x_2720_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2721_ = lean_string_append(v___x_2719_, v___x_2720_);
v___x_2722_ = l_Lasm_JS_Data_describe(v___x_2708_);
v___x_2723_ = lean_string_append(v___x_2721_, v___x_2722_);
lean_dec_ref(v___x_2722_);
v___x_2724_ = lean_string_utf8_byte_size(v_a_2713_);
v___x_2725_ = lean_unsigned_to_nat(0u);
v___x_2726_ = lean_nat_dec_eq(v___x_2724_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2733_; 
v___x_2727_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_2728_ = lean_string_append(v___x_2727_, v_a_2713_);
lean_dec_ref(v_a_2713_);
v___x_2729_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_2730_ = lean_string_append(v___x_2728_, v___x_2729_);
v___x_2731_ = lean_string_append(v___x_2723_, v___x_2730_);
lean_dec_ref(v___x_2730_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set_tag(v___x_2710_, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2731_);
v___x_2733_ = v___x_2710_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2731_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
else
{
lean_object* v___x_2736_; 
lean_dec_ref(v_a_2713_);
if (v_isShared_2711_ == 0)
{
lean_ctor_set_tag(v___x_2710_, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2723_);
v___x_2736_ = v___x_2710_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v___x_2723_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
}
}
else
{
lean_object* v___x_2763_; 
lean_dec(v_d_2704_);
v___x_2763_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__2));
return v___x_2763_;
}
v___jp_2706_:
{
lean_object* v___x_2707_; 
v___x_2707_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__0));
return v___x_2707_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___boxed(lean_object* v_d_2764_, lean_object* v_key_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11(v_d_2764_, v_key_2765_);
lean_dec_ref(v_key_2765_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9(lean_object* v_d_2772_, lean_object* v_key_2773_){
_start:
{
uint8_t v_a_2775_; 
if (lean_obj_tag(v_d_2772_) == 8)
{
lean_object* v___x_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2812_; 
v___x_2781_ = l_Lasm_JS_Data_field(v_d_2772_, v_key_2773_);
v_isSharedCheck_2812_ = !lean_is_exclusive(v_d_2772_);
if (v_isSharedCheck_2812_ == 0)
{
lean_object* v_unused_2813_; 
v_unused_2813_ = lean_ctor_get(v_d_2772_, 0);
lean_dec(v_unused_2813_);
v___x_2783_ = v_d_2772_;
v_isShared_2784_ = v_isSharedCheck_2812_;
goto v_resetjp_2782_;
}
else
{
lean_dec(v_d_2772_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2812_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
switch(lean_obj_tag(v___x_2781_))
{
case 1:
{
lean_del_object(v___x_2783_);
goto v___jp_2779_;
}
case 0:
{
lean_del_object(v___x_2783_);
goto v___jp_2779_;
}
default: 
{
if (lean_obj_tag(v___x_2781_) == 4)
{
lean_object* v_s_2805_; lean_object* v___x_2806_; uint8_t v___x_2807_; 
v_s_2805_ = lean_ctor_get(v___x_2781_, 0);
lean_inc_ref(v_s_2805_);
v___x_2806_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0));
v___x_2807_ = lean_string_dec_eq(v_s_2805_, v___x_2806_);
if (v___x_2807_ == 0)
{
lean_object* v___x_2808_; uint8_t v___x_2809_; 
v___x_2808_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2));
v___x_2809_ = lean_string_dec_eq(v_s_2805_, v___x_2808_);
lean_dec_ref(v_s_2805_);
if (v___x_2809_ == 0)
{
goto v___jp_2785_;
}
else
{
uint8_t v___x_2810_; 
lean_dec_ref_known(v___x_2781_, 1);
lean_del_object(v___x_2783_);
v___x_2810_ = 1;
v_a_2775_ = v___x_2810_;
goto v___jp_2774_;
}
}
else
{
uint8_t v___x_2811_; 
lean_dec_ref(v_s_2805_);
lean_dec_ref_known(v___x_2781_, 1);
lean_del_object(v___x_2783_);
v___x_2811_ = 0;
v_a_2775_ = v___x_2811_;
goto v___jp_2774_;
}
}
else
{
goto v___jp_2785_;
}
}
}
v___jp_2785_:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; uint8_t v___x_2796_; 
v___x_2786_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2787_ = lean_string_append(v___x_2786_, v_key_2773_);
v___x_2788_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2789_ = lean_string_append(v___x_2787_, v___x_2788_);
v___x_2790_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__1));
v___x_2791_ = lean_string_append(v___x_2789_, v___x_2790_);
v___x_2792_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2793_ = lean_string_append(v___x_2791_, v___x_2792_);
v___x_2794_ = l_Lasm_JS_Data_describe(v___x_2781_);
v___x_2795_ = lean_string_append(v___x_2793_, v___x_2794_);
lean_dec_ref(v___x_2794_);
v___x_2796_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v___x_2796_ == 0)
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2800_; 
v___x_2797_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4));
v___x_2798_ = lean_string_append(v___x_2795_, v___x_2797_);
if (v_isShared_2784_ == 0)
{
lean_ctor_set_tag(v___x_2783_, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2798_);
v___x_2800_ = v___x_2783_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v___x_2798_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
else
{
lean_object* v___x_2803_; 
if (v_isShared_2784_ == 0)
{
lean_ctor_set_tag(v___x_2783_, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2795_);
v___x_2803_ = v___x_2783_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2795_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
}
}
else
{
lean_object* v___x_2814_; 
lean_dec(v_d_2772_);
v___x_2814_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__2));
return v___x_2814_;
}
v___jp_2774_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2776_ = lean_box(v_a_2775_);
v___x_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
v___x_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
return v___x_2778_;
}
v___jp_2779_:
{
lean_object* v___x_2780_; 
v___x_2780_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__0));
return v___x_2780_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___boxed(lean_object* v_d_2815_, lean_object* v_key_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9(v_d_2815_, v_key_2816_);
lean_dec_ref(v_key_2816_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8(lean_object* v_d_2823_, lean_object* v_key_2824_){
_start:
{
uint8_t v_a_2826_; 
if (lean_obj_tag(v_d_2823_) == 8)
{
lean_object* v___x_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2872_; 
v___x_2832_ = l_Lasm_JS_Data_field(v_d_2823_, v_key_2824_);
v_isSharedCheck_2872_ = !lean_is_exclusive(v_d_2823_);
if (v_isSharedCheck_2872_ == 0)
{
lean_object* v_unused_2873_; 
v_unused_2873_ = lean_ctor_get(v_d_2823_, 0);
lean_dec(v_unused_2873_);
v___x_2834_ = v_d_2823_;
v_isShared_2835_ = v_isSharedCheck_2872_;
goto v_resetjp_2833_;
}
else
{
lean_dec(v_d_2823_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2872_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
switch(lean_obj_tag(v___x_2832_))
{
case 1:
{
lean_del_object(v___x_2834_);
goto v___jp_2830_;
}
case 0:
{
lean_del_object(v___x_2834_);
goto v___jp_2830_;
}
default: 
{
if (lean_obj_tag(v___x_2832_) == 4)
{
lean_object* v_s_2856_; lean_object* v___x_2857_; uint8_t v___x_2858_; 
v_s_2856_ = lean_ctor_get(v___x_2832_, 0);
lean_inc_ref(v_s_2856_);
v___x_2857_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0));
v___x_2858_ = lean_string_dec_eq(v_s_2856_, v___x_2857_);
if (v___x_2858_ == 0)
{
lean_object* v___x_2859_; uint8_t v___x_2860_; 
v___x_2859_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2));
v___x_2860_ = lean_string_dec_eq(v_s_2856_, v___x_2859_);
if (v___x_2860_ == 0)
{
lean_object* v___x_2861_; uint8_t v___x_2862_; 
v___x_2861_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4));
v___x_2862_ = lean_string_dec_eq(v_s_2856_, v___x_2861_);
if (v___x_2862_ == 0)
{
lean_object* v___x_2863_; uint8_t v___x_2864_; 
v___x_2863_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__6));
v___x_2864_ = lean_string_dec_eq(v_s_2856_, v___x_2863_);
if (v___x_2864_ == 0)
{
lean_object* v___x_2865_; uint8_t v___x_2866_; 
v___x_2865_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__8));
v___x_2866_ = lean_string_dec_eq(v_s_2856_, v___x_2865_);
lean_dec_ref(v_s_2856_);
if (v___x_2866_ == 0)
{
goto v___jp_2836_;
}
else
{
uint8_t v___x_2867_; 
lean_dec_ref_known(v___x_2832_, 1);
lean_del_object(v___x_2834_);
v___x_2867_ = 4;
v_a_2826_ = v___x_2867_;
goto v___jp_2825_;
}
}
else
{
uint8_t v___x_2868_; 
lean_dec_ref_known(v___x_2832_, 1);
lean_dec_ref(v_s_2856_);
lean_del_object(v___x_2834_);
v___x_2868_ = 3;
v_a_2826_ = v___x_2868_;
goto v___jp_2825_;
}
}
else
{
uint8_t v___x_2869_; 
lean_dec_ref_known(v___x_2832_, 1);
lean_dec_ref(v_s_2856_);
lean_del_object(v___x_2834_);
v___x_2869_ = 2;
v_a_2826_ = v___x_2869_;
goto v___jp_2825_;
}
}
else
{
uint8_t v___x_2870_; 
lean_dec_ref_known(v___x_2832_, 1);
lean_dec_ref(v_s_2856_);
lean_del_object(v___x_2834_);
v___x_2870_ = 1;
v_a_2826_ = v___x_2870_;
goto v___jp_2825_;
}
}
else
{
uint8_t v___x_2871_; 
lean_dec_ref_known(v___x_2832_, 1);
lean_dec_ref(v_s_2856_);
lean_del_object(v___x_2834_);
v___x_2871_ = 0;
v_a_2826_ = v___x_2871_;
goto v___jp_2825_;
}
}
else
{
goto v___jp_2836_;
}
}
}
v___jp_2836_:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; uint8_t v___x_2847_; 
v___x_2837_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2838_ = lean_string_append(v___x_2837_, v_key_2824_);
v___x_2839_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2840_ = lean_string_append(v___x_2838_, v___x_2839_);
v___x_2841_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__1));
v___x_2842_ = lean_string_append(v___x_2840_, v___x_2841_);
v___x_2843_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2844_ = lean_string_append(v___x_2842_, v___x_2843_);
v___x_2845_ = l_Lasm_JS_Data_describe(v___x_2832_);
v___x_2846_ = lean_string_append(v___x_2844_, v___x_2845_);
lean_dec_ref(v___x_2845_);
v___x_2847_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v___x_2847_ == 0)
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2851_; 
v___x_2848_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4));
v___x_2849_ = lean_string_append(v___x_2846_, v___x_2848_);
if (v_isShared_2835_ == 0)
{
lean_ctor_set_tag(v___x_2834_, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2849_);
v___x_2851_ = v___x_2834_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v___x_2849_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
return v___x_2851_;
}
}
else
{
lean_object* v___x_2854_; 
if (v_isShared_2835_ == 0)
{
lean_ctor_set_tag(v___x_2834_, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2846_);
v___x_2854_ = v___x_2834_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v___x_2846_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
}
else
{
lean_object* v___x_2874_; 
lean_dec(v_d_2823_);
v___x_2874_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__2));
return v___x_2874_;
}
v___jp_2825_:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2827_ = lean_box(v_a_2826_);
v___x_2828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2827_);
v___x_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2829_, 0, v___x_2828_);
return v___x_2829_;
}
v___jp_2830_:
{
lean_object* v___x_2831_; 
v___x_2831_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__0));
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___boxed(lean_object* v_d_2875_, lean_object* v_key_2876_){
_start:
{
lean_object* v_res_2877_; 
v_res_2877_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8(v_d_2875_, v_key_2876_);
lean_dec_ref(v_key_2876_);
return v_res_2877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13(size_t v_sz_2878_, size_t v_i_2879_, lean_object* v_bs_2880_){
_start:
{
uint8_t v___x_2881_; 
v___x_2881_ = lean_usize_dec_lt(v_i_2879_, v_sz_2878_);
if (v___x_2881_ == 0)
{
lean_object* v___x_2882_; 
v___x_2882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2882_, 0, v_bs_2880_);
return v___x_2882_;
}
else
{
lean_object* v_v_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v_v_2883_ = lean_array_uget_borrowed(v_bs_2880_, v_i_2879_);
v___x_2884_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__0));
lean_inc(v_v_2883_);
v___x_2885_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8(v_v_2883_, v___x_2884_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2893_; 
lean_dec_ref(v_bs_2880_);
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2888_ = v___x_2885_;
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v___x_2885_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2891_; 
if (v_isShared_2889_ == 0)
{
v___x_2891_ = v___x_2888_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_a_2886_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
}
else
{
lean_object* v_a_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v_a_2894_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_a_2894_);
lean_dec_ref_known(v___x_2885_, 1);
v___x_2895_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__1));
lean_inc(v_v_2883_);
v___x_2896_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9(v_v_2883_, v___x_2895_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
lean_dec(v_a_2894_);
lean_dec_ref(v_bs_2880_);
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
lean_object* v_a_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v_a_2905_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2905_);
lean_dec_ref_known(v___x_2896_, 1);
v___x_2906_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__2));
lean_inc(v_v_2883_);
v___x_2907_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2883_, v___x_2906_);
if (lean_obj_tag(v___x_2907_) == 0)
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
lean_dec(v_a_2905_);
lean_dec(v_a_2894_);
lean_dec_ref(v_bs_2880_);
v_a_2908_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2907_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2907_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v_a_2916_ = lean_ctor_get(v___x_2907_, 0);
lean_inc(v_a_2916_);
lean_dec_ref_known(v___x_2907_, 1);
v___x_2917_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__3));
lean_inc(v_v_2883_);
v___x_2918_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_MarkdownRenderCallbacksLink_ofFn_spec__0_spec__0_spec__1(v_v_2883_, v___x_2917_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec(v_a_2916_);
lean_dec(v_a_2905_);
lean_dec(v_a_2894_);
lean_dec_ref(v_bs_2880_);
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2918_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2918_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; 
v_a_2927_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_a_2927_);
lean_dec_ref_known(v___x_2918_, 1);
v___x_2928_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__4));
lean_inc(v_v_2883_);
v___x_2929_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2883_, v___x_2928_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2937_; 
lean_dec(v_a_2927_);
lean_dec(v_a_2916_);
lean_dec(v_a_2905_);
lean_dec(v_a_2894_);
lean_dec_ref(v_bs_2880_);
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
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
else
{
lean_object* v_a_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v_a_2938_ = lean_ctor_get(v___x_2929_, 0);
lean_inc(v_a_2938_);
lean_dec_ref_known(v___x_2929_, 1);
v___x_2939_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__5));
lean_inc(v_v_2883_);
v___x_2940_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10(v_v_2883_, v___x_2939_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v_a_2938_);
lean_dec(v_a_2927_);
lean_dec(v_a_2916_);
lean_dec(v_a_2905_);
lean_dec(v_a_2894_);
lean_dec_ref(v_bs_2880_);
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2940_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2940_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
else
{
lean_object* v_a_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v_a_2949_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2949_);
lean_dec_ref_known(v___x_2940_, 1);
v___x_2950_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__6));
lean_inc(v_v_2883_);
v___x_2951_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11(v_v_2883_, v___x_2950_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
lean_dec(v_a_2949_);
lean_dec(v_a_2938_);
lean_dec(v_a_2927_);
lean_dec(v_a_2916_);
lean_dec(v_a_2905_);
lean_dec(v_a_2894_);
lean_dec_ref(v_bs_2880_);
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v___x_2951_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2951_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_a_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
else
{
lean_object* v_a_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v_a_2960_ = lean_ctor_get(v___x_2951_, 0);
lean_inc(v_a_2960_);
lean_dec_ref_known(v___x_2951_, 1);
v___x_2961_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__7));
lean_inc(v_v_2883_);
v___x_2962_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SpawnBaseOptionsIgnorePipeInheritOnExit_ofFn_spec__0_spec__0_spec__1(v_v_2883_, v___x_2961_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
lean_dec(v_a_2960_);
lean_dec(v_a_2949_);
lean_dec(v_a_2938_);
lean_dec(v_a_2927_);
lean_dec(v_a_2916_);
lean_dec(v_a_2905_);
lean_dec(v_a_2894_);
lean_dec_ref(v_bs_2880_);
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2962_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2962_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v_a_2971_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2971_);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2972_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__8));
lean_inc(v_v_2883_);
v___x_2973_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12(v_v_2883_, v___x_2972_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec(v_a_2971_);
lean_dec(v_a_2960_);
lean_dec(v_a_2949_);
lean_dec(v_a_2938_);
lean_dec(v_a_2927_);
lean_dec(v_a_2916_);
lean_dec(v_a_2905_);
lean_dec(v_a_2894_);
lean_dec_ref(v_bs_2880_);
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2973_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2973_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2983_; lean_object* v_bs_x27_2984_; lean_object* v___x_2985_; size_t v___x_2986_; size_t v___x_2987_; lean_object* v___x_2988_; 
v_a_2982_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2982_);
lean_dec_ref_known(v___x_2973_, 1);
v___x_2983_ = lean_unsigned_to_nat(0u);
v_bs_x27_2984_ = lean_array_uset(v_bs_2880_, v_i_2879_, v___x_2983_);
v___x_2985_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2985_, 0, v_a_2894_);
lean_ctor_set(v___x_2985_, 1, v_a_2905_);
lean_ctor_set(v___x_2985_, 2, v_a_2916_);
lean_ctor_set(v___x_2985_, 3, v_a_2927_);
lean_ctor_set(v___x_2985_, 4, v_a_2938_);
lean_ctor_set(v___x_2985_, 5, v_a_2949_);
lean_ctor_set(v___x_2985_, 6, v_a_2960_);
lean_ctor_set(v___x_2985_, 7, v_a_2971_);
lean_ctor_set(v___x_2985_, 8, v_a_2982_);
v___x_2986_ = ((size_t)1ULL);
v___x_2987_ = lean_usize_add(v_i_2879_, v___x_2986_);
v___x_2988_ = lean_array_uset(v_bs_x27_2984_, v_i_2879_, v___x_2985_);
v_i_2879_ = v___x_2987_;
v_bs_2880_ = v___x_2988_;
goto _start;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___boxed(lean_object* v_sz_2990_, lean_object* v_i_2991_, lean_object* v_bs_2992_){
_start:
{
size_t v_sz_boxed_2993_; size_t v_i_boxed_2994_; lean_object* v_res_2995_; 
v_sz_boxed_2993_ = lean_unbox_usize(v_sz_2990_);
lean_dec(v_sz_2990_);
v_i_boxed_2994_ = lean_unbox_usize(v_i_2991_);
lean_dec(v_i_2991_);
v_res_2995_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13(v_sz_boxed_2993_, v_i_boxed_2994_, v_bs_2992_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6(lean_object* v_d_3002_, lean_object* v_key_3003_){
_start:
{
if (lean_obj_tag(v_d_3002_) == 8)
{
lean_object* v___x_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3059_; 
v___x_3006_ = l_Lasm_JS_Data_field(v_d_3002_, v_key_3003_);
v_isSharedCheck_3059_ = !lean_is_exclusive(v_d_3002_);
if (v_isSharedCheck_3059_ == 0)
{
lean_object* v_unused_3060_; 
v_unused_3060_ = lean_ctor_get(v_d_3002_, 0);
lean_dec(v_unused_3060_);
v___x_3008_ = v_d_3002_;
v_isShared_3009_ = v_isSharedCheck_3059_;
goto v_resetjp_3007_;
}
else
{
lean_dec(v_d_3002_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3059_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v_a_3011_; 
switch(lean_obj_tag(v___x_3006_))
{
case 1:
{
lean_del_object(v___x_3008_);
goto v___jp_3004_;
}
case 0:
{
lean_del_object(v___x_3008_);
goto v___jp_3004_;
}
default: 
{
if (lean_obj_tag(v___x_3006_) == 7)
{
lean_object* v_items_3036_; size_t v_sz_3037_; size_t v___x_3038_; lean_object* v___x_3039_; 
v_items_3036_ = lean_ctor_get(v___x_3006_, 0);
lean_inc_ref(v_items_3036_);
v_sz_3037_ = lean_array_size(v_items_3036_);
v___x_3038_ = ((size_t)0ULL);
v___x_3039_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13(v_sz_3037_, v___x_3038_, v_items_3036_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; uint8_t v___x_3044_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3040_);
lean_dec_ref_known(v___x_3039_, 1);
v___x_3041_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__2));
v___x_3042_ = lean_string_utf8_byte_size(v_a_3040_);
v___x_3043_ = lean_unsigned_to_nat(0u);
v___x_3044_ = lean_nat_dec_eq(v___x_3042_, v___x_3043_);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3045_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_3046_ = lean_string_append(v___x_3045_, v_a_3040_);
lean_dec(v_a_3040_);
v___x_3047_ = lean_string_append(v___x_3041_, v___x_3046_);
lean_dec_ref(v___x_3046_);
v_a_3011_ = v___x_3047_;
goto v___jp_3010_;
}
else
{
lean_dec(v_a_3040_);
v_a_3011_ = v___x_3041_;
goto v___jp_3010_;
}
}
else
{
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3048_; 
v_a_3048_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3048_);
lean_dec_ref_known(v___x_3039_, 1);
v_a_3011_ = v_a_3048_;
goto v___jp_3010_;
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3057_; 
lean_dec_ref_known(v___x_3006_, 1);
lean_del_object(v___x_3008_);
v_a_3049_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3051_ = v___x_3039_;
v_isShared_3052_ = v_isSharedCheck_3057_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_3039_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3057_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3053_; lean_object* v___x_3055_; 
v___x_3053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3053_, 0, v_a_3049_);
if (v_isShared_3052_ == 0)
{
lean_ctor_set(v___x_3051_, 0, v___x_3053_);
v___x_3055_ = v___x_3051_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3053_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
}
else
{
lean_object* v___x_3058_; 
v___x_3058_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v_a_3011_ = v___x_3058_;
goto v___jp_3010_;
}
}
}
v___jp_3010_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3012_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_3013_ = lean_string_append(v___x_3012_, v_key_3003_);
v___x_3014_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_3015_ = lean_string_append(v___x_3013_, v___x_3014_);
v___x_3016_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__1));
v___x_3017_ = lean_string_append(v___x_3015_, v___x_3016_);
v___x_3018_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_3019_ = lean_string_append(v___x_3017_, v___x_3018_);
v___x_3020_ = l_Lasm_JS_Data_describe(v___x_3006_);
v___x_3021_ = lean_string_append(v___x_3019_, v___x_3020_);
lean_dec_ref(v___x_3020_);
v___x_3022_ = lean_string_utf8_byte_size(v_a_3011_);
v___x_3023_ = lean_unsigned_to_nat(0u);
v___x_3024_ = lean_nat_dec_eq(v___x_3022_, v___x_3023_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3031_; 
v___x_3025_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_3026_ = lean_string_append(v___x_3025_, v_a_3011_);
lean_dec_ref(v_a_3011_);
v___x_3027_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_3028_ = lean_string_append(v___x_3026_, v___x_3027_);
v___x_3029_ = lean_string_append(v___x_3021_, v___x_3028_);
lean_dec_ref(v___x_3028_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set_tag(v___x_3008_, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3029_);
v___x_3031_ = v___x_3008_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v___x_3029_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
else
{
lean_object* v___x_3034_; 
lean_dec_ref(v_a_3011_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set_tag(v___x_3008_, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3021_);
v___x_3034_ = v___x_3008_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v___x_3021_);
v___x_3034_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
return v___x_3034_;
}
}
}
}
}
else
{
lean_object* v___x_3061_; 
lean_dec(v_d_3002_);
v___x_3061_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__3));
return v___x_3061_;
}
v___jp_3004_:
{
lean_object* v___x_3005_; 
v___x_3005_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__0));
return v___x_3005_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___boxed(lean_object* v_d_3062_, lean_object* v_key_3063_){
_start:
{
lean_object* v_res_3064_; 
v_res_3064_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6(v_d_3062_, v_key_3063_);
lean_dec_ref(v_key_3063_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4(lean_object* v_context_3065_, lean_object* v_d_3066_){
_start:
{
lean_object* v___y_3069_; lean_object* v___y_3070_; lean_object* v___y_3075_; lean_object* v_received_3076_; lean_object* v___y_3095_; lean_object* v_a_3098_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__0));
lean_inc(v_d_3066_);
v___x_3123_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5(v_d_3066_, v___x_3122_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3123_, 1);
v_a_3098_ = v_a_3124_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v_a_3125_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3125_);
lean_dec_ref_known(v___x_3123_, 1);
v___x_3126_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__1));
lean_inc(v_d_3066_);
v___x_3127_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6(v_d_3066_, v___x_3126_);
if (lean_obj_tag(v___x_3127_) == 0)
{
lean_object* v_a_3128_; 
lean_dec(v_a_3125_);
v_a_3128_ = lean_ctor_get(v___x_3127_, 0);
lean_inc(v_a_3128_);
lean_dec_ref_known(v___x_3127_, 1);
v_a_3098_ = v_a_3128_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v_a_3129_ = lean_ctor_get(v___x_3127_, 0);
lean_inc(v_a_3129_);
lean_dec_ref_known(v___x_3127_, 1);
v___x_3130_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1));
lean_inc(v_d_3066_);
v___x_3131_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3066_, v___x_3130_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; 
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3132_);
lean_dec_ref_known(v___x_3131_, 1);
v_a_3098_ = v_a_3132_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v_a_3133_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3133_);
lean_dec_ref_known(v___x_3131_, 1);
v___x_3134_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2));
lean_inc(v_d_3066_);
v___x_3135_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3066_, v___x_3134_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; 
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3135_, 1);
v_a_3098_ = v_a_3136_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v_a_3137_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3135_, 1);
v___x_3138_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5));
lean_inc(v_d_3066_);
v___x_3139_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7(v_d_3066_, v___x_3138_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; 
lean_dec(v_a_3137_);
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3140_);
lean_dec_ref_known(v___x_3139_, 1);
v_a_3098_ = v_a_3140_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v_a_3141_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3141_);
lean_dec_ref_known(v___x_3139_, 1);
v___x_3142_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__2));
lean_inc(v_d_3066_);
v___x_3143_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3066_, v___x_3142_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; 
lean_dec(v_a_3141_);
lean_dec(v_a_3137_);
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3143_, 1);
v_a_3098_ = v_a_3144_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v_a_3145_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3145_);
lean_dec_ref_known(v___x_3143_, 1);
v___x_3146_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__3));
lean_inc(v_d_3066_);
v___x_3147_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SpawnBaseOptionsIgnorePipeInheritOnExit_ofFn_spec__0_spec__0_spec__1(v_d_3066_, v___x_3146_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_object* v_a_3148_; 
lean_dec(v_a_3145_);
lean_dec(v_a_3141_);
lean_dec(v_a_3137_);
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___x_3147_, 1);
v_a_3098_ = v_a_3148_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v_a_3149_ = lean_ctor_get(v___x_3147_, 0);
lean_inc(v_a_3149_);
lean_dec_ref_known(v___x_3147_, 1);
v___x_3150_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3));
lean_inc(v_d_3066_);
v___x_3151_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SpawnBaseOptionsIgnorePipeInheritOnExit_ofFn_spec__0_spec__0_spec__1(v_d_3066_, v___x_3150_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_object* v_a_3152_; 
lean_dec(v_a_3149_);
lean_dec(v_a_3145_);
lean_dec(v_a_3141_);
lean_dec(v_a_3137_);
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
lean_inc(v_a_3152_);
lean_dec_ref_known(v___x_3151_, 1);
v_a_3098_ = v_a_3152_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v_a_3153_ = lean_ctor_get(v___x_3151_, 0);
lean_inc(v_a_3153_);
lean_dec_ref_known(v___x_3151_, 1);
v___x_3154_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__4));
lean_inc(v_d_3066_);
v___x_3155_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3066_, v___x_3154_);
if (lean_obj_tag(v___x_3155_) == 0)
{
lean_object* v_a_3156_; 
lean_dec(v_a_3153_);
lean_dec(v_a_3149_);
lean_dec(v_a_3145_);
lean_dec(v_a_3141_);
lean_dec(v_a_3137_);
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3156_ = lean_ctor_get(v___x_3155_, 0);
lean_inc(v_a_3156_);
lean_dec_ref_known(v___x_3155_, 1);
v_a_3098_ = v_a_3156_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v_a_3157_ = lean_ctor_get(v___x_3155_, 0);
lean_inc(v_a_3157_);
lean_dec_ref_known(v___x_3155_, 1);
v___x_3158_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__5));
lean_inc(v_d_3066_);
v___x_3159_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3066_, v___x_3158_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_object* v_a_3160_; 
lean_dec(v_a_3157_);
lean_dec(v_a_3153_);
lean_dec(v_a_3149_);
lean_dec(v_a_3145_);
lean_dec(v_a_3141_);
lean_dec(v_a_3137_);
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3160_ = lean_ctor_get(v___x_3159_, 0);
lean_inc(v_a_3160_);
lean_dec_ref_known(v___x_3159_, 1);
v_a_3098_ = v_a_3160_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v_a_3161_ = lean_ctor_get(v___x_3159_, 0);
lean_inc(v_a_3161_);
lean_dec_ref_known(v___x_3159_, 1);
v___x_3162_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
lean_inc(v_d_3066_);
v___x_3163_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3066_, v___x_3162_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; 
lean_dec(v_a_3161_);
lean_dec(v_a_3157_);
lean_dec(v_a_3153_);
lean_dec(v_a_3149_);
lean_dec(v_a_3145_);
lean_dec(v_a_3141_);
lean_dec(v_a_3137_);
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3164_);
lean_dec_ref_known(v___x_3163_, 1);
v_a_3098_ = v_a_3164_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v_a_3165_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3165_);
lean_dec_ref_known(v___x_3163_, 1);
v___x_3166_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4));
lean_inc(v_d_3066_);
v___x_3167_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3066_, v___x_3166_);
if (lean_obj_tag(v___x_3167_) == 0)
{
lean_object* v_a_3168_; 
lean_dec(v_a_3165_);
lean_dec(v_a_3161_);
lean_dec(v_a_3157_);
lean_dec(v_a_3153_);
lean_dec(v_a_3149_);
lean_dec(v_a_3145_);
lean_dec(v_a_3141_);
lean_dec(v_a_3137_);
lean_dec(v_a_3133_);
lean_dec(v_a_3129_);
lean_dec(v_a_3125_);
v_a_3168_ = lean_ctor_get(v___x_3167_, 0);
lean_inc(v_a_3168_);
lean_dec_ref_known(v___x_3167_, 1);
v_a_3098_ = v_a_3168_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3177_; 
lean_dec(v_d_3066_);
v_a_3169_ = lean_ctor_get(v___x_3167_, 0);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___x_3167_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3171_ = v___x_3167_;
v_isShared_3172_ = v_isSharedCheck_3177_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3167_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3177_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3173_; lean_object* v___x_3175_; 
v___x_3173_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3173_, 0, v_a_3125_);
lean_ctor_set(v___x_3173_, 1, v_a_3129_);
lean_ctor_set(v___x_3173_, 2, v_a_3133_);
lean_ctor_set(v___x_3173_, 3, v_a_3137_);
lean_ctor_set(v___x_3173_, 4, v_a_3141_);
lean_ctor_set(v___x_3173_, 5, v_a_3145_);
lean_ctor_set(v___x_3173_, 6, v_a_3149_);
lean_ctor_set(v___x_3173_, 7, v_a_3153_);
lean_ctor_set(v___x_3173_, 8, v_a_3157_);
lean_ctor_set(v___x_3173_, 9, v_a_3161_);
lean_ctor_set(v___x_3173_, 10, v_a_3165_);
lean_ctor_set(v___x_3173_, 11, v_a_3169_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set_tag(v___x_3171_, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3173_);
v___x_3175_ = v___x_3171_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v___x_3173_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
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
}
}
v___jp_3068_:
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3071_ = lean_string_append(v___y_3069_, v___y_3070_);
lean_dec_ref(v___y_3070_);
v___x_3072_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
v___x_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3072_);
return v___x_3073_;
}
v___jp_3074_:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; uint8_t v___x_3088_; 
v___x_3077_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_3078_ = lean_string_append(v___x_3077_, v_context_3065_);
v___x_3079_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__1));
v___x_3080_ = lean_string_append(v___x_3078_, v___x_3079_);
v___x_3081_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6));
v___x_3082_ = lean_string_append(v___x_3080_, v___x_3081_);
v___x_3083_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__2));
v___x_3084_ = lean_string_append(v___x_3082_, v___x_3083_);
v___x_3085_ = lean_string_append(v___x_3084_, v_received_3076_);
lean_dec_ref(v_received_3076_);
v___x_3086_ = lean_string_utf8_byte_size(v___y_3075_);
v___x_3087_ = lean_unsigned_to_nat(0u);
v___x_3088_ = lean_nat_dec_eq(v___x_3086_, v___x_3087_);
if (v___x_3088_ == 0)
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3089_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_3090_ = lean_string_append(v___x_3089_, v___y_3075_);
lean_dec_ref(v___y_3075_);
v___x_3091_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_3092_ = lean_string_append(v___x_3090_, v___x_3091_);
v___y_3069_ = v___x_3085_;
v___y_3070_ = v___x_3092_;
goto v___jp_3068_;
}
else
{
lean_object* v___x_3093_; 
lean_dec_ref(v___y_3075_);
v___x_3093_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___y_3069_ = v___x_3085_;
v___y_3070_ = v___x_3093_;
goto v___jp_3068_;
}
}
v___jp_3094_:
{
lean_object* v___x_3096_; 
v___x_3096_ = l_Lasm_JS_Data_describe(v_d_3066_);
v___y_3075_ = v___y_3095_;
v_received_3076_ = v___x_3096_;
goto v___jp_3074_;
}
v___jp_3097_:
{
if (lean_obj_tag(v_d_3066_) == 9)
{
lean_object* v_value_3099_; lean_object* v_description_3100_; lean_object* v___x_3101_; uint8_t v___x_3102_; 
v_value_3099_ = lean_ctor_get(v_d_3066_, 0);
v_description_3100_ = lean_ctor_get(v_d_3066_, 1);
v___x_3101_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_3102_ = lean_string_dec_eq(v_description_3100_, v___x_3101_);
if (v___x_3102_ == 0)
{
v___y_3095_ = v_a_3098_;
goto v___jp_3094_;
}
else
{
lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3119_; 
lean_inc(v_value_3099_);
v_isSharedCheck_3119_ = !lean_is_exclusive(v_d_3066_);
if (v_isSharedCheck_3119_ == 0)
{
lean_object* v_unused_3120_; lean_object* v_unused_3121_; 
v_unused_3120_ = lean_ctor_get(v_d_3066_, 1);
lean_dec(v_unused_3120_);
v_unused_3121_ = lean_ctor_get(v_d_3066_, 0);
lean_dec(v_unused_3121_);
v___x_3104_ = v_d_3066_;
v_isShared_3105_ = v_isSharedCheck_3119_;
goto v_resetjp_3103_;
}
else
{
lean_dec(v_d_3066_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3119_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
uint32_t v___x_3106_; uint64_t v___x_3107_; lean_object* v___x_3109_; 
v___x_3106_ = 206;
v___x_3107_ = 0ULL;
lean_inc(v_value_3099_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 1, v___x_3101_);
v___x_3109_ = v___x_3104_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_value_3099_);
lean_ctor_set(v_reuseFailAlloc_3118_, 1, v___x_3101_);
v___x_3109_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
uint32_t v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = lasm_js_value_handle(v_value_3099_);
lean_dec(v_value_3099_);
v___x_3111_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3106_, v___x_3107_, v___x_3109_, v___x_3110_);
lean_dec_ref(v___x_3109_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; uint8_t v___x_3113_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref_known(v___x_3111_, 1);
v___x_3113_ = lean_string_validate_utf8(v_a_3112_);
if (v___x_3113_ == 0)
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
lean_dec(v_a_3112_);
v___x_3114_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9);
v___x_3115_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3114_);
v___y_3075_ = v_a_3098_;
v_received_3076_ = v___x_3115_;
goto v___jp_3074_;
}
else
{
lean_object* v___x_3116_; 
v___x_3116_ = lean_string_from_utf8_unchecked(v_a_3112_);
v___y_3075_ = v_a_3098_;
v_received_3076_ = v___x_3116_;
goto v___jp_3074_;
}
}
else
{
lean_object* v___x_3117_; 
lean_dec_ref_known(v___x_3111_, 1);
v___x_3117_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__10));
v___y_3075_ = v_a_3098_;
v_received_3076_ = v___x_3117_;
goto v___jp_3074_;
}
}
}
}
}
else
{
v___y_3095_ = v_a_3098_;
goto v___jp_3094_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4___boxed(lean_object* v_context_3178_, lean_object* v_d_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4(v_context_3178_, v_d_3179_);
lean_dec_ref(v_context_3178_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0(lean_object* v_context_3182_, lean_object* v_x_3183_){
_start:
{
lean_object* v_val_3186_; 
if (lean_obj_tag(v_x_3183_) == 0)
{
lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3196_; 
v_a_3188_ = lean_ctor_get(v_x_3183_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v_x_3183_);
if (v_isSharedCheck_3196_ == 0)
{
v___x_3190_ = v_x_3183_;
v_isShared_3191_ = v_isSharedCheck_3196_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v_x_3183_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3196_;
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
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_a_3188_);
v___x_3193_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
lean_object* v___x_3194_; 
v___x_3194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
return v___x_3194_;
}
}
}
else
{
lean_object* v_a_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3210_; 
v_a_3197_ = lean_ctor_get(v_x_3183_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v_x_3183_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3199_ = v_x_3183_;
v_isShared_3200_ = v_isSharedCheck_3210_;
goto v_resetjp_3198_;
}
else
{
lean_inc(v_a_3197_);
lean_dec(v_x_3183_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3210_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
lean_object* v___x_3201_; 
v___x_3201_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4(v_context_3182_, v_a_3197_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3204_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___x_3201_, 1);
if (v_isShared_3200_ == 0)
{
lean_ctor_set(v___x_3199_, 0, v_a_3202_);
v___x_3204_ = v___x_3199_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3202_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
v_val_3186_ = v___x_3204_;
goto v___jp_3185_;
}
}
else
{
lean_object* v_a_3206_; lean_object* v___x_3208_; 
v_a_3206_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3206_);
lean_dec_ref_known(v___x_3201_, 1);
if (v_isShared_3200_ == 0)
{
lean_ctor_set_tag(v___x_3199_, 0);
lean_ctor_set(v___x_3199_, 0, v_a_3206_);
v___x_3208_ = v___x_3199_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3206_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
v_val_3186_ = v___x_3208_;
goto v___jp_3185_;
}
}
}
}
v___jp_3185_:
{
lean_object* v___x_3187_; 
v___x_3187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3187_, 0, v_val_3186_);
return v___x_3187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0___boxed(lean_object* v_context_3211_, lean_object* v_x_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0(v_context_3211_, v_x_3212_);
lean_dec_ref(v_context_3211_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8(lean_object* v___f_3215_, lean_object* v_x_3216_){
_start:
{
if (lean_obj_tag(v_x_3216_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3226_; 
lean_dec_ref(v___f_3215_);
v_a_3218_ = lean_ctor_get(v_x_3216_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v_x_3216_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3220_ = v_x_3216_;
v_isShared_3221_ = v_isSharedCheck_3226_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v_x_3216_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3226_;
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
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v_a_3218_);
v___x_3223_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
lean_object* v___x_3224_; 
v___x_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3223_);
return v___x_3224_;
}
}
}
else
{
lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3238_; 
v_isSharedCheck_3238_ = !lean_is_exclusive(v_x_3216_);
if (v_isSharedCheck_3238_ == 0)
{
lean_object* v_unused_3239_; 
v_unused_3239_ = lean_ctor_get(v_x_3216_, 0);
lean_dec(v_unused_3239_);
v___x_3228_ = v_x_3216_;
v_isShared_3229_ = v_isSharedCheck_3238_;
goto v_resetjp_3227_;
}
else
{
lean_dec(v_x_3216_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3238_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3230_; uint8_t v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3234_; 
v___x_3230_ = lean_unsigned_to_nat(0u);
v___x_3231_ = 0;
v___x_3232_ = lean_io_promise_new();
if (v_isShared_3229_ == 0)
{
lean_ctor_set(v___x_3228_, 0, v___x_3232_);
v___x_3234_ = v___x_3228_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3232_);
v___x_3234_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3234_);
v___x_3236_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3230_, v___x_3231_, v___x_3235_, v___f_3215_);
return v___x_3236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8___boxed(lean_object* v___f_3240_, lean_object* v_x_3241_, lean_object* v___y_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8(v___f_3240_, v_x_3241_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4(lean_object* v_failurePrefix_3244_, lean_object* v_x_3245_){
_start:
{
if (lean_obj_tag(v_x_3245_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3258_; 
v_a_3247_ = lean_ctor_get(v_x_3245_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v_x_3245_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3249_ = v_x_3245_;
v_isShared_3250_ = v_isSharedCheck_3258_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v_x_3245_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3258_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3255_; 
v___x_3251_ = lean_io_error_to_string(v_a_3247_);
v___x_3252_ = lean_string_append(v_failurePrefix_3244_, v___x_3251_);
lean_dec_ref(v___x_3251_);
v___x_3253_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 0, v___x_3253_);
v___x_3255_ = v___x_3249_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v___x_3253_);
v___x_3255_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
lean_object* v___x_3256_; 
v___x_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
return v___x_3256_;
}
}
}
else
{
lean_object* v___x_3259_; 
lean_dec_ref(v_failurePrefix_3244_);
v___x_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3259_, 0, v_x_3245_);
return v___x_3259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4___boxed(lean_object* v_failurePrefix_3260_, lean_object* v_x_3261_, lean_object* v___y_3262_){
_start:
{
lean_object* v_res_3263_; 
v_res_3263_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4(v_failurePrefix_3260_, v_x_3261_);
return v_res_3263_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1(lean_object* v___f_3264_, lean_object* v_bytes_3265_){
_start:
{
lean_object* v___x_3267_; uint8_t v___x_3268_; lean_object* v_val_3270_; lean_object* v___x_3273_; 
v___x_3267_ = lean_unsigned_to_nat(0u);
v___x_3268_ = 0;
v___x_3273_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3265_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
v_a_3274_ = lean_ctor_get(v___x_3273_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3273_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3273_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
lean_ctor_set_tag(v___x_3276_, 1);
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
v_val_3270_ = v___x_3279_;
goto v___jp_3269_;
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3289_; 
v_a_3282_ = lean_ctor_get(v___x_3273_, 0);
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3284_ = v___x_3273_;
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
else
{
lean_inc(v_a_3282_);
lean_dec(v___x_3273_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3287_; 
if (v_isShared_3285_ == 0)
{
lean_ctor_set_tag(v___x_3284_, 0);
v___x_3287_ = v___x_3284_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v_a_3282_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
v_val_3270_ = v___x_3287_;
goto v___jp_3269_;
}
}
}
v___jp_3269_:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; 
v___x_3271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3271_, 0, v_val_3270_);
v___x_3272_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3267_, v___x_3268_, v___x_3271_, v___f_3264_);
return v___x_3272_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1___boxed(lean_object* v___f_3290_, lean_object* v_bytes_3291_, lean_object* v___y_3292_){
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1(v___f_3290_, v_bytes_3291_);
lean_dec_ref(v_bytes_3291_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2(lean_object* v___f_3294_, lean_object* v_x_3295_){
_start:
{
if (lean_obj_tag(v_x_3295_) == 0)
{
lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3305_; 
lean_dec_ref(v___f_3294_);
v_a_3297_ = lean_ctor_get(v_x_3295_, 0);
v_isSharedCheck_3305_ = !lean_is_exclusive(v_x_3295_);
if (v_isSharedCheck_3305_ == 0)
{
v___x_3299_ = v_x_3295_;
v_isShared_3300_ = v_isSharedCheck_3305_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v_x_3295_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3305_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___x_3302_; 
if (v_isShared_3300_ == 0)
{
v___x_3302_ = v___x_3299_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3304_; 
v_reuseFailAlloc_3304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3304_, 0, v_a_3297_);
v___x_3302_ = v_reuseFailAlloc_3304_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
lean_object* v___x_3303_; 
v___x_3303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3302_);
return v___x_3303_;
}
}
}
else
{
lean_object* v_a_3306_; lean_object* v___x_3307_; 
v_a_3306_ = lean_ctor_get(v_x_3295_, 0);
lean_inc(v_a_3306_);
lean_dec_ref_known(v_x_3295_, 1);
v___x_3307_ = lean_apply_2(v___f_3294_, v_a_3306_, lean_box(0));
return v___x_3307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2___boxed(lean_object* v___f_3308_, lean_object* v_x_3309_, lean_object* v___y_3310_){
_start:
{
lean_object* v_res_3311_; 
v_res_3311_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2(v___f_3308_, v_x_3309_);
return v_res_3311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7(lean_object* v___f_3312_, lean_object* v_a_3313_, uint32_t v_op_3314_, uint64_t v_flags_3315_, lean_object* v_payload_3316_, lean_object* v_x_3317_){
_start:
{
if (lean_obj_tag(v_x_3317_) == 0)
{
lean_object* v___x_3319_; 
lean_dec_ref(v___f_3312_);
v___x_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3319_, 0, v_x_3317_);
return v___x_3319_;
}
else
{
lean_object* v_a_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3340_; 
v_a_3320_ = lean_ctor_get(v_x_3317_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v_x_3317_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3322_ = v_x_3317_;
v_isShared_3323_ = v_isSharedCheck_3340_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_a_3320_);
lean_dec(v_x_3317_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3340_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
uint32_t v___x_3324_; lean_object* v___x_3325_; uint8_t v___x_3326_; lean_object* v_val_3328_; lean_object* v___x_3331_; 
v___x_3324_ = 0;
v___x_3325_ = lean_unsigned_to_nat(0u);
v___x_3326_ = 0;
v___x_3331_ = lasm_js_call_into(v_a_3313_, v_op_3314_, v___x_3324_, v_flags_3315_, v_a_3320_, v_payload_3316_);
lean_dec(v_a_3320_);
if (lean_obj_tag(v___x_3331_) == 0)
{
lean_object* v_a_3332_; lean_object* v___x_3334_; 
v_a_3332_ = lean_ctor_get(v___x_3331_, 0);
lean_inc(v_a_3332_);
lean_dec_ref_known(v___x_3331_, 1);
if (v_isShared_3323_ == 0)
{
lean_ctor_set(v___x_3322_, 0, v_a_3332_);
v___x_3334_ = v___x_3322_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3332_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
v_val_3328_ = v___x_3334_;
goto v___jp_3327_;
}
}
else
{
lean_object* v_a_3336_; lean_object* v___x_3338_; 
v_a_3336_ = lean_ctor_get(v___x_3331_, 0);
lean_inc(v_a_3336_);
lean_dec_ref_known(v___x_3331_, 1);
if (v_isShared_3323_ == 0)
{
lean_ctor_set_tag(v___x_3322_, 0);
lean_ctor_set(v___x_3322_, 0, v_a_3336_);
v___x_3338_ = v___x_3322_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3336_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
v_val_3328_ = v___x_3338_;
goto v___jp_3327_;
}
}
v___jp_3327_:
{
lean_object* v___x_3329_; lean_object* v___x_3330_; 
v___x_3329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3329_, 0, v_val_3328_);
v___x_3330_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3325_, v___x_3326_, v___x_3329_, v___f_3312_);
return v___x_3330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7___boxed(lean_object* v___f_3341_, lean_object* v_a_3342_, lean_object* v_op_3343_, lean_object* v_flags_3344_, lean_object* v_payload_3345_, lean_object* v_x_3346_, lean_object* v___y_3347_){
_start:
{
uint32_t v_op_boxed_3348_; uint64_t v_flags_boxed_3349_; lean_object* v_res_3350_; 
v_op_boxed_3348_ = lean_unbox_uint32(v_op_3343_);
lean_dec(v_op_3343_);
v_flags_boxed_3349_ = lean_unbox_uint64(v_flags_3344_);
lean_dec_ref(v_flags_3344_);
v_res_3350_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7(v___f_3341_, v_a_3342_, v_op_boxed_3348_, v_flags_boxed_3349_, v_payload_3345_, v_x_3346_);
lean_dec(v_payload_3345_);
lean_dec(v_a_3342_);
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5(lean_object* v___x_3351_, uint8_t v___x_3352_, lean_object* v___f_3353_, lean_object* v_a_3354_, uint32_t v_op_3355_, uint64_t v_flags_3356_, lean_object* v_payload_3357_, lean_object* v_x_3358_){
_start:
{
lean_object* v_val_3361_; 
if (lean_obj_tag(v_x_3358_) == 0)
{
lean_object* v___x_3364_; 
lean_dec_ref(v___f_3353_);
lean_dec(v___x_3351_);
v___x_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3364_, 0, v_x_3358_);
return v___x_3364_;
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3379_; 
v_a_3365_ = lean_ctor_get(v_x_3358_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v_x_3358_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3367_ = v_x_3358_;
v_isShared_3368_ = v_isSharedCheck_3379_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v_x_3358_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3379_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
uint32_t v___x_3369_; lean_object* v___x_3370_; 
v___x_3369_ = 0;
v___x_3370_ = lasm_js_call_into(v_a_3354_, v_op_3355_, v___x_3369_, v_flags_3356_, v_a_3365_, v_payload_3357_);
lean_dec(v_a_3365_);
if (lean_obj_tag(v___x_3370_) == 0)
{
lean_object* v_a_3371_; lean_object* v___x_3373_; 
v_a_3371_ = lean_ctor_get(v___x_3370_, 0);
lean_inc(v_a_3371_);
lean_dec_ref_known(v___x_3370_, 1);
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 0, v_a_3371_);
v___x_3373_ = v___x_3367_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3371_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
v_val_3361_ = v___x_3373_;
goto v___jp_3360_;
}
}
else
{
lean_object* v_a_3375_; lean_object* v___x_3377_; 
v_a_3375_ = lean_ctor_get(v___x_3370_, 0);
lean_inc(v_a_3375_);
lean_dec_ref_known(v___x_3370_, 1);
if (v_isShared_3368_ == 0)
{
lean_ctor_set_tag(v___x_3367_, 0);
lean_ctor_set(v___x_3367_, 0, v_a_3375_);
v___x_3377_ = v___x_3367_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3375_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
v_val_3361_ = v___x_3377_;
goto v___jp_3360_;
}
}
}
}
v___jp_3360_:
{
lean_object* v___x_3362_; lean_object* v___x_3363_; 
v___x_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3362_, 0, v_val_3361_);
v___x_3363_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3351_, v___x_3352_, v___x_3362_, v___f_3353_);
return v___x_3363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5___boxed(lean_object* v___x_3380_, lean_object* v___x_3381_, lean_object* v___f_3382_, lean_object* v_a_3383_, lean_object* v_op_3384_, lean_object* v_flags_3385_, lean_object* v_payload_3386_, lean_object* v_x_3387_, lean_object* v___y_3388_){
_start:
{
uint8_t v___x_6174__boxed_3389_; uint32_t v_op_boxed_3390_; uint64_t v_flags_boxed_3391_; lean_object* v_res_3392_; 
v___x_6174__boxed_3389_ = lean_unbox(v___x_3381_);
v_op_boxed_3390_ = lean_unbox_uint32(v_op_3384_);
lean_dec(v_op_3384_);
v_flags_boxed_3391_ = lean_unbox_uint64(v_flags_3385_);
lean_dec_ref(v_flags_3385_);
v_res_3392_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5(v___x_3380_, v___x_6174__boxed_3389_, v___f_3382_, v_a_3383_, v_op_boxed_3390_, v_flags_boxed_3391_, v_payload_3386_, v_x_3387_);
lean_dec(v_payload_3386_);
lean_dec(v_a_3383_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3(lean_object* v_a_3393_, lean_object* v_x_3394_){
_start:
{
if (lean_obj_tag(v_x_3394_) == 0)
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3404_; 
v_a_3396_ = lean_ctor_get(v_x_3394_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v_x_3394_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3398_ = v_x_3394_;
v_isShared_3399_ = v_isSharedCheck_3404_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v_x_3394_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3404_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3401_; 
if (v_isShared_3399_ == 0)
{
v___x_3401_ = v___x_3398_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3396_);
v___x_3401_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
lean_object* v___x_3402_; 
v___x_3402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
return v___x_3402_;
}
}
}
else
{
lean_object* v___x_3405_; 
lean_dec_ref_known(v_x_3394_, 1);
v___x_3405_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3393_);
return v___x_3405_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3___boxed(lean_object* v_a_3406_, lean_object* v_x_3407_, lean_object* v___y_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3(v_a_3406_, v_x_3407_);
lean_dec(v_a_3406_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6(lean_object* v_failurePrefix_3410_, uint32_t v_op_3411_, uint64_t v_flags_3412_, lean_object* v_payload_3413_, lean_object* v___f_3414_, lean_object* v___f_3415_, lean_object* v___f_3416_, lean_object* v_x_3417_){
_start:
{
if (lean_obj_tag(v_x_3417_) == 0)
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3427_; 
lean_dec_ref(v___f_3416_);
lean_dec_ref(v___f_3415_);
lean_dec_ref(v___f_3414_);
lean_dec(v_payload_3413_);
v_a_3419_ = lean_ctor_get(v_x_3417_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v_x_3417_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3421_ = v_x_3417_;
v_isShared_3422_ = v_isSharedCheck_3427_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v_x_3417_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3427_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3424_; 
if (v_isShared_3422_ == 0)
{
v___x_3424_ = v___x_3421_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3419_);
v___x_3424_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
lean_object* v___x_3425_; 
v___x_3425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
return v___x_3425_;
}
}
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3474_; 
v_a_3428_ = lean_ctor_get(v_x_3417_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v_x_3417_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3430_ = v_x_3417_;
v_isShared_3431_ = v_isSharedCheck_3474_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v_x_3417_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3474_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; uint8_t v___x_3434_; 
v___x_3432_ = lean_string_utf8_byte_size(v_failurePrefix_3410_);
v___x_3433_ = lean_unsigned_to_nat(0u);
v___x_3434_ = lean_nat_dec_eq(v___x_3432_, v___x_3433_);
if (v___x_3434_ == 0)
{
lean_object* v___f_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___f_3439_; lean_object* v_val_3441_; lean_object* v___x_3446_; 
lean_dec_ref(v___f_3416_);
lean_inc(v_a_3428_);
v___f_3435_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3435_, 0, v_a_3428_);
v___x_3436_ = lean_box(v___x_3434_);
v___x_3437_ = lean_box_uint32(v_op_3411_);
v___x_3438_ = lean_box_uint64(v_flags_3412_);
lean_inc(v_payload_3413_);
v___f_3439_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3439_, 0, v___x_3433_);
lean_closure_set(v___f_3439_, 1, v___x_3436_);
lean_closure_set(v___f_3439_, 2, v___f_3435_);
lean_closure_set(v___f_3439_, 3, v_a_3428_);
lean_closure_set(v___f_3439_, 4, v___x_3437_);
lean_closure_set(v___f_3439_, 5, v___x_3438_);
lean_closure_set(v___f_3439_, 6, v_payload_3413_);
v___x_3446_ = l_Lasm_JS_Wire_encodeIO(v_payload_3413_);
lean_dec(v_payload_3413_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; lean_object* v___x_3449_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3447_);
lean_dec_ref_known(v___x_3446_, 1);
if (v_isShared_3431_ == 0)
{
lean_ctor_set(v___x_3430_, 0, v_a_3447_);
v___x_3449_ = v___x_3430_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_a_3447_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
v_val_3441_ = v___x_3449_;
goto v___jp_3440_;
}
}
else
{
lean_object* v_a_3451_; lean_object* v___x_3453_; 
v_a_3451_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3451_);
lean_dec_ref_known(v___x_3446_, 1);
if (v_isShared_3431_ == 0)
{
lean_ctor_set_tag(v___x_3430_, 0);
lean_ctor_set(v___x_3430_, 0, v_a_3451_);
v___x_3453_ = v___x_3430_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_a_3451_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
v_val_3441_ = v___x_3453_;
goto v___jp_3440_;
}
}
v___jp_3440_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3442_, 0, v_val_3441_);
v___x_3443_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3433_, v___x_3434_, v___x_3442_, v___f_3439_);
v___x_3444_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3433_, v___x_3434_, v___x_3443_, v___f_3414_);
v___x_3445_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3433_, v___x_3434_, v___x_3444_, v___f_3415_);
return v___x_3445_;
}
}
else
{
lean_object* v___f_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___f_3458_; uint8_t v___x_3459_; lean_object* v_val_3461_; lean_object* v___x_3465_; 
lean_dec_ref(v___f_3415_);
lean_dec_ref(v___f_3414_);
lean_inc(v_a_3428_);
v___f_3455_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3455_, 0, v_a_3428_);
v___x_3456_ = lean_box_uint32(v_op_3411_);
v___x_3457_ = lean_box_uint64(v_flags_3412_);
lean_inc(v_payload_3413_);
v___f_3458_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3458_, 0, v___f_3455_);
lean_closure_set(v___f_3458_, 1, v_a_3428_);
lean_closure_set(v___f_3458_, 2, v___x_3456_);
lean_closure_set(v___f_3458_, 3, v___x_3457_);
lean_closure_set(v___f_3458_, 4, v_payload_3413_);
v___x_3459_ = 0;
v___x_3465_ = l_Lasm_JS_Wire_encodeIO(v_payload_3413_);
lean_dec(v_payload_3413_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_object* v_a_3466_; lean_object* v___x_3468_; 
v_a_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3466_);
lean_dec_ref_known(v___x_3465_, 1);
if (v_isShared_3431_ == 0)
{
lean_ctor_set(v___x_3430_, 0, v_a_3466_);
v___x_3468_ = v___x_3430_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_a_3466_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
v_val_3461_ = v___x_3468_;
goto v___jp_3460_;
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; 
v_a_3470_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3470_);
lean_dec_ref_known(v___x_3465_, 1);
if (v_isShared_3431_ == 0)
{
lean_ctor_set_tag(v___x_3430_, 0);
lean_ctor_set(v___x_3430_, 0, v_a_3470_);
v___x_3472_ = v___x_3430_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3470_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
v_val_3461_ = v___x_3472_;
goto v___jp_3460_;
}
}
v___jp_3460_:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3462_, 0, v_val_3461_);
v___x_3463_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3433_, v___x_3459_, v___x_3462_, v___f_3458_);
v___x_3464_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3433_, v___x_3459_, v___x_3463_, v___f_3416_);
return v___x_3464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6___boxed(lean_object* v_failurePrefix_3475_, lean_object* v_op_3476_, lean_object* v_flags_3477_, lean_object* v_payload_3478_, lean_object* v___f_3479_, lean_object* v___f_3480_, lean_object* v___f_3481_, lean_object* v_x_3482_, lean_object* v___y_3483_){
_start:
{
uint32_t v_op_boxed_3484_; uint64_t v_flags_boxed_3485_; lean_object* v_res_3486_; 
v_op_boxed_3484_ = lean_unbox_uint32(v_op_3476_);
lean_dec(v_op_3476_);
v_flags_boxed_3485_ = lean_unbox_uint64(v_flags_3477_);
lean_dec_ref(v_flags_3477_);
v_res_3486_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6(v_failurePrefix_3475_, v_op_boxed_3484_, v_flags_boxed_3485_, v_payload_3478_, v___f_3479_, v___f_3480_, v___f_3481_, v_x_3482_);
lean_dec_ref(v_failurePrefix_3475_);
return v_res_3486_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(lean_object* v_context_3487_, uint32_t v_op_3488_, uint64_t v_flags_3489_, lean_object* v_payload_3490_, lean_object* v_failurePrefix_3491_){
_start:
{
lean_object* v___f_3493_; lean_object* v___f_3494_; lean_object* v___f_3495_; lean_object* v___f_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___f_3499_; lean_object* v___f_3500_; lean_object* v___x_3501_; uint8_t v___x_3502_; lean_object* v_val_3504_; lean_object* v___x_3507_; 
v___f_3493_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3493_, 0, v_context_3487_);
v___f_3494_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3494_, 0, v___f_3493_);
v___f_3495_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3495_, 0, v___f_3494_);
lean_inc_ref(v_failurePrefix_3491_);
v___f_3496_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3496_, 0, v_failurePrefix_3491_);
v___x_3497_ = lean_box_uint32(v_op_3488_);
v___x_3498_ = lean_box_uint64(v_flags_3489_);
lean_inc_ref(v___f_3495_);
v___f_3499_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3499_, 0, v_failurePrefix_3491_);
lean_closure_set(v___f_3499_, 1, v___x_3497_);
lean_closure_set(v___f_3499_, 2, v___x_3498_);
lean_closure_set(v___f_3499_, 3, v_payload_3490_);
lean_closure_set(v___f_3499_, 4, v___f_3496_);
lean_closure_set(v___f_3499_, 5, v___f_3495_);
lean_closure_set(v___f_3499_, 6, v___f_3495_);
v___f_3500_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3500_, 0, v___f_3499_);
v___x_3501_ = lean_unsigned_to_nat(0u);
v___x_3502_ = 0;
v___x_3507_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3515_; 
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3510_ = v___x_3507_;
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3507_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3513_; 
if (v_isShared_3511_ == 0)
{
lean_ctor_set_tag(v___x_3510_, 1);
v___x_3513_ = v___x_3510_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3508_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
v_val_3504_ = v___x_3513_;
goto v___jp_3503_;
}
}
}
else
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
v_a_3516_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3507_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v___x_3507_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
lean_ctor_set_tag(v___x_3518_, 0);
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
v_val_3504_ = v___x_3521_;
goto v___jp_3503_;
}
}
}
v___jp_3503_:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3505_, 0, v_val_3504_);
v___x_3506_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3501_, v___x_3502_, v___x_3505_, v___f_3500_);
return v___x_3506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___boxed(lean_object* v_context_3524_, lean_object* v_op_3525_, lean_object* v_flags_3526_, lean_object* v_payload_3527_, lean_object* v_failurePrefix_3528_, lean_object* v_a_3529_){
_start:
{
uint32_t v_op_boxed_3530_; uint64_t v_flags_boxed_3531_; lean_object* v_res_3532_; 
v_op_boxed_3530_ = lean_unbox_uint32(v_op_3525_);
lean_dec(v_op_3525_);
v_flags_boxed_3531_ = lean_unbox_uint64(v_flags_3526_);
lean_dec_ref(v_flags_3526_);
v_res_3532_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(v_context_3524_, v_op_boxed_3530_, v_flags_boxed_3531_, v_payload_3527_, v_failurePrefix_3528_);
return v_res_3532_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1(void){
_start:
{
uint64_t v___x_3534_; uint8_t v___x_3535_; uint64_t v___x_3536_; 
v___x_3534_ = 8ULL;
v___x_3535_ = 0;
v___x_3536_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2(v___x_3535_, v___x_3534_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1(lean_object* v_o_3537_, lean_object* v_name_3538_, lean_object* v_args_3539_){
_start:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; uint32_t v___x_3546_; uint64_t v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3541_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_3542_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3542_, 0, v_o_3537_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
lean_inc_ref(v_name_3538_);
v___x_3543_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3543_, 0, v_name_3538_);
v___x_3544_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__0));
v___x_3545_ = lean_string_append(v___x_3544_, v_name_3538_);
lean_dec_ref(v_name_3538_);
v___x_3546_ = 205;
v___x_3547_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1);
v___x_3548_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3548_, 0, v_args_3539_);
v___x_3549_ = lean_unsigned_to_nat(3u);
v___x_3550_ = lean_mk_empty_array_with_capacity(v___x_3549_);
v___x_3551_ = lean_array_push(v___x_3550_, v___x_3542_);
v___x_3552_ = lean_array_push(v___x_3551_, v___x_3543_);
v___x_3553_ = lean_array_push(v___x_3552_, v___x_3548_);
v___x_3554_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3553_);
v___x_3555_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(v___x_3545_, v___x_3546_, v___x_3547_, v___x_3554_, v___x_3541_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___boxed(lean_object* v_o_3556_, lean_object* v_name_3557_, lean_object* v_args_3558_, lean_object* v___y_3559_){
_start:
{
lean_object* v_res_3560_; 
v_res_3560_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1(v_o_3556_, v_name_3557_, v_args_3558_);
return v_res_3560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0(lean_object* v_x_3561_){
_start:
{
if (lean_obj_tag(v_x_3561_) == 0)
{
lean_object* v___x_3562_; 
v___x_3562_ = lean_box(0);
return v___x_3562_;
}
else
{
lean_object* v___x_3563_; 
v___x_3563_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__1));
return v___x_3563_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0___boxed(lean_object* v_x_3564_){
_start:
{
lean_object* v_res_3565_; 
v_res_3565_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0(v_x_3564_);
lean_dec(v_x_3564_);
return v_res_3565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0(lean_object* v_x_3566_){
_start:
{
if (lean_obj_tag(v_x_3566_) == 0)
{
lean_object* v___x_3567_; 
v___x_3567_ = lean_box(0);
return v___x_3567_;
}
else
{
lean_object* v_val_3568_; lean_object* v_prefix_3569_; lean_object* v_continuationToken_3570_; lean_object* v_delimiter_3571_; lean_object* v_maxKeys_3572_; lean_object* v_startAfter_3573_; lean_object* v_encodingType_3574_; lean_object* v_fetchOwner_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v_val_3568_ = lean_ctor_get(v_x_3566_, 0);
lean_inc(v_val_3568_);
lean_dec_ref_known(v_x_3566_, 1);
v_prefix_3569_ = lean_ctor_get(v_val_3568_, 0);
lean_inc(v_prefix_3569_);
v_continuationToken_3570_ = lean_ctor_get(v_val_3568_, 1);
lean_inc(v_continuationToken_3570_);
v_delimiter_3571_ = lean_ctor_get(v_val_3568_, 2);
lean_inc(v_delimiter_3571_);
v_maxKeys_3572_ = lean_ctor_get(v_val_3568_, 3);
lean_inc(v_maxKeys_3572_);
v_startAfter_3573_ = lean_ctor_get(v_val_3568_, 4);
lean_inc(v_startAfter_3573_);
v_encodingType_3574_ = lean_ctor_get(v_val_3568_, 5);
lean_inc(v_encodingType_3574_);
v_fetchOwner_3575_ = lean_ctor_get(v_val_3568_, 6);
lean_inc(v_fetchOwner_3575_);
lean_dec(v_val_3568_);
v___x_3576_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
v___x_3577_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_3569_);
v___x_3578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3576_);
lean_ctor_set(v___x_3578_, 1, v___x_3577_);
v___x_3579_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1));
v___x_3580_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_continuationToken_3570_);
v___x_3581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3579_);
lean_ctor_set(v___x_3581_, 1, v___x_3580_);
v___x_3582_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2));
v___x_3583_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_delimiter_3571_);
v___x_3584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3584_, 0, v___x_3582_);
lean_ctor_set(v___x_3584_, 1, v___x_3583_);
v___x_3585_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3));
v___x_3586_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_maxKeys_3572_);
lean_dec(v_maxKeys_3572_);
v___x_3587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3585_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
v___x_3588_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4));
v___x_3589_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_startAfter_3573_);
v___x_3590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3588_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
v___x_3591_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5));
v___x_3592_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0(v_encodingType_3574_);
lean_dec(v_encodingType_3574_);
v___x_3593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3591_);
lean_ctor_set(v___x_3593_, 1, v___x_3592_);
v___x_3594_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__6));
v___x_3595_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_fetchOwner_3575_);
lean_dec(v_fetchOwner_3575_);
v___x_3596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3596_, 0, v___x_3594_);
lean_ctor_set(v___x_3596_, 1, v___x_3595_);
v___x_3597_ = lean_unsigned_to_nat(7u);
v___x_3598_ = lean_mk_empty_array_with_capacity(v___x_3597_);
v___x_3599_ = lean_array_push(v___x_3598_, v___x_3578_);
v___x_3600_ = lean_array_push(v___x_3599_, v___x_3581_);
v___x_3601_ = lean_array_push(v___x_3600_, v___x_3584_);
v___x_3602_ = lean_array_push(v___x_3601_, v___x_3587_);
v___x_3603_ = lean_array_push(v___x_3602_, v___x_3590_);
v___x_3604_ = lean_array_push(v___x_3603_, v___x_3593_);
v___x_3605_ = lean_array_push(v___x_3604_, v___x_3596_);
v___x_3606_ = l_Lasm_JS_Web_Support_fields(v___x_3605_);
lean_dec_ref(v___x_3605_);
return v___x_3606_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_list(lean_object* v_self_3608_, lean_object* v_input_3609_, lean_object* v_options_3610_){
_start:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3612_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_list___closed__0));
v___x_3613_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0(v_input_3609_);
v___x_3614_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_3610_);
v___x_3615_ = lean_unsigned_to_nat(2u);
v___x_3616_ = lean_mk_empty_array_with_capacity(v___x_3615_);
v___x_3617_ = lean_array_push(v___x_3616_, v___x_3613_);
v___x_3618_ = lean_array_push(v___x_3617_, v___x_3614_);
v___x_3619_ = l_Lasm_JS_Web_Support_args(v___x_3618_);
v___x_3620_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1(v_self_3608_, v___x_3612_, v___x_3619_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_list___boxed(lean_object* v_self_3621_, lean_object* v_input_3622_, lean_object* v_options_3623_, lean_object* v_a_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Lasm_JS_Bun_S3Client_list(v_self_3621_, v_input_3622_, v_options_3623_);
lean_dec(v_options_3623_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0(lean_object* v_b_3626_, lean_object* v_args_3627_){
_start:
{
uint8_t v_construct_3629_; lean_object* v___x_3630_; uint32_t v___x_3631_; uint64_t v___x_3632_; uint64_t v___y_3634_; 
v_construct_3629_ = lean_ctor_get_uint8(v_b_3626_, sizeof(void*)*4);
v___x_3630_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3626_);
v___x_3631_ = 214;
v___x_3632_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_construct_3629_ == 0)
{
uint64_t v___x_3642_; 
v___x_3642_ = 0ULL;
v___y_3634_ = v___x_3642_;
goto v___jp_3633_;
}
else
{
uint64_t v___x_3643_; 
v___x_3643_ = 4ULL;
v___y_3634_ = v___x_3643_;
goto v___jp_3633_;
}
v___jp_3633_:
{
uint64_t v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; 
v___x_3635_ = lean_uint64_lor(v___x_3632_, v___y_3634_);
v___x_3636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3626_, v_args_3627_);
v___x_3637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_3638_ = lean_string_append(v___x_3637_, v___x_3630_);
v___x_3639_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_3640_ = lean_string_append(v___x_3638_, v___x_3639_);
v___x_3641_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(v___x_3630_, v___x_3631_, v___x_3635_, v___x_3636_, v___x_3640_);
return v___x_3641_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0___boxed(lean_object* v_b_3644_, lean_object* v_args_3645_, lean_object* v_a_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0(v_b_3644_, v_args_3645_);
lean_dec_ref(v_b_3644_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticList(lean_object* v_input_3656_, lean_object* v_options_3657_){
_start:
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3659_ = lean_unsigned_to_nat(2u);
v___x_3660_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticList___closed__2));
v___x_3661_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0(v_input_3656_);
v___x_3662_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_3657_);
v___x_3663_ = lean_mk_empty_array_with_capacity(v___x_3659_);
v___x_3664_ = lean_array_push(v___x_3663_, v___x_3661_);
v___x_3665_ = lean_array_push(v___x_3664_, v___x_3662_);
v___x_3666_ = l_Lasm_JS_Web_Support_args(v___x_3665_);
v___x_3667_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0(v___x_3660_, v___x_3666_);
return v___x_3667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticList___boxed(lean_object* v_input_3668_, lean_object* v_options_3669_, lean_object* v_a_3670_){
_start:
{
lean_object* v_res_3671_; 
v_res_3671_ = l_Lasm_JS_Bun_S3Client_staticList(v_input_3668_, v_options_3669_);
lean_dec(v_options_3669_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_s3(){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3681_ = ((lean_object*)(l_Lasm_JS_Bun_s3___closed__3));
v___x_3682_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Bun_password_spec__0(v___x_3681_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
else
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3698_; 
v_a_3691_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3693_ = v___x_3682_;
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3682_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3696_; 
if (v_isShared_3694_ == 0)
{
v___x_3696_ = v___x_3693_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3691_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_s3___boxed(lean_object* v_a_3699_){
_start:
{
lean_object* v_res_3700_; 
v_res_3700_ = l_Lasm_JS_Bun_s3();
return v_res_3700_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_File(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_JS_Bun_Core(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Bun_S3(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_File(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Bun_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType_default = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType_default();
lean_mark_persistent(l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType_default);
l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType();
lean_mark_persistent(l_Lasm_JS_Bun_instInhabitedS3ListObjectsOptionsEncodingType);
l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumAlgorithm_default = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumAlgorithm_default();
l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumAlgorithm = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumAlgorithm();
l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumType_default = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumType_default();
l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumType = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsChecksumType();
l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsStorageClass_default = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsStorageClass_default();
l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsStorageClass = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseContentsStorageClass();
l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType_default = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType_default();
lean_mark_persistent(l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType_default);
l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType = _init_l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType();
lean_mark_persistent(l_Lasm_JS_Bun_instInhabitedS3ListObjectsResponseEncodingType);
l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes = _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseCommonPrefixes);
l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner = _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner);
l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus = _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus);
l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents = _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents);
l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse = _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
