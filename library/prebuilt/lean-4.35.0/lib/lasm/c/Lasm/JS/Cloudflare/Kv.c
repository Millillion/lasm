// Lean compiler output
// Module: Lasm.JS.Cloudflare.Kv
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Support public import Lasm.JS.Web.Streams
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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSData;
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSKVNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespace___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespace = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespace___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Cloudflare.KVNamespace"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespace___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cacheTtl"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "limit"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prefix"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cursor"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "expiration"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "metadata"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__1;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Cloudflare.KVNamespaceListKey"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "list_complete"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "keys"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "cacheStatus"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__2;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Cloudflare.KVNamespaceListResult"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_readableStream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_readableStream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_bufferSource_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_bufferSource_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrReadableStreamOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrReadableStreamOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDOMStringOrReadableStreamOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrReadableStreamOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrReadableStreamOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrReadableStreamOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrReadableStreamOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrReadableStreamOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrReadableStreamOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrReadableStreamOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrReadableStreamOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrReadableStreamOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrReadableStreamOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrReadableStreamOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamDOMStringOrReadableStreamOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeReadableStreamDOMStringOrReadableStreamOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeReadableStreamDOMStringOrReadableStreamOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamDOMStringOrReadableStreamOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeReadableStreamDOMStringOrReadableStreamOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamDOMStringOrReadableStreamOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeReadableStreamDOMStringOrReadableStreamOrBufferSource___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrReadableStreamOrBufferSource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrReadableStreamOrBufferSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrReadableStreamOrBufferSource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrReadableStreamOrBufferSource___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrReadableStreamOrBufferSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrReadableStreamOrBufferSource = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrReadableStreamOrBufferSource___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "expirationTtl"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Lasm.JS.Cloudflare.KVNamespaceGetWithMetadataResult"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__3_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_KVNamespace_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_get___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_get___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__1_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_KVNamespace_getJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "json"};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getJson___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getJson___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_KVNamespace_getJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getJson___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getJson___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getJson(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getJson___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arrayBuffer"};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__1_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Option (Lasm.JS.Web.ReadableStream)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_KVNamespace_getStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stream"};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getStream___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_KVNamespace_getStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getStream___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getStream___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getStream___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getStream(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getStream___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Nat)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__3_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__4;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__5_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__6_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__7 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Array (Lasm.JS.Cloudflare.KVNamespaceListKey)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "an element is not Lasm.JS.Cloudflare.KVNamespaceListKey"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_KVNamespace_list___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "list"};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_list___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_list___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_list(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_list___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_put_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_KVNamespace_put___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "put"};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_put___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_put___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_put(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_put___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "getWithMetadata"};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_KVNamespace_delete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_JS_Cloudflare_KVNamespace_delete___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_KVNamespace_delete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_delete(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_delete___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Cloudflare_instFromJSKVNamespace___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___lam__0(lean_object* v___f_23_, lean_object* v_d_24_){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_25_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___lam__0___closed__0));
v___x_26_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_23_, v_d_24_);
v___x_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_25_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
v___x_28_ = lean_unsigned_to_nat(1u);
v___x_29_ = lean_mk_empty_array_with_capacity(v___x_28_);
v___x_30_ = lean_array_push(v___x_29_, v___x_27_);
v___x_31_ = l_Lasm_JS_Web_Support_fields(v___x_30_);
lean_dec_ref(v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0(lean_object* v___f_39_, lean_object* v___f_40_, lean_object* v_d_41_){
_start:
{
lean_object* v_limit_42_; lean_object* v_prefix_43_; lean_object* v_cursor_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v_limit_42_ = lean_ctor_get(v_d_41_, 0);
lean_inc(v_limit_42_);
v_prefix_43_ = lean_ctor_get(v_d_41_, 1);
lean_inc(v_prefix_43_);
v_cursor_44_ = lean_ctor_get(v_d_41_, 2);
lean_inc(v_cursor_44_);
lean_dec_ref(v_d_41_);
v___x_45_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__0));
v___x_46_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_39_, v_limit_42_);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_45_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
v___x_48_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__1));
lean_inc_ref(v___f_40_);
v___x_49_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_40_, v_prefix_43_);
v___x_50_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_48_);
lean_ctor_set(v___x_50_, 1, v___x_49_);
v___x_51_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__2));
v___x_52_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_40_, v_cursor_44_);
v___x_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_51_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = lean_unsigned_to_nat(3u);
v___x_55_ = lean_mk_empty_array_with_capacity(v___x_54_);
v___x_56_ = lean_array_push(v___x_55_, v___x_47_);
v___x_57_ = lean_array_push(v___x_56_, v___x_50_);
v___x_58_ = lean_array_push(v___x_57_, v___x_53_);
v___x_59_ = l_Lasm_JS_Web_Support_fields(v___x_58_);
lean_dec_ref(v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0(lean_object* v___x_68_, lean_object* v___x_69_, lean_object* v___x_70_, lean_object* v_d_71_){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__0));
v___x_73_ = l_Lasm_JS_readField___redArg(v___x_68_, v_d_71_, v___x_72_);
if (lean_obj_tag(v___x_73_) == 0)
{
lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
lean_dec_ref(v___x_70_);
lean_dec_ref(v___x_69_);
v_a_74_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_73_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_73_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
else
{
lean_object* v_a_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_a_82_ = lean_ctor_get(v___x_73_, 0);
lean_inc(v_a_82_);
lean_dec_ref_known(v___x_73_, 1);
v___x_83_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__1));
v___x_84_ = l_Lasm_JS_readField___redArg(v___x_69_, v_d_71_, v___x_83_);
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v_a_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_92_; 
lean_dec(v_a_82_);
lean_dec_ref(v___x_70_);
v_a_85_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_92_ == 0)
{
v___x_87_ = v___x_84_;
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_a_85_);
lean_dec(v___x_84_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_a_85_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_a_93_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_a_93_);
lean_dec_ref_known(v___x_84_, 1);
v___x_94_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2));
v___x_95_ = l_Lasm_JS_readField___redArg(v___x_70_, v_d_71_, v___x_94_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
lean_dec(v_a_93_);
lean_dec(v_a_82_);
v_a_96_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___x_95_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_95_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_96_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
else
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_112_; 
v_a_104_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_112_ == 0)
{
v___x_106_ = v___x_95_;
v_isShared_107_ = v_isSharedCheck_112_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_95_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_112_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_108_, 0, v_a_82_);
lean_ctor_set(v___x_108_, 1, v_a_93_);
lean_ctor_set(v___x_108_, 2, v_a_104_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 0, v___x_108_);
v___x_110_ = v___x_106_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___boxed(lean_object* v___x_113_, lean_object* v___x_114_, lean_object* v___x_115_, lean_object* v_d_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0(v___x_113_, v___x_114_, v___x_115_, v_d_116_);
lean_dec(v_d_116_);
return v_res_117_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__0(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = l_Lasm_JS_instFromJSNat;
v___x_119_ = l_Lasm_JS_instFromJSOption___redArg(v___x_118_);
return v___x_119_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__1(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___f_123_; 
v___x_120_ = l_Lasm_JS_instFromJSData;
v___x_121_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__0, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__0);
v___x_122_ = l_Lasm_JS_instFromJSString;
v___f_123_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___boxed), 4, 3);
lean_closure_set(v___f_123_, 0, v___x_122_);
lean_closure_set(v___f_123_, 1, v___x_121_);
lean_closure_set(v___f_123_, 2, v___x_120_);
return v___f_123_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__3(void){
_start:
{
uint8_t v___x_125_; lean_object* v___x_126_; lean_object* v___f_127_; lean_object* v___x_128_; 
v___x_125_ = 0;
v___x_126_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__2));
v___f_127_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__1, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__1);
v___x_128_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_128_, 0, v___f_127_);
lean_ctor_set(v___x_128_, 1, v___x_126_);
lean_ctor_set_uint8(v___x_128_, sizeof(void*)*2, v___x_125_);
return v___x_128_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__3, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__3_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___closed__3);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0(lean_object* v___x_133_, lean_object* v___x_134_, lean_object* v___x_135_, lean_object* v_d_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__0));
v___x_138_ = l_Lasm_JS_readField___redArg(v___x_133_, v_d_136_, v___x_137_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec_ref(v___x_135_);
lean_dec_ref(v___x_134_);
v_a_139_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_138_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_138_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v_a_147_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_147_);
lean_dec_ref_known(v___x_138_, 1);
v___x_148_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__1));
v___x_149_ = l_Lasm_JS_readField___redArg(v___x_134_, v_d_136_, v___x_148_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
lean_dec(v_a_147_);
lean_dec_ref(v___x_135_);
v_a_150_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_157_ == 0)
{
v___x_152_ = v___x_149_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_149_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_a_150_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
else
{
lean_object* v_a_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v_a_158_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_158_);
lean_dec_ref_known(v___x_149_, 1);
v___x_159_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__2));
lean_inc_ref(v___x_135_);
v___x_160_ = l_Lasm_JS_readField___redArg(v___x_135_, v_d_136_, v___x_159_);
if (lean_obj_tag(v___x_160_) == 0)
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_168_; 
lean_dec(v_a_158_);
lean_dec(v_a_147_);
lean_dec_ref(v___x_135_);
v_a_161_ = lean_ctor_get(v___x_160_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_160_);
if (v_isSharedCheck_168_ == 0)
{
v___x_163_ = v___x_160_;
v_isShared_164_ = v_isSharedCheck_168_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_168_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_166_; 
if (v_isShared_164_ == 0)
{
v___x_166_ = v___x_163_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_a_161_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
else
{
lean_object* v_a_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_a_169_ = lean_ctor_get(v___x_160_, 0);
lean_inc(v_a_169_);
lean_dec_ref_known(v___x_160_, 1);
v___x_170_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__2));
v___x_171_ = l_Lasm_JS_readField___redArg(v___x_135_, v_d_136_, v___x_170_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
lean_dec(v_a_169_);
lean_dec(v_a_158_);
lean_dec(v_a_147_);
v_a_172_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_171_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_171_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
else
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_189_; 
v_a_180_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_189_ == 0)
{
v___x_182_ = v___x_171_;
v_isShared_183_ = v_isSharedCheck_189_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_171_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_189_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; uint8_t v___x_185_; lean_object* v___x_187_; 
v___x_184_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_184_, 0, v_a_158_);
lean_ctor_set(v___x_184_, 1, v_a_169_);
lean_ctor_set(v___x_184_, 2, v_a_180_);
v___x_185_ = lean_unbox(v_a_147_);
lean_dec(v_a_147_);
lean_ctor_set_uint8(v___x_184_, sizeof(void*)*3, v___x_185_);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___x_184_);
v___x_187_ = v___x_182_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_184_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___boxed(lean_object* v___x_190_, lean_object* v___x_191_, lean_object* v___x_192_, lean_object* v_d_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0(v___x_190_, v___x_191_, v___x_192_, v_d_193_);
lean_dec(v_d_193_);
return v_res_194_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__0(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey;
v___x_196_ = l_Lasm_JS_instFromJSArray___redArg(v___x_195_);
return v___x_196_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = l_Lasm_JS_instFromJSString;
v___x_198_ = l_Lasm_JS_instFromJSOption___redArg(v___x_197_);
return v___x_198_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__2(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___f_202_; 
v___x_199_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1);
v___x_200_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__0, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__0);
v___x_201_ = l_Lasm_JS_instFromJSBool;
v___f_202_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___boxed), 4, 3);
lean_closure_set(v___f_202_, 0, v___x_201_);
lean_closure_set(v___f_202_, 1, v___x_200_);
lean_closure_set(v___f_202_, 2, v___x_199_);
return v___f_202_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__4(void){
_start:
{
uint8_t v___x_204_; lean_object* v___x_205_; lean_object* v___f_206_; lean_object* v___x_207_; 
v___x_204_ = 0;
v___x_205_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__3));
v___f_206_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__2, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__2);
v___x_207_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_207_, 0, v___f_206_);
lean_ctor_set(v___x_207_, 1, v___x_205_);
lean_ctor_set_uint8(v___x_207_, sizeof(void*)*2, v___x_204_);
return v___x_207_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__4, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__4_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__4);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorIdx(lean_object* v_x_209_){
_start:
{
switch(lean_obj_tag(v_x_209_))
{
case 0:
{
lean_object* v___x_210_; 
v___x_210_ = lean_unsigned_to_nat(0u);
return v___x_210_;
}
case 1:
{
lean_object* v___x_211_; 
v___x_211_ = lean_unsigned_to_nat(1u);
return v___x_211_;
}
default: 
{
lean_object* v___x_212_; 
v___x_212_ = lean_unsigned_to_nat(2u);
return v___x_212_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorIdx___boxed(lean_object* v_x_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorIdx(v_x_213_);
lean_dec_ref(v_x_213_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(lean_object* v_t_215_, lean_object* v_k_216_){
_start:
{
if (lean_obj_tag(v_t_215_) == 1)
{
lean_object* v_value_217_; lean_object* v___x_218_; 
v_value_217_ = lean_ctor_get(v_t_215_, 0);
lean_inc(v_value_217_);
lean_dec_ref_known(v_t_215_, 1);
v___x_218_ = lean_apply_1(v_k_216_, v_value_217_);
return v___x_218_;
}
else
{
lean_object* v_value_219_; lean_object* v___x_220_; 
v_value_219_ = lean_ctor_get(v_t_215_, 0);
lean_inc_ref(v_value_219_);
lean_dec_ref(v_t_215_);
v___x_220_ = lean_apply_1(v_k_216_, v_value_219_);
return v___x_220_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim(lean_object* v_motive_221_, lean_object* v_ctorIdx_222_, lean_object* v_t_223_, lean_object* v_h_224_, lean_object* v_k_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(v_t_223_, v_k_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___boxed(lean_object* v_motive_227_, lean_object* v_ctorIdx_228_, lean_object* v_t_229_, lean_object* v_h_230_, lean_object* v_k_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim(v_motive_227_, v_ctorIdx_228_, v_t_229_, v_h_230_, v_k_231_);
lean_dec(v_ctorIdx_228_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_domString_elim___redArg(lean_object* v_t_233_, lean_object* v_domString_234_){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(v_t_233_, v_domString_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_domString_elim(lean_object* v_motive_236_, lean_object* v_t_237_, lean_object* v_h_238_, lean_object* v_domString_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(v_t_237_, v_domString_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_readableStream_elim___redArg(lean_object* v_t_241_, lean_object* v_readableStream_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(v_t_241_, v_readableStream_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_readableStream_elim(lean_object* v_motive_244_, lean_object* v_t_245_, lean_object* v_h_246_, lean_object* v_readableStream_247_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(v_t_245_, v_readableStream_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_bufferSource_elim___redArg(lean_object* v_t_249_, lean_object* v_bufferSource_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(v_t_249_, v_bufferSource_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_bufferSource_elim(lean_object* v_motive_252_, lean_object* v_t_253_, lean_object* v_h_254_, lean_object* v_bufferSource_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lasm_JS_Cloudflare_DOMStringOrReadableStreamOrBufferSource_ctorElim___redArg(v_t_253_, v_bufferSource_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrReadableStreamOrBufferSource___lam__0(lean_object* v_x_257_){
_start:
{
switch(lean_obj_tag(v_x_257_))
{
case 0:
{
lean_object* v_value_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
v_value_258_ = lean_ctor_get(v_x_257_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v_x_257_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v_x_257_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_value_258_);
lean_dec(v_x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set_tag(v___x_260_, 4);
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_value_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
case 1:
{
lean_object* v_value_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v_value_266_ = lean_ctor_get(v_x_257_, 0);
lean_inc(v_value_266_);
lean_dec_ref_known(v_x_257_, 1);
v___x_267_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_268_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_268_, 0, v_value_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
return v___x_268_;
}
default: 
{
lean_object* v_value_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
v_value_269_ = lean_ctor_get(v_x_257_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v_x_257_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v_x_257_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_value_269_);
lean_dec(v_x_257_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
lean_ctor_set_tag(v___x_271_, 6);
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_value_269_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrReadableStreamOrBufferSource___lam__0(lean_object* v_value_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v_value_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeReadableStreamDOMStringOrReadableStreamOrBufferSource___lam__0(lean_object* v_value_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_284_, 0, v_value_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeByteArrayDOMStringOrReadableStreamOrBufferSource___lam__0(lean_object* v_value_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_288_, 0, v_value_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___lam__0(lean_object* v___f_292_, lean_object* v_d_293_){
_start:
{
lean_object* v_expiration_294_; lean_object* v_expirationTtl_295_; lean_object* v_metadata_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v_expiration_294_ = lean_ctor_get(v_d_293_, 0);
lean_inc(v_expiration_294_);
v_expirationTtl_295_ = lean_ctor_get(v_d_293_, 1);
lean_inc(v_expirationTtl_295_);
v_metadata_296_ = lean_ctor_get(v_d_293_, 2);
lean_inc(v_metadata_296_);
lean_dec_ref(v_d_293_);
v___x_297_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__1));
lean_inc_ref(v___f_292_);
v___x_298_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_292_, v_expiration_294_);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___lam__0___closed__0));
v___x_301_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_292_, v_expirationTtl_295_);
v___x_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2));
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v_metadata_296_);
v___x_305_ = lean_unsigned_to_nat(3u);
v___x_306_ = lean_mk_empty_array_with_capacity(v___x_305_);
v___x_307_ = lean_array_push(v___x_306_, v___x_299_);
v___x_308_ = lean_array_push(v___x_307_, v___x_302_);
v___x_309_ = lean_array_push(v___x_308_, v___x_304_);
v___x_310_ = l_Lasm_JS_Web_Support_fields(v___x_309_);
lean_dec_ref(v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0(lean_object* v___x_315_, lean_object* v___x_316_, lean_object* v_d_317_){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0___closed__0));
lean_inc_ref(v___x_315_);
v___x_319_ = l_Lasm_JS_readField___redArg(v___x_315_, v_d_317_, v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec_ref(v___x_316_);
lean_dec_ref(v___x_315_);
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_a_328_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_328_);
lean_dec_ref_known(v___x_319_, 1);
v___x_329_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2));
v___x_330_ = l_Lasm_JS_readField___redArg(v___x_316_, v_d_317_, v___x_329_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec(v_a_328_);
lean_dec_ref(v___x_315_);
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_a_339_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v___x_330_, 1);
v___x_340_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__2));
v___x_341_ = l_Lasm_JS_readField___redArg(v___x_315_, v_d_317_, v___x_340_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec(v_a_339_);
lean_dec(v_a_328_);
v_a_342_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_341_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_341_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_358_; 
v_a_350_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_358_ == 0)
{
v___x_352_ = v___x_341_;
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_341_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_354_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_354_, 0, v_a_328_);
lean_ctor_set(v___x_354_, 1, v_a_339_);
lean_ctor_set(v___x_354_, 2, v_a_350_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_354_);
v___x_356_ = v___x_352_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0___boxed(lean_object* v___x_359_, lean_object* v___x_360_, lean_object* v_d_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0(v___x_359_, v___x_360_, v_d_361_);
lean_dec(v_d_361_);
return v_res_362_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__0(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___f_365_; 
v___x_363_ = l_Lasm_JS_instFromJSData;
v___x_364_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__1);
v___f_365_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_365_, 0, v___x_364_);
lean_closure_set(v___f_365_, 1, v___x_363_);
return v___f_365_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__2(void){
_start:
{
uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___f_369_; lean_object* v___x_370_; 
v___x_367_ = 0;
v___x_368_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__1));
v___f_369_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__0, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__0);
v___x_370_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_370_, 0, v___f_369_);
lean_ctor_set(v___x_370_, 1, v___x_368_);
lean_ctor_set_uint8(v___x_370_, sizeof(void*)*2, v___x_367_);
return v___x_370_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__2, &l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__2);
return v___x_371_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__4(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_377_ = lean_string_utf8_byte_size(v___x_376_);
return v___x_377_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_378_ = lean_unsigned_to_nat(0u);
v___x_379_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__4);
v___x_380_ = lean_nat_dec_eq(v___x_379_, v___x_378_);
return v___x_380_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_385_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__9));
v___x_386_ = lean_unsigned_to_nat(46u);
v___x_387_ = lean_unsigned_to_nat(193u);
v___x_388_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__8));
v___x_389_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__7));
v___x_390_ = l_mkPanicMessageWithDecl(v___x_389_, v___x_388_, v___x_387_, v___x_386_, v___x_385_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3(lean_object* v_context_392_, lean_object* v_d_393_){
_start:
{
lean_object* v___y_399_; lean_object* v___y_400_; 
switch(lean_obj_tag(v_d_393_))
{
case 1:
{
goto v___jp_395_;
}
case 0:
{
goto v___jp_395_;
}
default: 
{
if (lean_obj_tag(v_d_393_) == 4)
{
lean_object* v_s_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v_s_404_ = lean_ctor_get(v_d_393_, 0);
lean_inc_ref(v_s_404_);
lean_dec_ref_known(v_d_393_, 1);
v___x_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_405_, 0, v_s_404_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
else
{
lean_object* v___x_407_; lean_object* v_received_409_; 
v___x_407_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
if (lean_obj_tag(v_d_393_) == 9)
{
lean_object* v_value_423_; lean_object* v_description_424_; uint8_t v___x_425_; 
v_value_423_ = lean_ctor_get(v_d_393_, 0);
v_description_424_ = lean_ctor_get(v_d_393_, 1);
v___x_425_ = lean_string_dec_eq(v_description_424_, v___x_407_);
if (v___x_425_ == 0)
{
goto v___jp_421_;
}
else
{
uint32_t v___x_426_; uint64_t v___x_427_; lean_object* v___x_428_; uint32_t v___x_429_; lean_object* v___x_430_; 
lean_inc_n(v_value_423_, 2);
lean_dec_ref_known(v_d_393_, 2);
v___x_426_ = 206;
v___x_427_ = 0ULL;
v___x_428_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_428_, 0, v_value_423_);
lean_ctor_set(v___x_428_, 1, v___x_407_);
v___x_429_ = lasm_js_value_handle(v_value_423_);
lean_dec(v_value_423_);
v___x_430_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_426_, v___x_427_, v___x_428_, v___x_429_);
lean_dec_ref_known(v___x_428_, 2);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v_a_431_; uint8_t v___x_432_; 
v_a_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_a_431_);
lean_dec_ref_known(v___x_430_, 1);
v___x_432_ = lean_string_validate_utf8(v_a_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec(v_a_431_);
v___x_433_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10);
v___x_434_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_433_);
v_received_409_ = v___x_434_;
goto v___jp_408_;
}
else
{
lean_object* v___x_435_; 
v___x_435_ = lean_string_from_utf8_unchecked(v_a_431_);
v_received_409_ = v___x_435_;
goto v___jp_408_;
}
}
else
{
lean_object* v___x_436_; 
lean_dec_ref_known(v___x_430_, 1);
v___x_436_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__11));
v_received_409_ = v___x_436_;
goto v___jp_408_;
}
}
}
else
{
goto v___jp_421_;
}
v___jp_408_:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_410_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__0));
v___x_411_ = lean_string_append(v___x_410_, v_context_392_);
v___x_412_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__1));
v___x_413_ = lean_string_append(v___x_411_, v___x_412_);
v___x_414_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__2));
v___x_415_ = lean_string_append(v___x_413_, v___x_414_);
v___x_416_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__3));
v___x_417_ = lean_string_append(v___x_415_, v___x_416_);
v___x_418_ = lean_string_append(v___x_417_, v_received_409_);
lean_dec_ref(v_received_409_);
v___x_419_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; 
v___x_420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__6));
v___y_399_ = v___x_418_;
v___y_400_ = v___x_420_;
goto v___jp_398_;
}
else
{
v___y_399_ = v___x_418_;
v___y_400_ = v___x_407_;
goto v___jp_398_;
}
}
v___jp_421_:
{
lean_object* v___x_422_; 
v___x_422_ = l_Lasm_JS_Data_describe(v_d_393_);
v_received_409_ = v___x_422_;
goto v___jp_408_;
}
}
}
}
v___jp_395_:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_box(0);
v___x_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
return v___x_397_;
}
v___jp_398_:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_string_append(v___y_399_, v___y_400_);
v___x_402_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
v___x_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___boxed(lean_object* v_context_437_, lean_object* v_d_438_, lean_object* v_a_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3(v_context_437_, v_d_438_);
lean_dec_ref(v_context_437_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__0(lean_object* v_context_441_, lean_object* v_x_442_){
_start:
{
lean_object* v_val_445_; 
if (lean_obj_tag(v_x_442_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_455_; 
v_a_447_ = lean_ctor_get(v_x_442_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_442_);
if (v_isSharedCheck_455_ == 0)
{
v___x_449_ = v_x_442_;
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v_x_442_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_455_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_454_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; 
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_469_; 
v_a_456_ = lean_ctor_get(v_x_442_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_442_);
if (v_isSharedCheck_469_ == 0)
{
v___x_458_ = v_x_442_;
v_isShared_459_ = v_isSharedCheck_469_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v_x_442_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_469_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3(v_context_441_, v_a_456_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v_a_461_);
v___x_463_ = v___x_458_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
v_val_445_ = v___x_463_;
goto v___jp_444_;
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; 
v_a_465_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_460_, 1);
if (v_isShared_459_ == 0)
{
lean_ctor_set_tag(v___x_458_, 0);
lean_ctor_set(v___x_458_, 0, v_a_465_);
v___x_467_ = v___x_458_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
v_val_445_ = v___x_467_;
goto v___jp_444_;
}
}
}
}
v___jp_444_:
{
lean_object* v___x_446_; 
v___x_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_446_, 0, v_val_445_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__0___boxed(lean_object* v_context_470_, lean_object* v_x_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__0(v_context_470_, v_x_471_);
lean_dec_ref(v_context_470_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__8(lean_object* v___f_474_, lean_object* v_x_475_){
_start:
{
if (lean_obj_tag(v_x_475_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_485_; 
lean_dec_ref(v___f_474_);
v_a_477_ = lean_ctor_get(v_x_475_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v_x_475_);
if (v_isSharedCheck_485_ == 0)
{
v___x_479_ = v_x_475_;
v_isShared_480_ = v_isSharedCheck_485_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v_x_475_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_485_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_484_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
lean_object* v___x_483_; 
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
}
else
{
lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_497_; 
v_isSharedCheck_497_ = !lean_is_exclusive(v_x_475_);
if (v_isSharedCheck_497_ == 0)
{
lean_object* v_unused_498_; 
v_unused_498_ = lean_ctor_get(v_x_475_, 0);
lean_dec(v_unused_498_);
v___x_487_ = v_x_475_;
v_isShared_488_ = v_isSharedCheck_497_;
goto v_resetjp_486_;
}
else
{
lean_dec(v_x_475_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_497_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_489_ = lean_unsigned_to_nat(0u);
v___x_490_ = 0;
v___x_491_ = lean_io_promise_new();
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_491_);
v___x_493_ = v___x_487_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_496_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
v___x_495_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_489_, v___x_490_, v___x_494_, v___f_474_);
return v___x_495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__8___boxed(lean_object* v___f_499_, lean_object* v_x_500_, lean_object* v___y_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__8(v___f_499_, v_x_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__2(lean_object* v___f_503_, lean_object* v_x_504_){
_start:
{
if (lean_obj_tag(v_x_504_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_514_; 
lean_dec_ref(v___f_503_);
v_a_506_ = lean_ctor_get(v_x_504_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v_x_504_);
if (v_isSharedCheck_514_ == 0)
{
v___x_508_ = v_x_504_;
v_isShared_509_ = v_isSharedCheck_514_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v_x_504_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_514_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_513_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_512_; 
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
else
{
lean_object* v_a_515_; lean_object* v___x_516_; 
v_a_515_ = lean_ctor_get(v_x_504_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v_x_504_, 1);
v___x_516_ = lean_apply_2(v___f_503_, v_a_515_, lean_box(0));
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__2___boxed(lean_object* v___f_517_, lean_object* v_x_518_, lean_object* v___y_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__2(v___f_517_, v_x_518_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4(lean_object* v_failurePrefix_521_, lean_object* v_x_522_){
_start:
{
if (lean_obj_tag(v_x_522_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_535_; 
v_a_524_ = lean_ctor_get(v_x_522_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v_x_522_);
if (v_isSharedCheck_535_ == 0)
{
v___x_526_ = v_x_522_;
v_isShared_527_ = v_isSharedCheck_535_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v_x_522_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_535_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_528_ = lean_io_error_to_string(v_a_524_);
v___x_529_ = lean_string_append(v_failurePrefix_521_, v___x_528_);
lean_dec_ref(v___x_528_);
v___x_530_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_530_);
v___x_532_ = v___x_526_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_534_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
return v___x_533_;
}
}
}
else
{
lean_object* v___x_536_; 
lean_dec_ref(v_failurePrefix_521_);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v_x_522_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4___boxed(lean_object* v_failurePrefix_537_, lean_object* v_x_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4(v_failurePrefix_537_, v_x_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__1(lean_object* v___f_541_, lean_object* v_bytes_542_){
_start:
{
lean_object* v___x_544_; uint8_t v___x_545_; lean_object* v_val_547_; lean_object* v___x_550_; 
v___x_544_ = lean_unsigned_to_nat(0u);
v___x_545_ = 0;
v___x_550_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_542_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_551_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_550_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_550_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
lean_ctor_set_tag(v___x_553_, 1);
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
v_val_547_ = v___x_556_;
goto v___jp_546_;
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
v_a_559_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_550_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_550_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
lean_ctor_set_tag(v___x_561_, 0);
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
v_val_547_ = v___x_564_;
goto v___jp_546_;
}
}
}
v___jp_546_:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v_val_547_);
v___x_549_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_544_, v___x_545_, v___x_548_, v___f_541_);
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__1___boxed(lean_object* v___f_567_, lean_object* v_bytes_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__1(v___f_567_, v_bytes_568_);
lean_dec_ref(v_bytes_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7(lean_object* v___f_571_, lean_object* v_a_572_, uint32_t v_op_573_, uint64_t v_flags_574_, lean_object* v_payload_575_, lean_object* v_x_576_){
_start:
{
if (lean_obj_tag(v_x_576_) == 0)
{
lean_object* v___x_578_; 
lean_dec_ref(v___f_571_);
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v_x_576_);
return v___x_578_;
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_599_; 
v_a_579_ = lean_ctor_get(v_x_576_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v_x_576_);
if (v_isSharedCheck_599_ == 0)
{
v___x_581_ = v_x_576_;
v_isShared_582_ = v_isSharedCheck_599_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v_x_576_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_599_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
uint32_t v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; lean_object* v_val_587_; lean_object* v___x_590_; 
v___x_583_ = 0;
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = 0;
v___x_590_ = lasm_js_call_into(v_a_572_, v_op_573_, v___x_583_, v_flags_574_, v_a_579_, v_payload_575_);
lean_dec(v_a_579_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_593_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_590_, 1);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v_a_591_);
v___x_593_ = v___x_581_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
v_val_587_ = v___x_593_;
goto v___jp_586_;
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_597_; 
v_a_595_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_590_, 1);
if (v_isShared_582_ == 0)
{
lean_ctor_set_tag(v___x_581_, 0);
lean_ctor_set(v___x_581_, 0, v_a_595_);
v___x_597_ = v___x_581_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
v_val_587_ = v___x_597_;
goto v___jp_586_;
}
}
v___jp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v_val_587_);
v___x_589_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_584_, v___x_585_, v___x_588_, v___f_571_);
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7___boxed(lean_object* v___f_600_, lean_object* v_a_601_, lean_object* v_op_602_, lean_object* v_flags_603_, lean_object* v_payload_604_, lean_object* v_x_605_, lean_object* v___y_606_){
_start:
{
uint32_t v_op_boxed_607_; uint64_t v_flags_boxed_608_; lean_object* v_res_609_; 
v_op_boxed_607_ = lean_unbox_uint32(v_op_602_);
lean_dec(v_op_602_);
v_flags_boxed_608_ = lean_unbox_uint64(v_flags_603_);
lean_dec_ref(v_flags_603_);
v_res_609_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7(v___f_600_, v_a_601_, v_op_boxed_607_, v_flags_boxed_608_, v_payload_604_, v_x_605_);
lean_dec(v_payload_604_);
lean_dec(v_a_601_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3(lean_object* v_a_610_, lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_621_; 
v_a_613_ = lean_ctor_get(v_x_611_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_621_ == 0)
{
v___x_615_ = v_x_611_;
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v_x_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_621_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_620_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; 
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
return v___x_619_;
}
}
}
else
{
lean_object* v___x_622_; 
lean_dec_ref_known(v_x_611_, 1);
v___x_622_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_610_);
return v___x_622_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed(lean_object* v_a_623_, lean_object* v_x_624_, lean_object* v___y_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3(v_a_623_, v_x_624_);
lean_dec(v_a_623_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5(lean_object* v___x_627_, uint8_t v___x_628_, lean_object* v___f_629_, lean_object* v_a_630_, uint32_t v_op_631_, uint64_t v_flags_632_, lean_object* v_payload_633_, lean_object* v_x_634_){
_start:
{
lean_object* v_val_637_; 
if (lean_obj_tag(v_x_634_) == 0)
{
lean_object* v___x_640_; 
lean_dec_ref(v___f_629_);
lean_dec(v___x_627_);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v_x_634_);
return v___x_640_;
}
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_655_; 
v_a_641_ = lean_ctor_get(v_x_634_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v_x_634_);
if (v_isSharedCheck_655_ == 0)
{
v___x_643_ = v_x_634_;
v_isShared_644_ = v_isSharedCheck_655_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v_x_634_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_655_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
uint32_t v___x_645_; lean_object* v___x_646_; 
v___x_645_ = 0;
v___x_646_ = lasm_js_call_into(v_a_630_, v_op_631_, v___x_645_, v_flags_632_, v_a_641_, v_payload_633_);
lean_dec(v_a_641_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_a_647_; lean_object* v___x_649_; 
v_a_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_a_647_);
lean_dec_ref_known(v___x_646_, 1);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 0, v_a_647_);
v___x_649_ = v___x_643_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
v_val_637_ = v___x_649_;
goto v___jp_636_;
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; 
v_a_651_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_a_651_);
lean_dec_ref_known(v___x_646_, 1);
if (v_isShared_644_ == 0)
{
lean_ctor_set_tag(v___x_643_, 0);
lean_ctor_set(v___x_643_, 0, v_a_651_);
v___x_653_ = v___x_643_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
v_val_637_ = v___x_653_;
goto v___jp_636_;
}
}
}
}
v___jp_636_:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v_val_637_);
v___x_639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_627_, v___x_628_, v___x_638_, v___f_629_);
return v___x_639_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5___boxed(lean_object* v___x_656_, lean_object* v___x_657_, lean_object* v___f_658_, lean_object* v_a_659_, lean_object* v_op_660_, lean_object* v_flags_661_, lean_object* v_payload_662_, lean_object* v_x_663_, lean_object* v___y_664_){
_start:
{
uint8_t v___x_1611__boxed_665_; uint32_t v_op_boxed_666_; uint64_t v_flags_boxed_667_; lean_object* v_res_668_; 
v___x_1611__boxed_665_ = lean_unbox(v___x_657_);
v_op_boxed_666_ = lean_unbox_uint32(v_op_660_);
lean_dec(v_op_660_);
v_flags_boxed_667_ = lean_unbox_uint64(v_flags_661_);
lean_dec_ref(v_flags_661_);
v_res_668_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5(v___x_656_, v___x_1611__boxed_665_, v___f_658_, v_a_659_, v_op_boxed_666_, v_flags_boxed_667_, v_payload_662_, v_x_663_);
lean_dec(v_payload_662_);
lean_dec(v_a_659_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__6(lean_object* v_failurePrefix_669_, uint32_t v_op_670_, uint64_t v_flags_671_, lean_object* v_payload_672_, lean_object* v___f_673_, lean_object* v___f_674_, lean_object* v___f_675_, lean_object* v_x_676_){
_start:
{
if (lean_obj_tag(v_x_676_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_686_; 
lean_dec_ref(v___f_675_);
lean_dec_ref(v___f_674_);
lean_dec_ref(v___f_673_);
lean_dec(v_payload_672_);
v_a_678_ = lean_ctor_get(v_x_676_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_686_ == 0)
{
v___x_680_ = v_x_676_;
v_isShared_681_ = v_isSharedCheck_686_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v_x_676_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_686_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_685_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_684_; 
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
return v___x_684_;
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_733_; 
v_a_687_ = lean_ctor_get(v_x_676_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_733_ == 0)
{
v___x_689_ = v_x_676_;
v_isShared_690_ = v_isSharedCheck_733_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v_x_676_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_733_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_691_ = lean_string_utf8_byte_size(v_failurePrefix_669_);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_nat_dec_eq(v___x_691_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v___f_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___f_698_; lean_object* v_val_700_; lean_object* v___x_705_; 
lean_dec_ref(v___f_675_);
lean_inc(v_a_687_);
v___f_694_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_694_, 0, v_a_687_);
v___x_695_ = lean_box(v___x_693_);
v___x_696_ = lean_box_uint32(v_op_670_);
v___x_697_ = lean_box_uint64(v_flags_671_);
lean_inc(v_payload_672_);
v___f_698_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_698_, 0, v___x_692_);
lean_closure_set(v___f_698_, 1, v___x_695_);
lean_closure_set(v___f_698_, 2, v___f_694_);
lean_closure_set(v___f_698_, 3, v_a_687_);
lean_closure_set(v___f_698_, 4, v___x_696_);
lean_closure_set(v___f_698_, 5, v___x_697_);
lean_closure_set(v___f_698_, 6, v_payload_672_);
v___x_705_ = l_Lasm_JS_Wire_encodeIO(v_payload_672_);
lean_dec(v_payload_672_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_706_);
lean_dec_ref_known(v___x_705_, 1);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v_a_706_);
v___x_708_ = v___x_689_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
v_val_700_ = v___x_708_;
goto v___jp_699_;
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; 
v_a_710_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_705_, 1);
if (v_isShared_690_ == 0)
{
lean_ctor_set_tag(v___x_689_, 0);
lean_ctor_set(v___x_689_, 0, v_a_710_);
v___x_712_ = v___x_689_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
v_val_700_ = v___x_712_;
goto v___jp_699_;
}
}
v___jp_699_:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v_val_700_);
v___x_702_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_692_, v___x_693_, v___x_701_, v___f_698_);
v___x_703_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_692_, v___x_693_, v___x_702_, v___f_673_);
v___x_704_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_692_, v___x_693_, v___x_703_, v___f_674_);
return v___x_704_;
}
}
else
{
lean_object* v___f_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___f_717_; uint8_t v___x_718_; lean_object* v_val_720_; lean_object* v___x_724_; 
lean_dec_ref(v___f_674_);
lean_dec_ref(v___f_673_);
lean_inc(v_a_687_);
v___f_714_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_714_, 0, v_a_687_);
v___x_715_ = lean_box_uint32(v_op_670_);
v___x_716_ = lean_box_uint64(v_flags_671_);
lean_inc(v_payload_672_);
v___f_717_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_717_, 0, v___f_714_);
lean_closure_set(v___f_717_, 1, v_a_687_);
lean_closure_set(v___f_717_, 2, v___x_715_);
lean_closure_set(v___f_717_, 3, v___x_716_);
lean_closure_set(v___f_717_, 4, v_payload_672_);
v___x_718_ = 0;
v___x_724_ = l_Lasm_JS_Wire_encodeIO(v_payload_672_);
lean_dec(v_payload_672_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v_a_725_);
v___x_727_ = v___x_689_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_725_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
v_val_720_ = v___x_727_;
goto v___jp_719_;
}
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; 
v_a_729_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_724_, 1);
if (v_isShared_690_ == 0)
{
lean_ctor_set_tag(v___x_689_, 0);
lean_ctor_set(v___x_689_, 0, v_a_729_);
v___x_731_ = v___x_689_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
v_val_720_ = v___x_731_;
goto v___jp_719_;
}
}
v___jp_719_:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_val_720_);
v___x_722_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_692_, v___x_718_, v___x_721_, v___f_717_);
v___x_723_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_692_, v___x_718_, v___x_722_, v___f_675_);
return v___x_723_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__6___boxed(lean_object* v_failurePrefix_734_, lean_object* v_op_735_, lean_object* v_flags_736_, lean_object* v_payload_737_, lean_object* v___f_738_, lean_object* v___f_739_, lean_object* v___f_740_, lean_object* v_x_741_, lean_object* v___y_742_){
_start:
{
uint32_t v_op_boxed_743_; uint64_t v_flags_boxed_744_; lean_object* v_res_745_; 
v_op_boxed_743_ = lean_unbox_uint32(v_op_735_);
lean_dec(v_op_735_);
v_flags_boxed_744_ = lean_unbox_uint64(v_flags_736_);
lean_dec_ref(v_flags_736_);
v_res_745_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__6(v_failurePrefix_734_, v_op_boxed_743_, v_flags_boxed_744_, v_payload_737_, v___f_738_, v___f_739_, v___f_740_, v_x_741_);
lean_dec_ref(v_failurePrefix_734_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2(lean_object* v_context_746_, uint32_t v_op_747_, uint64_t v_flags_748_, lean_object* v_payload_749_, lean_object* v_failurePrefix_750_){
_start:
{
lean_object* v___f_752_; lean_object* v___f_753_; lean_object* v___f_754_; lean_object* v___f_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___f_758_; lean_object* v___f_759_; lean_object* v___x_760_; uint8_t v___x_761_; lean_object* v_val_763_; lean_object* v___x_766_; 
v___f_752_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_752_, 0, v_context_746_);
v___f_753_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_753_, 0, v___f_752_);
v___f_754_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_754_, 0, v___f_753_);
lean_inc_ref(v_failurePrefix_750_);
v___f_755_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_755_, 0, v_failurePrefix_750_);
v___x_756_ = lean_box_uint32(v_op_747_);
v___x_757_ = lean_box_uint64(v_flags_748_);
lean_inc_ref(v___f_754_);
v___f_758_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__6___boxed), 9, 7);
lean_closure_set(v___f_758_, 0, v_failurePrefix_750_);
lean_closure_set(v___f_758_, 1, v___x_756_);
lean_closure_set(v___f_758_, 2, v___x_757_);
lean_closure_set(v___f_758_, 3, v_payload_749_);
lean_closure_set(v___f_758_, 4, v___f_755_);
lean_closure_set(v___f_758_, 5, v___f_754_);
lean_closure_set(v___f_758_, 6, v___f_754_);
v___f_759_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__8___boxed), 3, 1);
lean_closure_set(v___f_759_, 0, v___f_758_);
v___x_760_ = lean_unsigned_to_nat(0u);
v___x_761_ = 0;
v___x_766_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_766_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_766_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set_tag(v___x_769_, 1);
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
v_val_763_ = v___x_772_;
goto v___jp_762_;
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
v_a_775_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_766_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_766_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
lean_ctor_set_tag(v___x_777_, 0);
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
v_val_763_ = v___x_780_;
goto v___jp_762_;
}
}
}
v___jp_762_:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_764_, 0, v_val_763_);
v___x_765_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_760_, v___x_761_, v___x_764_, v___f_759_);
return v___x_765_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___boxed(lean_object* v_context_783_, lean_object* v_op_784_, lean_object* v_flags_785_, lean_object* v_payload_786_, lean_object* v_failurePrefix_787_, lean_object* v_a_788_){
_start:
{
uint32_t v_op_boxed_789_; uint64_t v_flags_boxed_790_; lean_object* v_res_791_; 
v_op_boxed_789_ = lean_unbox_uint32(v_op_784_);
lean_dec(v_op_784_);
v_flags_boxed_790_ = lean_unbox_uint64(v_flags_785_);
lean_dec_ref(v_flags_785_);
v_res_791_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2(v_context_783_, v_op_boxed_789_, v_flags_boxed_790_, v_payload_786_, v_failurePrefix_787_);
return v_res_791_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0(void){
_start:
{
uint8_t v___x_792_; uint64_t v___x_793_; 
v___x_792_ = 0;
v___x_793_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_792_);
return v___x_793_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1(uint8_t v_await_794_, uint64_t v_extra_795_){
_start:
{
uint64_t v___x_796_; uint64_t v___y_798_; 
v___x_796_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0);
if (v_await_794_ == 0)
{
uint64_t v___x_801_; 
v___x_801_ = 0ULL;
v___y_798_ = v___x_801_;
goto v___jp_797_;
}
else
{
uint64_t v___x_802_; 
v___x_802_ = 2ULL;
v___y_798_ = v___x_802_;
goto v___jp_797_;
}
v___jp_797_:
{
uint64_t v___x_799_; uint64_t v___x_800_; 
v___x_799_ = lean_uint64_lor(v___x_796_, v___y_798_);
v___x_800_ = lean_uint64_lor(v___x_799_, v_extra_795_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___boxed(lean_object* v_await_803_, lean_object* v_extra_804_){
_start:
{
uint8_t v_await_boxed_805_; uint64_t v_extra_boxed_806_; uint64_t v_res_807_; lean_object* v_r_808_; 
v_await_boxed_805_ = lean_unbox(v_await_803_);
v_extra_boxed_806_ = lean_unbox_uint64(v_extra_804_);
lean_dec_ref(v_extra_804_);
v_res_807_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1(v_await_boxed_805_, v_extra_boxed_806_);
v_r_808_ = lean_box_uint64(v_res_807_);
return v_r_808_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__1(void){
_start:
{
uint64_t v___x_810_; uint8_t v___x_811_; uint64_t v___x_812_; 
v___x_810_ = 8ULL;
v___x_811_ = 0;
v___x_812_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1(v___x_811_, v___x_810_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1(lean_object* v_o_813_, lean_object* v_name_814_, lean_object* v_args_815_){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; uint32_t v___x_822_; uint64_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_817_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_818_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_818_, 0, v_o_813_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
lean_inc_ref(v_name_814_);
v___x_819_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_819_, 0, v_name_814_);
v___x_820_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__0));
v___x_821_ = lean_string_append(v___x_820_, v_name_814_);
lean_dec_ref(v_name_814_);
v___x_822_ = 205;
v___x_823_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__1);
v___x_824_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_824_, 0, v_args_815_);
v___x_825_ = lean_unsigned_to_nat(3u);
v___x_826_ = lean_mk_empty_array_with_capacity(v___x_825_);
v___x_827_ = lean_array_push(v___x_826_, v___x_818_);
v___x_828_ = lean_array_push(v___x_827_, v___x_819_);
v___x_829_ = lean_array_push(v___x_828_, v___x_824_);
v___x_830_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
v___x_831_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2(v___x_821_, v___x_822_, v___x_823_, v___x_830_, v___x_817_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___boxed(lean_object* v_o_832_, lean_object* v_name_833_, lean_object* v_args_834_, lean_object* v___y_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1(v_o_832_, v_name_833_, v_args_834_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__0(lean_object* v_x_837_){
_start:
{
if (lean_obj_tag(v_x_837_) == 0)
{
lean_object* v___x_838_; 
v___x_838_ = lean_box(0);
return v___x_838_;
}
else
{
lean_object* v_val_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_val_839_ = lean_ctor_get(v_x_837_, 0);
lean_inc(v_val_839_);
lean_dec_ref_known(v_x_837_, 1);
v___x_840_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceGetOptions___lam__0___closed__0));
v___x_841_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_val_839_);
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_840_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
v___x_843_ = lean_unsigned_to_nat(1u);
v___x_844_ = lean_mk_empty_array_with_capacity(v___x_843_);
v___x_845_ = lean_array_push(v___x_844_, v___x_842_);
v___x_846_ = l_Lasm_JS_Web_Support_fields(v___x_845_);
lean_dec_ref(v___x_845_);
return v___x_846_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_get(lean_object* v_self_848_, lean_object* v_key_849_, lean_object* v_options_850_){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_852_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_get___closed__0));
v___x_853_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_853_, 0, v_key_849_);
v___x_854_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__0(v_options_850_);
v___x_855_ = lean_unsigned_to_nat(2u);
v___x_856_ = lean_mk_empty_array_with_capacity(v___x_855_);
v___x_857_ = lean_array_push(v___x_856_, v___x_853_);
v___x_858_ = lean_array_push(v___x_857_, v___x_854_);
v___x_859_ = l_Lasm_JS_Web_Support_args(v___x_858_);
v___x_860_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1(v_self_848_, v___x_852_, v___x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_get___boxed(lean_object* v_self_861_, lean_object* v_key_862_, lean_object* v_options_863_, lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lasm_JS_Cloudflare_KVNamespace_get(v_self_861_, v_key_862_, v_options_863_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__9(lean_object* v_failurePrefix_866_, uint32_t v_op_867_, uint64_t v_flags_868_, lean_object* v_payload_869_, lean_object* v___f_870_, lean_object* v___f_871_, lean_object* v___f_872_, lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_873_) == 0)
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_883_; 
lean_dec_ref(v___f_872_);
lean_dec_ref(v___f_871_);
lean_dec_ref(v___f_870_);
lean_dec(v_payload_869_);
v_a_875_ = lean_ctor_get(v_x_873_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v_x_873_);
if (v_isSharedCheck_883_ == 0)
{
v___x_877_ = v_x_873_;
v_isShared_878_ = v_isSharedCheck_883_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v_x_873_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_883_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_875_);
v___x_880_ = v_reuseFailAlloc_882_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
lean_object* v___x_881_; 
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
return v___x_881_;
}
}
}
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_930_; 
v_a_884_ = lean_ctor_get(v_x_873_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v_x_873_);
if (v_isSharedCheck_930_ == 0)
{
v___x_886_ = v_x_873_;
v_isShared_887_ = v_isSharedCheck_930_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v_x_873_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_930_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v___x_888_ = lean_string_utf8_byte_size(v_failurePrefix_866_);
v___x_889_ = lean_unsigned_to_nat(0u);
v___x_890_ = lean_nat_dec_eq(v___x_888_, v___x_889_);
if (v___x_890_ == 0)
{
lean_object* v___f_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___f_895_; lean_object* v_val_897_; lean_object* v___x_902_; 
lean_dec_ref(v___f_872_);
lean_inc(v_a_884_);
v___f_891_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_891_, 0, v_a_884_);
v___x_892_ = lean_box(v___x_890_);
v___x_893_ = lean_box_uint32(v_op_867_);
v___x_894_ = lean_box_uint64(v_flags_868_);
lean_inc(v_payload_869_);
v___f_895_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_895_, 0, v___x_889_);
lean_closure_set(v___f_895_, 1, v___x_892_);
lean_closure_set(v___f_895_, 2, v___f_891_);
lean_closure_set(v___f_895_, 3, v_a_884_);
lean_closure_set(v___f_895_, 4, v___x_893_);
lean_closure_set(v___f_895_, 5, v___x_894_);
lean_closure_set(v___f_895_, 6, v_payload_869_);
v___x_902_ = l_Lasm_JS_Wire_encodeIO(v_payload_869_);
lean_dec(v_payload_869_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v_a_903_; lean_object* v___x_905_; 
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref_known(v___x_902_, 1);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v_a_903_);
v___x_905_ = v___x_886_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
v_val_897_ = v___x_905_;
goto v___jp_896_;
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; 
v_a_907_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_902_, 1);
if (v_isShared_887_ == 0)
{
lean_ctor_set_tag(v___x_886_, 0);
lean_ctor_set(v___x_886_, 0, v_a_907_);
v___x_909_ = v___x_886_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_907_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
v_val_897_ = v___x_909_;
goto v___jp_896_;
}
}
v___jp_896_:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v_val_897_);
v___x_899_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_889_, v___x_890_, v___x_898_, v___f_895_);
v___x_900_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_889_, v___x_890_, v___x_899_, v___f_870_);
v___x_901_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_889_, v___x_890_, v___x_900_, v___f_871_);
return v___x_901_;
}
}
else
{
lean_object* v___f_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___f_914_; uint8_t v___x_915_; lean_object* v_val_917_; lean_object* v___x_921_; 
lean_dec_ref(v___f_871_);
lean_dec_ref(v___f_870_);
lean_inc(v_a_884_);
v___f_911_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_911_, 0, v_a_884_);
v___x_912_ = lean_box_uint32(v_op_867_);
v___x_913_ = lean_box_uint64(v_flags_868_);
lean_inc(v_payload_869_);
v___f_914_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_914_, 0, v___f_911_);
lean_closure_set(v___f_914_, 1, v_a_884_);
lean_closure_set(v___f_914_, 2, v___x_912_);
lean_closure_set(v___f_914_, 3, v___x_913_);
lean_closure_set(v___f_914_, 4, v_payload_869_);
v___x_915_ = 0;
v___x_921_ = l_Lasm_JS_Wire_encodeIO(v_payload_869_);
lean_dec(v_payload_869_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_924_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
lean_dec_ref_known(v___x_921_, 1);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v_a_922_);
v___x_924_ = v___x_886_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
v_val_917_ = v___x_924_;
goto v___jp_916_;
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; 
v_a_926_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_921_, 1);
if (v_isShared_887_ == 0)
{
lean_ctor_set_tag(v___x_886_, 0);
lean_ctor_set(v___x_886_, 0, v_a_926_);
v___x_928_ = v___x_886_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
v_val_917_ = v___x_928_;
goto v___jp_916_;
}
}
v___jp_916_:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v_val_917_);
v___x_919_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_889_, v___x_915_, v___x_918_, v___f_914_);
v___x_920_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_889_, v___x_915_, v___x_919_, v___f_872_);
return v___x_920_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__9___boxed(lean_object* v_failurePrefix_931_, lean_object* v_op_932_, lean_object* v_flags_933_, lean_object* v_payload_934_, lean_object* v___f_935_, lean_object* v___f_936_, lean_object* v___f_937_, lean_object* v_x_938_, lean_object* v___y_939_){
_start:
{
uint32_t v_op_boxed_940_; uint64_t v_flags_boxed_941_; lean_object* v_res_942_; 
v_op_boxed_940_ = lean_unbox_uint32(v_op_932_);
lean_dec(v_op_932_);
v_flags_boxed_941_ = lean_unbox_uint64(v_flags_933_);
lean_dec_ref(v_flags_933_);
v_res_942_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__9(v_failurePrefix_931_, v_op_boxed_940_, v_flags_boxed_941_, v_payload_934_, v___f_935_, v___f_936_, v___f_937_, v_x_938_);
lean_dec_ref(v_failurePrefix_931_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__0(lean_object* v_x_943_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v_x_943_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_x_946_, lean_object* v___y_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__0(v_x_946_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__1(lean_object* v___f_949_, lean_object* v_bytes_950_){
_start:
{
lean_object* v___x_952_; uint8_t v___x_953_; lean_object* v_val_955_; lean_object* v___x_958_; 
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = 0;
v___x_958_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_950_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
v_a_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
lean_ctor_set_tag(v___x_961_, 1);
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
v_val_955_ = v___x_964_;
goto v___jp_954_;
}
}
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
v_a_967_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_958_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_958_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
lean_ctor_set_tag(v___x_969_, 0);
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
v_val_955_ = v___x_972_;
goto v___jp_954_;
}
}
}
v___jp_954_:
{
lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v_val_955_);
v___x_957_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_952_, v___x_953_, v___x_956_, v___f_949_);
return v___x_957_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__1___boxed(lean_object* v___f_975_, lean_object* v_bytes_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__1(v___f_975_, v_bytes_976_);
lean_dec_ref(v_bytes_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__3(lean_object* v___f_979_, lean_object* v_x_980_){
_start:
{
if (lean_obj_tag(v_x_980_) == 0)
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_990_; 
lean_dec_ref(v___f_979_);
v_a_982_ = lean_ctor_get(v_x_980_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v_x_980_);
if (v_isSharedCheck_990_ == 0)
{
v___x_984_ = v_x_980_;
v_isShared_985_ = v_isSharedCheck_990_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v_x_980_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_990_;
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
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_989_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_988_; 
v___x_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_987_);
return v___x_988_;
}
}
}
else
{
lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1002_; 
v_isSharedCheck_1002_ = !lean_is_exclusive(v_x_980_);
if (v_isSharedCheck_1002_ == 0)
{
lean_object* v_unused_1003_; 
v_unused_1003_ = lean_ctor_get(v_x_980_, 0);
lean_dec(v_unused_1003_);
v___x_992_ = v_x_980_;
v_isShared_993_ = v_isSharedCheck_1002_;
goto v_resetjp_991_;
}
else
{
lean_dec(v_x_980_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1002_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; uint8_t v___x_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = 0;
v___x_996_ = lean_io_promise_new();
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_996_);
v___x_998_ = v___x_992_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_996_);
v___x_998_ = v_reuseFailAlloc_1001_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
v___x_1000_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_994_, v___x_995_, v___x_999_, v___f_979_);
return v___x_1000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__3___boxed(lean_object* v___f_1004_, lean_object* v_x_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__3(v___f_1004_, v_x_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__2(lean_object* v___f_1008_, lean_object* v_x_1009_){
_start:
{
if (lean_obj_tag(v_x_1009_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1019_; 
lean_dec_ref(v___f_1008_);
v_a_1011_ = lean_ctor_get(v_x_1009_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_x_1009_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1013_ = v_x_1009_;
v_isShared_1014_ = v_isSharedCheck_1019_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v_x_1009_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1019_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1011_);
v___x_1016_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
return v___x_1017_;
}
}
}
else
{
lean_object* v_a_1020_; lean_object* v___x_1021_; 
v_a_1020_ = lean_ctor_get(v_x_1009_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v_x_1009_, 1);
v___x_1021_ = lean_apply_2(v___f_1008_, v_a_1020_, lean_box(0));
return v___x_1021_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__2___boxed(lean_object* v___f_1022_, lean_object* v_x_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__2(v___f_1022_, v_x_1023_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg(uint32_t v_op_1031_, uint64_t v_flags_1032_, lean_object* v_payload_1033_, lean_object* v_failurePrefix_1034_){
_start:
{
lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___f_1040_; lean_object* v___f_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; lean_object* v_val_1045_; lean_object* v___x_1048_; 
v___f_1036_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___closed__2));
lean_inc_ref(v_failurePrefix_1034_);
v___f_1037_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1037_, 0, v_failurePrefix_1034_);
v___x_1038_ = lean_box_uint32(v_op_1031_);
v___x_1039_ = lean_box_uint64(v_flags_1032_);
v___f_1040_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1040_, 0, v_failurePrefix_1034_);
lean_closure_set(v___f_1040_, 1, v___x_1038_);
lean_closure_set(v___f_1040_, 2, v___x_1039_);
lean_closure_set(v___f_1040_, 3, v_payload_1033_);
lean_closure_set(v___f_1040_, 4, v___f_1037_);
lean_closure_set(v___f_1040_, 5, v___f_1036_);
lean_closure_set(v___f_1040_, 6, v___f_1036_);
v___f_1041_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1041_, 0, v___f_1040_);
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = 0;
v___x_1048_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
v_a_1049_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1048_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1048_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
lean_ctor_set_tag(v___x_1051_, 1);
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
v_val_1045_ = v___x_1054_;
goto v___jp_1044_;
}
}
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
v_a_1057_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1059_ = v___x_1048_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1048_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
lean_ctor_set_tag(v___x_1059_, 0);
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
v_val_1045_ = v___x_1062_;
goto v___jp_1044_;
}
}
}
v___jp_1044_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v_val_1045_);
v___x_1047_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1042_, v___x_1043_, v___x_1046_, v___f_1041_);
return v___x_1047_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg___boxed(lean_object* v_op_1065_, lean_object* v_flags_1066_, lean_object* v_payload_1067_, lean_object* v_failurePrefix_1068_, lean_object* v_a_1069_){
_start:
{
uint32_t v_op_boxed_1070_; uint64_t v_flags_boxed_1071_; lean_object* v_res_1072_; 
v_op_boxed_1070_ = lean_unbox_uint32(v_op_1065_);
lean_dec(v_op_1065_);
v_flags_boxed_1071_ = lean_unbox_uint64(v_flags_1066_);
lean_dec_ref(v_flags_1066_);
v_res_1072_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg(v_op_boxed_1070_, v_flags_boxed_1071_, v_payload_1067_, v_failurePrefix_1068_);
return v_res_1072_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__0(uint8_t v_await_1073_, uint64_t v_extra_1074_){
_start:
{
uint64_t v___x_1075_; uint64_t v___y_1077_; 
v___x_1075_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0);
if (v_await_1073_ == 0)
{
uint64_t v___x_1080_; 
v___x_1080_ = 0ULL;
v___y_1077_ = v___x_1080_;
goto v___jp_1076_;
}
else
{
uint64_t v___x_1081_; 
v___x_1081_ = 2ULL;
v___y_1077_ = v___x_1081_;
goto v___jp_1076_;
}
v___jp_1076_:
{
uint64_t v___x_1078_; uint64_t v___x_1079_; 
v___x_1078_ = lean_uint64_lor(v___x_1075_, v___y_1077_);
v___x_1079_ = lean_uint64_lor(v___x_1078_, v_extra_1074_);
return v___x_1079_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__0___boxed(lean_object* v_await_1082_, lean_object* v_extra_1083_){
_start:
{
uint8_t v_await_boxed_1084_; uint64_t v_extra_boxed_1085_; uint64_t v_res_1086_; lean_object* v_r_1087_; 
v_await_boxed_1084_ = lean_unbox(v_await_1082_);
v_extra_boxed_1085_ = lean_unbox_uint64(v_extra_1083_);
lean_dec_ref(v_extra_1083_);
v_res_1086_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__0(v_await_boxed_1084_, v_extra_boxed_1085_);
v_r_1087_ = lean_box_uint64(v_res_1086_);
return v_r_1087_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1088_; uint8_t v___x_1089_; uint64_t v___x_1090_; 
v___x_1088_ = 8ULL;
v___x_1089_ = 0;
v___x_1090_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__0(v___x_1089_, v___x_1088_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0(lean_object* v_o_1091_, lean_object* v_name_1092_, lean_object* v_args_1093_){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; uint32_t v___x_1098_; uint64_t v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1095_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_1096_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1096_, 0, v_o_1091_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1097_, 0, v_name_1092_);
v___x_1098_ = 205;
v___x_1099_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0___closed__0);
v___x_1100_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1100_, 0, v_args_1093_);
v___x_1101_ = lean_unsigned_to_nat(3u);
v___x_1102_ = lean_mk_empty_array_with_capacity(v___x_1101_);
v___x_1103_ = lean_array_push(v___x_1102_, v___x_1096_);
v___x_1104_ = lean_array_push(v___x_1103_, v___x_1097_);
v___x_1105_ = lean_array_push(v___x_1104_, v___x_1100_);
v___x_1106_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
v___x_1107_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg(v___x_1098_, v___x_1099_, v___x_1106_, v___x_1095_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0___boxed(lean_object* v_o_1108_, lean_object* v_name_1109_, lean_object* v_args_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0(v_o_1108_, v_name_1109_, v_args_1110_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getJson(lean_object* v_self_1116_, lean_object* v_key_1117_){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1119_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_get___closed__0));
v___x_1120_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1120_, 0, v_key_1117_);
v___x_1121_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_getJson___closed__1));
v___x_1122_ = lean_unsigned_to_nat(2u);
v___x_1123_ = lean_mk_empty_array_with_capacity(v___x_1122_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1120_);
v___x_1125_ = lean_array_push(v___x_1124_, v___x_1121_);
v___x_1126_ = l_Lasm_JS_Web_Support_args(v___x_1125_);
v___x_1127_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0(v_self_1116_, v___x_1119_, v___x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getJson___boxed(lean_object* v_self_1128_, lean_object* v_key_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lasm_JS_Cloudflare_KVNamespace_getJson(v_self_1128_, v_key_1129_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1(lean_object* v_context_1132_, uint32_t v_op_1133_, uint64_t v_flags_1134_, lean_object* v_payload_1135_, lean_object* v_failurePrefix_1136_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___redArg(v_op_1133_, v_flags_1134_, v_payload_1135_, v_failurePrefix_1136_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1___boxed(lean_object* v_context_1139_, lean_object* v_op_1140_, lean_object* v_flags_1141_, lean_object* v_payload_1142_, lean_object* v_failurePrefix_1143_, lean_object* v_a_1144_){
_start:
{
uint32_t v_op_boxed_1145_; uint64_t v_flags_boxed_1146_; lean_object* v_res_1147_; 
v_op_boxed_1145_ = lean_unbox_uint32(v_op_1140_);
lean_dec(v_op_1140_);
v_flags_boxed_1146_ = lean_unbox_uint64(v_flags_1141_);
lean_dec_ref(v_flags_1141_);
v_res_1147_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0_spec__1(v_context_1139_, v_op_boxed_1145_, v_flags_boxed_1146_, v_payload_1142_, v_failurePrefix_1143_);
lean_dec_ref(v_context_1139_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___lam__0(lean_object* v_x_1148_){
_start:
{
lean_object* v_val_1151_; 
if (lean_obj_tag(v_x_1148_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1161_; 
v_a_1153_ = lean_ctor_get(v_x_1148_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_x_1148_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1155_ = v_x_1148_;
v_isShared_1156_ = v_isSharedCheck_1161_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v_x_1148_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1161_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
lean_object* v___x_1159_; 
v___x_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
return v___x_1159_;
}
}
}
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1175_; 
v_a_1162_ = lean_ctor_get(v_x_1148_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v_x_1148_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1164_ = v_x_1148_;
v_isShared_1165_ = v_isSharedCheck_1175_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v_x_1148_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1175_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1166_; 
v___x_1166_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_a_1162_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1169_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref_known(v___x_1166_, 1);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v_a_1167_);
v___x_1169_ = v___x_1164_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
v_val_1151_ = v___x_1169_;
goto v___jp_1150_;
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; 
v_a_1171_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v___x_1166_, 1);
if (v_isShared_1165_ == 0)
{
lean_ctor_set_tag(v___x_1164_, 0);
lean_ctor_set(v___x_1164_, 0, v_a_1171_);
v___x_1173_ = v___x_1164_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1171_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
v_val_1151_ = v___x_1173_;
goto v___jp_1150_;
}
}
}
}
v___jp_1150_:
{
lean_object* v___x_1152_; 
v___x_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1152_, 0, v_val_1151_);
return v___x_1152_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___lam__0___boxed(lean_object* v_x_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___lam__0(v_x_1176_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer(lean_object* v_self_1183_, lean_object* v_key_1184_){
_start:
{
lean_object* v___f_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; uint8_t v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___f_1186_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__0));
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_get___closed__0));
v___x_1188_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_key_1184_);
v___x_1189_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___closed__2));
v___x_1190_ = lean_unsigned_to_nat(2u);
v___x_1191_ = lean_mk_empty_array_with_capacity(v___x_1190_);
v___x_1192_ = lean_array_push(v___x_1191_, v___x_1188_);
v___x_1193_ = lean_array_push(v___x_1192_, v___x_1189_);
v___x_1194_ = l_Lasm_JS_Web_Support_args(v___x_1193_);
v___x_1195_ = lean_unsigned_to_nat(0u);
v___x_1196_ = 0;
v___x_1197_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getJson_spec__0(v_self_1183_, v___x_1187_, v___x_1194_);
v___x_1198_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1195_, v___x_1196_, v___x_1197_, v___f_1186_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer___boxed(lean_object* v_self_1199_, lean_object* v_key_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lasm_JS_Cloudflare_KVNamespace_getArrayBuffer(v_self_1199_, v_key_1200_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__3(lean_object* v___f_1203_, lean_object* v_x_1204_){
_start:
{
if (lean_obj_tag(v_x_1204_) == 0)
{
lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1214_; 
lean_dec_ref(v___f_1203_);
v_a_1206_ = lean_ctor_get(v_x_1204_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_x_1204_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1208_ = v_x_1204_;
v_isShared_1209_ = v_isSharedCheck_1214_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v_x_1204_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1214_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1206_);
v___x_1211_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1212_; 
v___x_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
return v___x_1212_;
}
}
}
else
{
lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1226_; 
v_isSharedCheck_1226_ = !lean_is_exclusive(v_x_1204_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; 
v_unused_1227_ = lean_ctor_get(v_x_1204_, 0);
lean_dec(v_unused_1227_);
v___x_1216_ = v_x_1204_;
v_isShared_1217_ = v_isSharedCheck_1226_;
goto v_resetjp_1215_;
}
else
{
lean_dec(v_x_1204_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1226_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1218_; uint8_t v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1222_; 
v___x_1218_ = lean_unsigned_to_nat(0u);
v___x_1219_ = 0;
v___x_1220_ = lean_io_promise_new();
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v___x_1220_);
v___x_1222_ = v___x_1216_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
v___x_1224_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1218_, v___x_1219_, v___x_1223_, v___f_1203_);
return v___x_1224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__3___boxed(lean_object* v___f_1228_, lean_object* v_x_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__3(v___f_1228_, v_x_1229_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_1232_, uint32_t v_op_1233_, uint64_t v_flags_1234_, lean_object* v_payload_1235_, lean_object* v___f_1236_, lean_object* v___f_1237_, lean_object* v___f_1238_, lean_object* v_x_1239_){
_start:
{
if (lean_obj_tag(v_x_1239_) == 0)
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1249_; 
lean_dec_ref(v___f_1238_);
lean_dec_ref(v___f_1237_);
lean_dec_ref(v___f_1236_);
lean_dec(v_payload_1235_);
v_a_1241_ = lean_ctor_get(v_x_1239_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v_x_1239_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1243_ = v_x_1239_;
v_isShared_1244_ = v_isSharedCheck_1249_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v_x_1239_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1249_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
lean_object* v___x_1247_; 
v___x_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
return v___x_1247_;
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1296_; 
v_a_1250_ = lean_ctor_get(v_x_1239_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v_x_1239_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1252_ = v_x_1239_;
v_isShared_1253_ = v_isSharedCheck_1296_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v_x_1239_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1296_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v___x_1254_ = lean_string_utf8_byte_size(v_failurePrefix_1232_);
v___x_1255_ = lean_unsigned_to_nat(0u);
v___x_1256_ = lean_nat_dec_eq(v___x_1254_, v___x_1255_);
if (v___x_1256_ == 0)
{
lean_object* v___f_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___f_1261_; lean_object* v_val_1263_; lean_object* v___x_1268_; 
lean_dec_ref(v___f_1238_);
lean_inc(v_a_1250_);
v___f_1257_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1257_, 0, v_a_1250_);
v___x_1258_ = lean_box(v___x_1256_);
v___x_1259_ = lean_box_uint32(v_op_1233_);
v___x_1260_ = lean_box_uint64(v_flags_1234_);
lean_inc(v_payload_1235_);
v___f_1261_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1261_, 0, v___x_1255_);
lean_closure_set(v___f_1261_, 1, v___x_1258_);
lean_closure_set(v___f_1261_, 2, v___f_1257_);
lean_closure_set(v___f_1261_, 3, v_a_1250_);
lean_closure_set(v___f_1261_, 4, v___x_1259_);
lean_closure_set(v___f_1261_, 5, v___x_1260_);
lean_closure_set(v___f_1261_, 6, v_payload_1235_);
v___x_1268_ = l_Lasm_JS_Wire_encodeIO(v_payload_1235_);
lean_dec(v_payload_1235_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1271_; 
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1269_);
lean_dec_ref_known(v___x_1268_, 1);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v_a_1269_);
v___x_1271_ = v___x_1252_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
v_val_1263_ = v___x_1271_;
goto v___jp_1262_;
}
}
else
{
lean_object* v_a_1273_; lean_object* v___x_1275_; 
v_a_1273_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___x_1268_, 1);
if (v_isShared_1253_ == 0)
{
lean_ctor_set_tag(v___x_1252_, 0);
lean_ctor_set(v___x_1252_, 0, v_a_1273_);
v___x_1275_ = v___x_1252_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1273_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
v_val_1263_ = v___x_1275_;
goto v___jp_1262_;
}
}
v___jp_1262_:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1264_, 0, v_val_1263_);
v___x_1265_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1255_, v___x_1256_, v___x_1264_, v___f_1261_);
v___x_1266_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1255_, v___x_1256_, v___x_1265_, v___f_1236_);
v___x_1267_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1255_, v___x_1256_, v___x_1266_, v___f_1237_);
return v___x_1267_;
}
}
else
{
lean_object* v___f_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___f_1280_; uint8_t v___x_1281_; lean_object* v_val_1283_; lean_object* v___x_1287_; 
lean_dec_ref(v___f_1237_);
lean_dec_ref(v___f_1236_);
lean_inc(v_a_1250_);
v___f_1277_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1277_, 0, v_a_1250_);
v___x_1278_ = lean_box_uint32(v_op_1233_);
v___x_1279_ = lean_box_uint64(v_flags_1234_);
lean_inc(v_payload_1235_);
v___f_1280_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1280_, 0, v___f_1277_);
lean_closure_set(v___f_1280_, 1, v_a_1250_);
lean_closure_set(v___f_1280_, 2, v___x_1278_);
lean_closure_set(v___f_1280_, 3, v___x_1279_);
lean_closure_set(v___f_1280_, 4, v_payload_1235_);
v___x_1281_ = 0;
v___x_1287_ = l_Lasm_JS_Wire_encodeIO(v_payload_1235_);
lean_dec(v_payload_1235_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v_a_1288_; lean_object* v___x_1290_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1287_, 1);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v_a_1288_);
v___x_1290_ = v___x_1252_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1288_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
v_val_1283_ = v___x_1290_;
goto v___jp_1282_;
}
}
else
{
lean_object* v_a_1292_; lean_object* v___x_1294_; 
v_a_1292_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1292_);
lean_dec_ref_known(v___x_1287_, 1);
if (v_isShared_1253_ == 0)
{
lean_ctor_set_tag(v___x_1252_, 0);
lean_ctor_set(v___x_1252_, 0, v_a_1292_);
v___x_1294_ = v___x_1252_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1292_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
v_val_1283_ = v___x_1294_;
goto v___jp_1282_;
}
}
v___jp_1282_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1284_, 0, v_val_1283_);
v___x_1285_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1255_, v___x_1281_, v___x_1284_, v___f_1280_);
v___x_1286_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1255_, v___x_1281_, v___x_1285_, v___f_1238_);
return v___x_1286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_1297_, lean_object* v_op_1298_, lean_object* v_flags_1299_, lean_object* v_payload_1300_, lean_object* v___f_1301_, lean_object* v___f_1302_, lean_object* v___f_1303_, lean_object* v_x_1304_, lean_object* v___y_1305_){
_start:
{
uint32_t v_op_boxed_1306_; uint64_t v_flags_boxed_1307_; lean_object* v_res_1308_; 
v_op_boxed_1306_ = lean_unbox_uint32(v_op_1298_);
lean_dec(v_op_1298_);
v_flags_boxed_1307_ = lean_unbox_uint64(v_flags_1299_);
lean_dec_ref(v_flags_1299_);
v_res_1308_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__9(v_failurePrefix_1297_, v_op_boxed_1306_, v_flags_boxed_1307_, v_payload_1300_, v___f_1301_, v___f_1302_, v___f_1303_, v_x_1304_);
lean_dec_ref(v_failurePrefix_1297_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__2(lean_object* v___f_1309_, lean_object* v_x_1310_){
_start:
{
if (lean_obj_tag(v_x_1310_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref(v___f_1309_);
v_a_1312_ = lean_ctor_get(v_x_1310_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v_x_1310_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1314_ = v_x_1310_;
v_isShared_1315_ = v_isSharedCheck_1320_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v_x_1310_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1320_;
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
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
lean_object* v___x_1318_; 
v___x_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
return v___x_1318_;
}
}
}
else
{
lean_object* v_a_1321_; lean_object* v___x_1322_; 
v_a_1321_ = lean_ctor_get(v_x_1310_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v_x_1310_, 1);
v___x_1322_ = lean_apply_2(v___f_1309_, v_a_1321_, lean_box(0));
return v___x_1322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__2___boxed(lean_object* v___f_1323_, lean_object* v_x_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__2(v___f_1323_, v_x_1324_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__1(lean_object* v___f_1327_, lean_object* v_bytes_1328_){
_start:
{
lean_object* v___x_1330_; uint8_t v___x_1331_; lean_object* v_val_1333_; lean_object* v___x_1336_; 
v___x_1330_ = lean_unsigned_to_nat(0u);
v___x_1331_ = 0;
v___x_1336_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1328_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1336_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1336_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 1);
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
v_val_1333_ = v___x_1342_;
goto v___jp_1332_;
}
}
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
v_a_1345_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1336_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1336_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
lean_ctor_set_tag(v___x_1347_, 0);
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
v_val_1333_ = v___x_1350_;
goto v___jp_1332_;
}
}
}
v___jp_1332_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1334_, 0, v_val_1333_);
v___x_1335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1330_, v___x_1331_, v___x_1334_, v___f_1327_);
return v___x_1335_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__1___boxed(lean_object* v___f_1353_, lean_object* v_bytes_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__1(v___f_1353_, v_bytes_1354_);
lean_dec_ref(v_bytes_1354_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2(lean_object* v_context_1358_, lean_object* v_d_1359_){
_start:
{
lean_object* v___y_1365_; lean_object* v___y_1366_; 
switch(lean_obj_tag(v_d_1359_))
{
case 1:
{
goto v___jp_1361_;
}
case 0:
{
goto v___jp_1361_;
}
default: 
{
if (lean_obj_tag(v_d_1359_) == 9)
{
lean_object* v_value_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v_value_1370_ = lean_ctor_get(v_d_1359_, 0);
lean_inc(v_value_1370_);
lean_dec_ref_known(v_d_1359_, 2);
v___x_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1371_, 0, v_value_1370_);
v___x_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1371_);
return v___x_1372_;
}
else
{
lean_object* v___x_1373_; lean_object* v_received_1375_; 
v___x_1373_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
if (lean_obj_tag(v_d_1359_) == 9)
{
lean_object* v_value_1389_; lean_object* v_description_1390_; uint8_t v___x_1391_; 
v_value_1389_ = lean_ctor_get(v_d_1359_, 0);
v_description_1390_ = lean_ctor_get(v_d_1359_, 1);
v___x_1391_ = lean_string_dec_eq(v_description_1390_, v___x_1373_);
if (v___x_1391_ == 0)
{
goto v___jp_1387_;
}
else
{
uint32_t v___x_1392_; uint64_t v___x_1393_; lean_object* v___x_1394_; uint32_t v___x_1395_; lean_object* v___x_1396_; 
lean_inc_n(v_value_1389_, 2);
lean_dec_ref_known(v_d_1359_, 2);
v___x_1392_ = 206;
v___x_1393_ = 0ULL;
v___x_1394_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1394_, 0, v_value_1389_);
lean_ctor_set(v___x_1394_, 1, v___x_1373_);
v___x_1395_ = lasm_js_value_handle(v_value_1389_);
lean_dec(v_value_1389_);
v___x_1396_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1392_, v___x_1393_, v___x_1394_, v___x_1395_);
lean_dec_ref_known(v___x_1394_, 2);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; uint8_t v___x_1398_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
lean_dec_ref_known(v___x_1396_, 1);
v___x_1398_ = lean_string_validate_utf8(v_a_1397_);
if (v___x_1398_ == 0)
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
lean_dec(v_a_1397_);
v___x_1399_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10);
v___x_1400_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1399_);
v_received_1375_ = v___x_1400_;
goto v___jp_1374_;
}
else
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_string_from_utf8_unchecked(v_a_1397_);
v_received_1375_ = v___x_1401_;
goto v___jp_1374_;
}
}
else
{
lean_object* v___x_1402_; 
lean_dec_ref_known(v___x_1396_, 1);
v___x_1402_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__11));
v_received_1375_ = v___x_1402_;
goto v___jp_1374_;
}
}
}
else
{
goto v___jp_1387_;
}
v___jp_1374_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; uint8_t v___x_1385_; 
v___x_1376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__0));
v___x_1377_ = lean_string_append(v___x_1376_, v_context_1358_);
v___x_1378_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__1));
v___x_1379_ = lean_string_append(v___x_1377_, v___x_1378_);
v___x_1380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2___closed__0));
v___x_1381_ = lean_string_append(v___x_1379_, v___x_1380_);
v___x_1382_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__3));
v___x_1383_ = lean_string_append(v___x_1381_, v___x_1382_);
v___x_1384_ = lean_string_append(v___x_1383_, v_received_1375_);
lean_dec_ref(v_received_1375_);
v___x_1385_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5);
if (v___x_1385_ == 0)
{
lean_object* v___x_1386_; 
v___x_1386_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__6));
v___y_1365_ = v___x_1384_;
v___y_1366_ = v___x_1386_;
goto v___jp_1364_;
}
else
{
v___y_1365_ = v___x_1384_;
v___y_1366_ = v___x_1373_;
goto v___jp_1364_;
}
}
v___jp_1387_:
{
lean_object* v___x_1388_; 
v___x_1388_ = l_Lasm_JS_Data_describe(v_d_1359_);
v_received_1375_ = v___x_1388_;
goto v___jp_1374_;
}
}
}
}
v___jp_1361_:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_box(0);
v___x_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
return v___x_1363_;
}
v___jp_1364_:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1367_ = lean_string_append(v___y_1365_, v___y_1366_);
v___x_1368_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
v___x_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
return v___x_1369_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1403_, lean_object* v_d_1404_, lean_object* v_a_1405_){
_start:
{
lean_object* v_res_1406_; 
v_res_1406_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2(v_context_1403_, v_d_1404_);
lean_dec_ref(v_context_1403_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__0(lean_object* v_context_1407_, lean_object* v_x_1408_){
_start:
{
lean_object* v_val_1411_; 
if (lean_obj_tag(v_x_1408_) == 0)
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1421_; 
v_a_1413_ = lean_ctor_get(v_x_1408_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_x_1408_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1415_ = v_x_1408_;
v_isShared_1416_ = v_isSharedCheck_1421_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v_x_1408_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1421_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1435_; 
v_a_1422_ = lean_ctor_get(v_x_1408_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_x_1408_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1424_ = v_x_1408_;
v_isShared_1425_ = v_isSharedCheck_1435_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v_x_1408_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1435_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1_spec__2(v_context_1407_, v_a_1422_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1429_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1426_, 1);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 0, v_a_1427_);
v___x_1429_ = v___x_1424_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_a_1427_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
v_val_1411_ = v___x_1429_;
goto v___jp_1410_;
}
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; 
v_a_1431_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v___x_1426_, 1);
if (v_isShared_1425_ == 0)
{
lean_ctor_set_tag(v___x_1424_, 0);
lean_ctor_set(v___x_1424_, 0, v_a_1431_);
v___x_1433_ = v___x_1424_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
v_val_1411_ = v___x_1433_;
goto v___jp_1410_;
}
}
}
}
v___jp_1410_:
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v_val_1411_);
return v___x_1412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__0___boxed(lean_object* v_context_1436_, lean_object* v_x_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__0(v_context_1436_, v_x_1437_);
lean_dec_ref(v_context_1436_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1(lean_object* v_context_1440_, uint32_t v_op_1441_, uint64_t v_flags_1442_, lean_object* v_payload_1443_, lean_object* v_failurePrefix_1444_){
_start:
{
lean_object* v___f_1446_; lean_object* v___f_1447_; lean_object* v___f_1448_; lean_object* v___f_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___f_1452_; lean_object* v___f_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; lean_object* v_val_1457_; lean_object* v___x_1460_; 
v___f_1446_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1446_, 0, v_context_1440_);
v___f_1447_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1447_, 0, v___f_1446_);
v___f_1448_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1448_, 0, v___f_1447_);
lean_inc_ref(v_failurePrefix_1444_);
v___f_1449_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1449_, 0, v_failurePrefix_1444_);
v___x_1450_ = lean_box_uint32(v_op_1441_);
v___x_1451_ = lean_box_uint64(v_flags_1442_);
lean_inc_ref(v___f_1448_);
v___f_1452_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1452_, 0, v_failurePrefix_1444_);
lean_closure_set(v___f_1452_, 1, v___x_1450_);
lean_closure_set(v___f_1452_, 2, v___x_1451_);
lean_closure_set(v___f_1452_, 3, v_payload_1443_);
lean_closure_set(v___f_1452_, 4, v___f_1449_);
lean_closure_set(v___f_1452_, 5, v___f_1448_);
lean_closure_set(v___f_1452_, 6, v___f_1448_);
v___f_1453_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1453_, 0, v___f_1452_);
v___x_1454_ = lean_unsigned_to_nat(0u);
v___x_1455_ = 0;
v___x_1460_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
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
lean_ctor_set_tag(v___x_1463_, 1);
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
v_val_1457_ = v___x_1466_;
goto v___jp_1456_;
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
v_a_1469_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1460_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1460_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
lean_ctor_set_tag(v___x_1471_, 0);
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
v_val_1457_ = v___x_1474_;
goto v___jp_1456_;
}
}
}
v___jp_1456_:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1458_, 0, v_val_1457_);
v___x_1459_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1454_, v___x_1455_, v___x_1458_, v___f_1453_);
return v___x_1459_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1___boxed(lean_object* v_context_1477_, lean_object* v_op_1478_, lean_object* v_flags_1479_, lean_object* v_payload_1480_, lean_object* v_failurePrefix_1481_, lean_object* v_a_1482_){
_start:
{
uint32_t v_op_boxed_1483_; uint64_t v_flags_boxed_1484_; lean_object* v_res_1485_; 
v_op_boxed_1483_ = lean_unbox_uint32(v_op_1478_);
lean_dec(v_op_1478_);
v_flags_boxed_1484_ = lean_unbox_uint64(v_flags_1479_);
lean_dec_ref(v_flags_1479_);
v_res_1485_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1(v_context_1477_, v_op_boxed_1483_, v_flags_boxed_1484_, v_payload_1480_, v_failurePrefix_1481_);
return v_res_1485_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__0(uint8_t v_await_1486_, uint64_t v_extra_1487_){
_start:
{
uint64_t v___x_1488_; uint64_t v___y_1490_; 
v___x_1488_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0);
if (v_await_1486_ == 0)
{
uint64_t v___x_1493_; 
v___x_1493_ = 0ULL;
v___y_1490_ = v___x_1493_;
goto v___jp_1489_;
}
else
{
uint64_t v___x_1494_; 
v___x_1494_ = 2ULL;
v___y_1490_ = v___x_1494_;
goto v___jp_1489_;
}
v___jp_1489_:
{
uint64_t v___x_1491_; uint64_t v___x_1492_; 
v___x_1491_ = lean_uint64_lor(v___x_1488_, v___y_1490_);
v___x_1492_ = lean_uint64_lor(v___x_1491_, v_extra_1487_);
return v___x_1492_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__0___boxed(lean_object* v_await_1495_, lean_object* v_extra_1496_){
_start:
{
uint8_t v_await_boxed_1497_; uint64_t v_extra_boxed_1498_; uint64_t v_res_1499_; lean_object* v_r_1500_; 
v_await_boxed_1497_ = lean_unbox(v_await_1495_);
v_extra_boxed_1498_ = lean_unbox_uint64(v_extra_1496_);
lean_dec_ref(v_extra_1496_);
v_res_1499_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__0(v_await_boxed_1497_, v_extra_boxed_1498_);
v_r_1500_ = lean_box_uint64(v_res_1499_);
return v_r_1500_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1501_; uint8_t v___x_1502_; uint64_t v___x_1503_; 
v___x_1501_ = 8ULL;
v___x_1502_ = 0;
v___x_1503_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__0(v___x_1502_, v___x_1501_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0(lean_object* v_o_1504_, lean_object* v_name_1505_, lean_object* v_args_1506_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; uint32_t v___x_1513_; uint64_t v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1508_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_1509_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1509_, 0, v_o_1504_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
lean_inc_ref(v_name_1505_);
v___x_1510_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1510_, 0, v_name_1505_);
v___x_1511_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__0));
v___x_1512_ = lean_string_append(v___x_1511_, v_name_1505_);
lean_dec_ref(v_name_1505_);
v___x_1513_ = 205;
v___x_1514_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0___closed__0);
v___x_1515_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1515_, 0, v_args_1506_);
v___x_1516_ = lean_unsigned_to_nat(3u);
v___x_1517_ = lean_mk_empty_array_with_capacity(v___x_1516_);
v___x_1518_ = lean_array_push(v___x_1517_, v___x_1509_);
v___x_1519_ = lean_array_push(v___x_1518_, v___x_1510_);
v___x_1520_ = lean_array_push(v___x_1519_, v___x_1515_);
v___x_1521_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
v___x_1522_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0_spec__1(v___x_1512_, v___x_1513_, v___x_1514_, v___x_1521_, v___x_1508_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0___boxed(lean_object* v_o_1523_, lean_object* v_name_1524_, lean_object* v_args_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0(v_o_1523_, v_name_1524_, v_args_1525_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getStream(lean_object* v_self_1531_, lean_object* v_key_1532_){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1534_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_get___closed__0));
v___x_1535_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1535_, 0, v_key_1532_);
v___x_1536_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_getStream___closed__1));
v___x_1537_ = lean_unsigned_to_nat(2u);
v___x_1538_ = lean_mk_empty_array_with_capacity(v___x_1537_);
v___x_1539_ = lean_array_push(v___x_1538_, v___x_1535_);
v___x_1540_ = lean_array_push(v___x_1539_, v___x_1536_);
v___x_1541_ = l_Lasm_JS_Web_Support_args(v___x_1540_);
v___x_1542_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getStream_spec__0(v_self_1531_, v___x_1534_, v___x_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getStream___boxed(lean_object* v_self_1543_, lean_object* v_key_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lasm_JS_Cloudflare_KVNamespace_getStream(v_self_1543_, v_key_1544_);
return v_res_1546_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__1(uint8_t v_await_1547_, uint64_t v_extra_1548_){
_start:
{
uint64_t v___x_1549_; uint64_t v___y_1551_; 
v___x_1549_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0);
if (v_await_1547_ == 0)
{
uint64_t v___x_1554_; 
v___x_1554_ = 0ULL;
v___y_1551_ = v___x_1554_;
goto v___jp_1550_;
}
else
{
uint64_t v___x_1555_; 
v___x_1555_ = 2ULL;
v___y_1551_ = v___x_1555_;
goto v___jp_1550_;
}
v___jp_1550_:
{
uint64_t v___x_1552_; uint64_t v___x_1553_; 
v___x_1552_ = lean_uint64_lor(v___x_1549_, v___y_1551_);
v___x_1553_ = lean_uint64_lor(v___x_1552_, v_extra_1548_);
return v___x_1553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__1___boxed(lean_object* v_await_1556_, lean_object* v_extra_1557_){
_start:
{
uint8_t v_await_boxed_1558_; uint64_t v_extra_boxed_1559_; uint64_t v_res_1560_; lean_object* v_r_1561_; 
v_await_boxed_1558_ = lean_unbox(v_await_1556_);
v_extra_boxed_1559_ = lean_unbox_uint64(v_extra_1557_);
lean_dec_ref(v_extra_1557_);
v_res_1560_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__1(v_await_boxed_1558_, v_extra_boxed_1559_);
v_r_1561_ = lean_box_uint64(v_res_1560_);
return v_r_1561_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_1562_, uint32_t v_op_1563_, uint64_t v_flags_1564_, lean_object* v_payload_1565_, lean_object* v___f_1566_, lean_object* v___f_1567_, lean_object* v___f_1568_, lean_object* v_x_1569_){
_start:
{
if (lean_obj_tag(v_x_1569_) == 0)
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1579_; 
lean_dec_ref(v___f_1568_);
lean_dec_ref(v___f_1567_);
lean_dec_ref(v___f_1566_);
lean_dec(v_payload_1565_);
v_a_1571_ = lean_ctor_get(v_x_1569_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_x_1569_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1573_ = v_x_1569_;
v_isShared_1574_ = v_isSharedCheck_1579_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v_x_1569_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1579_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
return v___x_1577_;
}
}
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1626_; 
v_a_1580_ = lean_ctor_get(v_x_1569_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v_x_1569_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1582_ = v_x_1569_;
v_isShared_1583_ = v_isSharedCheck_1626_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v_x_1569_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1626_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1584_ = lean_string_utf8_byte_size(v_failurePrefix_1562_);
v___x_1585_ = lean_unsigned_to_nat(0u);
v___x_1586_ = lean_nat_dec_eq(v___x_1584_, v___x_1585_);
if (v___x_1586_ == 0)
{
lean_object* v___f_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___f_1591_; lean_object* v_val_1593_; lean_object* v___x_1598_; 
lean_dec_ref(v___f_1568_);
lean_inc(v_a_1580_);
v___f_1587_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1587_, 0, v_a_1580_);
v___x_1588_ = lean_box(v___x_1586_);
v___x_1589_ = lean_box_uint32(v_op_1563_);
v___x_1590_ = lean_box_uint64(v_flags_1564_);
lean_inc(v_payload_1565_);
v___f_1591_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1591_, 0, v___x_1585_);
lean_closure_set(v___f_1591_, 1, v___x_1588_);
lean_closure_set(v___f_1591_, 2, v___f_1587_);
lean_closure_set(v___f_1591_, 3, v_a_1580_);
lean_closure_set(v___f_1591_, 4, v___x_1589_);
lean_closure_set(v___f_1591_, 5, v___x_1590_);
lean_closure_set(v___f_1591_, 6, v_payload_1565_);
v___x_1598_ = l_Lasm_JS_Wire_encodeIO(v_payload_1565_);
lean_dec(v_payload_1565_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; lean_object* v___x_1601_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v_a_1599_);
v___x_1601_ = v___x_1582_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1599_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
v_val_1593_ = v___x_1601_;
goto v___jp_1592_;
}
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; 
v_a_1603_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1598_, 1);
if (v_isShared_1583_ == 0)
{
lean_ctor_set_tag(v___x_1582_, 0);
lean_ctor_set(v___x_1582_, 0, v_a_1603_);
v___x_1605_ = v___x_1582_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1603_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
v_val_1593_ = v___x_1605_;
goto v___jp_1592_;
}
}
v___jp_1592_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1594_, 0, v_val_1593_);
v___x_1595_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1585_, v___x_1586_, v___x_1594_, v___f_1591_);
v___x_1596_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1585_, v___x_1586_, v___x_1595_, v___f_1566_);
v___x_1597_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1585_, v___x_1586_, v___x_1596_, v___f_1567_);
return v___x_1597_;
}
}
else
{
lean_object* v___f_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___f_1610_; uint8_t v___x_1611_; lean_object* v_val_1613_; lean_object* v___x_1617_; 
lean_dec_ref(v___f_1567_);
lean_dec_ref(v___f_1566_);
lean_inc(v_a_1580_);
v___f_1607_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1607_, 0, v_a_1580_);
v___x_1608_ = lean_box_uint32(v_op_1563_);
v___x_1609_ = lean_box_uint64(v_flags_1564_);
lean_inc(v_payload_1565_);
v___f_1610_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1610_, 0, v___f_1607_);
lean_closure_set(v___f_1610_, 1, v_a_1580_);
lean_closure_set(v___f_1610_, 2, v___x_1608_);
lean_closure_set(v___f_1610_, 3, v___x_1609_);
lean_closure_set(v___f_1610_, 4, v_payload_1565_);
v___x_1611_ = 0;
v___x_1617_ = l_Lasm_JS_Wire_encodeIO(v_payload_1565_);
lean_dec(v_payload_1565_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1620_; 
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_a_1618_);
lean_dec_ref_known(v___x_1617_, 1);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v_a_1618_);
v___x_1620_ = v___x_1582_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1618_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
v_val_1613_ = v___x_1620_;
goto v___jp_1612_;
}
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; 
v_a_1622_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1617_, 1);
if (v_isShared_1583_ == 0)
{
lean_ctor_set_tag(v___x_1582_, 0);
lean_ctor_set(v___x_1582_, 0, v_a_1622_);
v___x_1624_ = v___x_1582_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
v_val_1613_ = v___x_1624_;
goto v___jp_1612_;
}
}
v___jp_1612_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1614_, 0, v_val_1613_);
v___x_1615_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1585_, v___x_1611_, v___x_1614_, v___f_1610_);
v___x_1616_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1585_, v___x_1611_, v___x_1615_, v___f_1568_);
return v___x_1616_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_1627_, lean_object* v_op_1628_, lean_object* v_flags_1629_, lean_object* v_payload_1630_, lean_object* v___f_1631_, lean_object* v___f_1632_, lean_object* v___f_1633_, lean_object* v_x_1634_, lean_object* v___y_1635_){
_start:
{
uint32_t v_op_boxed_1636_; uint64_t v_flags_boxed_1637_; lean_object* v_res_1638_; 
v_op_boxed_1636_ = lean_unbox_uint32(v_op_1628_);
lean_dec(v_op_1628_);
v_flags_boxed_1637_ = lean_unbox_uint64(v_flags_1629_);
lean_dec_ref(v_flags_1629_);
v_res_1638_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__9(v_failurePrefix_1627_, v_op_boxed_1636_, v_flags_boxed_1637_, v_payload_1630_, v___f_1631_, v___f_1632_, v___f_1633_, v_x_1634_);
lean_dec_ref(v_failurePrefix_1627_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__3(lean_object* v___f_1639_, lean_object* v_x_1640_){
_start:
{
if (lean_obj_tag(v_x_1640_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1650_; 
lean_dec_ref(v___f_1639_);
v_a_1642_ = lean_ctor_get(v_x_1640_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v_x_1640_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1644_ = v_x_1640_;
v_isShared_1645_ = v_isSharedCheck_1650_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v_x_1640_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1650_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1647_);
return v___x_1648_;
}
}
}
else
{
lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1662_; 
v_isSharedCheck_1662_ = !lean_is_exclusive(v_x_1640_);
if (v_isSharedCheck_1662_ == 0)
{
lean_object* v_unused_1663_; 
v_unused_1663_ = lean_ctor_get(v_x_1640_, 0);
lean_dec(v_unused_1663_);
v___x_1652_ = v_x_1640_;
v_isShared_1653_ = v_isSharedCheck_1662_;
goto v_resetjp_1651_;
}
else
{
lean_dec(v_x_1640_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1662_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1654_; uint8_t v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1658_; 
v___x_1654_ = lean_unsigned_to_nat(0u);
v___x_1655_ = 0;
v___x_1656_ = lean_io_promise_new();
if (v_isShared_1653_ == 0)
{
lean_ctor_set(v___x_1652_, 0, v___x_1656_);
v___x_1658_ = v___x_1652_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
v___x_1660_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1654_, v___x_1655_, v___x_1659_, v___f_1639_);
return v___x_1660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__3___boxed(lean_object* v___f_1664_, lean_object* v_x_1665_, lean_object* v___y_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__3(v___f_1664_, v_x_1665_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__1(lean_object* v___f_1668_, lean_object* v_bytes_1669_){
_start:
{
lean_object* v___x_1671_; uint8_t v___x_1672_; lean_object* v_val_1674_; lean_object* v___x_1677_; 
v___x_1671_ = lean_unsigned_to_nat(0u);
v___x_1672_ = 0;
v___x_1677_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1669_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1677_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1677_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set_tag(v___x_1680_, 1);
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
v_val_1674_ = v___x_1683_;
goto v___jp_1673_;
}
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
v_a_1686_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1677_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1677_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
lean_ctor_set_tag(v___x_1688_, 0);
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
v_val_1674_ = v___x_1691_;
goto v___jp_1673_;
}
}
}
v___jp_1673_:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v_val_1674_);
v___x_1676_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1671_, v___x_1672_, v___x_1675_, v___f_1668_);
return v___x_1676_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__1___boxed(lean_object* v___f_1694_, lean_object* v_bytes_1695_, lean_object* v___y_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__1(v___f_1694_, v_bytes_1695_);
lean_dec_ref(v_bytes_1695_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__2(lean_object* v___f_1698_, lean_object* v_x_1699_){
_start:
{
if (lean_obj_tag(v_x_1699_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1709_; 
lean_dec_ref(v___f_1698_);
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
lean_object* v_a_1710_; lean_object* v___x_1711_; 
v_a_1710_ = lean_ctor_get(v_x_1699_, 0);
lean_inc(v_a_1710_);
lean_dec_ref_known(v_x_1699_, 1);
v___x_1711_ = lean_apply_2(v___f_1698_, v_a_1710_, lean_box(0));
return v___x_1711_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__2___boxed(lean_object* v___f_1712_, lean_object* v_x_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__2(v___f_1712_, v_x_1713_);
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_1723_, lean_object* v_key_1724_){
_start:
{
if (lean_obj_tag(v_d_1723_) == 8)
{
lean_object* v___x_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1753_; 
v___x_1725_ = l_Lasm_JS_Data_field(v_d_1723_, v_key_1724_);
v_isSharedCheck_1753_ = !lean_is_exclusive(v_d_1723_);
if (v_isSharedCheck_1753_ == 0)
{
lean_object* v_unused_1754_; 
v_unused_1754_ = lean_ctor_get(v_d_1723_, 0);
lean_dec(v_unused_1754_);
v___x_1727_ = v_d_1723_;
v_isShared_1728_ = v_isSharedCheck_1753_;
goto v_resetjp_1726_;
}
else
{
lean_dec(v_d_1723_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1753_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
if (lean_obj_tag(v___x_1725_) == 2)
{
uint8_t v_b_1729_; lean_object* v___x_1730_; lean_object* v___x_1732_; 
v_b_1729_ = lean_ctor_get_uint8(v___x_1725_, 0);
lean_dec_ref_known(v___x_1725_, 0);
v___x_1730_ = lean_box(v_b_1729_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set_tag(v___x_1727_, 1);
lean_ctor_set(v___x_1727_, 0, v___x_1730_);
v___x_1732_ = v___x_1727_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; 
v___x_1734_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1735_ = lean_string_append(v___x_1734_, v_key_1724_);
v___x_1736_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1737_ = lean_string_append(v___x_1735_, v___x_1736_);
v___x_1738_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_1739_ = lean_string_append(v___x_1737_, v___x_1738_);
v___x_1740_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1741_ = lean_string_append(v___x_1739_, v___x_1740_);
v___x_1742_ = l_Lasm_JS_Data_describe(v___x_1725_);
v___x_1743_ = lean_string_append(v___x_1741_, v___x_1742_);
lean_dec_ref(v___x_1742_);
v___x_1744_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1748_; 
v___x_1745_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__6));
v___x_1746_ = lean_string_append(v___x_1743_, v___x_1745_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set_tag(v___x_1727_, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1746_);
v___x_1748_ = v___x_1727_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v___x_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
else
{
lean_object* v___x_1751_; 
if (v_isShared_1728_ == 0)
{
lean_ctor_set_tag(v___x_1727_, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1743_);
v___x_1751_ = v___x_1727_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1743_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
}
else
{
lean_object* v___x_1755_; 
lean_dec(v_d_1723_);
v___x_1755_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__5));
return v___x_1755_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_1756_, lean_object* v_key_1757_){
_start:
{
lean_object* v_res_1758_; 
v_res_1758_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4(v_d_1756_, v_key_1757_);
lean_dec_ref(v_key_1757_);
return v_res_1758_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__4(void){
_start:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1764_ = lean_unsigned_to_nat(0u);
v___x_1765_ = lean_nat_to_int(v___x_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7(lean_object* v_d_1770_, lean_object* v_key_1771_){
_start:
{
if (lean_obj_tag(v_d_1770_) == 8)
{
lean_object* v___x_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1818_; 
v___x_1774_ = l_Lasm_JS_Data_field(v_d_1770_, v_key_1771_);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_d_1770_);
if (v_isSharedCheck_1818_ == 0)
{
lean_object* v_unused_1819_; 
v_unused_1819_ = lean_ctor_get(v_d_1770_, 0);
lean_dec(v_unused_1819_);
v___x_1776_ = v_d_1770_;
v_isShared_1777_ = v_isSharedCheck_1818_;
goto v_resetjp_1775_;
}
else
{
lean_dec(v_d_1770_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1818_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v_a_1779_; lean_object* v_a_1805_; 
switch(lean_obj_tag(v___x_1774_))
{
case 1:
{
lean_del_object(v___x_1776_);
goto v___jp_1772_;
}
case 0:
{
lean_del_object(v___x_1776_);
goto v___jp_1772_;
}
default: 
{
switch(lean_obj_tag(v___x_1774_))
{
case 3:
{
double v_n_1812_; lean_object* v___x_1813_; 
v_n_1812_ = lean_ctor_get_float(v___x_1774_, 0);
v___x_1813_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1812_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v___x_1814_; 
v___x_1814_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__6));
v_a_1779_ = v___x_1814_;
goto v___jp_1778_;
}
else
{
lean_object* v_val_1815_; 
v_val_1815_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_val_1815_);
lean_dec_ref_known(v___x_1813_, 1);
v_a_1805_ = v_val_1815_;
goto v___jp_1804_;
}
}
case 5:
{
lean_object* v_i_1816_; 
v_i_1816_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_i_1816_);
v_a_1805_ = v_i_1816_;
goto v___jp_1804_;
}
default: 
{
lean_object* v___x_1817_; 
v___x_1817_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v_a_1779_ = v___x_1817_;
goto v___jp_1778_;
}
}
}
}
v___jp_1778_:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; 
v___x_1780_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1781_ = lean_string_append(v___x_1780_, v_key_1771_);
v___x_1782_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1783_ = lean_string_append(v___x_1781_, v___x_1782_);
v___x_1784_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__1));
v___x_1785_ = lean_string_append(v___x_1783_, v___x_1784_);
v___x_1786_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1787_ = lean_string_append(v___x_1785_, v___x_1786_);
v___x_1788_ = l_Lasm_JS_Data_describe(v___x_1774_);
v___x_1789_ = lean_string_append(v___x_1787_, v___x_1788_);
lean_dec_ref(v___x_1788_);
v___x_1790_ = lean_string_utf8_byte_size(v_a_1779_);
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = lean_nat_dec_eq(v___x_1790_, v___x_1791_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1793_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__2));
v___x_1794_ = lean_string_append(v___x_1793_, v_a_1779_);
v___x_1795_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__3));
v___x_1796_ = lean_string_append(v___x_1794_, v___x_1795_);
v___x_1797_ = lean_string_append(v___x_1789_, v___x_1796_);
lean_dec_ref(v___x_1796_);
if (v_isShared_1777_ == 0)
{
lean_ctor_set_tag(v___x_1776_, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1797_);
v___x_1799_ = v___x_1776_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
else
{
lean_object* v___x_1802_; 
if (v_isShared_1777_ == 0)
{
lean_ctor_set_tag(v___x_1776_, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1789_);
v___x_1802_ = v___x_1776_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1789_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
v___jp_1804_:
{
lean_object* v___x_1806_; uint8_t v___x_1807_; 
v___x_1806_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__4);
v___x_1807_ = lean_int_dec_le(v___x_1806_, v_a_1805_);
if (v___x_1807_ == 0)
{
lean_object* v___x_1808_; 
lean_dec(v_a_1805_);
v___x_1808_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__5));
v_a_1779_ = v___x_1808_;
goto v___jp_1778_;
}
else
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
lean_del_object(v___x_1776_);
lean_dec(v___x_1774_);
v___x_1809_ = l_Int_toNat(v_a_1805_);
lean_dec(v_a_1805_);
v___x_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
v___x_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
return v___x_1811_;
}
}
}
}
else
{
lean_object* v___x_1820_; 
lean_dec(v_d_1770_);
v___x_1820_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__7));
return v___x_1820_;
}
v___jp_1772_:
{
lean_object* v___x_1773_; 
v___x_1773_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__0));
return v___x_1773_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_d_1821_, lean_object* v_key_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7(v_d_1821_, v_key_1822_);
lean_dec_ref(v_key_1822_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object* v_d_1827_, lean_object* v_key_1828_){
_start:
{
if (lean_obj_tag(v_d_1827_) == 8)
{
lean_object* v___x_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1860_; 
v___x_1829_ = l_Lasm_JS_Data_field(v_d_1827_, v_key_1828_);
v_isSharedCheck_1860_ = !lean_is_exclusive(v_d_1827_);
if (v_isSharedCheck_1860_ == 0)
{
lean_object* v_unused_1861_; 
v_unused_1861_ = lean_ctor_get(v_d_1827_, 0);
lean_dec(v_unused_1861_);
v___x_1831_ = v_d_1827_;
v_isShared_1832_ = v_isSharedCheck_1860_;
goto v_resetjp_1830_;
}
else
{
lean_dec(v_d_1827_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1860_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
if (lean_obj_tag(v___x_1829_) == 4)
{
lean_object* v_s_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1840_; 
lean_del_object(v___x_1831_);
v_s_1833_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1835_ = v___x_1829_;
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_s_1833_);
lean_dec(v___x_1829_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
lean_ctor_set_tag(v___x_1835_, 1);
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_s_1833_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
else
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; uint8_t v___x_1851_; 
v___x_1841_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1842_ = lean_string_append(v___x_1841_, v_key_1828_);
v___x_1843_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1844_ = lean_string_append(v___x_1842_, v___x_1843_);
v___x_1845_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0));
v___x_1846_ = lean_string_append(v___x_1844_, v___x_1845_);
v___x_1847_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1848_ = lean_string_append(v___x_1846_, v___x_1847_);
v___x_1849_ = l_Lasm_JS_Data_describe(v___x_1829_);
v___x_1850_ = lean_string_append(v___x_1848_, v___x_1849_);
lean_dec_ref(v___x_1849_);
v___x_1851_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5);
if (v___x_1851_ == 0)
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1855_; 
v___x_1852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__6));
v___x_1853_ = lean_string_append(v___x_1850_, v___x_1852_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set_tag(v___x_1831_, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1853_);
v___x_1855_ = v___x_1831_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v___x_1853_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
else
{
lean_object* v___x_1858_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set_tag(v___x_1831_, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1850_);
v___x_1858_ = v___x_1831_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1850_);
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
}
else
{
lean_object* v___x_1862_; 
lean_dec(v_d_1827_);
v___x_1862_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1));
return v___x_1862_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object* v_d_1863_, lean_object* v_key_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6(v_d_1863_, v_key_1864_);
lean_dec_ref(v_key_1864_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__8(size_t v_sz_1866_, size_t v_i_1867_, lean_object* v_bs_1868_){
_start:
{
uint8_t v___x_1869_; 
v___x_1869_ = lean_usize_dec_lt(v_i_1867_, v_sz_1866_);
if (v___x_1869_ == 0)
{
lean_object* v___x_1870_; 
v___x_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1870_, 0, v_bs_1868_);
return v___x_1870_;
}
else
{
lean_object* v_v_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v_v_1871_ = lean_array_uget_borrowed(v_bs_1868_, v_i_1867_);
v___x_1872_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__0));
lean_inc(v_v_1871_);
v___x_1873_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__6(v_v_1871_, v___x_1872_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
lean_dec_ref(v_bs_1868_);
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
else
{
lean_object* v_a_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v_a_1882_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1873_, 1);
v___x_1883_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__1));
lean_inc(v_v_1871_);
v___x_1884_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7(v_v_1871_, v___x_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec(v_a_1882_);
lean_dec_ref(v_bs_1868_);
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1884_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1884_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v_a_1893_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1893_);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1894_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2));
lean_inc(v_v_1871_);
v___x_1895_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_v_1871_, v___x_1894_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1903_; 
lean_dec(v_a_1893_);
lean_dec(v_a_1882_);
lean_dec_ref(v_bs_1868_);
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1898_ = v___x_1895_;
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1895_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1901_; 
if (v_isShared_1899_ == 0)
{
v___x_1901_ = v___x_1898_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_a_1896_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
return v___x_1901_;
}
}
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1905_; lean_object* v_bs_x27_1906_; lean_object* v___x_1907_; size_t v___x_1908_; size_t v___x_1909_; lean_object* v___x_1910_; 
v_a_1904_ = lean_ctor_get(v___x_1895_, 0);
lean_inc(v_a_1904_);
lean_dec_ref_known(v___x_1895_, 1);
v___x_1905_ = lean_unsigned_to_nat(0u);
v_bs_x27_1906_ = lean_array_uset(v_bs_1868_, v_i_1867_, v___x_1905_);
v___x_1907_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1907_, 0, v_a_1882_);
lean_ctor_set(v___x_1907_, 1, v_a_1893_);
lean_ctor_set(v___x_1907_, 2, v_a_1904_);
v___x_1908_ = ((size_t)1ULL);
v___x_1909_ = lean_usize_add(v_i_1867_, v___x_1908_);
v___x_1910_ = lean_array_uset(v_bs_x27_1906_, v_i_1867_, v___x_1907_);
v_i_1867_ = v___x_1909_;
v_bs_1868_ = v___x_1910_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_sz_1912_, lean_object* v_i_1913_, lean_object* v_bs_1914_){
_start:
{
size_t v_sz_boxed_1915_; size_t v_i_boxed_1916_; lean_object* v_res_1917_; 
v_sz_boxed_1915_ = lean_unbox_usize(v_sz_1912_);
lean_dec(v_sz_1912_);
v_i_boxed_1916_ = lean_unbox_usize(v_i_1913_);
lean_dec(v_i_1913_);
v_res_1917_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__8(v_sz_boxed_1915_, v_i_boxed_1916_, v_bs_1914_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_1923_, lean_object* v_key_1924_){
_start:
{
if (lean_obj_tag(v_d_1923_) == 8)
{
lean_object* v___x_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1969_; 
v___x_1925_ = l_Lasm_JS_Data_field(v_d_1923_, v_key_1924_);
v_isSharedCheck_1969_ = !lean_is_exclusive(v_d_1923_);
if (v_isSharedCheck_1969_ == 0)
{
lean_object* v_unused_1970_; 
v_unused_1970_ = lean_ctor_get(v_d_1923_, 0);
lean_dec(v_unused_1970_);
v___x_1927_ = v_d_1923_;
v_isShared_1928_ = v_isSharedCheck_1969_;
goto v_resetjp_1926_;
}
else
{
lean_dec(v_d_1923_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1969_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v_a_1930_; 
if (lean_obj_tag(v___x_1925_) == 7)
{
lean_object* v_items_1955_; size_t v_sz_1956_; size_t v___x_1957_; lean_object* v___x_1958_; 
v_items_1955_ = lean_ctor_get(v___x_1925_, 0);
lean_inc_ref(v_items_1955_);
v_sz_1956_ = lean_array_size(v_items_1955_);
v___x_1957_ = ((size_t)0ULL);
v___x_1958_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__8(v_sz_1956_, v___x_1957_, v_items_1955_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1958_, 1);
v___x_1960_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__1));
v___x_1961_ = lean_string_utf8_byte_size(v_a_1959_);
v___x_1962_ = lean_unsigned_to_nat(0u);
v___x_1963_ = lean_nat_dec_eq(v___x_1961_, v___x_1962_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1964_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__2));
v___x_1965_ = lean_string_append(v___x_1964_, v_a_1959_);
lean_dec(v_a_1959_);
v___x_1966_ = lean_string_append(v___x_1960_, v___x_1965_);
lean_dec_ref(v___x_1965_);
v_a_1930_ = v___x_1966_;
goto v___jp_1929_;
}
else
{
lean_dec(v_a_1959_);
v_a_1930_ = v___x_1960_;
goto v___jp_1929_;
}
}
else
{
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1967_; 
v_a_1967_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1967_);
lean_dec_ref_known(v___x_1958_, 1);
v_a_1930_ = v_a_1967_;
goto v___jp_1929_;
}
else
{
lean_dec_ref_known(v___x_1925_, 1);
lean_del_object(v___x_1927_);
return v___x_1958_;
}
}
}
else
{
lean_object* v___x_1968_; 
v___x_1968_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v_a_1930_ = v___x_1968_;
goto v___jp_1929_;
}
v___jp_1929_:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; uint8_t v___x_1943_; 
v___x_1931_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1932_ = lean_string_append(v___x_1931_, v_key_1924_);
v___x_1933_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1934_ = lean_string_append(v___x_1932_, v___x_1933_);
v___x_1935_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__0));
v___x_1936_ = lean_string_append(v___x_1934_, v___x_1935_);
v___x_1937_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1938_ = lean_string_append(v___x_1936_, v___x_1937_);
v___x_1939_ = l_Lasm_JS_Data_describe(v___x_1925_);
v___x_1940_ = lean_string_append(v___x_1938_, v___x_1939_);
lean_dec_ref(v___x_1939_);
v___x_1941_ = lean_string_utf8_byte_size(v_a_1930_);
v___x_1942_ = lean_unsigned_to_nat(0u);
v___x_1943_ = lean_nat_dec_eq(v___x_1941_, v___x_1942_);
if (v___x_1943_ == 0)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1950_; 
v___x_1944_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__2));
v___x_1945_ = lean_string_append(v___x_1944_, v_a_1930_);
lean_dec_ref(v_a_1930_);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__3));
v___x_1947_ = lean_string_append(v___x_1945_, v___x_1946_);
v___x_1948_ = lean_string_append(v___x_1940_, v___x_1947_);
lean_dec_ref(v___x_1947_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set_tag(v___x_1927_, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1948_);
v___x_1950_ = v___x_1927_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v___x_1948_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
else
{
lean_object* v___x_1953_; 
lean_dec_ref(v_a_1930_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set_tag(v___x_1927_, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1940_);
v___x_1953_ = v___x_1927_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v___x_1940_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
}
else
{
lean_object* v___x_1971_; 
lean_dec(v_d_1923_);
v___x_1971_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___closed__3));
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_1972_, lean_object* v_key_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5(v_d_1972_, v_key_1973_);
lean_dec_ref(v_key_1973_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6(lean_object* v_d_1979_, lean_object* v_key_1980_){
_start:
{
if (lean_obj_tag(v_d_1979_) == 8)
{
lean_object* v___x_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_2011_; 
v___x_1983_ = l_Lasm_JS_Data_field(v_d_1979_, v_key_1980_);
v_isSharedCheck_2011_ = !lean_is_exclusive(v_d_1979_);
if (v_isSharedCheck_2011_ == 0)
{
lean_object* v_unused_2012_; 
v_unused_2012_ = lean_ctor_get(v_d_1979_, 0);
lean_dec(v_unused_2012_);
v___x_1985_ = v_d_1979_;
v_isShared_1986_ = v_isSharedCheck_2011_;
goto v_resetjp_1984_;
}
else
{
lean_dec(v_d_1979_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_2011_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
switch(lean_obj_tag(v___x_1983_))
{
case 1:
{
lean_del_object(v___x_1985_);
goto v___jp_1981_;
}
case 0:
{
lean_del_object(v___x_1985_);
goto v___jp_1981_;
}
default: 
{
if (lean_obj_tag(v___x_1983_) == 4)
{
lean_object* v_s_1987_; lean_object* v___x_1989_; 
v_s_1987_ = lean_ctor_get(v___x_1983_, 0);
lean_inc_ref(v_s_1987_);
lean_dec_ref_known(v___x_1983_, 1);
if (v_isShared_1986_ == 0)
{
lean_ctor_set_tag(v___x_1985_, 1);
lean_ctor_set(v___x_1985_, 0, v_s_1987_);
v___x_1989_ = v___x_1985_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_s_1987_);
v___x_1989_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
lean_object* v___x_1990_; 
v___x_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1989_);
return v___x_1990_;
}
}
else
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; uint8_t v___x_2002_; 
v___x_1992_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1993_ = lean_string_append(v___x_1992_, v_key_1980_);
v___x_1994_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1995_ = lean_string_append(v___x_1993_, v___x_1994_);
v___x_1996_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__2));
v___x_1997_ = lean_string_append(v___x_1995_, v___x_1996_);
v___x_1998_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1999_ = lean_string_append(v___x_1997_, v___x_1998_);
v___x_2000_ = l_Lasm_JS_Data_describe(v___x_1983_);
v___x_2001_ = lean_string_append(v___x_1999_, v___x_2000_);
lean_dec_ref(v___x_2000_);
v___x_2002_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__5);
if (v___x_2002_ == 0)
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2006_; 
v___x_2003_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__6));
v___x_2004_ = lean_string_append(v___x_2001_, v___x_2003_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set_tag(v___x_1985_, 0);
lean_ctor_set(v___x_1985_, 0, v___x_2004_);
v___x_2006_ = v___x_1985_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_2004_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
else
{
lean_object* v___x_2009_; 
if (v_isShared_1986_ == 0)
{
lean_ctor_set_tag(v___x_1985_, 0);
lean_ctor_set(v___x_1985_, 0, v___x_2001_);
v___x_2009_ = v___x_1985_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2001_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2013_; 
lean_dec(v_d_1979_);
v___x_2013_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___closed__1));
return v___x_2013_;
}
v___jp_1981_:
{
lean_object* v___x_1982_; 
v___x_1982_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___closed__0));
return v___x_1982_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6___boxed(lean_object* v_d_2014_, lean_object* v_key_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6(v_d_2014_, v_key_2015_);
lean_dec_ref(v_key_2015_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3(lean_object* v_context_2017_, lean_object* v_d_2018_){
_start:
{
lean_object* v___y_2021_; lean_object* v___y_2022_; lean_object* v___y_2027_; lean_object* v_received_2028_; lean_object* v___y_2047_; lean_object* v_a_2050_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__0));
lean_inc(v_d_2018_);
v___x_2075_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__4(v_d_2018_, v___x_2074_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v_a_2050_ = v_a_2076_;
goto v___jp_2049_;
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v_a_2077_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2077_);
lean_dec_ref_known(v___x_2075_, 1);
v___x_2078_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__1));
lean_inc(v_d_2018_);
v___x_2079_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5(v_d_2018_, v___x_2078_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; 
lean_dec(v_a_2077_);
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v_a_2050_ = v_a_2080_;
goto v___jp_2049_;
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v_a_2081_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2081_);
lean_dec_ref_known(v___x_2079_, 1);
v___x_2082_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__2));
lean_inc(v_d_2018_);
v___x_2083_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6(v_d_2018_, v___x_2082_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v_a_2084_; 
lean_dec(v_a_2081_);
lean_dec(v_a_2077_);
v_a_2084_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_a_2084_);
lean_dec_ref_known(v___x_2083_, 1);
v_a_2050_ = v_a_2084_;
goto v___jp_2049_;
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v_a_2085_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2083_, 1);
v___x_2086_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__2));
lean_inc(v_d_2018_);
v___x_2087_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6(v_d_2018_, v___x_2086_);
if (lean_obj_tag(v___x_2087_) == 0)
{
lean_object* v_a_2088_; 
lean_dec(v_a_2085_);
lean_dec(v_a_2081_);
lean_dec(v_a_2077_);
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2088_);
lean_dec_ref_known(v___x_2087_, 1);
v_a_2050_ = v_a_2088_;
goto v___jp_2049_;
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2098_; 
lean_dec(v_d_2018_);
v_a_2089_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2091_ = v___x_2087_;
v_isShared_2092_ = v_isSharedCheck_2098_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2087_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2098_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2093_; uint8_t v___x_2094_; lean_object* v___x_2096_; 
v___x_2093_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2093_, 0, v_a_2081_);
lean_ctor_set(v___x_2093_, 1, v_a_2085_);
lean_ctor_set(v___x_2093_, 2, v_a_2089_);
v___x_2094_ = lean_unbox(v_a_2077_);
lean_dec(v_a_2077_);
lean_ctor_set_uint8(v___x_2093_, sizeof(void*)*3, v___x_2094_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set_tag(v___x_2091_, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2093_);
v___x_2096_ = v___x_2091_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2093_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
}
}
v___jp_2020_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2023_ = lean_string_append(v___y_2021_, v___y_2022_);
lean_dec_ref(v___y_2022_);
v___x_2024_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2023_);
v___x_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
return v___x_2025_;
}
v___jp_2026_:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; 
v___x_2029_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__0));
v___x_2030_ = lean_string_append(v___x_2029_, v_context_2017_);
v___x_2031_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__1));
v___x_2032_ = lean_string_append(v___x_2030_, v___x_2031_);
v___x_2033_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___closed__3));
v___x_2034_ = lean_string_append(v___x_2032_, v___x_2033_);
v___x_2035_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__3));
v___x_2036_ = lean_string_append(v___x_2034_, v___x_2035_);
v___x_2037_ = lean_string_append(v___x_2036_, v_received_2028_);
lean_dec_ref(v_received_2028_);
v___x_2038_ = lean_string_utf8_byte_size(v___y_2027_);
v___x_2039_ = lean_unsigned_to_nat(0u);
v___x_2040_ = lean_nat_dec_eq(v___x_2038_, v___x_2039_);
if (v___x_2040_ == 0)
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2041_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__2));
v___x_2042_ = lean_string_append(v___x_2041_, v___y_2027_);
lean_dec_ref(v___y_2027_);
v___x_2043_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__3));
v___x_2044_ = lean_string_append(v___x_2042_, v___x_2043_);
v___y_2021_ = v___x_2037_;
v___y_2022_ = v___x_2044_;
goto v___jp_2020_;
}
else
{
lean_object* v___x_2045_; 
lean_dec_ref(v___y_2027_);
v___x_2045_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___y_2021_ = v___x_2037_;
v___y_2022_ = v___x_2045_;
goto v___jp_2020_;
}
}
v___jp_2046_:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Lasm_JS_Data_describe(v_d_2018_);
v___y_2027_ = v___y_2047_;
v_received_2028_ = v___x_2048_;
goto v___jp_2026_;
}
v___jp_2049_:
{
if (lean_obj_tag(v_d_2018_) == 9)
{
lean_object* v_value_2051_; lean_object* v_description_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; 
v_value_2051_ = lean_ctor_get(v_d_2018_, 0);
v_description_2052_ = lean_ctor_get(v_d_2018_, 1);
v___x_2053_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_2054_ = lean_string_dec_eq(v_description_2052_, v___x_2053_);
if (v___x_2054_ == 0)
{
v___y_2047_ = v_a_2050_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2071_; 
lean_inc(v_value_2051_);
v_isSharedCheck_2071_ = !lean_is_exclusive(v_d_2018_);
if (v_isSharedCheck_2071_ == 0)
{
lean_object* v_unused_2072_; lean_object* v_unused_2073_; 
v_unused_2072_ = lean_ctor_get(v_d_2018_, 1);
lean_dec(v_unused_2072_);
v_unused_2073_ = lean_ctor_get(v_d_2018_, 0);
lean_dec(v_unused_2073_);
v___x_2056_ = v_d_2018_;
v_isShared_2057_ = v_isSharedCheck_2071_;
goto v_resetjp_2055_;
}
else
{
lean_dec(v_d_2018_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2071_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
uint32_t v___x_2058_; uint64_t v___x_2059_; lean_object* v___x_2061_; 
v___x_2058_ = 206;
v___x_2059_ = 0ULL;
lean_inc(v_value_2051_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 1, v___x_2053_);
v___x_2061_ = v___x_2056_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_value_2051_);
lean_ctor_set(v_reuseFailAlloc_2070_, 1, v___x_2053_);
v___x_2061_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
uint32_t v___x_2062_; lean_object* v___x_2063_; 
v___x_2062_ = lasm_js_value_handle(v_value_2051_);
lean_dec(v_value_2051_);
v___x_2063_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2058_, v___x_2059_, v___x_2061_, v___x_2062_);
lean_dec_ref(v___x_2061_);
if (lean_obj_tag(v___x_2063_) == 0)
{
lean_object* v_a_2064_; uint8_t v___x_2065_; 
v_a_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc(v_a_2064_);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2065_ = lean_string_validate_utf8(v_a_2064_);
if (v___x_2065_ == 0)
{
lean_object* v___x_2066_; lean_object* v___x_2067_; 
lean_dec(v_a_2064_);
v___x_2066_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10);
v___x_2067_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2066_);
v___y_2027_ = v_a_2050_;
v_received_2028_ = v___x_2067_;
goto v___jp_2026_;
}
else
{
lean_object* v___x_2068_; 
v___x_2068_ = lean_string_from_utf8_unchecked(v_a_2064_);
v___y_2027_ = v_a_2050_;
v_received_2028_ = v___x_2068_;
goto v___jp_2026_;
}
}
else
{
lean_object* v___x_2069_; 
lean_dec_ref_known(v___x_2063_, 1);
v___x_2069_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__11));
v___y_2027_ = v_a_2050_;
v_received_2028_ = v___x_2069_;
goto v___jp_2026_;
}
}
}
}
}
else
{
v___y_2047_ = v_a_2050_;
goto v___jp_2046_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3___boxed(lean_object* v_context_2099_, lean_object* v_d_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3(v_context_2099_, v_d_2100_);
lean_dec_ref(v_context_2099_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__0(lean_object* v_context_2103_, lean_object* v_x_2104_){
_start:
{
lean_object* v_val_2107_; 
if (lean_obj_tag(v_x_2104_) == 0)
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2117_; 
v_a_2109_ = lean_ctor_get(v_x_2104_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v_x_2104_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2111_ = v_x_2104_;
v_isShared_2112_ = v_isSharedCheck_2117_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v_x_2104_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2117_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
lean_object* v___x_2115_; 
v___x_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2114_);
return v___x_2115_;
}
}
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2131_; 
v_a_2118_ = lean_ctor_get(v_x_2104_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v_x_2104_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2120_ = v_x_2104_;
v_isShared_2121_ = v_isSharedCheck_2131_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v_x_2104_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2131_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; 
v___x_2122_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3(v_context_2103_, v_a_2118_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2125_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2123_);
lean_dec_ref_known(v___x_2122_, 1);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v_a_2123_);
v___x_2125_ = v___x_2120_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2123_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
v_val_2107_ = v___x_2125_;
goto v___jp_2106_;
}
}
else
{
lean_object* v_a_2127_; lean_object* v___x_2129_; 
v_a_2127_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2122_, 1);
if (v_isShared_2121_ == 0)
{
lean_ctor_set_tag(v___x_2120_, 0);
lean_ctor_set(v___x_2120_, 0, v_a_2127_);
v___x_2129_ = v___x_2120_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2127_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
v_val_2107_ = v___x_2129_;
goto v___jp_2106_;
}
}
}
}
v___jp_2106_:
{
lean_object* v___x_2108_; 
v___x_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2108_, 0, v_val_2107_);
return v___x_2108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__0___boxed(lean_object* v_context_2132_, lean_object* v_x_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__0(v_context_2132_, v_x_2133_);
lean_dec_ref(v_context_2132_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2(lean_object* v_context_2136_, uint32_t v_op_2137_, uint64_t v_flags_2138_, lean_object* v_payload_2139_, lean_object* v_failurePrefix_2140_){
_start:
{
lean_object* v___f_2142_; lean_object* v___f_2143_; lean_object* v___f_2144_; lean_object* v___f_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___f_2148_; lean_object* v___f_2149_; lean_object* v___x_2150_; uint8_t v___x_2151_; lean_object* v_val_2153_; lean_object* v___x_2156_; 
v___f_2142_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2142_, 0, v_context_2136_);
v___f_2143_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2143_, 0, v___f_2142_);
v___f_2144_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2144_, 0, v___f_2143_);
lean_inc_ref(v_failurePrefix_2140_);
v___f_2145_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2145_, 0, v_failurePrefix_2140_);
v___x_2146_ = lean_box_uint32(v_op_2137_);
v___x_2147_ = lean_box_uint64(v_flags_2138_);
lean_inc_ref(v___f_2144_);
v___f_2148_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2148_, 0, v_failurePrefix_2140_);
lean_closure_set(v___f_2148_, 1, v___x_2146_);
lean_closure_set(v___f_2148_, 2, v___x_2147_);
lean_closure_set(v___f_2148_, 3, v_payload_2139_);
lean_closure_set(v___f_2148_, 4, v___f_2145_);
lean_closure_set(v___f_2148_, 5, v___f_2144_);
lean_closure_set(v___f_2148_, 6, v___f_2144_);
v___f_2149_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2149_, 0, v___f_2148_);
v___x_2150_ = lean_unsigned_to_nat(0u);
v___x_2151_ = 0;
v___x_2156_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2156_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2156_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
lean_ctor_set_tag(v___x_2159_, 1);
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
v_val_2153_ = v___x_2162_;
goto v___jp_2152_;
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
v_a_2165_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2156_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2156_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
lean_ctor_set_tag(v___x_2167_, 0);
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
v_val_2153_ = v___x_2170_;
goto v___jp_2152_;
}
}
}
v___jp_2152_:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2154_, 0, v_val_2153_);
v___x_2155_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2150_, v___x_2151_, v___x_2154_, v___f_2149_);
return v___x_2155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2___boxed(lean_object* v_context_2173_, lean_object* v_op_2174_, lean_object* v_flags_2175_, lean_object* v_payload_2176_, lean_object* v_failurePrefix_2177_, lean_object* v_a_2178_){
_start:
{
uint32_t v_op_boxed_2179_; uint64_t v_flags_boxed_2180_; lean_object* v_res_2181_; 
v_op_boxed_2179_ = lean_unbox_uint32(v_op_2174_);
lean_dec(v_op_2174_);
v_flags_boxed_2180_ = lean_unbox_uint64(v_flags_2175_);
lean_dec_ref(v_flags_2175_);
v_res_2181_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2(v_context_2173_, v_op_boxed_2179_, v_flags_boxed_2180_, v_payload_2176_, v_failurePrefix_2177_);
return v_res_2181_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2182_; uint8_t v___x_2183_; uint64_t v___x_2184_; 
v___x_2182_ = 8ULL;
v___x_2183_ = 0;
v___x_2184_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__1(v___x_2183_, v___x_2182_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1(lean_object* v_o_2185_, lean_object* v_name_2186_, lean_object* v_args_2187_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; uint32_t v___x_2194_; uint64_t v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2189_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_2190_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2190_, 0, v_o_2185_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
lean_inc_ref(v_name_2186_);
v___x_2191_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2191_, 0, v_name_2186_);
v___x_2192_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__0));
v___x_2193_ = lean_string_append(v___x_2192_, v_name_2186_);
lean_dec_ref(v_name_2186_);
v___x_2194_ = 205;
v___x_2195_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1___closed__0);
v___x_2196_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2196_, 0, v_args_2187_);
v___x_2197_ = lean_unsigned_to_nat(3u);
v___x_2198_ = lean_mk_empty_array_with_capacity(v___x_2197_);
v___x_2199_ = lean_array_push(v___x_2198_, v___x_2190_);
v___x_2200_ = lean_array_push(v___x_2199_, v___x_2191_);
v___x_2201_ = lean_array_push(v___x_2200_, v___x_2196_);
v___x_2202_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
v___x_2203_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2(v___x_2193_, v___x_2194_, v___x_2195_, v___x_2202_, v___x_2189_);
return v___x_2203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1___boxed(lean_object* v_o_2204_, lean_object* v_name_2205_, lean_object* v_args_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1(v_o_2204_, v_name_2205_, v_args_2206_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__0(lean_object* v_x_2209_){
_start:
{
if (lean_obj_tag(v_x_2209_) == 0)
{
lean_object* v___x_2210_; 
v___x_2210_ = lean_box(0);
return v___x_2210_;
}
else
{
lean_object* v_val_2211_; lean_object* v_limit_2212_; lean_object* v_prefix_2213_; lean_object* v_cursor_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v_val_2211_ = lean_ctor_get(v_x_2209_, 0);
lean_inc(v_val_2211_);
lean_dec_ref_known(v_x_2209_, 1);
v_limit_2212_ = lean_ctor_get(v_val_2211_, 0);
lean_inc(v_limit_2212_);
v_prefix_2213_ = lean_ctor_get(v_val_2211_, 1);
lean_inc(v_prefix_2213_);
v_cursor_2214_ = lean_ctor_get(v_val_2211_, 2);
lean_inc(v_cursor_2214_);
lean_dec(v_val_2211_);
v___x_2215_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__0));
v___x_2216_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_limit_2212_);
v___x_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2215_);
lean_ctor_set(v___x_2217_, 1, v___x_2216_);
v___x_2218_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__1));
v___x_2219_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_2213_);
v___x_2220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2218_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespaceListOptions___lam__0___closed__2));
v___x_2222_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_cursor_2214_);
v___x_2223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2221_);
lean_ctor_set(v___x_2223_, 1, v___x_2222_);
v___x_2224_ = lean_unsigned_to_nat(3u);
v___x_2225_ = lean_mk_empty_array_with_capacity(v___x_2224_);
v___x_2226_ = lean_array_push(v___x_2225_, v___x_2217_);
v___x_2227_ = lean_array_push(v___x_2226_, v___x_2220_);
v___x_2228_ = lean_array_push(v___x_2227_, v___x_2223_);
v___x_2229_ = l_Lasm_JS_Web_Support_fields(v___x_2228_);
lean_dec_ref(v___x_2228_);
return v___x_2229_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_list(lean_object* v_self_2231_, lean_object* v_options_2232_){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2234_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_list___closed__0));
v___x_2235_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__0(v_options_2232_);
v___x_2236_ = lean_unsigned_to_nat(1u);
v___x_2237_ = lean_mk_empty_array_with_capacity(v___x_2236_);
v___x_2238_ = lean_array_push(v___x_2237_, v___x_2235_);
v___x_2239_ = l_Lasm_JS_Web_Support_args(v___x_2238_);
v___x_2240_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1(v_self_2231_, v___x_2234_, v___x_2239_);
return v___x_2240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_list___boxed(lean_object* v_self_2241_, lean_object* v_options_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l_Lasm_JS_Cloudflare_KVNamespace_list(v_self_2241_, v_options_2242_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_put_spec__0(lean_object* v_x_2245_){
_start:
{
if (lean_obj_tag(v_x_2245_) == 0)
{
lean_object* v___x_2246_; 
v___x_2246_ = lean_box(0);
return v___x_2246_;
}
else
{
lean_object* v_val_2247_; lean_object* v_expiration_2248_; lean_object* v_expirationTtl_2249_; lean_object* v_metadata_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v_val_2247_ = lean_ctor_get(v_x_2245_, 0);
lean_inc(v_val_2247_);
lean_dec_ref_known(v_x_2245_, 1);
v_expiration_2248_ = lean_ctor_get(v_val_2247_, 0);
lean_inc(v_expiration_2248_);
v_expirationTtl_2249_ = lean_ctor_get(v_val_2247_, 1);
lean_inc(v_expirationTtl_2249_);
v_metadata_2250_ = lean_ctor_get(v_val_2247_, 2);
lean_inc(v_metadata_2250_);
lean_dec(v_val_2247_);
v___x_2251_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__1));
v___x_2252_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_expiration_2248_);
v___x_2253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2251_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
v___x_2254_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespacePutOptions___lam__0___closed__0));
v___x_2255_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_expirationTtl_2249_);
v___x_2256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2254_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2));
v___x_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2257_);
lean_ctor_set(v___x_2258_, 1, v_metadata_2250_);
v___x_2259_ = lean_unsigned_to_nat(3u);
v___x_2260_ = lean_mk_empty_array_with_capacity(v___x_2259_);
v___x_2261_ = lean_array_push(v___x_2260_, v___x_2253_);
v___x_2262_ = lean_array_push(v___x_2261_, v___x_2256_);
v___x_2263_ = lean_array_push(v___x_2262_, v___x_2258_);
v___x_2264_ = l_Lasm_JS_Web_Support_fields(v___x_2263_);
lean_dec_ref(v___x_2263_);
return v___x_2264_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_put(lean_object* v_self_2266_, lean_object* v_key_2267_, lean_object* v_value_2268_, lean_object* v_options_2269_){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___y_2274_; 
v___x_2271_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_put___closed__0));
v___x_2272_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2272_, 0, v_key_2267_);
switch(lean_obj_tag(v_value_2268_))
{
case 0:
{
lean_object* v_value_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
v_value_2283_ = lean_ctor_get(v_value_2268_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_value_2268_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v_value_2268_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_value_2283_);
lean_dec(v_value_2268_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
lean_ctor_set_tag(v___x_2285_, 4);
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_value_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
v___y_2274_ = v___x_2288_;
goto v___jp_2273_;
}
}
}
case 1:
{
lean_object* v_value_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v_value_2291_ = lean_ctor_get(v_value_2268_, 0);
lean_inc(v_value_2291_);
lean_dec_ref_known(v_value_2268_, 1);
v___x_2292_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_2293_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2293_, 0, v_value_2291_);
lean_ctor_set(v___x_2293_, 1, v___x_2292_);
v___y_2274_ = v___x_2293_;
goto v___jp_2273_;
}
default: 
{
lean_object* v_value_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
v_value_2294_ = lean_ctor_get(v_value_2268_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v_value_2268_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v_value_2268_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_value_2294_);
lean_dec(v_value_2268_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
lean_ctor_set_tag(v___x_2296_, 6);
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_value_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
v___y_2274_ = v___x_2299_;
goto v___jp_2273_;
}
}
}
}
v___jp_2273_:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2275_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_put_spec__0(v_options_2269_);
v___x_2276_ = lean_unsigned_to_nat(3u);
v___x_2277_ = lean_mk_empty_array_with_capacity(v___x_2276_);
v___x_2278_ = lean_array_push(v___x_2277_, v___x_2272_);
v___x_2279_ = lean_array_push(v___x_2278_, v___y_2274_);
v___x_2280_ = lean_array_push(v___x_2279_, v___x_2275_);
v___x_2281_ = l_Lasm_JS_Web_Support_args(v___x_2280_);
v___x_2282_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2266_, v___x_2271_, v___x_2281_);
return v___x_2282_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_put___boxed(lean_object* v_self_2302_, lean_object* v_key_2303_, lean_object* v_value_2304_, lean_object* v_options_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Lasm_JS_Cloudflare_KVNamespace_put(v_self_2302_, v_key_2303_, v_value_2304_, v_options_2305_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__1(lean_object* v___f_2308_, lean_object* v_bytes_2309_){
_start:
{
lean_object* v___x_2311_; uint8_t v___x_2312_; lean_object* v_val_2314_; lean_object* v___x_2317_; 
v___x_2311_ = lean_unsigned_to_nat(0u);
v___x_2312_ = 0;
v___x_2317_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2309_);
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
lean_ctor_set_tag(v___x_2320_, 1);
v___x_2323_ = v___x_2320_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v_a_2318_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
v_val_2314_ = v___x_2323_;
goto v___jp_2313_;
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
lean_ctor_set_tag(v___x_2328_, 0);
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2326_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
v_val_2314_ = v___x_2331_;
goto v___jp_2313_;
}
}
}
v___jp_2313_:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2315_, 0, v_val_2314_);
v___x_2316_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2311_, v___x_2312_, v___x_2315_, v___f_2308_);
return v___x_2316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__1___boxed(lean_object* v___f_2334_, lean_object* v_bytes_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__1(v___f_2334_, v_bytes_2335_);
lean_dec_ref(v_bytes_2335_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_2338_, uint32_t v_op_2339_, uint64_t v_flags_2340_, lean_object* v_payload_2341_, lean_object* v___f_2342_, lean_object* v___f_2343_, lean_object* v___f_2344_, lean_object* v_x_2345_){
_start:
{
if (lean_obj_tag(v_x_2345_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2355_; 
lean_dec_ref(v___f_2344_);
lean_dec_ref(v___f_2343_);
lean_dec_ref(v___f_2342_);
lean_dec(v_payload_2341_);
v_a_2347_ = lean_ctor_get(v_x_2345_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_x_2345_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2349_ = v_x_2345_;
v_isShared_2350_ = v_isSharedCheck_2355_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v_x_2345_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2355_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2353_; 
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
return v___x_2353_;
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2402_; 
v_a_2356_ = lean_ctor_get(v_x_2345_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v_x_2345_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2358_ = v_x_2345_;
v_isShared_2359_ = v_isSharedCheck_2402_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v_x_2345_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2402_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2360_ = lean_string_utf8_byte_size(v_failurePrefix_2338_);
v___x_2361_ = lean_unsigned_to_nat(0u);
v___x_2362_ = lean_nat_dec_eq(v___x_2360_, v___x_2361_);
if (v___x_2362_ == 0)
{
lean_object* v___f_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___f_2367_; lean_object* v_val_2369_; lean_object* v___x_2374_; 
lean_dec_ref(v___f_2344_);
lean_inc(v_a_2356_);
v___f_2363_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2363_, 0, v_a_2356_);
v___x_2364_ = lean_box(v___x_2362_);
v___x_2365_ = lean_box_uint32(v_op_2339_);
v___x_2366_ = lean_box_uint64(v_flags_2340_);
lean_inc(v_payload_2341_);
v___f_2367_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2367_, 0, v___x_2361_);
lean_closure_set(v___f_2367_, 1, v___x_2364_);
lean_closure_set(v___f_2367_, 2, v___f_2363_);
lean_closure_set(v___f_2367_, 3, v_a_2356_);
lean_closure_set(v___f_2367_, 4, v___x_2365_);
lean_closure_set(v___f_2367_, 5, v___x_2366_);
lean_closure_set(v___f_2367_, 6, v_payload_2341_);
v___x_2374_ = l_Lasm_JS_Wire_encodeIO(v_payload_2341_);
lean_dec(v_payload_2341_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2377_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2375_);
lean_dec_ref_known(v___x_2374_, 1);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v_a_2375_);
v___x_2377_ = v___x_2358_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2375_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
v_val_2369_ = v___x_2377_;
goto v___jp_2368_;
}
}
else
{
lean_object* v_a_2379_; lean_object* v___x_2381_; 
v_a_2379_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2379_);
lean_dec_ref_known(v___x_2374_, 1);
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 0);
lean_ctor_set(v___x_2358_, 0, v_a_2379_);
v___x_2381_ = v___x_2358_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2379_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
v_val_2369_ = v___x_2381_;
goto v___jp_2368_;
}
}
v___jp_2368_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2370_, 0, v_val_2369_);
v___x_2371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2361_, v___x_2362_, v___x_2370_, v___f_2367_);
v___x_2372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2361_, v___x_2362_, v___x_2371_, v___f_2342_);
v___x_2373_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2361_, v___x_2362_, v___x_2372_, v___f_2343_);
return v___x_2373_;
}
}
else
{
lean_object* v___f_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___f_2386_; uint8_t v___x_2387_; lean_object* v_val_2389_; lean_object* v___x_2393_; 
lean_dec_ref(v___f_2343_);
lean_dec_ref(v___f_2342_);
lean_inc(v_a_2356_);
v___f_2383_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2383_, 0, v_a_2356_);
v___x_2384_ = lean_box_uint32(v_op_2339_);
v___x_2385_ = lean_box_uint64(v_flags_2340_);
lean_inc(v_payload_2341_);
v___f_2386_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2386_, 0, v___f_2383_);
lean_closure_set(v___f_2386_, 1, v_a_2356_);
lean_closure_set(v___f_2386_, 2, v___x_2384_);
lean_closure_set(v___f_2386_, 3, v___x_2385_);
lean_closure_set(v___f_2386_, 4, v_payload_2341_);
v___x_2387_ = 0;
v___x_2393_ = l_Lasm_JS_Wire_encodeIO(v_payload_2341_);
lean_dec(v_payload_2341_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v_a_2394_; lean_object* v___x_2396_; 
v_a_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2394_);
lean_dec_ref_known(v___x_2393_, 1);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v_a_2394_);
v___x_2396_ = v___x_2358_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2394_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
v_val_2389_ = v___x_2396_;
goto v___jp_2388_;
}
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; 
v_a_2398_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2398_);
lean_dec_ref_known(v___x_2393_, 1);
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 0);
lean_ctor_set(v___x_2358_, 0, v_a_2398_);
v___x_2400_ = v___x_2358_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2398_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
v_val_2389_ = v___x_2400_;
goto v___jp_2388_;
}
}
v___jp_2388_:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2390_, 0, v_val_2389_);
v___x_2391_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2361_, v___x_2387_, v___x_2390_, v___f_2386_);
v___x_2392_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2361_, v___x_2387_, v___x_2391_, v___f_2344_);
return v___x_2392_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_2403_, lean_object* v_op_2404_, lean_object* v_flags_2405_, lean_object* v_payload_2406_, lean_object* v___f_2407_, lean_object* v___f_2408_, lean_object* v___f_2409_, lean_object* v_x_2410_, lean_object* v___y_2411_){
_start:
{
uint32_t v_op_boxed_2412_; uint64_t v_flags_boxed_2413_; lean_object* v_res_2414_; 
v_op_boxed_2412_ = lean_unbox_uint32(v_op_2404_);
lean_dec(v_op_2404_);
v_flags_boxed_2413_ = lean_unbox_uint64(v_flags_2405_);
lean_dec_ref(v_flags_2405_);
v_res_2414_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__9(v_failurePrefix_2403_, v_op_boxed_2412_, v_flags_boxed_2413_, v_payload_2406_, v___f_2407_, v___f_2408_, v___f_2409_, v_x_2410_);
lean_dec_ref(v_failurePrefix_2403_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__2(lean_object* v___f_2415_, lean_object* v_x_2416_){
_start:
{
if (lean_obj_tag(v_x_2416_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2426_; 
lean_dec_ref(v___f_2415_);
v_a_2418_ = lean_ctor_get(v_x_2416_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_x_2416_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2420_ = v_x_2416_;
v_isShared_2421_ = v_isSharedCheck_2426_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v_x_2416_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2426_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
lean_object* v___x_2424_; 
v___x_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2423_);
return v___x_2424_;
}
}
}
else
{
lean_object* v_a_2427_; lean_object* v___x_2428_; 
v_a_2427_ = lean_ctor_get(v_x_2416_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v_x_2416_, 1);
v___x_2428_ = lean_apply_2(v___f_2415_, v_a_2427_, lean_box(0));
return v___x_2428_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__2___boxed(lean_object* v___f_2429_, lean_object* v_x_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v_res_2432_; 
v_res_2432_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__2(v___f_2429_, v_x_2430_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1_spec__2(lean_object* v_context_2433_, lean_object* v_d_2434_){
_start:
{
lean_object* v___y_2437_; lean_object* v___y_2438_; lean_object* v___y_2443_; lean_object* v_received_2444_; lean_object* v___y_2463_; lean_object* v_a_2466_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2490_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___lam__0___closed__0));
lean_inc(v_d_2434_);
v___x_2491_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6(v_d_2434_, v___x_2490_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v_a_2492_; 
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2492_);
lean_dec_ref_known(v___x_2491_, 1);
v_a_2466_ = v_a_2492_;
goto v___jp_2465_;
}
else
{
lean_object* v_a_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v_a_2493_ = lean_ctor_get(v___x_2491_, 0);
lean_inc(v_a_2493_);
lean_dec_ref_known(v___x_2491_, 1);
v___x_2494_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey___lam__0___closed__2));
lean_inc(v_d_2434_);
v___x_2495_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_2434_, v___x_2494_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; 
lean_dec(v_a_2493_);
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2495_, 1);
v_a_2466_ = v_a_2496_;
goto v___jp_2465_;
}
else
{
lean_object* v_a_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v_a_2497_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2497_);
lean_dec_ref_known(v___x_2495_, 1);
v___x_2498_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult___lam__0___closed__2));
lean_inc(v_d_2434_);
v___x_2499_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__6(v_d_2434_, v___x_2498_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; 
lean_dec(v_a_2497_);
lean_dec(v_a_2493_);
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v___x_2499_, 1);
v_a_2466_ = v_a_2500_;
goto v___jp_2465_;
}
else
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2509_; 
lean_dec(v_d_2434_);
v_a_2501_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2503_ = v___x_2499_;
v_isShared_2504_ = v_isSharedCheck_2509_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2499_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2509_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2505_; lean_object* v___x_2507_; 
v___x_2505_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2505_, 0, v_a_2493_);
lean_ctor_set(v___x_2505_, 1, v_a_2497_);
lean_ctor_set(v___x_2505_, 2, v_a_2501_);
if (v_isShared_2504_ == 0)
{
lean_ctor_set_tag(v___x_2503_, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2505_);
v___x_2507_ = v___x_2503_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v___x_2505_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
}
}
}
}
}
v___jp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2439_ = lean_string_append(v___y_2437_, v___y_2438_);
lean_dec_ref(v___y_2438_);
v___x_2440_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
v___x_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2440_);
return v___x_2441_;
}
v___jp_2442_:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; uint8_t v___x_2456_; 
v___x_2445_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__0));
v___x_2446_ = lean_string_append(v___x_2445_, v_context_2433_);
v___x_2447_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__1));
v___x_2448_ = lean_string_append(v___x_2446_, v___x_2447_);
v___x_2449_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult___closed__1));
v___x_2450_ = lean_string_append(v___x_2448_, v___x_2449_);
v___x_2451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__3));
v___x_2452_ = lean_string_append(v___x_2450_, v___x_2451_);
v___x_2453_ = lean_string_append(v___x_2452_, v_received_2444_);
lean_dec_ref(v_received_2444_);
v___x_2454_ = lean_string_utf8_byte_size(v___y_2443_);
v___x_2455_ = lean_unsigned_to_nat(0u);
v___x_2456_ = lean_nat_dec_eq(v___x_2454_, v___x_2455_);
if (v___x_2456_ == 0)
{
lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2457_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__2));
v___x_2458_ = lean_string_append(v___x_2457_, v___y_2443_);
lean_dec_ref(v___y_2443_);
v___x_2459_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_list_spec__1_spec__2_spec__3_spec__5_spec__7___closed__3));
v___x_2460_ = lean_string_append(v___x_2458_, v___x_2459_);
v___y_2437_ = v___x_2453_;
v___y_2438_ = v___x_2460_;
goto v___jp_2436_;
}
else
{
lean_object* v___x_2461_; 
lean_dec_ref(v___y_2443_);
v___x_2461_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___y_2437_ = v___x_2453_;
v___y_2438_ = v___x_2461_;
goto v___jp_2436_;
}
}
v___jp_2462_:
{
lean_object* v___x_2464_; 
v___x_2464_ = l_Lasm_JS_Data_describe(v_d_2434_);
v___y_2443_ = v___y_2463_;
v_received_2444_ = v___x_2464_;
goto v___jp_2442_;
}
v___jp_2465_:
{
if (lean_obj_tag(v_d_2434_) == 9)
{
lean_object* v_value_2467_; lean_object* v_description_2468_; lean_object* v___x_2469_; uint8_t v___x_2470_; 
v_value_2467_ = lean_ctor_get(v_d_2434_, 0);
v_description_2468_ = lean_ctor_get(v_d_2434_, 1);
v___x_2469_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_2470_ = lean_string_dec_eq(v_description_2468_, v___x_2469_);
if (v___x_2470_ == 0)
{
v___y_2463_ = v_a_2466_;
goto v___jp_2462_;
}
else
{
lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2487_; 
lean_inc(v_value_2467_);
v_isSharedCheck_2487_ = !lean_is_exclusive(v_d_2434_);
if (v_isSharedCheck_2487_ == 0)
{
lean_object* v_unused_2488_; lean_object* v_unused_2489_; 
v_unused_2488_ = lean_ctor_get(v_d_2434_, 1);
lean_dec(v_unused_2488_);
v_unused_2489_ = lean_ctor_get(v_d_2434_, 0);
lean_dec(v_unused_2489_);
v___x_2472_ = v_d_2434_;
v_isShared_2473_ = v_isSharedCheck_2487_;
goto v_resetjp_2471_;
}
else
{
lean_dec(v_d_2434_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2487_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
uint32_t v___x_2474_; uint64_t v___x_2475_; lean_object* v___x_2477_; 
v___x_2474_ = 206;
v___x_2475_ = 0ULL;
lean_inc(v_value_2467_);
if (v_isShared_2473_ == 0)
{
lean_ctor_set(v___x_2472_, 1, v___x_2469_);
v___x_2477_ = v___x_2472_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_value_2467_);
lean_ctor_set(v_reuseFailAlloc_2486_, 1, v___x_2469_);
v___x_2477_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
uint32_t v___x_2478_; lean_object* v___x_2479_; 
v___x_2478_ = lasm_js_value_handle(v_value_2467_);
lean_dec(v_value_2467_);
v___x_2479_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2474_, v___x_2475_, v___x_2477_, v___x_2478_);
lean_dec_ref(v___x_2477_);
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v_a_2480_; uint8_t v___x_2481_; 
v_a_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2479_, 1);
v___x_2481_ = lean_string_validate_utf8(v_a_2480_);
if (v___x_2481_ == 0)
{
lean_object* v___x_2482_; lean_object* v___x_2483_; 
lean_dec(v_a_2480_);
v___x_2482_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__10);
v___x_2483_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2482_);
v___y_2443_ = v_a_2466_;
v_received_2444_ = v___x_2483_;
goto v___jp_2442_;
}
else
{
lean_object* v___x_2484_; 
v___x_2484_ = lean_string_from_utf8_unchecked(v_a_2480_);
v___y_2443_ = v_a_2466_;
v_received_2444_ = v___x_2484_;
goto v___jp_2442_;
}
}
else
{
lean_object* v___x_2485_; 
lean_dec_ref_known(v___x_2479_, 1);
v___x_2485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2_spec__3___closed__11));
v___y_2443_ = v_a_2466_;
v_received_2444_ = v___x_2485_;
goto v___jp_2442_;
}
}
}
}
}
else
{
v___y_2463_ = v_a_2466_;
goto v___jp_2462_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2510_, lean_object* v_d_2511_, lean_object* v_a_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1_spec__2(v_context_2510_, v_d_2511_);
lean_dec_ref(v_context_2510_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__0(lean_object* v_context_2514_, lean_object* v_x_2515_){
_start:
{
lean_object* v_val_2518_; 
if (lean_obj_tag(v_x_2515_) == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2528_; 
v_a_2520_ = lean_ctor_get(v_x_2515_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v_x_2515_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2522_ = v_x_2515_;
v_isShared_2523_ = v_isSharedCheck_2528_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v_x_2515_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2528_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
lean_object* v___x_2526_; 
v___x_2526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
return v___x_2526_;
}
}
}
else
{
lean_object* v_a_2529_; lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2542_; 
v_a_2529_ = lean_ctor_get(v_x_2515_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v_x_2515_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2531_ = v_x_2515_;
v_isShared_2532_ = v_isSharedCheck_2542_;
goto v_resetjp_2530_;
}
else
{
lean_inc(v_a_2529_);
lean_dec(v_x_2515_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2542_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2533_; 
v___x_2533_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1_spec__2(v_context_2514_, v_a_2529_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v_a_2534_; lean_object* v___x_2536_; 
v_a_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2534_);
lean_dec_ref_known(v___x_2533_, 1);
if (v_isShared_2532_ == 0)
{
lean_ctor_set(v___x_2531_, 0, v_a_2534_);
v___x_2536_ = v___x_2531_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2534_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
v_val_2518_ = v___x_2536_;
goto v___jp_2517_;
}
}
else
{
lean_object* v_a_2538_; lean_object* v___x_2540_; 
v_a_2538_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2533_, 1);
if (v_isShared_2532_ == 0)
{
lean_ctor_set_tag(v___x_2531_, 0);
lean_ctor_set(v___x_2531_, 0, v_a_2538_);
v___x_2540_ = v___x_2531_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2538_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
v_val_2518_ = v___x_2540_;
goto v___jp_2517_;
}
}
}
}
v___jp_2517_:
{
lean_object* v___x_2519_; 
v___x_2519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2519_, 0, v_val_2518_);
return v___x_2519_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__0___boxed(lean_object* v_context_2543_, lean_object* v_x_2544_, lean_object* v___y_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__0(v_context_2543_, v_x_2544_);
lean_dec_ref(v_context_2543_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__3(lean_object* v___f_2547_, lean_object* v_x_2548_){
_start:
{
if (lean_obj_tag(v_x_2548_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2558_; 
lean_dec_ref(v___f_2547_);
v_a_2550_ = lean_ctor_get(v_x_2548_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v_x_2548_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2552_ = v_x_2548_;
v_isShared_2553_ = v_isSharedCheck_2558_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v_x_2548_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2558_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2556_; 
v___x_2556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2555_);
return v___x_2556_;
}
}
}
else
{
lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2570_; 
v_isSharedCheck_2570_ = !lean_is_exclusive(v_x_2548_);
if (v_isSharedCheck_2570_ == 0)
{
lean_object* v_unused_2571_; 
v_unused_2571_ = lean_ctor_get(v_x_2548_, 0);
lean_dec(v_unused_2571_);
v___x_2560_ = v_x_2548_;
v_isShared_2561_ = v_isSharedCheck_2570_;
goto v_resetjp_2559_;
}
else
{
lean_dec(v_x_2548_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2570_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2562_; uint8_t v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2566_; 
v___x_2562_ = lean_unsigned_to_nat(0u);
v___x_2563_ = 0;
v___x_2564_ = lean_io_promise_new();
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 0, v___x_2564_);
v___x_2566_ = v___x_2560_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v___x_2564_);
v___x_2566_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
v___x_2568_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2562_, v___x_2563_, v___x_2567_, v___f_2547_);
return v___x_2568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__3___boxed(lean_object* v___f_2572_, lean_object* v_x_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__3(v___f_2572_, v_x_2573_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1(lean_object* v_context_2576_, uint32_t v_op_2577_, uint64_t v_flags_2578_, lean_object* v_payload_2579_, lean_object* v_failurePrefix_2580_){
_start:
{
lean_object* v___f_2582_; lean_object* v___f_2583_; lean_object* v___f_2584_; lean_object* v___f_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___f_2588_; lean_object* v___f_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; lean_object* v_val_2593_; lean_object* v___x_2596_; 
v___f_2582_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2582_, 0, v_context_2576_);
v___f_2583_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2583_, 0, v___f_2582_);
v___f_2584_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2584_, 0, v___f_2583_);
lean_inc_ref(v_failurePrefix_2580_);
v___f_2585_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2585_, 0, v_failurePrefix_2580_);
v___x_2586_ = lean_box_uint32(v_op_2577_);
v___x_2587_ = lean_box_uint64(v_flags_2578_);
lean_inc_ref(v___f_2584_);
v___f_2588_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_2588_, 0, v_failurePrefix_2580_);
lean_closure_set(v___f_2588_, 1, v___x_2586_);
lean_closure_set(v___f_2588_, 2, v___x_2587_);
lean_closure_set(v___f_2588_, 3, v_payload_2579_);
lean_closure_set(v___f_2588_, 4, v___f_2585_);
lean_closure_set(v___f_2588_, 5, v___f_2584_);
lean_closure_set(v___f_2588_, 6, v___f_2584_);
v___f_2589_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2589_, 0, v___f_2588_);
v___x_2590_ = lean_unsigned_to_nat(0u);
v___x_2591_ = 0;
v___x_2596_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v___x_2596_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v___x_2596_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2602_; 
if (v_isShared_2600_ == 0)
{
lean_ctor_set_tag(v___x_2599_, 1);
v___x_2602_ = v___x_2599_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2597_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
v_val_2593_ = v___x_2602_;
goto v___jp_2592_;
}
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
v_a_2605_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2607_ = v___x_2596_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2596_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
lean_ctor_set_tag(v___x_2607_, 0);
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
v_val_2593_ = v___x_2610_;
goto v___jp_2592_;
}
}
}
v___jp_2592_:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v_val_2593_);
v___x_2595_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2590_, v___x_2591_, v___x_2594_, v___f_2589_);
return v___x_2595_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1___boxed(lean_object* v_context_2613_, lean_object* v_op_2614_, lean_object* v_flags_2615_, lean_object* v_payload_2616_, lean_object* v_failurePrefix_2617_, lean_object* v_a_2618_){
_start:
{
uint32_t v_op_boxed_2619_; uint64_t v_flags_boxed_2620_; lean_object* v_res_2621_; 
v_op_boxed_2619_ = lean_unbox_uint32(v_op_2614_);
lean_dec(v_op_2614_);
v_flags_boxed_2620_ = lean_unbox_uint64(v_flags_2615_);
lean_dec_ref(v_flags_2615_);
v_res_2621_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1(v_context_2613_, v_op_boxed_2619_, v_flags_boxed_2620_, v_payload_2616_, v_failurePrefix_2617_);
return v_res_2621_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__0(uint8_t v_await_2622_, uint64_t v_extra_2623_){
_start:
{
uint64_t v___x_2624_; uint64_t v___y_2626_; 
v___x_2624_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1_spec__1___closed__0);
if (v_await_2622_ == 0)
{
uint64_t v___x_2629_; 
v___x_2629_ = 0ULL;
v___y_2626_ = v___x_2629_;
goto v___jp_2625_;
}
else
{
uint64_t v___x_2630_; 
v___x_2630_ = 2ULL;
v___y_2626_ = v___x_2630_;
goto v___jp_2625_;
}
v___jp_2625_:
{
uint64_t v___x_2627_; uint64_t v___x_2628_; 
v___x_2627_ = lean_uint64_lor(v___x_2624_, v___y_2626_);
v___x_2628_ = lean_uint64_lor(v___x_2627_, v_extra_2623_);
return v___x_2628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__0___boxed(lean_object* v_await_2631_, lean_object* v_extra_2632_){
_start:
{
uint8_t v_await_boxed_2633_; uint64_t v_extra_boxed_2634_; uint64_t v_res_2635_; lean_object* v_r_2636_; 
v_await_boxed_2633_ = lean_unbox(v_await_2631_);
v_extra_boxed_2634_ = lean_unbox_uint64(v_extra_2632_);
lean_dec_ref(v_extra_2632_);
v_res_2635_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__0(v_await_boxed_2633_, v_extra_boxed_2634_);
v_r_2636_ = lean_box_uint64(v_res_2635_);
return v_r_2636_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2637_; uint8_t v___x_2638_; uint64_t v___x_2639_; 
v___x_2637_ = 8ULL;
v___x_2638_ = 0;
v___x_2639_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__0(v___x_2638_, v___x_2637_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0(lean_object* v_o_2640_, lean_object* v_name_2641_, lean_object* v_args_2642_){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; uint32_t v___x_2649_; uint64_t v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2644_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSKVNamespace___lam__0___closed__0));
v___x_2645_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2645_, 0, v_o_2640_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
lean_inc_ref(v_name_2641_);
v___x_2646_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2646_, 0, v_name_2641_);
v___x_2647_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__1___closed__0));
v___x_2648_ = lean_string_append(v___x_2647_, v_name_2641_);
lean_dec_ref(v_name_2641_);
v___x_2649_ = 205;
v___x_2650_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0___closed__0);
v___x_2651_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2651_, 0, v_args_2642_);
v___x_2652_ = lean_unsigned_to_nat(3u);
v___x_2653_ = lean_mk_empty_array_with_capacity(v___x_2652_);
v___x_2654_ = lean_array_push(v___x_2653_, v___x_2645_);
v___x_2655_ = lean_array_push(v___x_2654_, v___x_2646_);
v___x_2656_ = lean_array_push(v___x_2655_, v___x_2651_);
v___x_2657_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
v___x_2658_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0_spec__1(v___x_2648_, v___x_2649_, v___x_2650_, v___x_2657_, v___x_2644_);
return v___x_2658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0___boxed(lean_object* v_o_2659_, lean_object* v_name_2660_, lean_object* v_args_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0(v_o_2659_, v_name_2660_, v_args_2661_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata(lean_object* v_self_2665_, lean_object* v_key_2666_, lean_object* v_options_2667_){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; 
v___x_2669_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata___closed__0));
v___x_2670_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2670_, 0, v_key_2666_);
v___x_2671_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_KVNamespace_get_spec__0(v_options_2667_);
v___x_2672_ = lean_unsigned_to_nat(2u);
v___x_2673_ = lean_mk_empty_array_with_capacity(v___x_2672_);
v___x_2674_ = lean_array_push(v___x_2673_, v___x_2670_);
v___x_2675_ = lean_array_push(v___x_2674_, v___x_2671_);
v___x_2676_ = l_Lasm_JS_Web_Support_args(v___x_2675_);
v___x_2677_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_KVNamespace_getWithMetadata_spec__0(v_self_2665_, v___x_2669_, v___x_2676_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata___boxed(lean_object* v_self_2678_, lean_object* v_key_2679_, lean_object* v_options_2680_, lean_object* v_a_2681_){
_start:
{
lean_object* v_res_2682_; 
v_res_2682_ = l_Lasm_JS_Cloudflare_KVNamespace_getWithMetadata(v_self_2678_, v_key_2679_, v_options_2680_);
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_delete(lean_object* v_self_2684_, lean_object* v_key_2685_){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2687_ = ((lean_object*)(l_Lasm_JS_Cloudflare_KVNamespace_delete___closed__0));
v___x_2688_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2688_, 0, v_key_2685_);
v___x_2689_ = lean_unsigned_to_nat(1u);
v___x_2690_ = lean_mk_empty_array_with_capacity(v___x_2689_);
v___x_2691_ = lean_array_push(v___x_2690_, v___x_2688_);
v___x_2692_ = l_Lasm_JS_Web_Support_args(v___x_2691_);
v___x_2693_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2684_, v___x_2687_, v___x_2692_);
return v___x_2693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_KVNamespace_delete___boxed(lean_object* v_self_2694_, lean_object* v_key_2695_, lean_object* v_a_2696_){
_start:
{
lean_object* v_res_2697_; 
v_res_2697_ = l_Lasm_JS_Cloudflare_KVNamespace_delete(v_self_2694_, v_key_2695_);
return v_res_2697_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Cloudflare_Kv(uint8_t builtin) {
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
l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey = _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListKey);
l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult = _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceListResult);
l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult = _init_l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSKVNamespaceGetWithMetadataResult);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
