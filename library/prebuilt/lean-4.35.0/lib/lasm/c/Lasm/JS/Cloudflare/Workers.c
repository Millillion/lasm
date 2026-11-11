// Lean compiler output
// Module: Lasm.JS.Cloudflare.Workers
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Support public import Lasm.JS.Web.Fetch public import Lasm.JS.Cloudflare.Queues
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
extern lean_object* l_Lasm_JS_instFromJSFloat;
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExecutionContext = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Cloudflare.ExecutionContext"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheContext = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCacheContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Cloudflare.CacheContext"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheContext___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheContext___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSCacheContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheContext___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheContext___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheContext = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCacheContext___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSScheduledController = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Cloudflare.ScheduledController"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSScheduledController = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tags"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "pathPrefixes"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "purgeEverything"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__1;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__0;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Cloudflare.CachePurgeError"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "success"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "errors"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__1;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Cloudflare.CachePurgeResult"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandlerFetchHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lasm.JS.Cloudflare.ExportedHandlerFetchHandler"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Object"};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "defineProperty"};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__3_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__7;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__10;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandlerScheduledHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Lasm.JS.Cloudflare.ExportedHandlerScheduledHandler"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandlerQueueHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lasm.JS.Cloudflare.ExportedHandlerQueueHandler"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Cloudflare.MessageBatch"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "scheduled"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "queue"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSExportedHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExportedHandler___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExportedHandler___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExecutionContext_props___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "props"};
static const lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExecutionContext_props___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Option (Lasm.JS.Cloudflare.CacheContext)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_ExecutionContext_cache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cache"};
static const lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExecutionContext_cache___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "waitUntil"};
static const lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "passThroughOnException"};
static const lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__0_value;
static const lean_array_object l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_ExecutionContext_abort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExecutionContext_abort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Array (Lasm.JS.Cloudflare.CachePurgeError)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "an element is not Lasm.JS.Cloudflare.CachePurgeError"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_CacheContext_purge___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "purge"};
static const lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_CacheContext_purge___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_CacheContext_invalidate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "invalidate"};
static const lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_CacheContext_invalidate___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "scheduledTime"};
static const lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_ScheduledController_cron___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cron"};
static const lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ScheduledController_cron___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_ScheduledController_noRetry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "noRetry"};
static const lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ScheduledController_noRetry___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Cloudflare: empty path in "};
static const lean_object* l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_env___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "cloudflare:workers"};
static const lean_object* l_Lasm_JS_Cloudflare_env___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_env___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_env___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Cloudflare_env___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_env___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_env___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_env___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_env___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_env___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env();
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0(lean_object* v___x_39_, lean_object* v___f_40_, lean_object* v_d_41_){
_start:
{
lean_object* v_tags_42_; lean_object* v_pathPrefixes_43_; lean_object* v_purgeEverything_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v_tags_42_ = lean_ctor_get(v_d_41_, 0);
lean_inc(v_tags_42_);
v_pathPrefixes_43_ = lean_ctor_get(v_d_41_, 1);
lean_inc(v_pathPrefixes_43_);
v_purgeEverything_44_ = lean_ctor_get(v_d_41_, 2);
lean_inc(v_purgeEverything_44_);
lean_dec_ref(v_d_41_);
v___x_45_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0));
lean_inc_ref(v___x_39_);
v___x_46_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_39_, v_tags_42_);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_45_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
v___x_48_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1));
v___x_49_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_39_, v_pathPrefixes_43_);
v___x_50_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_48_);
lean_ctor_set(v___x_50_, 1, v___x_49_);
v___x_51_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2));
v___x_52_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_40_, v_purgeEverything_44_);
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
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__1(void){
_start:
{
lean_object* v___f_61_; lean_object* v___x_62_; 
v___f_61_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_62_ = l_Lasm_JS_instToJSArray___redArg(v___f_61_);
return v___x_62_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__3(void){
_start:
{
lean_object* v___f_64_; lean_object* v___x_65_; lean_object* v___f_66_; 
v___f_64_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__2));
v___x_65_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__1, &l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__1_once, _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__1);
v___f_66_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0), 3, 2);
lean_closure_set(v___f_66_, 0, v___x_65_);
lean_closure_set(v___f_66_, 1, v___f_64_);
return v___f_66_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions(void){
_start:
{
lean_object* v___f_67_; 
v___f_67_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__3, &l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__3_once, _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__3);
return v___f_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0(lean_object* v___x_70_, lean_object* v___x_71_, lean_object* v_d_72_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__0));
v___x_74_ = l_Lasm_JS_readField___redArg(v___x_70_, v_d_72_, v___x_73_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
lean_dec_ref(v___x_71_);
v_a_75_ = lean_ctor_get(v___x_74_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_74_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v___x_74_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v___x_74_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_a_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
else
{
lean_object* v_a_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_a_83_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_a_83_);
lean_dec_ref_known(v___x_74_, 1);
v___x_84_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__1));
v___x_85_ = l_Lasm_JS_readField___redArg(v___x_71_, v_d_72_, v___x_84_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_93_; 
lean_dec(v_a_83_);
v_a_86_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_93_ == 0)
{
v___x_88_ = v___x_85_;
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_a_86_);
lean_dec(v___x_85_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_91_; 
if (v_isShared_89_ == 0)
{
v___x_91_ = v___x_88_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_a_86_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
else
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_103_; 
v_a_94_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_103_ == 0)
{
v___x_96_ = v___x_85_;
v_isShared_97_ = v_isSharedCheck_103_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v___x_85_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_103_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_98_; double v___x_99_; lean_object* v___x_101_; 
v___x_98_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_98_, 0, v_a_94_);
v___x_99_ = lean_unbox_float(v_a_83_);
lean_dec(v_a_83_);
lean_ctor_set_float(v___x_98_, sizeof(void*)*1, v___x_99_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 0, v___x_98_);
v___x_101_ = v___x_96_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_98_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___boxed(lean_object* v___x_104_, lean_object* v___x_105_, lean_object* v_d_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0(v___x_104_, v___x_105_, v_d_106_);
lean_dec(v_d_106_);
return v_res_107_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__0(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___f_110_; 
v___x_108_ = l_Lasm_JS_instFromJSString;
v___x_109_ = l_Lasm_JS_instFromJSFloat;
v___f_110_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___boxed), 3, 2);
lean_closure_set(v___f_110_, 0, v___x_109_);
lean_closure_set(v___f_110_, 1, v___x_108_);
return v___f_110_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__2(void){
_start:
{
uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___f_114_; lean_object* v___x_115_; 
v___x_112_ = 0;
v___x_113_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__1));
v___f_114_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__0, &l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__0);
v___x_115_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_115_, 0, v___f_114_);
lean_ctor_set(v___x_115_, 1, v___x_113_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*2, v___x_112_);
return v___x_115_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__2, &l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__2_once, _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___closed__2);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0(lean_object* v___x_119_, lean_object* v___x_120_, lean_object* v_d_121_){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__0));
v___x_123_ = l_Lasm_JS_readField___redArg(v___x_119_, v_d_121_, v___x_122_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
lean_dec_ref(v___x_120_);
v_a_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_a_132_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_123_, 1);
v___x_133_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__1));
v___x_134_ = l_Lasm_JS_readField___redArg(v___x_120_, v_d_121_, v___x_133_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_142_; 
lean_dec(v_a_132_);
v_a_135_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_142_ == 0)
{
v___x_137_ = v___x_134_;
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v___x_134_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_140_; 
if (v_isShared_138_ == 0)
{
v___x_140_ = v___x_137_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_a_135_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_152_; 
v_a_143_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_152_ == 0)
{
v___x_145_ = v___x_134_;
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_134_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_147_; uint8_t v___x_148_; lean_object* v___x_150_; 
v___x_147_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_147_, 0, v_a_143_);
v___x_148_ = lean_unbox(v_a_132_);
lean_dec(v_a_132_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*1, v___x_148_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_147_);
v___x_150_ = v___x_145_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_147_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___boxed(lean_object* v___x_153_, lean_object* v___x_154_, lean_object* v_d_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0(v___x_153_, v___x_154_, v_d_155_);
lean_dec(v_d_155_);
return v_res_156_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__0(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeError;
v___x_158_ = l_Lasm_JS_instFromJSArray___redArg(v___x_157_);
return v___x_158_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__1(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___f_161_; 
v___x_159_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__0, &l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__0_once, _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__0);
v___x_160_ = l_Lasm_JS_instFromJSBool;
v___f_161_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_161_, 0, v___x_160_);
lean_closure_set(v___f_161_, 1, v___x_159_);
return v___f_161_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__3(void){
_start:
{
uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___f_165_; lean_object* v___x_166_; 
v___x_163_ = 0;
v___x_164_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__2));
v___f_165_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__1, &l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__1_once, _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__1);
v___x_166_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_166_, 0, v___f_165_);
lean_ctor_set(v___x_166_, 1, v___x_164_);
lean_ctor_set_uint8(v___x_166_, sizeof(void*)*2, v___x_163_);
return v___x_166_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__3, &l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__3_once, _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__3);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__0(lean_object* v_x_175_){
_start:
{
if (lean_obj_tag(v_x_175_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_185_; 
v_a_177_ = lean_ctor_get(v_x_175_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v_x_175_);
if (v_isSharedCheck_185_ == 0)
{
v___x_179_ = v_x_175_;
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v_x_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_185_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_184_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_196_; 
v_a_186_ = lean_ctor_get(v_x_175_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v_x_175_);
if (v_isSharedCheck_196_ == 0)
{
v___x_188_ = v_x_175_;
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v_x_175_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_190_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_191_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_191_, 0, v_a_186_);
lean_ctor_set(v___x_191_, 1, v___x_190_);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 0, v___x_191_);
v___x_193_ = v___x_188_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_195_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_194_; 
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__0___boxed(lean_object* v_x_197_, lean_object* v___y_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__0(v_x_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__1(lean_object* v_f_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v___f_203_, lean_object* v_x_204_){
_start:
{
if (lean_obj_tag(v_x_204_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_214_; 
lean_dec_ref(v___f_203_);
lean_dec(v_a_202_);
lean_dec(v_a_201_);
lean_dec_ref(v_f_200_);
v_a_206_ = lean_ctor_get(v_x_204_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_x_204_);
if (v_isSharedCheck_214_ == 0)
{
v___x_208_ = v_x_204_;
v_isShared_209_ = v_isSharedCheck_214_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v_x_204_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_214_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_209_ == 0)
{
v___x_211_ = v___x_208_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_206_);
v___x_211_ = v_reuseFailAlloc_213_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_object* v___x_212_; 
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_216_; uint8_t v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_a_215_ = lean_ctor_get(v_x_204_, 0);
lean_inc(v_a_215_);
lean_dec_ref_known(v_x_204_, 1);
v___x_216_ = lean_unsigned_to_nat(0u);
v___x_217_ = 0;
v___x_218_ = lean_apply_4(v_f_200_, v_a_201_, v_a_202_, v_a_215_, lean_box(0));
v___x_219_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_216_, v___x_217_, v___x_218_, v___f_203_);
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__1___boxed(lean_object* v_f_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v___f_223_, lean_object* v_x_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__1(v_f_220_, v_a_221_, v_a_222_, v___f_223_, v_x_224_);
return v_res_226_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_231_ = lean_string_utf8_byte_size(v___x_230_);
return v___x_231_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__3);
v___x_234_ = lean_nat_dec_eq(v___x_233_, v___x_232_);
return v___x_234_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__8));
v___x_240_ = lean_unsigned_to_nat(46u);
v___x_241_ = lean_unsigned_to_nat(193u);
v___x_242_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__7));
v___x_243_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__6));
v___x_244_ = l_mkPanicMessageWithDecl(v___x_243_, v___x_242_, v___x_241_, v___x_240_, v___x_239_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0(lean_object* v_context_246_, lean_object* v_d_247_){
_start:
{
lean_object* v___y_250_; lean_object* v___y_251_; 
if (lean_obj_tag(v_d_247_) == 9)
{
lean_object* v_value_255_; lean_object* v___x_256_; 
v_value_255_ = lean_ctor_get(v_d_247_, 0);
lean_inc(v_value_255_);
lean_dec_ref_known(v_d_247_, 2);
v___x_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_256_, 0, v_value_255_);
return v___x_256_;
}
else
{
lean_object* v___x_257_; lean_object* v_received_259_; 
v___x_257_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
if (lean_obj_tag(v_d_247_) == 9)
{
lean_object* v_value_273_; lean_object* v_description_274_; uint8_t v___x_275_; 
v_value_273_ = lean_ctor_get(v_d_247_, 0);
v_description_274_ = lean_ctor_get(v_d_247_, 1);
v___x_275_ = lean_string_dec_eq(v_description_274_, v___x_257_);
if (v___x_275_ == 0)
{
goto v___jp_271_;
}
else
{
uint32_t v___x_276_; uint64_t v___x_277_; lean_object* v___x_278_; uint32_t v___x_279_; lean_object* v___x_280_; 
lean_inc_n(v_value_273_, 2);
lean_dec_ref_known(v_d_247_, 2);
v___x_276_ = 206;
v___x_277_ = 0ULL;
v___x_278_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_278_, 0, v_value_273_);
lean_ctor_set(v___x_278_, 1, v___x_257_);
v___x_279_ = lasm_js_value_handle(v_value_273_);
lean_dec(v_value_273_);
v___x_280_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_276_, v___x_277_, v___x_278_, v___x_279_);
lean_dec_ref_known(v___x_278_, 2);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; uint8_t v___x_282_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v___x_282_ = lean_string_validate_utf8(v_a_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; 
lean_dec(v_a_281_);
v___x_283_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9);
v___x_284_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_283_);
v_received_259_ = v___x_284_;
goto v___jp_258_;
}
else
{
lean_object* v___x_285_; 
v___x_285_ = lean_string_from_utf8_unchecked(v_a_281_);
v_received_259_ = v___x_285_;
goto v___jp_258_;
}
}
else
{
lean_object* v___x_286_; 
lean_dec_ref_known(v___x_280_, 1);
v___x_286_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__10));
v_received_259_ = v___x_286_;
goto v___jp_258_;
}
}
}
else
{
goto v___jp_271_;
}
v___jp_258_:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__0));
v___x_261_ = lean_string_append(v___x_260_, v_context_246_);
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__1));
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
v___x_264_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__1));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
v___x_266_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__2));
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
v___x_268_ = lean_string_append(v___x_267_, v_received_259_);
lean_dec_ref(v_received_259_);
v___x_269_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; 
v___x_270_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5));
v___y_250_ = v___x_268_;
v___y_251_ = v___x_270_;
goto v___jp_249_;
}
else
{
v___y_250_ = v___x_268_;
v___y_251_ = v___x_257_;
goto v___jp_249_;
}
}
v___jp_271_:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lasm_JS_Data_describe(v_d_247_);
v_received_259_ = v___x_272_;
goto v___jp_258_;
}
}
v___jp_249_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_string_append(v___y_250_, v___y_251_);
v___x_253_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
v___x_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_287_, lean_object* v_d_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0(v_context_287_, v_d_288_);
lean_dec_ref(v_context_287_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0(lean_object* v_args_292_, lean_object* v_i_293_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_295_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___closed__0));
v___x_296_ = lean_unsigned_to_nat(1u);
v___x_297_ = lean_nat_add(v_i_293_, v___x_296_);
v___x_298_ = l_Nat_reprFast(v___x_297_);
v___x_299_ = lean_string_append(v___x_295_, v___x_298_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_array_get_size(v_args_292_);
v___x_301_ = lean_nat_dec_lt(v_i_293_, v___x_300_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = lean_box(0);
v___x_303_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0(v___x_299_, v___x_302_);
lean_dec_ref(v___x_299_);
return v___x_303_;
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_array_fget_borrowed(v_args_292_, v_i_293_);
lean_inc(v___x_304_);
v___x_305_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0(v___x_299_, v___x_304_);
lean_dec_ref(v___x_299_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___boxed(lean_object* v_args_306_, lean_object* v_i_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0(v_args_306_, v_i_307_);
lean_dec(v_i_307_);
lean_dec_ref(v_args_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__2(lean_object* v_f_310_, lean_object* v_a_311_, lean_object* v___f_312_, lean_object* v_args_313_, lean_object* v_x_314_){
_start:
{
if (lean_obj_tag(v_x_314_) == 0)
{
lean_object* v___x_316_; 
lean_dec_ref(v___f_312_);
lean_dec(v_a_311_);
lean_dec_ref(v_f_310_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v_x_314_);
return v___x_316_;
}
else
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_338_; 
v_a_317_ = lean_ctor_get(v_x_314_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v_x_314_);
if (v_isSharedCheck_338_ == 0)
{
v___x_319_ = v_x_314_;
v_isShared_320_ = v_isSharedCheck_338_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v_x_314_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_338_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___f_321_; lean_object* v___x_322_; lean_object* v___x_323_; uint8_t v___x_324_; lean_object* v_val_326_; lean_object* v___x_329_; 
v___f_321_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__1___boxed), 6, 4);
lean_closure_set(v___f_321_, 0, v_f_310_);
lean_closure_set(v___f_321_, 1, v_a_311_);
lean_closure_set(v___f_321_, 2, v_a_317_);
lean_closure_set(v___f_321_, 3, v___f_312_);
v___x_322_ = lean_unsigned_to_nat(2u);
v___x_323_ = lean_unsigned_to_nat(0u);
v___x_324_ = 0;
v___x_329_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0(v_args_313_, v___x_322_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_332_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_329_, 1);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v_a_330_);
v___x_332_ = v___x_319_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
v_val_326_ = v___x_332_;
goto v___jp_325_;
}
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; 
v_a_334_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_329_, 1);
if (v_isShared_320_ == 0)
{
lean_ctor_set_tag(v___x_319_, 0);
lean_ctor_set(v___x_319_, 0, v_a_334_);
v___x_336_ = v___x_319_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
v_val_326_ = v___x_336_;
goto v___jp_325_;
}
}
v___jp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_327_, 0, v_val_326_);
v___x_328_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_323_, v___x_324_, v___x_327_, v___f_321_);
return v___x_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__2___boxed(lean_object* v_f_339_, lean_object* v_a_340_, lean_object* v___f_341_, lean_object* v_args_342_, lean_object* v_x_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__2(v_f_339_, v_a_340_, v___f_341_, v_args_342_, v_x_343_);
lean_dec_ref(v_args_342_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__3(lean_object* v_f_346_, lean_object* v___f_347_, lean_object* v_args_348_, lean_object* v_x_349_){
_start:
{
if (lean_obj_tag(v_x_349_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_359_; 
lean_dec_ref(v_args_348_);
lean_dec_ref(v___f_347_);
lean_dec_ref(v_f_346_);
v_a_351_ = lean_ctor_get(v_x_349_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v_x_349_);
if (v_isSharedCheck_359_ == 0)
{
v___x_353_ = v_x_349_;
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v_x_349_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_351_);
v___x_356_ = v_reuseFailAlloc_358_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; 
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_377_; 
v_a_360_ = lean_ctor_get(v_x_349_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v_x_349_);
if (v_isSharedCheck_377_ == 0)
{
v___x_362_ = v_x_349_;
v_isShared_363_ = v_isSharedCheck_377_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v_x_349_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_377_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___f_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v_val_369_; lean_object* v___x_372_; lean_object* v_a_373_; lean_object* v___x_375_; 
lean_inc_ref(v_args_348_);
v___f_364_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__2___boxed), 6, 4);
lean_closure_set(v___f_364_, 0, v_f_346_);
lean_closure_set(v___f_364_, 1, v_a_360_);
lean_closure_set(v___f_364_, 2, v___f_347_);
lean_closure_set(v___f_364_, 3, v_args_348_);
v___x_365_ = lean_unsigned_to_nat(1u);
v___x_366_ = lean_unsigned_to_nat(0u);
v___x_367_ = 0;
v___x_372_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_348_, v___x_365_);
lean_dec_ref(v_args_348_);
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref(v___x_372_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v_a_373_);
v___x_375_ = v___x_362_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v___jp_368_:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v_val_369_);
v___x_371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_366_, v___x_367_, v___x_370_, v___f_364_);
return v___x_371_;
}
v_reusejp_374_:
{
v_val_369_ = v___x_375_;
goto v___jp_368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__3___boxed(lean_object* v_f_378_, lean_object* v___f_379_, lean_object* v_args_380_, lean_object* v_x_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__3(v_f_378_, v___f_379_, v_args_380_, v_x_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__1(lean_object* v_args_384_, lean_object* v_i_385_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_387_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___closed__0));
v___x_388_ = lean_unsigned_to_nat(1u);
v___x_389_ = lean_nat_add(v_i_385_, v___x_388_);
v___x_390_ = l_Nat_reprFast(v___x_389_);
v___x_391_ = lean_string_append(v___x_387_, v___x_390_);
lean_dec_ref(v___x_390_);
v___x_392_ = lean_array_get_size(v_args_384_);
v___x_393_ = lean_nat_dec_lt(v_i_385_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_box(0);
v___x_395_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_391_, v___x_394_);
lean_dec_ref(v___x_391_);
return v___x_395_;
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_array_fget_borrowed(v_args_384_, v_i_385_);
lean_inc(v___x_396_);
v___x_397_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_391_, v___x_396_);
lean_dec_ref(v___x_391_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__1___boxed(lean_object* v_args_398_, lean_object* v_i_399_, lean_object* v_a_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__1(v_args_398_, v_i_399_);
lean_dec(v_i_399_);
lean_dec_ref(v_args_398_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__4(lean_object* v_f_402_, lean_object* v___f_403_, lean_object* v_args_404_){
_start:
{
lean_object* v___f_406_; lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v_val_410_; lean_object* v___x_413_; 
lean_inc_ref(v_args_404_);
v___f_406_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__3___boxed), 5, 3);
lean_closure_set(v___f_406_, 0, v_f_402_);
lean_closure_set(v___f_406_, 1, v___f_403_);
lean_closure_set(v___f_406_, 2, v_args_404_);
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = 0;
v___x_413_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__1(v_args_404_, v___x_407_);
lean_dec_ref(v_args_404_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_413_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_413_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set_tag(v___x_416_, 1);
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
v_val_410_ = v___x_419_;
goto v___jp_409_;
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
v_a_422_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_413_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_413_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
lean_ctor_set_tag(v___x_424_, 0);
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
v_val_410_ = v___x_427_;
goto v___jp_409_;
}
}
}
v___jp_409_:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_411_, 0, v_val_410_);
v___x_412_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_407_, v___x_408_, v___x_411_, v___f_406_);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__4___boxed(lean_object* v_f_430_, lean_object* v___f_431_, lean_object* v_args_432_, lean_object* v___y_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__4(v_f_430_, v___f_431_, v_args_432_);
return v_res_434_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_unsigned_to_nat(3u);
v___x_443_ = lean_nat_to_int(v___x_442_);
return v___x_443_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__7(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6);
v___x_445_ = lean_nat_abs(v___x_444_);
return v___x_445_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_446_ = lean_cstr_to_nat("9007199254740991");
v___x_447_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__7, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__7_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__7);
v___x_448_ = lean_nat_dec_le(v___x_447_, v___x_446_);
return v___x_448_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6);
v___x_450_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
return v___x_450_;
}
}
static double _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__10(void){
_start:
{
lean_object* v___x_451_; double v___x_452_; 
v___x_451_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__6);
v___x_452_ = l_Float_ofInt(v___x_451_);
return v___x_452_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11(void){
_start:
{
double v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lean_float_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__10, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__10_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__10);
v___x_454_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_454_, 0, v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(lean_object* v_f_455_){
_start:
{
lean_object* v___f_457_; lean_object* v___f_458_; lean_object* v___x_459_; 
v___f_457_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__0));
v___f_458_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___lam__4___boxed), 4, 2);
lean_closure_set(v___f_458_, 0, v_f_455_);
lean_closure_set(v___f_458_, 1, v___f_457_);
v___x_459_ = l_Lasm_JS_Function_ofFn(v___f_458_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_461_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_a_460_);
lean_dec_ref_known(v___x_459_, 1);
v___x_461_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
lean_dec_ref_known(v___x_461_, 1);
v___x_463_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1));
v___x_464_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_462_, v___x_463_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___y_472_; uint8_t v___x_499_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_464_, 1);
v___x_466_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2));
v___x_467_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_460_);
v___x_468_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_468_, 0, v_a_460_);
lean_ctor_set(v___x_468_, 1, v___x_467_);
v___x_469_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4));
v___x_470_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5));
v___x_499_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; 
v___x_500_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9);
v___y_472_ = v___x_500_;
goto v___jp_471_;
}
else
{
lean_object* v___x_501_; 
v___x_501_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11);
v___y_472_ = v___x_501_;
goto v___jp_471_;
}
v___jp_471_:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
lean_inc(v___y_472_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_470_);
lean_ctor_set(v___x_473_, 1, v___y_472_);
v___x_474_ = lean_box(0);
v___x_475_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v___x_476_ = l_Lasm_JS_obj(v___x_475_);
v___x_477_ = lean_unsigned_to_nat(3u);
v___x_478_ = lean_mk_empty_array_with_capacity(v___x_477_);
v___x_479_ = lean_array_push(v___x_478_, v___x_468_);
v___x_480_ = lean_array_push(v___x_479_, v___x_469_);
v___x_481_ = lean_array_push(v___x_480_, v___x_476_);
v___x_482_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_465_, v___x_466_, v___x_481_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_489_ == 0)
{
lean_object* v_unused_490_; 
v_unused_490_ = lean_ctor_get(v___x_482_, 0);
lean_dec(v_unused_490_);
v___x_484_ = v___x_482_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_dec(v___x_482_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v_a_460_);
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_460_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec(v_a_460_);
v_a_491_ = lean_ctor_get(v___x_482_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_482_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_482_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_509_; 
lean_dec(v_a_460_);
v_a_502_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_509_ == 0)
{
v___x_504_ = v___x_464_;
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_464_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_507_; 
if (v_isShared_505_ == 0)
{
v___x_507_ = v___x_504_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_502_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_dec(v_a_460_);
v_a_510_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_461_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_461_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
v_a_518_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_459_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_459_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___boxed(lean_object* v_f_526_, lean_object* v_a_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(v_f_526_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___lam__0(lean_object* v_f_529_, lean_object* v_args_530_){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = lean_unsigned_to_nat(0u);
v___x_533_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__1(v_args_530_, v___x_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v_a_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_533_, 1);
v___x_535_ = lean_unsigned_to_nat(1u);
v___x_536_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_530_, v___x_535_);
v_a_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_537_);
lean_dec_ref(v___x_536_);
v___x_538_ = lean_unsigned_to_nat(2u);
v___x_539_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0(v_args_530_, v___x_538_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_541_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_540_);
lean_dec_ref_known(v___x_539_, 1);
v___x_541_ = lean_apply_4(v_f_529_, v_a_534_, v_a_537_, v_a_540_, lean_box(0));
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_551_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_551_ == 0)
{
v___x_544_ = v___x_541_;
v_isShared_545_ = v_isSharedCheck_551_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_541_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_551_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_546_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_547_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_547_, 0, v_a_542_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 0, v___x_547_);
v___x_549_ = v___x_544_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_a_552_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_541_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_541_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
lean_dec(v_a_537_);
lean_dec(v_a_534_);
lean_dec_ref(v_f_529_);
v_a_560_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_539_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_539_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
else
{
lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_575_; 
lean_dec_ref(v_f_529_);
v_a_568_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_575_ == 0)
{
v___x_570_ = v___x_533_;
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_533_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_575_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_573_; 
if (v_isShared_571_ == 0)
{
v___x_573_ = v___x_570_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_568_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_576_, lean_object* v_args_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___lam__0(v_f_576_, v_args_577_);
lean_dec_ref(v_args_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(lean_object* v_f_580_){
_start:
{
lean_object* v___f_582_; lean_object* v___x_583_; 
v___f_582_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_582_, 0, v_f_580_);
v___x_583_ = l_Lasm_JS_Function_ofSyncFn(v___f_582_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_585_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_583_, 1);
v___x_585_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
v___x_587_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1));
v___x_588_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_586_, v___x_587_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v_a_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___y_596_; uint8_t v___x_623_; 
v_a_589_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_a_589_);
lean_dec_ref_known(v___x_588_, 1);
v___x_590_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2));
v___x_591_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_584_);
v___x_592_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_592_, 0, v_a_584_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4));
v___x_594_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5));
v___x_623_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; 
v___x_624_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9);
v___y_596_ = v___x_624_;
goto v___jp_595_;
}
else
{
lean_object* v___x_625_; 
v___x_625_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11);
v___y_596_ = v___x_625_;
goto v___jp_595_;
}
v___jp_595_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
lean_inc(v___y_596_);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_594_);
lean_ctor_set(v___x_597_, 1, v___y_596_);
v___x_598_ = lean_box(0);
v___x_599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_597_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v___x_600_ = l_Lasm_JS_obj(v___x_599_);
v___x_601_ = lean_unsigned_to_nat(3u);
v___x_602_ = lean_mk_empty_array_with_capacity(v___x_601_);
v___x_603_ = lean_array_push(v___x_602_, v___x_592_);
v___x_604_ = lean_array_push(v___x_603_, v___x_593_);
v___x_605_ = lean_array_push(v___x_604_, v___x_600_);
v___x_606_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_589_, v___x_590_, v___x_605_);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; 
v_unused_614_ = lean_ctor_get(v___x_606_, 0);
lean_dec(v_unused_614_);
v___x_608_ = v___x_606_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_dec(v___x_606_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v_a_584_);
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_584_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec(v_a_584_);
v_a_615_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_606_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_606_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec(v_a_584_);
v_a_626_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_588_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_588_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec(v_a_584_);
v_a_634_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_585_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_585_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
v_a_642_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_583_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_583_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___boxed(lean_object* v_f_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(v_f_650_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0(lean_object* v_x_664_){
_start:
{
if (lean_obj_tag(v_x_664_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_674_; 
v_a_666_ = lean_ctor_get(v_x_664_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v_x_664_);
if (v_isSharedCheck_674_ == 0)
{
v___x_668_ = v_x_664_;
v_isShared_669_ = v_isSharedCheck_674_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v_x_664_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_674_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_673_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_672_; 
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
}
else
{
lean_object* v___x_675_; 
lean_dec_ref_known(v_x_664_, 1);
v___x_675_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___closed__1));
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0___boxed(lean_object* v_x_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__0(v_x_676_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__1(lean_object* v_f_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v___f_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v___f_682_);
lean_dec(v_a_681_);
lean_dec(v_a_680_);
lean_dec_ref(v_f_679_);
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
v___x_697_ = lean_apply_4(v_f_679_, v_a_680_, v_a_681_, v_a_694_, lean_box(0));
v___x_698_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_695_, v___x_696_, v___x_697_, v___f_682_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__1___boxed(lean_object* v_f_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v___f_702_, lean_object* v_x_703_, lean_object* v___y_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__1(v_f_699_, v_a_700_, v_a_701_, v___f_702_, v_x_703_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__2(lean_object* v_f_706_, lean_object* v_a_707_, lean_object* v___f_708_, lean_object* v_args_709_, lean_object* v_x_710_){
_start:
{
if (lean_obj_tag(v_x_710_) == 0)
{
lean_object* v___x_712_; 
lean_dec_ref(v___f_708_);
lean_dec(v_a_707_);
lean_dec_ref(v_f_706_);
v___x_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_712_, 0, v_x_710_);
return v___x_712_;
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_734_; 
v_a_713_ = lean_ctor_get(v_x_710_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v_x_710_);
if (v_isSharedCheck_734_ == 0)
{
v___x_715_ = v_x_710_;
v_isShared_716_ = v_isSharedCheck_734_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v_x_710_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_734_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___f_717_; lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; lean_object* v_val_722_; lean_object* v___x_725_; 
v___f_717_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__1___boxed), 6, 4);
lean_closure_set(v___f_717_, 0, v_f_706_);
lean_closure_set(v___f_717_, 1, v_a_707_);
lean_closure_set(v___f_717_, 2, v_a_713_);
lean_closure_set(v___f_717_, 3, v___f_708_);
v___x_718_ = lean_unsigned_to_nat(2u);
v___x_719_ = lean_unsigned_to_nat(0u);
v___x_720_ = 0;
v___x_725_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0(v_args_709_, v___x_718_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_728_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v_a_726_);
v___x_728_ = v___x_715_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
v_val_722_ = v___x_728_;
goto v___jp_721_;
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; 
v_a_730_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_730_);
lean_dec_ref_known(v___x_725_, 1);
if (v_isShared_716_ == 0)
{
lean_ctor_set_tag(v___x_715_, 0);
lean_ctor_set(v___x_715_, 0, v_a_730_);
v___x_732_ = v___x_715_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_730_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
v_val_722_ = v___x_732_;
goto v___jp_721_;
}
}
v___jp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_val_722_);
v___x_724_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_719_, v___x_720_, v___x_723_, v___f_717_);
return v___x_724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__2___boxed(lean_object* v_f_735_, lean_object* v_a_736_, lean_object* v___f_737_, lean_object* v_args_738_, lean_object* v_x_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__2(v_f_735_, v_a_736_, v___f_737_, v_args_738_, v_x_739_);
lean_dec_ref(v_args_738_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__3(lean_object* v_f_742_, lean_object* v___f_743_, lean_object* v_args_744_, lean_object* v_x_745_){
_start:
{
if (lean_obj_tag(v_x_745_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_755_; 
lean_dec_ref(v_args_744_);
lean_dec_ref(v___f_743_);
lean_dec_ref(v_f_742_);
v_a_747_ = lean_ctor_get(v_x_745_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v_x_745_);
if (v_isSharedCheck_755_ == 0)
{
v___x_749_ = v_x_745_;
v_isShared_750_ = v_isSharedCheck_755_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v_x_745_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_755_;
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
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_754_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
lean_object* v___x_753_; 
v___x_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
return v___x_753_;
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_773_; 
v_a_756_ = lean_ctor_get(v_x_745_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v_x_745_);
if (v_isSharedCheck_773_ == 0)
{
v___x_758_ = v_x_745_;
v_isShared_759_ = v_isSharedCheck_773_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v_x_745_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_773_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___f_760_; lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; lean_object* v_val_765_; lean_object* v___x_768_; lean_object* v_a_769_; lean_object* v___x_771_; 
lean_inc_ref(v_args_744_);
v___f_760_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__2___boxed), 6, 4);
lean_closure_set(v___f_760_, 0, v_f_742_);
lean_closure_set(v___f_760_, 1, v_a_756_);
lean_closure_set(v___f_760_, 2, v___f_743_);
lean_closure_set(v___f_760_, 3, v_args_744_);
v___x_761_ = lean_unsigned_to_nat(1u);
v___x_762_ = lean_unsigned_to_nat(0u);
v___x_763_ = 0;
v___x_768_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_744_, v___x_761_);
lean_dec_ref(v_args_744_);
v_a_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_769_);
lean_dec_ref(v___x_768_);
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 0, v_a_769_);
v___x_771_ = v___x_758_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v___jp_764_:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v_val_765_);
v___x_767_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_762_, v___x_763_, v___x_766_, v___f_760_);
return v___x_767_;
}
v_reusejp_770_:
{
v_val_765_ = v___x_771_;
goto v___jp_764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__3___boxed(lean_object* v_f_774_, lean_object* v___f_775_, lean_object* v_args_776_, lean_object* v_x_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__3(v_f_774_, v___f_775_, v_args_776_, v_x_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0_spec__0(lean_object* v_context_780_, lean_object* v_d_781_){
_start:
{
lean_object* v___y_784_; lean_object* v___y_785_; 
if (lean_obj_tag(v_d_781_) == 9)
{
lean_object* v_value_789_; lean_object* v___x_790_; 
v_value_789_ = lean_ctor_get(v_d_781_, 0);
lean_inc(v_value_789_);
lean_dec_ref_known(v_d_781_, 2);
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v_value_789_);
return v___x_790_;
}
else
{
lean_object* v___x_791_; lean_object* v_received_793_; 
v___x_791_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
if (lean_obj_tag(v_d_781_) == 9)
{
lean_object* v_value_807_; lean_object* v_description_808_; uint8_t v___x_809_; 
v_value_807_ = lean_ctor_get(v_d_781_, 0);
v_description_808_ = lean_ctor_get(v_d_781_, 1);
v___x_809_ = lean_string_dec_eq(v_description_808_, v___x_791_);
if (v___x_809_ == 0)
{
goto v___jp_805_;
}
else
{
uint32_t v___x_810_; uint64_t v___x_811_; lean_object* v___x_812_; uint32_t v___x_813_; lean_object* v___x_814_; 
lean_inc_n(v_value_807_, 2);
lean_dec_ref_known(v_d_781_, 2);
v___x_810_ = 206;
v___x_811_ = 0ULL;
v___x_812_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_812_, 0, v_value_807_);
lean_ctor_set(v___x_812_, 1, v___x_791_);
v___x_813_ = lasm_js_value_handle(v_value_807_);
lean_dec(v_value_807_);
v___x_814_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_810_, v___x_811_, v___x_812_, v___x_813_);
lean_dec_ref_known(v___x_812_, 2);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; uint8_t v___x_816_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_814_, 1);
v___x_816_ = lean_string_validate_utf8(v_a_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; lean_object* v___x_818_; 
lean_dec(v_a_815_);
v___x_817_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9);
v___x_818_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_817_);
v_received_793_ = v___x_818_;
goto v___jp_792_;
}
else
{
lean_object* v___x_819_; 
v___x_819_ = lean_string_from_utf8_unchecked(v_a_815_);
v_received_793_ = v___x_819_;
goto v___jp_792_;
}
}
else
{
lean_object* v___x_820_; 
lean_dec_ref_known(v___x_814_, 1);
v___x_820_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__10));
v_received_793_ = v___x_820_;
goto v___jp_792_;
}
}
}
else
{
goto v___jp_805_;
}
v___jp_792_:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_794_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__0));
v___x_795_ = lean_string_append(v___x_794_, v_context_780_);
v___x_796_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__1));
v___x_797_ = lean_string_append(v___x_795_, v___x_796_);
v___x_798_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSScheduledController___closed__0));
v___x_799_ = lean_string_append(v___x_797_, v___x_798_);
v___x_800_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__2));
v___x_801_ = lean_string_append(v___x_799_, v___x_800_);
v___x_802_ = lean_string_append(v___x_801_, v_received_793_);
lean_dec_ref(v_received_793_);
v___x_803_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; 
v___x_804_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5));
v___y_784_ = v___x_802_;
v___y_785_ = v___x_804_;
goto v___jp_783_;
}
else
{
v___y_784_ = v___x_802_;
v___y_785_ = v___x_791_;
goto v___jp_783_;
}
}
v___jp_805_:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lasm_JS_Data_describe(v_d_781_);
v_received_793_ = v___x_806_;
goto v___jp_792_;
}
}
v___jp_783_:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_786_ = lean_string_append(v___y_784_, v___y_785_);
v___x_787_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
v___x_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_821_, lean_object* v_d_822_, lean_object* v_a_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0_spec__0(v_context_821_, v_d_822_);
lean_dec_ref(v_context_821_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0(lean_object* v_args_825_, lean_object* v_i_826_){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_828_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___closed__0));
v___x_829_ = lean_unsigned_to_nat(1u);
v___x_830_ = lean_nat_add(v_i_826_, v___x_829_);
v___x_831_ = l_Nat_reprFast(v___x_830_);
v___x_832_ = lean_string_append(v___x_828_, v___x_831_);
lean_dec_ref(v___x_831_);
v___x_833_ = lean_array_get_size(v_args_825_);
v___x_834_ = lean_nat_dec_lt(v_i_826_, v___x_833_);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_box(0);
v___x_836_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0_spec__0(v___x_832_, v___x_835_);
lean_dec_ref(v___x_832_);
return v___x_836_;
}
else
{
lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_837_ = lean_array_fget_borrowed(v_args_825_, v_i_826_);
lean_inc(v___x_837_);
v___x_838_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0_spec__0(v___x_832_, v___x_837_);
lean_dec_ref(v___x_832_);
return v___x_838_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0___boxed(lean_object* v_args_839_, lean_object* v_i_840_, lean_object* v_a_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0(v_args_839_, v_i_840_);
lean_dec(v_i_840_);
lean_dec_ref(v_args_839_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__4(lean_object* v_f_843_, lean_object* v___f_844_, lean_object* v_args_845_){
_start:
{
lean_object* v___f_847_; lean_object* v___x_848_; uint8_t v___x_849_; lean_object* v_val_851_; lean_object* v___x_854_; 
lean_inc_ref(v_args_845_);
v___f_847_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__3___boxed), 5, 3);
lean_closure_set(v___f_847_, 0, v_f_843_);
lean_closure_set(v___f_847_, 1, v___f_844_);
lean_closure_set(v___f_847_, 2, v_args_845_);
v___x_848_ = lean_unsigned_to_nat(0u);
v___x_849_ = 0;
v___x_854_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0(v_args_845_, v___x_848_);
lean_dec_ref(v_args_845_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
lean_ctor_set_tag(v___x_857_, 1);
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
v_val_851_ = v___x_860_;
goto v___jp_850_;
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
v_a_863_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_854_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_854_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
lean_ctor_set_tag(v___x_865_, 0);
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
v_val_851_ = v___x_868_;
goto v___jp_850_;
}
}
}
v___jp_850_:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_852_, 0, v_val_851_);
v___x_853_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_848_, v___x_849_, v___x_852_, v___f_847_);
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__4___boxed(lean_object* v_f_871_, lean_object* v___f_872_, lean_object* v_args_873_, lean_object* v___y_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__4(v_f_871_, v___f_872_, v_args_873_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(lean_object* v_f_877_){
_start:
{
lean_object* v___f_879_; lean_object* v___f_880_; lean_object* v___x_881_; 
v___f_879_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___closed__0));
v___f_880_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__4___boxed), 4, 2);
lean_closure_set(v___f_880_, 0, v_f_877_);
lean_closure_set(v___f_880_, 1, v___f_879_);
v___x_881_ = l_Lasm_JS_Function_ofFn(v___f_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
v___x_883_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_883_, 1);
v___x_885_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1));
v___x_886_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_884_, v___x_885_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___y_894_; uint8_t v___x_921_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
v___x_888_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2));
v___x_889_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_882_);
v___x_890_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_890_, 0, v_a_882_);
lean_ctor_set(v___x_890_, 1, v___x_889_);
v___x_891_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4));
v___x_892_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5));
v___x_921_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; 
v___x_922_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9);
v___y_894_ = v___x_922_;
goto v___jp_893_;
}
else
{
lean_object* v___x_923_; 
v___x_923_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11);
v___y_894_ = v___x_923_;
goto v___jp_893_;
}
v___jp_893_:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
lean_inc(v___y_894_);
v___x_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_892_);
lean_ctor_set(v___x_895_, 1, v___y_894_);
v___x_896_ = lean_box(0);
v___x_897_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_895_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
v___x_898_ = l_Lasm_JS_obj(v___x_897_);
v___x_899_ = lean_unsigned_to_nat(3u);
v___x_900_ = lean_mk_empty_array_with_capacity(v___x_899_);
v___x_901_ = lean_array_push(v___x_900_, v___x_890_);
v___x_902_ = lean_array_push(v___x_901_, v___x_891_);
v___x_903_ = lean_array_push(v___x_902_, v___x_898_);
v___x_904_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_887_, v___x_888_, v___x_903_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v___x_904_, 0);
lean_dec(v_unused_912_);
v___x_906_ = v___x_904_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_dec(v___x_904_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v_a_882_);
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_882_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec(v_a_882_);
v_a_913_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_904_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_904_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_a_882_);
v_a_924_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_886_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_886_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
lean_dec(v_a_882_);
v_a_932_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v___x_883_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_883_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
v_a_940_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_881_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_881_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___boxed(lean_object* v_f_948_, lean_object* v_a_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(v_f_948_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___lam__0(lean_object* v_f_951_, lean_object* v_args_952_){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn_spec__0(v_args_952_, v___x_954_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v_a_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v___x_955_, 1);
v___x_957_ = lean_unsigned_to_nat(1u);
v___x_958_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_952_, v___x_957_);
v_a_959_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_a_959_);
lean_dec_ref(v___x_958_);
v___x_960_ = lean_unsigned_to_nat(2u);
v___x_961_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0(v_args_952_, v___x_960_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; lean_object* v___x_963_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_961_, 1);
v___x_963_ = lean_apply_4(v_f_951_, v_a_956_, v_a_959_, v_a_962_, lean_box(0));
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_971_; 
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_971_ == 0)
{
lean_object* v_unused_972_; 
v_unused_972_ = lean_ctor_get(v___x_963_, 0);
lean_dec(v_unused_972_);
v___x_965_ = v___x_963_;
v_isShared_966_ = v_isSharedCheck_971_;
goto v_resetjp_964_;
}
else
{
lean_dec(v___x_963_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_971_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_967_; lean_object* v___x_969_; 
v___x_967_ = lean_box(0);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 0, v___x_967_);
v___x_969_ = v___x_965_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_967_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
v_a_973_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_963_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_963_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v_a_959_);
lean_dec(v_a_956_);
lean_dec_ref(v_f_951_);
v_a_981_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_961_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_961_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
lean_dec_ref(v_f_951_);
v_a_989_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_955_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_955_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_997_, lean_object* v_args_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___lam__0(v_f_997_, v_args_998_);
lean_dec_ref(v_args_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(lean_object* v_f_1001_){
_start:
{
lean_object* v___f_1003_; lean_object* v___x_1004_; 
v___f_1003_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1003_, 0, v_f_1001_);
v___x_1004_ = l_Lasm_JS_Function_ofSyncFn(v___f_1003_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1006_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1006_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_1006_, 1);
v___x_1008_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1));
v___x_1009_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1007_, v___x_1008_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___y_1017_; uint8_t v___x_1044_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1009_, 1);
v___x_1011_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2));
v___x_1012_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1005_);
v___x_1013_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1013_, 0, v_a_1005_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4));
v___x_1015_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5));
v___x_1044_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9);
v___y_1017_ = v___x_1045_;
goto v___jp_1016_;
}
else
{
lean_object* v___x_1046_; 
v___x_1046_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11);
v___y_1017_ = v___x_1046_;
goto v___jp_1016_;
}
v___jp_1016_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
lean_inc(v___y_1017_);
v___x_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1015_);
lean_ctor_set(v___x_1018_, 1, v___y_1017_);
v___x_1019_ = lean_box(0);
v___x_1020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = l_Lasm_JS_obj(v___x_1020_);
v___x_1022_ = lean_unsigned_to_nat(3u);
v___x_1023_ = lean_mk_empty_array_with_capacity(v___x_1022_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_1013_);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_1014_);
v___x_1026_ = lean_array_push(v___x_1025_, v___x_1021_);
v___x_1027_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1010_, v___x_1011_, v___x_1026_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1034_ == 0)
{
lean_object* v_unused_1035_; 
v_unused_1035_ = lean_ctor_get(v___x_1027_, 0);
lean_dec(v_unused_1035_);
v___x_1029_ = v___x_1027_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_dec(v___x_1027_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 0, v_a_1005_);
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1005_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
lean_dec(v_a_1005_);
v_a_1036_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_1027_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1027_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec(v_a_1005_);
v_a_1047_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1009_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1009_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
lean_dec(v_a_1005_);
v_a_1055_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1006_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1006_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
v_a_1063_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1004_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1004_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___boxed(lean_object* v_f_1071_, lean_object* v_a_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(v_f_1071_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0(lean_object* v_context_1082_, lean_object* v_d_1083_){
_start:
{
lean_object* v___y_1086_; lean_object* v___y_1087_; 
if (lean_obj_tag(v_d_1083_) == 9)
{
lean_object* v_value_1091_; lean_object* v___x_1092_; 
v_value_1091_ = lean_ctor_get(v_d_1083_, 0);
lean_inc(v_value_1091_);
lean_dec_ref_known(v_d_1083_, 2);
v___x_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1092_, 0, v_value_1091_);
return v___x_1092_;
}
else
{
lean_object* v___x_1093_; lean_object* v_received_1095_; 
v___x_1093_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
if (lean_obj_tag(v_d_1083_) == 9)
{
lean_object* v_value_1109_; lean_object* v_description_1110_; uint8_t v___x_1111_; 
v_value_1109_ = lean_ctor_get(v_d_1083_, 0);
v_description_1110_ = lean_ctor_get(v_d_1083_, 1);
v___x_1111_ = lean_string_dec_eq(v_description_1110_, v___x_1093_);
if (v___x_1111_ == 0)
{
goto v___jp_1107_;
}
else
{
uint32_t v___x_1112_; uint64_t v___x_1113_; lean_object* v___x_1114_; uint32_t v___x_1115_; lean_object* v___x_1116_; 
lean_inc_n(v_value_1109_, 2);
lean_dec_ref_known(v_d_1083_, 2);
v___x_1112_ = 206;
v___x_1113_ = 0ULL;
v___x_1114_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1114_, 0, v_value_1109_);
lean_ctor_set(v___x_1114_, 1, v___x_1093_);
v___x_1115_ = lasm_js_value_handle(v_value_1109_);
lean_dec(v_value_1109_);
v___x_1116_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1112_, v___x_1113_, v___x_1114_, v___x_1115_);
lean_dec_ref_known(v___x_1114_, 2);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; uint8_t v___x_1118_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = lean_string_validate_utf8(v_a_1117_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
lean_dec(v_a_1117_);
v___x_1119_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9);
v___x_1120_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1119_);
v_received_1095_ = v___x_1120_;
goto v___jp_1094_;
}
else
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_string_from_utf8_unchecked(v_a_1117_);
v_received_1095_ = v___x_1121_;
goto v___jp_1094_;
}
}
else
{
lean_object* v___x_1122_; 
lean_dec_ref_known(v___x_1116_, 1);
v___x_1122_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__10));
v_received_1095_ = v___x_1122_;
goto v___jp_1094_;
}
}
}
else
{
goto v___jp_1107_;
}
v___jp_1094_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; uint8_t v___x_1105_; 
v___x_1096_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1097_ = lean_string_append(v___x_1096_, v_context_1082_);
v___x_1098_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1099_ = lean_string_append(v___x_1097_, v___x_1098_);
v___x_1100_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1101_ = lean_string_append(v___x_1099_, v___x_1100_);
v___x_1102_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1103_ = lean_string_append(v___x_1101_, v___x_1102_);
v___x_1104_ = lean_string_append(v___x_1103_, v_received_1095_);
lean_dec_ref(v_received_1095_);
v___x_1105_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_1105_ == 0)
{
lean_object* v___x_1106_; 
v___x_1106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5));
v___y_1086_ = v___x_1104_;
v___y_1087_ = v___x_1106_;
goto v___jp_1085_;
}
else
{
v___y_1086_ = v___x_1104_;
v___y_1087_ = v___x_1093_;
goto v___jp_1085_;
}
}
v___jp_1107_:
{
lean_object* v___x_1108_; 
v___x_1108_ = l_Lasm_JS_Data_describe(v_d_1083_);
v_received_1095_ = v___x_1108_;
goto v___jp_1094_;
}
}
v___jp_1085_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1088_ = lean_string_append(v___y_1086_, v___y_1087_);
v___x_1089_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1123_, lean_object* v_d_1124_, lean_object* v_a_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0(v_context_1123_, v_d_1124_);
lean_dec_ref(v_context_1123_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0(lean_object* v_args_1127_, lean_object* v_i_1128_){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; uint8_t v___x_1136_; 
v___x_1130_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0___closed__0));
v___x_1131_ = lean_unsigned_to_nat(1u);
v___x_1132_ = lean_nat_add(v_i_1128_, v___x_1131_);
v___x_1133_ = l_Nat_reprFast(v___x_1132_);
v___x_1134_ = lean_string_append(v___x_1130_, v___x_1133_);
lean_dec_ref(v___x_1133_);
v___x_1135_ = lean_array_get_size(v_args_1127_);
v___x_1136_ = lean_nat_dec_lt(v_i_1128_, v___x_1135_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = lean_box(0);
v___x_1138_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0(v___x_1134_, v___x_1137_);
lean_dec_ref(v___x_1134_);
return v___x_1138_;
}
else
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = lean_array_fget_borrowed(v_args_1127_, v_i_1128_);
lean_inc(v___x_1139_);
v___x_1140_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0_spec__0(v___x_1134_, v___x_1139_);
lean_dec_ref(v___x_1134_);
return v___x_1140_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0___boxed(lean_object* v_args_1141_, lean_object* v_i_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0(v_args_1141_, v_i_1142_);
lean_dec(v_i_1142_);
lean_dec_ref(v_args_1141_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___lam__4(lean_object* v_f_1145_, lean_object* v___f_1146_, lean_object* v_args_1147_){
_start:
{
lean_object* v___f_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; lean_object* v_val_1153_; lean_object* v___x_1156_; 
lean_inc_ref(v_args_1147_);
v___f_1149_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___lam__3___boxed), 5, 3);
lean_closure_set(v___f_1149_, 0, v_f_1145_);
lean_closure_set(v___f_1149_, 1, v___f_1146_);
lean_closure_set(v___f_1149_, 2, v_args_1147_);
v___x_1150_ = lean_unsigned_to_nat(0u);
v___x_1151_ = 0;
v___x_1156_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0(v_args_1147_, v___x_1150_);
lean_dec_ref(v_args_1147_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 1);
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
v_val_1153_ = v___x_1162_;
goto v___jp_1152_;
}
}
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
v_a_1165_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___x_1156_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1156_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 0);
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
v_val_1153_ = v___x_1170_;
goto v___jp_1152_;
}
}
}
v___jp_1152_:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v_val_1153_);
v___x_1155_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1150_, v___x_1151_, v___x_1154_, v___f_1149_);
return v___x_1155_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___lam__4___boxed(lean_object* v_f_1173_, lean_object* v___f_1174_, lean_object* v_args_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___lam__4(v_f_1173_, v___f_1174_, v_args_1175_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn(lean_object* v_f_1178_){
_start:
{
lean_object* v___f_1180_; lean_object* v___f_1181_; lean_object* v___x_1182_; 
v___f_1180_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___closed__0));
v___f_1181_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___lam__4___boxed), 4, 2);
lean_closure_set(v___f_1181_, 0, v_f_1178_);
lean_closure_set(v___f_1181_, 1, v___f_1180_);
v___x_1182_ = l_Lasm_JS_Function_ofFn(v___f_1181_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1184_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1182_, 1);
v___x_1184_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_a_1185_);
lean_dec_ref_known(v___x_1184_, 1);
v___x_1186_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1));
v___x_1187_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1185_, v___x_1186_);
if (lean_obj_tag(v___x_1187_) == 0)
{
lean_object* v_a_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___y_1195_; uint8_t v___x_1222_; 
v_a_1188_ = lean_ctor_get(v___x_1187_, 0);
lean_inc(v_a_1188_);
lean_dec_ref_known(v___x_1187_, 1);
v___x_1189_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2));
v___x_1190_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1183_);
v___x_1191_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1191_, 0, v_a_1183_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4));
v___x_1193_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5));
v___x_1222_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; 
v___x_1223_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9);
v___y_1195_ = v___x_1223_;
goto v___jp_1194_;
}
else
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11);
v___y_1195_ = v___x_1224_;
goto v___jp_1194_;
}
v___jp_1194_:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
lean_inc(v___y_1195_);
v___x_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1193_);
lean_ctor_set(v___x_1196_, 1, v___y_1195_);
v___x_1197_ = lean_box(0);
v___x_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1196_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
v___x_1199_ = l_Lasm_JS_obj(v___x_1198_);
v___x_1200_ = lean_unsigned_to_nat(3u);
v___x_1201_ = lean_mk_empty_array_with_capacity(v___x_1200_);
v___x_1202_ = lean_array_push(v___x_1201_, v___x_1191_);
v___x_1203_ = lean_array_push(v___x_1202_, v___x_1192_);
v___x_1204_ = lean_array_push(v___x_1203_, v___x_1199_);
v___x_1205_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1188_, v___x_1189_, v___x_1204_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1212_ == 0)
{
lean_object* v_unused_1213_; 
v_unused_1213_ = lean_ctor_get(v___x_1205_, 0);
lean_dec(v_unused_1213_);
v___x_1207_ = v___x_1205_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_dec(v___x_1205_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v_a_1183_);
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1183_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
lean_dec(v_a_1183_);
v_a_1214_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1205_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1205_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_a_1183_);
v_a_1225_ = lean_ctor_get(v___x_1187_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1187_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1187_);
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
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec(v_a_1183_);
v_a_1233_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1184_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1184_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
v_a_1241_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1182_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1182_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
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
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___boxed(lean_object* v_f_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn(v_f_1249_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___lam__0(lean_object* v_f_1252_, lean_object* v_args_1253_){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = lean_unsigned_to_nat(0u);
v___x_1256_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn_spec__0(v_args_1253_, v___x_1255_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v_a_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_a_1257_);
lean_dec_ref_known(v___x_1256_, 1);
v___x_1258_ = lean_unsigned_to_nat(1u);
v___x_1259_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1253_, v___x_1258_);
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_a_1260_);
lean_dec_ref(v___x_1259_);
v___x_1261_ = lean_unsigned_to_nat(2u);
v___x_1262_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0(v_args_1253_, v___x_1261_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; lean_object* v___x_1264_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
lean_inc(v_a_1263_);
lean_dec_ref_known(v___x_1262_, 1);
v___x_1264_ = lean_apply_4(v_f_1252_, v_a_1257_, v_a_1260_, v_a_1263_, lean_box(0));
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1272_; 
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1272_ == 0)
{
lean_object* v_unused_1273_; 
v_unused_1273_ = lean_ctor_get(v___x_1264_, 0);
lean_dec(v_unused_1273_);
v___x_1266_ = v___x_1264_;
v_isShared_1267_ = v_isSharedCheck_1272_;
goto v_resetjp_1265_;
}
else
{
lean_dec(v___x_1264_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1272_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; lean_object* v___x_1270_; 
v___x_1268_ = lean_box(0);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1268_);
v___x_1270_ = v___x_1266_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
else
{
lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1281_; 
v_a_1274_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1276_ = v___x_1264_;
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_dec(v___x_1264_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1279_; 
if (v_isShared_1277_ == 0)
{
v___x_1279_ = v___x_1276_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_a_1274_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
return v___x_1279_;
}
}
}
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
lean_dec(v_a_1260_);
lean_dec(v_a_1257_);
lean_dec_ref(v_f_1252_);
v_a_1282_ = lean_ctor_get(v___x_1262_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1262_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1262_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
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
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1297_; 
lean_dec_ref(v_f_1252_);
v_a_1290_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1297_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1292_ = v___x_1256_;
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1256_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1297_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v_a_1290_);
v___x_1295_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
return v___x_1295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_1298_, lean_object* v_args_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___lam__0(v_f_1298_, v_args_1299_);
lean_dec_ref(v_args_1299_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn(lean_object* v_f_1302_){
_start:
{
lean_object* v___f_1304_; lean_object* v___x_1305_; 
v___f_1304_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1304_, 0, v_f_1302_);
v___x_1305_ = l_Lasm_JS_Function_ofSyncFn(v___f_1304_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1307_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_a_1306_);
lean_dec_ref_known(v___x_1305_, 1);
v___x_1307_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1307_, 1);
v___x_1309_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__1));
v___x_1310_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1308_, v___x_1309_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___y_1318_; uint8_t v___x_1345_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__2));
v___x_1313_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1306_);
v___x_1314_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1314_, 0, v_a_1306_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__4));
v___x_1316_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__5));
v___x_1345_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__8);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__9);
v___y_1318_ = v___x_1346_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1347_; 
v___x_1347_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___closed__11);
v___y_1318_ = v___x_1347_;
goto v___jp_1317_;
}
v___jp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_inc(v___y_1318_);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1316_);
lean_ctor_set(v___x_1319_, 1, v___y_1318_);
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = l_Lasm_JS_obj(v___x_1321_);
v___x_1323_ = lean_unsigned_to_nat(3u);
v___x_1324_ = lean_mk_empty_array_with_capacity(v___x_1323_);
v___x_1325_ = lean_array_push(v___x_1324_, v___x_1314_);
v___x_1326_ = lean_array_push(v___x_1325_, v___x_1315_);
v___x_1327_ = lean_array_push(v___x_1326_, v___x_1322_);
v___x_1328_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1311_, v___x_1312_, v___x_1327_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1335_ == 0)
{
lean_object* v_unused_1336_; 
v_unused_1336_ = lean_ctor_get(v___x_1328_, 0);
lean_dec(v_unused_1336_);
v___x_1330_ = v___x_1328_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_dec(v___x_1328_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v_a_1306_);
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1306_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
lean_dec(v_a_1306_);
v_a_1337_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1328_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1328_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
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
return v___x_1342_;
}
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec(v_a_1306_);
v_a_1348_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1310_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1310_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
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
return v___x_1353_;
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec(v_a_1306_);
v_a_1356_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1307_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1307_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
v_a_1364_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1305_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1305_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___boxed(lean_object* v_f_1372_, lean_object* v_a_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn(v_f_1372_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0(lean_object* v___f_1378_, lean_object* v___f_1379_, lean_object* v___f_1380_, lean_object* v_d_1381_){
_start:
{
lean_object* v_fetch_1382_; lean_object* v_scheduled_1383_; lean_object* v_queue_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v_fetch_1382_ = lean_ctor_get(v_d_1381_, 0);
lean_inc(v_fetch_1382_);
v_scheduled_1383_ = lean_ctor_get(v_d_1381_, 1);
lean_inc(v_scheduled_1383_);
v_queue_1384_ = lean_ctor_get(v_d_1381_, 2);
lean_inc(v_queue_1384_);
lean_dec_ref(v_d_1381_);
v___x_1385_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__0));
v___x_1386_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1378_, v_fetch_1382_);
v___x_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1385_);
lean_ctor_set(v___x_1387_, 1, v___x_1386_);
v___x_1388_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__1));
v___x_1389_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1379_, v_scheduled_1383_);
v___x_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1388_);
lean_ctor_set(v___x_1390_, 1, v___x_1389_);
v___x_1391_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__2));
v___x_1392_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1380_, v_queue_1384_);
v___x_1393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1391_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
v___x_1394_ = lean_unsigned_to_nat(3u);
v___x_1395_ = lean_mk_empty_array_with_capacity(v___x_1394_);
v___x_1396_ = lean_array_push(v___x_1395_, v___x_1387_);
v___x_1397_ = lean_array_push(v___x_1396_, v___x_1390_);
v___x_1398_ = lean_array_push(v___x_1397_, v___x_1393_);
v___x_1399_ = l_Lasm_JS_Web_Support_fields(v___x_1398_);
lean_dec_ref(v___x_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props(lean_object* v_self_1404_){
_start:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1406_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_props___closed__0));
v___x_1407_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(v_self_1404_, v___x_1406_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props___boxed(lean_object* v_self_1408_, lean_object* v_a_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Lasm_JS_Cloudflare_ExecutionContext_props(v_self_1408_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(lean_object* v_context_1412_, lean_object* v_d_1413_){
_start:
{
lean_object* v___y_1419_; lean_object* v___y_1420_; 
switch(lean_obj_tag(v_d_1413_))
{
case 1:
{
goto v___jp_1415_;
}
case 0:
{
goto v___jp_1415_;
}
default: 
{
if (lean_obj_tag(v_d_1413_) == 9)
{
lean_object* v_value_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v_value_1424_ = lean_ctor_get(v_d_1413_, 0);
lean_inc(v_value_1424_);
lean_dec_ref_known(v_d_1413_, 2);
v___x_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1425_, 0, v_value_1424_);
v___x_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
return v___x_1426_;
}
else
{
lean_object* v___x_1427_; lean_object* v_received_1429_; 
v___x_1427_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
if (lean_obj_tag(v_d_1413_) == 9)
{
lean_object* v_value_1443_; lean_object* v_description_1444_; uint8_t v___x_1445_; 
v_value_1443_ = lean_ctor_get(v_d_1413_, 0);
v_description_1444_ = lean_ctor_get(v_d_1413_, 1);
v___x_1445_ = lean_string_dec_eq(v_description_1444_, v___x_1427_);
if (v___x_1445_ == 0)
{
goto v___jp_1441_;
}
else
{
uint32_t v___x_1446_; uint64_t v___x_1447_; lean_object* v___x_1448_; uint32_t v___x_1449_; lean_object* v___x_1450_; 
lean_inc_n(v_value_1443_, 2);
lean_dec_ref_known(v_d_1413_, 2);
v___x_1446_ = 206;
v___x_1447_ = 0ULL;
v___x_1448_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1448_, 0, v_value_1443_);
lean_ctor_set(v___x_1448_, 1, v___x_1427_);
v___x_1449_ = lasm_js_value_handle(v_value_1443_);
lean_dec(v_value_1443_);
v___x_1450_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1446_, v___x_1447_, v___x_1448_, v___x_1449_);
lean_dec_ref_known(v___x_1448_, 2);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; uint8_t v___x_1452_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
lean_dec_ref_known(v___x_1450_, 1);
v___x_1452_ = lean_string_validate_utf8(v_a_1451_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1453_; lean_object* v___x_1454_; 
lean_dec(v_a_1451_);
v___x_1453_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9);
v___x_1454_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1453_);
v_received_1429_ = v___x_1454_;
goto v___jp_1428_;
}
else
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_string_from_utf8_unchecked(v_a_1451_);
v_received_1429_ = v___x_1455_;
goto v___jp_1428_;
}
}
else
{
lean_object* v___x_1456_; 
lean_dec_ref_known(v___x_1450_, 1);
v___x_1456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__10));
v_received_1429_ = v___x_1456_;
goto v___jp_1428_;
}
}
}
else
{
goto v___jp_1441_;
}
v___jp_1428_:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; uint8_t v___x_1439_; 
v___x_1430_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__0));
v___x_1431_ = lean_string_append(v___x_1430_, v_context_1412_);
v___x_1432_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__1));
v___x_1433_ = lean_string_append(v___x_1431_, v___x_1432_);
v___x_1434_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0));
v___x_1435_ = lean_string_append(v___x_1433_, v___x_1434_);
v___x_1436_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__2));
v___x_1437_ = lean_string_append(v___x_1435_, v___x_1436_);
v___x_1438_ = lean_string_append(v___x_1437_, v_received_1429_);
lean_dec_ref(v_received_1429_);
v___x_1439_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; 
v___x_1440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5));
v___y_1419_ = v___x_1438_;
v___y_1420_ = v___x_1440_;
goto v___jp_1418_;
}
else
{
v___y_1419_ = v___x_1438_;
v___y_1420_ = v___x_1427_;
goto v___jp_1418_;
}
}
v___jp_1441_:
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Lasm_JS_Data_describe(v_d_1413_);
v_received_1429_ = v___x_1442_;
goto v___jp_1428_;
}
}
}
}
v___jp_1415_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = lean_box(0);
v___x_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
return v___x_1417_;
}
v___jp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1421_ = lean_string_append(v___y_1419_, v___y_1420_);
v___x_1422_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
v___x_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
return v___x_1423_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1457_, lean_object* v_d_1458_, lean_object* v_a_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(v_context_1457_, v_d_1458_);
lean_dec_ref(v_context_1457_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(lean_object* v_context_1461_, lean_object* v_bytes_1462_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1462_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1466_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(v_context_1461_, v_a_1465_);
return v___x_1466_;
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
v_a_1467_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___x_1464_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1464_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0___boxed(lean_object* v_context_1475_, lean_object* v_bytes_1476_, lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(v_context_1475_, v_bytes_1476_);
lean_dec_ref(v_bytes_1476_);
lean_dec_ref(v_context_1475_);
return v_res_1478_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1479_; uint64_t v___x_1480_; 
v___x_1479_ = 0;
v___x_1480_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1479_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(lean_object* v_o_1482_, lean_object* v_key_1483_){
_start:
{
lean_object* v_k_1485_; lean_object* v___x_1486_; 
v_k_1485_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1485_, 0, v_key_1483_);
v___x_1486_ = l_Lasm_JS_Wire_encodeIO(v_k_1485_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; uint32_t v___x_1488_; uint32_t v___x_1489_; uint64_t v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v___x_1486_, 1);
v___x_1488_ = 203;
v___x_1489_ = lasm_js_value_handle(v_o_1482_);
v___x_1490_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0);
v___x_1491_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_1492_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1492_, 0, v_o_1482_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
v___x_1493_ = lean_unsigned_to_nat(2u);
v___x_1494_ = lean_mk_empty_array_with_capacity(v___x_1493_);
lean_inc_ref(v_k_1485_);
v___x_1495_ = lean_array_push(v___x_1494_, v_k_1485_);
v___x_1496_ = lean_array_push(v___x_1495_, v___x_1492_);
v___x_1497_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
v___x_1498_ = lasm_js_call(v___x_1488_, v___x_1489_, v___x_1490_, v_a_1487_, v___x_1497_);
lean_dec_ref_known(v___x_1497_, 1);
lean_dec(v_a_1487_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__1));
v___x_1501_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1485_);
v___x_1502_ = lean_string_append(v___x_1500_, v___x_1501_);
lean_dec_ref(v___x_1501_);
v___x_1503_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(v___x_1502_, v_a_1499_);
lean_dec(v_a_1499_);
lean_dec_ref(v___x_1502_);
return v___x_1503_;
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
lean_dec_ref_known(v_k_1485_, 1);
v_a_1504_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1498_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1498_);
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
else
{
lean_object* v_a_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1519_; 
lean_dec_ref_known(v_k_1485_, 1);
lean_dec(v_o_1482_);
v_a_1512_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1514_ = v___x_1486_;
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_a_1512_);
lean_dec(v___x_1486_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v___x_1517_; 
if (v_isShared_1515_ == 0)
{
v___x_1517_ = v___x_1514_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_a_1512_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___boxed(lean_object* v_o_1520_, lean_object* v_key_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(v_o_1520_, v_key_1521_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache(lean_object* v_self_1525_){
_start:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_cache___closed__0));
v___x_1528_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(v_self_1525_, v___x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache___boxed(lean_object* v_self_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lasm_JS_Cloudflare_ExecutionContext_cache(v_self_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(lean_object* v_self_1533_, lean_object* v_promise_1534_){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1536_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___closed__0));
v___x_1537_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_1538_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1538_, 0, v_promise_1534_);
lean_ctor_set(v___x_1538_, 1, v___x_1537_);
v___x_1539_ = lean_unsigned_to_nat(1u);
v___x_1540_ = lean_mk_empty_array_with_capacity(v___x_1539_);
v___x_1541_ = lean_array_push(v___x_1540_, v___x_1538_);
v___x_1542_ = l_Lasm_JS_Web_Support_args(v___x_1541_);
v___x_1543_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1533_, v___x_1536_, v___x_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___boxed(lean_object* v_self_1544_, lean_object* v_promise_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(v_self_1544_, v_promise_1545_);
return v_res_1547_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2(void){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__1));
v___x_1552_ = l_Lasm_JS_Web_Support_args(v___x_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(lean_object* v_self_1553_){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1555_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__0));
v___x_1556_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2, &l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2_once, _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2);
v___x_1557_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1553_, v___x_1555_, v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___boxed(lean_object* v_self_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(v_self_1558_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort(lean_object* v_self_1562_, lean_object* v_reason_1563_){
_start:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1565_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_abort___closed__0));
v___x_1566_ = lean_unsigned_to_nat(1u);
v___x_1567_ = lean_mk_empty_array_with_capacity(v___x_1566_);
v___x_1568_ = lean_array_push(v___x_1567_, v_reason_1563_);
v___x_1569_ = l_Lasm_JS_Web_Support_args(v___x_1568_);
v___x_1570_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1562_, v___x_1565_, v___x_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort___boxed(lean_object* v_self_1571_, lean_object* v_reason_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lasm_JS_Cloudflare_ExecutionContext_abort(v_self_1571_, v_reason_1572_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(lean_object* v___f_1575_, lean_object* v_x_1576_){
_start:
{
if (lean_obj_tag(v_x_1576_) == 0)
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1586_; 
lean_dec_ref(v___f_1575_);
v_a_1578_ = lean_ctor_get(v_x_1576_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1580_ = v_x_1576_;
v_isShared_1581_ = v_isSharedCheck_1586_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v_x_1576_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1586_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; 
v___x_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1583_);
return v___x_1584_;
}
}
}
else
{
lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1598_; 
v_isSharedCheck_1598_ = !lean_is_exclusive(v_x_1576_);
if (v_isSharedCheck_1598_ == 0)
{
lean_object* v_unused_1599_; 
v_unused_1599_ = lean_ctor_get(v_x_1576_, 0);
lean_dec(v_unused_1599_);
v___x_1588_ = v_x_1576_;
v_isShared_1589_ = v_isSharedCheck_1598_;
goto v_resetjp_1587_;
}
else
{
lean_dec(v_x_1576_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1598_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1590_; uint8_t v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___x_1590_ = lean_unsigned_to_nat(0u);
v___x_1591_ = 0;
v___x_1592_ = lean_io_promise_new();
if (v_isShared_1589_ == 0)
{
lean_ctor_set(v___x_1588_, 0, v___x_1592_);
v___x_1594_ = v___x_1588_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
v___x_1596_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1590_, v___x_1591_, v___x_1595_, v___f_1575_);
return v___x_1596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed(lean_object* v___f_1600_, lean_object* v_x_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(v___f_1600_, v_x_1601_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(lean_object* v_failurePrefix_1604_, lean_object* v_x_1605_){
_start:
{
if (lean_obj_tag(v_x_1605_) == 0)
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1618_; 
v_a_1607_ = lean_ctor_get(v_x_1605_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v_x_1605_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1609_ = v_x_1605_;
v_isShared_1610_ = v_isSharedCheck_1618_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v_x_1605_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1618_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1615_; 
v___x_1611_ = lean_io_error_to_string(v_a_1607_);
v___x_1612_ = lean_string_append(v_failurePrefix_1604_, v___x_1611_);
lean_dec_ref(v___x_1611_);
v___x_1613_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
if (v_isShared_1610_ == 0)
{
lean_ctor_set(v___x_1609_, 0, v___x_1613_);
v___x_1615_ = v___x_1609_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1613_);
v___x_1615_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
lean_object* v___x_1616_; 
v___x_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
return v___x_1616_;
}
}
}
else
{
lean_object* v___x_1619_; 
lean_dec_ref(v_failurePrefix_1604_);
v___x_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1619_, 0, v_x_1605_);
return v___x_1619_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed(lean_object* v_failurePrefix_1620_, lean_object* v_x_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(v_failurePrefix_1620_, v_x_1621_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(lean_object* v___f_1624_, lean_object* v_bytes_1625_){
_start:
{
lean_object* v___x_1627_; uint8_t v___x_1628_; lean_object* v_val_1630_; lean_object* v___x_1633_; 
v___x_1627_ = lean_unsigned_to_nat(0u);
v___x_1628_ = 0;
v___x_1633_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1625_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v___x_1633_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1633_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
lean_ctor_set_tag(v___x_1636_, 1);
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1634_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
v_val_1630_ = v___x_1639_;
goto v___jp_1629_;
}
}
}
else
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
v_a_1642_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1633_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1633_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 0);
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
v_val_1630_ = v___x_1647_;
goto v___jp_1629_;
}
}
}
v___jp_1629_:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1631_, 0, v_val_1630_);
v___x_1632_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1627_, v___x_1628_, v___x_1631_, v___f_1624_);
return v___x_1632_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed(lean_object* v___f_1650_, lean_object* v_bytes_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(v___f_1650_, v_bytes_1651_);
lean_dec_ref(v_bytes_1651_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(lean_object* v___f_1654_, lean_object* v_a_1655_, uint32_t v_op_1656_, uint64_t v_flags_1657_, lean_object* v_payload_1658_, lean_object* v_x_1659_){
_start:
{
if (lean_obj_tag(v_x_1659_) == 0)
{
lean_object* v___x_1661_; 
lean_dec_ref(v___f_1654_);
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v_x_1659_);
return v___x_1661_;
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1682_; 
v_a_1662_ = lean_ctor_get(v_x_1659_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v_x_1659_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1664_ = v_x_1659_;
v_isShared_1665_ = v_isSharedCheck_1682_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v_x_1659_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1682_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
uint32_t v___x_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; lean_object* v_val_1670_; lean_object* v___x_1673_; 
v___x_1666_ = 0;
v___x_1667_ = lean_unsigned_to_nat(0u);
v___x_1668_ = 0;
v___x_1673_ = lasm_js_call_into(v_a_1655_, v_op_1656_, v___x_1666_, v_flags_1657_, v_a_1662_, v_payload_1658_);
lean_dec(v_a_1662_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___x_1676_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1673_, 1);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 0, v_a_1674_);
v___x_1676_ = v___x_1664_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1674_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
v_val_1670_ = v___x_1676_;
goto v___jp_1669_;
}
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1680_; 
v_a_1678_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1678_);
lean_dec_ref_known(v___x_1673_, 1);
if (v_isShared_1665_ == 0)
{
lean_ctor_set_tag(v___x_1664_, 0);
lean_ctor_set(v___x_1664_, 0, v_a_1678_);
v___x_1680_ = v___x_1664_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1678_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
v_val_1670_ = v___x_1680_;
goto v___jp_1669_;
}
}
v___jp_1669_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1671_, 0, v_val_1670_);
v___x_1672_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1667_, v___x_1668_, v___x_1671_, v___f_1654_);
return v___x_1672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed(lean_object* v___f_1683_, lean_object* v_a_1684_, lean_object* v_op_1685_, lean_object* v_flags_1686_, lean_object* v_payload_1687_, lean_object* v_x_1688_, lean_object* v___y_1689_){
_start:
{
uint32_t v_op_boxed_1690_; uint64_t v_flags_boxed_1691_; lean_object* v_res_1692_; 
v_op_boxed_1690_ = lean_unbox_uint32(v_op_1685_);
lean_dec(v_op_1685_);
v_flags_boxed_1691_ = lean_unbox_uint64(v_flags_1686_);
lean_dec_ref(v_flags_1686_);
v_res_1692_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(v___f_1683_, v_a_1684_, v_op_boxed_1690_, v_flags_boxed_1691_, v_payload_1687_, v_x_1688_);
lean_dec(v_payload_1687_);
lean_dec(v_a_1684_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(lean_object* v___x_1693_, uint8_t v___x_1694_, lean_object* v___f_1695_, lean_object* v_a_1696_, uint32_t v_op_1697_, uint64_t v_flags_1698_, lean_object* v_payload_1699_, lean_object* v_x_1700_){
_start:
{
lean_object* v_val_1703_; 
if (lean_obj_tag(v_x_1700_) == 0)
{
lean_object* v___x_1706_; 
lean_dec_ref(v___f_1695_);
lean_dec(v___x_1693_);
v___x_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1706_, 0, v_x_1700_);
return v___x_1706_;
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1721_; 
v_a_1707_ = lean_ctor_get(v_x_1700_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_x_1700_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1709_ = v_x_1700_;
v_isShared_1710_ = v_isSharedCheck_1721_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v_x_1700_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1721_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
uint32_t v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = 0;
v___x_1712_ = lasm_js_call_into(v_a_1696_, v_op_1697_, v___x_1711_, v_flags_1698_, v_a_1707_, v_payload_1699_);
lean_dec(v_a_1707_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_a_1713_; lean_object* v___x_1715_; 
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_a_1713_);
lean_dec_ref_known(v___x_1712_, 1);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v_a_1713_);
v___x_1715_ = v___x_1709_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1713_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
v_val_1703_ = v___x_1715_;
goto v___jp_1702_;
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; 
v_a_1717_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_a_1717_);
lean_dec_ref_known(v___x_1712_, 1);
if (v_isShared_1710_ == 0)
{
lean_ctor_set_tag(v___x_1709_, 0);
lean_ctor_set(v___x_1709_, 0, v_a_1717_);
v___x_1719_ = v___x_1709_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1717_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
v_val_1703_ = v___x_1719_;
goto v___jp_1702_;
}
}
}
}
v___jp_1702_:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1704_, 0, v_val_1703_);
v___x_1705_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1693_, v___x_1694_, v___x_1704_, v___f_1695_);
return v___x_1705_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed(lean_object* v___x_1722_, lean_object* v___x_1723_, lean_object* v___f_1724_, lean_object* v_a_1725_, lean_object* v_op_1726_, lean_object* v_flags_1727_, lean_object* v_payload_1728_, lean_object* v_x_1729_, lean_object* v___y_1730_){
_start:
{
uint8_t v___x_2003__boxed_1731_; uint32_t v_op_boxed_1732_; uint64_t v_flags_boxed_1733_; lean_object* v_res_1734_; 
v___x_2003__boxed_1731_ = lean_unbox(v___x_1723_);
v_op_boxed_1732_ = lean_unbox_uint32(v_op_1726_);
lean_dec(v_op_1726_);
v_flags_boxed_1733_ = lean_unbox_uint64(v_flags_1727_);
lean_dec_ref(v_flags_1727_);
v_res_1734_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(v___x_1722_, v___x_2003__boxed_1731_, v___f_1724_, v_a_1725_, v_op_boxed_1732_, v_flags_boxed_1733_, v_payload_1728_, v_x_1729_);
lean_dec(v_payload_1728_);
lean_dec(v_a_1725_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(lean_object* v_a_1735_, lean_object* v_x_1736_){
_start:
{
if (lean_obj_tag(v_x_1736_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1746_; 
v_a_1738_ = lean_ctor_get(v_x_1736_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v_x_1736_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1740_ = v_x_1736_;
v_isShared_1741_ = v_isSharedCheck_1746_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v_x_1736_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1746_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
return v___x_1744_;
}
}
}
else
{
lean_object* v___x_1747_; 
lean_dec_ref_known(v_x_1736_, 1);
v___x_1747_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1735_);
return v___x_1747_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed(lean_object* v_a_1748_, lean_object* v_x_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(v_a_1748_, v_x_1749_);
lean_dec(v_a_1748_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(lean_object* v_failurePrefix_1752_, uint32_t v_op_1753_, uint64_t v_flags_1754_, lean_object* v_payload_1755_, lean_object* v___f_1756_, lean_object* v___f_1757_, lean_object* v___f_1758_, lean_object* v_x_1759_){
_start:
{
if (lean_obj_tag(v_x_1759_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1769_; 
lean_dec_ref(v___f_1758_);
lean_dec_ref(v___f_1757_);
lean_dec_ref(v___f_1756_);
lean_dec(v_payload_1755_);
v_a_1761_ = lean_ctor_get(v_x_1759_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1763_ = v_x_1759_;
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v_x_1759_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
return v___x_1767_;
}
}
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1816_; 
v_a_1770_ = lean_ctor_get(v_x_1759_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1772_ = v_x_1759_;
v_isShared_1773_ = v_isSharedCheck_1816_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v_x_1759_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1816_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1774_ = lean_string_utf8_byte_size(v_failurePrefix_1752_);
v___x_1775_ = lean_unsigned_to_nat(0u);
v___x_1776_ = lean_nat_dec_eq(v___x_1774_, v___x_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___f_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___f_1781_; lean_object* v_val_1783_; lean_object* v___x_1788_; 
lean_dec_ref(v___f_1758_);
lean_inc(v_a_1770_);
v___f_1777_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1777_, 0, v_a_1770_);
v___x_1778_ = lean_box(v___x_1776_);
v___x_1779_ = lean_box_uint32(v_op_1753_);
v___x_1780_ = lean_box_uint64(v_flags_1754_);
lean_inc(v_payload_1755_);
v___f_1781_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1781_, 0, v___x_1775_);
lean_closure_set(v___f_1781_, 1, v___x_1778_);
lean_closure_set(v___f_1781_, 2, v___f_1777_);
lean_closure_set(v___f_1781_, 3, v_a_1770_);
lean_closure_set(v___f_1781_, 4, v___x_1779_);
lean_closure_set(v___f_1781_, 5, v___x_1780_);
lean_closure_set(v___f_1781_, 6, v_payload_1755_);
v___x_1788_ = l_Lasm_JS_Wire_encodeIO(v_payload_1755_);
lean_dec(v_payload_1755_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1791_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1788_, 1);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v_a_1789_);
v___x_1791_ = v___x_1772_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_a_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
v_val_1783_ = v___x_1791_;
goto v___jp_1782_;
}
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; 
v_a_1793_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1788_, 1);
if (v_isShared_1773_ == 0)
{
lean_ctor_set_tag(v___x_1772_, 0);
lean_ctor_set(v___x_1772_, 0, v_a_1793_);
v___x_1795_ = v___x_1772_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
v_val_1783_ = v___x_1795_;
goto v___jp_1782_;
}
}
v___jp_1782_:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1784_, 0, v_val_1783_);
v___x_1785_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1775_, v___x_1776_, v___x_1784_, v___f_1781_);
v___x_1786_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1775_, v___x_1776_, v___x_1785_, v___f_1756_);
v___x_1787_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1775_, v___x_1776_, v___x_1786_, v___f_1757_);
return v___x_1787_;
}
}
else
{
lean_object* v___f_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___f_1800_; uint8_t v___x_1801_; lean_object* v_val_1803_; lean_object* v___x_1807_; 
lean_dec_ref(v___f_1757_);
lean_dec_ref(v___f_1756_);
lean_inc(v_a_1770_);
v___f_1797_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1797_, 0, v_a_1770_);
v___x_1798_ = lean_box_uint32(v_op_1753_);
v___x_1799_ = lean_box_uint64(v_flags_1754_);
lean_inc(v_payload_1755_);
v___f_1800_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1800_, 0, v___f_1797_);
lean_closure_set(v___f_1800_, 1, v_a_1770_);
lean_closure_set(v___f_1800_, 2, v___x_1798_);
lean_closure_set(v___f_1800_, 3, v___x_1799_);
lean_closure_set(v___f_1800_, 4, v_payload_1755_);
v___x_1801_ = 0;
v___x_1807_ = l_Lasm_JS_Wire_encodeIO(v_payload_1755_);
lean_dec(v_payload_1755_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v___x_1810_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v___x_1807_, 1);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v_a_1808_);
v___x_1810_ = v___x_1772_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1808_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
v_val_1803_ = v___x_1810_;
goto v___jp_1802_;
}
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; 
v_a_1812_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_a_1812_);
lean_dec_ref_known(v___x_1807_, 1);
if (v_isShared_1773_ == 0)
{
lean_ctor_set_tag(v___x_1772_, 0);
lean_ctor_set(v___x_1772_, 0, v_a_1812_);
v___x_1814_ = v___x_1772_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1812_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
v_val_1803_ = v___x_1814_;
goto v___jp_1802_;
}
}
v___jp_1802_:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1804_, 0, v_val_1803_);
v___x_1805_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1775_, v___x_1801_, v___x_1804_, v___f_1800_);
v___x_1806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1775_, v___x_1801_, v___x_1805_, v___f_1758_);
return v___x_1806_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed(lean_object* v_failurePrefix_1817_, lean_object* v_op_1818_, lean_object* v_flags_1819_, lean_object* v_payload_1820_, lean_object* v___f_1821_, lean_object* v___f_1822_, lean_object* v___f_1823_, lean_object* v_x_1824_, lean_object* v___y_1825_){
_start:
{
uint32_t v_op_boxed_1826_; uint64_t v_flags_boxed_1827_; lean_object* v_res_1828_; 
v_op_boxed_1826_ = lean_unbox_uint32(v_op_1818_);
lean_dec(v_op_1818_);
v_flags_boxed_1827_ = lean_unbox_uint64(v_flags_1819_);
lean_dec_ref(v_flags_1819_);
v_res_1828_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(v_failurePrefix_1817_, v_op_boxed_1826_, v_flags_boxed_1827_, v_payload_1820_, v___f_1821_, v___f_1822_, v___f_1823_, v_x_1824_);
lean_dec_ref(v_failurePrefix_1817_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(lean_object* v___f_1829_, lean_object* v_x_1830_){
_start:
{
if (lean_obj_tag(v_x_1830_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1840_; 
lean_dec_ref(v___f_1829_);
v_a_1832_ = lean_ctor_get(v_x_1830_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v_x_1830_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1834_ = v_x_1830_;
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v_x_1830_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
return v___x_1838_;
}
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1842_; 
v_a_1841_ = lean_ctor_get(v_x_1830_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v_x_1830_, 1);
v___x_1842_ = lean_apply_2(v___f_1829_, v_a_1841_, lean_box(0));
return v___x_1842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed(lean_object* v___f_1843_, lean_object* v_x_1844_, lean_object* v___y_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(v___f_1843_, v_x_1844_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_1854_, lean_object* v_key_1855_){
_start:
{
if (lean_obj_tag(v_d_1854_) == 8)
{
lean_object* v___x_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1884_; 
v___x_1856_ = l_Lasm_JS_Data_field(v_d_1854_, v_key_1855_);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_d_1854_);
if (v_isSharedCheck_1884_ == 0)
{
lean_object* v_unused_1885_; 
v_unused_1885_ = lean_ctor_get(v_d_1854_, 0);
lean_dec(v_unused_1885_);
v___x_1858_ = v_d_1854_;
v_isShared_1859_ = v_isSharedCheck_1884_;
goto v_resetjp_1857_;
}
else
{
lean_dec(v_d_1854_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1884_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
if (lean_obj_tag(v___x_1856_) == 2)
{
uint8_t v_b_1860_; lean_object* v___x_1861_; lean_object* v___x_1863_; 
v_b_1860_ = lean_ctor_get_uint8(v___x_1856_, 0);
lean_dec_ref_known(v___x_1856_, 0);
v___x_1861_ = lean_box(v_b_1860_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set_tag(v___x_1858_, 1);
lean_ctor_set(v___x_1858_, 0, v___x_1861_);
v___x_1863_ = v___x_1858_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1861_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
else
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; uint8_t v___x_1875_; 
v___x_1865_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1866_ = lean_string_append(v___x_1865_, v_key_1855_);
v___x_1867_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1868_ = lean_string_append(v___x_1866_, v___x_1867_);
v___x_1869_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_1870_ = lean_string_append(v___x_1868_, v___x_1869_);
v___x_1871_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1872_ = lean_string_append(v___x_1870_, v___x_1871_);
v___x_1873_ = l_Lasm_JS_Data_describe(v___x_1856_);
v___x_1874_ = lean_string_append(v___x_1872_, v___x_1873_);
lean_dec_ref(v___x_1873_);
v___x_1875_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_1875_ == 0)
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1879_; 
v___x_1876_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5));
v___x_1877_ = lean_string_append(v___x_1874_, v___x_1876_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set_tag(v___x_1858_, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1877_);
v___x_1879_ = v___x_1858_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1877_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
else
{
lean_object* v___x_1882_; 
if (v_isShared_1859_ == 0)
{
lean_ctor_set_tag(v___x_1858_, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1874_);
v___x_1882_ = v___x_1858_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v___x_1874_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
}
else
{
lean_object* v___x_1886_; 
lean_dec(v_d_1854_);
v___x_1886_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__5));
return v___x_1886_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_1887_, lean_object* v_key_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(v_d_1887_, v_key_1888_);
lean_dec_ref(v_key_1888_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object* v_d_1893_, lean_object* v_key_1894_){
_start:
{
if (lean_obj_tag(v_d_1893_) == 8)
{
lean_object* v___x_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1926_; 
v___x_1895_ = l_Lasm_JS_Data_field(v_d_1893_, v_key_1894_);
v_isSharedCheck_1926_ = !lean_is_exclusive(v_d_1893_);
if (v_isSharedCheck_1926_ == 0)
{
lean_object* v_unused_1927_; 
v_unused_1927_ = lean_ctor_get(v_d_1893_, 0);
lean_dec(v_unused_1927_);
v___x_1897_ = v_d_1893_;
v_isShared_1898_ = v_isSharedCheck_1926_;
goto v_resetjp_1896_;
}
else
{
lean_dec(v_d_1893_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1926_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
if (lean_obj_tag(v___x_1895_) == 4)
{
lean_object* v_s_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
lean_del_object(v___x_1897_);
v_s_1899_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1901_ = v___x_1895_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_s_1899_);
lean_dec(v___x_1895_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
lean_ctor_set_tag(v___x_1901_, 1);
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_s_1899_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
else
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; uint8_t v___x_1917_; 
v___x_1907_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1908_ = lean_string_append(v___x_1907_, v_key_1894_);
v___x_1909_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1910_ = lean_string_append(v___x_1908_, v___x_1909_);
v___x_1911_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0));
v___x_1912_ = lean_string_append(v___x_1910_, v___x_1911_);
v___x_1913_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1914_ = lean_string_append(v___x_1912_, v___x_1913_);
v___x_1915_ = l_Lasm_JS_Data_describe(v___x_1895_);
v___x_1916_ = lean_string_append(v___x_1914_, v___x_1915_);
lean_dec_ref(v___x_1915_);
v___x_1917_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__4);
if (v___x_1917_ == 0)
{
lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1921_; 
v___x_1918_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__5));
v___x_1919_ = lean_string_append(v___x_1916_, v___x_1918_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set_tag(v___x_1897_, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1919_);
v___x_1921_ = v___x_1897_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1919_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
else
{
lean_object* v___x_1924_; 
if (v_isShared_1898_ == 0)
{
lean_ctor_set_tag(v___x_1897_, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1916_);
v___x_1924_ = v___x_1897_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v___x_1916_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
else
{
lean_object* v___x_1928_; 
lean_dec(v_d_1893_);
v___x_1928_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1));
return v___x_1928_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object* v_d_1929_, lean_object* v_key_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_d_1929_, v_key_1930_);
lean_dec_ref(v_key_1930_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(size_t v_sz_1932_, size_t v_i_1933_, lean_object* v_bs_1934_){
_start:
{
uint8_t v___x_1935_; 
v___x_1935_ = lean_usize_dec_lt(v_i_1933_, v_sz_1932_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1936_, 0, v_bs_1934_);
return v___x_1936_;
}
else
{
lean_object* v_v_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v_v_1937_ = lean_array_uget_borrowed(v_bs_1934_, v_i_1933_);
v___x_1938_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__0));
lean_inc(v_v_1937_);
v___x_1939_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v_v_1937_, v___x_1938_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
lean_dec_ref(v_bs_1934_);
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1939_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1939_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v_a_1948_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1939_, 1);
v___x_1949_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__1));
lean_inc(v_v_1937_);
v___x_1950_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_v_1937_, v___x_1949_);
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_dec(v_a_1948_);
lean_dec_ref(v_bs_1934_);
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1950_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1950_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
else
{
lean_object* v_a_1959_; lean_object* v___x_1960_; lean_object* v_bs_x27_1961_; lean_object* v___x_1962_; double v___x_1963_; size_t v___x_1964_; size_t v___x_1965_; lean_object* v___x_1966_; 
v_a_1959_ = lean_ctor_get(v___x_1950_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1950_, 1);
v___x_1960_ = lean_unsigned_to_nat(0u);
v_bs_x27_1961_ = lean_array_uset(v_bs_1934_, v_i_1933_, v___x_1960_);
v___x_1962_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1962_, 0, v_a_1959_);
v___x_1963_ = lean_unbox_float(v_a_1948_);
lean_dec(v_a_1948_);
lean_ctor_set_float(v___x_1962_, sizeof(void*)*1, v___x_1963_);
v___x_1964_ = ((size_t)1ULL);
v___x_1965_ = lean_usize_add(v_i_1933_, v___x_1964_);
v___x_1966_ = lean_array_uset(v_bs_x27_1961_, v_i_1933_, v___x_1962_);
v_i_1933_ = v___x_1965_;
v_bs_1934_ = v___x_1966_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_sz_1968_, lean_object* v_i_1969_, lean_object* v_bs_1970_){
_start:
{
size_t v_sz_boxed_1971_; size_t v_i_boxed_1972_; lean_object* v_res_1973_; 
v_sz_boxed_1971_ = lean_unbox_usize(v_sz_1968_);
lean_dec(v_sz_1968_);
v_i_boxed_1972_ = lean_unbox_usize(v_i_1969_);
lean_dec(v_i_1969_);
v_res_1973_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_sz_boxed_1971_, v_i_boxed_1972_, v_bs_1970_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_1981_, lean_object* v_key_1982_){
_start:
{
if (lean_obj_tag(v_d_1981_) == 8)
{
lean_object* v___x_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_2027_; 
v___x_1983_ = l_Lasm_JS_Data_field(v_d_1981_, v_key_1982_);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_d_1981_);
if (v_isSharedCheck_2027_ == 0)
{
lean_object* v_unused_2028_; 
v_unused_2028_ = lean_ctor_get(v_d_1981_, 0);
lean_dec(v_unused_2028_);
v___x_1985_ = v_d_1981_;
v_isShared_1986_ = v_isSharedCheck_2027_;
goto v_resetjp_1984_;
}
else
{
lean_dec(v_d_1981_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_2027_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v_a_1988_; 
if (lean_obj_tag(v___x_1983_) == 7)
{
lean_object* v_items_2013_; size_t v_sz_2014_; size_t v___x_2015_; lean_object* v___x_2016_; 
v_items_2013_ = lean_ctor_get(v___x_1983_, 0);
lean_inc_ref(v_items_2013_);
v_sz_2014_ = lean_array_size(v_items_2013_);
v___x_2015_ = ((size_t)0ULL);
v___x_2016_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_sz_2014_, v___x_2015_, v_items_2013_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; uint8_t v___x_2021_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2017_);
lean_dec_ref_known(v___x_2016_, 1);
v___x_2018_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__3));
v___x_2019_ = lean_string_utf8_byte_size(v_a_2017_);
v___x_2020_ = lean_unsigned_to_nat(0u);
v___x_2021_ = lean_nat_dec_eq(v___x_2019_, v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2022_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__4));
v___x_2023_ = lean_string_append(v___x_2022_, v_a_2017_);
lean_dec(v_a_2017_);
v___x_2024_ = lean_string_append(v___x_2018_, v___x_2023_);
lean_dec_ref(v___x_2023_);
v_a_1988_ = v___x_2024_;
goto v___jp_1987_;
}
else
{
lean_dec(v_a_2017_);
v_a_1988_ = v___x_2018_;
goto v___jp_1987_;
}
}
else
{
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2025_; 
v_a_2025_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2025_);
lean_dec_ref_known(v___x_2016_, 1);
v_a_1988_ = v_a_2025_;
goto v___jp_1987_;
}
else
{
lean_dec_ref_known(v___x_1983_, 1);
lean_del_object(v___x_1985_);
return v___x_2016_;
}
}
}
else
{
lean_object* v___x_2026_; 
v___x_2026_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v_a_1988_ = v___x_2026_;
goto v___jp_1987_;
}
v___jp_1987_:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; 
v___x_1989_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1990_ = lean_string_append(v___x_1989_, v_key_1982_);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1992_ = lean_string_append(v___x_1990_, v___x_1991_);
v___x_1993_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__0));
v___x_1994_ = lean_string_append(v___x_1992_, v___x_1993_);
v___x_1995_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1996_ = lean_string_append(v___x_1994_, v___x_1995_);
v___x_1997_ = l_Lasm_JS_Data_describe(v___x_1983_);
v___x_1998_ = lean_string_append(v___x_1996_, v___x_1997_);
lean_dec_ref(v___x_1997_);
v___x_1999_ = lean_string_utf8_byte_size(v_a_1988_);
v___x_2000_ = lean_unsigned_to_nat(0u);
v___x_2001_ = lean_nat_dec_eq(v___x_1999_, v___x_2000_);
if (v___x_2001_ == 0)
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v___x_2002_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1));
v___x_2003_ = lean_string_append(v___x_2002_, v_a_1988_);
lean_dec_ref(v_a_1988_);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2));
v___x_2005_ = lean_string_append(v___x_2003_, v___x_2004_);
v___x_2006_ = lean_string_append(v___x_1998_, v___x_2005_);
lean_dec_ref(v___x_2005_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set_tag(v___x_1985_, 0);
lean_ctor_set(v___x_1985_, 0, v___x_2006_);
v___x_2008_ = v___x_1985_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2006_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
else
{
lean_object* v___x_2011_; 
lean_dec_ref(v_a_1988_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set_tag(v___x_1985_, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1998_);
v___x_2011_ = v___x_1985_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_1998_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
}
else
{
lean_object* v___x_2029_; 
lean_dec(v_d_1981_);
v___x_2029_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__5));
return v___x_2029_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_2030_, lean_object* v_key_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(v_d_2030_, v_key_2031_);
lean_dec_ref(v_key_2031_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(lean_object* v_context_2033_, lean_object* v_d_2034_){
_start:
{
lean_object* v___y_2037_; lean_object* v___y_2038_; lean_object* v___y_2043_; lean_object* v_received_2044_; lean_object* v___y_2063_; lean_object* v_a_2066_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2090_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__0));
lean_inc(v_d_2034_);
v___x_2091_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(v_d_2034_, v___x_2090_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2092_);
lean_dec_ref_known(v___x_2091_, 1);
v_a_2066_ = v_a_2092_;
goto v___jp_2065_;
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v_a_2093_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2093_);
lean_dec_ref_known(v___x_2091_, 1);
v___x_2094_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__1));
lean_inc(v_d_2034_);
v___x_2095_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(v_d_2034_, v___x_2094_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2096_; 
lean_dec(v_a_2093_);
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
lean_inc(v_a_2096_);
lean_dec_ref_known(v___x_2095_, 1);
v_a_2066_ = v_a_2096_;
goto v___jp_2065_;
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2106_; 
lean_dec(v_d_2034_);
v_a_2097_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2099_ = v___x_2095_;
v_isShared_2100_ = v_isSharedCheck_2106_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2095_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2106_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2101_; uint8_t v___x_2102_; lean_object* v___x_2104_; 
v___x_2101_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2101_, 0, v_a_2097_);
v___x_2102_ = lean_unbox(v_a_2093_);
lean_dec(v_a_2093_);
lean_ctor_set_uint8(v___x_2101_, sizeof(void*)*1, v___x_2102_);
if (v_isShared_2100_ == 0)
{
lean_ctor_set_tag(v___x_2099_, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2101_);
v___x_2104_ = v___x_2099_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v___x_2101_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
}
v___jp_2036_:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2039_ = lean_string_append(v___y_2037_, v___y_2038_);
lean_dec_ref(v___y_2038_);
v___x_2040_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2039_);
v___x_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
return v___x_2041_;
}
v___jp_2042_:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; uint8_t v___x_2056_; 
v___x_2045_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__0));
v___x_2046_ = lean_string_append(v___x_2045_, v_context_2033_);
v___x_2047_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__1));
v___x_2048_ = lean_string_append(v___x_2046_, v___x_2047_);
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__2));
v___x_2050_ = lean_string_append(v___x_2048_, v___x_2049_);
v___x_2051_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__2));
v___x_2052_ = lean_string_append(v___x_2050_, v___x_2051_);
v___x_2053_ = lean_string_append(v___x_2052_, v_received_2044_);
lean_dec_ref(v_received_2044_);
v___x_2054_ = lean_string_utf8_byte_size(v___y_2043_);
v___x_2055_ = lean_unsigned_to_nat(0u);
v___x_2056_ = lean_nat_dec_eq(v___x_2054_, v___x_2055_);
if (v___x_2056_ == 0)
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2057_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1));
v___x_2058_ = lean_string_append(v___x_2057_, v___y_2043_);
lean_dec_ref(v___y_2043_);
v___x_2059_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2));
v___x_2060_ = lean_string_append(v___x_2058_, v___x_2059_);
v___y_2037_ = v___x_2053_;
v___y_2038_ = v___x_2060_;
goto v___jp_2036_;
}
else
{
lean_object* v___x_2061_; 
lean_dec_ref(v___y_2043_);
v___x_2061_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___y_2037_ = v___x_2053_;
v___y_2038_ = v___x_2061_;
goto v___jp_2036_;
}
}
v___jp_2062_:
{
lean_object* v___x_2064_; 
v___x_2064_ = l_Lasm_JS_Data_describe(v_d_2034_);
v___y_2043_ = v___y_2063_;
v_received_2044_ = v___x_2064_;
goto v___jp_2042_;
}
v___jp_2065_:
{
if (lean_obj_tag(v_d_2034_) == 9)
{
lean_object* v_value_2067_; lean_object* v_description_2068_; lean_object* v___x_2069_; uint8_t v___x_2070_; 
v_value_2067_ = lean_ctor_get(v_d_2034_, 0);
v_description_2068_ = lean_ctor_get(v_d_2034_, 1);
v___x_2069_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_2070_ = lean_string_dec_eq(v_description_2068_, v___x_2069_);
if (v___x_2070_ == 0)
{
v___y_2063_ = v_a_2066_;
goto v___jp_2062_;
}
else
{
lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2087_; 
lean_inc(v_value_2067_);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_d_2034_);
if (v_isSharedCheck_2087_ == 0)
{
lean_object* v_unused_2088_; lean_object* v_unused_2089_; 
v_unused_2088_ = lean_ctor_get(v_d_2034_, 1);
lean_dec(v_unused_2088_);
v_unused_2089_ = lean_ctor_get(v_d_2034_, 0);
lean_dec(v_unused_2089_);
v___x_2072_ = v_d_2034_;
v_isShared_2073_ = v_isSharedCheck_2087_;
goto v_resetjp_2071_;
}
else
{
lean_dec(v_d_2034_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2087_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
uint32_t v___x_2074_; uint64_t v___x_2075_; lean_object* v___x_2077_; 
v___x_2074_ = 206;
v___x_2075_ = 0ULL;
lean_inc(v_value_2067_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 1, v___x_2069_);
v___x_2077_ = v___x_2072_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_value_2067_);
lean_ctor_set(v_reuseFailAlloc_2086_, 1, v___x_2069_);
v___x_2077_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
uint32_t v___x_2078_; lean_object* v___x_2079_; 
v___x_2078_ = lasm_js_value_handle(v_value_2067_);
lean_dec(v_value_2067_);
v___x_2079_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2074_, v___x_2075_, v___x_2077_, v___x_2078_);
lean_dec_ref(v___x_2077_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; uint8_t v___x_2081_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v___x_2081_ = lean_string_validate_utf8(v_a_2080_);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; lean_object* v___x_2083_; 
lean_dec(v_a_2080_);
v___x_2082_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__9);
v___x_2083_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2082_);
v___y_2043_ = v_a_2066_;
v_received_2044_ = v___x_2083_;
goto v___jp_2042_;
}
else
{
lean_object* v___x_2084_; 
v___x_2084_ = lean_string_from_utf8_unchecked(v_a_2080_);
v___y_2043_ = v_a_2066_;
v_received_2044_ = v___x_2084_;
goto v___jp_2042_;
}
}
else
{
lean_object* v___x_2085_; 
lean_dec_ref_known(v___x_2079_, 1);
v___x_2085_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn_spec__0_spec__0___closed__10));
v___y_2043_ = v_a_2066_;
v_received_2044_ = v___x_2085_;
goto v___jp_2042_;
}
}
}
}
}
else
{
v___y_2063_ = v_a_2066_;
goto v___jp_2062_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3___boxed(lean_object* v_context_2107_, lean_object* v_d_2108_, lean_object* v_a_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(v_context_2107_, v_d_2108_);
lean_dec_ref(v_context_2107_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(lean_object* v_context_2111_, lean_object* v_x_2112_){
_start:
{
lean_object* v_val_2115_; 
if (lean_obj_tag(v_x_2112_) == 0)
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2125_; 
v_a_2117_ = lean_ctor_get(v_x_2112_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v_x_2112_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2119_ = v_x_2112_;
v_isShared_2120_ = v_isSharedCheck_2125_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v_x_2112_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2125_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2122_; 
if (v_isShared_2120_ == 0)
{
v___x_2122_ = v___x_2119_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2117_);
v___x_2122_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2123_; 
v___x_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
return v___x_2123_;
}
}
}
else
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2139_; 
v_a_2126_ = lean_ctor_get(v_x_2112_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v_x_2112_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2128_ = v_x_2112_;
v_isShared_2129_ = v_isSharedCheck_2139_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v_x_2112_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2139_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2130_; 
v___x_2130_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(v_context_2111_, v_a_2126_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2133_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 0, v_a_2131_);
v___x_2133_ = v___x_2128_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
v_val_2115_ = v___x_2133_;
goto v___jp_2114_;
}
}
else
{
lean_object* v_a_2135_; lean_object* v___x_2137_; 
v_a_2135_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2130_, 1);
if (v_isShared_2129_ == 0)
{
lean_ctor_set_tag(v___x_2128_, 0);
lean_ctor_set(v___x_2128_, 0, v_a_2135_);
v___x_2137_ = v___x_2128_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2135_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
v_val_2115_ = v___x_2137_;
goto v___jp_2114_;
}
}
}
}
v___jp_2114_:
{
lean_object* v___x_2116_; 
v___x_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2116_, 0, v_val_2115_);
return v___x_2116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed(lean_object* v_context_2140_, lean_object* v_x_2141_, lean_object* v___y_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(v_context_2140_, v_x_2141_);
lean_dec_ref(v_context_2140_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(lean_object* v_context_2144_, uint32_t v_op_2145_, uint64_t v_flags_2146_, lean_object* v_payload_2147_, lean_object* v_failurePrefix_2148_){
_start:
{
lean_object* v___f_2150_; lean_object* v___f_2151_; lean_object* v___f_2152_; lean_object* v___f_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___f_2156_; lean_object* v___f_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; lean_object* v_val_2161_; lean_object* v___x_2164_; 
v___f_2150_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2150_, 0, v_context_2144_);
v___f_2151_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2151_, 0, v___f_2150_);
v___f_2152_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2152_, 0, v___f_2151_);
lean_inc_ref(v_failurePrefix_2148_);
v___f_2153_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2153_, 0, v_failurePrefix_2148_);
v___x_2154_ = lean_box_uint32(v_op_2145_);
v___x_2155_ = lean_box_uint64(v_flags_2146_);
lean_inc_ref(v___f_2152_);
v___f_2156_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2156_, 0, v_failurePrefix_2148_);
lean_closure_set(v___f_2156_, 1, v___x_2154_);
lean_closure_set(v___f_2156_, 2, v___x_2155_);
lean_closure_set(v___f_2156_, 3, v_payload_2147_);
lean_closure_set(v___f_2156_, 4, v___f_2153_);
lean_closure_set(v___f_2156_, 5, v___f_2152_);
lean_closure_set(v___f_2156_, 6, v___f_2152_);
v___f_2157_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2157_, 0, v___f_2156_);
v___x_2158_ = lean_unsigned_to_nat(0u);
v___x_2159_ = 0;
v___x_2164_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2164_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2164_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
lean_ctor_set_tag(v___x_2167_, 1);
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
v_val_2161_ = v___x_2170_;
goto v___jp_2160_;
}
}
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
v_a_2173_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2164_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2164_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
lean_ctor_set_tag(v___x_2175_, 0);
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
v_val_2161_ = v___x_2178_;
goto v___jp_2160_;
}
}
}
v___jp_2160_:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2162_, 0, v_val_2161_);
v___x_2163_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2158_, v___x_2159_, v___x_2162_, v___f_2157_);
return v___x_2163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___boxed(lean_object* v_context_2181_, lean_object* v_op_2182_, lean_object* v_flags_2183_, lean_object* v_payload_2184_, lean_object* v_failurePrefix_2185_, lean_object* v_a_2186_){
_start:
{
uint32_t v_op_boxed_2187_; uint64_t v_flags_boxed_2188_; lean_object* v_res_2189_; 
v_op_boxed_2187_ = lean_unbox_uint32(v_op_2182_);
lean_dec(v_op_2182_);
v_flags_boxed_2188_ = lean_unbox_uint64(v_flags_2183_);
lean_dec_ref(v_flags_2183_);
v_res_2189_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(v_context_2181_, v_op_boxed_2187_, v_flags_boxed_2188_, v_payload_2184_, v_failurePrefix_2185_);
return v_res_2189_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(uint8_t v_await_2190_, uint64_t v_extra_2191_){
_start:
{
uint64_t v___x_2192_; uint64_t v___y_2194_; 
v___x_2192_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0);
if (v_await_2190_ == 0)
{
uint64_t v___x_2197_; 
v___x_2197_ = 0ULL;
v___y_2194_ = v___x_2197_;
goto v___jp_2193_;
}
else
{
uint64_t v___x_2198_; 
v___x_2198_ = 2ULL;
v___y_2194_ = v___x_2198_;
goto v___jp_2193_;
}
v___jp_2193_:
{
uint64_t v___x_2195_; uint64_t v___x_2196_; 
v___x_2195_ = lean_uint64_lor(v___x_2192_, v___y_2194_);
v___x_2196_ = lean_uint64_lor(v___x_2195_, v_extra_2191_);
return v___x_2196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1___boxed(lean_object* v_await_2199_, lean_object* v_extra_2200_){
_start:
{
uint8_t v_await_boxed_2201_; uint64_t v_extra_boxed_2202_; uint64_t v_res_2203_; lean_object* v_r_2204_; 
v_await_boxed_2201_ = lean_unbox(v_await_2199_);
v_extra_boxed_2202_ = lean_unbox_uint64(v_extra_2200_);
lean_dec_ref(v_extra_2200_);
v_res_2203_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(v_await_boxed_2201_, v_extra_boxed_2202_);
v_r_2204_ = lean_box_uint64(v_res_2203_);
return v_r_2204_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1(void){
_start:
{
uint64_t v___x_2206_; uint8_t v___x_2207_; uint64_t v___x_2208_; 
v___x_2206_ = 8ULL;
v___x_2207_ = 0;
v___x_2208_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(v___x_2207_, v___x_2206_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(lean_object* v_o_2209_, lean_object* v_name_2210_, lean_object* v_args_2211_){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; uint32_t v___x_2218_; uint64_t v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2213_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_2214_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2214_, 0, v_o_2209_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
lean_inc_ref(v_name_2210_);
v___x_2215_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2215_, 0, v_name_2210_);
v___x_2216_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__0));
v___x_2217_ = lean_string_append(v___x_2216_, v_name_2210_);
lean_dec_ref(v_name_2210_);
v___x_2218_ = 205;
v___x_2219_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1);
v___x_2220_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2220_, 0, v_args_2211_);
v___x_2221_ = lean_unsigned_to_nat(3u);
v___x_2222_ = lean_mk_empty_array_with_capacity(v___x_2221_);
v___x_2223_ = lean_array_push(v___x_2222_, v___x_2214_);
v___x_2224_ = lean_array_push(v___x_2223_, v___x_2215_);
v___x_2225_ = lean_array_push(v___x_2224_, v___x_2220_);
v___x_2226_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
v___x_2227_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(v___x_2217_, v___x_2218_, v___x_2219_, v___x_2226_, v___x_2213_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___boxed(lean_object* v_o_2228_, lean_object* v_name_2229_, lean_object* v_args_2230_, lean_object* v___y_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_o_2228_, v_name_2229_, v_args_2230_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(lean_object* v_x_2233_){
_start:
{
if (lean_obj_tag(v_x_2233_) == 0)
{
lean_object* v___x_2234_; 
v___x_2234_ = lean_box(0);
return v___x_2234_;
}
else
{
lean_object* v_val_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2245_; 
v_val_2235_ = lean_ctor_get(v_x_2233_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v_x_2233_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2237_ = v_x_2233_;
v_isShared_2238_ = v_isSharedCheck_2245_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_val_2235_);
lean_dec(v_x_2233_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2245_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
size_t v_sz_2239_; size_t v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2243_; 
v_sz_2239_ = lean_array_size(v_val_2235_);
v___x_2240_ = ((size_t)0ULL);
v___x_2241_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2239_, v___x_2240_, v_val_2235_);
if (v_isShared_2238_ == 0)
{
lean_ctor_set_tag(v___x_2237_, 7);
lean_ctor_set(v___x_2237_, 0, v___x_2241_);
v___x_2243_ = v___x_2237_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v___x_2241_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge(lean_object* v_self_2247_, lean_object* v_options_2248_){
_start:
{
lean_object* v_tags_2250_; lean_object* v_pathPrefixes_2251_; lean_object* v_purgeEverything_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v_tags_2250_ = lean_ctor_get(v_options_2248_, 0);
lean_inc(v_tags_2250_);
v_pathPrefixes_2251_ = lean_ctor_get(v_options_2248_, 1);
lean_inc(v_pathPrefixes_2251_);
v_purgeEverything_2252_ = lean_ctor_get(v_options_2248_, 2);
lean_inc(v_purgeEverything_2252_);
lean_dec_ref(v_options_2248_);
v___x_2253_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheContext_purge___closed__0));
v___x_2254_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0));
v___x_2255_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_tags_2250_);
v___x_2256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2254_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1));
v___x_2258_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_pathPrefixes_2251_);
v___x_2259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2257_);
lean_ctor_set(v___x_2259_, 1, v___x_2258_);
v___x_2260_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2));
v___x_2261_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_purgeEverything_2252_);
lean_dec(v_purgeEverything_2252_);
v___x_2262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2260_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = lean_unsigned_to_nat(3u);
v___x_2264_ = lean_mk_empty_array_with_capacity(v___x_2263_);
v___x_2265_ = lean_array_push(v___x_2264_, v___x_2256_);
v___x_2266_ = lean_array_push(v___x_2265_, v___x_2259_);
v___x_2267_ = lean_array_push(v___x_2266_, v___x_2262_);
v___x_2268_ = l_Lasm_JS_Web_Support_fields(v___x_2267_);
lean_dec_ref(v___x_2267_);
v___x_2269_ = lean_unsigned_to_nat(1u);
v___x_2270_ = lean_mk_empty_array_with_capacity(v___x_2269_);
v___x_2271_ = lean_array_push(v___x_2270_, v___x_2268_);
v___x_2272_ = l_Lasm_JS_Web_Support_args(v___x_2271_);
v___x_2273_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_self_2247_, v___x_2253_, v___x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge___boxed(lean_object* v_self_2274_, lean_object* v_options_2275_, lean_object* v_a_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lasm_JS_Cloudflare_CacheContext_purge(v_self_2274_, v_options_2275_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate(lean_object* v_self_2279_, lean_object* v_options_2280_){
_start:
{
lean_object* v_tags_2282_; lean_object* v_pathPrefixes_2283_; lean_object* v_purgeEverything_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v_tags_2282_ = lean_ctor_get(v_options_2280_, 0);
lean_inc(v_tags_2282_);
v_pathPrefixes_2283_ = lean_ctor_get(v_options_2280_, 1);
lean_inc(v_pathPrefixes_2283_);
v_purgeEverything_2284_ = lean_ctor_get(v_options_2280_, 2);
lean_inc(v_purgeEverything_2284_);
lean_dec_ref(v_options_2280_);
v___x_2285_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheContext_invalidate___closed__0));
v___x_2286_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0));
v___x_2287_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_tags_2282_);
v___x_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2286_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1));
v___x_2290_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_pathPrefixes_2283_);
v___x_2291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2289_);
lean_ctor_set(v___x_2291_, 1, v___x_2290_);
v___x_2292_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2));
v___x_2293_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_purgeEverything_2284_);
lean_dec(v_purgeEverything_2284_);
v___x_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2292_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
v___x_2295_ = lean_unsigned_to_nat(3u);
v___x_2296_ = lean_mk_empty_array_with_capacity(v___x_2295_);
v___x_2297_ = lean_array_push(v___x_2296_, v___x_2288_);
v___x_2298_ = lean_array_push(v___x_2297_, v___x_2291_);
v___x_2299_ = lean_array_push(v___x_2298_, v___x_2294_);
v___x_2300_ = l_Lasm_JS_Web_Support_fields(v___x_2299_);
lean_dec_ref(v___x_2299_);
v___x_2301_ = lean_unsigned_to_nat(1u);
v___x_2302_ = lean_mk_empty_array_with_capacity(v___x_2301_);
v___x_2303_ = lean_array_push(v___x_2302_, v___x_2300_);
v___x_2304_ = l_Lasm_JS_Web_Support_args(v___x_2303_);
v___x_2305_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_self_2279_, v___x_2285_, v___x_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate___boxed(lean_object* v_self_2306_, lean_object* v_options_2307_, lean_object* v_a_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_Lasm_JS_Cloudflare_CacheContext_invalidate(v_self_2306_, v_options_2307_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(lean_object* v_self_2311_){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___closed__0));
v___x_2314_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0(v_self_2311_, v___x_2313_);
return v___x_2314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___boxed(lean_object* v_self_2315_, lean_object* v_a_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(v_self_2315_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron(lean_object* v_self_2319_){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_cron___closed__0));
v___x_2322_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(v_self_2319_, v___x_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron___boxed(lean_object* v_self_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lasm_JS_Cloudflare_ScheduledController_cron(v_self_2323_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry(lean_object* v_self_2327_){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_noRetry___closed__0));
v___x_2330_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2, &l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2_once, _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2);
v___x_2331_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_2327_, v___x_2329_, v___x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry___boxed(lean_object* v_self_2332_, lean_object* v_a_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l_Lasm_JS_Cloudflare_ScheduledController_noRetry(v_self_2332_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1(lean_object* v_module_2336_, lean_object* v_o_2337_, lean_object* v_a_2338_){
_start:
{
if (lean_obj_tag(v_a_2338_) == 0)
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
lean_dec(v_o_2337_);
v___x_2340_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1___closed__0));
v___x_2341_ = lean_string_append(v___x_2340_, v_module_2336_);
v___x_2342_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2341_);
v___x_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2342_);
return v___x_2343_;
}
else
{
lean_object* v_tail_2344_; 
v_tail_2344_ = lean_ctor_get(v_a_2338_, 1);
if (lean_obj_tag(v_tail_2344_) == 0)
{
lean_object* v_head_2345_; lean_object* v___x_2346_; 
v_head_2345_ = lean_ctor_get(v_a_2338_, 0);
lean_inc(v_head_2345_);
lean_dec_ref_known(v_a_2338_, 2);
v___x_2346_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(v_o_2337_, v_head_2345_);
return v___x_2346_;
}
else
{
lean_object* v_head_2347_; lean_object* v___x_2348_; 
lean_inc(v_tail_2344_);
v_head_2347_ = lean_ctor_get(v_a_2338_, 0);
lean_inc(v_head_2347_);
lean_dec_ref_known(v_a_2338_, 2);
v___x_2348_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_2337_, v_head_2347_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2349_);
lean_dec_ref_known(v___x_2348_, 1);
v_o_2337_ = v_a_2349_;
v_a_2338_ = v_tail_2344_;
goto _start;
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
lean_dec(v_tail_2344_);
v_a_2351_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___x_2348_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2348_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1___boxed(lean_object* v_module_2359_, lean_object* v_o_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1(v_module_2359_, v_o_2360_, v_a_2361_);
lean_dec_ref(v_module_2359_);
return v_res_2363_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_2364_; uint64_t v___x_2365_; 
v___x_2364_ = 1;
v___x_2365_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2364_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0(lean_object* v_specifier_2367_){
_start:
{
uint32_t v___x_2369_; uint32_t v___x_2370_; uint64_t v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2369_ = 201;
v___x_2370_ = 0;
v___x_2371_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__0);
v___x_2372_ = lean_string_to_utf8(v_specifier_2367_);
v___x_2373_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_2369_, v___x_2370_, v___x_2371_, v___x_2372_);
lean_dec_ref(v___x_2372_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_a_2374_);
lean_dec_ref_known(v___x_2373_, 1);
v___x_2375_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___closed__1));
v___x_2376_ = l_String_quote(v_specifier_2367_);
v___x_2377_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___x_2376_);
v___x_2378_ = lean_unsigned_to_nat(120u);
v___x_2379_ = lean_unsigned_to_nat(0u);
v___x_2380_ = l_Std_Format_pretty(v___x_2377_, v___x_2378_, v___x_2379_, v___x_2379_);
v___x_2381_ = lean_string_append(v___x_2375_, v___x_2380_);
lean_dec_ref(v___x_2380_);
v___x_2382_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2381_, v_a_2374_);
lean_dec(v_a_2374_);
lean_dec_ref(v___x_2381_);
return v___x_2382_;
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
lean_dec_ref(v_specifier_2367_);
v_a_2383_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2373_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2373_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0___boxed(lean_object* v_specifier_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0(v_specifier_2391_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0(lean_object* v_module_2394_, lean_object* v_path_2395_){
_start:
{
lean_object* v___x_2397_; 
lean_inc_ref(v_module_2394_);
v___x_2397_ = l_Lasm_JS_require___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__0(v_module_2394_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___x_2399_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc(v_a_2398_);
lean_dec_ref_known(v___x_2397_, 1);
v___x_2399_ = l_Lasm_JS_Cloudflare_Support_getExport_go___at___00Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0_spec__1(v_module_2394_, v_a_2398_, v_path_2395_);
lean_dec_ref(v_module_2394_);
return v___x_2399_;
}
else
{
lean_object* v_a_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
lean_dec(v_path_2395_);
lean_dec_ref(v_module_2394_);
v_a_2400_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2402_ = v___x_2397_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_a_2400_);
lean_dec(v___x_2397_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2400_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0___boxed(lean_object* v_module_2408_, lean_object* v_path_2409_, lean_object* v_a_2410_){
_start:
{
lean_object* v_res_2411_; 
v_res_2411_ = l_Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0(v_module_2408_, v_path_2409_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env(){
_start:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2418_ = ((lean_object*)(l_Lasm_JS_Cloudflare_env___closed__0));
v___x_2419_ = ((lean_object*)(l_Lasm_JS_Cloudflare_env___closed__2));
v___x_2420_ = l_Lasm_JS_Cloudflare_Support_getExport___at___00Lasm_JS_Cloudflare_env_spec__0(v___x_2418_, v___x_2419_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___boxed(lean_object* v_a_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Lasm_JS_Cloudflare_env();
return v_res_2422_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Queues(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Cloudflare_Workers(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_Queues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions = _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions);
l_Lasm_JS_Cloudflare_instFromJSCachePurgeError = _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError);
l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult = _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
