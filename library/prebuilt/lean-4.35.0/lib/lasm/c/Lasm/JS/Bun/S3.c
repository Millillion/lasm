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
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
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
extern lean_object* l_Lasm_JS_instFromJSNat;
extern lean_object* l_Lasm_JS_instFromJSString;
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(lean_object*);
lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_write_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_presign_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_Archive_write_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
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
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6;
static const lean_string_object l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.S3ListObjectsResponse"};
static const lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__8;
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
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Nat)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__1_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__5_value;
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
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Option (Lasm.JS.Bun.S3ListObjectsResponseContentsStorageClass)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__1_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__8_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__14(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*);
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
v___x_1540_ = l_Lasm_JS_instFromJSNat;
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
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = l_Lasm_JS_instFromJSFloat;
v___x_1731_ = l_Lasm_JS_instFromJSOption___redArg(v___x_1730_);
return v___x_1731_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6(void){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___f_1738_; 
v___x_1732_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__5);
v___x_1733_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___closed__0);
v___x_1734_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__4);
v___x_1735_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___closed__0);
v___x_1736_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__3);
v___x_1737_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__1);
v___f_1738_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___boxed), 7, 6);
lean_closure_set(v___f_1738_, 0, v___x_1737_);
lean_closure_set(v___f_1738_, 1, v___x_1736_);
lean_closure_set(v___f_1738_, 2, v___x_1735_);
lean_closure_set(v___f_1738_, 3, v___x_1734_);
lean_closure_set(v___f_1738_, 4, v___x_1733_);
lean_closure_set(v___f_1738_, 5, v___x_1732_);
return v___f_1738_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__8(void){
_start:
{
uint8_t v___x_1740_; lean_object* v___x_1741_; lean_object* v___f_1742_; lean_object* v___x_1743_; 
v___x_1740_ = 0;
v___x_1741_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7));
v___f_1742_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__6);
v___x_1743_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1743_, 0, v___f_1742_);
lean_ctor_set(v___x_1743_, 1, v___x_1741_);
lean_ctor_set_uint8(v___x_1743_, sizeof(void*)*2, v___x_1740_);
return v___x_1743_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse(void){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__8, &l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__8_once, _init_l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__8);
return v___x_1744_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_1749_ = lean_string_utf8_byte_size(v___x_1748_);
return v___x_1749_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1750_ = lean_unsigned_to_nat(0u);
v___x_1751_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__3);
v___x_1752_ = lean_nat_dec_eq(v___x_1751_, v___x_1750_);
return v___x_1752_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1757_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__8));
v___x_1758_ = lean_unsigned_to_nat(46u);
v___x_1759_ = lean_unsigned_to_nat(193u);
v___x_1760_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__7));
v___x_1761_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__6));
v___x_1762_ = l_mkPanicMessageWithDecl(v___x_1761_, v___x_1760_, v___x_1759_, v___x_1758_, v___x_1757_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0(lean_object* v_context_1764_, lean_object* v_d_1765_){
_start:
{
lean_object* v___y_1768_; lean_object* v___y_1769_; 
if (lean_obj_tag(v_d_1765_) == 9)
{
lean_object* v_value_1773_; lean_object* v___x_1774_; 
v_value_1773_ = lean_ctor_get(v_d_1765_, 0);
lean_inc(v_value_1773_);
lean_dec_ref_known(v_d_1765_, 2);
v___x_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_value_1773_);
return v___x_1774_;
}
else
{
lean_object* v___x_1775_; lean_object* v_received_1777_; 
v___x_1775_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
if (lean_obj_tag(v_d_1765_) == 9)
{
lean_object* v_value_1791_; lean_object* v_description_1792_; uint8_t v___x_1793_; 
v_value_1791_ = lean_ctor_get(v_d_1765_, 0);
v_description_1792_ = lean_ctor_get(v_d_1765_, 1);
v___x_1793_ = lean_string_dec_eq(v_description_1792_, v___x_1775_);
if (v___x_1793_ == 0)
{
goto v___jp_1789_;
}
else
{
uint32_t v___x_1794_; uint64_t v___x_1795_; lean_object* v___x_1796_; uint32_t v___x_1797_; lean_object* v___x_1798_; 
lean_inc_n(v_value_1791_, 2);
lean_dec_ref_known(v_d_1765_, 2);
v___x_1794_ = 206;
v___x_1795_ = 0ULL;
v___x_1796_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1796_, 0, v_value_1791_);
lean_ctor_set(v___x_1796_, 1, v___x_1775_);
v___x_1797_ = lasm_js_value_handle(v_value_1791_);
lean_dec(v_value_1791_);
v___x_1798_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1794_, v___x_1795_, v___x_1796_, v___x_1797_);
lean_dec_ref_known(v___x_1796_, 2);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; uint8_t v___x_1800_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1798_, 1);
v___x_1800_ = lean_string_validate_utf8(v_a_1799_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_dec(v_a_1799_);
v___x_1801_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9);
v___x_1802_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1801_);
v_received_1777_ = v___x_1802_;
goto v___jp_1776_;
}
else
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_string_from_utf8_unchecked(v_a_1799_);
v_received_1777_ = v___x_1803_;
goto v___jp_1776_;
}
}
else
{
lean_object* v___x_1804_; 
lean_dec_ref_known(v___x_1798_, 1);
v___x_1804_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__10));
v_received_1777_ = v___x_1804_;
goto v___jp_1776_;
}
}
}
else
{
goto v___jp_1789_;
}
v___jp_1776_:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; uint8_t v___x_1787_; 
v___x_1778_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_1779_ = lean_string_append(v___x_1778_, v_context_1764_);
v___x_1780_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__1));
v___x_1781_ = lean_string_append(v___x_1779_, v___x_1780_);
v___x_1782_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3Client___closed__1));
v___x_1783_ = lean_string_append(v___x_1781_, v___x_1782_);
v___x_1784_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__2));
v___x_1785_ = lean_string_append(v___x_1783_, v___x_1784_);
v___x_1786_ = lean_string_append(v___x_1785_, v_received_1777_);
lean_dec_ref(v_received_1777_);
v___x_1787_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__4);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; 
v___x_1788_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__5));
v___y_1768_ = v___x_1786_;
v___y_1769_ = v___x_1788_;
goto v___jp_1767_;
}
else
{
v___y_1768_ = v___x_1786_;
v___y_1769_ = v___x_1775_;
goto v___jp_1767_;
}
}
v___jp_1789_:
{
lean_object* v___x_1790_; 
v___x_1790_ = l_Lasm_JS_Data_describe(v_d_1765_);
v_received_1777_ = v___x_1790_;
goto v___jp_1776_;
}
}
v___jp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1770_ = lean_string_append(v___y_1768_, v___y_1769_);
v___x_1771_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
v___x_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
return v___x_1772_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___boxed(lean_object* v_context_1805_, lean_object* v_d_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0(v_context_1805_, v_d_1806_);
lean_dec_ref(v_context_1805_);
return v_res_1808_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_1810_; uint64_t v___x_1811_; 
v___x_1810_ = 0;
v___x_1811_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0(lean_object* v_b_1812_, lean_object* v_args_1813_, uint8_t v_await_1814_){
_start:
{
uint64_t v___y_1817_; uint64_t v___y_1818_; uint64_t v___x_1861_; uint64_t v___y_1863_; 
v___x_1861_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_await_1814_ == 0)
{
uint64_t v___x_1868_; 
v___x_1868_ = 0ULL;
v___y_1863_ = v___x_1868_;
goto v___jp_1862_;
}
else
{
uint64_t v___x_1869_; 
v___x_1869_ = 2ULL;
v___y_1863_ = v___x_1869_;
goto v___jp_1862_;
}
v___jp_1816_:
{
uint64_t v_flags_1819_; uint32_t v___x_1820_; lean_object* v___x_1821_; uint32_t v___x_1822_; lean_object* v___x_1823_; 
v_flags_1819_ = lean_uint64_lor(v___y_1817_, v___y_1818_);
v___x_1820_ = 214;
v___x_1821_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1812_, v_args_1813_);
v___x_1822_ = 0;
v___x_1823_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1820_, v_flags_1819_, v___x_1821_, v___x_1822_);
lean_dec(v___x_1821_);
if (lean_obj_tag(v___x_1823_) == 0)
{
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1824_);
lean_dec(v_a_1824_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_a_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v___x_1825_, 1);
v___x_1827_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1812_);
v___x_1828_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0(v___x_1827_, v_a_1826_);
lean_dec_ref(v___x_1827_);
return v___x_1828_;
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
v_a_1829_ = lean_ctor_get(v___x_1825_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1825_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1825_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
v_a_1837_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1839_ = v___x_1823_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1823_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
lean_ctor_set_tag(v___x_1839_, 1);
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1860_; 
v_a_1845_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1847_ = v___x_1823_;
v_isShared_1848_ = v_isSharedCheck_1860_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1823_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1860_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1858_; 
v___x_1849_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_1850_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1812_);
v___x_1851_ = lean_string_append(v___x_1849_, v___x_1850_);
lean_dec_ref(v___x_1850_);
v___x_1852_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_1853_ = lean_string_append(v___x_1851_, v___x_1852_);
v___x_1854_ = lean_io_error_to_string(v_a_1845_);
v___x_1855_ = lean_string_append(v___x_1853_, v___x_1854_);
lean_dec_ref(v___x_1854_);
v___x_1856_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 0, v___x_1856_);
v___x_1858_ = v___x_1847_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1856_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
v___jp_1862_:
{
uint8_t v_construct_1864_; uint64_t v___x_1865_; 
v_construct_1864_ = lean_ctor_get_uint8(v_b_1812_, sizeof(void*)*4);
v___x_1865_ = lean_uint64_lor(v___x_1861_, v___y_1863_);
if (v_construct_1864_ == 0)
{
uint64_t v___x_1866_; 
v___x_1866_ = 0ULL;
v___y_1817_ = v___x_1865_;
v___y_1818_ = v___x_1866_;
goto v___jp_1816_;
}
else
{
uint64_t v___x_1867_; 
v___x_1867_ = 4ULL;
v___y_1817_ = v___x_1865_;
v___y_1818_ = v___x_1867_;
goto v___jp_1816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___boxed(lean_object* v_b_1870_, lean_object* v_args_1871_, lean_object* v_await_1872_, lean_object* v_a_1873_){
_start:
{
uint8_t v_await_boxed_1874_; lean_object* v_res_1875_; 
v_await_boxed_1874_ = lean_unbox(v_await_1872_);
v_res_1875_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0(v_b_1870_, v_args_1871_, v_await_boxed_1874_);
lean_dec_ref(v_b_1870_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_new(lean_object* v_options_1885_){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; uint8_t v___x_1893_; lean_object* v___x_1894_; 
v___x_1887_ = lean_unsigned_to_nat(1u);
v___x_1888_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_new___closed__3));
v___x_1889_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_1885_);
v___x_1890_ = lean_mk_empty_array_with_capacity(v___x_1887_);
v___x_1891_ = lean_array_push(v___x_1890_, v___x_1889_);
v___x_1892_ = l_Lasm_JS_Web_Support_args(v___x_1891_);
v___x_1893_ = 0;
v___x_1894_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0(v___x_1888_, v___x_1892_, v___x_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_new___boxed(lean_object* v_options_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lasm_JS_Bun_S3Client_new(v_options_1895_);
lean_dec(v_options_1895_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_file(lean_object* v_self_1899_, lean_object* v_path_1900_, lean_object* v_options_1901_){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1903_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_file___closed__0));
v___x_1904_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1904_, 0, v_path_1900_);
v___x_1905_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_1901_);
v___x_1906_ = lean_unsigned_to_nat(2u);
v___x_1907_ = lean_mk_empty_array_with_capacity(v___x_1906_);
v___x_1908_ = lean_array_push(v___x_1907_, v___x_1904_);
v___x_1909_ = lean_array_push(v___x_1908_, v___x_1905_);
v___x_1910_ = l_Lasm_JS_Web_Support_args(v___x_1909_);
v___x_1911_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1899_, v___x_1903_, v___x_1910_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1911_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1911_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
v_a_1920_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1911_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1911_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_file___boxed(lean_object* v_self_1928_, lean_object* v_path_1929_, lean_object* v_options_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lasm_JS_Bun_S3Client_file(v_self_1928_, v_path_1929_, v_options_1930_);
lean_dec(v_options_1930_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticFile(lean_object* v_path_1941_, lean_object* v_options_1942_){
_start:
{
uint8_t v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1944_ = 0;
v___x_1945_ = lean_unsigned_to_nat(2u);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticFile___closed__2));
v___x_1947_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1947_, 0, v_path_1941_);
v___x_1948_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_1942_);
v___x_1949_ = lean_mk_empty_array_with_capacity(v___x_1945_);
v___x_1950_ = lean_array_push(v___x_1949_, v___x_1947_);
v___x_1951_ = lean_array_push(v___x_1950_, v___x_1948_);
v___x_1952_ = l_Lasm_JS_Web_Support_args(v___x_1951_);
v___x_1953_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_1946_, v___x_1952_, v___x_1944_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1953_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1953_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
v_a_1962_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1953_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1953_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticFile___boxed(lean_object* v_path_1970_, lean_object* v_options_1971_, lean_object* v_a_1972_){
_start:
{
lean_object* v_res_1973_; 
v_res_1973_ = l_Lasm_JS_Bun_S3Client_staticFile(v_path_1970_, v_options_1971_);
lean_dec(v_options_1971_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_write(lean_object* v_self_1975_, lean_object* v_path_1976_, lean_object* v_data_1977_, lean_object* v_options_1978_){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___y_1983_; 
v___x_1980_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_write___closed__0));
v___x_1981_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1981_, 0, v_path_1976_);
switch(lean_obj_tag(v_data_1977_))
{
case 0:
{
lean_object* v_value_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
v_value_1992_ = lean_ctor_get(v_data_1977_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v_data_1977_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v_data_1977_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_value_1992_);
lean_dec(v_data_1977_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set_tag(v___x_1994_, 4);
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_value_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
v___y_1983_ = v___x_1997_;
goto v___jp_1982_;
}
}
}
case 1:
{
lean_object* v_value_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
v_value_2000_ = lean_ctor_get(v_data_1977_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v_data_1977_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v_data_1977_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_value_2000_);
lean_dec(v_data_1977_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
lean_ctor_set_tag(v___x_2002_, 6);
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_value_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
v___y_1983_ = v___x_2005_;
goto v___jp_1982_;
}
}
}
case 2:
{
lean_object* v_value_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
v_value_2008_ = lean_ctor_get(v_data_1977_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_data_1977_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v_data_1977_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_value_2008_);
lean_dec(v_data_1977_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set_tag(v___x_2010_, 6);
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_value_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
v___y_1983_ = v___x_2013_;
goto v___jp_1982_;
}
}
}
default: 
{
lean_object* v_value_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v_value_2016_ = lean_ctor_get(v_data_1977_, 0);
lean_inc(v_value_2016_);
lean_dec_ref(v_data_1977_);
v___x_2017_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_2018_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2018_, 0, v_value_2016_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___y_1983_ = v___x_2018_;
goto v___jp_1982_;
}
}
v___jp_1982_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1984_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_1978_);
v___x_1985_ = lean_unsigned_to_nat(3u);
v___x_1986_ = lean_mk_empty_array_with_capacity(v___x_1985_);
v___x_1987_ = lean_array_push(v___x_1986_, v___x_1981_);
v___x_1988_ = lean_array_push(v___x_1987_, v___y_1983_);
v___x_1989_ = lean_array_push(v___x_1988_, v___x_1984_);
v___x_1990_ = l_Lasm_JS_Web_Support_args(v___x_1989_);
v___x_1991_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_FileSink_write_spec__0(v_self_1975_, v___x_1980_, v___x_1990_);
return v___x_1991_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_write___boxed(lean_object* v_self_2019_, lean_object* v_path_2020_, lean_object* v_data_2021_, lean_object* v_options_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Lasm_JS_Bun_S3Client_write(v_self_2019_, v_path_2020_, v_data_2021_, v_options_2022_);
lean_dec(v_options_2022_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticWrite(lean_object* v_path_2033_, lean_object* v_data_2034_, lean_object* v_options_2035_){
_start:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___y_2041_; 
v___x_2037_ = lean_unsigned_to_nat(3u);
v___x_2038_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticWrite___closed__2));
v___x_2039_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2039_, 0, v_path_2033_);
switch(lean_obj_tag(v_data_2034_))
{
case 0:
{
lean_object* v_value_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
v_value_2049_ = lean_ctor_get(v_data_2034_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v_data_2034_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v_data_2034_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_value_2049_);
lean_dec(v_data_2034_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
lean_ctor_set_tag(v___x_2051_, 4);
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_value_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
v___y_2041_ = v___x_2054_;
goto v___jp_2040_;
}
}
}
case 1:
{
lean_object* v_value_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2064_; 
v_value_2057_ = lean_ctor_get(v_data_2034_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_data_2034_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2059_ = v_data_2034_;
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_value_2057_);
lean_dec(v_data_2034_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2062_; 
if (v_isShared_2060_ == 0)
{
lean_ctor_set_tag(v___x_2059_, 6);
v___x_2062_ = v___x_2059_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_value_2057_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
v___y_2041_ = v___x_2062_;
goto v___jp_2040_;
}
}
}
case 2:
{
lean_object* v_value_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
v_value_2065_ = lean_ctor_get(v_data_2034_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v_data_2034_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v_data_2034_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_value_2065_);
lean_dec(v_data_2034_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
lean_ctor_set_tag(v___x_2067_, 6);
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_value_2065_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
v___y_2041_ = v___x_2070_;
goto v___jp_2040_;
}
}
}
default: 
{
lean_object* v_value_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v_value_2073_ = lean_ctor_get(v_data_2034_, 0);
lean_inc(v_value_2073_);
lean_dec_ref(v_data_2034_);
v___x_2074_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_2075_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2075_, 0, v_value_2073_);
lean_ctor_set(v___x_2075_, 1, v___x_2074_);
v___y_2041_ = v___x_2075_;
goto v___jp_2040_;
}
}
v___jp_2040_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2042_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2035_);
v___x_2043_ = lean_mk_empty_array_with_capacity(v___x_2037_);
v___x_2044_ = lean_array_push(v___x_2043_, v___x_2039_);
v___x_2045_ = lean_array_push(v___x_2044_, v___y_2041_);
v___x_2046_ = lean_array_push(v___x_2045_, v___x_2042_);
v___x_2047_ = l_Lasm_JS_Web_Support_args(v___x_2046_);
v___x_2048_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_write_spec__1(v___x_2038_, v___x_2047_);
return v___x_2048_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticWrite___boxed(lean_object* v_path_2076_, lean_object* v_data_2077_, lean_object* v_options_2078_, lean_object* v_a_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_Lasm_JS_Bun_S3Client_staticWrite(v_path_2076_, v_data_2077_, v_options_2078_);
lean_dec(v_options_2078_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_presign(lean_object* v_self_2082_, lean_object* v_path_2083_, lean_object* v_options_2084_){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2086_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_presign___closed__0));
v___x_2087_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2087_, 0, v_path_2083_);
v___x_2088_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_presign_spec__0(v_options_2084_);
v___x_2089_ = lean_unsigned_to_nat(2u);
v___x_2090_ = lean_mk_empty_array_with_capacity(v___x_2089_);
v___x_2091_ = lean_array_push(v___x_2090_, v___x_2087_);
v___x_2092_ = lean_array_push(v___x_2091_, v___x_2088_);
v___x_2093_ = l_Lasm_JS_Web_Support_args(v___x_2092_);
v___x_2094_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_2082_, v___x_2086_, v___x_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_presign___boxed(lean_object* v_self_2095_, lean_object* v_path_2096_, lean_object* v_options_2097_, lean_object* v_a_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Lasm_JS_Bun_S3Client_presign(v_self_2095_, v_path_2096_, v_options_2097_);
lean_dec(v_options_2097_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticPresign(lean_object* v_path_2108_, lean_object* v_options_2109_){
_start:
{
uint8_t v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2111_ = 0;
v___x_2112_ = lean_unsigned_to_nat(2u);
v___x_2113_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticPresign___closed__2));
v___x_2114_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2114_, 0, v_path_2108_);
v___x_2115_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_presign_spec__0(v_options_2109_);
v___x_2116_ = lean_mk_empty_array_with_capacity(v___x_2112_);
v___x_2117_ = lean_array_push(v___x_2116_, v___x_2114_);
v___x_2118_ = lean_array_push(v___x_2117_, v___x_2115_);
v___x_2119_ = l_Lasm_JS_Web_Support_args(v___x_2118_);
v___x_2120_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_URL_createObjectURL_spec__0(v___x_2113_, v___x_2119_, v___x_2111_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticPresign___boxed(lean_object* v_path_2121_, lean_object* v_options_2122_, lean_object* v_a_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Lasm_JS_Bun_S3Client_staticPresign(v_path_2121_, v_options_2122_);
lean_dec(v_options_2122_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_unlink(lean_object* v_self_2126_, lean_object* v_path_2127_, lean_object* v_options_2128_){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2130_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_unlink___closed__0));
v___x_2131_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2131_, 0, v_path_2127_);
v___x_2132_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2128_);
v___x_2133_ = lean_unsigned_to_nat(2u);
v___x_2134_ = lean_mk_empty_array_with_capacity(v___x_2133_);
v___x_2135_ = lean_array_push(v___x_2134_, v___x_2131_);
v___x_2136_ = lean_array_push(v___x_2135_, v___x_2132_);
v___x_2137_ = l_Lasm_JS_Web_Support_args(v___x_2136_);
v___x_2138_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2126_, v___x_2130_, v___x_2137_);
return v___x_2138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_unlink___boxed(lean_object* v_self_2139_, lean_object* v_path_2140_, lean_object* v_options_2141_, lean_object* v_a_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l_Lasm_JS_Bun_S3Client_unlink(v_self_2139_, v_path_2140_, v_options_2141_);
lean_dec(v_options_2141_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink(lean_object* v_path_2152_, lean_object* v_options_2153_){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2155_ = lean_unsigned_to_nat(2u);
v___x_2156_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticUnlink___closed__2));
v___x_2157_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2157_, 0, v_path_2152_);
v___x_2158_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2153_);
v___x_2159_ = lean_mk_empty_array_with_capacity(v___x_2155_);
v___x_2160_ = lean_array_push(v___x_2159_, v___x_2157_);
v___x_2161_ = lean_array_push(v___x_2160_, v___x_2158_);
v___x_2162_ = l_Lasm_JS_Web_Support_args(v___x_2161_);
v___x_2163_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_Archive_write_spec__0(v___x_2156_, v___x_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticUnlink___boxed(lean_object* v_path_2164_, lean_object* v_options_2165_, lean_object* v_a_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Lasm_JS_Bun_S3Client_staticUnlink(v_path_2164_, v_options_2165_);
lean_dec(v_options_2165_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_delete(lean_object* v_self_2169_, lean_object* v_path_2170_, lean_object* v_options_2171_){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2173_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_delete___closed__0));
v___x_2174_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_path_2170_);
v___x_2175_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2171_);
v___x_2176_ = lean_unsigned_to_nat(2u);
v___x_2177_ = lean_mk_empty_array_with_capacity(v___x_2176_);
v___x_2178_ = lean_array_push(v___x_2177_, v___x_2174_);
v___x_2179_ = lean_array_push(v___x_2178_, v___x_2175_);
v___x_2180_ = l_Lasm_JS_Web_Support_args(v___x_2179_);
v___x_2181_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2169_, v___x_2173_, v___x_2180_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_delete___boxed(lean_object* v_self_2182_, lean_object* v_path_2183_, lean_object* v_options_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Lasm_JS_Bun_S3Client_delete(v_self_2182_, v_path_2183_, v_options_2184_);
lean_dec(v_options_2184_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticDelete(lean_object* v_path_2195_, lean_object* v_options_2196_){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
v___x_2198_ = lean_unsigned_to_nat(2u);
v___x_2199_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticDelete___closed__2));
v___x_2200_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_path_2195_);
v___x_2201_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2196_);
v___x_2202_ = lean_mk_empty_array_with_capacity(v___x_2198_);
v___x_2203_ = lean_array_push(v___x_2202_, v___x_2200_);
v___x_2204_ = lean_array_push(v___x_2203_, v___x_2201_);
v___x_2205_ = l_Lasm_JS_Web_Support_args(v___x_2204_);
v___x_2206_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_Archive_write_spec__0(v___x_2199_, v___x_2205_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticDelete___boxed(lean_object* v_path_2207_, lean_object* v_options_2208_, lean_object* v_a_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l_Lasm_JS_Bun_S3Client_staticDelete(v_path_2207_, v_options_2208_);
lean_dec(v_options_2208_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_size(lean_object* v_self_2211_, lean_object* v_path_2212_, lean_object* v_options_2213_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2215_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__7));
v___x_2216_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2216_, 0, v_path_2212_);
v___x_2217_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2213_);
v___x_2218_ = lean_unsigned_to_nat(2u);
v___x_2219_ = lean_mk_empty_array_with_capacity(v___x_2218_);
v___x_2220_ = lean_array_push(v___x_2219_, v___x_2216_);
v___x_2221_ = lean_array_push(v___x_2220_, v___x_2217_);
v___x_2222_ = l_Lasm_JS_Web_Support_args(v___x_2221_);
v___x_2223_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_FileSink_write_spec__0(v_self_2211_, v___x_2215_, v___x_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_size___boxed(lean_object* v_self_2224_, lean_object* v_path_2225_, lean_object* v_options_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lasm_JS_Bun_S3Client_size(v_self_2224_, v_path_2225_, v_options_2226_);
lean_dec(v_options_2226_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticSize(lean_object* v_path_2237_, lean_object* v_options_2238_){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2240_ = lean_unsigned_to_nat(2u);
v___x_2241_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticSize___closed__2));
v___x_2242_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2242_, 0, v_path_2237_);
v___x_2243_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2238_);
v___x_2244_ = lean_mk_empty_array_with_capacity(v___x_2240_);
v___x_2245_ = lean_array_push(v___x_2244_, v___x_2242_);
v___x_2246_ = lean_array_push(v___x_2245_, v___x_2243_);
v___x_2247_ = l_Lasm_JS_Web_Support_args(v___x_2246_);
v___x_2248_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_write_spec__1(v___x_2241_, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticSize___boxed(lean_object* v_path_2249_, lean_object* v_options_2250_, lean_object* v_a_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lasm_JS_Bun_S3Client_staticSize(v_path_2249_, v_options_2250_);
lean_dec(v_options_2250_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_exists(lean_object* v_self_2254_, lean_object* v_path_2255_, lean_object* v_options_2256_){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2258_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_exists___closed__0));
v___x_2259_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2259_, 0, v_path_2255_);
v___x_2260_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2256_);
v___x_2261_ = lean_unsigned_to_nat(2u);
v___x_2262_ = lean_mk_empty_array_with_capacity(v___x_2261_);
v___x_2263_ = lean_array_push(v___x_2262_, v___x_2259_);
v___x_2264_ = lean_array_push(v___x_2263_, v___x_2260_);
v___x_2265_ = l_Lasm_JS_Web_Support_args(v___x_2264_);
v___x_2266_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_BunFile_exists_spec__0(v_self_2254_, v___x_2258_, v___x_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_exists___boxed(lean_object* v_self_2267_, lean_object* v_path_2268_, lean_object* v_options_2269_, lean_object* v_a_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_Lasm_JS_Bun_S3Client_exists(v_self_2267_, v_path_2268_, v_options_2269_);
lean_dec(v_options_2269_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0(lean_object* v_b_2272_, lean_object* v_args_2273_){
_start:
{
uint8_t v_construct_2275_; lean_object* v___x_2276_; uint32_t v___x_2277_; uint64_t v___x_2278_; uint64_t v___y_2280_; 
v_construct_2275_ = lean_ctor_get_uint8(v_b_2272_, sizeof(void*)*4);
v___x_2276_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2272_);
v___x_2277_ = 214;
v___x_2278_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_construct_2275_ == 0)
{
uint64_t v___x_2288_; 
v___x_2288_ = 0ULL;
v___y_2280_ = v___x_2288_;
goto v___jp_2279_;
}
else
{
uint64_t v___x_2289_; 
v___x_2289_ = 4ULL;
v___y_2280_ = v___x_2289_;
goto v___jp_2279_;
}
v___jp_2279_:
{
uint64_t v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2281_ = lean_uint64_lor(v___x_2278_, v___y_2280_);
v___x_2282_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2272_, v_args_2273_);
v___x_2283_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_2284_ = lean_string_append(v___x_2283_, v___x_2276_);
v___x_2285_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_2286_ = lean_string_append(v___x_2284_, v___x_2285_);
v___x_2287_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_BunFile_exists_spec__0_spec__0(v___x_2276_, v___x_2277_, v___x_2281_, v___x_2282_, v___x_2286_);
return v___x_2287_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0___boxed(lean_object* v_b_2290_, lean_object* v_args_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0(v_b_2290_, v_args_2291_);
lean_dec_ref(v_b_2290_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticExists(lean_object* v_path_2302_, lean_object* v_options_2303_){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2305_ = lean_unsigned_to_nat(2u);
v___x_2306_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticExists___closed__2));
v___x_2307_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2307_, 0, v_path_2302_);
v___x_2308_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2303_);
v___x_2309_ = lean_mk_empty_array_with_capacity(v___x_2305_);
v___x_2310_ = lean_array_push(v___x_2309_, v___x_2307_);
v___x_2311_ = lean_array_push(v___x_2310_, v___x_2308_);
v___x_2312_ = l_Lasm_JS_Web_Support_args(v___x_2311_);
v___x_2313_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticExists_spec__0(v___x_2306_, v___x_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticExists___boxed(lean_object* v_path_2314_, lean_object* v_options_2315_, lean_object* v_a_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lasm_JS_Bun_S3Client_staticExists(v_path_2314_, v_options_2315_);
lean_dec(v_options_2315_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_stat(lean_object* v_self_2319_, lean_object* v_path_2320_, lean_object* v_options_2321_){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2323_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_stat___closed__0));
v___x_2324_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2324_, 0, v_path_2320_);
v___x_2325_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2321_);
v___x_2326_ = lean_unsigned_to_nat(2u);
v___x_2327_ = lean_mk_empty_array_with_capacity(v___x_2326_);
v___x_2328_ = lean_array_push(v___x_2327_, v___x_2324_);
v___x_2329_ = lean_array_push(v___x_2328_, v___x_2325_);
v___x_2330_ = l_Lasm_JS_Web_Support_args(v___x_2329_);
v___x_2331_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0(v_self_2319_, v___x_2323_, v___x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_stat___boxed(lean_object* v_self_2332_, lean_object* v_path_2333_, lean_object* v_options_2334_, lean_object* v_a_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_Lasm_JS_Bun_S3Client_stat(v_self_2332_, v_path_2333_, v_options_2334_);
lean_dec(v_options_2334_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0(lean_object* v_b_2337_, lean_object* v_args_2338_){
_start:
{
uint8_t v_construct_2340_; lean_object* v___x_2341_; uint32_t v___x_2342_; uint64_t v___x_2343_; uint64_t v___y_2345_; 
v_construct_2340_ = lean_ctor_get_uint8(v_b_2337_, sizeof(void*)*4);
v___x_2341_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2337_);
v___x_2342_ = 214;
v___x_2343_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_construct_2340_ == 0)
{
uint64_t v___x_2353_; 
v___x_2353_ = 0ULL;
v___y_2345_ = v___x_2353_;
goto v___jp_2344_;
}
else
{
uint64_t v___x_2354_; 
v___x_2354_ = 4ULL;
v___y_2345_ = v___x_2354_;
goto v___jp_2344_;
}
v___jp_2344_:
{
uint64_t v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2346_ = lean_uint64_lor(v___x_2343_, v___y_2345_);
v___x_2347_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2337_, v_args_2338_);
v___x_2348_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_2349_ = lean_string_append(v___x_2348_, v___x_2341_);
v___x_2350_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_2351_ = lean_string_append(v___x_2349_, v___x_2350_);
v___x_2352_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0_spec__1(v___x_2341_, v___x_2342_, v___x_2346_, v___x_2347_, v___x_2351_);
return v___x_2352_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0___boxed(lean_object* v_b_2355_, lean_object* v_args_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0(v_b_2355_, v_args_2356_);
lean_dec_ref(v_b_2355_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticStat(lean_object* v_path_2367_, lean_object* v_options_2368_){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2370_ = lean_unsigned_to_nat(2u);
v___x_2371_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticStat___closed__2));
v___x_2372_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2372_, 0, v_path_2367_);
v___x_2373_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_2368_);
v___x_2374_ = lean_mk_empty_array_with_capacity(v___x_2370_);
v___x_2375_ = lean_array_push(v___x_2374_, v___x_2372_);
v___x_2376_ = lean_array_push(v___x_2375_, v___x_2373_);
v___x_2377_ = l_Lasm_JS_Web_Support_args(v___x_2376_);
v___x_2378_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticStat_spec__0(v___x_2371_, v___x_2377_);
return v___x_2378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticStat___boxed(lean_object* v_path_2379_, lean_object* v_options_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l_Lasm_JS_Bun_S3Client_staticStat(v_path_2379_, v_options_2380_);
lean_dec(v_options_2380_);
return v_res_2382_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2(uint8_t v_await_2383_, uint64_t v_extra_2384_){
_start:
{
uint64_t v___x_2385_; uint64_t v___y_2387_; 
v___x_2385_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_await_2383_ == 0)
{
uint64_t v___x_2390_; 
v___x_2390_ = 0ULL;
v___y_2387_ = v___x_2390_;
goto v___jp_2386_;
}
else
{
uint64_t v___x_2391_; 
v___x_2391_ = 2ULL;
v___y_2387_ = v___x_2391_;
goto v___jp_2386_;
}
v___jp_2386_:
{
uint64_t v___x_2388_; uint64_t v___x_2389_; 
v___x_2388_ = lean_uint64_lor(v___x_2385_, v___y_2387_);
v___x_2389_ = lean_uint64_lor(v___x_2388_, v_extra_2384_);
return v___x_2389_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2___boxed(lean_object* v_await_2392_, lean_object* v_extra_2393_){
_start:
{
uint8_t v_await_boxed_2394_; uint64_t v_extra_boxed_2395_; uint64_t v_res_2396_; lean_object* v_r_2397_; 
v_await_boxed_2394_ = lean_unbox(v_await_2392_);
v_extra_boxed_2395_ = lean_unbox_uint64(v_extra_2393_);
lean_dec_ref(v_extra_2393_);
v_res_2396_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2(v_await_boxed_2394_, v_extra_boxed_2395_);
v_r_2397_ = lean_box_uint64(v_res_2396_);
return v_r_2397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6(size_t v_sz_2398_, size_t v_i_2399_, lean_object* v_bs_2400_){
_start:
{
uint8_t v___x_2401_; 
v___x_2401_ = lean_usize_dec_lt(v_i_2399_, v_sz_2398_);
if (v___x_2401_ == 0)
{
lean_object* v___x_2402_; 
v___x_2402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2402_, 0, v_bs_2400_);
return v___x_2402_;
}
else
{
lean_object* v_v_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v_v_2403_ = lean_array_uget_borrowed(v_bs_2400_, v_i_2399_);
v___x_2404_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
lean_inc(v_v_2403_);
v___x_2405_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_MarkdownRenderCallbacksLink_ofFn_spec__0_spec__0_spec__1(v_v_2403_, v___x_2404_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2413_; 
lean_dec_ref(v_bs_2400_);
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2408_ = v___x_2405_;
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2405_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2406_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2415_; lean_object* v_bs_x27_2416_; size_t v___x_2417_; size_t v___x_2418_; lean_object* v___x_2419_; 
v_a_2414_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2414_);
lean_dec_ref_known(v___x_2405_, 1);
v___x_2415_ = lean_unsigned_to_nat(0u);
v_bs_x27_2416_ = lean_array_uset(v_bs_2400_, v_i_2399_, v___x_2415_);
v___x_2417_ = ((size_t)1ULL);
v___x_2418_ = lean_usize_add(v_i_2399_, v___x_2417_);
v___x_2419_ = lean_array_uset(v_bs_x27_2416_, v_i_2399_, v_a_2414_);
v_i_2399_ = v___x_2418_;
v_bs_2400_ = v___x_2419_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6___boxed(lean_object* v_sz_2421_, lean_object* v_i_2422_, lean_object* v_bs_2423_){
_start:
{
size_t v_sz_boxed_2424_; size_t v_i_boxed_2425_; lean_object* v_res_2426_; 
v_sz_boxed_2424_ = lean_unbox_usize(v_sz_2421_);
lean_dec(v_sz_2421_);
v_i_boxed_2425_ = lean_unbox_usize(v_i_2422_);
lean_dec(v_i_2422_);
v_res_2426_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6(v_sz_boxed_2424_, v_i_boxed_2425_, v_bs_2423_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5(lean_object* v_d_2439_, lean_object* v_key_2440_){
_start:
{
if (lean_obj_tag(v_d_2439_) == 8)
{
lean_object* v___x_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2496_; 
v___x_2443_ = l_Lasm_JS_Data_field(v_d_2439_, v_key_2440_);
v_isSharedCheck_2496_ = !lean_is_exclusive(v_d_2439_);
if (v_isSharedCheck_2496_ == 0)
{
lean_object* v_unused_2497_; 
v_unused_2497_ = lean_ctor_get(v_d_2439_, 0);
lean_dec(v_unused_2497_);
v___x_2445_ = v_d_2439_;
v_isShared_2446_ = v_isSharedCheck_2496_;
goto v_resetjp_2444_;
}
else
{
lean_dec(v_d_2439_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2496_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v_a_2448_; 
switch(lean_obj_tag(v___x_2443_))
{
case 1:
{
lean_del_object(v___x_2445_);
goto v___jp_2441_;
}
case 0:
{
lean_del_object(v___x_2445_);
goto v___jp_2441_;
}
default: 
{
if (lean_obj_tag(v___x_2443_) == 7)
{
lean_object* v_items_2473_; size_t v_sz_2474_; size_t v___x_2475_; lean_object* v___x_2476_; 
v_items_2473_ = lean_ctor_get(v___x_2443_, 0);
lean_inc_ref(v_items_2473_);
v_sz_2474_ = lean_array_size(v_items_2473_);
v___x_2475_ = ((size_t)0ULL);
v___x_2476_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5_spec__6(v_sz_2474_, v___x_2475_, v_items_2473_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v_a_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; 
v_a_2477_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_a_2477_);
lean_dec_ref_known(v___x_2476_, 1);
v___x_2478_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__7));
v___x_2479_ = lean_string_utf8_byte_size(v_a_2477_);
v___x_2480_ = lean_unsigned_to_nat(0u);
v___x_2481_ = lean_nat_dec_eq(v___x_2479_, v___x_2480_);
if (v___x_2481_ == 0)
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2482_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_2483_ = lean_string_append(v___x_2482_, v_a_2477_);
lean_dec(v_a_2477_);
v___x_2484_ = lean_string_append(v___x_2478_, v___x_2483_);
lean_dec_ref(v___x_2483_);
v_a_2448_ = v___x_2484_;
goto v___jp_2447_;
}
else
{
lean_dec(v_a_2477_);
v_a_2448_ = v___x_2478_;
goto v___jp_2447_;
}
}
else
{
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v_a_2485_; 
v_a_2485_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_a_2485_);
lean_dec_ref_known(v___x_2476_, 1);
v_a_2448_ = v_a_2485_;
goto v___jp_2447_;
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2494_; 
lean_dec_ref_known(v___x_2443_, 1);
lean_del_object(v___x_2445_);
v_a_2486_ = lean_ctor_get(v___x_2476_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2488_ = v___x_2476_;
v_isShared_2489_ = v_isSharedCheck_2494_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2476_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2494_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
v___x_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2490_, 0, v_a_2486_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 0, v___x_2490_);
v___x_2492_ = v___x_2488_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v___x_2490_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
}
else
{
lean_object* v___x_2495_; 
v___x_2495_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v_a_2448_ = v___x_2495_;
goto v___jp_2447_;
}
}
}
v___jp_2447_:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; 
v___x_2449_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2450_ = lean_string_append(v___x_2449_, v_key_2440_);
v___x_2451_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2452_ = lean_string_append(v___x_2450_, v___x_2451_);
v___x_2453_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__3));
v___x_2454_ = lean_string_append(v___x_2452_, v___x_2453_);
v___x_2455_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2456_ = lean_string_append(v___x_2454_, v___x_2455_);
v___x_2457_ = l_Lasm_JS_Data_describe(v___x_2443_);
v___x_2458_ = lean_string_append(v___x_2456_, v___x_2457_);
lean_dec_ref(v___x_2457_);
v___x_2459_ = lean_string_utf8_byte_size(v_a_2448_);
v___x_2460_ = lean_unsigned_to_nat(0u);
v___x_2461_ = lean_nat_dec_eq(v___x_2459_, v___x_2460_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2468_; 
v___x_2462_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_2463_ = lean_string_append(v___x_2462_, v_a_2448_);
lean_dec_ref(v_a_2448_);
v___x_2464_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_2465_ = lean_string_append(v___x_2463_, v___x_2464_);
v___x_2466_ = lean_string_append(v___x_2458_, v___x_2465_);
lean_dec_ref(v___x_2465_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set_tag(v___x_2445_, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2466_);
v___x_2468_ = v___x_2445_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
else
{
lean_object* v___x_2471_; 
lean_dec_ref(v_a_2448_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set_tag(v___x_2445_, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2458_);
v___x_2471_ = v___x_2445_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v___x_2458_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
}
else
{
lean_object* v___x_2498_; 
lean_dec(v_d_2439_);
v___x_2498_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__9));
return v___x_2498_;
}
v___jp_2441_:
{
lean_object* v___x_2442_; 
v___x_2442_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__0));
return v___x_2442_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___boxed(lean_object* v_d_2499_, lean_object* v_key_2500_){
_start:
{
lean_object* v_res_2501_; 
v_res_2501_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5(v_d_2499_, v_key_2500_);
lean_dec_ref(v_key_2500_);
return v_res_2501_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsOptionsEncodingType___lam__0___closed__0));
v___x_2506_ = lean_string_utf8_byte_size(v___x_2505_);
return v___x_2506_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3(void){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; uint8_t v___x_2509_; 
v___x_2507_ = lean_unsigned_to_nat(0u);
v___x_2508_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__2);
v___x_2509_ = lean_nat_dec_eq(v___x_2508_, v___x_2507_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7(lean_object* v_d_2517_, lean_object* v_key_2518_){
_start:
{
if (lean_obj_tag(v_d_2517_) == 8)
{
lean_object* v___x_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2549_; 
v___x_2521_ = l_Lasm_JS_Data_field(v_d_2517_, v_key_2518_);
v_isSharedCheck_2549_ = !lean_is_exclusive(v_d_2517_);
if (v_isSharedCheck_2549_ == 0)
{
lean_object* v_unused_2550_; 
v_unused_2550_ = lean_ctor_get(v_d_2517_, 0);
lean_dec(v_unused_2550_);
v___x_2523_ = v_d_2517_;
v_isShared_2524_ = v_isSharedCheck_2549_;
goto v_resetjp_2522_;
}
else
{
lean_dec(v_d_2517_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2549_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
switch(lean_obj_tag(v___x_2521_))
{
case 1:
{
lean_del_object(v___x_2523_);
goto v___jp_2519_;
}
case 0:
{
lean_del_object(v___x_2523_);
goto v___jp_2519_;
}
default: 
{
if (lean_obj_tag(v___x_2521_) == 4)
{
lean_object* v_s_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; 
v_s_2545_ = lean_ctor_get(v___x_2521_, 0);
lean_inc_ref(v_s_2545_);
v___x_2546_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__0));
v___x_2547_ = lean_string_dec_eq(v_s_2545_, v___x_2546_);
lean_dec_ref(v_s_2545_);
if (v___x_2547_ == 0)
{
goto v___jp_2525_;
}
else
{
lean_object* v___x_2548_; 
lean_dec_ref_known(v___x_2521_, 1);
lean_del_object(v___x_2523_);
v___x_2548_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__6));
return v___x_2548_;
}
}
else
{
goto v___jp_2525_;
}
}
}
v___jp_2525_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; uint8_t v___x_2536_; 
v___x_2526_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2527_ = lean_string_append(v___x_2526_, v_key_2518_);
v___x_2528_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2529_ = lean_string_append(v___x_2527_, v___x_2528_);
v___x_2530_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__1));
v___x_2531_ = lean_string_append(v___x_2529_, v___x_2530_);
v___x_2532_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2533_ = lean_string_append(v___x_2531_, v___x_2532_);
v___x_2534_ = l_Lasm_JS_Data_describe(v___x_2521_);
v___x_2535_ = lean_string_append(v___x_2533_, v___x_2534_);
lean_dec_ref(v___x_2534_);
v___x_2536_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v___x_2536_ == 0)
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2540_; 
v___x_2537_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4));
v___x_2538_ = lean_string_append(v___x_2535_, v___x_2537_);
if (v_isShared_2524_ == 0)
{
lean_ctor_set_tag(v___x_2523_, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2538_);
v___x_2540_ = v___x_2523_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v___x_2538_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
else
{
lean_object* v___x_2543_; 
if (v_isShared_2524_ == 0)
{
lean_ctor_set_tag(v___x_2523_, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2535_);
v___x_2543_ = v___x_2523_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v___x_2535_);
v___x_2543_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
return v___x_2543_;
}
}
}
}
}
else
{
lean_object* v___x_2551_; 
lean_dec(v_d_2517_);
v___x_2551_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__7));
return v___x_2551_;
}
v___jp_2519_:
{
lean_object* v___x_2520_; 
v___x_2520_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__0));
return v___x_2520_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___boxed(lean_object* v_d_2552_, lean_object* v_key_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7(v_d_2552_, v_key_2553_);
lean_dec_ref(v_key_2553_);
return v_res_2554_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2(void){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = lean_unsigned_to_nat(0u);
v___x_2559_ = lean_nat_to_int(v___x_2558_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12(lean_object* v_d_2564_, lean_object* v_key_2565_){
_start:
{
if (lean_obj_tag(v_d_2564_) == 8)
{
lean_object* v___x_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2612_; 
v___x_2568_ = l_Lasm_JS_Data_field(v_d_2564_, v_key_2565_);
v_isSharedCheck_2612_ = !lean_is_exclusive(v_d_2564_);
if (v_isSharedCheck_2612_ == 0)
{
lean_object* v_unused_2613_; 
v_unused_2613_ = lean_ctor_get(v_d_2564_, 0);
lean_dec(v_unused_2613_);
v___x_2570_ = v_d_2564_;
v_isShared_2571_ = v_isSharedCheck_2612_;
goto v_resetjp_2569_;
}
else
{
lean_dec(v_d_2564_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2612_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v_a_2573_; lean_object* v_a_2599_; 
switch(lean_obj_tag(v___x_2568_))
{
case 1:
{
lean_del_object(v___x_2570_);
goto v___jp_2566_;
}
case 0:
{
lean_del_object(v___x_2570_);
goto v___jp_2566_;
}
default: 
{
switch(lean_obj_tag(v___x_2568_))
{
case 3:
{
double v_n_2606_; lean_object* v___x_2607_; 
v_n_2606_ = lean_ctor_get_float(v___x_2568_, 0);
v___x_2607_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2606_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v___x_2608_; 
v___x_2608_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__4));
v_a_2573_ = v___x_2608_;
goto v___jp_2572_;
}
else
{
lean_object* v_val_2609_; 
v_val_2609_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_val_2609_);
lean_dec_ref_known(v___x_2607_, 1);
v_a_2599_ = v_val_2609_;
goto v___jp_2598_;
}
}
case 5:
{
lean_object* v_i_2610_; 
v_i_2610_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_i_2610_);
v_a_2599_ = v_i_2610_;
goto v___jp_2598_;
}
default: 
{
lean_object* v___x_2611_; 
v___x_2611_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v_a_2573_ = v___x_2611_;
goto v___jp_2572_;
}
}
}
}
v___jp_2572_:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; 
v___x_2574_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2575_ = lean_string_append(v___x_2574_, v_key_2565_);
v___x_2576_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2577_ = lean_string_append(v___x_2575_, v___x_2576_);
v___x_2578_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__1));
v___x_2579_ = lean_string_append(v___x_2577_, v___x_2578_);
v___x_2580_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2581_ = lean_string_append(v___x_2579_, v___x_2580_);
v___x_2582_ = l_Lasm_JS_Data_describe(v___x_2568_);
v___x_2583_ = lean_string_append(v___x_2581_, v___x_2582_);
lean_dec_ref(v___x_2582_);
v___x_2584_ = lean_string_utf8_byte_size(v_a_2573_);
v___x_2585_ = lean_unsigned_to_nat(0u);
v___x_2586_ = lean_nat_dec_eq(v___x_2584_, v___x_2585_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2593_; 
v___x_2587_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_2588_ = lean_string_append(v___x_2587_, v_a_2573_);
v___x_2589_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_2590_ = lean_string_append(v___x_2588_, v___x_2589_);
v___x_2591_ = lean_string_append(v___x_2583_, v___x_2590_);
lean_dec_ref(v___x_2590_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set_tag(v___x_2570_, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2591_);
v___x_2593_ = v___x_2570_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2591_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
else
{
lean_object* v___x_2596_; 
if (v_isShared_2571_ == 0)
{
lean_ctor_set_tag(v___x_2570_, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2583_);
v___x_2596_ = v___x_2570_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2583_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
v___jp_2598_:
{
lean_object* v___x_2600_; uint8_t v___x_2601_; 
v___x_2600_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2, &l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__2);
v___x_2601_ = lean_int_dec_le(v___x_2600_, v_a_2599_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; 
lean_dec(v_a_2599_);
v___x_2602_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__3));
v_a_2573_ = v___x_2602_;
goto v___jp_2572_;
}
else
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
lean_del_object(v___x_2570_);
lean_dec(v___x_2568_);
v___x_2603_ = l_Int_toNat(v_a_2599_);
lean_dec(v_a_2599_);
v___x_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
v___x_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2604_);
return v___x_2605_;
}
}
}
}
else
{
lean_object* v___x_2614_; 
lean_dec(v_d_2564_);
v___x_2614_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__5));
return v___x_2614_;
}
v___jp_2566_:
{
lean_object* v___x_2567_; 
v___x_2567_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___closed__0));
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12___boxed(lean_object* v_d_2615_, lean_object* v_key_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12(v_d_2615_, v_key_2616_);
lean_dec_ref(v_key_2616_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10(lean_object* v_d_2623_, lean_object* v_key_2624_){
_start:
{
if (lean_obj_tag(v_d_2623_) == 8)
{
lean_object* v___x_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2680_; 
v___x_2627_ = l_Lasm_JS_Data_field(v_d_2623_, v_key_2624_);
v_isSharedCheck_2680_ = !lean_is_exclusive(v_d_2623_);
if (v_isSharedCheck_2680_ == 0)
{
lean_object* v_unused_2681_; 
v_unused_2681_ = lean_ctor_get(v_d_2623_, 0);
lean_dec(v_unused_2681_);
v___x_2629_ = v_d_2623_;
v_isShared_2630_ = v_isSharedCheck_2680_;
goto v_resetjp_2628_;
}
else
{
lean_dec(v_d_2623_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2680_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v_a_2632_; 
switch(lean_obj_tag(v___x_2627_))
{
case 1:
{
lean_del_object(v___x_2629_);
goto v___jp_2625_;
}
case 0:
{
lean_del_object(v___x_2629_);
goto v___jp_2625_;
}
default: 
{
lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2657_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__0));
lean_inc(v___x_2627_);
v___x_2658_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_2627_, v___x_2657_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v_a_2632_ = v_a_2659_;
goto v___jp_2631_;
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2679_; 
v_a_2660_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2662_ = v___x_2658_;
v_isShared_2663_ = v_isSharedCheck_2679_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2658_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2679_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2664_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsOwner___lam__0___closed__1));
lean_inc(v___x_2627_);
v___x_2665_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_2627_, v___x_2664_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; 
lean_del_object(v___x_2662_);
lean_dec(v_a_2660_);
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc(v_a_2666_);
lean_dec_ref_known(v___x_2665_, 1);
v_a_2632_ = v_a_2666_;
goto v___jp_2631_;
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2678_; 
lean_del_object(v___x_2629_);
lean_dec(v___x_2627_);
v_a_2667_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2669_ = v___x_2665_;
v_isShared_2670_ = v_isSharedCheck_2678_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2665_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2678_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2671_; lean_object* v___x_2673_; 
v___x_2671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2671_, 0, v_a_2660_);
lean_ctor_set(v___x_2671_, 1, v_a_2667_);
if (v_isShared_2663_ == 0)
{
lean_ctor_set(v___x_2662_, 0, v___x_2671_);
v___x_2673_ = v___x_2662_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2671_);
v___x_2673_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2675_; 
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 0, v___x_2673_);
v___x_2675_ = v___x_2669_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2673_);
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
}
}
v___jp_2631_:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v___x_2633_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2634_ = lean_string_append(v___x_2633_, v_key_2624_);
v___x_2635_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2636_ = lean_string_append(v___x_2634_, v___x_2635_);
v___x_2637_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__1));
v___x_2638_ = lean_string_append(v___x_2636_, v___x_2637_);
v___x_2639_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2640_ = lean_string_append(v___x_2638_, v___x_2639_);
v___x_2641_ = l_Lasm_JS_Data_describe(v___x_2627_);
v___x_2642_ = lean_string_append(v___x_2640_, v___x_2641_);
lean_dec_ref(v___x_2641_);
v___x_2643_ = lean_string_utf8_byte_size(v_a_2632_);
v___x_2644_ = lean_unsigned_to_nat(0u);
v___x_2645_ = lean_nat_dec_eq(v___x_2643_, v___x_2644_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2652_; 
v___x_2646_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_2647_ = lean_string_append(v___x_2646_, v_a_2632_);
lean_dec_ref(v_a_2632_);
v___x_2648_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_2649_ = lean_string_append(v___x_2647_, v___x_2648_);
v___x_2650_ = lean_string_append(v___x_2642_, v___x_2649_);
lean_dec_ref(v___x_2649_);
if (v_isShared_2630_ == 0)
{
lean_ctor_set_tag(v___x_2629_, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2650_);
v___x_2652_ = v___x_2629_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
else
{
lean_object* v___x_2655_; 
lean_dec_ref(v_a_2632_);
if (v_isShared_2630_ == 0)
{
lean_ctor_set_tag(v___x_2629_, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2642_);
v___x_2655_ = v___x_2629_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v___x_2642_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
}
else
{
lean_object* v___x_2682_; 
lean_dec(v_d_2623_);
v___x_2682_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__2));
return v___x_2682_;
}
v___jp_2625_:
{
lean_object* v___x_2626_; 
v___x_2626_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___closed__0));
return v___x_2626_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10___boxed(lean_object* v_d_2683_, lean_object* v_key_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10(v_d_2683_, v_key_2684_);
lean_dec_ref(v_key_2684_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13(lean_object* v_d_2691_, lean_object* v_key_2692_){
_start:
{
uint8_t v_a_2694_; 
if (lean_obj_tag(v_d_2691_) == 8)
{
lean_object* v___x_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2758_; 
v___x_2700_ = l_Lasm_JS_Data_field(v_d_2691_, v_key_2692_);
v_isSharedCheck_2758_ = !lean_is_exclusive(v_d_2691_);
if (v_isSharedCheck_2758_ == 0)
{
lean_object* v_unused_2759_; 
v_unused_2759_ = lean_ctor_get(v_d_2691_, 0);
lean_dec(v_unused_2759_);
v___x_2702_ = v_d_2691_;
v_isShared_2703_ = v_isSharedCheck_2758_;
goto v_resetjp_2701_;
}
else
{
lean_dec(v_d_2691_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2758_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
switch(lean_obj_tag(v___x_2700_))
{
case 1:
{
lean_del_object(v___x_2702_);
goto v___jp_2698_;
}
case 0:
{
lean_del_object(v___x_2702_);
goto v___jp_2698_;
}
default: 
{
if (lean_obj_tag(v___x_2700_) == 4)
{
lean_object* v_s_2724_; lean_object* v___x_2725_; uint8_t v___x_2726_; 
v_s_2724_ = lean_ctor_get(v___x_2700_, 0);
lean_inc_ref(v_s_2724_);
v___x_2725_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__0));
v___x_2726_ = lean_string_dec_eq(v_s_2724_, v___x_2725_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; uint8_t v___x_2728_; 
v___x_2727_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__2));
v___x_2728_ = lean_string_dec_eq(v_s_2724_, v___x_2727_);
if (v___x_2728_ == 0)
{
lean_object* v___x_2729_; uint8_t v___x_2730_; 
v___x_2729_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__4));
v___x_2730_ = lean_string_dec_eq(v_s_2724_, v___x_2729_);
if (v___x_2730_ == 0)
{
lean_object* v___x_2731_; uint8_t v___x_2732_; 
v___x_2731_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__6));
v___x_2732_ = lean_string_dec_eq(v_s_2724_, v___x_2731_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; uint8_t v___x_2734_; 
v___x_2733_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__8));
v___x_2734_ = lean_string_dec_eq(v_s_2724_, v___x_2733_);
if (v___x_2734_ == 0)
{
lean_object* v___x_2735_; uint8_t v___x_2736_; 
v___x_2735_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__10));
v___x_2736_ = lean_string_dec_eq(v_s_2724_, v___x_2735_);
if (v___x_2736_ == 0)
{
lean_object* v___x_2737_; uint8_t v___x_2738_; 
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__12));
v___x_2738_ = lean_string_dec_eq(v_s_2724_, v___x_2737_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; uint8_t v___x_2740_; 
v___x_2739_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__14));
v___x_2740_ = lean_string_dec_eq(v_s_2724_, v___x_2739_);
if (v___x_2740_ == 0)
{
lean_object* v___x_2741_; uint8_t v___x_2742_; 
v___x_2741_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__16));
v___x_2742_ = lean_string_dec_eq(v_s_2724_, v___x_2741_);
if (v___x_2742_ == 0)
{
lean_object* v___x_2743_; uint8_t v___x_2744_; 
v___x_2743_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__18));
v___x_2744_ = lean_string_dec_eq(v_s_2724_, v___x_2743_);
if (v___x_2744_ == 0)
{
lean_object* v___x_2745_; uint8_t v___x_2746_; 
v___x_2745_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsStorageClass___lam__0___closed__20));
v___x_2746_ = lean_string_dec_eq(v_s_2724_, v___x_2745_);
lean_dec_ref(v_s_2724_);
if (v___x_2746_ == 0)
{
goto v___jp_2704_;
}
else
{
uint8_t v___x_2747_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_del_object(v___x_2702_);
v___x_2747_ = 10;
v_a_2694_ = v___x_2747_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2748_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2748_ = 9;
v_a_2694_ = v___x_2748_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2749_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2749_ = 8;
v_a_2694_ = v___x_2749_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2750_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2750_ = 7;
v_a_2694_ = v___x_2750_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2751_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2751_ = 6;
v_a_2694_ = v___x_2751_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2752_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2752_ = 5;
v_a_2694_ = v___x_2752_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2753_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2753_ = 4;
v_a_2694_ = v___x_2753_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2754_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2754_ = 3;
v_a_2694_ = v___x_2754_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2755_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2755_ = 2;
v_a_2694_ = v___x_2755_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2756_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2756_ = 1;
v_a_2694_ = v___x_2756_;
goto v___jp_2693_;
}
}
else
{
uint8_t v___x_2757_; 
lean_dec_ref_known(v___x_2700_, 1);
lean_dec_ref(v_s_2724_);
lean_del_object(v___x_2702_);
v___x_2757_ = 0;
v_a_2694_ = v___x_2757_;
goto v___jp_2693_;
}
}
else
{
goto v___jp_2704_;
}
}
}
v___jp_2704_:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; uint8_t v___x_2715_; 
v___x_2705_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2706_ = lean_string_append(v___x_2705_, v_key_2692_);
v___x_2707_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2708_ = lean_string_append(v___x_2706_, v___x_2707_);
v___x_2709_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__1));
v___x_2710_ = lean_string_append(v___x_2708_, v___x_2709_);
v___x_2711_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2712_ = lean_string_append(v___x_2710_, v___x_2711_);
v___x_2713_ = l_Lasm_JS_Data_describe(v___x_2700_);
v___x_2714_ = lean_string_append(v___x_2712_, v___x_2713_);
lean_dec_ref(v___x_2713_);
v___x_2715_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v___x_2715_ == 0)
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2716_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4));
v___x_2717_ = lean_string_append(v___x_2714_, v___x_2716_);
if (v_isShared_2703_ == 0)
{
lean_ctor_set_tag(v___x_2702_, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2717_);
v___x_2719_ = v___x_2702_;
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
if (v_isShared_2703_ == 0)
{
lean_ctor_set_tag(v___x_2702_, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2714_);
v___x_2722_ = v___x_2702_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2714_);
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
lean_object* v___x_2760_; 
lean_dec(v_d_2691_);
v___x_2760_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__2));
return v___x_2760_;
}
v___jp_2693_:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2695_ = lean_box(v_a_2694_);
v___x_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2695_);
v___x_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2696_);
return v___x_2697_;
}
v___jp_2698_:
{
lean_object* v___x_2699_; 
v___x_2699_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___closed__0));
return v___x_2699_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13___boxed(lean_object* v_d_2761_, lean_object* v_key_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13(v_d_2761_, v_key_2762_);
lean_dec_ref(v_key_2762_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11(lean_object* v_d_2769_, lean_object* v_key_2770_){
_start:
{
if (lean_obj_tag(v_d_2769_) == 8)
{
lean_object* v___x_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2826_; 
v___x_2773_ = l_Lasm_JS_Data_field(v_d_2769_, v_key_2770_);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_d_2769_);
if (v_isSharedCheck_2826_ == 0)
{
lean_object* v_unused_2827_; 
v_unused_2827_ = lean_ctor_get(v_d_2769_, 0);
lean_dec(v_unused_2827_);
v___x_2775_ = v_d_2769_;
v_isShared_2776_ = v_isSharedCheck_2826_;
goto v_resetjp_2774_;
}
else
{
lean_dec(v_d_2769_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2826_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v_a_2778_; 
switch(lean_obj_tag(v___x_2773_))
{
case 1:
{
lean_del_object(v___x_2775_);
goto v___jp_2771_;
}
case 0:
{
lean_del_object(v___x_2775_);
goto v___jp_2771_;
}
default: 
{
lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2803_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__0));
lean_inc(v___x_2773_);
v___x_2804_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v___x_2773_, v___x_2803_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_a_2805_; 
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
lean_inc(v_a_2805_);
lean_dec_ref_known(v___x_2804_, 1);
v_a_2778_ = v_a_2805_;
goto v___jp_2777_;
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2825_; 
v_a_2806_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2808_ = v___x_2804_;
v_isShared_2809_ = v_isSharedCheck_2825_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___x_2804_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2825_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2810_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContentsRestoreStatus___lam__0___closed__1));
lean_inc(v___x_2773_);
v___x_2811_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v___x_2773_, v___x_2810_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; 
lean_del_object(v___x_2808_);
lean_dec(v_a_2806_);
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2811_, 1);
v_a_2778_ = v_a_2812_;
goto v___jp_2777_;
}
else
{
lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2824_; 
lean_del_object(v___x_2775_);
lean_dec(v___x_2773_);
v_a_2813_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2815_ = v___x_2811_;
v_isShared_2816_ = v_isSharedCheck_2824_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_dec(v___x_2811_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2824_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2817_; lean_object* v___x_2819_; 
v___x_2817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2817_, 0, v_a_2806_);
lean_ctor_set(v___x_2817_, 1, v_a_2813_);
if (v_isShared_2809_ == 0)
{
lean_ctor_set(v___x_2808_, 0, v___x_2817_);
v___x_2819_ = v___x_2808_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2817_);
v___x_2819_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
lean_object* v___x_2821_; 
if (v_isShared_2816_ == 0)
{
lean_ctor_set(v___x_2815_, 0, v___x_2819_);
v___x_2821_ = v___x_2815_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v___x_2819_);
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
}
}
}
}
v___jp_2777_:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; uint8_t v___x_2791_; 
v___x_2779_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2780_ = lean_string_append(v___x_2779_, v_key_2770_);
v___x_2781_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2782_ = lean_string_append(v___x_2780_, v___x_2781_);
v___x_2783_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__1));
v___x_2784_ = lean_string_append(v___x_2782_, v___x_2783_);
v___x_2785_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2786_ = lean_string_append(v___x_2784_, v___x_2785_);
v___x_2787_ = l_Lasm_JS_Data_describe(v___x_2773_);
v___x_2788_ = lean_string_append(v___x_2786_, v___x_2787_);
lean_dec_ref(v___x_2787_);
v___x_2789_ = lean_string_utf8_byte_size(v_a_2778_);
v___x_2790_ = lean_unsigned_to_nat(0u);
v___x_2791_ = lean_nat_dec_eq(v___x_2789_, v___x_2790_);
if (v___x_2791_ == 0)
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2798_; 
v___x_2792_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_2793_ = lean_string_append(v___x_2792_, v_a_2778_);
lean_dec_ref(v_a_2778_);
v___x_2794_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_2795_ = lean_string_append(v___x_2793_, v___x_2794_);
v___x_2796_ = lean_string_append(v___x_2788_, v___x_2795_);
lean_dec_ref(v___x_2795_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set_tag(v___x_2775_, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2796_);
v___x_2798_ = v___x_2775_;
goto v_reusejp_2797_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2796_);
v___x_2798_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2797_;
}
v_reusejp_2797_:
{
return v___x_2798_;
}
}
else
{
lean_object* v___x_2801_; 
lean_dec_ref(v_a_2778_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set_tag(v___x_2775_, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2788_);
v___x_2801_ = v___x_2775_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v___x_2788_);
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
else
{
lean_object* v___x_2828_; 
lean_dec(v_d_2769_);
v___x_2828_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__2));
return v___x_2828_;
}
v___jp_2771_:
{
lean_object* v___x_2772_; 
v___x_2772_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___closed__0));
return v___x_2772_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11___boxed(lean_object* v_d_2829_, lean_object* v_key_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11(v_d_2829_, v_key_2830_);
lean_dec_ref(v_key_2830_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9(lean_object* v_d_2837_, lean_object* v_key_2838_){
_start:
{
uint8_t v_a_2840_; 
if (lean_obj_tag(v_d_2837_) == 8)
{
lean_object* v___x_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2877_; 
v___x_2846_ = l_Lasm_JS_Data_field(v_d_2837_, v_key_2838_);
v_isSharedCheck_2877_ = !lean_is_exclusive(v_d_2837_);
if (v_isSharedCheck_2877_ == 0)
{
lean_object* v_unused_2878_; 
v_unused_2878_ = lean_ctor_get(v_d_2837_, 0);
lean_dec(v_unused_2878_);
v___x_2848_ = v_d_2837_;
v_isShared_2849_ = v_isSharedCheck_2877_;
goto v_resetjp_2847_;
}
else
{
lean_dec(v_d_2837_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2877_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
switch(lean_obj_tag(v___x_2846_))
{
case 1:
{
lean_del_object(v___x_2848_);
goto v___jp_2844_;
}
case 0:
{
lean_del_object(v___x_2848_);
goto v___jp_2844_;
}
default: 
{
if (lean_obj_tag(v___x_2846_) == 4)
{
lean_object* v_s_2870_; lean_object* v___x_2871_; uint8_t v___x_2872_; 
v_s_2870_ = lean_ctor_get(v___x_2846_, 0);
lean_inc_ref(v_s_2870_);
v___x_2871_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__0));
v___x_2872_ = lean_string_dec_eq(v_s_2870_, v___x_2871_);
if (v___x_2872_ == 0)
{
lean_object* v___x_2873_; uint8_t v___x_2874_; 
v___x_2873_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumType___lam__0___closed__2));
v___x_2874_ = lean_string_dec_eq(v_s_2870_, v___x_2873_);
lean_dec_ref(v_s_2870_);
if (v___x_2874_ == 0)
{
goto v___jp_2850_;
}
else
{
uint8_t v___x_2875_; 
lean_dec_ref_known(v___x_2846_, 1);
lean_del_object(v___x_2848_);
v___x_2875_ = 1;
v_a_2840_ = v___x_2875_;
goto v___jp_2839_;
}
}
else
{
uint8_t v___x_2876_; 
lean_dec_ref(v_s_2870_);
lean_dec_ref_known(v___x_2846_, 1);
lean_del_object(v___x_2848_);
v___x_2876_ = 0;
v_a_2840_ = v___x_2876_;
goto v___jp_2839_;
}
}
else
{
goto v___jp_2850_;
}
}
}
v___jp_2850_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; uint8_t v___x_2861_; 
v___x_2851_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2852_ = lean_string_append(v___x_2851_, v_key_2838_);
v___x_2853_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2854_ = lean_string_append(v___x_2852_, v___x_2853_);
v___x_2855_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__1));
v___x_2856_ = lean_string_append(v___x_2854_, v___x_2855_);
v___x_2857_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2858_ = lean_string_append(v___x_2856_, v___x_2857_);
v___x_2859_ = l_Lasm_JS_Data_describe(v___x_2846_);
v___x_2860_ = lean_string_append(v___x_2858_, v___x_2859_);
lean_dec_ref(v___x_2859_);
v___x_2861_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v___x_2861_ == 0)
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2865_; 
v___x_2862_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4));
v___x_2863_ = lean_string_append(v___x_2860_, v___x_2862_);
if (v_isShared_2849_ == 0)
{
lean_ctor_set_tag(v___x_2848_, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2863_);
v___x_2865_ = v___x_2848_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v___x_2863_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
else
{
lean_object* v___x_2868_; 
if (v_isShared_2849_ == 0)
{
lean_ctor_set_tag(v___x_2848_, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2860_);
v___x_2868_ = v___x_2848_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v___x_2860_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
}
else
{
lean_object* v___x_2879_; 
lean_dec(v_d_2837_);
v___x_2879_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__2));
return v___x_2879_;
}
v___jp_2839_:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2841_ = lean_box(v_a_2840_);
v___x_2842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2841_);
v___x_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
return v___x_2843_;
}
v___jp_2844_:
{
lean_object* v___x_2845_; 
v___x_2845_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___closed__0));
return v___x_2845_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9___boxed(lean_object* v_d_2880_, lean_object* v_key_2881_){
_start:
{
lean_object* v_res_2882_; 
v_res_2882_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9(v_d_2880_, v_key_2881_);
lean_dec_ref(v_key_2881_);
return v_res_2882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8(lean_object* v_d_2888_, lean_object* v_key_2889_){
_start:
{
uint8_t v_a_2891_; 
if (lean_obj_tag(v_d_2888_) == 8)
{
lean_object* v___x_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2937_; 
v___x_2897_ = l_Lasm_JS_Data_field(v_d_2888_, v_key_2889_);
v_isSharedCheck_2937_ = !lean_is_exclusive(v_d_2888_);
if (v_isSharedCheck_2937_ == 0)
{
lean_object* v_unused_2938_; 
v_unused_2938_ = lean_ctor_get(v_d_2888_, 0);
lean_dec(v_unused_2938_);
v___x_2899_ = v_d_2888_;
v_isShared_2900_ = v_isSharedCheck_2937_;
goto v_resetjp_2898_;
}
else
{
lean_dec(v_d_2888_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2937_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
switch(lean_obj_tag(v___x_2897_))
{
case 1:
{
lean_del_object(v___x_2899_);
goto v___jp_2895_;
}
case 0:
{
lean_del_object(v___x_2899_);
goto v___jp_2895_;
}
default: 
{
if (lean_obj_tag(v___x_2897_) == 4)
{
lean_object* v_s_2921_; lean_object* v___x_2922_; uint8_t v___x_2923_; 
v_s_2921_ = lean_ctor_get(v___x_2897_, 0);
lean_inc_ref(v_s_2921_);
v___x_2922_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__0));
v___x_2923_ = lean_string_dec_eq(v_s_2921_, v___x_2922_);
if (v___x_2923_ == 0)
{
lean_object* v___x_2924_; uint8_t v___x_2925_; 
v___x_2924_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__2));
v___x_2925_ = lean_string_dec_eq(v_s_2921_, v___x_2924_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; uint8_t v___x_2927_; 
v___x_2926_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__4));
v___x_2927_ = lean_string_dec_eq(v_s_2921_, v___x_2926_);
if (v___x_2927_ == 0)
{
lean_object* v___x_2928_; uint8_t v___x_2929_; 
v___x_2928_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__6));
v___x_2929_ = lean_string_dec_eq(v_s_2921_, v___x_2928_);
if (v___x_2929_ == 0)
{
lean_object* v___x_2930_; uint8_t v___x_2931_; 
v___x_2930_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsResponseContentsChecksumAlgorithm___lam__0___closed__8));
v___x_2931_ = lean_string_dec_eq(v_s_2921_, v___x_2930_);
lean_dec_ref(v_s_2921_);
if (v___x_2931_ == 0)
{
goto v___jp_2901_;
}
else
{
uint8_t v___x_2932_; 
lean_dec_ref_known(v___x_2897_, 1);
lean_del_object(v___x_2899_);
v___x_2932_ = 4;
v_a_2891_ = v___x_2932_;
goto v___jp_2890_;
}
}
else
{
uint8_t v___x_2933_; 
lean_dec_ref(v_s_2921_);
lean_dec_ref_known(v___x_2897_, 1);
lean_del_object(v___x_2899_);
v___x_2933_ = 3;
v_a_2891_ = v___x_2933_;
goto v___jp_2890_;
}
}
else
{
uint8_t v___x_2934_; 
lean_dec_ref(v_s_2921_);
lean_dec_ref_known(v___x_2897_, 1);
lean_del_object(v___x_2899_);
v___x_2934_ = 2;
v_a_2891_ = v___x_2934_;
goto v___jp_2890_;
}
}
else
{
uint8_t v___x_2935_; 
lean_dec_ref(v_s_2921_);
lean_dec_ref_known(v___x_2897_, 1);
lean_del_object(v___x_2899_);
v___x_2935_ = 1;
v_a_2891_ = v___x_2935_;
goto v___jp_2890_;
}
}
else
{
uint8_t v___x_2936_; 
lean_dec_ref(v_s_2921_);
lean_dec_ref_known(v___x_2897_, 1);
lean_del_object(v___x_2899_);
v___x_2936_ = 0;
v_a_2891_ = v___x_2936_;
goto v___jp_2890_;
}
}
else
{
goto v___jp_2901_;
}
}
}
v___jp_2901_:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; uint8_t v___x_2912_; 
v___x_2902_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_2903_ = lean_string_append(v___x_2902_, v_key_2889_);
v___x_2904_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_2905_ = lean_string_append(v___x_2903_, v___x_2904_);
v___x_2906_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__1));
v___x_2907_ = lean_string_append(v___x_2905_, v___x_2906_);
v___x_2908_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_2909_ = lean_string_append(v___x_2907_, v___x_2908_);
v___x_2910_ = l_Lasm_JS_Data_describe(v___x_2897_);
v___x_2911_ = lean_string_append(v___x_2909_, v___x_2910_);
lean_dec_ref(v___x_2910_);
v___x_2912_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v___x_2912_ == 0)
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2916_; 
v___x_2913_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7___closed__4));
v___x_2914_ = lean_string_append(v___x_2911_, v___x_2913_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set_tag(v___x_2899_, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2914_);
v___x_2916_ = v___x_2899_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2914_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
else
{
lean_object* v___x_2919_; 
if (v_isShared_2900_ == 0)
{
lean_ctor_set_tag(v___x_2899_, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2911_);
v___x_2919_ = v___x_2899_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v___x_2911_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
}
}
else
{
lean_object* v___x_2939_; 
lean_dec(v_d_2888_);
v___x_2939_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__2));
return v___x_2939_;
}
v___jp_2890_:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2892_ = lean_box(v_a_2891_);
v___x_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2892_);
v___x_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
v___jp_2895_:
{
lean_object* v___x_2896_; 
v___x_2896_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___closed__0));
return v___x_2896_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8___boxed(lean_object* v_d_2940_, lean_object* v_key_2941_){
_start:
{
lean_object* v_res_2942_; 
v_res_2942_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8(v_d_2940_, v_key_2941_);
lean_dec_ref(v_key_2941_);
return v_res_2942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__14(size_t v_sz_2943_, size_t v_i_2944_, lean_object* v_bs_2945_){
_start:
{
uint8_t v___x_2946_; 
v___x_2946_ = lean_usize_dec_lt(v_i_2944_, v_sz_2943_);
if (v___x_2946_ == 0)
{
lean_object* v___x_2947_; 
v___x_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2947_, 0, v_bs_2945_);
return v___x_2947_;
}
else
{
lean_object* v_v_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v_v_2948_ = lean_array_uget_borrowed(v_bs_2945_, v_i_2944_);
v___x_2949_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__0));
lean_inc(v_v_2948_);
v___x_2950_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__8(v_v_2948_, v___x_2949_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
lean_dec_ref(v_bs_2945_);
v_a_2951_ = lean_ctor_get(v___x_2950_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v___x_2950_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2950_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
return v___x_2956_;
}
}
}
else
{
lean_object* v_a_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; 
v_a_2959_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_a_2959_);
lean_dec_ref_known(v___x_2950_, 1);
v___x_2960_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__1));
lean_inc(v_v_2948_);
v___x_2961_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__9(v_v_2948_, v___x_2960_);
if (lean_obj_tag(v___x_2961_) == 0)
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_dec(v_a_2959_);
lean_dec_ref(v_bs_2945_);
v_a_2962_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2961_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2961_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
else
{
lean_object* v_a_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v_a_2970_ = lean_ctor_get(v___x_2961_, 0);
lean_inc(v_a_2970_);
lean_dec_ref_known(v___x_2961_, 1);
v___x_2971_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__2));
lean_inc(v_v_2948_);
v___x_2972_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2948_, v___x_2971_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2980_; 
lean_dec(v_a_2970_);
lean_dec(v_a_2959_);
lean_dec_ref(v_bs_2945_);
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2975_ = v___x_2972_;
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2972_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2978_; 
if (v_isShared_2976_ == 0)
{
v___x_2978_ = v___x_2975_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_a_2973_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
else
{
lean_object* v_a_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v_a_2981_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2981_);
lean_dec_ref_known(v___x_2972_, 1);
v___x_2982_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__3));
lean_inc(v_v_2948_);
v___x_2983_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_MarkdownRenderCallbacksLink_ofFn_spec__0_spec__0_spec__1(v_v_2948_, v___x_2982_);
if (lean_obj_tag(v___x_2983_) == 0)
{
lean_object* v_a_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2991_; 
lean_dec(v_a_2981_);
lean_dec(v_a_2970_);
lean_dec(v_a_2959_);
lean_dec_ref(v_bs_2945_);
v_a_2984_ = lean_ctor_get(v___x_2983_, 0);
v_isSharedCheck_2991_ = !lean_is_exclusive(v___x_2983_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2986_ = v___x_2983_;
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_a_2984_);
lean_dec(v___x_2983_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2989_; 
if (v_isShared_2987_ == 0)
{
v___x_2989_ = v___x_2986_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_a_2984_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
}
else
{
lean_object* v_a_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
v_a_2992_ = lean_ctor_get(v___x_2983_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2983_, 1);
v___x_2993_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__4));
lean_inc(v_v_2948_);
v___x_2994_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_2948_, v___x_2993_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3002_; 
lean_dec(v_a_2992_);
lean_dec(v_a_2981_);
lean_dec(v_a_2970_);
lean_dec(v_a_2959_);
lean_dec_ref(v_bs_2945_);
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2997_ = v___x_2994_;
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v___x_2994_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3002_;
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
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_a_2995_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
return v___x_3000_;
}
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v_a_3003_ = lean_ctor_get(v___x_2994_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_2994_, 1);
v___x_3004_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__5));
lean_inc(v_v_2948_);
v___x_3005_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__10(v_v_2948_, v___x_3004_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3013_; 
lean_dec(v_a_3003_);
lean_dec(v_a_2992_);
lean_dec(v_a_2981_);
lean_dec(v_a_2970_);
lean_dec(v_a_2959_);
lean_dec_ref(v_bs_2945_);
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_3008_ = v___x_3005_;
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_3005_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_a_3006_);
v___x_3011_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
return v___x_3011_;
}
}
}
else
{
lean_object* v_a_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; 
v_a_3014_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3014_);
lean_dec_ref_known(v___x_3005_, 1);
v___x_3015_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__6));
lean_inc(v_v_2948_);
v___x_3016_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__11(v_v_2948_, v___x_3015_);
if (lean_obj_tag(v___x_3016_) == 0)
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
lean_dec(v_a_3014_);
lean_dec(v_a_3003_);
lean_dec(v_a_2992_);
lean_dec(v_a_2981_);
lean_dec(v_a_2970_);
lean_dec(v_a_2959_);
lean_dec_ref(v_bs_2945_);
v_a_3017_ = lean_ctor_get(v___x_3016_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_3016_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_3016_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_3016_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3017_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v_a_3025_ = lean_ctor_get(v___x_3016_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3016_, 1);
v___x_3026_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__7));
lean_inc(v_v_2948_);
v___x_3027_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__12(v_v_2948_, v___x_3026_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
lean_dec(v_a_3025_);
lean_dec(v_a_3014_);
lean_dec(v_a_3003_);
lean_dec(v_a_2992_);
lean_dec(v_a_2981_);
lean_dec(v_a_2970_);
lean_dec(v_a_2959_);
lean_dec_ref(v_bs_2945_);
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_3027_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3027_);
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
v_reuseFailAlloc_3034_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v_a_3036_ = lean_ctor_get(v___x_3027_, 0);
lean_inc(v_a_3036_);
lean_dec_ref_known(v___x_3027_, 1);
v___x_3037_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponseContents___lam__0___closed__8));
lean_inc(v_v_2948_);
v___x_3038_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__13(v_v_2948_, v___x_3037_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
lean_dec(v_a_3036_);
lean_dec(v_a_3025_);
lean_dec(v_a_3014_);
lean_dec(v_a_3003_);
lean_dec(v_a_2992_);
lean_dec(v_a_2981_);
lean_dec(v_a_2970_);
lean_dec(v_a_2959_);
lean_dec_ref(v_bs_2945_);
v_a_3039_ = lean_ctor_get(v___x_3038_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_3038_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_3038_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3044_; 
if (v_isShared_3042_ == 0)
{
v___x_3044_ = v___x_3041_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3039_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
else
{
lean_object* v_a_3047_; lean_object* v___x_3048_; lean_object* v_bs_x27_3049_; lean_object* v___x_3050_; size_t v___x_3051_; size_t v___x_3052_; lean_object* v___x_3053_; 
v_a_3047_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_a_3047_);
lean_dec_ref_known(v___x_3038_, 1);
v___x_3048_ = lean_unsigned_to_nat(0u);
v_bs_x27_3049_ = lean_array_uset(v_bs_2945_, v_i_2944_, v___x_3048_);
v___x_3050_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3050_, 0, v_a_2959_);
lean_ctor_set(v___x_3050_, 1, v_a_2970_);
lean_ctor_set(v___x_3050_, 2, v_a_2981_);
lean_ctor_set(v___x_3050_, 3, v_a_2992_);
lean_ctor_set(v___x_3050_, 4, v_a_3003_);
lean_ctor_set(v___x_3050_, 5, v_a_3014_);
lean_ctor_set(v___x_3050_, 6, v_a_3025_);
lean_ctor_set(v___x_3050_, 7, v_a_3036_);
lean_ctor_set(v___x_3050_, 8, v_a_3047_);
v___x_3051_ = ((size_t)1ULL);
v___x_3052_ = lean_usize_add(v_i_2944_, v___x_3051_);
v___x_3053_ = lean_array_uset(v_bs_x27_3049_, v_i_2944_, v___x_3050_);
v_i_2944_ = v___x_3052_;
v_bs_2945_ = v___x_3053_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__14___boxed(lean_object* v_sz_3055_, lean_object* v_i_3056_, lean_object* v_bs_3057_){
_start:
{
size_t v_sz_boxed_3058_; size_t v_i_boxed_3059_; lean_object* v_res_3060_; 
v_sz_boxed_3058_ = lean_unbox_usize(v_sz_3055_);
lean_dec(v_sz_3055_);
v_i_boxed_3059_ = lean_unbox_usize(v_i_3056_);
lean_dec(v_i_3056_);
v_res_3060_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__14(v_sz_boxed_3058_, v_i_boxed_3059_, v_bs_3057_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6(lean_object* v_d_3067_, lean_object* v_key_3068_){
_start:
{
if (lean_obj_tag(v_d_3067_) == 8)
{
lean_object* v___x_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3124_; 
v___x_3071_ = l_Lasm_JS_Data_field(v_d_3067_, v_key_3068_);
v_isSharedCheck_3124_ = !lean_is_exclusive(v_d_3067_);
if (v_isSharedCheck_3124_ == 0)
{
lean_object* v_unused_3125_; 
v_unused_3125_ = lean_ctor_get(v_d_3067_, 0);
lean_dec(v_unused_3125_);
v___x_3073_ = v_d_3067_;
v_isShared_3074_ = v_isSharedCheck_3124_;
goto v_resetjp_3072_;
}
else
{
lean_dec(v_d_3067_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3124_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v_a_3076_; 
switch(lean_obj_tag(v___x_3071_))
{
case 1:
{
lean_del_object(v___x_3073_);
goto v___jp_3069_;
}
case 0:
{
lean_del_object(v___x_3073_);
goto v___jp_3069_;
}
default: 
{
if (lean_obj_tag(v___x_3071_) == 7)
{
lean_object* v_items_3101_; size_t v_sz_3102_; size_t v___x_3103_; lean_object* v___x_3104_; 
v_items_3101_ = lean_ctor_get(v___x_3071_, 0);
lean_inc_ref(v_items_3101_);
v_sz_3102_ = lean_array_size(v_items_3101_);
v___x_3103_ = ((size_t)0ULL);
v___x_3104_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6_spec__14(v_sz_3102_, v___x_3103_, v_items_3101_);
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; uint8_t v___x_3109_; 
v_a_3105_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3105_);
lean_dec_ref_known(v___x_3104_, 1);
v___x_3106_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__2));
v___x_3107_ = lean_string_utf8_byte_size(v_a_3105_);
v___x_3108_ = lean_unsigned_to_nat(0u);
v___x_3109_ = lean_nat_dec_eq(v___x_3107_, v___x_3108_);
if (v___x_3109_ == 0)
{
lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3110_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_3111_ = lean_string_append(v___x_3110_, v_a_3105_);
lean_dec(v_a_3105_);
v___x_3112_ = lean_string_append(v___x_3106_, v___x_3111_);
lean_dec_ref(v___x_3111_);
v_a_3076_ = v___x_3112_;
goto v___jp_3075_;
}
else
{
lean_dec(v_a_3105_);
v_a_3076_ = v___x_3106_;
goto v___jp_3075_;
}
}
else
{
if (lean_obj_tag(v___x_3104_) == 0)
{
lean_object* v_a_3113_; 
v_a_3113_ = lean_ctor_get(v___x_3104_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3104_, 1);
v_a_3076_ = v_a_3113_;
goto v___jp_3075_;
}
else
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3122_; 
lean_dec_ref_known(v___x_3071_, 1);
lean_del_object(v___x_3073_);
v_a_3114_ = lean_ctor_get(v___x_3104_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3104_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3116_ = v___x_3104_;
v_isShared_3117_ = v_isSharedCheck_3122_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3104_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3122_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3118_; lean_object* v___x_3120_; 
v___x_3118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3118_, 0, v_a_3114_);
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 0, v___x_3118_);
v___x_3120_ = v___x_3116_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v___x_3118_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
else
{
lean_object* v___x_3123_; 
v___x_3123_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v_a_3076_ = v___x_3123_;
goto v___jp_3075_;
}
}
}
v___jp_3075_:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; uint8_t v___x_3089_; 
v___x_3077_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__1));
v___x_3078_ = lean_string_append(v___x_3077_, v_key_3068_);
v___x_3079_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__2));
v___x_3080_ = lean_string_append(v___x_3078_, v___x_3079_);
v___x_3081_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__1));
v___x_3082_ = lean_string_append(v___x_3080_, v___x_3081_);
v___x_3083_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__4));
v___x_3084_ = lean_string_append(v___x_3082_, v___x_3083_);
v___x_3085_ = l_Lasm_JS_Data_describe(v___x_3071_);
v___x_3086_ = lean_string_append(v___x_3084_, v___x_3085_);
lean_dec_ref(v___x_3085_);
v___x_3087_ = lean_string_utf8_byte_size(v_a_3076_);
v___x_3088_ = lean_unsigned_to_nat(0u);
v___x_3089_ = lean_nat_dec_eq(v___x_3087_, v___x_3088_);
if (v___x_3089_ == 0)
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3096_; 
v___x_3090_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_3091_ = lean_string_append(v___x_3090_, v_a_3076_);
lean_dec_ref(v_a_3076_);
v___x_3092_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_3093_ = lean_string_append(v___x_3091_, v___x_3092_);
v___x_3094_ = lean_string_append(v___x_3086_, v___x_3093_);
lean_dec_ref(v___x_3093_);
if (v_isShared_3074_ == 0)
{
lean_ctor_set_tag(v___x_3073_, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3094_);
v___x_3096_ = v___x_3073_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v___x_3094_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
else
{
lean_object* v___x_3099_; 
lean_dec_ref(v_a_3076_);
if (v_isShared_3074_ == 0)
{
lean_ctor_set_tag(v___x_3073_, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3086_);
v___x_3099_ = v___x_3073_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v___x_3086_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
}
else
{
lean_object* v___x_3126_; 
lean_dec(v_d_3067_);
v___x_3126_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__3));
return v___x_3126_;
}
v___jp_3069_:
{
lean_object* v___x_3070_; 
v___x_3070_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___closed__0));
return v___x_3070_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6___boxed(lean_object* v_d_3127_, lean_object* v_key_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6(v_d_3127_, v_key_3128_);
lean_dec_ref(v_key_3128_);
return v_res_3129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4(lean_object* v_context_3130_, lean_object* v_d_3131_){
_start:
{
lean_object* v___y_3134_; lean_object* v___y_3135_; lean_object* v___y_3140_; lean_object* v_received_3141_; lean_object* v___y_3160_; lean_object* v_a_3163_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3187_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__0));
lean_inc(v_d_3131_);
v___x_3188_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5(v_d_3131_, v___x_3187_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3189_);
lean_dec_ref_known(v___x_3188_, 1);
v_a_3163_ = v_a_3189_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v_a_3190_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3190_);
lean_dec_ref_known(v___x_3188_, 1);
v___x_3191_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__1));
lean_inc(v_d_3131_);
v___x_3192_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__6(v_d_3131_, v___x_3191_);
if (lean_obj_tag(v___x_3192_) == 0)
{
lean_object* v_a_3193_; 
lean_dec(v_a_3190_);
v_a_3193_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_a_3193_);
lean_dec_ref_known(v___x_3192_, 1);
v_a_3163_ = v_a_3193_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v_a_3194_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_a_3194_);
lean_dec_ref_known(v___x_3192_, 1);
v___x_3195_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1));
lean_inc(v_d_3131_);
v___x_3196_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3131_, v___x_3195_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_object* v_a_3197_; 
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3197_ = lean_ctor_get(v___x_3196_, 0);
lean_inc(v_a_3197_);
lean_dec_ref_known(v___x_3196_, 1);
v_a_3163_ = v_a_3197_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v_a_3198_ = lean_ctor_get(v___x_3196_, 0);
lean_inc(v_a_3198_);
lean_dec_ref_known(v___x_3196_, 1);
v___x_3199_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2));
lean_inc(v_d_3131_);
v___x_3200_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3131_, v___x_3199_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; 
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_a_3201_);
lean_dec_ref_known(v___x_3200_, 1);
v_a_3163_ = v_a_3201_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v_a_3202_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___x_3200_, 1);
v___x_3203_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5));
lean_inc(v_d_3131_);
v___x_3204_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__7(v_d_3131_, v___x_3203_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v_a_3205_; 
lean_dec(v_a_3202_);
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3205_ = lean_ctor_get(v___x_3204_, 0);
lean_inc(v_a_3205_);
lean_dec_ref_known(v___x_3204_, 1);
v_a_3163_ = v_a_3205_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v_a_3206_ = lean_ctor_get(v___x_3204_, 0);
lean_inc(v_a_3206_);
lean_dec_ref_known(v___x_3204_, 1);
v___x_3207_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__2));
lean_inc(v_d_3131_);
v___x_3208_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3131_, v___x_3207_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v_a_3209_; 
lean_dec(v_a_3206_);
lean_dec(v_a_3202_);
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_a_3209_);
lean_dec_ref_known(v___x_3208_, 1);
v_a_3163_ = v_a_3209_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v_a_3210_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_a_3210_);
lean_dec_ref_known(v___x_3208_, 1);
v___x_3211_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__3));
lean_inc(v_d_3131_);
v___x_3212_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SpawnBaseOptionsIgnorePipeInheritOnExit_ofFn_spec__0_spec__0_spec__1(v_d_3131_, v___x_3211_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_object* v_a_3213_; 
lean_dec(v_a_3210_);
lean_dec(v_a_3206_);
lean_dec(v_a_3202_);
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3213_ = lean_ctor_get(v___x_3212_, 0);
lean_inc(v_a_3213_);
lean_dec_ref_known(v___x_3212_, 1);
v_a_3163_ = v_a_3213_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v_a_3214_ = lean_ctor_get(v___x_3212_, 0);
lean_inc(v_a_3214_);
lean_dec_ref_known(v___x_3212_, 1);
v___x_3215_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3));
lean_inc(v_d_3131_);
v___x_3216_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SpawnBaseOptionsIgnorePipeInheritOnExit_ofFn_spec__0_spec__0_spec__1(v_d_3131_, v___x_3215_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; 
lean_dec(v_a_3214_);
lean_dec(v_a_3210_);
lean_dec(v_a_3206_);
lean_dec(v_a_3202_);
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v_a_3163_ = v_a_3217_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v_a_3218_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3216_, 1);
v___x_3219_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__4));
lean_inc(v_d_3131_);
v___x_3220_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3131_, v___x_3219_);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v_a_3221_; 
lean_dec(v_a_3218_);
lean_dec(v_a_3214_);
lean_dec(v_a_3210_);
lean_dec(v_a_3206_);
lean_dec(v_a_3202_);
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3221_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_a_3221_);
lean_dec_ref_known(v___x_3220_, 1);
v_a_3163_ = v_a_3221_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
v_a_3222_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_a_3222_);
lean_dec_ref_known(v___x_3220_, 1);
v___x_3223_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___lam__0___closed__5));
lean_inc(v_d_3131_);
v___x_3224_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3131_, v___x_3223_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3225_; 
lean_dec(v_a_3222_);
lean_dec(v_a_3218_);
lean_dec(v_a_3214_);
lean_dec(v_a_3210_);
lean_dec(v_a_3206_);
lean_dec(v_a_3202_);
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_a_3225_);
lean_dec_ref_known(v___x_3224_, 1);
v_a_3163_ = v_a_3225_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; 
v_a_3226_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3224_, 1);
v___x_3227_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
lean_inc(v_d_3131_);
v___x_3228_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3131_, v___x_3227_);
if (lean_obj_tag(v___x_3228_) == 0)
{
lean_object* v_a_3229_; 
lean_dec(v_a_3226_);
lean_dec(v_a_3222_);
lean_dec(v_a_3218_);
lean_dec(v_a_3214_);
lean_dec(v_a_3210_);
lean_dec(v_a_3206_);
lean_dec(v_a_3202_);
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3229_ = lean_ctor_get(v___x_3228_, 0);
lean_inc(v_a_3229_);
lean_dec_ref_known(v___x_3228_, 1);
v_a_3163_ = v_a_3229_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v_a_3230_ = lean_ctor_get(v___x_3228_, 0);
lean_inc(v_a_3230_);
lean_dec_ref_known(v___x_3228_, 1);
v___x_3231_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4));
lean_inc(v_d_3131_);
v___x_3232_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_3131_, v___x_3231_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; 
lean_dec(v_a_3230_);
lean_dec(v_a_3226_);
lean_dec(v_a_3222_);
lean_dec(v_a_3218_);
lean_dec(v_a_3214_);
lean_dec(v_a_3210_);
lean_dec(v_a_3206_);
lean_dec(v_a_3202_);
lean_dec(v_a_3198_);
lean_dec(v_a_3194_);
lean_dec(v_a_3190_);
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v___x_3232_, 1);
v_a_3163_ = v_a_3233_;
goto v___jp_3162_;
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3242_; 
lean_dec(v_d_3131_);
v_a_3234_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3236_ = v___x_3232_;
v_isShared_3237_ = v_isSharedCheck_3242_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3232_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3242_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3238_; lean_object* v___x_3240_; 
v___x_3238_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3238_, 0, v_a_3190_);
lean_ctor_set(v___x_3238_, 1, v_a_3194_);
lean_ctor_set(v___x_3238_, 2, v_a_3198_);
lean_ctor_set(v___x_3238_, 3, v_a_3202_);
lean_ctor_set(v___x_3238_, 4, v_a_3206_);
lean_ctor_set(v___x_3238_, 5, v_a_3210_);
lean_ctor_set(v___x_3238_, 6, v_a_3214_);
lean_ctor_set(v___x_3238_, 7, v_a_3218_);
lean_ctor_set(v___x_3238_, 8, v_a_3222_);
lean_ctor_set(v___x_3238_, 9, v_a_3226_);
lean_ctor_set(v___x_3238_, 10, v_a_3230_);
lean_ctor_set(v___x_3238_, 11, v_a_3234_);
if (v_isShared_3237_ == 0)
{
lean_ctor_set_tag(v___x_3236_, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3238_);
v___x_3240_ = v___x_3236_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v___x_3238_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
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
v___jp_3133_:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3136_ = lean_string_append(v___y_3134_, v___y_3135_);
lean_dec_ref(v___y_3135_);
v___x_3137_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
v___x_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
return v___x_3138_;
}
v___jp_3139_:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; uint8_t v___x_3153_; 
v___x_3142_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_3143_ = lean_string_append(v___x_3142_, v_context_3130_);
v___x_3144_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__1));
v___x_3145_ = lean_string_append(v___x_3143_, v___x_3144_);
v___x_3146_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSS3ListObjectsResponse___closed__7));
v___x_3147_ = lean_string_append(v___x_3145_, v___x_3146_);
v___x_3148_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__2));
v___x_3149_ = lean_string_append(v___x_3147_, v___x_3148_);
v___x_3150_ = lean_string_append(v___x_3149_, v_received_3141_);
lean_dec_ref(v_received_3141_);
v___x_3151_ = lean_string_utf8_byte_size(v___y_3140_);
v___x_3152_ = lean_unsigned_to_nat(0u);
v___x_3153_ = lean_nat_dec_eq(v___x_3151_, v___x_3152_);
if (v___x_3153_ == 0)
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3154_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__5));
v___x_3155_ = lean_string_append(v___x_3154_, v___y_3140_);
lean_dec_ref(v___y_3140_);
v___x_3156_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4_spec__5___closed__6));
v___x_3157_ = lean_string_append(v___x_3155_, v___x_3156_);
v___y_3134_ = v___x_3150_;
v___y_3135_ = v___x_3157_;
goto v___jp_3133_;
}
else
{
lean_object* v___x_3158_; 
lean_dec_ref(v___y_3140_);
v___x_3158_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___y_3134_ = v___x_3150_;
v___y_3135_ = v___x_3158_;
goto v___jp_3133_;
}
}
v___jp_3159_:
{
lean_object* v___x_3161_; 
v___x_3161_ = l_Lasm_JS_Data_describe(v_d_3131_);
v___y_3140_ = v___y_3160_;
v_received_3141_ = v___x_3161_;
goto v___jp_3139_;
}
v___jp_3162_:
{
if (lean_obj_tag(v_d_3131_) == 9)
{
lean_object* v_value_3164_; lean_object* v_description_3165_; lean_object* v___x_3166_; uint8_t v___x_3167_; 
v_value_3164_ = lean_ctor_get(v_d_3131_, 0);
v_description_3165_ = lean_ctor_get(v_d_3131_, 1);
v___x_3166_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_3167_ = lean_string_dec_eq(v_description_3165_, v___x_3166_);
if (v___x_3167_ == 0)
{
v___y_3160_ = v_a_3163_;
goto v___jp_3159_;
}
else
{
lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3184_; 
lean_inc(v_value_3164_);
v_isSharedCheck_3184_ = !lean_is_exclusive(v_d_3131_);
if (v_isSharedCheck_3184_ == 0)
{
lean_object* v_unused_3185_; lean_object* v_unused_3186_; 
v_unused_3185_ = lean_ctor_get(v_d_3131_, 1);
lean_dec(v_unused_3185_);
v_unused_3186_ = lean_ctor_get(v_d_3131_, 0);
lean_dec(v_unused_3186_);
v___x_3169_ = v_d_3131_;
v_isShared_3170_ = v_isSharedCheck_3184_;
goto v_resetjp_3168_;
}
else
{
lean_dec(v_d_3131_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3184_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
uint32_t v___x_3171_; uint64_t v___x_3172_; lean_object* v___x_3174_; 
v___x_3171_ = 206;
v___x_3172_ = 0ULL;
lean_inc(v_value_3164_);
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 1, v___x_3166_);
v___x_3174_ = v___x_3169_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_value_3164_);
lean_ctor_set(v_reuseFailAlloc_3183_, 1, v___x_3166_);
v___x_3174_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
uint32_t v___x_3175_; lean_object* v___x_3176_; 
v___x_3175_ = lasm_js_value_handle(v_value_3164_);
lean_dec(v_value_3164_);
v___x_3176_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3171_, v___x_3172_, v___x_3174_, v___x_3175_);
lean_dec_ref(v___x_3174_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; uint8_t v___x_3178_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
lean_inc(v_a_3177_);
lean_dec_ref_known(v___x_3176_, 1);
v___x_3178_ = lean_string_validate_utf8(v_a_3177_);
if (v___x_3178_ == 0)
{
lean_object* v___x_3179_; lean_object* v___x_3180_; 
lean_dec(v_a_3177_);
v___x_3179_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__9);
v___x_3180_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3179_);
v___y_3140_ = v_a_3163_;
v_received_3141_ = v___x_3180_;
goto v___jp_3139_;
}
else
{
lean_object* v___x_3181_; 
v___x_3181_ = lean_string_from_utf8_unchecked(v_a_3177_);
v___y_3140_ = v_a_3163_;
v_received_3141_ = v___x_3181_;
goto v___jp_3139_;
}
}
else
{
lean_object* v___x_3182_; 
lean_dec_ref_known(v___x_3176_, 1);
v___x_3182_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__10));
v___y_3140_ = v_a_3163_;
v_received_3141_ = v___x_3182_;
goto v___jp_3139_;
}
}
}
}
}
else
{
v___y_3160_ = v_a_3163_;
goto v___jp_3159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4___boxed(lean_object* v_context_3243_, lean_object* v_d_3244_, lean_object* v_a_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4(v_context_3243_, v_d_3244_);
lean_dec_ref(v_context_3243_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0(lean_object* v_context_3247_, lean_object* v_x_3248_){
_start:
{
lean_object* v_val_3251_; 
if (lean_obj_tag(v_x_3248_) == 0)
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3261_; 
v_a_3253_ = lean_ctor_get(v_x_3248_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v_x_3248_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3255_ = v_x_3248_;
v_isShared_3256_ = v_isSharedCheck_3261_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v_x_3248_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3261_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3258_);
return v___x_3259_;
}
}
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3275_; 
v_a_3262_ = lean_ctor_get(v_x_3248_, 0);
v_isSharedCheck_3275_ = !lean_is_exclusive(v_x_3248_);
if (v_isSharedCheck_3275_ == 0)
{
v___x_3264_ = v_x_3248_;
v_isShared_3265_ = v_isSharedCheck_3275_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v_x_3248_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3275_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3266_; 
v___x_3266_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3_spec__4(v_context_3247_, v_a_3262_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; lean_object* v___x_3269_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3266_, 1);
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 0, v_a_3267_);
v___x_3269_ = v___x_3264_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3267_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
v_val_3251_ = v___x_3269_;
goto v___jp_3250_;
}
}
else
{
lean_object* v_a_3271_; lean_object* v___x_3273_; 
v_a_3271_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3266_, 1);
if (v_isShared_3265_ == 0)
{
lean_ctor_set_tag(v___x_3264_, 0);
lean_ctor_set(v___x_3264_, 0, v_a_3271_);
v___x_3273_ = v___x_3264_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v_a_3271_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
v_val_3251_ = v___x_3273_;
goto v___jp_3250_;
}
}
}
}
v___jp_3250_:
{
lean_object* v___x_3252_; 
v___x_3252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3252_, 0, v_val_3251_);
return v___x_3252_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0___boxed(lean_object* v_context_3276_, lean_object* v_x_3277_, lean_object* v___y_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0(v_context_3276_, v_x_3277_);
lean_dec_ref(v_context_3276_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8(lean_object* v___f_3280_, lean_object* v_x_3281_){
_start:
{
if (lean_obj_tag(v_x_3281_) == 0)
{
lean_object* v_a_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3291_; 
lean_dec_ref(v___f_3280_);
v_a_3283_ = lean_ctor_get(v_x_3281_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v_x_3281_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3285_ = v_x_3281_;
v_isShared_3286_ = v_isSharedCheck_3291_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_a_3283_);
lean_dec(v_x_3281_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3291_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3288_; 
if (v_isShared_3286_ == 0)
{
v___x_3288_ = v___x_3285_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3283_);
v___x_3288_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
lean_object* v___x_3289_; 
v___x_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
return v___x_3289_;
}
}
}
else
{
lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3303_; 
v_isSharedCheck_3303_ = !lean_is_exclusive(v_x_3281_);
if (v_isSharedCheck_3303_ == 0)
{
lean_object* v_unused_3304_; 
v_unused_3304_ = lean_ctor_get(v_x_3281_, 0);
lean_dec(v_unused_3304_);
v___x_3293_ = v_x_3281_;
v_isShared_3294_ = v_isSharedCheck_3303_;
goto v_resetjp_3292_;
}
else
{
lean_dec(v_x_3281_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3303_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3295_; uint8_t v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3299_; 
v___x_3295_ = lean_unsigned_to_nat(0u);
v___x_3296_ = 0;
v___x_3297_ = lean_io_promise_new();
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v___x_3297_);
v___x_3299_ = v___x_3293_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v___x_3297_);
v___x_3299_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
v___x_3301_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3295_, v___x_3296_, v___x_3300_, v___f_3280_);
return v___x_3301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8___boxed(lean_object* v___f_3305_, lean_object* v_x_3306_, lean_object* v___y_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8(v___f_3305_, v_x_3306_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4(lean_object* v_failurePrefix_3309_, lean_object* v_x_3310_){
_start:
{
if (lean_obj_tag(v_x_3310_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3323_; 
v_a_3312_ = lean_ctor_get(v_x_3310_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v_x_3310_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3314_ = v_x_3310_;
v_isShared_3315_ = v_isSharedCheck_3323_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v_x_3310_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3323_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3320_; 
v___x_3316_ = lean_io_error_to_string(v_a_3312_);
v___x_3317_ = lean_string_append(v_failurePrefix_3309_, v___x_3316_);
lean_dec_ref(v___x_3316_);
v___x_3318_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
if (v_isShared_3315_ == 0)
{
lean_ctor_set(v___x_3314_, 0, v___x_3318_);
v___x_3320_ = v___x_3314_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v___x_3318_);
v___x_3320_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
lean_object* v___x_3321_; 
v___x_3321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3320_);
return v___x_3321_;
}
}
}
else
{
lean_object* v___x_3324_; 
lean_dec_ref(v_failurePrefix_3309_);
v___x_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3324_, 0, v_x_3310_);
return v___x_3324_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4___boxed(lean_object* v_failurePrefix_3325_, lean_object* v_x_3326_, lean_object* v___y_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4(v_failurePrefix_3325_, v_x_3326_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1(lean_object* v___f_3329_, lean_object* v_bytes_3330_){
_start:
{
lean_object* v___x_3332_; uint8_t v___x_3333_; lean_object* v_val_3335_; lean_object* v___x_3338_; 
v___x_3332_ = lean_unsigned_to_nat(0u);
v___x_3333_ = 0;
v___x_3338_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3330_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3346_; 
v_a_3339_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3341_ = v___x_3338_;
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___x_3338_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3344_; 
if (v_isShared_3342_ == 0)
{
lean_ctor_set_tag(v___x_3341_, 1);
v___x_3344_ = v___x_3341_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_a_3339_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
v_val_3335_ = v___x_3344_;
goto v___jp_3334_;
}
}
}
else
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3354_; 
v_a_3347_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3354_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3354_ == 0)
{
v___x_3349_ = v___x_3338_;
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3338_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3354_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3352_; 
if (v_isShared_3350_ == 0)
{
lean_ctor_set_tag(v___x_3349_, 0);
v___x_3352_ = v___x_3349_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v_a_3347_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
v_val_3335_ = v___x_3352_;
goto v___jp_3334_;
}
}
}
v___jp_3334_:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3336_, 0, v_val_3335_);
v___x_3337_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3332_, v___x_3333_, v___x_3336_, v___f_3329_);
return v___x_3337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1___boxed(lean_object* v___f_3355_, lean_object* v_bytes_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v_res_3358_; 
v_res_3358_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1(v___f_3355_, v_bytes_3356_);
lean_dec_ref(v_bytes_3356_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2(lean_object* v___f_3359_, lean_object* v_x_3360_){
_start:
{
if (lean_obj_tag(v_x_3360_) == 0)
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3370_; 
lean_dec_ref(v___f_3359_);
v_a_3362_ = lean_ctor_get(v_x_3360_, 0);
v_isSharedCheck_3370_ = !lean_is_exclusive(v_x_3360_);
if (v_isSharedCheck_3370_ == 0)
{
v___x_3364_ = v_x_3360_;
v_isShared_3365_ = v_isSharedCheck_3370_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v_x_3360_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3370_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3369_; 
v_reuseFailAlloc_3369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3369_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3369_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
lean_object* v___x_3368_; 
v___x_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
return v___x_3368_;
}
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3372_; 
v_a_3371_ = lean_ctor_get(v_x_3360_, 0);
lean_inc(v_a_3371_);
lean_dec_ref_known(v_x_3360_, 1);
v___x_3372_ = lean_apply_2(v___f_3359_, v_a_3371_, lean_box(0));
return v___x_3372_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2___boxed(lean_object* v___f_3373_, lean_object* v_x_3374_, lean_object* v___y_3375_){
_start:
{
lean_object* v_res_3376_; 
v_res_3376_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2(v___f_3373_, v_x_3374_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7(lean_object* v___f_3377_, lean_object* v_a_3378_, uint32_t v_op_3379_, uint64_t v_flags_3380_, lean_object* v_payload_3381_, lean_object* v_x_3382_){
_start:
{
if (lean_obj_tag(v_x_3382_) == 0)
{
lean_object* v___x_3384_; 
lean_dec_ref(v___f_3377_);
v___x_3384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3384_, 0, v_x_3382_);
return v___x_3384_;
}
else
{
lean_object* v_a_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3405_; 
v_a_3385_ = lean_ctor_get(v_x_3382_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v_x_3382_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3387_ = v_x_3382_;
v_isShared_3388_ = v_isSharedCheck_3405_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_a_3385_);
lean_dec(v_x_3382_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3405_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
uint32_t v___x_3389_; lean_object* v___x_3390_; uint8_t v___x_3391_; lean_object* v_val_3393_; lean_object* v___x_3396_; 
v___x_3389_ = 0;
v___x_3390_ = lean_unsigned_to_nat(0u);
v___x_3391_ = 0;
v___x_3396_ = lasm_js_call_into(v_a_3378_, v_op_3379_, v___x_3389_, v_flags_3380_, v_a_3385_, v_payload_3381_);
lean_dec(v_a_3385_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3399_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_a_3397_);
lean_dec_ref_known(v___x_3396_, 1);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v_a_3397_);
v___x_3399_ = v___x_3387_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3397_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
v_val_3393_ = v___x_3399_;
goto v___jp_3392_;
}
}
else
{
lean_object* v_a_3401_; lean_object* v___x_3403_; 
v_a_3401_ = lean_ctor_get(v___x_3396_, 0);
lean_inc(v_a_3401_);
lean_dec_ref_known(v___x_3396_, 1);
if (v_isShared_3388_ == 0)
{
lean_ctor_set_tag(v___x_3387_, 0);
lean_ctor_set(v___x_3387_, 0, v_a_3401_);
v___x_3403_ = v___x_3387_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_a_3401_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
v_val_3393_ = v___x_3403_;
goto v___jp_3392_;
}
}
v___jp_3392_:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3394_, 0, v_val_3393_);
v___x_3395_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3390_, v___x_3391_, v___x_3394_, v___f_3377_);
return v___x_3395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7___boxed(lean_object* v___f_3406_, lean_object* v_a_3407_, lean_object* v_op_3408_, lean_object* v_flags_3409_, lean_object* v_payload_3410_, lean_object* v_x_3411_, lean_object* v___y_3412_){
_start:
{
uint32_t v_op_boxed_3413_; uint64_t v_flags_boxed_3414_; lean_object* v_res_3415_; 
v_op_boxed_3413_ = lean_unbox_uint32(v_op_3408_);
lean_dec(v_op_3408_);
v_flags_boxed_3414_ = lean_unbox_uint64(v_flags_3409_);
lean_dec_ref(v_flags_3409_);
v_res_3415_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7(v___f_3406_, v_a_3407_, v_op_boxed_3413_, v_flags_boxed_3414_, v_payload_3410_, v_x_3411_);
lean_dec(v_payload_3410_);
lean_dec(v_a_3407_);
return v_res_3415_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5(lean_object* v___x_3416_, uint8_t v___x_3417_, lean_object* v___f_3418_, lean_object* v_a_3419_, uint32_t v_op_3420_, uint64_t v_flags_3421_, lean_object* v_payload_3422_, lean_object* v_x_3423_){
_start:
{
lean_object* v_val_3426_; 
if (lean_obj_tag(v_x_3423_) == 0)
{
lean_object* v___x_3429_; 
lean_dec_ref(v___f_3418_);
lean_dec(v___x_3416_);
v___x_3429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3429_, 0, v_x_3423_);
return v___x_3429_;
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3444_; 
v_a_3430_ = lean_ctor_get(v_x_3423_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v_x_3423_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3432_ = v_x_3423_;
v_isShared_3433_ = v_isSharedCheck_3444_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v_x_3423_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3444_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
uint32_t v___x_3434_; lean_object* v___x_3435_; 
v___x_3434_ = 0;
v___x_3435_ = lasm_js_call_into(v_a_3419_, v_op_3420_, v___x_3434_, v_flags_3421_, v_a_3430_, v_payload_3422_);
lean_dec(v_a_3430_);
if (lean_obj_tag(v___x_3435_) == 0)
{
lean_object* v_a_3436_; lean_object* v___x_3438_; 
v_a_3436_ = lean_ctor_get(v___x_3435_, 0);
lean_inc(v_a_3436_);
lean_dec_ref_known(v___x_3435_, 1);
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v_a_3436_);
v___x_3438_ = v___x_3432_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3436_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
v_val_3426_ = v___x_3438_;
goto v___jp_3425_;
}
}
else
{
lean_object* v_a_3440_; lean_object* v___x_3442_; 
v_a_3440_ = lean_ctor_get(v___x_3435_, 0);
lean_inc(v_a_3440_);
lean_dec_ref_known(v___x_3435_, 1);
if (v_isShared_3433_ == 0)
{
lean_ctor_set_tag(v___x_3432_, 0);
lean_ctor_set(v___x_3432_, 0, v_a_3440_);
v___x_3442_ = v___x_3432_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_a_3440_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
v_val_3426_ = v___x_3442_;
goto v___jp_3425_;
}
}
}
}
v___jp_3425_:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; 
v___x_3427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3427_, 0, v_val_3426_);
v___x_3428_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3416_, v___x_3417_, v___x_3427_, v___f_3418_);
return v___x_3428_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5___boxed(lean_object* v___x_3445_, lean_object* v___x_3446_, lean_object* v___f_3447_, lean_object* v_a_3448_, lean_object* v_op_3449_, lean_object* v_flags_3450_, lean_object* v_payload_3451_, lean_object* v_x_3452_, lean_object* v___y_3453_){
_start:
{
uint8_t v___x_6528__boxed_3454_; uint32_t v_op_boxed_3455_; uint64_t v_flags_boxed_3456_; lean_object* v_res_3457_; 
v___x_6528__boxed_3454_ = lean_unbox(v___x_3446_);
v_op_boxed_3455_ = lean_unbox_uint32(v_op_3449_);
lean_dec(v_op_3449_);
v_flags_boxed_3456_ = lean_unbox_uint64(v_flags_3450_);
lean_dec_ref(v_flags_3450_);
v_res_3457_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5(v___x_3445_, v___x_6528__boxed_3454_, v___f_3447_, v_a_3448_, v_op_boxed_3455_, v_flags_boxed_3456_, v_payload_3451_, v_x_3452_);
lean_dec(v_payload_3451_);
lean_dec(v_a_3448_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3(lean_object* v_a_3458_, lean_object* v_x_3459_){
_start:
{
if (lean_obj_tag(v_x_3459_) == 0)
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3469_; 
v_a_3461_ = lean_ctor_get(v_x_3459_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v_x_3459_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3463_ = v_x_3459_;
v_isShared_3464_ = v_isSharedCheck_3469_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v_x_3459_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3469_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3466_; 
if (v_isShared_3464_ == 0)
{
v___x_3466_ = v___x_3463_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3461_);
v___x_3466_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
lean_object* v___x_3467_; 
v___x_3467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3467_, 0, v___x_3466_);
return v___x_3467_;
}
}
}
else
{
lean_object* v___x_3470_; 
lean_dec_ref_known(v_x_3459_, 1);
v___x_3470_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3458_);
return v___x_3470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3___boxed(lean_object* v_a_3471_, lean_object* v_x_3472_, lean_object* v___y_3473_){
_start:
{
lean_object* v_res_3474_; 
v_res_3474_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3(v_a_3471_, v_x_3472_);
lean_dec(v_a_3471_);
return v_res_3474_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6(lean_object* v_failurePrefix_3475_, uint32_t v_op_3476_, uint64_t v_flags_3477_, lean_object* v_payload_3478_, lean_object* v___f_3479_, lean_object* v___f_3480_, lean_object* v___f_3481_, lean_object* v_x_3482_){
_start:
{
if (lean_obj_tag(v_x_3482_) == 0)
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3492_; 
lean_dec_ref(v___f_3481_);
lean_dec_ref(v___f_3480_);
lean_dec_ref(v___f_3479_);
lean_dec(v_payload_3478_);
v_a_3484_ = lean_ctor_get(v_x_3482_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v_x_3482_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3486_ = v_x_3482_;
v_isShared_3487_ = v_isSharedCheck_3492_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v_x_3482_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3492_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
if (v_isShared_3487_ == 0)
{
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3484_);
v___x_3489_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
lean_object* v___x_3490_; 
v___x_3490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
return v___x_3490_;
}
}
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3539_; 
v_a_3493_ = lean_ctor_get(v_x_3482_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v_x_3482_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3495_ = v_x_3482_;
v_isShared_3496_ = v_isSharedCheck_3539_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v_x_3482_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3539_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; uint8_t v___x_3499_; 
v___x_3497_ = lean_string_utf8_byte_size(v_failurePrefix_3475_);
v___x_3498_ = lean_unsigned_to_nat(0u);
v___x_3499_ = lean_nat_dec_eq(v___x_3497_, v___x_3498_);
if (v___x_3499_ == 0)
{
lean_object* v___f_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___f_3504_; lean_object* v_val_3506_; lean_object* v___x_3511_; 
lean_dec_ref(v___f_3481_);
lean_inc(v_a_3493_);
v___f_3500_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3500_, 0, v_a_3493_);
v___x_3501_ = lean_box(v___x_3499_);
v___x_3502_ = lean_box_uint32(v_op_3476_);
v___x_3503_ = lean_box_uint64(v_flags_3477_);
lean_inc(v_payload_3478_);
v___f_3504_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3504_, 0, v___x_3498_);
lean_closure_set(v___f_3504_, 1, v___x_3501_);
lean_closure_set(v___f_3504_, 2, v___f_3500_);
lean_closure_set(v___f_3504_, 3, v_a_3493_);
lean_closure_set(v___f_3504_, 4, v___x_3502_);
lean_closure_set(v___f_3504_, 5, v___x_3503_);
lean_closure_set(v___f_3504_, 6, v_payload_3478_);
v___x_3511_ = l_Lasm_JS_Wire_encodeIO(v_payload_3478_);
lean_dec(v_payload_3478_);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_object* v_a_3512_; lean_object* v___x_3514_; 
v_a_3512_ = lean_ctor_get(v___x_3511_, 0);
lean_inc(v_a_3512_);
lean_dec_ref_known(v___x_3511_, 1);
if (v_isShared_3496_ == 0)
{
lean_ctor_set(v___x_3495_, 0, v_a_3512_);
v___x_3514_ = v___x_3495_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_a_3512_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
v_val_3506_ = v___x_3514_;
goto v___jp_3505_;
}
}
else
{
lean_object* v_a_3516_; lean_object* v___x_3518_; 
v_a_3516_ = lean_ctor_get(v___x_3511_, 0);
lean_inc(v_a_3516_);
lean_dec_ref_known(v___x_3511_, 1);
if (v_isShared_3496_ == 0)
{
lean_ctor_set_tag(v___x_3495_, 0);
lean_ctor_set(v___x_3495_, 0, v_a_3516_);
v___x_3518_ = v___x_3495_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3516_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
v_val_3506_ = v___x_3518_;
goto v___jp_3505_;
}
}
v___jp_3505_:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3507_, 0, v_val_3506_);
v___x_3508_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3498_, v___x_3499_, v___x_3507_, v___f_3504_);
v___x_3509_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3498_, v___x_3499_, v___x_3508_, v___f_3479_);
v___x_3510_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3498_, v___x_3499_, v___x_3509_, v___f_3480_);
return v___x_3510_;
}
}
else
{
lean_object* v___f_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___f_3523_; uint8_t v___x_3524_; lean_object* v_val_3526_; lean_object* v___x_3530_; 
lean_dec_ref(v___f_3480_);
lean_dec_ref(v___f_3479_);
lean_inc(v_a_3493_);
v___f_3520_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3520_, 0, v_a_3493_);
v___x_3521_ = lean_box_uint32(v_op_3476_);
v___x_3522_ = lean_box_uint64(v_flags_3477_);
lean_inc(v_payload_3478_);
v___f_3523_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3523_, 0, v___f_3520_);
lean_closure_set(v___f_3523_, 1, v_a_3493_);
lean_closure_set(v___f_3523_, 2, v___x_3521_);
lean_closure_set(v___f_3523_, 3, v___x_3522_);
lean_closure_set(v___f_3523_, 4, v_payload_3478_);
v___x_3524_ = 0;
v___x_3530_ = l_Lasm_JS_Wire_encodeIO(v_payload_3478_);
lean_dec(v_payload_3478_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3533_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3530_, 1);
if (v_isShared_3496_ == 0)
{
lean_ctor_set(v___x_3495_, 0, v_a_3531_);
v___x_3533_ = v___x_3495_;
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
v_val_3526_ = v___x_3533_;
goto v___jp_3525_;
}
}
else
{
lean_object* v_a_3535_; lean_object* v___x_3537_; 
v_a_3535_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3535_);
lean_dec_ref_known(v___x_3530_, 1);
if (v_isShared_3496_ == 0)
{
lean_ctor_set_tag(v___x_3495_, 0);
lean_ctor_set(v___x_3495_, 0, v_a_3535_);
v___x_3537_ = v___x_3495_;
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
v_val_3526_ = v___x_3537_;
goto v___jp_3525_;
}
}
v___jp_3525_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3527_, 0, v_val_3526_);
v___x_3528_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3498_, v___x_3524_, v___x_3527_, v___f_3523_);
v___x_3529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3498_, v___x_3524_, v___x_3528_, v___f_3481_);
return v___x_3529_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6___boxed(lean_object* v_failurePrefix_3540_, lean_object* v_op_3541_, lean_object* v_flags_3542_, lean_object* v_payload_3543_, lean_object* v___f_3544_, lean_object* v___f_3545_, lean_object* v___f_3546_, lean_object* v_x_3547_, lean_object* v___y_3548_){
_start:
{
uint32_t v_op_boxed_3549_; uint64_t v_flags_boxed_3550_; lean_object* v_res_3551_; 
v_op_boxed_3549_ = lean_unbox_uint32(v_op_3541_);
lean_dec(v_op_3541_);
v_flags_boxed_3550_ = lean_unbox_uint64(v_flags_3542_);
lean_dec_ref(v_flags_3542_);
v_res_3551_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6(v_failurePrefix_3540_, v_op_boxed_3549_, v_flags_boxed_3550_, v_payload_3543_, v___f_3544_, v___f_3545_, v___f_3546_, v_x_3547_);
lean_dec_ref(v_failurePrefix_3540_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(lean_object* v_context_3552_, uint32_t v_op_3553_, uint64_t v_flags_3554_, lean_object* v_payload_3555_, lean_object* v_failurePrefix_3556_){
_start:
{
lean_object* v___f_3558_; lean_object* v___f_3559_; lean_object* v___f_3560_; lean_object* v___f_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___f_3564_; lean_object* v___f_3565_; lean_object* v___x_3566_; uint8_t v___x_3567_; lean_object* v_val_3569_; lean_object* v___x_3572_; 
v___f_3558_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3558_, 0, v_context_3552_);
v___f_3559_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3559_, 0, v___f_3558_);
v___f_3560_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3560_, 0, v___f_3559_);
lean_inc_ref(v_failurePrefix_3556_);
v___f_3561_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3561_, 0, v_failurePrefix_3556_);
v___x_3562_ = lean_box_uint32(v_op_3553_);
v___x_3563_ = lean_box_uint64(v_flags_3554_);
lean_inc_ref(v___f_3560_);
v___f_3564_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3564_, 0, v_failurePrefix_3556_);
lean_closure_set(v___f_3564_, 1, v___x_3562_);
lean_closure_set(v___f_3564_, 2, v___x_3563_);
lean_closure_set(v___f_3564_, 3, v_payload_3555_);
lean_closure_set(v___f_3564_, 4, v___f_3561_);
lean_closure_set(v___f_3564_, 5, v___f_3560_);
lean_closure_set(v___f_3564_, 6, v___f_3560_);
v___f_3565_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3565_, 0, v___f_3564_);
v___x_3566_ = lean_unsigned_to_nat(0u);
v___x_3567_ = 0;
v___x_3572_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3580_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3580_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3580_ == 0)
{
v___x_3575_ = v___x_3572_;
v_isShared_3576_ = v_isSharedCheck_3580_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_a_3573_);
lean_dec(v___x_3572_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3580_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3578_; 
if (v_isShared_3576_ == 0)
{
lean_ctor_set_tag(v___x_3575_, 1);
v___x_3578_ = v___x_3575_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_a_3573_);
v___x_3578_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
v_val_3569_ = v___x_3578_;
goto v___jp_3568_;
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
v_a_3581_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3572_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3572_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
lean_ctor_set_tag(v___x_3583_, 0);
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
v_val_3569_ = v___x_3586_;
goto v___jp_3568_;
}
}
}
v___jp_3568_:
{
lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3570_, 0, v_val_3569_);
v___x_3571_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3566_, v___x_3567_, v___x_3570_, v___f_3565_);
return v___x_3571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3___boxed(lean_object* v_context_3589_, lean_object* v_op_3590_, lean_object* v_flags_3591_, lean_object* v_payload_3592_, lean_object* v_failurePrefix_3593_, lean_object* v_a_3594_){
_start:
{
uint32_t v_op_boxed_3595_; uint64_t v_flags_boxed_3596_; lean_object* v_res_3597_; 
v_op_boxed_3595_ = lean_unbox_uint32(v_op_3590_);
lean_dec(v_op_3590_);
v_flags_boxed_3596_ = lean_unbox_uint64(v_flags_3591_);
lean_dec_ref(v_flags_3591_);
v_res_3597_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(v_context_3589_, v_op_boxed_3595_, v_flags_boxed_3596_, v_payload_3592_, v_failurePrefix_3593_);
return v_res_3597_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1(void){
_start:
{
uint64_t v___x_3599_; uint8_t v___x_3600_; uint64_t v___x_3601_; 
v___x_3599_ = 8ULL;
v___x_3600_ = 0;
v___x_3601_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__2(v___x_3600_, v___x_3599_);
return v___x_3601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1(lean_object* v_o_3602_, lean_object* v_name_3603_, lean_object* v_args_3604_){
_start:
{
lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; uint32_t v___x_3611_; uint64_t v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3606_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3Client___lam__0___closed__0));
v___x_3607_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3607_, 0, v_o_3602_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
lean_inc_ref(v_name_3603_);
v___x_3608_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3608_, 0, v_name_3603_);
v___x_3609_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__0));
v___x_3610_ = lean_string_append(v___x_3609_, v_name_3603_);
lean_dec_ref(v_name_3603_);
v___x_3611_ = 205;
v___x_3612_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___closed__1);
v___x_3613_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3613_, 0, v_args_3604_);
v___x_3614_ = lean_unsigned_to_nat(3u);
v___x_3615_ = lean_mk_empty_array_with_capacity(v___x_3614_);
v___x_3616_ = lean_array_push(v___x_3615_, v___x_3607_);
v___x_3617_ = lean_array_push(v___x_3616_, v___x_3608_);
v___x_3618_ = lean_array_push(v___x_3617_, v___x_3613_);
v___x_3619_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3618_);
v___x_3620_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(v___x_3610_, v___x_3611_, v___x_3612_, v___x_3619_, v___x_3606_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1___boxed(lean_object* v_o_3621_, lean_object* v_name_3622_, lean_object* v_args_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1(v_o_3621_, v_name_3622_, v_args_3623_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0(lean_object* v_x_3626_){
_start:
{
if (lean_obj_tag(v_x_3626_) == 0)
{
lean_object* v___x_3627_; 
v___x_3627_ = lean_box(0);
return v___x_3627_;
}
else
{
lean_object* v___x_3628_; 
v___x_3628_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptionsEncodingType___lam__0___closed__1));
return v___x_3628_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0___boxed(lean_object* v_x_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0(v_x_3629_);
lean_dec(v_x_3629_);
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0(lean_object* v_x_3631_){
_start:
{
if (lean_obj_tag(v_x_3631_) == 0)
{
lean_object* v___x_3632_; 
v___x_3632_ = lean_box(0);
return v___x_3632_;
}
else
{
lean_object* v_val_3633_; lean_object* v_prefix_3634_; lean_object* v_continuationToken_3635_; lean_object* v_delimiter_3636_; lean_object* v_maxKeys_3637_; lean_object* v_startAfter_3638_; lean_object* v_encodingType_3639_; lean_object* v_fetchOwner_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
v_val_3633_ = lean_ctor_get(v_x_3631_, 0);
lean_inc(v_val_3633_);
lean_dec_ref_known(v_x_3631_, 1);
v_prefix_3634_ = lean_ctor_get(v_val_3633_, 0);
lean_inc(v_prefix_3634_);
v_continuationToken_3635_ = lean_ctor_get(v_val_3633_, 1);
lean_inc(v_continuationToken_3635_);
v_delimiter_3636_ = lean_ctor_get(v_val_3633_, 2);
lean_inc(v_delimiter_3636_);
v_maxKeys_3637_ = lean_ctor_get(v_val_3633_, 3);
lean_inc(v_maxKeys_3637_);
v_startAfter_3638_ = lean_ctor_get(v_val_3633_, 4);
lean_inc(v_startAfter_3638_);
v_encodingType_3639_ = lean_ctor_get(v_val_3633_, 5);
lean_inc(v_encodingType_3639_);
v_fetchOwner_3640_ = lean_ctor_get(v_val_3633_, 6);
lean_inc(v_fetchOwner_3640_);
lean_dec(v_val_3633_);
v___x_3641_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__0));
v___x_3642_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_3634_);
v___x_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3641_);
lean_ctor_set(v___x_3643_, 1, v___x_3642_);
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__1));
v___x_3645_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_continuationToken_3635_);
v___x_3646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3644_);
lean_ctor_set(v___x_3646_, 1, v___x_3645_);
v___x_3647_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__2));
v___x_3648_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_delimiter_3636_);
v___x_3649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___x_3647_);
lean_ctor_set(v___x_3649_, 1, v___x_3648_);
v___x_3650_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__3));
v___x_3651_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_maxKeys_3637_);
lean_dec(v_maxKeys_3637_);
v___x_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3650_);
lean_ctor_set(v___x_3652_, 1, v___x_3651_);
v___x_3653_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__4));
v___x_3654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_startAfter_3638_);
v___x_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3653_);
lean_ctor_set(v___x_3655_, 1, v___x_3654_);
v___x_3656_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__5));
v___x_3657_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0_spec__0(v_encodingType_3639_);
lean_dec(v_encodingType_3639_);
v___x_3658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3656_);
lean_ctor_set(v___x_3658_, 1, v___x_3657_);
v___x_3659_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSS3ListObjectsOptions___lam__0___closed__6));
v___x_3660_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_fetchOwner_3640_);
lean_dec(v_fetchOwner_3640_);
v___x_3661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3661_, 0, v___x_3659_);
lean_ctor_set(v___x_3661_, 1, v___x_3660_);
v___x_3662_ = lean_unsigned_to_nat(7u);
v___x_3663_ = lean_mk_empty_array_with_capacity(v___x_3662_);
v___x_3664_ = lean_array_push(v___x_3663_, v___x_3643_);
v___x_3665_ = lean_array_push(v___x_3664_, v___x_3646_);
v___x_3666_ = lean_array_push(v___x_3665_, v___x_3649_);
v___x_3667_ = lean_array_push(v___x_3666_, v___x_3652_);
v___x_3668_ = lean_array_push(v___x_3667_, v___x_3655_);
v___x_3669_ = lean_array_push(v___x_3668_, v___x_3658_);
v___x_3670_ = lean_array_push(v___x_3669_, v___x_3661_);
v___x_3671_ = l_Lasm_JS_Web_Support_fields(v___x_3670_);
lean_dec_ref(v___x_3670_);
return v___x_3671_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_list(lean_object* v_self_3673_, lean_object* v_input_3674_, lean_object* v_options_3675_){
_start:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3677_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_list___closed__0));
v___x_3678_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0(v_input_3674_);
v___x_3679_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_3675_);
v___x_3680_ = lean_unsigned_to_nat(2u);
v___x_3681_ = lean_mk_empty_array_with_capacity(v___x_3680_);
v___x_3682_ = lean_array_push(v___x_3681_, v___x_3678_);
v___x_3683_ = lean_array_push(v___x_3682_, v___x_3679_);
v___x_3684_ = l_Lasm_JS_Web_Support_args(v___x_3683_);
v___x_3685_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1(v_self_3673_, v___x_3677_, v___x_3684_);
return v___x_3685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_list___boxed(lean_object* v_self_3686_, lean_object* v_input_3687_, lean_object* v_options_3688_, lean_object* v_a_3689_){
_start:
{
lean_object* v_res_3690_; 
v_res_3690_ = l_Lasm_JS_Bun_S3Client_list(v_self_3686_, v_input_3687_, v_options_3688_);
lean_dec(v_options_3688_);
return v_res_3690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0(lean_object* v_b_3691_, lean_object* v_args_3692_){
_start:
{
uint8_t v_construct_3694_; lean_object* v___x_3695_; uint32_t v___x_3696_; uint64_t v___x_3697_; uint64_t v___y_3699_; 
v_construct_3694_ = lean_ctor_get_uint8(v_b_3691_, sizeof(void*)*4);
v___x_3695_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3691_);
v___x_3696_ = 214;
v___x_3697_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__1);
if (v_construct_3694_ == 0)
{
uint64_t v___x_3707_; 
v___x_3707_ = 0ULL;
v___y_3699_ = v___x_3707_;
goto v___jp_3698_;
}
else
{
uint64_t v___x_3708_; 
v___x_3708_ = 4ULL;
v___y_3699_ = v___x_3708_;
goto v___jp_3698_;
}
v___jp_3698_:
{
uint64_t v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3700_ = lean_uint64_lor(v___x_3697_, v___y_3699_);
v___x_3701_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3691_, v_args_3692_);
v___x_3702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0_spec__0___closed__0));
v___x_3703_ = lean_string_append(v___x_3702_, v___x_3695_);
v___x_3704_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Bun_S3Client_new_spec__0___closed__0));
v___x_3705_ = lean_string_append(v___x_3703_, v___x_3704_);
v___x_3706_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3Client_list_spec__1_spec__3(v___x_3695_, v___x_3696_, v___x_3700_, v___x_3701_, v___x_3705_);
return v___x_3706_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0___boxed(lean_object* v_b_3709_, lean_object* v_args_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0(v_b_3709_, v_args_3710_);
lean_dec_ref(v_b_3709_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticList(lean_object* v_input_3721_, lean_object* v_options_3722_){
_start:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3724_ = lean_unsigned_to_nat(2u);
v___x_3725_ = ((lean_object*)(l_Lasm_JS_Bun_S3Client_staticList___closed__2));
v___x_3726_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3Client_list_spec__0(v_input_3721_);
v___x_3727_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_S3File_writer_spec__0(v_options_3722_);
v___x_3728_ = lean_mk_empty_array_with_capacity(v___x_3724_);
v___x_3729_ = lean_array_push(v___x_3728_, v___x_3726_);
v___x_3730_ = lean_array_push(v___x_3729_, v___x_3727_);
v___x_3731_ = l_Lasm_JS_Web_Support_args(v___x_3730_);
v___x_3732_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_JS_Bun_S3Client_staticList_spec__0(v___x_3725_, v___x_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_S3Client_staticList___boxed(lean_object* v_input_3733_, lean_object* v_options_3734_, lean_object* v_a_3735_){
_start:
{
lean_object* v_res_3736_; 
v_res_3736_ = l_Lasm_JS_Bun_S3Client_staticList(v_input_3733_, v_options_3734_);
lean_dec(v_options_3734_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_s3(){
_start:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3746_ = ((lean_object*)(l_Lasm_JS_Bun_s3___closed__3));
v___x_3747_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Web_EventTarget_cast_x3f_spec__0(v___x_3746_);
if (lean_obj_tag(v___x_3747_) == 0)
{
lean_object* v_a_3748_; lean_object* v___x_3750_; uint8_t v_isShared_3751_; uint8_t v_isSharedCheck_3755_; 
v_a_3748_ = lean_ctor_get(v___x_3747_, 0);
v_isSharedCheck_3755_ = !lean_is_exclusive(v___x_3747_);
if (v_isSharedCheck_3755_ == 0)
{
v___x_3750_ = v___x_3747_;
v_isShared_3751_ = v_isSharedCheck_3755_;
goto v_resetjp_3749_;
}
else
{
lean_inc(v_a_3748_);
lean_dec(v___x_3747_);
v___x_3750_ = lean_box(0);
v_isShared_3751_ = v_isSharedCheck_3755_;
goto v_resetjp_3749_;
}
v_resetjp_3749_:
{
lean_object* v___x_3753_; 
if (v_isShared_3751_ == 0)
{
v___x_3753_ = v___x_3750_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v_a_3748_);
v___x_3753_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
return v___x_3753_;
}
}
}
else
{
lean_object* v_a_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3763_; 
v_a_3756_ = lean_ctor_get(v___x_3747_, 0);
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3747_);
if (v_isSharedCheck_3763_ == 0)
{
v___x_3758_ = v___x_3747_;
v_isShared_3759_ = v_isSharedCheck_3763_;
goto v_resetjp_3757_;
}
else
{
lean_inc(v_a_3756_);
lean_dec(v___x_3747_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3763_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v___x_3761_; 
if (v_isShared_3759_ == 0)
{
v___x_3761_ = v___x_3758_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v_a_3756_);
v___x_3761_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
return v___x_3761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_s3___boxed(lean_object* v_a_3764_){
_start:
{
lean_object* v_res_3765_; 
v_res_3765_ = l_Lasm_JS_Bun_s3();
return v_res_3765_;
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
