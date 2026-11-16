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
extern lean_object* l_Lasm_JS_instFromJSData;
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Cloudflare_Support_declared___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSValue;
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
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
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
extern lean_object* l_Lasm_JS_Web_instFromJSRequest;
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
extern lean_object* l_Lasm_JS_Cloudflare_instFromJSMessageBatch;
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Cloudflare_Support_getExport___redArg(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Object"};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "defineProperty"};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__3_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4_value;
static const lean_string_object l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__7;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__10;
static lean_once_cell_t l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandlerScheduledHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "Lasm.JS.Cloudflare.ExportedHandlerScheduledHandler"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandlerQueueHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Lasm.JS.Cloudflare.ExportedHandlerQueueHandler"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExecutionContext___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSExportedHandlerQueueHandler___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Option (Lasm.JS.Cloudflare.CacheContext)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__3_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__11_value;
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
static const lean_string_object l_Lasm_JS_Cloudflare_env___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "cloudflare:workers"};
static const lean_object* l_Lasm_JS_Cloudflare_env___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_env___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_env___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Cloudflare_env___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_env___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_env___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_env___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_env___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_env___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0(lean_object* v_x_175_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0___boxed(lean_object* v_x_197_, lean_object* v___y_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0(v_x_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1(lean_object* v_f_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v___f_203_, lean_object* v_x_204_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v___f_223_, lean_object* v_x_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1(v_f_220_, v_a_221_, v_a_222_, v___f_223_, v_x_224_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2(lean_object* v_f_227_, lean_object* v_a_228_, lean_object* v___f_229_, lean_object* v___x_230_, lean_object* v_args_231_, lean_object* v_x_232_){
_start:
{
if (lean_obj_tag(v_x_232_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_242_; 
lean_dec_ref(v___x_230_);
lean_dec_ref(v___f_229_);
lean_dec(v_a_228_);
lean_dec_ref(v_f_227_);
v_a_234_ = lean_ctor_get(v_x_232_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v_x_232_);
if (v_isSharedCheck_242_ == 0)
{
v___x_236_ = v_x_232_;
v_isShared_237_ = v_isSharedCheck_242_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v_x_232_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_242_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_241_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_264_; 
v_a_243_ = lean_ctor_get(v_x_232_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v_x_232_);
if (v_isSharedCheck_264_ == 0)
{
v___x_245_ = v_x_232_;
v_isShared_246_ = v_isSharedCheck_264_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v_x_232_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_264_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___f_247_; lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___x_250_; lean_object* v_val_252_; lean_object* v___x_255_; 
v___f_247_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_247_, 0, v_f_227_);
lean_closure_set(v___f_247_, 1, v_a_228_);
lean_closure_set(v___f_247_, 2, v_a_243_);
lean_closure_set(v___f_247_, 3, v___f_229_);
v___x_248_ = lean_unsigned_to_nat(2u);
v___x_249_ = lean_unsigned_to_nat(0u);
v___x_250_ = 0;
v___x_255_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_230_, v_args_231_, v___x_248_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_258_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_a_256_);
lean_dec_ref_known(v___x_255_, 1);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 0, v_a_256_);
v___x_258_ = v___x_245_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
v_val_252_ = v___x_258_;
goto v___jp_251_;
}
}
else
{
lean_object* v_a_260_; lean_object* v___x_262_; 
v_a_260_ = lean_ctor_get(v___x_255_, 0);
lean_inc(v_a_260_);
lean_dec_ref_known(v___x_255_, 1);
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 0);
lean_ctor_set(v___x_245_, 0, v_a_260_);
v___x_262_ = v___x_245_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
v_val_252_ = v___x_262_;
goto v___jp_251_;
}
}
v___jp_251_:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v_val_252_);
v___x_254_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_249_, v___x_250_, v___x_253_, v___f_247_);
return v___x_254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_265_, lean_object* v_a_266_, lean_object* v___f_267_, lean_object* v___x_268_, lean_object* v_args_269_, lean_object* v_x_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2(v_f_265_, v_a_266_, v___f_267_, v___x_268_, v_args_269_, v_x_270_);
lean_dec_ref(v_args_269_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3(lean_object* v___f_273_, lean_object* v_inst_274_, lean_object* v_x_275_){
_start:
{
if (lean_obj_tag(v_x_275_) == 0)
{
lean_object* v___x_277_; 
lean_dec_ref(v_inst_274_);
lean_dec_ref(v___f_273_);
v___x_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_277_, 0, v_x_275_);
return v___x_277_;
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_297_; 
v_a_278_ = lean_ctor_get(v_x_275_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v_x_275_);
if (v_isSharedCheck_297_ == 0)
{
v___x_280_ = v_x_275_;
v_isShared_281_ = v_isSharedCheck_297_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v_x_275_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_297_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_282_; uint8_t v___x_283_; lean_object* v_val_285_; lean_object* v___x_288_; 
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = 0;
v___x_288_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_274_, v_a_278_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_291_; 
v_a_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_a_289_);
lean_dec_ref_known(v___x_288_, 1);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v_a_289_);
v___x_291_ = v___x_280_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
v_val_285_ = v___x_291_;
goto v___jp_284_;
}
}
else
{
lean_object* v_a_293_; lean_object* v___x_295_; 
v_a_293_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_288_, 1);
if (v_isShared_281_ == 0)
{
lean_ctor_set_tag(v___x_280_, 0);
lean_ctor_set(v___x_280_, 0, v_a_293_);
v___x_295_ = v___x_280_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
v_val_285_ = v___x_295_;
goto v___jp_284_;
}
}
v___jp_284_:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v_val_285_);
v___x_287_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_282_, v___x_283_, v___x_286_, v___f_273_);
return v___x_287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed(lean_object* v___f_298_, lean_object* v_inst_299_, lean_object* v_x_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3(v___f_298_, v_inst_299_, v_x_300_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4(lean_object* v_f_303_, lean_object* v___f_304_, lean_object* v___x_305_, lean_object* v_args_306_, lean_object* v_inst_307_, lean_object* v___x_308_, lean_object* v_x_309_){
_start:
{
if (lean_obj_tag(v_x_309_) == 0)
{
lean_object* v_a_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_319_; 
lean_dec_ref(v___x_308_);
lean_dec_ref(v_inst_307_);
lean_dec_ref(v_args_306_);
lean_dec_ref(v___x_305_);
lean_dec_ref(v___f_304_);
lean_dec_ref(v_f_303_);
v_a_311_ = lean_ctor_get(v_x_309_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v_x_309_);
if (v_isSharedCheck_319_ == 0)
{
v___x_313_ = v_x_309_;
v_isShared_314_ = v_isSharedCheck_319_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_a_311_);
lean_dec(v_x_309_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_319_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_316_; 
if (v_isShared_314_ == 0)
{
v___x_316_ = v___x_313_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_311_);
v___x_316_ = v_reuseFailAlloc_318_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___x_317_; 
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v___x_316_);
return v___x_317_;
}
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_342_; 
v_a_320_ = lean_ctor_get(v_x_309_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v_x_309_);
if (v_isSharedCheck_342_ == 0)
{
v___x_322_ = v_x_309_;
v_isShared_323_ = v_isSharedCheck_342_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v_x_309_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_342_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___f_324_; lean_object* v___f_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v_val_330_; lean_object* v___x_333_; 
lean_inc_ref(v_args_306_);
v___f_324_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_324_, 0, v_f_303_);
lean_closure_set(v___f_324_, 1, v_a_320_);
lean_closure_set(v___f_324_, 2, v___f_304_);
lean_closure_set(v___f_324_, 3, v___x_305_);
lean_closure_set(v___f_324_, 4, v_args_306_);
v___f_325_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_325_, 0, v___f_324_);
lean_closure_set(v___f_325_, 1, v_inst_307_);
v___x_326_ = lean_unsigned_to_nat(1u);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = 0;
v___x_333_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_308_, v_args_306_, v___x_326_);
lean_dec_ref(v_args_306_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_336_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v_a_334_);
v___x_336_ = v___x_322_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
v_val_330_ = v___x_336_;
goto v___jp_329_;
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; 
v_a_338_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_338_);
lean_dec_ref_known(v___x_333_, 1);
if (v_isShared_323_ == 0)
{
lean_ctor_set_tag(v___x_322_, 0);
lean_ctor_set(v___x_322_, 0, v_a_338_);
v___x_340_ = v___x_322_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_338_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
v_val_330_ = v___x_340_;
goto v___jp_329_;
}
}
v___jp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v_val_330_);
v___x_332_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_327_, v___x_328_, v___x_331_, v___f_325_);
return v___x_332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4___boxed(lean_object* v_f_343_, lean_object* v___f_344_, lean_object* v___x_345_, lean_object* v_args_346_, lean_object* v_inst_347_, lean_object* v___x_348_, lean_object* v_x_349_, lean_object* v___y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4(v_f_343_, v___f_344_, v___x_345_, v_args_346_, v_inst_347_, v___x_348_, v_x_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5(lean_object* v_f_352_, lean_object* v___f_353_, lean_object* v___x_354_, lean_object* v_inst_355_, lean_object* v___x_356_, lean_object* v___x_357_, lean_object* v_args_358_){
_start:
{
lean_object* v___f_360_; lean_object* v___x_361_; uint8_t v___x_362_; lean_object* v_val_364_; lean_object* v___x_367_; 
lean_inc_ref(v_args_358_);
v___f_360_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_360_, 0, v_f_352_);
lean_closure_set(v___f_360_, 1, v___f_353_);
lean_closure_set(v___f_360_, 2, v___x_354_);
lean_closure_set(v___f_360_, 3, v_args_358_);
lean_closure_set(v___f_360_, 4, v_inst_355_);
lean_closure_set(v___f_360_, 5, v___x_356_);
v___x_361_ = lean_unsigned_to_nat(0u);
v___x_362_ = 0;
v___x_367_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_357_, v_args_358_, v___x_361_);
lean_dec_ref(v_args_358_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set_tag(v___x_370_, 1);
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
v_val_364_ = v___x_373_;
goto v___jp_363_;
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
v_a_376_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_367_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_367_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
lean_ctor_set_tag(v___x_378_, 0);
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
v_val_364_ = v___x_381_;
goto v___jp_363_;
}
}
}
v___jp_363_:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_365_, 0, v_val_364_);
v___x_366_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_361_, v___x_362_, v___x_365_, v___f_360_);
return v___x_366_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5___boxed(lean_object* v_f_384_, lean_object* v___f_385_, lean_object* v___x_386_, lean_object* v_inst_387_, lean_object* v___x_388_, lean_object* v___x_389_, lean_object* v_args_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5(v_f_384_, v___f_385_, v___x_386_, v_inst_387_, v___x_388_, v___x_389_, v_args_390_);
return v_res_392_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_unsigned_to_nat(3u);
v___x_401_ = lean_nat_to_int(v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__7(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6);
v___x_403_ = lean_nat_abs(v___x_402_);
return v___x_403_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_404_ = lean_cstr_to_nat("9007199254740991");
v___x_405_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__7, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__7_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__7);
v___x_406_ = lean_nat_dec_le(v___x_405_, v___x_404_);
return v___x_406_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6);
v___x_408_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
return v___x_408_;
}
}
static double _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__10(void){
_start:
{
lean_object* v___x_409_; double v___x_410_; 
v___x_409_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__6);
v___x_410_ = l_Float_ofInt(v___x_409_);
return v___x_410_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11(void){
_start:
{
double v___x_411_; lean_object* v___x_412_; 
v___x_411_ = lean_float_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__10, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__10_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__10);
v___x_412_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_412_, 0, v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(lean_object* v_inst_413_, lean_object* v_f_414_){
_start:
{
lean_object* v___f_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___f_420_; lean_object* v___f_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___f_416_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__0));
v___x_417_ = l_Lasm_JS_Web_instFromJSRequest;
v___x_418_ = l_Lasm_JS_instFromJSData;
v___x_419_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_420_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_420_, 0, v_f_414_);
lean_closure_set(v___f_420_, 1, v___f_416_);
lean_closure_set(v___f_420_, 2, v___x_419_);
lean_closure_set(v___f_420_, 3, v_inst_413_);
lean_closure_set(v___f_420_, 4, v___x_418_);
lean_closure_set(v___f_420_, 5, v___x_417_);
v___f_421_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_422_ = l_Lasm_JS_instFromJSValue;
v___x_423_ = lean_unsigned_to_nat(0u);
v___x_424_ = l_Lasm_JS_Function_ofFn(v___f_420_, v___x_423_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_426_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_424_, 1);
v___x_426_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_a_427_);
lean_dec_ref_known(v___x_426_, 1);
v___x_428_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_429_ = l_Lasm_JS_Value_get___redArg(v___f_421_, v_a_427_, v___x_428_, v___x_422_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___y_437_; uint8_t v___x_464_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v___x_431_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_432_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_425_);
v___x_433_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_433_, 0, v_a_425_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___x_434_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_435_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_464_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
v___x_465_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_437_ = v___x_465_;
goto v___jp_436_;
}
else
{
lean_object* v___x_466_; 
v___x_466_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_437_ = v___x_466_;
goto v___jp_436_;
}
v___jp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
lean_inc(v___y_437_);
v___x_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_435_);
lean_ctor_set(v___x_438_, 1, v___y_437_);
v___x_439_ = lean_box(0);
v___x_440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_438_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = l_Lasm_JS_obj(v___x_440_);
v___x_442_ = lean_unsigned_to_nat(3u);
v___x_443_ = lean_mk_empty_array_with_capacity(v___x_442_);
v___x_444_ = lean_array_push(v___x_443_, v___x_433_);
v___x_445_ = lean_array_push(v___x_444_, v___x_434_);
v___x_446_ = lean_array_push(v___x_445_, v___x_441_);
v___x_447_ = l_Lasm_JS_Value_callMethod___redArg(v_a_430_, v___x_431_, v___x_446_, v___x_422_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_454_ == 0)
{
lean_object* v_unused_455_; 
v_unused_455_ = lean_ctor_get(v___x_447_, 0);
lean_dec(v_unused_455_);
v___x_449_ = v___x_447_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_dec(v___x_447_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v_a_425_);
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_425_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
lean_dec(v_a_425_);
v_a_456_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_447_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_447_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
}
else
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
lean_dec(v_a_425_);
v_a_467_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_429_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_429_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
lean_dec(v_a_425_);
v_a_475_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_426_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_426_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
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
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
else
{
lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
v_a_483_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_490_ == 0)
{
v___x_485_ = v___x_424_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_dec(v___x_424_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_483_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___boxed(lean_object* v_inst_491_, lean_object* v_f_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(v_inst_491_, v_f_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(lean_object* v_Env_495_, lean_object* v_inst_496_, lean_object* v_f_497_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(v_inst_496_, v_f_497_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___boxed(lean_object* v_Env_500_, lean_object* v_inst_501_, lean_object* v_f_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(v_Env_500_, v_inst_501_, v_f_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_505_, lean_object* v___x_506_, lean_object* v_inst_507_, lean_object* v___x_508_, lean_object* v_f_509_, lean_object* v_args_510_){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_505_, v_args_510_, v___x_512_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref_known(v___x_513_, 1);
v___x_515_ = lean_unsigned_to_nat(1u);
v___x_516_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_506_, v_args_510_, v___x_515_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_518_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_a_517_);
lean_dec_ref_known(v___x_516_, 1);
v___x_518_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_507_, v_a_517_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_518_, 1);
v___x_520_ = lean_unsigned_to_nat(2u);
v___x_521_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_508_, v_args_510_, v___x_520_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_523_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref_known(v___x_521_, 1);
v___x_523_ = lean_apply_4(v_f_509_, v_a_514_, v_a_519_, v_a_522_, lean_box(0));
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_533_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_533_ == 0)
{
v___x_526_ = v___x_523_;
v_isShared_527_ = v_isSharedCheck_533_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_523_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_533_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_531_; 
v___x_528_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_529_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_529_, 0, v_a_524_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_529_);
v___x_531_ = v___x_526_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
else
{
lean_object* v_a_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_541_; 
v_a_534_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_541_ == 0)
{
v___x_536_ = v___x_523_;
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_a_534_);
lean_dec(v___x_523_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_541_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_a_534_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec(v_a_519_);
lean_dec(v_a_514_);
lean_dec_ref(v_f_509_);
v_a_542_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_521_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_521_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec(v_a_514_);
lean_dec_ref(v_f_509_);
lean_dec_ref(v___x_508_);
v_a_550_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_518_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_518_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_dec(v_a_514_);
lean_dec_ref(v_f_509_);
lean_dec_ref(v___x_508_);
lean_dec_ref(v_inst_507_);
return v___x_516_;
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
lean_dec_ref(v_f_509_);
lean_dec_ref(v___x_508_);
lean_dec_ref(v_inst_507_);
lean_dec_ref(v___x_506_);
v_a_558_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_513_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_513_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_566_, lean_object* v___x_567_, lean_object* v_inst_568_, lean_object* v___x_569_, lean_object* v_f_570_, lean_object* v_args_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(v___x_566_, v___x_567_, v_inst_568_, v___x_569_, v_f_570_, v_args_571_);
lean_dec_ref(v_args_571_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(lean_object* v_inst_574_, lean_object* v_f_575_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___f_580_; lean_object* v___f_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_577_ = l_Lasm_JS_Web_instFromJSRequest;
v___x_578_ = l_Lasm_JS_instFromJSData;
v___x_579_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_580_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_580_, 0, v___x_577_);
lean_closure_set(v___f_580_, 1, v___x_578_);
lean_closure_set(v___f_580_, 2, v_inst_574_);
lean_closure_set(v___f_580_, 3, v___x_579_);
lean_closure_set(v___f_580_, 4, v_f_575_);
v___f_581_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_582_ = l_Lasm_JS_instFromJSValue;
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = l_Lasm_JS_Function_ofSyncFn(v___f_580_, v___x_583_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_586_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_586_, 1);
v___x_588_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_589_ = l_Lasm_JS_Value_get___redArg(v___f_581_, v_a_587_, v___x_588_, v___x_582_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___y_597_; uint8_t v___x_624_; 
v_a_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 1);
v___x_591_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_592_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_585_);
v___x_593_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_593_, 0, v_a_585_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_595_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_624_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; 
v___x_625_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_597_ = v___x_625_;
goto v___jp_596_;
}
else
{
lean_object* v___x_626_; 
v___x_626_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_597_ = v___x_626_;
goto v___jp_596_;
}
v___jp_596_:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
lean_inc(v___y_597_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_595_);
lean_ctor_set(v___x_598_, 1, v___y_597_);
v___x_599_ = lean_box(0);
v___x_600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = l_Lasm_JS_obj(v___x_600_);
v___x_602_ = lean_unsigned_to_nat(3u);
v___x_603_ = lean_mk_empty_array_with_capacity(v___x_602_);
v___x_604_ = lean_array_push(v___x_603_, v___x_593_);
v___x_605_ = lean_array_push(v___x_604_, v___x_594_);
v___x_606_ = lean_array_push(v___x_605_, v___x_601_);
v___x_607_ = l_Lasm_JS_Value_callMethod___redArg(v_a_590_, v___x_591_, v___x_606_, v___x_582_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; 
v_unused_615_ = lean_ctor_get(v___x_607_, 0);
lean_dec(v_unused_615_);
v___x_609_ = v___x_607_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_dec(v___x_607_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 0, v_a_585_);
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_585_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
lean_dec(v_a_585_);
v_a_616_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_607_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_607_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec(v_a_585_);
v_a_627_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_589_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_589_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
lean_dec(v_a_585_);
v_a_635_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_586_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_586_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
v_a_643_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_584_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_584_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_651_, lean_object* v_f_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(v_inst_651_, v_f_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(lean_object* v_Env_655_, lean_object* v_inst_656_, lean_object* v_f_657_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(v_inst_656_, v_f_657_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___boxed(lean_object* v_Env_660_, lean_object* v_inst_661_, lean_object* v_f_662_, lean_object* v_a_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(v_Env_660_, v_inst_661_, v_f_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(lean_object* v_x_676_){
_start:
{
if (lean_obj_tag(v_x_676_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_686_; 
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
lean_object* v___x_687_; 
lean_dec_ref_known(v_x_676_, 1);
v___x_687_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__1));
return v___x_687_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed(lean_object* v_x_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(v_x_688_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(lean_object* v_f_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v___f_694_, lean_object* v_x_695_){
_start:
{
if (lean_obj_tag(v_x_695_) == 0)
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_705_; 
lean_dec_ref(v___f_694_);
lean_dec(v_a_693_);
lean_dec(v_a_692_);
lean_dec_ref(v_f_691_);
v_a_697_ = lean_ctor_get(v_x_695_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v_x_695_);
if (v_isSharedCheck_705_ == 0)
{
v___x_699_ = v_x_695_;
v_isShared_700_ = v_isSharedCheck_705_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v_x_695_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_705_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_704_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
lean_object* v___x_703_; 
v___x_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
return v___x_703_;
}
}
}
else
{
lean_object* v_a_706_; lean_object* v___x_707_; uint8_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v_a_706_ = lean_ctor_get(v_x_695_, 0);
lean_inc(v_a_706_);
lean_dec_ref_known(v_x_695_, 1);
v___x_707_ = lean_unsigned_to_nat(0u);
v___x_708_ = 0;
v___x_709_ = lean_apply_4(v_f_691_, v_a_692_, v_a_693_, v_a_706_, lean_box(0));
v___x_710_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_707_, v___x_708_, v___x_709_, v___f_694_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v___f_714_, lean_object* v_x_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(v_f_711_, v_a_712_, v_a_713_, v___f_714_, v_x_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(lean_object* v_f_718_, lean_object* v_a_719_, lean_object* v___f_720_, lean_object* v___x_721_, lean_object* v_args_722_, lean_object* v_x_723_){
_start:
{
if (lean_obj_tag(v_x_723_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_733_; 
lean_dec_ref(v___x_721_);
lean_dec_ref(v___f_720_);
lean_dec(v_a_719_);
lean_dec_ref(v_f_718_);
v_a_725_ = lean_ctor_get(v_x_723_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v_x_723_);
if (v_isSharedCheck_733_ == 0)
{
v___x_727_ = v_x_723_;
v_isShared_728_ = v_isSharedCheck_733_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v_x_723_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_733_;
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
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_732_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
lean_object* v___x_731_; 
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
}
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_755_; 
v_a_734_ = lean_ctor_get(v_x_723_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v_x_723_);
if (v_isSharedCheck_755_ == 0)
{
v___x_736_ = v_x_723_;
v_isShared_737_ = v_isSharedCheck_755_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v_x_723_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_755_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___f_738_; lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; lean_object* v_val_743_; lean_object* v___x_746_; 
v___f_738_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_738_, 0, v_f_718_);
lean_closure_set(v___f_738_, 1, v_a_719_);
lean_closure_set(v___f_738_, 2, v_a_734_);
lean_closure_set(v___f_738_, 3, v___f_720_);
v___x_739_ = lean_unsigned_to_nat(2u);
v___x_740_ = lean_unsigned_to_nat(0u);
v___x_741_ = 0;
v___x_746_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_721_, v_args_722_, v___x_739_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_746_, 1);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v_a_747_);
v___x_749_ = v___x_736_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
v_val_743_ = v___x_749_;
goto v___jp_742_;
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; 
v_a_751_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_751_);
lean_dec_ref_known(v___x_746_, 1);
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 0);
lean_ctor_set(v___x_736_, 0, v_a_751_);
v___x_753_ = v___x_736_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
v_val_743_ = v___x_753_;
goto v___jp_742_;
}
}
v___jp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_744_, 0, v_val_743_);
v___x_745_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_740_, v___x_741_, v___x_744_, v___f_738_);
return v___x_745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_756_, lean_object* v_a_757_, lean_object* v___f_758_, lean_object* v___x_759_, lean_object* v_args_760_, lean_object* v_x_761_, lean_object* v___y_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(v_f_756_, v_a_757_, v___f_758_, v___x_759_, v_args_760_, v_x_761_);
lean_dec_ref(v_args_760_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(lean_object* v_f_764_, lean_object* v___f_765_, lean_object* v___x_766_, lean_object* v_args_767_, lean_object* v_inst_768_, lean_object* v___x_769_, lean_object* v_x_770_){
_start:
{
if (lean_obj_tag(v_x_770_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_780_; 
lean_dec_ref(v___x_769_);
lean_dec_ref(v_inst_768_);
lean_dec_ref(v_args_767_);
lean_dec_ref(v___x_766_);
lean_dec_ref(v___f_765_);
lean_dec_ref(v_f_764_);
v_a_772_ = lean_ctor_get(v_x_770_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v_x_770_);
if (v_isSharedCheck_780_ == 0)
{
v___x_774_ = v_x_770_;
v_isShared_775_ = v_isSharedCheck_780_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v_x_770_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_780_;
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
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_772_);
v___x_777_ = v_reuseFailAlloc_779_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_778_; 
v___x_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
return v___x_778_;
}
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_803_; 
v_a_781_ = lean_ctor_get(v_x_770_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v_x_770_);
if (v_isSharedCheck_803_ == 0)
{
v___x_783_ = v_x_770_;
v_isShared_784_ = v_isSharedCheck_803_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v_x_770_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_803_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___f_785_; lean_object* v___f_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; lean_object* v_val_791_; lean_object* v___x_794_; 
lean_inc_ref(v_args_767_);
v___f_785_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_785_, 0, v_f_764_);
lean_closure_set(v___f_785_, 1, v_a_781_);
lean_closure_set(v___f_785_, 2, v___f_765_);
lean_closure_set(v___f_785_, 3, v___x_766_);
lean_closure_set(v___f_785_, 4, v_args_767_);
v___f_786_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_786_, 0, v___f_785_);
lean_closure_set(v___f_786_, 1, v_inst_768_);
v___x_787_ = lean_unsigned_to_nat(1u);
v___x_788_ = lean_unsigned_to_nat(0u);
v___x_789_ = 0;
v___x_794_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_769_, v_args_767_, v___x_787_);
lean_dec_ref(v_args_767_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_797_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_795_);
lean_dec_ref_known(v___x_794_, 1);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v_a_795_);
v___x_797_ = v___x_783_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_795_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
v_val_791_ = v___x_797_;
goto v___jp_790_;
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; 
v_a_799_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_799_);
lean_dec_ref_known(v___x_794_, 1);
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 0);
lean_ctor_set(v___x_783_, 0, v_a_799_);
v___x_801_ = v___x_783_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_799_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
v_val_791_ = v___x_801_;
goto v___jp_790_;
}
}
v___jp_790_:
{
lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_792_, 0, v_val_791_);
v___x_793_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_788_, v___x_789_, v___x_792_, v___f_786_);
return v___x_793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed(lean_object* v_f_804_, lean_object* v___f_805_, lean_object* v___x_806_, lean_object* v_args_807_, lean_object* v_inst_808_, lean_object* v___x_809_, lean_object* v_x_810_, lean_object* v___y_811_){
_start:
{
lean_object* v_res_812_; 
v_res_812_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(v_f_804_, v___f_805_, v___x_806_, v_args_807_, v_inst_808_, v___x_809_, v_x_810_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(lean_object* v_f_813_, lean_object* v___f_814_, lean_object* v___x_815_, lean_object* v_inst_816_, lean_object* v___x_817_, lean_object* v___x_818_, lean_object* v_args_819_){
_start:
{
lean_object* v___f_821_; lean_object* v___x_822_; uint8_t v___x_823_; lean_object* v_val_825_; lean_object* v___x_828_; 
lean_inc_ref(v_args_819_);
v___f_821_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_821_, 0, v_f_813_);
lean_closure_set(v___f_821_, 1, v___f_814_);
lean_closure_set(v___f_821_, 2, v___x_815_);
lean_closure_set(v___f_821_, 3, v_args_819_);
lean_closure_set(v___f_821_, 4, v_inst_816_);
lean_closure_set(v___f_821_, 5, v___x_817_);
v___x_822_ = lean_unsigned_to_nat(0u);
v___x_823_ = 0;
v___x_828_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_818_, v_args_819_, v___x_822_);
lean_dec_ref(v_args_819_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
lean_ctor_set_tag(v___x_831_, 1);
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
v_val_825_ = v___x_834_;
goto v___jp_824_;
}
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
v_a_837_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_828_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_828_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set_tag(v___x_839_, 0);
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
v_val_825_ = v___x_842_;
goto v___jp_824_;
}
}
}
v___jp_824_:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_826_, 0, v_val_825_);
v___x_827_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_822_, v___x_823_, v___x_826_, v___f_821_);
return v___x_827_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed(lean_object* v_f_845_, lean_object* v___f_846_, lean_object* v___x_847_, lean_object* v_inst_848_, lean_object* v___x_849_, lean_object* v___x_850_, lean_object* v_args_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(v_f_845_, v___f_846_, v___x_847_, v_inst_848_, v___x_849_, v___x_850_, v_args_851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(lean_object* v_inst_855_, lean_object* v_f_856_){
_start:
{
lean_object* v___f_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___f_862_; lean_object* v___f_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___f_858_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___closed__0));
v___x_859_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSScheduledController));
v___x_860_ = l_Lasm_JS_instFromJSData;
v___x_861_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_862_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_862_, 0, v_f_856_);
lean_closure_set(v___f_862_, 1, v___f_858_);
lean_closure_set(v___f_862_, 2, v___x_861_);
lean_closure_set(v___f_862_, 3, v_inst_855_);
lean_closure_set(v___f_862_, 4, v___x_860_);
lean_closure_set(v___f_862_, 5, v___x_859_);
v___f_863_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_864_ = l_Lasm_JS_instFromJSValue;
v___x_865_ = lean_unsigned_to_nat(0u);
v___x_866_ = l_Lasm_JS_Function_ofFn(v___f_862_, v___x_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
v___x_868_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_871_ = l_Lasm_JS_Value_get___redArg(v___f_863_, v_a_869_, v___x_870_, v___x_864_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___y_879_; uint8_t v___x_906_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v___x_873_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_874_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_867_);
v___x_875_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_875_, 0, v_a_867_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_877_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_906_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_906_ == 0)
{
lean_object* v___x_907_; 
v___x_907_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_879_ = v___x_907_;
goto v___jp_878_;
}
else
{
lean_object* v___x_908_; 
v___x_908_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_879_ = v___x_908_;
goto v___jp_878_;
}
v___jp_878_:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
lean_inc(v___y_879_);
v___x_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_877_);
lean_ctor_set(v___x_880_, 1, v___y_879_);
v___x_881_ = lean_box(0);
v___x_882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_880_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = l_Lasm_JS_obj(v___x_882_);
v___x_884_ = lean_unsigned_to_nat(3u);
v___x_885_ = lean_mk_empty_array_with_capacity(v___x_884_);
v___x_886_ = lean_array_push(v___x_885_, v___x_875_);
v___x_887_ = lean_array_push(v___x_886_, v___x_876_);
v___x_888_ = lean_array_push(v___x_887_, v___x_883_);
v___x_889_ = l_Lasm_JS_Value_callMethod___redArg(v_a_872_, v___x_873_, v___x_888_, v___x_864_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; 
v_unused_897_ = lean_ctor_get(v___x_889_, 0);
lean_dec(v_unused_897_);
v___x_891_ = v___x_889_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_dec(v___x_889_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v_a_867_);
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_867_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_dec(v_a_867_);
v_a_898_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_889_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_889_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v_a_867_);
v_a_909_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_871_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_871_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_a_867_);
v_a_917_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_868_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_868_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
v_a_925_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_866_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_866_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___boxed(lean_object* v_inst_933_, lean_object* v_f_934_, lean_object* v_a_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(v_inst_933_, v_f_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(lean_object* v_Env_937_, lean_object* v_inst_938_, lean_object* v_f_939_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(v_inst_938_, v_f_939_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___boxed(lean_object* v_Env_942_, lean_object* v_inst_943_, lean_object* v_f_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(v_Env_942_, v_inst_943_, v_f_944_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_947_, lean_object* v___x_948_, lean_object* v_inst_949_, lean_object* v___x_950_, lean_object* v_f_951_, lean_object* v_args_952_){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_947_, v_args_952_, v___x_954_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v___x_955_, 1);
v___x_957_ = lean_unsigned_to_nat(1u);
v___x_958_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_948_, v_args_952_, v___x_957_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v_a_959_; lean_object* v___x_960_; 
v_a_959_ = lean_ctor_get(v___x_958_, 0);
lean_inc(v_a_959_);
lean_dec_ref_known(v___x_958_, 1);
v___x_960_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_949_, v_a_959_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v_a_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v_a_961_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref_known(v___x_960_, 1);
v___x_962_ = lean_unsigned_to_nat(2u);
v___x_963_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_950_, v_args_952_, v___x_962_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_965_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_a_964_);
lean_dec_ref_known(v___x_963_, 1);
v___x_965_ = lean_apply_4(v_f_951_, v_a_956_, v_a_961_, v_a_964_, lean_box(0));
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_973_; 
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_973_ == 0)
{
lean_object* v_unused_974_; 
v_unused_974_ = lean_ctor_get(v___x_965_, 0);
lean_dec(v_unused_974_);
v___x_967_ = v___x_965_;
v_isShared_968_ = v_isSharedCheck_973_;
goto v_resetjp_966_;
}
else
{
lean_dec(v___x_965_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_973_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_969_; lean_object* v___x_971_; 
v___x_969_ = lean_box(0);
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 0, v___x_969_);
v___x_971_ = v___x_967_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_969_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
v_a_975_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_965_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_965_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_a_961_);
lean_dec(v_a_956_);
lean_dec_ref(v_f_951_);
v_a_983_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_963_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_963_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec(v_a_956_);
lean_dec_ref(v_f_951_);
lean_dec_ref(v___x_950_);
v_a_991_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_960_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_960_);
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
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec(v_a_956_);
lean_dec_ref(v_f_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_inst_949_);
return v___x_958_;
}
}
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec_ref(v_f_951_);
lean_dec_ref(v___x_950_);
lean_dec_ref(v_inst_949_);
lean_dec_ref(v___x_948_);
v_a_999_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_955_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_955_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_1007_, lean_object* v___x_1008_, lean_object* v_inst_1009_, lean_object* v___x_1010_, lean_object* v_f_1011_, lean_object* v_args_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(v___x_1007_, v___x_1008_, v_inst_1009_, v___x_1010_, v_f_1011_, v_args_1012_);
lean_dec_ref(v_args_1012_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(lean_object* v_inst_1015_, lean_object* v_f_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___f_1021_; lean_object* v___f_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1018_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSScheduledController));
v___x_1019_ = l_Lasm_JS_instFromJSData;
v___x_1020_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_1021_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1021_, 0, v___x_1018_);
lean_closure_set(v___f_1021_, 1, v___x_1019_);
lean_closure_set(v___f_1021_, 2, v_inst_1015_);
lean_closure_set(v___f_1021_, 3, v___x_1020_);
lean_closure_set(v___f_1021_, 4, v_f_1016_);
v___f_1022_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_1023_ = l_Lasm_JS_instFromJSValue;
v___x_1024_ = lean_unsigned_to_nat(0u);
v___x_1025_ = l_Lasm_JS_Function_ofSyncFn(v___f_1021_, v___x_1024_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1027_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc(v_a_1026_);
lean_dec_ref_known(v___x_1025_, 1);
v___x_1027_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v___x_1029_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_1030_ = l_Lasm_JS_Value_get___redArg(v___f_1022_, v_a_1028_, v___x_1029_, v___x_1023_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___y_1038_; uint8_t v___x_1065_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v___x_1030_, 1);
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_1033_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1026_);
v___x_1034_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_a_1026_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_1036_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_1065_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; 
v___x_1066_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_1038_ = v___x_1066_;
goto v___jp_1037_;
}
else
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_1038_ = v___x_1067_;
goto v___jp_1037_;
}
v___jp_1037_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_inc(v___y_1038_);
v___x_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1036_);
lean_ctor_set(v___x_1039_, 1, v___y_1038_);
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = l_Lasm_JS_obj(v___x_1041_);
v___x_1043_ = lean_unsigned_to_nat(3u);
v___x_1044_ = lean_mk_empty_array_with_capacity(v___x_1043_);
v___x_1045_ = lean_array_push(v___x_1044_, v___x_1034_);
v___x_1046_ = lean_array_push(v___x_1045_, v___x_1035_);
v___x_1047_ = lean_array_push(v___x_1046_, v___x_1042_);
v___x_1048_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1031_, v___x_1032_, v___x_1047_, v___x_1023_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1055_ == 0)
{
lean_object* v_unused_1056_; 
v_unused_1056_ = lean_ctor_get(v___x_1048_, 0);
lean_dec(v_unused_1056_);
v___x_1050_ = v___x_1048_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_dec(v___x_1048_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v_a_1026_);
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1026_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
lean_dec(v_a_1026_);
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
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec(v_a_1026_);
v_a_1068_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1030_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1030_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
lean_dec(v_a_1026_);
v_a_1076_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1078_ = v___x_1027_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1027_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1076_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
v_a_1084_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1025_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1025_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_1092_, lean_object* v_f_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(v_inst_1092_, v_f_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(lean_object* v_Env_1096_, lean_object* v_inst_1097_, lean_object* v_f_1098_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(v_inst_1097_, v_f_1098_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___boxed(lean_object* v_Env_1101_, lean_object* v_inst_1102_, lean_object* v_f_1103_, lean_object* v_a_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(v_Env_1101_, v_inst_1102_, v_f_1103_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg(lean_object* v_inst_1113_, lean_object* v_f_1114_){
_start:
{
lean_object* v___f_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___f_1120_; lean_object* v___f_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___f_1116_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___closed__0));
v___x_1117_ = l_Lasm_JS_Cloudflare_instFromJSMessageBatch;
v___x_1118_ = l_Lasm_JS_instFromJSData;
v___x_1119_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_1120_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_1120_, 0, v_f_1114_);
lean_closure_set(v___f_1120_, 1, v___f_1116_);
lean_closure_set(v___f_1120_, 2, v___x_1119_);
lean_closure_set(v___f_1120_, 3, v_inst_1113_);
lean_closure_set(v___f_1120_, 4, v___x_1118_);
lean_closure_set(v___f_1120_, 5, v___x_1117_);
v___f_1121_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_1122_ = l_Lasm_JS_instFromJSValue;
v___x_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = l_Lasm_JS_Function_ofFn(v___f_1120_, v___x_1123_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1126_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v___x_1126_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc(v_a_1127_);
lean_dec_ref_known(v___x_1126_, 1);
v___x_1128_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_1129_ = l_Lasm_JS_Value_get___redArg(v___f_1121_, v_a_1127_, v___x_1128_, v___x_1122_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___y_1137_; uint8_t v___x_1164_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_a_1130_);
lean_dec_ref_known(v___x_1129_, 1);
v___x_1131_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_1132_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1125_);
v___x_1133_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1133_, 0, v_a_1125_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
v___x_1134_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_1135_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_1164_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; 
v___x_1165_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_1137_ = v___x_1165_;
goto v___jp_1136_;
}
else
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_1137_ = v___x_1166_;
goto v___jp_1136_;
}
v___jp_1136_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
lean_inc(v___y_1137_);
v___x_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1135_);
lean_ctor_set(v___x_1138_, 1, v___y_1137_);
v___x_1139_ = lean_box(0);
v___x_1140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1138_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
v___x_1141_ = l_Lasm_JS_obj(v___x_1140_);
v___x_1142_ = lean_unsigned_to_nat(3u);
v___x_1143_ = lean_mk_empty_array_with_capacity(v___x_1142_);
v___x_1144_ = lean_array_push(v___x_1143_, v___x_1133_);
v___x_1145_ = lean_array_push(v___x_1144_, v___x_1134_);
v___x_1146_ = lean_array_push(v___x_1145_, v___x_1141_);
v___x_1147_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1130_, v___x_1131_, v___x_1146_, v___x_1122_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1154_; 
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1154_ == 0)
{
lean_object* v_unused_1155_; 
v_unused_1155_ = lean_ctor_get(v___x_1147_, 0);
lean_dec(v_unused_1155_);
v___x_1149_ = v___x_1147_;
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
else
{
lean_dec(v___x_1147_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1154_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; 
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v_a_1125_);
v___x_1152_ = v___x_1149_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_a_1125_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_dec(v_a_1125_);
v_a_1156_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1147_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1147_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec(v_a_1125_);
v_a_1167_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1129_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1129_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
lean_dec(v_a_1125_);
v_a_1175_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1126_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1126_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
else
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
v_a_1183_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1124_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1124_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
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
return v___x_1188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg___boxed(lean_object* v_inst_1191_, lean_object* v_f_1192_, lean_object* v_a_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg(v_inst_1191_, v_f_1192_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn(lean_object* v_Env_1195_, lean_object* v_inst_1196_, lean_object* v_f_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg(v_inst_1196_, v_f_1197_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___boxed(lean_object* v_Env_1200_, lean_object* v_inst_1201_, lean_object* v_f_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn(v_Env_1200_, v_inst_1201_, v_f_1202_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg(lean_object* v_inst_1205_, lean_object* v_f_1206_){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___f_1211_; lean_object* v___f_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1208_ = l_Lasm_JS_Cloudflare_instFromJSMessageBatch;
v___x_1209_ = l_Lasm_JS_instFromJSData;
v___x_1210_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_1211_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1211_, 0, v___x_1208_);
lean_closure_set(v___f_1211_, 1, v___x_1209_);
lean_closure_set(v___f_1211_, 2, v_inst_1205_);
lean_closure_set(v___f_1211_, 3, v___x_1210_);
lean_closure_set(v___f_1211_, 4, v_f_1206_);
v___f_1212_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_1213_ = l_Lasm_JS_instFromJSValue;
v___x_1214_ = lean_unsigned_to_nat(0u);
v___x_1215_ = l_Lasm_JS_Function_ofSyncFn(v___f_1211_, v___x_1214_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; lean_object* v___x_1217_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1215_, 1);
v___x_1217_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref_known(v___x_1217_, 1);
v___x_1219_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_1220_ = l_Lasm_JS_Value_get___redArg(v___f_1212_, v_a_1218_, v___x_1219_, v___x_1213_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v_a_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___y_1228_; uint8_t v___x_1255_; 
v_a_1221_ = lean_ctor_get(v___x_1220_, 0);
lean_inc(v_a_1221_);
lean_dec_ref_known(v___x_1220_, 1);
v___x_1222_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_1223_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1216_);
v___x_1224_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1224_, 0, v_a_1216_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
v___x_1225_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_1226_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_1255_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; 
v___x_1256_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_1228_ = v___x_1256_;
goto v___jp_1227_;
}
else
{
lean_object* v___x_1257_; 
v___x_1257_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_1228_ = v___x_1257_;
goto v___jp_1227_;
}
v___jp_1227_:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_inc(v___y_1228_);
v___x_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1226_);
lean_ctor_set(v___x_1229_, 1, v___y_1228_);
v___x_1230_ = lean_box(0);
v___x_1231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = l_Lasm_JS_obj(v___x_1231_);
v___x_1233_ = lean_unsigned_to_nat(3u);
v___x_1234_ = lean_mk_empty_array_with_capacity(v___x_1233_);
v___x_1235_ = lean_array_push(v___x_1234_, v___x_1224_);
v___x_1236_ = lean_array_push(v___x_1235_, v___x_1225_);
v___x_1237_ = lean_array_push(v___x_1236_, v___x_1232_);
v___x_1238_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1221_, v___x_1222_, v___x_1237_, v___x_1213_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1245_ == 0)
{
lean_object* v_unused_1246_; 
v_unused_1246_ = lean_ctor_get(v___x_1238_, 0);
lean_dec(v_unused_1246_);
v___x_1240_ = v___x_1238_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_dec(v___x_1238_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v_a_1216_);
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1216_);
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
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec(v_a_1216_);
v_a_1247_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1238_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1238_);
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
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec(v_a_1216_);
v_a_1258_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1220_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1220_);
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
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec(v_a_1216_);
v_a_1266_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1217_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1217_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
else
{
lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1281_; 
v_a_1274_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1276_ = v___x_1215_;
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_dec(v___x_1215_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_1282_, lean_object* v_f_1283_, lean_object* v_a_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg(v_inst_1282_, v_f_1283_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn(lean_object* v_Env_1286_, lean_object* v_inst_1287_, lean_object* v_f_1288_){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg(v_inst_1287_, v_f_1288_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___boxed(lean_object* v_Env_1291_, lean_object* v_inst_1292_, lean_object* v_f_1293_, lean_object* v_a_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn(v_Env_1291_, v_inst_1292_, v_f_1293_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0(lean_object* v___f_1299_, lean_object* v___f_1300_, lean_object* v___f_1301_, lean_object* v_d_1302_){
_start:
{
lean_object* v_fetch_1303_; lean_object* v_scheduled_1304_; lean_object* v_queue_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v_fetch_1303_ = lean_ctor_get(v_d_1302_, 0);
lean_inc(v_fetch_1303_);
v_scheduled_1304_ = lean_ctor_get(v_d_1302_, 1);
lean_inc(v_scheduled_1304_);
v_queue_1305_ = lean_ctor_get(v_d_1302_, 2);
lean_inc(v_queue_1305_);
lean_dec_ref(v_d_1302_);
v___x_1306_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__0));
v___x_1307_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1299_, v_fetch_1303_);
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__1));
v___x_1310_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1300_, v_scheduled_1304_);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__2));
v___x_1313_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1301_, v_queue_1305_);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = lean_unsigned_to_nat(3u);
v___x_1316_ = lean_mk_empty_array_with_capacity(v___x_1315_);
v___x_1317_ = lean_array_push(v___x_1316_, v___x_1308_);
v___x_1318_ = lean_array_push(v___x_1317_, v___x_1311_);
v___x_1319_ = lean_array_push(v___x_1318_, v___x_1314_);
v___x_1320_ = l_Lasm_JS_Web_Support_fields(v___x_1319_);
lean_dec_ref(v___x_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props(lean_object* v_self_1325_){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_props___closed__0));
v___x_1328_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(v_self_1325_, v___x_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props___boxed(lean_object* v_self_1329_, lean_object* v_a_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_Lasm_JS_Cloudflare_ExecutionContext_props(v_self_1329_);
return v_res_1331_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_1337_ = lean_string_utf8_byte_size(v___x_1336_);
return v___x_1337_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; uint8_t v___x_1340_; 
v___x_1338_ = lean_unsigned_to_nat(0u);
v___x_1339_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4);
v___x_1340_ = lean_nat_dec_eq(v___x_1339_, v___x_1338_);
return v___x_1340_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1345_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__9));
v___x_1346_ = lean_unsigned_to_nat(46u);
v___x_1347_ = lean_unsigned_to_nat(193u);
v___x_1348_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__8));
v___x_1349_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__7));
v___x_1350_ = l_mkPanicMessageWithDecl(v___x_1349_, v___x_1348_, v___x_1347_, v___x_1346_, v___x_1345_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(lean_object* v_context_1352_, lean_object* v_d_1353_){
_start:
{
lean_object* v___y_1359_; lean_object* v___y_1360_; 
switch(lean_obj_tag(v_d_1353_))
{
case 1:
{
goto v___jp_1355_;
}
case 0:
{
goto v___jp_1355_;
}
default: 
{
if (lean_obj_tag(v_d_1353_) == 9)
{
lean_object* v_value_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v_value_1364_ = lean_ctor_get(v_d_1353_, 0);
lean_inc(v_value_1364_);
lean_dec_ref_known(v_d_1353_, 2);
v___x_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1365_, 0, v_value_1364_);
v___x_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
return v___x_1366_;
}
else
{
lean_object* v___x_1367_; lean_object* v_received_1369_; 
v___x_1367_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
if (lean_obj_tag(v_d_1353_) == 9)
{
lean_object* v_value_1383_; lean_object* v_description_1384_; uint8_t v___x_1385_; 
v_value_1383_ = lean_ctor_get(v_d_1353_, 0);
v_description_1384_ = lean_ctor_get(v_d_1353_, 1);
v___x_1385_ = lean_string_dec_eq(v_description_1384_, v___x_1367_);
if (v___x_1385_ == 0)
{
goto v___jp_1381_;
}
else
{
uint32_t v___x_1386_; uint64_t v___x_1387_; lean_object* v___x_1388_; uint32_t v___x_1389_; lean_object* v___x_1390_; 
lean_inc_n(v_value_1383_, 2);
lean_dec_ref_known(v_d_1353_, 2);
v___x_1386_ = 206;
v___x_1387_ = 0ULL;
v___x_1388_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1388_, 0, v_value_1383_);
lean_ctor_set(v___x_1388_, 1, v___x_1367_);
v___x_1389_ = lasm_js_value_handle(v_value_1383_);
lean_dec(v_value_1383_);
v___x_1390_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1386_, v___x_1387_, v___x_1388_, v___x_1389_);
lean_dec_ref_known(v___x_1388_, 2);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; uint8_t v___x_1392_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1392_ = lean_string_validate_utf8(v_a_1391_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
lean_dec(v_a_1391_);
v___x_1393_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10);
v___x_1394_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1393_);
v_received_1369_ = v___x_1394_;
goto v___jp_1368_;
}
else
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_string_from_utf8_unchecked(v_a_1391_);
v_received_1369_ = v___x_1395_;
goto v___jp_1368_;
}
}
else
{
lean_object* v___x_1396_; 
lean_dec_ref_known(v___x_1390_, 1);
v___x_1396_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__11));
v_received_1369_ = v___x_1396_;
goto v___jp_1368_;
}
}
}
else
{
goto v___jp_1381_;
}
v___jp_1368_:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1370_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0));
v___x_1371_ = lean_string_append(v___x_1370_, v_context_1352_);
v___x_1372_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__1));
v___x_1373_ = lean_string_append(v___x_1371_, v___x_1372_);
v___x_1374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__2));
v___x_1375_ = lean_string_append(v___x_1373_, v___x_1374_);
v___x_1376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__3));
v___x_1377_ = lean_string_append(v___x_1375_, v___x_1376_);
v___x_1378_ = lean_string_append(v___x_1377_, v_received_1369_);
lean_dec_ref(v_received_1369_);
v___x_1379_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; 
v___x_1380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6));
v___y_1359_ = v___x_1378_;
v___y_1360_ = v___x_1380_;
goto v___jp_1358_;
}
else
{
v___y_1359_ = v___x_1378_;
v___y_1360_ = v___x_1367_;
goto v___jp_1358_;
}
}
v___jp_1381_:
{
lean_object* v___x_1382_; 
v___x_1382_ = l_Lasm_JS_Data_describe(v_d_1353_);
v_received_1369_ = v___x_1382_;
goto v___jp_1368_;
}
}
}
}
v___jp_1355_:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_box(0);
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
return v___x_1357_;
}
v___jp_1358_:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1361_ = lean_string_append(v___y_1359_, v___y_1360_);
v___x_1362_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
v___x_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
return v___x_1363_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1397_, lean_object* v_d_1398_, lean_object* v_a_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(v_context_1397_, v_d_1398_);
lean_dec_ref(v_context_1397_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(lean_object* v_context_1401_, lean_object* v_bytes_1402_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1402_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1406_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v___x_1406_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(v_context_1401_, v_a_1405_);
return v___x_1406_;
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
v_a_1407_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v___x_1404_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1404_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0___boxed(lean_object* v_context_1415_, lean_object* v_bytes_1416_, lean_object* v_a_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(v_context_1415_, v_bytes_1416_);
lean_dec_ref(v_bytes_1416_);
lean_dec_ref(v_context_1415_);
return v_res_1418_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1419_; uint64_t v___x_1420_; 
v___x_1419_ = 0;
v___x_1420_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1419_);
return v___x_1420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(lean_object* v_o_1422_, lean_object* v_key_1423_){
_start:
{
lean_object* v_k_1425_; lean_object* v___x_1426_; 
v_k_1425_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1425_, 0, v_key_1423_);
v___x_1426_ = l_Lasm_JS_Wire_encodeIO(v_k_1425_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; uint32_t v___x_1428_; uint32_t v___x_1429_; uint64_t v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1426_, 1);
v___x_1428_ = 203;
v___x_1429_ = lasm_js_value_handle(v_o_1422_);
v___x_1430_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0);
v___x_1431_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_1432_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1432_, 0, v_o_1422_);
lean_ctor_set(v___x_1432_, 1, v___x_1431_);
v___x_1433_ = lean_unsigned_to_nat(2u);
v___x_1434_ = lean_mk_empty_array_with_capacity(v___x_1433_);
lean_inc_ref(v_k_1425_);
v___x_1435_ = lean_array_push(v___x_1434_, v_k_1425_);
v___x_1436_ = lean_array_push(v___x_1435_, v___x_1432_);
v___x_1437_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
v___x_1438_ = lasm_js_call(v___x_1428_, v___x_1429_, v___x_1430_, v_a_1427_, v___x_1437_);
lean_dec_ref_known(v___x_1437_, 1);
lean_dec(v_a_1427_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1439_);
lean_dec_ref_known(v___x_1438_, 1);
v___x_1440_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__1));
v___x_1441_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1425_);
v___x_1442_ = lean_string_append(v___x_1440_, v___x_1441_);
lean_dec_ref(v___x_1441_);
v___x_1443_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(v___x_1442_, v_a_1439_);
lean_dec(v_a_1439_);
lean_dec_ref(v___x_1442_);
return v___x_1443_;
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec_ref_known(v_k_1425_, 1);
v_a_1444_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1438_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1438_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
else
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
lean_dec_ref_known(v_k_1425_, 1);
lean_dec(v_o_1422_);
v_a_1452_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1426_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1426_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___boxed(lean_object* v_o_1460_, lean_object* v_key_1461_, lean_object* v_a_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(v_o_1460_, v_key_1461_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache(lean_object* v_self_1465_){
_start:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_cache___closed__0));
v___x_1468_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(v_self_1465_, v___x_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache___boxed(lean_object* v_self_1469_, lean_object* v_a_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lasm_JS_Cloudflare_ExecutionContext_cache(v_self_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(lean_object* v_self_1473_, lean_object* v_promise_1474_){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1476_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___closed__0));
v___x_1477_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_1478_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1478_, 0, v_promise_1474_);
lean_ctor_set(v___x_1478_, 1, v___x_1477_);
v___x_1479_ = lean_unsigned_to_nat(1u);
v___x_1480_ = lean_mk_empty_array_with_capacity(v___x_1479_);
v___x_1481_ = lean_array_push(v___x_1480_, v___x_1478_);
v___x_1482_ = l_Lasm_JS_Web_Support_args(v___x_1481_);
v___x_1483_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1473_, v___x_1476_, v___x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___boxed(lean_object* v_self_1484_, lean_object* v_promise_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(v_self_1484_, v_promise_1485_);
return v_res_1487_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1491_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__1));
v___x_1492_ = l_Lasm_JS_Web_Support_args(v___x_1491_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(lean_object* v_self_1493_){
_start:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1495_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__0));
v___x_1496_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2, &l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2_once, _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2);
v___x_1497_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1493_, v___x_1495_, v___x_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___boxed(lean_object* v_self_1498_, lean_object* v_a_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(v_self_1498_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort(lean_object* v_self_1502_, lean_object* v_reason_1503_){
_start:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1505_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_abort___closed__0));
v___x_1506_ = lean_unsigned_to_nat(1u);
v___x_1507_ = lean_mk_empty_array_with_capacity(v___x_1506_);
v___x_1508_ = lean_array_push(v___x_1507_, v_reason_1503_);
v___x_1509_ = l_Lasm_JS_Web_Support_args(v___x_1508_);
v___x_1510_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1502_, v___x_1505_, v___x_1509_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort___boxed(lean_object* v_self_1511_, lean_object* v_reason_1512_, lean_object* v_a_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Lasm_JS_Cloudflare_ExecutionContext_abort(v_self_1511_, v_reason_1512_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(lean_object* v___f_1515_, lean_object* v_x_1516_){
_start:
{
if (lean_obj_tag(v_x_1516_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1526_; 
lean_dec_ref(v___f_1515_);
v_a_1518_ = lean_ctor_get(v_x_1516_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_x_1516_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1520_ = v_x_1516_;
v_isShared_1521_ = v_isSharedCheck_1526_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v_x_1516_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1526_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
lean_object* v___x_1524_; 
v___x_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
return v___x_1524_;
}
}
}
else
{
lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1538_; 
v_isSharedCheck_1538_ = !lean_is_exclusive(v_x_1516_);
if (v_isSharedCheck_1538_ == 0)
{
lean_object* v_unused_1539_; 
v_unused_1539_ = lean_ctor_get(v_x_1516_, 0);
lean_dec(v_unused_1539_);
v___x_1528_ = v_x_1516_;
v_isShared_1529_ = v_isSharedCheck_1538_;
goto v_resetjp_1527_;
}
else
{
lean_dec(v_x_1516_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1538_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; uint8_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1530_ = lean_unsigned_to_nat(0u);
v___x_1531_ = 0;
v___x_1532_ = lean_io_promise_new();
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v___x_1532_);
v___x_1534_ = v___x_1528_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1534_);
v___x_1536_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1530_, v___x_1531_, v___x_1535_, v___f_1515_);
return v___x_1536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed(lean_object* v___f_1540_, lean_object* v_x_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(v___f_1540_, v_x_1541_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(lean_object* v_failurePrefix_1544_, lean_object* v_x_1545_){
_start:
{
if (lean_obj_tag(v_x_1545_) == 0)
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1558_; 
v_a_1547_ = lean_ctor_get(v_x_1545_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v_x_1545_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1549_ = v_x_1545_;
v_isShared_1550_ = v_isSharedCheck_1558_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v_x_1545_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1558_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1555_; 
v___x_1551_ = lean_io_error_to_string(v_a_1547_);
v___x_1552_ = lean_string_append(v_failurePrefix_1544_, v___x_1551_);
lean_dec_ref(v___x_1551_);
v___x_1553_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1553_);
v___x_1555_ = v___x_1549_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1553_);
v___x_1555_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
return v___x_1556_;
}
}
}
else
{
lean_object* v___x_1559_; 
lean_dec_ref(v_failurePrefix_1544_);
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_x_1545_);
return v___x_1559_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed(lean_object* v_failurePrefix_1560_, lean_object* v_x_1561_, lean_object* v___y_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(v_failurePrefix_1560_, v_x_1561_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(lean_object* v___f_1564_, lean_object* v_bytes_1565_){
_start:
{
lean_object* v___x_1567_; uint8_t v___x_1568_; lean_object* v_val_1570_; lean_object* v___x_1573_; 
v___x_1567_ = lean_unsigned_to_nat(0u);
v___x_1568_ = 0;
v___x_1573_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1565_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
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
lean_ctor_set_tag(v___x_1576_, 1);
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
v_val_1570_ = v___x_1579_;
goto v___jp_1569_;
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
v_a_1582_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1573_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1573_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
lean_ctor_set_tag(v___x_1584_, 0);
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
v_val_1570_ = v___x_1587_;
goto v___jp_1569_;
}
}
}
v___jp_1569_:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1571_, 0, v_val_1570_);
v___x_1572_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1567_, v___x_1568_, v___x_1571_, v___f_1564_);
return v___x_1572_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed(lean_object* v___f_1590_, lean_object* v_bytes_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(v___f_1590_, v_bytes_1591_);
lean_dec_ref(v_bytes_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(lean_object* v___f_1594_, lean_object* v_a_1595_, uint32_t v_op_1596_, uint64_t v_flags_1597_, lean_object* v_payload_1598_, lean_object* v_x_1599_){
_start:
{
if (lean_obj_tag(v_x_1599_) == 0)
{
lean_object* v___x_1601_; 
lean_dec_ref(v___f_1594_);
v___x_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1601_, 0, v_x_1599_);
return v___x_1601_;
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1622_; 
v_a_1602_ = lean_ctor_get(v_x_1599_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v_x_1599_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1604_ = v_x_1599_;
v_isShared_1605_ = v_isSharedCheck_1622_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v_x_1599_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1622_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
uint32_t v___x_1606_; lean_object* v___x_1607_; uint8_t v___x_1608_; lean_object* v_val_1610_; lean_object* v___x_1613_; 
v___x_1606_ = 0;
v___x_1607_ = lean_unsigned_to_nat(0u);
v___x_1608_ = 0;
v___x_1613_ = lasm_js_call_into(v_a_1595_, v_op_1596_, v___x_1606_, v_flags_1597_, v_a_1602_, v_payload_1598_);
lean_dec(v_a_1602_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___x_1616_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___x_1613_, 1);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v_a_1614_);
v___x_1616_ = v___x_1604_;
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
v_val_1610_ = v___x_1616_;
goto v___jp_1609_;
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; 
v_a_1618_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1618_);
lean_dec_ref_known(v___x_1613_, 1);
if (v_isShared_1605_ == 0)
{
lean_ctor_set_tag(v___x_1604_, 0);
lean_ctor_set(v___x_1604_, 0, v_a_1618_);
v___x_1620_ = v___x_1604_;
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
v_val_1610_ = v___x_1620_;
goto v___jp_1609_;
}
}
v___jp_1609_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v_val_1610_);
v___x_1612_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1607_, v___x_1608_, v___x_1611_, v___f_1594_);
return v___x_1612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed(lean_object* v___f_1623_, lean_object* v_a_1624_, lean_object* v_op_1625_, lean_object* v_flags_1626_, lean_object* v_payload_1627_, lean_object* v_x_1628_, lean_object* v___y_1629_){
_start:
{
uint32_t v_op_boxed_1630_; uint64_t v_flags_boxed_1631_; lean_object* v_res_1632_; 
v_op_boxed_1630_ = lean_unbox_uint32(v_op_1625_);
lean_dec(v_op_1625_);
v_flags_boxed_1631_ = lean_unbox_uint64(v_flags_1626_);
lean_dec_ref(v_flags_1626_);
v_res_1632_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(v___f_1623_, v_a_1624_, v_op_boxed_1630_, v_flags_boxed_1631_, v_payload_1627_, v_x_1628_);
lean_dec(v_payload_1627_);
lean_dec(v_a_1624_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(lean_object* v___x_1633_, uint8_t v___x_1634_, lean_object* v___f_1635_, lean_object* v_a_1636_, uint32_t v_op_1637_, uint64_t v_flags_1638_, lean_object* v_payload_1639_, lean_object* v_x_1640_){
_start:
{
lean_object* v_val_1643_; 
if (lean_obj_tag(v_x_1640_) == 0)
{
lean_object* v___x_1646_; 
lean_dec_ref(v___f_1635_);
lean_dec(v___x_1633_);
v___x_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1646_, 0, v_x_1640_);
return v___x_1646_;
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1661_; 
v_a_1647_ = lean_ctor_get(v_x_1640_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_x_1640_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1649_ = v_x_1640_;
v_isShared_1650_ = v_isSharedCheck_1661_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v_x_1640_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1661_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
uint32_t v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = 0;
v___x_1652_ = lasm_js_call_into(v_a_1636_, v_op_1637_, v___x_1651_, v_flags_1638_, v_a_1647_, v_payload_1639_);
lean_dec(v_a_1647_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1655_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v___x_1652_, 1);
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 0, v_a_1653_);
v___x_1655_ = v___x_1649_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
v_val_1643_ = v___x_1655_;
goto v___jp_1642_;
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; 
v_a_1657_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1657_);
lean_dec_ref_known(v___x_1652_, 1);
if (v_isShared_1650_ == 0)
{
lean_ctor_set_tag(v___x_1649_, 0);
lean_ctor_set(v___x_1649_, 0, v_a_1657_);
v___x_1659_ = v___x_1649_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1657_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
v_val_1643_ = v___x_1659_;
goto v___jp_1642_;
}
}
}
}
v___jp_1642_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1644_, 0, v_val_1643_);
v___x_1645_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1633_, v___x_1634_, v___x_1644_, v___f_1635_);
return v___x_1645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed(lean_object* v___x_1662_, lean_object* v___x_1663_, lean_object* v___f_1664_, lean_object* v_a_1665_, lean_object* v_op_1666_, lean_object* v_flags_1667_, lean_object* v_payload_1668_, lean_object* v_x_1669_, lean_object* v___y_1670_){
_start:
{
uint8_t v___x_2003__boxed_1671_; uint32_t v_op_boxed_1672_; uint64_t v_flags_boxed_1673_; lean_object* v_res_1674_; 
v___x_2003__boxed_1671_ = lean_unbox(v___x_1663_);
v_op_boxed_1672_ = lean_unbox_uint32(v_op_1666_);
lean_dec(v_op_1666_);
v_flags_boxed_1673_ = lean_unbox_uint64(v_flags_1667_);
lean_dec_ref(v_flags_1667_);
v_res_1674_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(v___x_1662_, v___x_2003__boxed_1671_, v___f_1664_, v_a_1665_, v_op_boxed_1672_, v_flags_boxed_1673_, v_payload_1668_, v_x_1669_);
lean_dec(v_payload_1668_);
lean_dec(v_a_1665_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(lean_object* v_a_1675_, lean_object* v_x_1676_){
_start:
{
if (lean_obj_tag(v_x_1676_) == 0)
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1686_; 
v_a_1678_ = lean_ctor_get(v_x_1676_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_x_1676_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1680_ = v_x_1676_;
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v_x_1676_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
lean_object* v___x_1684_; 
v___x_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
return v___x_1684_;
}
}
}
else
{
lean_object* v___x_1687_; 
lean_dec_ref_known(v_x_1676_, 1);
v___x_1687_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1675_);
return v___x_1687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed(lean_object* v_a_1688_, lean_object* v_x_1689_, lean_object* v___y_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(v_a_1688_, v_x_1689_);
lean_dec(v_a_1688_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(lean_object* v_failurePrefix_1692_, uint32_t v_op_1693_, uint64_t v_flags_1694_, lean_object* v_payload_1695_, lean_object* v___f_1696_, lean_object* v___f_1697_, lean_object* v___f_1698_, lean_object* v_x_1699_){
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
v___f_1717_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1717_, 0, v_a_1710_);
v___x_1718_ = lean_box(v___x_1716_);
v___x_1719_ = lean_box_uint32(v_op_1693_);
v___x_1720_ = lean_box_uint64(v_flags_1694_);
lean_inc(v_payload_1695_);
v___f_1721_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed), 9, 7);
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
v___f_1737_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1737_, 0, v_a_1710_);
v___x_1738_ = lean_box_uint32(v_op_1693_);
v___x_1739_ = lean_box_uint64(v_flags_1694_);
lean_inc(v_payload_1695_);
v___f_1740_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed), 7, 5);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed(lean_object* v_failurePrefix_1757_, lean_object* v_op_1758_, lean_object* v_flags_1759_, lean_object* v_payload_1760_, lean_object* v___f_1761_, lean_object* v___f_1762_, lean_object* v___f_1763_, lean_object* v_x_1764_, lean_object* v___y_1765_){
_start:
{
uint32_t v_op_boxed_1766_; uint64_t v_flags_boxed_1767_; lean_object* v_res_1768_; 
v_op_boxed_1766_ = lean_unbox_uint32(v_op_1758_);
lean_dec(v_op_1758_);
v_flags_boxed_1767_ = lean_unbox_uint64(v_flags_1759_);
lean_dec_ref(v_flags_1759_);
v_res_1768_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(v_failurePrefix_1757_, v_op_boxed_1766_, v_flags_boxed_1767_, v_payload_1760_, v___f_1761_, v___f_1762_, v___f_1763_, v_x_1764_);
lean_dec_ref(v_failurePrefix_1757_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(lean_object* v___f_1769_, lean_object* v_x_1770_){
_start:
{
if (lean_obj_tag(v_x_1770_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1780_; 
lean_dec_ref(v___f_1769_);
v_a_1772_ = lean_ctor_get(v_x_1770_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_x_1770_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1774_ = v_x_1770_;
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v_x_1770_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1777_; 
if (v_isShared_1775_ == 0)
{
v___x_1777_ = v___x_1774_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1772_);
v___x_1777_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1777_);
return v___x_1778_;
}
}
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1782_; 
v_a_1781_ = lean_ctor_get(v_x_1770_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v_x_1770_, 1);
v___x_1782_ = lean_apply_2(v___f_1769_, v_a_1781_, lean_box(0));
return v___x_1782_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed(lean_object* v___f_1783_, lean_object* v_x_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(v___f_1783_, v_x_1784_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_1794_, lean_object* v_key_1795_){
_start:
{
if (lean_obj_tag(v_d_1794_) == 8)
{
lean_object* v___x_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1824_; 
v___x_1796_ = l_Lasm_JS_Data_field(v_d_1794_, v_key_1795_);
v_isSharedCheck_1824_ = !lean_is_exclusive(v_d_1794_);
if (v_isSharedCheck_1824_ == 0)
{
lean_object* v_unused_1825_; 
v_unused_1825_ = lean_ctor_get(v_d_1794_, 0);
lean_dec(v_unused_1825_);
v___x_1798_ = v_d_1794_;
v_isShared_1799_ = v_isSharedCheck_1824_;
goto v_resetjp_1797_;
}
else
{
lean_dec(v_d_1794_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1824_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
if (lean_obj_tag(v___x_1796_) == 2)
{
uint8_t v_b_1800_; lean_object* v___x_1801_; lean_object* v___x_1803_; 
v_b_1800_ = lean_ctor_get_uint8(v___x_1796_, 0);
lean_dec_ref_known(v___x_1796_, 0);
v___x_1801_ = lean_box(v_b_1800_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set_tag(v___x_1798_, 1);
lean_ctor_set(v___x_1798_, 0, v___x_1801_);
v___x_1803_ = v___x_1798_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v___x_1801_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; uint8_t v___x_1815_; 
v___x_1805_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1806_ = lean_string_append(v___x_1805_, v_key_1795_);
v___x_1807_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1808_ = lean_string_append(v___x_1806_, v___x_1807_);
v___x_1809_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_1810_ = lean_string_append(v___x_1808_, v___x_1809_);
v___x_1811_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1812_ = lean_string_append(v___x_1810_, v___x_1811_);
v___x_1813_ = l_Lasm_JS_Data_describe(v___x_1796_);
v___x_1814_ = lean_string_append(v___x_1812_, v___x_1813_);
lean_dec_ref(v___x_1813_);
v___x_1815_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1819_; 
v___x_1816_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6));
v___x_1817_ = lean_string_append(v___x_1814_, v___x_1816_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set_tag(v___x_1798_, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1817_);
v___x_1819_ = v___x_1798_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
else
{
lean_object* v___x_1822_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set_tag(v___x_1798_, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1814_);
v___x_1822_ = v___x_1798_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1814_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
}
}
else
{
lean_object* v___x_1826_; 
lean_dec(v_d_1794_);
v___x_1826_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__5));
return v___x_1826_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_1827_, lean_object* v_key_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(v_d_1827_, v_key_1828_);
lean_dec_ref(v_key_1828_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object* v_d_1833_, lean_object* v_key_1834_){
_start:
{
if (lean_obj_tag(v_d_1833_) == 8)
{
lean_object* v___x_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1866_; 
v___x_1835_ = l_Lasm_JS_Data_field(v_d_1833_, v_key_1834_);
v_isSharedCheck_1866_ = !lean_is_exclusive(v_d_1833_);
if (v_isSharedCheck_1866_ == 0)
{
lean_object* v_unused_1867_; 
v_unused_1867_ = lean_ctor_get(v_d_1833_, 0);
lean_dec(v_unused_1867_);
v___x_1837_ = v_d_1833_;
v_isShared_1838_ = v_isSharedCheck_1866_;
goto v_resetjp_1836_;
}
else
{
lean_dec(v_d_1833_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1866_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
if (lean_obj_tag(v___x_1835_) == 4)
{
lean_object* v_s_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1846_; 
lean_del_object(v___x_1837_);
v_s_1839_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1846_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1841_ = v___x_1835_;
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_s_1839_);
lean_dec(v___x_1835_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set_tag(v___x_1841_, 1);
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_s_1839_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
else
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1847_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1848_ = lean_string_append(v___x_1847_, v_key_1834_);
v___x_1849_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1850_ = lean_string_append(v___x_1848_, v___x_1849_);
v___x_1851_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0));
v___x_1852_ = lean_string_append(v___x_1850_, v___x_1851_);
v___x_1853_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1854_ = lean_string_append(v___x_1852_, v___x_1853_);
v___x_1855_ = l_Lasm_JS_Data_describe(v___x_1835_);
v___x_1856_ = lean_string_append(v___x_1854_, v___x_1855_);
lean_dec_ref(v___x_1855_);
v___x_1857_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1861_; 
v___x_1858_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6));
v___x_1859_ = lean_string_append(v___x_1856_, v___x_1858_);
if (v_isShared_1838_ == 0)
{
lean_ctor_set_tag(v___x_1837_, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1859_);
v___x_1861_ = v___x_1837_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
else
{
lean_object* v___x_1864_; 
if (v_isShared_1838_ == 0)
{
lean_ctor_set_tag(v___x_1837_, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1856_);
v___x_1864_ = v___x_1837_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v___x_1856_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
else
{
lean_object* v___x_1868_; 
lean_dec(v_d_1833_);
v___x_1868_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1));
return v___x_1868_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object* v_d_1869_, lean_object* v_key_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_d_1869_, v_key_1870_);
lean_dec_ref(v_key_1870_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(size_t v_sz_1872_, size_t v_i_1873_, lean_object* v_bs_1874_){
_start:
{
uint8_t v___x_1875_; 
v___x_1875_ = lean_usize_dec_lt(v_i_1873_, v_sz_1872_);
if (v___x_1875_ == 0)
{
lean_object* v___x_1876_; 
v___x_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1876_, 0, v_bs_1874_);
return v___x_1876_;
}
else
{
lean_object* v_v_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v_v_1877_ = lean_array_uget_borrowed(v_bs_1874_, v_i_1873_);
v___x_1878_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__0));
lean_inc(v_v_1877_);
v___x_1879_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v_v_1877_, v___x_1878_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_dec_ref(v_bs_1874_);
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1879_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1879_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v_a_1888_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_a_1888_);
lean_dec_ref_known(v___x_1879_, 1);
v___x_1889_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__1));
lean_inc(v_v_1877_);
v___x_1890_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_v_1877_, v___x_1889_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1898_; 
lean_dec(v_a_1888_);
lean_dec_ref(v_bs_1874_);
v_a_1891_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1893_ = v___x_1890_;
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1890_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1891_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1900_; lean_object* v_bs_x27_1901_; lean_object* v___x_1902_; double v___x_1903_; size_t v___x_1904_; size_t v___x_1905_; lean_object* v___x_1906_; 
v_a_1899_ = lean_ctor_get(v___x_1890_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1890_, 1);
v___x_1900_ = lean_unsigned_to_nat(0u);
v_bs_x27_1901_ = lean_array_uset(v_bs_1874_, v_i_1873_, v___x_1900_);
v___x_1902_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1902_, 0, v_a_1899_);
v___x_1903_ = lean_unbox_float(v_a_1888_);
lean_dec(v_a_1888_);
lean_ctor_set_float(v___x_1902_, sizeof(void*)*1, v___x_1903_);
v___x_1904_ = ((size_t)1ULL);
v___x_1905_ = lean_usize_add(v_i_1873_, v___x_1904_);
v___x_1906_ = lean_array_uset(v_bs_x27_1901_, v_i_1873_, v___x_1902_);
v_i_1873_ = v___x_1905_;
v_bs_1874_ = v___x_1906_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_sz_1908_, lean_object* v_i_1909_, lean_object* v_bs_1910_){
_start:
{
size_t v_sz_boxed_1911_; size_t v_i_boxed_1912_; lean_object* v_res_1913_; 
v_sz_boxed_1911_ = lean_unbox_usize(v_sz_1908_);
lean_dec(v_sz_1908_);
v_i_boxed_1912_ = lean_unbox_usize(v_i_1909_);
lean_dec(v_i_1909_);
v_res_1913_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_sz_boxed_1911_, v_i_boxed_1912_, v_bs_1910_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_1921_, lean_object* v_key_1922_){
_start:
{
if (lean_obj_tag(v_d_1921_) == 8)
{
lean_object* v___x_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1967_; 
v___x_1923_ = l_Lasm_JS_Data_field(v_d_1921_, v_key_1922_);
v_isSharedCheck_1967_ = !lean_is_exclusive(v_d_1921_);
if (v_isSharedCheck_1967_ == 0)
{
lean_object* v_unused_1968_; 
v_unused_1968_ = lean_ctor_get(v_d_1921_, 0);
lean_dec(v_unused_1968_);
v___x_1925_ = v_d_1921_;
v_isShared_1926_ = v_isSharedCheck_1967_;
goto v_resetjp_1924_;
}
else
{
lean_dec(v_d_1921_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1967_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v_a_1928_; 
if (lean_obj_tag(v___x_1923_) == 7)
{
lean_object* v_items_1953_; size_t v_sz_1954_; size_t v___x_1955_; lean_object* v___x_1956_; 
v_items_1953_ = lean_ctor_get(v___x_1923_, 0);
lean_inc_ref(v_items_1953_);
v_sz_1954_ = lean_array_size(v_items_1953_);
v___x_1955_ = ((size_t)0ULL);
v___x_1956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_sz_1954_, v___x_1955_, v_items_1953_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; uint8_t v___x_1961_; 
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
lean_inc(v_a_1957_);
lean_dec_ref_known(v___x_1956_, 1);
v___x_1958_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__3));
v___x_1959_ = lean_string_utf8_byte_size(v_a_1957_);
v___x_1960_ = lean_unsigned_to_nat(0u);
v___x_1961_ = lean_nat_dec_eq(v___x_1959_, v___x_1960_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1962_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__4));
v___x_1963_ = lean_string_append(v___x_1962_, v_a_1957_);
lean_dec(v_a_1957_);
v___x_1964_ = lean_string_append(v___x_1958_, v___x_1963_);
lean_dec_ref(v___x_1963_);
v_a_1928_ = v___x_1964_;
goto v___jp_1927_;
}
else
{
lean_dec(v_a_1957_);
v_a_1928_ = v___x_1958_;
goto v___jp_1927_;
}
}
else
{
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_object* v_a_1965_; 
v_a_1965_ = lean_ctor_get(v___x_1956_, 0);
lean_inc(v_a_1965_);
lean_dec_ref_known(v___x_1956_, 1);
v_a_1928_ = v_a_1965_;
goto v___jp_1927_;
}
else
{
lean_dec_ref_known(v___x_1923_, 1);
lean_del_object(v___x_1925_);
return v___x_1956_;
}
}
}
else
{
lean_object* v___x_1966_; 
v___x_1966_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v_a_1928_ = v___x_1966_;
goto v___jp_1927_;
}
v___jp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; uint8_t v___x_1941_; 
v___x_1929_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1930_ = lean_string_append(v___x_1929_, v_key_1922_);
v___x_1931_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1932_ = lean_string_append(v___x_1930_, v___x_1931_);
v___x_1933_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__0));
v___x_1934_ = lean_string_append(v___x_1932_, v___x_1933_);
v___x_1935_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1936_ = lean_string_append(v___x_1934_, v___x_1935_);
v___x_1937_ = l_Lasm_JS_Data_describe(v___x_1923_);
v___x_1938_ = lean_string_append(v___x_1936_, v___x_1937_);
lean_dec_ref(v___x_1937_);
v___x_1939_ = lean_string_utf8_byte_size(v_a_1928_);
v___x_1940_ = lean_unsigned_to_nat(0u);
v___x_1941_ = lean_nat_dec_eq(v___x_1939_, v___x_1940_);
if (v___x_1941_ == 0)
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1948_; 
v___x_1942_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1));
v___x_1943_ = lean_string_append(v___x_1942_, v_a_1928_);
lean_dec_ref(v_a_1928_);
v___x_1944_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2));
v___x_1945_ = lean_string_append(v___x_1943_, v___x_1944_);
v___x_1946_ = lean_string_append(v___x_1938_, v___x_1945_);
lean_dec_ref(v___x_1945_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set_tag(v___x_1925_, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1946_);
v___x_1948_ = v___x_1925_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___x_1946_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
else
{
lean_object* v___x_1951_; 
lean_dec_ref(v_a_1928_);
if (v_isShared_1926_ == 0)
{
lean_ctor_set_tag(v___x_1925_, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1938_);
v___x_1951_ = v___x_1925_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1938_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
else
{
lean_object* v___x_1969_; 
lean_dec(v_d_1921_);
v___x_1969_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__5));
return v___x_1969_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_1970_, lean_object* v_key_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(v_d_1970_, v_key_1971_);
lean_dec_ref(v_key_1971_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(lean_object* v_context_1973_, lean_object* v_d_1974_){
_start:
{
lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1983_; lean_object* v_received_1984_; lean_object* v___y_2003_; lean_object* v_a_2006_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__0));
lean_inc(v_d_1974_);
v___x_2031_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(v_d_1974_, v___x_2030_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_a_2032_);
lean_dec_ref_known(v___x_2031_, 1);
v_a_2006_ = v_a_2032_;
goto v___jp_2005_;
}
else
{
lean_object* v_a_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v_a_2033_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_a_2033_);
lean_dec_ref_known(v___x_2031_, 1);
v___x_2034_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__1));
lean_inc(v_d_1974_);
v___x_2035_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(v_d_1974_, v___x_2034_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v_a_2036_; 
lean_dec(v_a_2033_);
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
lean_inc(v_a_2036_);
lean_dec_ref_known(v___x_2035_, 1);
v_a_2006_ = v_a_2036_;
goto v___jp_2005_;
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2046_; 
lean_dec(v_d_1974_);
v_a_2037_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2039_ = v___x_2035_;
v_isShared_2040_ = v_isSharedCheck_2046_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_2035_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2046_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2041_; uint8_t v___x_2042_; lean_object* v___x_2044_; 
v___x_2041_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2041_, 0, v_a_2037_);
v___x_2042_ = lean_unbox(v_a_2033_);
lean_dec(v_a_2033_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*1, v___x_2042_);
if (v_isShared_2040_ == 0)
{
lean_ctor_set_tag(v___x_2039_, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2041_);
v___x_2044_ = v___x_2039_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2041_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
}
v___jp_1976_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1979_ = lean_string_append(v___y_1977_, v___y_1978_);
lean_dec_ref(v___y_1978_);
v___x_1980_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
return v___x_1981_;
}
v___jp_1982_:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; 
v___x_1985_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0));
v___x_1986_ = lean_string_append(v___x_1985_, v_context_1973_);
v___x_1987_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__1));
v___x_1988_ = lean_string_append(v___x_1986_, v___x_1987_);
v___x_1989_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__2));
v___x_1990_ = lean_string_append(v___x_1988_, v___x_1989_);
v___x_1991_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__3));
v___x_1992_ = lean_string_append(v___x_1990_, v___x_1991_);
v___x_1993_ = lean_string_append(v___x_1992_, v_received_1984_);
lean_dec_ref(v_received_1984_);
v___x_1994_ = lean_string_utf8_byte_size(v___y_1983_);
v___x_1995_ = lean_unsigned_to_nat(0u);
v___x_1996_ = lean_nat_dec_eq(v___x_1994_, v___x_1995_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1997_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1));
v___x_1998_ = lean_string_append(v___x_1997_, v___y_1983_);
lean_dec_ref(v___y_1983_);
v___x_1999_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2));
v___x_2000_ = lean_string_append(v___x_1998_, v___x_1999_);
v___y_1977_ = v___x_1993_;
v___y_1978_ = v___x_2000_;
goto v___jp_1976_;
}
else
{
lean_object* v___x_2001_; 
lean_dec_ref(v___y_1983_);
v___x_2001_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___y_1977_ = v___x_1993_;
v___y_1978_ = v___x_2001_;
goto v___jp_1976_;
}
}
v___jp_2002_:
{
lean_object* v___x_2004_; 
v___x_2004_ = l_Lasm_JS_Data_describe(v_d_1974_);
v___y_1983_ = v___y_2003_;
v_received_1984_ = v___x_2004_;
goto v___jp_1982_;
}
v___jp_2005_:
{
if (lean_obj_tag(v_d_1974_) == 9)
{
lean_object* v_value_2007_; lean_object* v_description_2008_; lean_object* v___x_2009_; uint8_t v___x_2010_; 
v_value_2007_ = lean_ctor_get(v_d_1974_, 0);
v_description_2008_ = lean_ctor_get(v_d_1974_, 1);
v___x_2009_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_2010_ = lean_string_dec_eq(v_description_2008_, v___x_2009_);
if (v___x_2010_ == 0)
{
v___y_2003_ = v_a_2006_;
goto v___jp_2002_;
}
else
{
lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2027_; 
lean_inc(v_value_2007_);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_d_1974_);
if (v_isSharedCheck_2027_ == 0)
{
lean_object* v_unused_2028_; lean_object* v_unused_2029_; 
v_unused_2028_ = lean_ctor_get(v_d_1974_, 1);
lean_dec(v_unused_2028_);
v_unused_2029_ = lean_ctor_get(v_d_1974_, 0);
lean_dec(v_unused_2029_);
v___x_2012_ = v_d_1974_;
v_isShared_2013_ = v_isSharedCheck_2027_;
goto v_resetjp_2011_;
}
else
{
lean_dec(v_d_1974_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2027_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
uint32_t v___x_2014_; uint64_t v___x_2015_; lean_object* v___x_2017_; 
v___x_2014_ = 206;
v___x_2015_ = 0ULL;
lean_inc(v_value_2007_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 1, v___x_2009_);
v___x_2017_ = v___x_2012_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_value_2007_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v___x_2009_);
v___x_2017_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
uint32_t v___x_2018_; lean_object* v___x_2019_; 
v___x_2018_ = lasm_js_value_handle(v_value_2007_);
lean_dec(v_value_2007_);
v___x_2019_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2014_, v___x_2015_, v___x_2017_, v___x_2018_);
lean_dec_ref(v___x_2017_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_object* v_a_2020_; uint8_t v___x_2021_; 
v_a_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc(v_a_2020_);
lean_dec_ref_known(v___x_2019_, 1);
v___x_2021_ = lean_string_validate_utf8(v_a_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; lean_object* v___x_2023_; 
lean_dec(v_a_2020_);
v___x_2022_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10);
v___x_2023_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2022_);
v___y_1983_ = v_a_2006_;
v_received_1984_ = v___x_2023_;
goto v___jp_1982_;
}
else
{
lean_object* v___x_2024_; 
v___x_2024_ = lean_string_from_utf8_unchecked(v_a_2020_);
v___y_1983_ = v_a_2006_;
v_received_1984_ = v___x_2024_;
goto v___jp_1982_;
}
}
else
{
lean_object* v___x_2025_; 
lean_dec_ref_known(v___x_2019_, 1);
v___x_2025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__11));
v___y_1983_ = v_a_2006_;
v_received_1984_ = v___x_2025_;
goto v___jp_1982_;
}
}
}
}
}
else
{
v___y_2003_ = v_a_2006_;
goto v___jp_2002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3___boxed(lean_object* v_context_2047_, lean_object* v_d_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(v_context_2047_, v_d_2048_);
lean_dec_ref(v_context_2047_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(lean_object* v_context_2051_, lean_object* v_x_2052_){
_start:
{
lean_object* v_val_2055_; 
if (lean_obj_tag(v_x_2052_) == 0)
{
lean_object* v_a_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2065_; 
v_a_2057_ = lean_ctor_get(v_x_2052_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v_x_2052_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2059_ = v_x_2052_;
v_isShared_2060_ = v_isSharedCheck_2065_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_a_2057_);
lean_dec(v_x_2052_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2065_;
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
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2057_);
v___x_2062_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
lean_object* v___x_2063_; 
v___x_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2062_);
return v___x_2063_;
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2079_; 
v_a_2066_ = lean_ctor_get(v_x_2052_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v_x_2052_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2068_ = v_x_2052_;
v_isShared_2069_ = v_isSharedCheck_2079_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v_x_2052_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2079_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(v_context_2051_, v_a_2066_);
if (lean_obj_tag(v___x_2070_) == 0)
{
lean_object* v_a_2071_; lean_object* v___x_2073_; 
v_a_2071_ = lean_ctor_get(v___x_2070_, 0);
lean_inc(v_a_2071_);
lean_dec_ref_known(v___x_2070_, 1);
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 0, v_a_2071_);
v___x_2073_ = v___x_2068_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2071_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
v_val_2055_ = v___x_2073_;
goto v___jp_2054_;
}
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2077_; 
v_a_2075_ = lean_ctor_get(v___x_2070_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2070_, 1);
if (v_isShared_2069_ == 0)
{
lean_ctor_set_tag(v___x_2068_, 0);
lean_ctor_set(v___x_2068_, 0, v_a_2075_);
v___x_2077_ = v___x_2068_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2075_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
v_val_2055_ = v___x_2077_;
goto v___jp_2054_;
}
}
}
}
v___jp_2054_:
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2056_, 0, v_val_2055_);
return v___x_2056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed(lean_object* v_context_2080_, lean_object* v_x_2081_, lean_object* v___y_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(v_context_2080_, v_x_2081_);
lean_dec_ref(v_context_2080_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(lean_object* v_context_2084_, uint32_t v_op_2085_, uint64_t v_flags_2086_, lean_object* v_payload_2087_, lean_object* v_failurePrefix_2088_){
_start:
{
lean_object* v___f_2090_; lean_object* v___f_2091_; lean_object* v___f_2092_; lean_object* v___f_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___f_2096_; lean_object* v___f_2097_; lean_object* v___x_2098_; uint8_t v___x_2099_; lean_object* v_val_2101_; lean_object* v___x_2104_; 
v___f_2090_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2090_, 0, v_context_2084_);
v___f_2091_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2091_, 0, v___f_2090_);
v___f_2092_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2092_, 0, v___f_2091_);
lean_inc_ref(v_failurePrefix_2088_);
v___f_2093_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2093_, 0, v_failurePrefix_2088_);
v___x_2094_ = lean_box_uint32(v_op_2085_);
v___x_2095_ = lean_box_uint64(v_flags_2086_);
lean_inc_ref(v___f_2092_);
v___f_2096_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2096_, 0, v_failurePrefix_2088_);
lean_closure_set(v___f_2096_, 1, v___x_2094_);
lean_closure_set(v___f_2096_, 2, v___x_2095_);
lean_closure_set(v___f_2096_, 3, v_payload_2087_);
lean_closure_set(v___f_2096_, 4, v___f_2093_);
lean_closure_set(v___f_2096_, 5, v___f_2092_);
lean_closure_set(v___f_2096_, 6, v___f_2092_);
v___f_2097_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2097_, 0, v___f_2096_);
v___x_2098_ = lean_unsigned_to_nat(0u);
v___x_2099_ = 0;
v___x_2104_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2104_) == 0)
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
v_a_2105_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2104_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2104_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set_tag(v___x_2107_, 1);
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
v_val_2101_ = v___x_2110_;
goto v___jp_2100_;
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
v_a_2113_ = lean_ctor_get(v___x_2104_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2104_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2104_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2104_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
lean_ctor_set_tag(v___x_2115_, 0);
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
v_val_2101_ = v___x_2118_;
goto v___jp_2100_;
}
}
}
v___jp_2100_:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2102_, 0, v_val_2101_);
v___x_2103_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2098_, v___x_2099_, v___x_2102_, v___f_2097_);
return v___x_2103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___boxed(lean_object* v_context_2121_, lean_object* v_op_2122_, lean_object* v_flags_2123_, lean_object* v_payload_2124_, lean_object* v_failurePrefix_2125_, lean_object* v_a_2126_){
_start:
{
uint32_t v_op_boxed_2127_; uint64_t v_flags_boxed_2128_; lean_object* v_res_2129_; 
v_op_boxed_2127_ = lean_unbox_uint32(v_op_2122_);
lean_dec(v_op_2122_);
v_flags_boxed_2128_ = lean_unbox_uint64(v_flags_2123_);
lean_dec_ref(v_flags_2123_);
v_res_2129_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(v_context_2121_, v_op_boxed_2127_, v_flags_boxed_2128_, v_payload_2124_, v_failurePrefix_2125_);
return v_res_2129_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(uint8_t v_await_2130_, uint64_t v_extra_2131_){
_start:
{
uint64_t v___x_2132_; uint64_t v___y_2134_; 
v___x_2132_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0);
if (v_await_2130_ == 0)
{
uint64_t v___x_2137_; 
v___x_2137_ = 0ULL;
v___y_2134_ = v___x_2137_;
goto v___jp_2133_;
}
else
{
uint64_t v___x_2138_; 
v___x_2138_ = 2ULL;
v___y_2134_ = v___x_2138_;
goto v___jp_2133_;
}
v___jp_2133_:
{
uint64_t v___x_2135_; uint64_t v___x_2136_; 
v___x_2135_ = lean_uint64_lor(v___x_2132_, v___y_2134_);
v___x_2136_ = lean_uint64_lor(v___x_2135_, v_extra_2131_);
return v___x_2136_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1___boxed(lean_object* v_await_2139_, lean_object* v_extra_2140_){
_start:
{
uint8_t v_await_boxed_2141_; uint64_t v_extra_boxed_2142_; uint64_t v_res_2143_; lean_object* v_r_2144_; 
v_await_boxed_2141_ = lean_unbox(v_await_2139_);
v_extra_boxed_2142_ = lean_unbox_uint64(v_extra_2140_);
lean_dec_ref(v_extra_2140_);
v_res_2143_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(v_await_boxed_2141_, v_extra_boxed_2142_);
v_r_2144_ = lean_box_uint64(v_res_2143_);
return v_r_2144_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1(void){
_start:
{
uint64_t v___x_2146_; uint8_t v___x_2147_; uint64_t v___x_2148_; 
v___x_2146_ = 8ULL;
v___x_2147_ = 0;
v___x_2148_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(v___x_2147_, v___x_2146_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(lean_object* v_o_2149_, lean_object* v_name_2150_, lean_object* v_args_2151_){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; uint32_t v___x_2158_; uint64_t v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2153_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_2154_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2154_, 0, v_o_2149_);
lean_ctor_set(v___x_2154_, 1, v___x_2153_);
lean_inc_ref(v_name_2150_);
v___x_2155_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2155_, 0, v_name_2150_);
v___x_2156_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__0));
v___x_2157_ = lean_string_append(v___x_2156_, v_name_2150_);
lean_dec_ref(v_name_2150_);
v___x_2158_ = 205;
v___x_2159_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1);
v___x_2160_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2160_, 0, v_args_2151_);
v___x_2161_ = lean_unsigned_to_nat(3u);
v___x_2162_ = lean_mk_empty_array_with_capacity(v___x_2161_);
v___x_2163_ = lean_array_push(v___x_2162_, v___x_2154_);
v___x_2164_ = lean_array_push(v___x_2163_, v___x_2155_);
v___x_2165_ = lean_array_push(v___x_2164_, v___x_2160_);
v___x_2166_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
v___x_2167_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(v___x_2157_, v___x_2158_, v___x_2159_, v___x_2166_, v___x_2153_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___boxed(lean_object* v_o_2168_, lean_object* v_name_2169_, lean_object* v_args_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_o_2168_, v_name_2169_, v_args_2170_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(lean_object* v_x_2173_){
_start:
{
if (lean_obj_tag(v_x_2173_) == 0)
{
lean_object* v___x_2174_; 
v___x_2174_ = lean_box(0);
return v___x_2174_;
}
else
{
lean_object* v_val_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2185_; 
v_val_2175_ = lean_ctor_get(v_x_2173_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v_x_2173_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2177_ = v_x_2173_;
v_isShared_2178_ = v_isSharedCheck_2185_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_val_2175_);
lean_dec(v_x_2173_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2185_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
size_t v_sz_2179_; size_t v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2183_; 
v_sz_2179_ = lean_array_size(v_val_2175_);
v___x_2180_ = ((size_t)0ULL);
v___x_2181_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2179_, v___x_2180_, v_val_2175_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set_tag(v___x_2177_, 7);
lean_ctor_set(v___x_2177_, 0, v___x_2181_);
v___x_2183_ = v___x_2177_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge(lean_object* v_self_2187_, lean_object* v_options_2188_){
_start:
{
lean_object* v_tags_2190_; lean_object* v_pathPrefixes_2191_; lean_object* v_purgeEverything_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v_tags_2190_ = lean_ctor_get(v_options_2188_, 0);
lean_inc(v_tags_2190_);
v_pathPrefixes_2191_ = lean_ctor_get(v_options_2188_, 1);
lean_inc(v_pathPrefixes_2191_);
v_purgeEverything_2192_ = lean_ctor_get(v_options_2188_, 2);
lean_inc(v_purgeEverything_2192_);
lean_dec_ref(v_options_2188_);
v___x_2193_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheContext_purge___closed__0));
v___x_2194_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0));
v___x_2195_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_tags_2190_);
v___x_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2194_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1));
v___x_2198_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_pathPrefixes_2191_);
v___x_2199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2197_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2));
v___x_2201_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_purgeEverything_2192_);
lean_dec(v_purgeEverything_2192_);
v___x_2202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2200_);
lean_ctor_set(v___x_2202_, 1, v___x_2201_);
v___x_2203_ = lean_unsigned_to_nat(3u);
v___x_2204_ = lean_mk_empty_array_with_capacity(v___x_2203_);
v___x_2205_ = lean_array_push(v___x_2204_, v___x_2196_);
v___x_2206_ = lean_array_push(v___x_2205_, v___x_2199_);
v___x_2207_ = lean_array_push(v___x_2206_, v___x_2202_);
v___x_2208_ = l_Lasm_JS_Web_Support_fields(v___x_2207_);
lean_dec_ref(v___x_2207_);
v___x_2209_ = lean_unsigned_to_nat(1u);
v___x_2210_ = lean_mk_empty_array_with_capacity(v___x_2209_);
v___x_2211_ = lean_array_push(v___x_2210_, v___x_2208_);
v___x_2212_ = l_Lasm_JS_Web_Support_args(v___x_2211_);
v___x_2213_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_self_2187_, v___x_2193_, v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge___boxed(lean_object* v_self_2214_, lean_object* v_options_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Lasm_JS_Cloudflare_CacheContext_purge(v_self_2214_, v_options_2215_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate(lean_object* v_self_2219_, lean_object* v_options_2220_){
_start:
{
lean_object* v_tags_2222_; lean_object* v_pathPrefixes_2223_; lean_object* v_purgeEverything_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v_tags_2222_ = lean_ctor_get(v_options_2220_, 0);
lean_inc(v_tags_2222_);
v_pathPrefixes_2223_ = lean_ctor_get(v_options_2220_, 1);
lean_inc(v_pathPrefixes_2223_);
v_purgeEverything_2224_ = lean_ctor_get(v_options_2220_, 2);
lean_inc(v_purgeEverything_2224_);
lean_dec_ref(v_options_2220_);
v___x_2225_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheContext_invalidate___closed__0));
v___x_2226_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0));
v___x_2227_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_tags_2222_);
v___x_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2226_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1));
v___x_2230_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_pathPrefixes_2223_);
v___x_2231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2229_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
v___x_2232_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2));
v___x_2233_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_purgeEverything_2224_);
lean_dec(v_purgeEverything_2224_);
v___x_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2232_);
lean_ctor_set(v___x_2234_, 1, v___x_2233_);
v___x_2235_ = lean_unsigned_to_nat(3u);
v___x_2236_ = lean_mk_empty_array_with_capacity(v___x_2235_);
v___x_2237_ = lean_array_push(v___x_2236_, v___x_2228_);
v___x_2238_ = lean_array_push(v___x_2237_, v___x_2231_);
v___x_2239_ = lean_array_push(v___x_2238_, v___x_2234_);
v___x_2240_ = l_Lasm_JS_Web_Support_fields(v___x_2239_);
lean_dec_ref(v___x_2239_);
v___x_2241_ = lean_unsigned_to_nat(1u);
v___x_2242_ = lean_mk_empty_array_with_capacity(v___x_2241_);
v___x_2243_ = lean_array_push(v___x_2242_, v___x_2240_);
v___x_2244_ = l_Lasm_JS_Web_Support_args(v___x_2243_);
v___x_2245_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_self_2219_, v___x_2225_, v___x_2244_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate___boxed(lean_object* v_self_2246_, lean_object* v_options_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lasm_JS_Cloudflare_CacheContext_invalidate(v_self_2246_, v_options_2247_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(lean_object* v_self_2251_){
_start:
{
lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2253_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___closed__0));
v___x_2254_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0(v_self_2251_, v___x_2253_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___boxed(lean_object* v_self_2255_, lean_object* v_a_2256_){
_start:
{
lean_object* v_res_2257_; 
v_res_2257_ = l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(v_self_2255_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron(lean_object* v_self_2259_){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_cron___closed__0));
v___x_2262_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(v_self_2259_, v___x_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron___boxed(lean_object* v_self_2263_, lean_object* v_a_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_Lasm_JS_Cloudflare_ScheduledController_cron(v_self_2263_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry(lean_object* v_self_2267_){
_start:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2269_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_noRetry___closed__0));
v___x_2270_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2, &l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2_once, _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2);
v___x_2271_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_2267_, v___x_2269_, v___x_2270_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry___boxed(lean_object* v_self_2272_, lean_object* v_a_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = l_Lasm_JS_Cloudflare_ScheduledController_noRetry(v_self_2272_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg(lean_object* v_inst_2280_){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2282_ = l_Lasm_JS_instFromJSData;
v___x_2283_ = ((lean_object*)(l_Lasm_JS_Cloudflare_env___redArg___closed__0));
v___x_2284_ = ((lean_object*)(l_Lasm_JS_Cloudflare_env___redArg___closed__2));
v___x_2285_ = l_Lasm_JS_Cloudflare_Support_getExport___redArg(v___x_2283_, v___x_2284_, v___x_2282_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2287_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2285_, 1);
v___x_2287_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_2280_, v_a_2286_);
return v___x_2287_;
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
lean_dec_ref(v_inst_2280_);
v_a_2288_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2285_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2285_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg___boxed(lean_object* v_inst_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v_res_2298_; 
v_res_2298_ = l_Lasm_JS_Cloudflare_env___redArg(v_inst_2296_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env(lean_object* v_Env_2299_, lean_object* v_inst_2300_){
_start:
{
lean_object* v___x_2302_; 
v___x_2302_ = l_Lasm_JS_Cloudflare_env___redArg(v_inst_2300_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___boxed(lean_object* v_Env_2303_, lean_object* v_inst_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l_Lasm_JS_Cloudflare_env(v_Env_2303_, v_inst_2304_);
return v_res_2306_;
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
