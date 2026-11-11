// Lean compiler output
// Module: Lasm.JS.Cloudflare.Cache
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Support public import Lasm.JS.Web.Url public import Lasm.JS.Web.Fetch
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
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSCacheStorage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheStorage___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheStorage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheStorage = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheStorage___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Cloudflare.CacheStorage"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSCache = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheStorage___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Cloudflare.Cache"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCache___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCache___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheStorage___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCache___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCache___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCache___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSCache = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCache___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_request_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_request_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_usvString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_usvString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSRequestInfoOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSRequestInfoOrURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSRequestInfoOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSRequestInfoOrURL___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSRequestInfoOrURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSRequestInfoOrURL = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSRequestInfoOrURL___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeRequestRequestInfoOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeRequestRequestInfoOrURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeRequestRequestInfoOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeRequestRequestInfoOrURL___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeRequestRequestInfoOrURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeRequestRequestInfoOrURL = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeRequestRequestInfoOrURL___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringRequestInfoOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringRequestInfoOrURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringRequestInfoOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeStringRequestInfoOrURL___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringRequestInfoOrURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringRequestInfoOrURL = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringRequestInfoOrURL___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeURLRequestInfoOrURL___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeURLRequestInfoOrURL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeURLRequestInfoOrURL___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeURLRequestInfoOrURL___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeURLRequestInfoOrURL___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeURLRequestInfoOrURL = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeURLRequestInfoOrURL___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ignoreMethod"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_CacheStorage_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lasm_JS_Cloudflare_CacheStorage_default___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_CacheStorage_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_default(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_default___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_CacheStorage_open___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_CacheStorage_open___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_CacheStorage_open___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_CacheStorage_open___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_CacheStorage_open___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Cache_delete_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Cache_delete_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Cache_delete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_JS_Cloudflare_Cache_delete___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Cache_delete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_delete(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_delete___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Option (Lasm.JS.Web.Response)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__3_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Cache_match___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l_Lasm_JS_Cloudflare_Cache_match___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Cache_match___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_match(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_match___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Cache_put___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "put"};
static const lean_object* l_Lasm_JS_Cloudflare_Cache_put___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Cache_put___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_put(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_put___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web: empty global path"};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_caches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "caches"};
static const lean_object* l_Lasm_JS_Cloudflare_caches___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_caches___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_caches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_caches___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_caches___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_caches___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_caches();
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_caches___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Cloudflare_instFromJSCacheStorage___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorIdx(lean_object* v_x_29_){
_start:
{
switch(lean_obj_tag(v_x_29_))
{
case 0:
{
lean_object* v___x_30_; 
v___x_30_ = lean_unsigned_to_nat(0u);
return v___x_30_;
}
case 1:
{
lean_object* v___x_31_; 
v___x_31_ = lean_unsigned_to_nat(1u);
return v___x_31_;
}
default: 
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(2u);
return v___x_32_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorIdx___boxed(lean_object* v_x_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorIdx(v_x_33_);
lean_dec_ref(v_x_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(lean_object* v_t_35_, lean_object* v_k_36_){
_start:
{
if (lean_obj_tag(v_t_35_) == 1)
{
lean_object* v_value_37_; lean_object* v___x_38_; 
v_value_37_ = lean_ctor_get(v_t_35_, 0);
lean_inc_ref(v_value_37_);
lean_dec_ref_known(v_t_35_, 1);
v___x_38_ = lean_apply_1(v_k_36_, v_value_37_);
return v___x_38_;
}
else
{
lean_object* v_value_39_; lean_object* v___x_40_; 
v_value_39_ = lean_ctor_get(v_t_35_, 0);
lean_inc(v_value_39_);
lean_dec_ref(v_t_35_);
v___x_40_ = lean_apply_1(v_k_36_, v_value_39_);
return v___x_40_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim(lean_object* v_motive_41_, lean_object* v_ctorIdx_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_k_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(v_t_43_, v_k_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___boxed(lean_object* v_motive_47_, lean_object* v_ctorIdx_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_k_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim(v_motive_47_, v_ctorIdx_48_, v_t_49_, v_h_50_, v_k_51_);
lean_dec(v_ctorIdx_48_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_request_elim___redArg(lean_object* v_t_53_, lean_object* v_request_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(v_t_53_, v_request_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_request_elim(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_request_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(v_t_57_, v_request_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_usvString_elim___redArg(lean_object* v_t_61_, lean_object* v_usvString_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(v_t_61_, v_usvString_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_usvString_elim(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_usvString_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(v_t_65_, v_usvString_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_url_elim___redArg(lean_object* v_t_69_, lean_object* v_url_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(v_t_69_, v_url_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_RequestInfoOrURL_url_elim(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_url_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lasm_JS_Cloudflare_RequestInfoOrURL_ctorElim___redArg(v_t_73_, v_url_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSRequestInfoOrURL___lam__0(lean_object* v_x_77_){
_start:
{
if (lean_obj_tag(v_x_77_) == 1)
{
lean_object* v_value_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
v_value_78_ = lean_ctor_get(v_x_77_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v_x_77_);
if (v_isSharedCheck_85_ == 0)
{
v___x_80_ = v_x_77_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_value_78_);
lean_dec(v_x_77_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
lean_ctor_set_tag(v___x_80_, 4);
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_value_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
else
{
lean_object* v_value_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_value_86_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_value_86_);
lean_dec_ref(v_x_77_);
v___x_87_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_88_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_88_, 0, v_value_86_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeRequestRequestInfoOrURL___lam__0(lean_object* v_value_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v_value_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringRequestInfoOrURL___lam__0(lean_object* v_value_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_96_, 0, v_value_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeURLRequestInfoOrURL___lam__0(lean_object* v_value_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_100_, 0, v_value_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___lam__0(lean_object* v___f_104_, lean_object* v_d_105_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_106_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___lam__0___closed__0));
v___x_107_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_104_, v_d_105_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_unsigned_to_nat(1u);
v___x_110_ = lean_mk_empty_array_with_capacity(v___x_109_);
v___x_111_ = lean_array_push(v___x_110_, v___x_108_);
v___x_112_ = l_Lasm_JS_Web_Support_fields(v___x_111_);
lean_dec_ref(v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_default(lean_object* v_self_118_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheStorage_default___closed__0));
v___x_121_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_118_, v___x_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_121_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_121_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_default___boxed(lean_object* v_self_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lasm_JS_Cloudflare_CacheStorage_default(v_self_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open___lam__0(lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_151_; 
v_a_143_ = lean_ctor_get(v_x_141_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v_x_141_);
if (v_isSharedCheck_151_ == 0)
{
v___x_145_ = v_x_141_;
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v_x_141_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
}
}
else
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_160_; 
v_a_152_ = lean_ctor_get(v_x_141_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v_x_141_);
if (v_isSharedCheck_160_ == 0)
{
v___x_154_ = v_x_141_;
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v_x_141_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_152_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_158_; 
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open___lam__0___boxed(lean_object* v_x_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lasm_JS_Cloudflare_CacheStorage_open___lam__0(v_x_161_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open(lean_object* v_self_166_, lean_object* v_cacheName_167_){
_start:
{
lean_object* v___f_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___f_169_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheStorage_open___closed__0));
v___x_170_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheStorage_open___closed__1));
v___x_171_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_171_, 0, v_cacheName_167_);
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_mk_empty_array_with_capacity(v___x_172_);
v___x_174_ = lean_array_push(v___x_173_, v___x_171_);
v___x_175_ = l_Lasm_JS_Web_Support_args(v___x_174_);
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = 0;
v___x_178_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_166_, v___x_170_, v___x_175_);
v___x_179_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_176_, v___x_177_, v___x_178_, v___f_169_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheStorage_open___boxed(lean_object* v_self_180_, lean_object* v_cacheName_181_, lean_object* v_a_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lasm_JS_Cloudflare_CacheStorage_open(v_self_180_, v_cacheName_181_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Cache_delete_spec__0(lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
lean_object* v___x_185_; 
v___x_185_ = lean_box(0);
return v___x_185_;
}
else
{
lean_object* v_val_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_val_186_ = lean_ctor_get(v_x_184_, 0);
v___x_187_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheQueryOptions___lam__0___closed__0));
v___x_188_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_186_);
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
v___x_190_ = lean_unsigned_to_nat(1u);
v___x_191_ = lean_mk_empty_array_with_capacity(v___x_190_);
v___x_192_ = lean_array_push(v___x_191_, v___x_189_);
v___x_193_ = l_Lasm_JS_Web_Support_fields(v___x_192_);
lean_dec_ref(v___x_192_);
return v___x_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Cache_delete_spec__0___boxed(lean_object* v_x_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Cache_delete_spec__0(v_x_194_);
lean_dec(v_x_194_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3(lean_object* v_a_196_, lean_object* v_x_197_){
_start:
{
if (lean_obj_tag(v_x_197_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_207_; 
v_a_199_ = lean_ctor_get(v_x_197_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v_x_197_);
if (v_isSharedCheck_207_ == 0)
{
v___x_201_ = v_x_197_;
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v_x_197_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_206_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_205_; 
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
}
}
else
{
lean_object* v___x_208_; 
lean_dec_ref_known(v_x_197_, 1);
v___x_208_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_196_);
return v___x_208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3___boxed(lean_object* v_a_209_, lean_object* v_x_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3(v_a_209_, v_x_210_);
lean_dec(v_a_209_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__5(lean_object* v___x_213_, uint8_t v___x_214_, lean_object* v___f_215_, lean_object* v_a_216_, uint32_t v_op_217_, uint64_t v_flags_218_, lean_object* v_payload_219_, lean_object* v_x_220_){
_start:
{
lean_object* v_val_223_; 
if (lean_obj_tag(v_x_220_) == 0)
{
lean_object* v___x_226_; 
lean_dec_ref(v___f_215_);
lean_dec(v___x_213_);
v___x_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_226_, 0, v_x_220_);
return v___x_226_;
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_241_; 
v_a_227_ = lean_ctor_get(v_x_220_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v_x_220_);
if (v_isSharedCheck_241_ == 0)
{
v___x_229_ = v_x_220_;
v_isShared_230_ = v_isSharedCheck_241_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v_x_220_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_241_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
uint32_t v___x_231_; lean_object* v___x_232_; 
v___x_231_ = 0;
v___x_232_ = lasm_js_call_into(v_a_216_, v_op_217_, v___x_231_, v_flags_218_, v_a_227_, v_payload_219_);
lean_dec(v_a_227_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_235_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_232_, 1);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 0, v_a_233_);
v___x_235_ = v___x_229_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
v_val_223_ = v___x_235_;
goto v___jp_222_;
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; 
v_a_237_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_237_);
lean_dec_ref_known(v___x_232_, 1);
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 0);
lean_ctor_set(v___x_229_, 0, v_a_237_);
v___x_239_ = v___x_229_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
v_val_223_ = v___x_239_;
goto v___jp_222_;
}
}
}
}
v___jp_222_:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_224_, 0, v_val_223_);
v___x_225_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_213_, v___x_214_, v___x_224_, v___f_215_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__5___boxed(lean_object* v___x_242_, lean_object* v___x_243_, lean_object* v___f_244_, lean_object* v_a_245_, lean_object* v_op_246_, lean_object* v_flags_247_, lean_object* v_payload_248_, lean_object* v_x_249_, lean_object* v___y_250_){
_start:
{
uint8_t v___x_830__boxed_251_; uint32_t v_op_boxed_252_; uint64_t v_flags_boxed_253_; lean_object* v_res_254_; 
v___x_830__boxed_251_ = lean_unbox(v___x_243_);
v_op_boxed_252_ = lean_unbox_uint32(v_op_246_);
lean_dec(v_op_246_);
v_flags_boxed_253_ = lean_unbox_uint64(v_flags_247_);
lean_dec_ref(v_flags_247_);
v_res_254_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__5(v___x_242_, v___x_830__boxed_251_, v___f_244_, v_a_245_, v_op_boxed_252_, v_flags_boxed_253_, v_payload_248_, v_x_249_);
lean_dec(v_payload_248_);
lean_dec(v_a_245_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__7(lean_object* v___f_255_, lean_object* v_a_256_, uint32_t v_op_257_, uint64_t v_flags_258_, lean_object* v_payload_259_, lean_object* v_x_260_){
_start:
{
if (lean_obj_tag(v_x_260_) == 0)
{
lean_object* v___x_262_; 
lean_dec_ref(v___f_255_);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v_x_260_);
return v___x_262_;
}
else
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_283_; 
v_a_263_ = lean_ctor_get(v_x_260_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v_x_260_);
if (v_isSharedCheck_283_ == 0)
{
v___x_265_ = v_x_260_;
v_isShared_266_ = v_isSharedCheck_283_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v_x_260_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_283_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
uint32_t v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; lean_object* v_val_271_; lean_object* v___x_274_; 
v___x_267_ = 0;
v___x_268_ = lean_unsigned_to_nat(0u);
v___x_269_ = 0;
v___x_274_ = lasm_js_call_into(v_a_256_, v_op_257_, v___x_267_, v_flags_258_, v_a_263_, v_payload_259_);
lean_dec(v_a_263_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v___x_277_; 
v_a_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_275_);
lean_dec_ref_known(v___x_274_, 1);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v_a_275_);
v___x_277_ = v___x_265_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_275_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
v_val_271_ = v___x_277_;
goto v___jp_270_;
}
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; 
v_a_279_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_279_);
lean_dec_ref_known(v___x_274_, 1);
if (v_isShared_266_ == 0)
{
lean_ctor_set_tag(v___x_265_, 0);
lean_ctor_set(v___x_265_, 0, v_a_279_);
v___x_281_ = v___x_265_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
v_val_271_ = v___x_281_;
goto v___jp_270_;
}
}
v___jp_270_:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_272_, 0, v_val_271_);
v___x_273_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_268_, v___x_269_, v___x_272_, v___f_255_);
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__7___boxed(lean_object* v___f_284_, lean_object* v_a_285_, lean_object* v_op_286_, lean_object* v_flags_287_, lean_object* v_payload_288_, lean_object* v_x_289_, lean_object* v___y_290_){
_start:
{
uint32_t v_op_boxed_291_; uint64_t v_flags_boxed_292_; lean_object* v_res_293_; 
v_op_boxed_291_ = lean_unbox_uint32(v_op_286_);
lean_dec(v_op_286_);
v_flags_boxed_292_ = lean_unbox_uint64(v_flags_287_);
lean_dec_ref(v_flags_287_);
v_res_293_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__7(v___f_284_, v_a_285_, v_op_boxed_291_, v_flags_boxed_292_, v_payload_288_, v_x_289_);
lean_dec(v_payload_288_);
lean_dec(v_a_285_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__6(lean_object* v_failurePrefix_294_, uint32_t v_op_295_, uint64_t v_flags_296_, lean_object* v_payload_297_, lean_object* v___f_298_, lean_object* v___f_299_, lean_object* v___f_300_, lean_object* v_x_301_){
_start:
{
if (lean_obj_tag(v_x_301_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_311_; 
lean_dec_ref(v___f_300_);
lean_dec_ref(v___f_299_);
lean_dec_ref(v___f_298_);
lean_dec(v_payload_297_);
v_a_303_ = lean_ctor_get(v_x_301_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_311_ == 0)
{
v___x_305_ = v_x_301_;
v_isShared_306_ = v_isSharedCheck_311_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v_x_301_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_311_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_310_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_309_; 
v___x_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
return v___x_309_;
}
}
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_358_; 
v_a_312_ = lean_ctor_get(v_x_301_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v_x_301_);
if (v_isSharedCheck_358_ == 0)
{
v___x_314_ = v_x_301_;
v_isShared_315_ = v_isSharedCheck_358_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v_x_301_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_358_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_316_ = lean_string_utf8_byte_size(v_failurePrefix_294_);
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = lean_nat_dec_eq(v___x_316_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___f_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___f_323_; lean_object* v_val_325_; lean_object* v___x_330_; 
lean_dec_ref(v___f_300_);
lean_inc(v_a_312_);
v___f_319_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_319_, 0, v_a_312_);
v___x_320_ = lean_box(v___x_318_);
v___x_321_ = lean_box_uint32(v_op_295_);
v___x_322_ = lean_box_uint64(v_flags_296_);
lean_inc(v_payload_297_);
v___f_323_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_323_, 0, v___x_317_);
lean_closure_set(v___f_323_, 1, v___x_320_);
lean_closure_set(v___f_323_, 2, v___f_319_);
lean_closure_set(v___f_323_, 3, v_a_312_);
lean_closure_set(v___f_323_, 4, v___x_321_);
lean_closure_set(v___f_323_, 5, v___x_322_);
lean_closure_set(v___f_323_, 6, v_payload_297_);
v___x_330_ = l_Lasm_JS_Wire_encodeIO(v_payload_297_);
lean_dec(v_payload_297_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_331_);
lean_dec_ref_known(v___x_330_, 1);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v_a_331_);
v___x_333_ = v___x_314_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_331_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
v_val_325_ = v___x_333_;
goto v___jp_324_;
}
}
else
{
lean_object* v_a_335_; lean_object* v___x_337_; 
v_a_335_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_330_, 1);
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 0);
lean_ctor_set(v___x_314_, 0, v_a_335_);
v___x_337_ = v___x_314_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
v_val_325_ = v___x_337_;
goto v___jp_324_;
}
}
v___jp_324_:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_326_, 0, v_val_325_);
v___x_327_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_317_, v___x_318_, v___x_326_, v___f_323_);
v___x_328_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_317_, v___x_318_, v___x_327_, v___f_298_);
v___x_329_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_317_, v___x_318_, v___x_328_, v___f_299_);
return v___x_329_;
}
}
else
{
lean_object* v___f_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___f_342_; uint8_t v___x_343_; lean_object* v_val_345_; lean_object* v___x_349_; 
lean_dec_ref(v___f_299_);
lean_dec_ref(v___f_298_);
lean_inc(v_a_312_);
v___f_339_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_339_, 0, v_a_312_);
v___x_340_ = lean_box_uint32(v_op_295_);
v___x_341_ = lean_box_uint64(v_flags_296_);
lean_inc(v_payload_297_);
v___f_342_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_342_, 0, v___f_339_);
lean_closure_set(v___f_342_, 1, v_a_312_);
lean_closure_set(v___f_342_, 2, v___x_340_);
lean_closure_set(v___f_342_, 3, v___x_341_);
lean_closure_set(v___f_342_, 4, v_payload_297_);
v___x_343_ = 0;
v___x_349_ = l_Lasm_JS_Wire_encodeIO(v_payload_297_);
lean_dec(v_payload_297_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_a_350_);
lean_dec_ref_known(v___x_349_, 1);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v_a_350_);
v___x_352_ = v___x_314_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
v_val_345_ = v___x_352_;
goto v___jp_344_;
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; 
v_a_354_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v___x_349_, 1);
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 0);
lean_ctor_set(v___x_314_, 0, v_a_354_);
v___x_356_ = v___x_314_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_a_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
v_val_345_ = v___x_356_;
goto v___jp_344_;
}
}
v___jp_344_:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_346_, 0, v_val_345_);
v___x_347_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_317_, v___x_343_, v___x_346_, v___f_342_);
v___x_348_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_317_, v___x_343_, v___x_347_, v___f_300_);
return v___x_348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__6___boxed(lean_object* v_failurePrefix_359_, lean_object* v_op_360_, lean_object* v_flags_361_, lean_object* v_payload_362_, lean_object* v___f_363_, lean_object* v___f_364_, lean_object* v___f_365_, lean_object* v_x_366_, lean_object* v___y_367_){
_start:
{
uint32_t v_op_boxed_368_; uint64_t v_flags_boxed_369_; lean_object* v_res_370_; 
v_op_boxed_368_ = lean_unbox_uint32(v_op_360_);
lean_dec(v_op_360_);
v_flags_boxed_369_ = lean_unbox_uint64(v_flags_361_);
lean_dec_ref(v_flags_361_);
v_res_370_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__6(v_failurePrefix_359_, v_op_boxed_368_, v_flags_boxed_369_, v_payload_362_, v___f_363_, v___f_364_, v___f_365_, v_x_366_);
lean_dec_ref(v_failurePrefix_359_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__2(lean_object* v___f_371_, lean_object* v_x_372_){
_start:
{
if (lean_obj_tag(v_x_372_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_382_; 
lean_dec_ref(v___f_371_);
v_a_374_ = lean_ctor_get(v_x_372_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_x_372_);
if (v_isSharedCheck_382_ == 0)
{
v___x_376_ = v_x_372_;
v_isShared_377_ = v_isSharedCheck_382_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v_x_372_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_382_;
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
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_374_);
v___x_379_ = v_reuseFailAlloc_381_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
lean_object* v___x_380_; 
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
}
else
{
lean_object* v_a_383_; lean_object* v___x_384_; 
v_a_383_ = lean_ctor_get(v_x_372_, 0);
lean_inc(v_a_383_);
lean_dec_ref_known(v_x_372_, 1);
v___x_384_ = lean_apply_2(v___f_371_, v_a_383_, lean_box(0));
return v___x_384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__2___boxed(lean_object* v___f_385_, lean_object* v_x_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__2(v___f_385_, v_x_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__1(lean_object* v___f_389_, lean_object* v_bytes_390_){
_start:
{
lean_object* v___x_392_; uint8_t v___x_393_; lean_object* v_val_395_; lean_object* v___x_398_; 
v___x_392_ = lean_unsigned_to_nat(0u);
v___x_393_ = 0;
v___x_398_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_390_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_398_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_398_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
lean_ctor_set_tag(v___x_401_, 1);
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
v_val_395_ = v___x_404_;
goto v___jp_394_;
}
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
v_a_407_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_398_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_398_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
lean_ctor_set_tag(v___x_409_, 0);
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
v_val_395_ = v___x_412_;
goto v___jp_394_;
}
}
}
v___jp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v_val_395_);
v___x_397_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_392_, v___x_393_, v___x_396_, v___f_389_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__1___boxed(lean_object* v___f_415_, lean_object* v_bytes_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__1(v___f_415_, v_bytes_416_);
lean_dec_ref(v_bytes_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__4(lean_object* v_failurePrefix_419_, lean_object* v_x_420_){
_start:
{
if (lean_obj_tag(v_x_420_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_433_; 
v_a_422_ = lean_ctor_get(v_x_420_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v_x_420_);
if (v_isSharedCheck_433_ == 0)
{
v___x_424_ = v_x_420_;
v_isShared_425_ = v_isSharedCheck_433_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v_x_420_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_433_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_426_ = lean_io_error_to_string(v_a_422_);
v___x_427_ = lean_string_append(v_failurePrefix_419_, v___x_426_);
lean_dec_ref(v___x_426_);
v___x_428_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_428_);
v___x_430_ = v___x_424_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_428_);
v___x_430_ = v_reuseFailAlloc_432_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; 
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
}
else
{
lean_object* v___x_434_; 
lean_dec_ref(v_failurePrefix_419_);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v_x_420_);
return v___x_434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__4___boxed(lean_object* v_failurePrefix_435_, lean_object* v_x_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__4(v_failurePrefix_435_, v_x_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__0(lean_object* v_context_439_, lean_object* v_x_440_){
_start:
{
lean_object* v_val_443_; 
if (lean_obj_tag(v_x_440_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_453_; 
v_a_445_ = lean_ctor_get(v_x_440_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v_x_440_);
if (v_isSharedCheck_453_ == 0)
{
v___x_447_ = v_x_440_;
v_isShared_448_ = v_isSharedCheck_453_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v_x_440_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_453_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_452_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
lean_object* v___x_451_; 
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_467_; 
v_a_454_ = lean_ctor_get(v_x_440_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_440_);
if (v_isSharedCheck_467_ == 0)
{
v___x_456_ = v_x_440_;
v_isShared_457_ = v_isSharedCheck_467_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v_x_440_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_467_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_439_, v_a_454_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_461_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v_a_459_);
v___x_461_ = v___x_456_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
v_val_443_ = v___x_461_;
goto v___jp_442_;
}
}
else
{
lean_object* v_a_463_; lean_object* v___x_465_; 
v_a_463_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_463_);
lean_dec_ref_known(v___x_458_, 1);
if (v_isShared_457_ == 0)
{
lean_ctor_set_tag(v___x_456_, 0);
lean_ctor_set(v___x_456_, 0, v_a_463_);
v___x_465_ = v___x_456_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_463_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
v_val_443_ = v___x_465_;
goto v___jp_442_;
}
}
}
}
v___jp_442_:
{
lean_object* v___x_444_; 
v___x_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_444_, 0, v_val_443_);
return v___x_444_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__0___boxed(lean_object* v_context_468_, lean_object* v_x_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__0(v_context_468_, v_x_469_);
lean_dec_ref(v_context_468_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__8(lean_object* v___f_472_, lean_object* v_x_473_){
_start:
{
if (lean_obj_tag(v_x_473_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_483_; 
lean_dec_ref(v___f_472_);
v_a_475_ = lean_ctor_get(v_x_473_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v_x_473_);
if (v_isSharedCheck_483_ == 0)
{
v___x_477_ = v_x_473_;
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v_x_473_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_482_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_481_; 
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
}
else
{
lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_495_; 
v_isSharedCheck_495_ = !lean_is_exclusive(v_x_473_);
if (v_isSharedCheck_495_ == 0)
{
lean_object* v_unused_496_; 
v_unused_496_ = lean_ctor_get(v_x_473_, 0);
lean_dec(v_unused_496_);
v___x_485_ = v_x_473_;
v_isShared_486_ = v_isSharedCheck_495_;
goto v_resetjp_484_;
}
else
{
lean_dec(v_x_473_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_495_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_491_; 
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = 0;
v___x_489_ = lean_io_promise_new();
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v___x_489_);
v___x_491_ = v___x_485_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_489_);
v___x_491_ = v_reuseFailAlloc_494_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
v___x_493_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_487_, v___x_488_, v___x_492_, v___f_472_);
return v___x_493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__8___boxed(lean_object* v___f_497_, lean_object* v_x_498_, lean_object* v___y_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__8(v___f_497_, v_x_498_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1(lean_object* v_context_501_, uint32_t v_op_502_, uint64_t v_flags_503_, lean_object* v_payload_504_, lean_object* v_failurePrefix_505_){
_start:
{
lean_object* v___f_507_; lean_object* v___f_508_; lean_object* v___f_509_; lean_object* v___f_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___f_513_; lean_object* v___f_514_; lean_object* v___x_515_; uint8_t v___x_516_; lean_object* v_val_518_; lean_object* v___x_521_; 
v___f_507_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_507_, 0, v_context_501_);
v___f_508_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_508_, 0, v___f_507_);
v___f_509_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_509_, 0, v___f_508_);
lean_inc_ref(v_failurePrefix_505_);
v___f_510_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_510_, 0, v_failurePrefix_505_);
v___x_511_ = lean_box_uint32(v_op_502_);
v___x_512_ = lean_box_uint64(v_flags_503_);
lean_inc_ref(v___f_509_);
v___f_513_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_513_, 0, v_failurePrefix_505_);
lean_closure_set(v___f_513_, 1, v___x_511_);
lean_closure_set(v___f_513_, 2, v___x_512_);
lean_closure_set(v___f_513_, 3, v_payload_504_);
lean_closure_set(v___f_513_, 4, v___f_510_);
lean_closure_set(v___f_513_, 5, v___f_509_);
lean_closure_set(v___f_513_, 6, v___f_509_);
v___f_514_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_514_, 0, v___f_513_);
v___x_515_ = lean_unsigned_to_nat(0u);
v___x_516_ = 0;
v___x_521_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_529_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
lean_ctor_set_tag(v___x_524_, 1);
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
v_val_518_ = v___x_527_;
goto v___jp_517_;
}
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
v_a_530_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_521_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_521_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
lean_ctor_set_tag(v___x_532_, 0);
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
v_val_518_ = v___x_535_;
goto v___jp_517_;
}
}
}
v___jp_517_:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v_val_518_);
v___x_520_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_515_, v___x_516_, v___x_519_, v___f_514_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___boxed(lean_object* v_context_538_, lean_object* v_op_539_, lean_object* v_flags_540_, lean_object* v_payload_541_, lean_object* v_failurePrefix_542_, lean_object* v_a_543_){
_start:
{
uint32_t v_op_boxed_544_; uint64_t v_flags_boxed_545_; lean_object* v_res_546_; 
v_op_boxed_544_ = lean_unbox_uint32(v_op_539_);
lean_dec(v_op_539_);
v_flags_boxed_545_ = lean_unbox_uint64(v_flags_540_);
lean_dec_ref(v_flags_540_);
v_res_546_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1(v_context_538_, v_op_boxed_544_, v_flags_boxed_545_, v_payload_541_, v_failurePrefix_542_);
return v_res_546_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__1(void){
_start:
{
uint64_t v___x_548_; uint8_t v___x_549_; uint64_t v___x_550_; 
v___x_548_ = 8ULL;
v___x_549_ = 0;
v___x_550_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v___x_549_, v___x_548_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(lean_object* v_o_551_, lean_object* v_name_552_, lean_object* v_args_553_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; uint32_t v___x_560_; uint64_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_555_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_556_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_556_, 0, v_o_551_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
lean_inc_ref(v_name_552_);
v___x_557_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_557_, 0, v_name_552_);
v___x_558_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__0));
v___x_559_ = lean_string_append(v___x_558_, v_name_552_);
lean_dec_ref(v_name_552_);
v___x_560_ = 205;
v___x_561_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__1);
v___x_562_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_562_, 0, v_args_553_);
v___x_563_ = lean_unsigned_to_nat(3u);
v___x_564_ = lean_mk_empty_array_with_capacity(v___x_563_);
v___x_565_ = lean_array_push(v___x_564_, v___x_556_);
v___x_566_ = lean_array_push(v___x_565_, v___x_557_);
v___x_567_ = lean_array_push(v___x_566_, v___x_562_);
v___x_568_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
v___x_569_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1(v___x_559_, v___x_560_, v___x_561_, v___x_568_, v___x_555_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___boxed(lean_object* v_o_570_, lean_object* v_name_571_, lean_object* v_args_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(v_o_570_, v_name_571_, v_args_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_delete(lean_object* v_self_576_, lean_object* v_request_577_, lean_object* v_options_578_){
_start:
{
lean_object* v___x_580_; lean_object* v___y_582_; 
v___x_580_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Cache_delete___closed__0));
if (lean_obj_tag(v_request_577_) == 1)
{
lean_object* v_value_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
v_value_590_ = lean_ctor_get(v_request_577_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v_request_577_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v_request_577_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_value_590_);
lean_dec(v_request_577_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set_tag(v___x_592_, 4);
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_value_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
v___y_582_ = v___x_595_;
goto v___jp_581_;
}
}
}
else
{
lean_object* v_value_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_value_598_ = lean_ctor_get(v_request_577_, 0);
lean_inc(v_value_598_);
lean_dec_ref(v_request_577_);
v___x_599_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_600_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_600_, 0, v_value_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___y_582_ = v___x_600_;
goto v___jp_581_;
}
v___jp_581_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_583_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Cache_delete_spec__0(v_options_578_);
v___x_584_ = lean_unsigned_to_nat(2u);
v___x_585_ = lean_mk_empty_array_with_capacity(v___x_584_);
v___x_586_ = lean_array_push(v___x_585_, v___y_582_);
v___x_587_ = lean_array_push(v___x_586_, v___x_583_);
v___x_588_ = l_Lasm_JS_Web_Support_args(v___x_587_);
v___x_589_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(v_self_576_, v___x_580_, v___x_588_);
return v___x_589_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_delete___boxed(lean_object* v_self_601_, lean_object* v_request_602_, lean_object* v_options_603_, lean_object* v_a_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_Lasm_JS_Cloudflare_Cache_delete(v_self_601_, v_request_602_, v_options_603_);
lean_dec(v_options_603_);
return v_res_605_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_611_ = lean_string_utf8_byte_size(v___x_610_);
return v___x_611_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_612_ = lean_unsigned_to_nat(0u);
v___x_613_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__4);
v___x_614_ = lean_nat_dec_eq(v___x_613_, v___x_612_);
return v___x_614_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_619_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__9));
v___x_620_ = lean_unsigned_to_nat(46u);
v___x_621_ = lean_unsigned_to_nat(193u);
v___x_622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__8));
v___x_623_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__7));
v___x_624_ = l_mkPanicMessageWithDecl(v___x_623_, v___x_622_, v___x_621_, v___x_620_, v___x_619_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2(lean_object* v_context_626_, lean_object* v_d_627_){
_start:
{
lean_object* v___y_633_; lean_object* v___y_634_; 
switch(lean_obj_tag(v_d_627_))
{
case 1:
{
goto v___jp_629_;
}
case 0:
{
goto v___jp_629_;
}
default: 
{
if (lean_obj_tag(v_d_627_) == 9)
{
lean_object* v_value_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v_value_638_ = lean_ctor_get(v_d_627_, 0);
lean_inc(v_value_638_);
lean_dec_ref_known(v_d_627_, 2);
v___x_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_639_, 0, v_value_638_);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
return v___x_640_;
}
else
{
lean_object* v___x_641_; lean_object* v_received_643_; 
v___x_641_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
if (lean_obj_tag(v_d_627_) == 9)
{
lean_object* v_value_657_; lean_object* v_description_658_; uint8_t v___x_659_; 
v_value_657_ = lean_ctor_get(v_d_627_, 0);
v_description_658_ = lean_ctor_get(v_d_627_, 1);
v___x_659_ = lean_string_dec_eq(v_description_658_, v___x_641_);
if (v___x_659_ == 0)
{
goto v___jp_655_;
}
else
{
uint32_t v___x_660_; uint64_t v___x_661_; lean_object* v___x_662_; uint32_t v___x_663_; lean_object* v___x_664_; 
lean_inc_n(v_value_657_, 2);
lean_dec_ref_known(v_d_627_, 2);
v___x_660_ = 206;
v___x_661_ = 0ULL;
v___x_662_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_662_, 0, v_value_657_);
lean_ctor_set(v___x_662_, 1, v___x_641_);
v___x_663_ = lasm_js_value_handle(v_value_657_);
lean_dec(v_value_657_);
v___x_664_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_660_, v___x_661_, v___x_662_, v___x_663_);
lean_dec_ref_known(v___x_662_, 2);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; uint8_t v___x_666_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_664_, 1);
v___x_666_ = lean_string_validate_utf8(v_a_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; 
lean_dec(v_a_665_);
v___x_667_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__10);
v___x_668_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_667_);
v_received_643_ = v___x_668_;
goto v___jp_642_;
}
else
{
lean_object* v___x_669_; 
v___x_669_ = lean_string_from_utf8_unchecked(v_a_665_);
v_received_643_ = v___x_669_;
goto v___jp_642_;
}
}
else
{
lean_object* v___x_670_; 
lean_dec_ref_known(v___x_664_, 1);
v___x_670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__11));
v_received_643_ = v___x_670_;
goto v___jp_642_;
}
}
}
else
{
goto v___jp_655_;
}
v___jp_642_:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_644_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__0));
v___x_645_ = lean_string_append(v___x_644_, v_context_626_);
v___x_646_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__1));
v___x_647_ = lean_string_append(v___x_645_, v___x_646_);
v___x_648_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__2));
v___x_649_ = lean_string_append(v___x_647_, v___x_648_);
v___x_650_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__3));
v___x_651_ = lean_string_append(v___x_649_, v___x_650_);
v___x_652_ = lean_string_append(v___x_651_, v_received_643_);
lean_dec_ref(v_received_643_);
v___x_653_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__5);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; 
v___x_654_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___closed__6));
v___y_633_ = v___x_652_;
v___y_634_ = v___x_654_;
goto v___jp_632_;
}
else
{
v___y_633_ = v___x_652_;
v___y_634_ = v___x_641_;
goto v___jp_632_;
}
}
v___jp_655_:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lasm_JS_Data_describe(v_d_627_);
v_received_643_ = v___x_656_;
goto v___jp_642_;
}
}
}
}
v___jp_629_:
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_box(0);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
v___jp_632_:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_635_ = lean_string_append(v___y_633_, v___y_634_);
v___x_636_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
v___x_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
return v___x_637_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2___boxed(lean_object* v_context_671_, lean_object* v_d_672_, lean_object* v_a_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2(v_context_671_, v_d_672_);
lean_dec_ref(v_context_671_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__0(lean_object* v_context_675_, lean_object* v_x_676_){
_start:
{
lean_object* v_val_679_; 
if (lean_obj_tag(v_x_676_) == 0)
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_689_; 
v_a_681_ = lean_ctor_get(v_x_676_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_689_ == 0)
{
v___x_683_ = v_x_676_;
v_isShared_684_ = v_isSharedCheck_689_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v_x_676_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_689_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_688_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_687_; 
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_703_; 
v_a_690_ = lean_ctor_get(v_x_676_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_703_ == 0)
{
v___x_692_ = v_x_676_;
v_isShared_693_ = v_isSharedCheck_703_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v_x_676_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_703_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; 
v___x_694_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1_spec__2(v_context_675_, v_a_690_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_697_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v_a_695_);
v___x_697_ = v___x_692_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_695_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
v_val_679_ = v___x_697_;
goto v___jp_678_;
}
}
else
{
lean_object* v_a_699_; lean_object* v___x_701_; 
v_a_699_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_699_);
lean_dec_ref_known(v___x_694_, 1);
if (v_isShared_693_ == 0)
{
lean_ctor_set_tag(v___x_692_, 0);
lean_ctor_set(v___x_692_, 0, v_a_699_);
v___x_701_ = v___x_692_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
v_val_679_ = v___x_701_;
goto v___jp_678_;
}
}
}
}
v___jp_678_:
{
lean_object* v___x_680_; 
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v_val_679_);
return v___x_680_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__0___boxed(lean_object* v_context_704_, lean_object* v_x_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__0(v_context_704_, v_x_705_);
lean_dec_ref(v_context_704_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_708_, uint32_t v_op_709_, uint64_t v_flags_710_, lean_object* v_payload_711_, lean_object* v___f_712_, lean_object* v___f_713_, lean_object* v___f_714_, lean_object* v_x_715_){
_start:
{
if (lean_obj_tag(v_x_715_) == 0)
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_725_; 
lean_dec_ref(v___f_714_);
lean_dec_ref(v___f_713_);
lean_dec_ref(v___f_712_);
lean_dec(v_payload_711_);
v_a_717_ = lean_ctor_get(v_x_715_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v_x_715_);
if (v_isSharedCheck_725_ == 0)
{
v___x_719_ = v_x_715_;
v_isShared_720_ = v_isSharedCheck_725_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v_x_715_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_725_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_724_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; 
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_772_; 
v_a_726_ = lean_ctor_get(v_x_715_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v_x_715_);
if (v_isSharedCheck_772_ == 0)
{
v___x_728_ = v_x_715_;
v_isShared_729_ = v_isSharedCheck_772_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v_x_715_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_772_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v___x_730_ = lean_string_utf8_byte_size(v_failurePrefix_708_);
v___x_731_ = lean_unsigned_to_nat(0u);
v___x_732_ = lean_nat_dec_eq(v___x_730_, v___x_731_);
if (v___x_732_ == 0)
{
lean_object* v___f_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___f_737_; lean_object* v_val_739_; lean_object* v___x_744_; 
lean_dec_ref(v___f_714_);
lean_inc(v_a_726_);
v___f_733_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_733_, 0, v_a_726_);
v___x_734_ = lean_box(v___x_732_);
v___x_735_ = lean_box_uint32(v_op_709_);
v___x_736_ = lean_box_uint64(v_flags_710_);
lean_inc(v_payload_711_);
v___f_737_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_737_, 0, v___x_731_);
lean_closure_set(v___f_737_, 1, v___x_734_);
lean_closure_set(v___f_737_, 2, v___f_733_);
lean_closure_set(v___f_737_, 3, v_a_726_);
lean_closure_set(v___f_737_, 4, v___x_735_);
lean_closure_set(v___f_737_, 5, v___x_736_);
lean_closure_set(v___f_737_, 6, v_payload_711_);
v___x_744_ = l_Lasm_JS_Wire_encodeIO(v_payload_711_);
lean_dec(v_payload_711_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_747_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v_a_745_);
v___x_747_ = v___x_728_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
v_val_739_ = v___x_747_;
goto v___jp_738_;
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; 
v_a_749_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_744_, 1);
if (v_isShared_729_ == 0)
{
lean_ctor_set_tag(v___x_728_, 0);
lean_ctor_set(v___x_728_, 0, v_a_749_);
v___x_751_ = v___x_728_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
v_val_739_ = v___x_751_;
goto v___jp_738_;
}
}
v___jp_738_:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v_val_739_);
v___x_741_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_731_, v___x_732_, v___x_740_, v___f_737_);
v___x_742_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_731_, v___x_732_, v___x_741_, v___f_712_);
v___x_743_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_731_, v___x_732_, v___x_742_, v___f_713_);
return v___x_743_;
}
}
else
{
lean_object* v___f_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___f_756_; uint8_t v___x_757_; lean_object* v_val_759_; lean_object* v___x_763_; 
lean_dec_ref(v___f_713_);
lean_dec_ref(v___f_712_);
lean_inc(v_a_726_);
v___f_753_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_753_, 0, v_a_726_);
v___x_754_ = lean_box_uint32(v_op_709_);
v___x_755_ = lean_box_uint64(v_flags_710_);
lean_inc(v_payload_711_);
v___f_756_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_756_, 0, v___f_753_);
lean_closure_set(v___f_756_, 1, v_a_726_);
lean_closure_set(v___f_756_, 2, v___x_754_);
lean_closure_set(v___f_756_, 3, v___x_755_);
lean_closure_set(v___f_756_, 4, v_payload_711_);
v___x_757_ = 0;
v___x_763_ = l_Lasm_JS_Wire_encodeIO(v_payload_711_);
lean_dec(v_payload_711_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_766_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v___x_763_, 1);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v_a_764_);
v___x_766_ = v___x_728_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_764_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
v_val_759_ = v___x_766_;
goto v___jp_758_;
}
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; 
v_a_768_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_763_, 1);
if (v_isShared_729_ == 0)
{
lean_ctor_set_tag(v___x_728_, 0);
lean_ctor_set(v___x_728_, 0, v_a_768_);
v___x_770_ = v___x_728_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_768_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
v_val_759_ = v___x_770_;
goto v___jp_758_;
}
}
v___jp_758_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v_val_759_);
v___x_761_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_731_, v___x_757_, v___x_760_, v___f_756_);
v___x_762_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_731_, v___x_757_, v___x_761_, v___f_714_);
return v___x_762_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_773_, lean_object* v_op_774_, lean_object* v_flags_775_, lean_object* v_payload_776_, lean_object* v___f_777_, lean_object* v___f_778_, lean_object* v___f_779_, lean_object* v_x_780_, lean_object* v___y_781_){
_start:
{
uint32_t v_op_boxed_782_; uint64_t v_flags_boxed_783_; lean_object* v_res_784_; 
v_op_boxed_782_ = lean_unbox_uint32(v_op_774_);
lean_dec(v_op_774_);
v_flags_boxed_783_ = lean_unbox_uint64(v_flags_775_);
lean_dec_ref(v_flags_775_);
v_res_784_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__9(v_failurePrefix_773_, v_op_boxed_782_, v_flags_boxed_783_, v_payload_776_, v___f_777_, v___f_778_, v___f_779_, v_x_780_);
lean_dec_ref(v_failurePrefix_773_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__2(lean_object* v___f_785_, lean_object* v_x_786_){
_start:
{
if (lean_obj_tag(v_x_786_) == 0)
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_796_; 
lean_dec_ref(v___f_785_);
v_a_788_ = lean_ctor_get(v_x_786_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v_x_786_);
if (v_isSharedCheck_796_ == 0)
{
v___x_790_ = v_x_786_;
v_isShared_791_ = v_isSharedCheck_796_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v_x_786_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_796_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_795_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_794_; 
v___x_794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
return v___x_794_;
}
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_798_; 
v_a_797_ = lean_ctor_get(v_x_786_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v_x_786_, 1);
v___x_798_ = lean_apply_2(v___f_785_, v_a_797_, lean_box(0));
return v___x_798_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__2___boxed(lean_object* v___f_799_, lean_object* v_x_800_, lean_object* v___y_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__2(v___f_799_, v_x_800_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__3(lean_object* v___f_803_, lean_object* v_x_804_){
_start:
{
if (lean_obj_tag(v_x_804_) == 0)
{
lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v___f_803_);
v_a_806_ = lean_ctor_get(v_x_804_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v_x_804_);
if (v_isSharedCheck_814_ == 0)
{
v___x_808_ = v_x_804_;
v_isShared_809_ = v_isSharedCheck_814_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v_x_804_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_814_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_806_);
v___x_811_ = v_reuseFailAlloc_813_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
lean_object* v___x_812_; 
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
return v___x_812_;
}
}
}
else
{
lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_826_; 
v_isSharedCheck_826_ = !lean_is_exclusive(v_x_804_);
if (v_isSharedCheck_826_ == 0)
{
lean_object* v_unused_827_; 
v_unused_827_ = lean_ctor_get(v_x_804_, 0);
lean_dec(v_unused_827_);
v___x_816_ = v_x_804_;
v_isShared_817_ = v_isSharedCheck_826_;
goto v_resetjp_815_;
}
else
{
lean_dec(v_x_804_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_826_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_818_; uint8_t v___x_819_; lean_object* v___x_820_; lean_object* v___x_822_; 
v___x_818_ = lean_unsigned_to_nat(0u);
v___x_819_ = 0;
v___x_820_ = lean_io_promise_new();
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 0, v___x_820_);
v___x_822_ = v___x_816_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_825_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
v___x_824_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_818_, v___x_819_, v___x_823_, v___f_803_);
return v___x_824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__3___boxed(lean_object* v___f_828_, lean_object* v_x_829_, lean_object* v___y_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__3(v___f_828_, v_x_829_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__1(lean_object* v___f_832_, lean_object* v_bytes_833_){
_start:
{
lean_object* v___x_835_; uint8_t v___x_836_; lean_object* v_val_838_; lean_object* v___x_841_; 
v___x_835_ = lean_unsigned_to_nat(0u);
v___x_836_ = 0;
v___x_841_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_833_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
lean_ctor_set_tag(v___x_844_, 1);
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
v_val_838_ = v___x_847_;
goto v___jp_837_;
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_841_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_841_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
lean_ctor_set_tag(v___x_852_, 0);
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
v_val_838_ = v___x_855_;
goto v___jp_837_;
}
}
}
v___jp_837_:
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v_val_838_);
v___x_840_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_835_, v___x_836_, v___x_839_, v___f_832_);
return v___x_840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__1___boxed(lean_object* v___f_858_, lean_object* v_bytes_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__1(v___f_858_, v_bytes_859_);
lean_dec_ref(v_bytes_859_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1(lean_object* v_context_862_, uint32_t v_op_863_, uint64_t v_flags_864_, lean_object* v_payload_865_, lean_object* v_failurePrefix_866_){
_start:
{
lean_object* v___f_868_; lean_object* v___f_869_; lean_object* v___f_870_; lean_object* v___f_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___f_874_; lean_object* v___f_875_; lean_object* v___x_876_; uint8_t v___x_877_; lean_object* v_val_879_; lean_object* v___x_882_; 
v___f_868_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_868_, 0, v_context_862_);
v___f_869_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_869_, 0, v___f_868_);
v___f_870_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_870_, 0, v___f_869_);
lean_inc_ref(v_failurePrefix_866_);
v___f_871_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_871_, 0, v_failurePrefix_866_);
v___x_872_ = lean_box_uint32(v_op_863_);
v___x_873_ = lean_box_uint64(v_flags_864_);
lean_inc_ref(v___f_870_);
v___f_874_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_874_, 0, v_failurePrefix_866_);
lean_closure_set(v___f_874_, 1, v___x_872_);
lean_closure_set(v___f_874_, 2, v___x_873_);
lean_closure_set(v___f_874_, 3, v_payload_865_);
lean_closure_set(v___f_874_, 4, v___f_871_);
lean_closure_set(v___f_874_, 5, v___f_870_);
lean_closure_set(v___f_874_, 6, v___f_870_);
v___f_875_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_875_, 0, v___f_874_);
v___x_876_ = lean_unsigned_to_nat(0u);
v___x_877_ = 0;
v___x_882_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
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
lean_ctor_set_tag(v___x_885_, 1);
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
v_val_879_ = v___x_888_;
goto v___jp_878_;
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
lean_ctor_set_tag(v___x_893_, 0);
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
v_val_879_ = v___x_896_;
goto v___jp_878_;
}
}
}
v___jp_878_:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_880_, 0, v_val_879_);
v___x_881_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_876_, v___x_877_, v___x_880_, v___f_875_);
return v___x_881_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1___boxed(lean_object* v_context_899_, lean_object* v_op_900_, lean_object* v_flags_901_, lean_object* v_payload_902_, lean_object* v_failurePrefix_903_, lean_object* v_a_904_){
_start:
{
uint32_t v_op_boxed_905_; uint64_t v_flags_boxed_906_; lean_object* v_res_907_; 
v_op_boxed_905_ = lean_unbox_uint32(v_op_900_);
lean_dec(v_op_900_);
v_flags_boxed_906_ = lean_unbox_uint64(v_flags_901_);
lean_dec_ref(v_flags_901_);
v_res_907_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1(v_context_899_, v_op_boxed_905_, v_flags_boxed_906_, v_payload_902_, v_failurePrefix_903_);
return v_res_907_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_908_; uint64_t v___x_909_; 
v___x_908_ = 0;
v___x_909_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_908_);
return v___x_909_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0(uint8_t v_await_910_, uint64_t v_extra_911_){
_start:
{
uint64_t v___x_912_; uint64_t v___y_914_; 
v___x_912_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0___closed__0);
if (v_await_910_ == 0)
{
uint64_t v___x_917_; 
v___x_917_ = 0ULL;
v___y_914_ = v___x_917_;
goto v___jp_913_;
}
else
{
uint64_t v___x_918_; 
v___x_918_ = 2ULL;
v___y_914_ = v___x_918_;
goto v___jp_913_;
}
v___jp_913_:
{
uint64_t v___x_915_; uint64_t v___x_916_; 
v___x_915_ = lean_uint64_lor(v___x_912_, v___y_914_);
v___x_916_ = lean_uint64_lor(v___x_915_, v_extra_911_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0___boxed(lean_object* v_await_919_, lean_object* v_extra_920_){
_start:
{
uint8_t v_await_boxed_921_; uint64_t v_extra_boxed_922_; uint64_t v_res_923_; lean_object* v_r_924_; 
v_await_boxed_921_ = lean_unbox(v_await_919_);
v_extra_boxed_922_ = lean_unbox_uint64(v_extra_920_);
lean_dec_ref(v_extra_920_);
v_res_923_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0(v_await_boxed_921_, v_extra_boxed_922_);
v_r_924_ = lean_box_uint64(v_res_923_);
return v_r_924_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0___closed__0(void){
_start:
{
uint64_t v___x_925_; uint8_t v___x_926_; uint64_t v___x_927_; 
v___x_925_ = 8ULL;
v___x_926_ = 0;
v___x_927_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__0(v___x_926_, v___x_925_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0(lean_object* v_o_928_, lean_object* v_name_929_, lean_object* v_args_930_){
_start:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; uint32_t v___x_937_; uint64_t v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_932_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_933_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_933_, 0, v_o_928_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
lean_inc_ref(v_name_929_);
v___x_934_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_934_, 0, v_name_929_);
v___x_935_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1___closed__0));
v___x_936_ = lean_string_append(v___x_935_, v_name_929_);
lean_dec_ref(v_name_929_);
v___x_937_ = 205;
v___x_938_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0___closed__0);
v___x_939_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_939_, 0, v_args_930_);
v___x_940_ = lean_unsigned_to_nat(3u);
v___x_941_ = lean_mk_empty_array_with_capacity(v___x_940_);
v___x_942_ = lean_array_push(v___x_941_, v___x_933_);
v___x_943_ = lean_array_push(v___x_942_, v___x_934_);
v___x_944_ = lean_array_push(v___x_943_, v___x_939_);
v___x_945_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
v___x_946_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0_spec__1(v___x_936_, v___x_937_, v___x_938_, v___x_945_, v___x_932_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0___boxed(lean_object* v_o_947_, lean_object* v_name_948_, lean_object* v_args_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0(v_o_947_, v_name_948_, v_args_949_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_match(lean_object* v_self_953_, lean_object* v_request_954_, lean_object* v_options_955_){
_start:
{
lean_object* v___x_957_; lean_object* v___y_959_; 
v___x_957_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Cache_match___closed__0));
if (lean_obj_tag(v_request_954_) == 1)
{
lean_object* v_value_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
v_value_967_ = lean_ctor_get(v_request_954_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v_request_954_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v_request_954_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_value_967_);
lean_dec(v_request_954_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
lean_ctor_set_tag(v___x_969_, 4);
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_value_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
v___y_959_ = v___x_972_;
goto v___jp_958_;
}
}
}
else
{
lean_object* v_value_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v_value_975_ = lean_ctor_get(v_request_954_, 0);
lean_inc(v_value_975_);
lean_dec_ref(v_request_954_);
v___x_976_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_977_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_977_, 0, v_value_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___y_959_ = v___x_977_;
goto v___jp_958_;
}
v___jp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_960_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_Cache_delete_spec__0(v_options_955_);
v___x_961_ = lean_unsigned_to_nat(2u);
v___x_962_ = lean_mk_empty_array_with_capacity(v___x_961_);
v___x_963_ = lean_array_push(v___x_962_, v___y_959_);
v___x_964_ = lean_array_push(v___x_963_, v___x_960_);
v___x_965_ = l_Lasm_JS_Web_Support_args(v___x_964_);
v___x_966_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_match_spec__0(v_self_953_, v___x_957_, v___x_965_);
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_match___boxed(lean_object* v_self_978_, lean_object* v_request_979_, lean_object* v_options_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lasm_JS_Cloudflare_Cache_match(v_self_978_, v_request_979_, v_options_980_);
lean_dec(v_options_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_put(lean_object* v_self_984_, lean_object* v_request_985_, lean_object* v_response_986_){
_start:
{
lean_object* v___x_988_; lean_object* v___y_990_; 
v___x_988_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Cache_put___closed__0));
if (lean_obj_tag(v_request_985_) == 1)
{
lean_object* v_value_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
v_value_999_ = lean_ctor_get(v_request_985_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_request_985_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v_request_985_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_value_999_);
lean_dec(v_request_985_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set_tag(v___x_1001_, 4);
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_value_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
v___y_990_ = v___x_1004_;
goto v___jp_989_;
}
}
}
else
{
lean_object* v_value_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v_value_1007_ = lean_ctor_get(v_request_985_, 0);
lean_inc(v_value_1007_);
lean_dec_ref(v_request_985_);
v___x_1008_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_1009_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1009_, 0, v_value_1007_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___y_990_ = v___x_1009_;
goto v___jp_989_;
}
v___jp_989_:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_991_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCacheStorage___lam__0___closed__0));
v___x_992_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_992_, 0, v_response_986_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = lean_unsigned_to_nat(2u);
v___x_994_ = lean_mk_empty_array_with_capacity(v___x_993_);
v___x_995_ = lean_array_push(v___x_994_, v___y_990_);
v___x_996_ = lean_array_push(v___x_995_, v___x_992_);
v___x_997_ = l_Lasm_JS_Web_Support_args(v___x_996_);
v___x_998_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_984_, v___x_988_, v___x_997_);
return v___x_998_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Cache_put___boxed(lean_object* v_self_1010_, lean_object* v_request_1011_, lean_object* v_response_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lasm_JS_Cloudflare_Cache_put(v_self_1010_, v_request_1011_, v_response_1012_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0(lean_object* v_o_1018_, lean_object* v_a_1019_){
_start:
{
if (lean_obj_tag(v_a_1019_) == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_dec(v_o_1018_);
v___x_1021_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___closed__1));
v___x_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
return v___x_1022_;
}
else
{
lean_object* v_tail_1023_; 
v_tail_1023_ = lean_ctor_get(v_a_1019_, 1);
if (lean_obj_tag(v_tail_1023_) == 0)
{
lean_object* v_head_1024_; lean_object* v___x_1025_; 
v_head_1024_ = lean_ctor_get(v_a_1019_, 0);
lean_inc(v_head_1024_);
lean_dec_ref_known(v_a_1019_, 2);
v___x_1025_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1018_, v_head_1024_);
return v___x_1025_;
}
else
{
lean_object* v_head_1026_; lean_object* v___x_1027_; 
lean_inc(v_tail_1023_);
v_head_1026_ = lean_ctor_get(v_a_1019_, 0);
lean_inc(v_head_1026_);
lean_dec_ref_known(v_a_1019_, 2);
v___x_1027_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1018_, v_head_1026_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v_o_1018_ = v_a_1028_;
v_a_1019_ = v_tail_1023_;
goto _start;
}
else
{
lean_dec(v_tail_1023_);
return v___x_1027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0___boxed(lean_object* v_o_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0(v_o_1030_, v_a_1031_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0(lean_object* v_path_1034_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1038_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_a_1037_);
lean_dec_ref_known(v___x_1036_, 1);
v___x_1038_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0_spec__0(v_a_1037_, v_path_1034_);
return v___x_1038_;
}
else
{
lean_dec(v_path_1034_);
return v___x_1036_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0___boxed(lean_object* v_path_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0(v_path_1039_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_caches(){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = ((lean_object*)(l_Lasm_JS_Cloudflare_caches___closed__1));
v___x_1048_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_caches_spec__0(v___x_1047_);
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
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
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
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_caches___boxed(lean_object* v_a_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lasm_JS_Cloudflare_caches();
return v_res_1066_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Cloudflare_Cache(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
