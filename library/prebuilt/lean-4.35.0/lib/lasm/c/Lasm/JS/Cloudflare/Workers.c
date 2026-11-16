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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
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
lean_object* v___f_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___f_420_; lean_object* v___f_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
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
v___x_423_ = l_Lasm_JS_Function_ofFn(v___f_420_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; lean_object* v___x_425_; 
v_a_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_423_, 1);
v___x_425_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v___x_427_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_428_ = l_Lasm_JS_Value_get___redArg(v___f_421_, v_a_426_, v___x_427_, v___x_422_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___y_436_; uint8_t v___x_463_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref_known(v___x_428_, 1);
v___x_430_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_431_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_424_);
v___x_432_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_432_, 0, v_a_424_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_434_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_463_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; 
v___x_464_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_436_ = v___x_464_;
goto v___jp_435_;
}
else
{
lean_object* v___x_465_; 
v___x_465_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_436_ = v___x_465_;
goto v___jp_435_;
}
v___jp_435_:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
lean_inc(v___y_436_);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_434_);
lean_ctor_set(v___x_437_, 1, v___y_436_);
v___x_438_ = lean_box(0);
v___x_439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = l_Lasm_JS_obj(v___x_439_);
v___x_441_ = lean_unsigned_to_nat(3u);
v___x_442_ = lean_mk_empty_array_with_capacity(v___x_441_);
v___x_443_ = lean_array_push(v___x_442_, v___x_432_);
v___x_444_ = lean_array_push(v___x_443_, v___x_433_);
v___x_445_ = lean_array_push(v___x_444_, v___x_440_);
v___x_446_ = l_Lasm_JS_Value_callMethod___redArg(v_a_429_, v___x_430_, v___x_445_, v___x_422_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_453_ == 0)
{
lean_object* v_unused_454_; 
v_unused_454_ = lean_ctor_get(v___x_446_, 0);
lean_dec(v_unused_454_);
v___x_448_ = v___x_446_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_dec(v___x_446_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 0, v_a_424_);
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_424_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
else
{
lean_object* v_a_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_462_; 
lean_dec(v_a_424_);
v_a_455_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_462_ == 0)
{
v___x_457_ = v___x_446_;
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_a_455_);
lean_dec(v___x_446_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_462_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_460_; 
if (v_isShared_458_ == 0)
{
v___x_460_ = v___x_457_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_455_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
lean_dec(v_a_424_);
v_a_466_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_428_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_428_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
lean_dec(v_a_424_);
v_a_474_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_425_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_425_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
v_a_482_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_423_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_423_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___boxed(lean_object* v_inst_490_, lean_object* v_f_491_, lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(v_inst_490_, v_f_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(lean_object* v_Env_494_, lean_object* v_inst_495_, lean_object* v_f_496_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(v_inst_495_, v_f_496_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___boxed(lean_object* v_Env_499_, lean_object* v_inst_500_, lean_object* v_f_501_, lean_object* v_a_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(v_Env_499_, v_inst_500_, v_f_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_504_, lean_object* v___x_505_, lean_object* v_inst_506_, lean_object* v___x_507_, lean_object* v_f_508_, lean_object* v_args_509_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = lean_unsigned_to_nat(0u);
v___x_512_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_504_, v_args_509_, v___x_511_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_512_, 1);
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_505_, v_args_509_, v___x_514_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_517_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_506_, v_a_516_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_518_);
lean_dec_ref_known(v___x_517_, 1);
v___x_519_ = lean_unsigned_to_nat(2u);
v___x_520_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_507_, v_args_509_, v___x_519_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_522_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_521_);
lean_dec_ref_known(v___x_520_, 1);
v___x_522_ = lean_apply_4(v_f_508_, v_a_513_, v_a_518_, v_a_521_, lean_box(0));
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_532_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_532_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_532_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_532_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_527_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_528_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_528_, 0, v_a_523_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_528_);
v___x_530_ = v___x_525_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
else
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
v_a_533_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_522_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_522_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_a_518_);
lean_dec(v_a_513_);
lean_dec_ref(v_f_508_);
v_a_541_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_520_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_520_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec(v_a_513_);
lean_dec_ref(v_f_508_);
lean_dec_ref(v___x_507_);
v_a_549_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_517_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_517_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_dec(v_a_513_);
lean_dec_ref(v_f_508_);
lean_dec_ref(v___x_507_);
lean_dec_ref(v_inst_506_);
return v___x_515_;
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v_f_508_);
lean_dec_ref(v___x_507_);
lean_dec_ref(v_inst_506_);
lean_dec_ref(v___x_505_);
v_a_557_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_512_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_512_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_565_, lean_object* v___x_566_, lean_object* v_inst_567_, lean_object* v___x_568_, lean_object* v_f_569_, lean_object* v_args_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(v___x_565_, v___x_566_, v_inst_567_, v___x_568_, v_f_569_, v_args_570_);
lean_dec_ref(v_args_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(lean_object* v_inst_573_, lean_object* v_f_574_){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___f_579_; lean_object* v___f_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_576_ = l_Lasm_JS_Web_instFromJSRequest;
v___x_577_ = l_Lasm_JS_instFromJSData;
v___x_578_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_579_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_579_, 0, v___x_576_);
lean_closure_set(v___f_579_, 1, v___x_577_);
lean_closure_set(v___f_579_, 2, v_inst_573_);
lean_closure_set(v___f_579_, 3, v___x_578_);
lean_closure_set(v___f_579_, 4, v_f_574_);
v___f_580_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_581_ = l_Lasm_JS_instFromJSValue;
v___x_582_ = l_Lasm_JS_Function_ofSyncFn(v___f_579_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_584_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_582_, 1);
v___x_584_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
lean_inc(v_a_585_);
lean_dec_ref_known(v___x_584_, 1);
v___x_586_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_587_ = l_Lasm_JS_Value_get___redArg(v___f_580_, v_a_585_, v___x_586_, v___x_581_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___y_595_; uint8_t v___x_622_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
v___x_589_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_590_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_583_);
v___x_591_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_591_, 0, v_a_583_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_593_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_622_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; 
v___x_623_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_595_ = v___x_623_;
goto v___jp_594_;
}
else
{
lean_object* v___x_624_; 
v___x_624_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_595_ = v___x_624_;
goto v___jp_594_;
}
v___jp_594_:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
lean_inc(v___y_595_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_593_);
lean_ctor_set(v___x_596_, 1, v___y_595_);
v___x_597_ = lean_box(0);
v___x_598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = l_Lasm_JS_obj(v___x_598_);
v___x_600_ = lean_unsigned_to_nat(3u);
v___x_601_ = lean_mk_empty_array_with_capacity(v___x_600_);
v___x_602_ = lean_array_push(v___x_601_, v___x_591_);
v___x_603_ = lean_array_push(v___x_602_, v___x_592_);
v___x_604_ = lean_array_push(v___x_603_, v___x_599_);
v___x_605_ = l_Lasm_JS_Value_callMethod___redArg(v_a_588_, v___x_589_, v___x_604_, v___x_581_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; 
v_unused_613_ = lean_ctor_get(v___x_605_, 0);
lean_dec(v_unused_613_);
v___x_607_ = v___x_605_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_dec(v___x_605_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v_a_583_);
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_583_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec(v_a_583_);
v_a_614_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_605_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_605_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec(v_a_583_);
v_a_625_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_587_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_587_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec(v_a_583_);
v_a_633_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_584_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_584_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
v_a_641_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_582_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_582_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_649_, lean_object* v_f_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(v_inst_649_, v_f_650_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(lean_object* v_Env_653_, lean_object* v_inst_654_, lean_object* v_f_655_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(v_inst_654_, v_f_655_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___boxed(lean_object* v_Env_658_, lean_object* v_inst_659_, lean_object* v_f_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(v_Env_658_, v_inst_659_, v_f_660_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(lean_object* v_x_674_){
_start:
{
if (lean_obj_tag(v_x_674_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_684_; 
v_a_676_ = lean_ctor_get(v_x_674_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v_x_674_);
if (v_isSharedCheck_684_ == 0)
{
v___x_678_ = v_x_674_;
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v_x_674_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_683_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; 
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
return v___x_682_;
}
}
}
else
{
lean_object* v___x_685_; 
lean_dec_ref_known(v_x_674_, 1);
v___x_685_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___closed__1));
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed(lean_object* v_x_686_, lean_object* v___y_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(v_x_686_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(lean_object* v_f_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v___f_692_, lean_object* v_x_693_){
_start:
{
if (lean_obj_tag(v_x_693_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_703_; 
lean_dec_ref(v___f_692_);
lean_dec(v_a_691_);
lean_dec(v_a_690_);
lean_dec_ref(v_f_689_);
v_a_695_ = lean_ctor_get(v_x_693_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v_x_693_);
if (v_isSharedCheck_703_ == 0)
{
v___x_697_ = v_x_693_;
v_isShared_698_ = v_isSharedCheck_703_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v_x_693_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_703_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_702_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_701_; 
v___x_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
return v___x_701_;
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_705_; uint8_t v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v_a_704_ = lean_ctor_get(v_x_693_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v_x_693_, 1);
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = 0;
v___x_707_ = lean_apply_4(v_f_689_, v_a_690_, v_a_691_, v_a_704_, lean_box(0));
v___x_708_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_705_, v___x_706_, v___x_707_, v___f_692_);
return v___x_708_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v___f_712_, lean_object* v_x_713_, lean_object* v___y_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(v_f_709_, v_a_710_, v_a_711_, v___f_712_, v_x_713_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(lean_object* v_f_716_, lean_object* v_a_717_, lean_object* v___f_718_, lean_object* v___x_719_, lean_object* v_args_720_, lean_object* v_x_721_){
_start:
{
if (lean_obj_tag(v_x_721_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_731_; 
lean_dec_ref(v___x_719_);
lean_dec_ref(v___f_718_);
lean_dec(v_a_717_);
lean_dec_ref(v_f_716_);
v_a_723_ = lean_ctor_get(v_x_721_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_x_721_);
if (v_isSharedCheck_731_ == 0)
{
v___x_725_ = v_x_721_;
v_isShared_726_ = v_isSharedCheck_731_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v_x_721_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_731_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_730_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; 
v___x_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
return v___x_729_;
}
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_753_; 
v_a_732_ = lean_ctor_get(v_x_721_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v_x_721_);
if (v_isSharedCheck_753_ == 0)
{
v___x_734_ = v_x_721_;
v_isShared_735_ = v_isSharedCheck_753_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v_x_721_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_753_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___f_736_; lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; lean_object* v_val_741_; lean_object* v___x_744_; 
v___f_736_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_736_, 0, v_f_716_);
lean_closure_set(v___f_736_, 1, v_a_717_);
lean_closure_set(v___f_736_, 2, v_a_732_);
lean_closure_set(v___f_736_, 3, v___f_718_);
v___x_737_ = lean_unsigned_to_nat(2u);
v___x_738_ = lean_unsigned_to_nat(0u);
v___x_739_ = 0;
v___x_744_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_719_, v_args_720_, v___x_737_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_747_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 0, v_a_745_);
v___x_747_ = v___x_734_;
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
v_val_741_ = v___x_747_;
goto v___jp_740_;
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; 
v_a_749_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_744_, 1);
if (v_isShared_735_ == 0)
{
lean_ctor_set_tag(v___x_734_, 0);
lean_ctor_set(v___x_734_, 0, v_a_749_);
v___x_751_ = v___x_734_;
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
v_val_741_ = v___x_751_;
goto v___jp_740_;
}
}
v___jp_740_:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_742_, 0, v_val_741_);
v___x_743_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_738_, v___x_739_, v___x_742_, v___f_736_);
return v___x_743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_754_, lean_object* v_a_755_, lean_object* v___f_756_, lean_object* v___x_757_, lean_object* v_args_758_, lean_object* v_x_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(v_f_754_, v_a_755_, v___f_756_, v___x_757_, v_args_758_, v_x_759_);
lean_dec_ref(v_args_758_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(lean_object* v_f_762_, lean_object* v___f_763_, lean_object* v___x_764_, lean_object* v_args_765_, lean_object* v_inst_766_, lean_object* v___x_767_, lean_object* v_x_768_){
_start:
{
if (lean_obj_tag(v_x_768_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_778_; 
lean_dec_ref(v___x_767_);
lean_dec_ref(v_inst_766_);
lean_dec_ref(v_args_765_);
lean_dec_ref(v___x_764_);
lean_dec_ref(v___f_763_);
lean_dec_ref(v_f_762_);
v_a_770_ = lean_ctor_get(v_x_768_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v_x_768_);
if (v_isSharedCheck_778_ == 0)
{
v___x_772_ = v_x_768_;
v_isShared_773_ = v_isSharedCheck_778_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v_x_768_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_778_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_777_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
lean_object* v___x_776_; 
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
return v___x_776_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_801_; 
v_a_779_ = lean_ctor_get(v_x_768_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v_x_768_);
if (v_isSharedCheck_801_ == 0)
{
v___x_781_ = v_x_768_;
v_isShared_782_ = v_isSharedCheck_801_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v_x_768_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_801_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___f_783_; lean_object* v___f_784_; lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; lean_object* v_val_789_; lean_object* v___x_792_; 
lean_inc_ref(v_args_765_);
v___f_783_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_783_, 0, v_f_762_);
lean_closure_set(v___f_783_, 1, v_a_779_);
lean_closure_set(v___f_783_, 2, v___f_763_);
lean_closure_set(v___f_783_, 3, v___x_764_);
lean_closure_set(v___f_783_, 4, v_args_765_);
v___f_784_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_784_, 0, v___f_783_);
lean_closure_set(v___f_784_, 1, v_inst_766_);
v___x_785_ = lean_unsigned_to_nat(1u);
v___x_786_ = lean_unsigned_to_nat(0u);
v___x_787_ = 0;
v___x_792_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_767_, v_args_765_, v___x_785_);
lean_dec_ref(v_args_765_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; lean_object* v___x_795_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v_a_793_);
v___x_795_ = v___x_781_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_793_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
v_val_789_ = v___x_795_;
goto v___jp_788_;
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; 
v_a_797_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_792_, 1);
if (v_isShared_782_ == 0)
{
lean_ctor_set_tag(v___x_781_, 0);
lean_ctor_set(v___x_781_, 0, v_a_797_);
v___x_799_ = v___x_781_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_797_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
v_val_789_ = v___x_799_;
goto v___jp_788_;
}
}
v___jp_788_:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v_val_789_);
v___x_791_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_786_, v___x_787_, v___x_790_, v___f_784_);
return v___x_791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed(lean_object* v_f_802_, lean_object* v___f_803_, lean_object* v___x_804_, lean_object* v_args_805_, lean_object* v_inst_806_, lean_object* v___x_807_, lean_object* v_x_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(v_f_802_, v___f_803_, v___x_804_, v_args_805_, v_inst_806_, v___x_807_, v_x_808_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(lean_object* v_f_811_, lean_object* v___f_812_, lean_object* v___x_813_, lean_object* v_inst_814_, lean_object* v___x_815_, lean_object* v___x_816_, lean_object* v_args_817_){
_start:
{
lean_object* v___f_819_; lean_object* v___x_820_; uint8_t v___x_821_; lean_object* v_val_823_; lean_object* v___x_826_; 
lean_inc_ref(v_args_817_);
v___f_819_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_819_, 0, v_f_811_);
lean_closure_set(v___f_819_, 1, v___f_812_);
lean_closure_set(v___f_819_, 2, v___x_813_);
lean_closure_set(v___f_819_, 3, v_args_817_);
lean_closure_set(v___f_819_, 4, v_inst_814_);
lean_closure_set(v___f_819_, 5, v___x_815_);
v___x_820_ = lean_unsigned_to_nat(0u);
v___x_821_ = 0;
v___x_826_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_816_, v_args_817_, v___x_820_);
lean_dec_ref(v_args_817_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_826_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_826_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 1);
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
v_val_823_ = v___x_832_;
goto v___jp_822_;
}
}
}
else
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
v_a_835_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_826_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_826_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
lean_ctor_set_tag(v___x_837_, 0);
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
v_val_823_ = v___x_840_;
goto v___jp_822_;
}
}
}
v___jp_822_:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_824_, 0, v_val_823_);
v___x_825_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_820_, v___x_821_, v___x_824_, v___f_819_);
return v___x_825_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed(lean_object* v_f_843_, lean_object* v___f_844_, lean_object* v___x_845_, lean_object* v_inst_846_, lean_object* v___x_847_, lean_object* v___x_848_, lean_object* v_args_849_, lean_object* v___y_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(v_f_843_, v___f_844_, v___x_845_, v_inst_846_, v___x_847_, v___x_848_, v_args_849_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(lean_object* v_inst_853_, lean_object* v_f_854_){
_start:
{
lean_object* v___f_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___f_860_; lean_object* v___f_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___f_856_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___closed__0));
v___x_857_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSScheduledController));
v___x_858_ = l_Lasm_JS_instFromJSData;
v___x_859_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_860_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_860_, 0, v_f_854_);
lean_closure_set(v___f_860_, 1, v___f_856_);
lean_closure_set(v___f_860_, 2, v___x_859_);
lean_closure_set(v___f_860_, 3, v_inst_853_);
lean_closure_set(v___f_860_, 4, v___x_858_);
lean_closure_set(v___f_860_, 5, v___x_857_);
v___f_861_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_862_ = l_Lasm_JS_instFromJSValue;
v___x_863_ = l_Lasm_JS_Function_ofFn(v___f_860_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_868_ = l_Lasm_JS_Value_get___redArg(v___f_861_, v_a_866_, v___x_867_, v___x_862_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___y_876_; uint8_t v___x_903_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_871_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_864_);
v___x_872_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_872_, 0, v_a_864_);
lean_ctor_set(v___x_872_, 1, v___x_871_);
v___x_873_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_874_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_903_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; 
v___x_904_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_876_ = v___x_904_;
goto v___jp_875_;
}
else
{
lean_object* v___x_905_; 
v___x_905_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_876_ = v___x_905_;
goto v___jp_875_;
}
v___jp_875_:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
lean_inc(v___y_876_);
v___x_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_874_);
lean_ctor_set(v___x_877_, 1, v___y_876_);
v___x_878_ = lean_box(0);
v___x_879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = l_Lasm_JS_obj(v___x_879_);
v___x_881_ = lean_unsigned_to_nat(3u);
v___x_882_ = lean_mk_empty_array_with_capacity(v___x_881_);
v___x_883_ = lean_array_push(v___x_882_, v___x_872_);
v___x_884_ = lean_array_push(v___x_883_, v___x_873_);
v___x_885_ = lean_array_push(v___x_884_, v___x_880_);
v___x_886_ = l_Lasm_JS_Value_callMethod___redArg(v_a_869_, v___x_870_, v___x_885_, v___x_862_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; 
v_unused_894_ = lean_ctor_get(v___x_886_, 0);
lean_dec(v_unused_894_);
v___x_888_ = v___x_886_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_dec(v___x_886_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v_a_864_);
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_864_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_dec(v_a_864_);
v_a_895_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_886_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_886_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec(v_a_864_);
v_a_906_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_868_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_868_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec(v_a_864_);
v_a_914_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_865_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_865_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
v_a_922_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_863_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_863_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___boxed(lean_object* v_inst_930_, lean_object* v_f_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(v_inst_930_, v_f_931_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(lean_object* v_Env_934_, lean_object* v_inst_935_, lean_object* v_f_936_){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(v_inst_935_, v_f_936_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___boxed(lean_object* v_Env_939_, lean_object* v_inst_940_, lean_object* v_f_941_, lean_object* v_a_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(v_Env_939_, v_inst_940_, v_f_941_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_944_, lean_object* v___x_945_, lean_object* v_inst_946_, lean_object* v___x_947_, lean_object* v_f_948_, lean_object* v_args_949_){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = lean_unsigned_to_nat(0u);
v___x_952_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_944_, v_args_949_, v___x_951_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_952_, 1);
v___x_954_ = lean_unsigned_to_nat(1u);
v___x_955_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_945_, v_args_949_, v___x_954_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_957_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v___x_955_, 1);
v___x_957_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_946_, v_a_956_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
v___x_959_ = lean_unsigned_to_nat(2u);
v___x_960_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_947_, v_args_949_, v___x_959_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v_a_961_; lean_object* v___x_962_; 
v_a_961_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref_known(v___x_960_, 1);
v___x_962_ = lean_apply_4(v_f_948_, v_a_953_, v_a_958_, v_a_961_, lean_box(0));
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_970_; 
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_970_ == 0)
{
lean_object* v_unused_971_; 
v_unused_971_ = lean_ctor_get(v___x_962_, 0);
lean_dec(v_unused_971_);
v___x_964_ = v___x_962_;
v_isShared_965_ = v_isSharedCheck_970_;
goto v_resetjp_963_;
}
else
{
lean_dec(v___x_962_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_970_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_966_ = lean_box(0);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 0, v___x_966_);
v___x_968_ = v___x_964_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
v_a_972_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_962_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_962_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
lean_dec(v_a_958_);
lean_dec(v_a_953_);
lean_dec_ref(v_f_948_);
v_a_980_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_960_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_960_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_a_953_);
lean_dec_ref(v_f_948_);
lean_dec_ref(v___x_947_);
v_a_988_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_957_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_957_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
else
{
lean_dec(v_a_953_);
lean_dec_ref(v_f_948_);
lean_dec_ref(v___x_947_);
lean_dec_ref(v_inst_946_);
return v___x_955_;
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_dec_ref(v_f_948_);
lean_dec_ref(v___x_947_);
lean_dec_ref(v_inst_946_);
lean_dec_ref(v___x_945_);
v_a_996_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_952_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_952_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_1004_, lean_object* v___x_1005_, lean_object* v_inst_1006_, lean_object* v___x_1007_, lean_object* v_f_1008_, lean_object* v_args_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(v___x_1004_, v___x_1005_, v_inst_1006_, v___x_1007_, v_f_1008_, v_args_1009_);
lean_dec_ref(v_args_1009_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(lean_object* v_inst_1012_, lean_object* v_f_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___f_1018_; lean_object* v___f_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1015_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSScheduledController));
v___x_1016_ = l_Lasm_JS_instFromJSData;
v___x_1017_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_1018_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1018_, 0, v___x_1015_);
lean_closure_set(v___f_1018_, 1, v___x_1016_);
lean_closure_set(v___f_1018_, 2, v_inst_1012_);
lean_closure_set(v___f_1018_, 3, v___x_1017_);
lean_closure_set(v___f_1018_, 4, v_f_1013_);
v___f_1019_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_1020_ = l_Lasm_JS_instFromJSValue;
v___x_1021_ = l_Lasm_JS_Function_ofSyncFn(v___f_1018_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1023_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1023_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1023_, 1);
v___x_1025_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_1026_ = l_Lasm_JS_Value_get___redArg(v___f_1019_, v_a_1024_, v___x_1025_, v___x_1020_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___y_1034_; uint8_t v___x_1061_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
lean_inc(v_a_1027_);
lean_dec_ref_known(v___x_1026_, 1);
v___x_1028_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_1029_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1022_);
v___x_1030_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_a_1022_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_1061_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_1034_ = v___x_1062_;
goto v___jp_1033_;
}
else
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_1034_ = v___x_1063_;
goto v___jp_1033_;
}
v___jp_1033_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
lean_inc(v___y_1034_);
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1032_);
lean_ctor_set(v___x_1035_, 1, v___y_1034_);
v___x_1036_ = lean_box(0);
v___x_1037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = l_Lasm_JS_obj(v___x_1037_);
v___x_1039_ = lean_unsigned_to_nat(3u);
v___x_1040_ = lean_mk_empty_array_with_capacity(v___x_1039_);
v___x_1041_ = lean_array_push(v___x_1040_, v___x_1030_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1031_);
v___x_1043_ = lean_array_push(v___x_1042_, v___x_1038_);
v___x_1044_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1027_, v___x_1028_, v___x_1043_, v___x_1020_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1051_ == 0)
{
lean_object* v_unused_1052_; 
v_unused_1052_ = lean_ctor_get(v___x_1044_, 0);
lean_dec(v_unused_1052_);
v___x_1046_ = v___x_1044_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_dec(v___x_1044_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 0, v_a_1022_);
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_a_1022_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
lean_dec(v_a_1022_);
v_a_1053_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v___x_1044_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1044_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1053_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
}
else
{
lean_object* v_a_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1071_; 
lean_dec(v_a_1022_);
v_a_1064_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1066_ = v___x_1026_;
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_a_1064_);
lean_dec(v___x_1026_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1071_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
lean_object* v___x_1069_; 
if (v_isShared_1067_ == 0)
{
v___x_1069_ = v___x_1066_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_a_1064_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_dec(v_a_1022_);
v_a_1072_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1023_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1023_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
v_a_1080_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1021_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1021_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_1088_, lean_object* v_f_1089_, lean_object* v_a_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(v_inst_1088_, v_f_1089_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(lean_object* v_Env_1092_, lean_object* v_inst_1093_, lean_object* v_f_1094_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(v_inst_1093_, v_f_1094_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___boxed(lean_object* v_Env_1097_, lean_object* v_inst_1098_, lean_object* v_f_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(v_Env_1097_, v_inst_1098_, v_f_1099_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg(lean_object* v_inst_1109_, lean_object* v_f_1110_){
_start:
{
lean_object* v___f_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___f_1116_; lean_object* v___f_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___f_1112_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___closed__0));
v___x_1113_ = l_Lasm_JS_Cloudflare_instFromJSMessageBatch;
v___x_1114_ = l_Lasm_JS_instFromJSData;
v___x_1115_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_1116_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_1116_, 0, v_f_1110_);
lean_closure_set(v___f_1116_, 1, v___f_1112_);
lean_closure_set(v___f_1116_, 2, v___x_1115_);
lean_closure_set(v___f_1116_, 3, v_inst_1109_);
lean_closure_set(v___f_1116_, 4, v___x_1114_);
lean_closure_set(v___f_1116_, 5, v___x_1113_);
v___f_1117_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_1118_ = l_Lasm_JS_instFromJSValue;
v___x_1119_ = l_Lasm_JS_Function_ofFn(v___f_1116_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v_a_1120_; lean_object* v___x_1121_; 
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc(v_a_1120_);
lean_dec_ref_known(v___x_1119_, 1);
v___x_1121_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_a_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v_a_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_a_1122_);
lean_dec_ref_known(v___x_1121_, 1);
v___x_1123_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_1124_ = l_Lasm_JS_Value_get___redArg(v___f_1117_, v_a_1122_, v___x_1123_, v___x_1118_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___y_1132_; uint8_t v___x_1159_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v___x_1126_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_1127_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1120_);
v___x_1128_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1128_, 0, v_a_1120_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_1130_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_1159_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; 
v___x_1160_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_1132_ = v___x_1160_;
goto v___jp_1131_;
}
else
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_1132_ = v___x_1161_;
goto v___jp_1131_;
}
v___jp_1131_:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
lean_inc(v___y_1132_);
v___x_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1130_);
lean_ctor_set(v___x_1133_, 1, v___y_1132_);
v___x_1134_ = lean_box(0);
v___x_1135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1133_);
lean_ctor_set(v___x_1135_, 1, v___x_1134_);
v___x_1136_ = l_Lasm_JS_obj(v___x_1135_);
v___x_1137_ = lean_unsigned_to_nat(3u);
v___x_1138_ = lean_mk_empty_array_with_capacity(v___x_1137_);
v___x_1139_ = lean_array_push(v___x_1138_, v___x_1128_);
v___x_1140_ = lean_array_push(v___x_1139_, v___x_1129_);
v___x_1141_ = lean_array_push(v___x_1140_, v___x_1136_);
v___x_1142_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1125_, v___x_1126_, v___x_1141_, v___x_1118_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1149_ == 0)
{
lean_object* v_unused_1150_; 
v_unused_1150_ = lean_ctor_get(v___x_1142_, 0);
lean_dec(v_unused_1150_);
v___x_1144_ = v___x_1142_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_dec(v___x_1142_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 0, v_a_1120_);
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1120_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec(v_a_1120_);
v_a_1151_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1142_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1142_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
}
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
lean_dec(v_a_1120_);
v_a_1162_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1124_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1124_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
else
{
lean_object* v_a_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1177_; 
lean_dec(v_a_1120_);
v_a_1170_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1172_ = v___x_1121_;
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_a_1170_);
lean_dec(v___x_1121_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1177_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1175_; 
if (v_isShared_1173_ == 0)
{
v___x_1175_ = v___x_1172_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v_a_1170_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
v_a_1178_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1119_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1119_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg___boxed(lean_object* v_inst_1186_, lean_object* v_f_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg(v_inst_1186_, v_f_1187_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn(lean_object* v_Env_1190_, lean_object* v_inst_1191_, lean_object* v_f_1192_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___redArg(v_inst_1191_, v_f_1192_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn___boxed(lean_object* v_Env_1195_, lean_object* v_inst_1196_, lean_object* v_f_1197_, lean_object* v_a_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofFn(v_Env_1195_, v_inst_1196_, v_f_1197_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg(lean_object* v_inst_1200_, lean_object* v_f_1201_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1203_ = l_Lasm_JS_Cloudflare_instFromJSMessageBatch;
v___x_1204_ = l_Lasm_JS_instFromJSData;
v___x_1205_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext));
v___f_1206_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1206_, 0, v___x_1203_);
lean_closure_set(v___f_1206_, 1, v___x_1204_);
lean_closure_set(v___f_1206_, 2, v_inst_1200_);
lean_closure_set(v___f_1206_, 3, v___x_1205_);
lean_closure_set(v___f_1206_, 4, v_f_1201_);
v___f_1207_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___closed__0));
v___x_1208_ = l_Lasm_JS_instFromJSValue;
v___x_1209_ = l_Lasm_JS_Function_ofSyncFn(v___f_1206_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1209_, 1);
v___x_1211_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1211_, 1);
v___x_1213_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__1));
v___x_1214_ = l_Lasm_JS_Value_get___redArg(v___f_1207_, v_a_1212_, v___x_1213_, v___x_1208_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___y_1222_; uint8_t v___x_1249_; 
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
lean_inc(v_a_1215_);
lean_dec_ref_known(v___x_1214_, 1);
v___x_1216_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__2));
v___x_1217_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
lean_inc(v_a_1210_);
v___x_1218_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1218_, 0, v_a_1210_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__4));
v___x_1220_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__5));
v___x_1249_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__8);
if (v___x_1249_ == 0)
{
lean_object* v___x_1250_; 
v___x_1250_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__9);
v___y_1222_ = v___x_1250_;
goto v___jp_1221_;
}
else
{
lean_object* v___x_1251_; 
v___x_1251_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11, &l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11_once, _init_l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___closed__11);
v___y_1222_ = v___x_1251_;
goto v___jp_1221_;
}
v___jp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_inc(v___y_1222_);
v___x_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1220_);
lean_ctor_set(v___x_1223_, 1, v___y_1222_);
v___x_1224_ = lean_box(0);
v___x_1225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1223_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = l_Lasm_JS_obj(v___x_1225_);
v___x_1227_ = lean_unsigned_to_nat(3u);
v___x_1228_ = lean_mk_empty_array_with_capacity(v___x_1227_);
v___x_1229_ = lean_array_push(v___x_1228_, v___x_1218_);
v___x_1230_ = lean_array_push(v___x_1229_, v___x_1219_);
v___x_1231_ = lean_array_push(v___x_1230_, v___x_1226_);
v___x_1232_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1215_, v___x_1216_, v___x_1231_, v___x_1208_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1239_ == 0)
{
lean_object* v_unused_1240_; 
v_unused_1240_ = lean_ctor_get(v___x_1232_, 0);
lean_dec(v_unused_1240_);
v___x_1234_ = v___x_1232_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_dec(v___x_1232_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v_a_1210_);
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1210_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
lean_dec(v_a_1210_);
v_a_1241_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1232_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1232_);
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
else
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
lean_dec(v_a_1210_);
v_a_1252_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1214_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1214_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
else
{
lean_object* v_a_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1267_; 
lean_dec(v_a_1210_);
v_a_1260_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1262_ = v___x_1211_;
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_a_1260_);
lean_dec(v___x_1211_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1260_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
v_a_1268_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1209_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1209_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_1276_, lean_object* v_f_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg(v_inst_1276_, v_f_1277_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn(lean_object* v_Env_1280_, lean_object* v_inst_1281_, lean_object* v_f_1282_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___redArg(v_inst_1281_, v_f_1282_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn___boxed(lean_object* v_Env_1285_, lean_object* v_inst_1286_, lean_object* v_f_1287_, lean_object* v_a_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lasm_JS_Cloudflare_ExportedHandlerQueueHandler_ofSyncFn(v_Env_1285_, v_inst_1286_, v_f_1287_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0(lean_object* v___f_1293_, lean_object* v___f_1294_, lean_object* v___f_1295_, lean_object* v_d_1296_){
_start:
{
lean_object* v_fetch_1297_; lean_object* v_scheduled_1298_; lean_object* v_queue_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v_fetch_1297_ = lean_ctor_get(v_d_1296_, 0);
lean_inc(v_fetch_1297_);
v_scheduled_1298_ = lean_ctor_get(v_d_1296_, 1);
lean_inc(v_scheduled_1298_);
v_queue_1299_ = lean_ctor_get(v_d_1296_, 2);
lean_inc(v_queue_1299_);
lean_dec_ref(v_d_1296_);
v___x_1300_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__0));
v___x_1301_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1293_, v_fetch_1297_);
v___x_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1300_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
v___x_1303_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__1));
v___x_1304_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1294_, v_scheduled_1298_);
v___x_1305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExportedHandler___lam__0___closed__2));
v___x_1307_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1295_, v_queue_1299_);
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = lean_unsigned_to_nat(3u);
v___x_1310_ = lean_mk_empty_array_with_capacity(v___x_1309_);
v___x_1311_ = lean_array_push(v___x_1310_, v___x_1302_);
v___x_1312_ = lean_array_push(v___x_1311_, v___x_1305_);
v___x_1313_ = lean_array_push(v___x_1312_, v___x_1308_);
v___x_1314_ = l_Lasm_JS_Web_Support_fields(v___x_1313_);
lean_dec_ref(v___x_1313_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props(lean_object* v_self_1319_){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_props___closed__0));
v___x_1322_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_timestamp_spec__0(v_self_1319_, v___x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props___boxed(lean_object* v_self_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lasm_JS_Cloudflare_ExecutionContext_props(v_self_1323_);
return v_res_1325_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_1331_ = lean_string_utf8_byte_size(v___x_1330_);
return v___x_1331_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; uint8_t v___x_1334_; 
v___x_1332_ = lean_unsigned_to_nat(0u);
v___x_1333_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__4);
v___x_1334_ = lean_nat_dec_eq(v___x_1333_, v___x_1332_);
return v___x_1334_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10(void){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1339_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__9));
v___x_1340_ = lean_unsigned_to_nat(46u);
v___x_1341_ = lean_unsigned_to_nat(193u);
v___x_1342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__8));
v___x_1343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__7));
v___x_1344_ = l_mkPanicMessageWithDecl(v___x_1343_, v___x_1342_, v___x_1341_, v___x_1340_, v___x_1339_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(lean_object* v_context_1346_, lean_object* v_d_1347_){
_start:
{
lean_object* v___y_1353_; lean_object* v___y_1354_; 
switch(lean_obj_tag(v_d_1347_))
{
case 1:
{
goto v___jp_1349_;
}
case 0:
{
goto v___jp_1349_;
}
default: 
{
if (lean_obj_tag(v_d_1347_) == 9)
{
lean_object* v_value_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v_value_1358_ = lean_ctor_get(v_d_1347_, 0);
lean_inc(v_value_1358_);
lean_dec_ref_known(v_d_1347_, 2);
v___x_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1359_, 0, v_value_1358_);
v___x_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
return v___x_1360_;
}
else
{
lean_object* v___x_1361_; lean_object* v_received_1363_; 
v___x_1361_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
if (lean_obj_tag(v_d_1347_) == 9)
{
lean_object* v_value_1377_; lean_object* v_description_1378_; uint8_t v___x_1379_; 
v_value_1377_ = lean_ctor_get(v_d_1347_, 0);
v_description_1378_ = lean_ctor_get(v_d_1347_, 1);
v___x_1379_ = lean_string_dec_eq(v_description_1378_, v___x_1361_);
if (v___x_1379_ == 0)
{
goto v___jp_1375_;
}
else
{
uint32_t v___x_1380_; uint64_t v___x_1381_; lean_object* v___x_1382_; uint32_t v___x_1383_; lean_object* v___x_1384_; 
lean_inc_n(v_value_1377_, 2);
lean_dec_ref_known(v_d_1347_, 2);
v___x_1380_ = 206;
v___x_1381_ = 0ULL;
v___x_1382_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_value_1377_);
lean_ctor_set(v___x_1382_, 1, v___x_1361_);
v___x_1383_ = lasm_js_value_handle(v_value_1377_);
lean_dec(v_value_1377_);
v___x_1384_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1380_, v___x_1381_, v___x_1382_, v___x_1383_);
lean_dec_ref_known(v___x_1382_, 2);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; uint8_t v___x_1386_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
v___x_1386_ = lean_string_validate_utf8(v_a_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_dec(v_a_1385_);
v___x_1387_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10);
v___x_1388_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1387_);
v_received_1363_ = v___x_1388_;
goto v___jp_1362_;
}
else
{
lean_object* v___x_1389_; 
v___x_1389_ = lean_string_from_utf8_unchecked(v_a_1385_);
v_received_1363_ = v___x_1389_;
goto v___jp_1362_;
}
}
else
{
lean_object* v___x_1390_; 
lean_dec_ref_known(v___x_1384_, 1);
v___x_1390_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__11));
v_received_1363_ = v___x_1390_;
goto v___jp_1362_;
}
}
}
else
{
goto v___jp_1375_;
}
v___jp_1362_:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v___x_1364_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0));
v___x_1365_ = lean_string_append(v___x_1364_, v_context_1346_);
v___x_1366_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__1));
v___x_1367_ = lean_string_append(v___x_1365_, v___x_1366_);
v___x_1368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__2));
v___x_1369_ = lean_string_append(v___x_1367_, v___x_1368_);
v___x_1370_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__3));
v___x_1371_ = lean_string_append(v___x_1369_, v___x_1370_);
v___x_1372_ = lean_string_append(v___x_1371_, v_received_1363_);
lean_dec_ref(v_received_1363_);
v___x_1373_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; 
v___x_1374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6));
v___y_1353_ = v___x_1372_;
v___y_1354_ = v___x_1374_;
goto v___jp_1352_;
}
else
{
v___y_1353_ = v___x_1372_;
v___y_1354_ = v___x_1361_;
goto v___jp_1352_;
}
}
v___jp_1375_:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_Lasm_JS_Data_describe(v_d_1347_);
v_received_1363_ = v___x_1376_;
goto v___jp_1362_;
}
}
}
}
v___jp_1349_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = lean_box(0);
v___x_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1351_, 0, v___x_1350_);
return v___x_1351_;
}
v___jp_1352_:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1355_ = lean_string_append(v___y_1353_, v___y_1354_);
v___x_1356_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
v___x_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1357_, 0, v___x_1356_);
return v___x_1357_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1391_, lean_object* v_d_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(v_context_1391_, v_d_1392_);
lean_dec_ref(v_context_1391_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(lean_object* v_context_1395_, lean_object* v_bytes_1396_){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1396_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1400_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1399_);
lean_dec_ref_known(v___x_1398_, 1);
v___x_1400_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(v_context_1395_, v_a_1399_);
return v___x_1400_;
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1398_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1398_);
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
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0___boxed(lean_object* v_context_1409_, lean_object* v_bytes_1410_, lean_object* v_a_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(v_context_1409_, v_bytes_1410_);
lean_dec_ref(v_bytes_1410_);
lean_dec_ref(v_context_1409_);
return v_res_1412_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1413_; uint64_t v___x_1414_; 
v___x_1413_ = 0;
v___x_1414_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(lean_object* v_o_1416_, lean_object* v_key_1417_){
_start:
{
lean_object* v_k_1419_; lean_object* v___x_1420_; 
v_k_1419_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1419_, 0, v_key_1417_);
v___x_1420_ = l_Lasm_JS_Wire_encodeIO(v_k_1419_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; uint32_t v___x_1422_; uint32_t v___x_1423_; uint64_t v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref_known(v___x_1420_, 1);
v___x_1422_ = 203;
v___x_1423_ = lasm_js_value_handle(v_o_1416_);
v___x_1424_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0);
v___x_1425_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_1426_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1426_, 0, v_o_1416_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = lean_unsigned_to_nat(2u);
v___x_1428_ = lean_mk_empty_array_with_capacity(v___x_1427_);
lean_inc_ref(v_k_1419_);
v___x_1429_ = lean_array_push(v___x_1428_, v_k_1419_);
v___x_1430_ = lean_array_push(v___x_1429_, v___x_1426_);
v___x_1431_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
v___x_1432_ = lasm_js_call(v___x_1422_, v___x_1423_, v___x_1424_, v_a_1421_, v___x_1431_);
lean_dec_ref_known(v___x_1431_, 1);
lean_dec(v_a_1421_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
lean_inc(v_a_1433_);
lean_dec_ref_known(v___x_1432_, 1);
v___x_1434_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__1));
v___x_1435_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1419_);
v___x_1436_ = lean_string_append(v___x_1434_, v___x_1435_);
lean_dec_ref(v___x_1435_);
v___x_1437_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(v___x_1436_, v_a_1433_);
lean_dec(v_a_1433_);
lean_dec_ref(v___x_1436_);
return v___x_1437_;
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref_known(v_k_1419_, 1);
v_a_1438_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1432_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1432_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref_known(v_k_1419_, 1);
lean_dec(v_o_1416_);
v_a_1446_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1420_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1420_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___boxed(lean_object* v_o_1454_, lean_object* v_key_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(v_o_1454_, v_key_1455_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache(lean_object* v_self_1459_){
_start:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1461_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_cache___closed__0));
v___x_1462_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(v_self_1459_, v___x_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache___boxed(lean_object* v_self_1463_, lean_object* v_a_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lasm_JS_Cloudflare_ExecutionContext_cache(v_self_1463_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(lean_object* v_self_1467_, lean_object* v_promise_1468_){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1470_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___closed__0));
v___x_1471_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_1472_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1472_, 0, v_promise_1468_);
lean_ctor_set(v___x_1472_, 1, v___x_1471_);
v___x_1473_ = lean_unsigned_to_nat(1u);
v___x_1474_ = lean_mk_empty_array_with_capacity(v___x_1473_);
v___x_1475_ = lean_array_push(v___x_1474_, v___x_1472_);
v___x_1476_ = l_Lasm_JS_Web_Support_args(v___x_1475_);
v___x_1477_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1467_, v___x_1470_, v___x_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___boxed(lean_object* v_self_1478_, lean_object* v_promise_1479_, lean_object* v_a_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(v_self_1478_, v_promise_1479_);
return v_res_1481_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2(void){
_start:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__1));
v___x_1486_ = l_Lasm_JS_Web_Support_args(v___x_1485_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(lean_object* v_self_1487_){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1489_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__0));
v___x_1490_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2, &l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2_once, _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2);
v___x_1491_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1487_, v___x_1489_, v___x_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___boxed(lean_object* v_self_1492_, lean_object* v_a_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(v_self_1492_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort(lean_object* v_self_1496_, lean_object* v_reason_1497_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1499_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ExecutionContext_abort___closed__0));
v___x_1500_ = lean_unsigned_to_nat(1u);
v___x_1501_ = lean_mk_empty_array_with_capacity(v___x_1500_);
v___x_1502_ = lean_array_push(v___x_1501_, v_reason_1497_);
v___x_1503_ = l_Lasm_JS_Web_Support_args(v___x_1502_);
v___x_1504_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_1496_, v___x_1499_, v___x_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort___boxed(lean_object* v_self_1505_, lean_object* v_reason_1506_, lean_object* v_a_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lasm_JS_Cloudflare_ExecutionContext_abort(v_self_1505_, v_reason_1506_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(lean_object* v___f_1509_, lean_object* v_x_1510_){
_start:
{
if (lean_obj_tag(v_x_1510_) == 0)
{
lean_object* v_a_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1520_; 
lean_dec_ref(v___f_1509_);
v_a_1512_ = lean_ctor_get(v_x_1510_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v_x_1510_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1514_ = v_x_1510_;
v_isShared_1515_ = v_isSharedCheck_1520_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_a_1512_);
lean_dec(v_x_1510_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1520_;
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
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1512_);
v___x_1517_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
lean_object* v___x_1518_; 
v___x_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1517_);
return v___x_1518_;
}
}
}
else
{
lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1532_; 
v_isSharedCheck_1532_ = !lean_is_exclusive(v_x_1510_);
if (v_isSharedCheck_1532_ == 0)
{
lean_object* v_unused_1533_; 
v_unused_1533_ = lean_ctor_get(v_x_1510_, 0);
lean_dec(v_unused_1533_);
v___x_1522_ = v_x_1510_;
v_isShared_1523_ = v_isSharedCheck_1532_;
goto v_resetjp_1521_;
}
else
{
lean_dec(v_x_1510_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1532_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1528_; 
v___x_1524_ = lean_unsigned_to_nat(0u);
v___x_1525_ = 0;
v___x_1526_ = lean_io_promise_new();
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 0, v___x_1526_);
v___x_1528_ = v___x_1522_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v___x_1526_);
v___x_1528_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
v___x_1530_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1524_, v___x_1525_, v___x_1529_, v___f_1509_);
return v___x_1530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed(lean_object* v___f_1534_, lean_object* v_x_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(v___f_1534_, v_x_1535_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(lean_object* v_failurePrefix_1538_, lean_object* v_x_1539_){
_start:
{
if (lean_obj_tag(v_x_1539_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1552_; 
v_a_1541_ = lean_ctor_get(v_x_1539_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_x_1539_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1543_ = v_x_1539_;
v_isShared_1544_ = v_isSharedCheck_1552_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v_x_1539_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1552_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1549_; 
v___x_1545_ = lean_io_error_to_string(v_a_1541_);
v___x_1546_ = lean_string_append(v_failurePrefix_1538_, v___x_1545_);
lean_dec_ref(v___x_1545_);
v___x_1547_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1547_);
v___x_1549_ = v___x_1543_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1550_; 
v___x_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
return v___x_1550_;
}
}
}
else
{
lean_object* v___x_1553_; 
lean_dec_ref(v_failurePrefix_1538_);
v___x_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1553_, 0, v_x_1539_);
return v___x_1553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed(lean_object* v_failurePrefix_1554_, lean_object* v_x_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(v_failurePrefix_1554_, v_x_1555_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(lean_object* v___f_1558_, lean_object* v_bytes_1559_){
_start:
{
lean_object* v___x_1561_; uint8_t v___x_1562_; lean_object* v_val_1564_; lean_object* v___x_1567_; 
v___x_1561_ = lean_unsigned_to_nat(0u);
v___x_1562_ = 0;
v___x_1567_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1559_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1567_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1567_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
lean_ctor_set_tag(v___x_1570_, 1);
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
v_val_1564_ = v___x_1573_;
goto v___jp_1563_;
}
}
}
else
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
v_a_1576_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1567_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1567_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
lean_ctor_set_tag(v___x_1578_, 0);
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
v_val_1564_ = v___x_1581_;
goto v___jp_1563_;
}
}
}
v___jp_1563_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1565_, 0, v_val_1564_);
v___x_1566_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1561_, v___x_1562_, v___x_1565_, v___f_1558_);
return v___x_1566_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed(lean_object* v___f_1584_, lean_object* v_bytes_1585_, lean_object* v___y_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(v___f_1584_, v_bytes_1585_);
lean_dec_ref(v_bytes_1585_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(lean_object* v___f_1588_, lean_object* v_a_1589_, uint32_t v_op_1590_, uint64_t v_flags_1591_, lean_object* v_payload_1592_, lean_object* v_x_1593_){
_start:
{
if (lean_obj_tag(v_x_1593_) == 0)
{
lean_object* v___x_1595_; 
lean_dec_ref(v___f_1588_);
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v_x_1593_);
return v___x_1595_;
}
else
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1616_; 
v_a_1596_ = lean_ctor_get(v_x_1593_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v_x_1593_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1598_ = v_x_1593_;
v_isShared_1599_ = v_isSharedCheck_1616_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v_x_1593_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1616_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
uint32_t v___x_1600_; lean_object* v___x_1601_; uint8_t v___x_1602_; lean_object* v_val_1604_; lean_object* v___x_1607_; 
v___x_1600_ = 0;
v___x_1601_ = lean_unsigned_to_nat(0u);
v___x_1602_ = 0;
v___x_1607_ = lasm_js_call_into(v_a_1589_, v_op_1590_, v___x_1600_, v_flags_1591_, v_a_1596_, v_payload_1592_);
lean_dec(v_a_1596_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1610_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v_a_1608_);
v___x_1610_ = v___x_1598_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
v_val_1604_ = v___x_1610_;
goto v___jp_1603_;
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; 
v_a_1612_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1607_, 1);
if (v_isShared_1599_ == 0)
{
lean_ctor_set_tag(v___x_1598_, 0);
lean_ctor_set(v___x_1598_, 0, v_a_1612_);
v___x_1614_ = v___x_1598_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
v_val_1604_ = v___x_1614_;
goto v___jp_1603_;
}
}
v___jp_1603_:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_val_1604_);
v___x_1606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1601_, v___x_1602_, v___x_1605_, v___f_1588_);
return v___x_1606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed(lean_object* v___f_1617_, lean_object* v_a_1618_, lean_object* v_op_1619_, lean_object* v_flags_1620_, lean_object* v_payload_1621_, lean_object* v_x_1622_, lean_object* v___y_1623_){
_start:
{
uint32_t v_op_boxed_1624_; uint64_t v_flags_boxed_1625_; lean_object* v_res_1626_; 
v_op_boxed_1624_ = lean_unbox_uint32(v_op_1619_);
lean_dec(v_op_1619_);
v_flags_boxed_1625_ = lean_unbox_uint64(v_flags_1620_);
lean_dec_ref(v_flags_1620_);
v_res_1626_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(v___f_1617_, v_a_1618_, v_op_boxed_1624_, v_flags_boxed_1625_, v_payload_1621_, v_x_1622_);
lean_dec(v_payload_1621_);
lean_dec(v_a_1618_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(lean_object* v___x_1627_, uint8_t v___x_1628_, lean_object* v___f_1629_, lean_object* v_a_1630_, uint32_t v_op_1631_, uint64_t v_flags_1632_, lean_object* v_payload_1633_, lean_object* v_x_1634_){
_start:
{
lean_object* v_val_1637_; 
if (lean_obj_tag(v_x_1634_) == 0)
{
lean_object* v___x_1640_; 
lean_dec_ref(v___f_1629_);
lean_dec(v___x_1627_);
v___x_1640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1640_, 0, v_x_1634_);
return v___x_1640_;
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1655_; 
v_a_1641_ = lean_ctor_get(v_x_1634_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v_x_1634_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1643_ = v_x_1634_;
v_isShared_1644_ = v_isSharedCheck_1655_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v_x_1634_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1655_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
uint32_t v___x_1645_; lean_object* v___x_1646_; 
v___x_1645_ = 0;
v___x_1646_ = lasm_js_call_into(v_a_1630_, v_op_1631_, v___x_1645_, v_flags_1632_, v_a_1641_, v_payload_1633_);
lean_dec(v_a_1641_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1649_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1646_, 1);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 0, v_a_1647_);
v___x_1649_ = v___x_1643_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1647_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
v_val_1637_ = v___x_1649_;
goto v___jp_1636_;
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; 
v_a_1651_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1651_);
lean_dec_ref_known(v___x_1646_, 1);
if (v_isShared_1644_ == 0)
{
lean_ctor_set_tag(v___x_1643_, 0);
lean_ctor_set(v___x_1643_, 0, v_a_1651_);
v___x_1653_ = v___x_1643_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1651_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
v_val_1637_ = v___x_1653_;
goto v___jp_1636_;
}
}
}
}
v___jp_1636_:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1638_, 0, v_val_1637_);
v___x_1639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1627_, v___x_1628_, v___x_1638_, v___f_1629_);
return v___x_1639_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed(lean_object* v___x_1656_, lean_object* v___x_1657_, lean_object* v___f_1658_, lean_object* v_a_1659_, lean_object* v_op_1660_, lean_object* v_flags_1661_, lean_object* v_payload_1662_, lean_object* v_x_1663_, lean_object* v___y_1664_){
_start:
{
uint8_t v___x_2003__boxed_1665_; uint32_t v_op_boxed_1666_; uint64_t v_flags_boxed_1667_; lean_object* v_res_1668_; 
v___x_2003__boxed_1665_ = lean_unbox(v___x_1657_);
v_op_boxed_1666_ = lean_unbox_uint32(v_op_1660_);
lean_dec(v_op_1660_);
v_flags_boxed_1667_ = lean_unbox_uint64(v_flags_1661_);
lean_dec_ref(v_flags_1661_);
v_res_1668_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(v___x_1656_, v___x_2003__boxed_1665_, v___f_1658_, v_a_1659_, v_op_boxed_1666_, v_flags_boxed_1667_, v_payload_1662_, v_x_1663_);
lean_dec(v_payload_1662_);
lean_dec(v_a_1659_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(lean_object* v_a_1669_, lean_object* v_x_1670_){
_start:
{
if (lean_obj_tag(v_x_1670_) == 0)
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1680_; 
v_a_1672_ = lean_ctor_get(v_x_1670_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_x_1670_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1674_ = v_x_1670_;
v_isShared_1675_ = v_isSharedCheck_1680_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v_x_1670_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1680_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1672_);
v___x_1677_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
return v___x_1678_;
}
}
}
else
{
lean_object* v___x_1681_; 
lean_dec_ref_known(v_x_1670_, 1);
v___x_1681_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_1669_);
return v___x_1681_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed(lean_object* v_a_1682_, lean_object* v_x_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v_res_1685_; 
v_res_1685_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(v_a_1682_, v_x_1683_);
lean_dec(v_a_1682_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(lean_object* v_failurePrefix_1686_, uint32_t v_op_1687_, uint64_t v_flags_1688_, lean_object* v_payload_1689_, lean_object* v___f_1690_, lean_object* v___f_1691_, lean_object* v___f_1692_, lean_object* v_x_1693_){
_start:
{
if (lean_obj_tag(v_x_1693_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1703_; 
lean_dec_ref(v___f_1692_);
lean_dec_ref(v___f_1691_);
lean_dec_ref(v___f_1690_);
lean_dec(v_payload_1689_);
v_a_1695_ = lean_ctor_get(v_x_1693_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v_x_1693_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1697_ = v_x_1693_;
v_isShared_1698_ = v_isSharedCheck_1703_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v_x_1693_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1703_;
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
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_a_1695_);
v___x_1700_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
return v___x_1701_;
}
}
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1750_; 
v_a_1704_ = lean_ctor_get(v_x_1693_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v_x_1693_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1706_ = v_x_1693_;
v_isShared_1707_ = v_isSharedCheck_1750_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v_x_1693_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1750_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; uint8_t v___x_1710_; 
v___x_1708_ = lean_string_utf8_byte_size(v_failurePrefix_1686_);
v___x_1709_ = lean_unsigned_to_nat(0u);
v___x_1710_ = lean_nat_dec_eq(v___x_1708_, v___x_1709_);
if (v___x_1710_ == 0)
{
lean_object* v___f_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___f_1715_; lean_object* v_val_1717_; lean_object* v___x_1722_; 
lean_dec_ref(v___f_1692_);
lean_inc(v_a_1704_);
v___f_1711_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1711_, 0, v_a_1704_);
v___x_1712_ = lean_box(v___x_1710_);
v___x_1713_ = lean_box_uint32(v_op_1687_);
v___x_1714_ = lean_box_uint64(v_flags_1688_);
lean_inc(v_payload_1689_);
v___f_1715_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_1715_, 0, v___x_1709_);
lean_closure_set(v___f_1715_, 1, v___x_1712_);
lean_closure_set(v___f_1715_, 2, v___f_1711_);
lean_closure_set(v___f_1715_, 3, v_a_1704_);
lean_closure_set(v___f_1715_, 4, v___x_1713_);
lean_closure_set(v___f_1715_, 5, v___x_1714_);
lean_closure_set(v___f_1715_, 6, v_payload_1689_);
v___x_1722_ = l_Lasm_JS_Wire_encodeIO(v_payload_1689_);
lean_dec(v_payload_1689_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v_a_1723_; lean_object* v___x_1725_; 
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1722_, 1);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v_a_1723_);
v___x_1725_ = v___x_1706_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_a_1723_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
v_val_1717_ = v___x_1725_;
goto v___jp_1716_;
}
}
else
{
lean_object* v_a_1727_; lean_object* v___x_1729_; 
v_a_1727_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1722_, 1);
if (v_isShared_1707_ == 0)
{
lean_ctor_set_tag(v___x_1706_, 0);
lean_ctor_set(v___x_1706_, 0, v_a_1727_);
v___x_1729_ = v___x_1706_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1727_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
v_val_1717_ = v___x_1729_;
goto v___jp_1716_;
}
}
v___jp_1716_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_val_1717_);
v___x_1719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1709_, v___x_1710_, v___x_1718_, v___f_1715_);
v___x_1720_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1709_, v___x_1710_, v___x_1719_, v___f_1690_);
v___x_1721_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1709_, v___x_1710_, v___x_1720_, v___f_1691_);
return v___x_1721_;
}
}
else
{
lean_object* v___f_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; uint8_t v___x_1735_; lean_object* v_val_1737_; lean_object* v___x_1741_; 
lean_dec_ref(v___f_1691_);
lean_dec_ref(v___f_1690_);
lean_inc(v_a_1704_);
v___f_1731_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1731_, 0, v_a_1704_);
v___x_1732_ = lean_box_uint32(v_op_1687_);
v___x_1733_ = lean_box_uint64(v_flags_1688_);
lean_inc(v_payload_1689_);
v___f_1734_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_1734_, 0, v___f_1731_);
lean_closure_set(v___f_1734_, 1, v_a_1704_);
lean_closure_set(v___f_1734_, 2, v___x_1732_);
lean_closure_set(v___f_1734_, 3, v___x_1733_);
lean_closure_set(v___f_1734_, 4, v_payload_1689_);
v___x_1735_ = 0;
v___x_1741_ = l_Lasm_JS_Wire_encodeIO(v_payload_1689_);
lean_dec(v_payload_1689_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1744_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v___x_1741_, 1);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v_a_1742_);
v___x_1744_ = v___x_1706_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
v_val_1737_ = v___x_1744_;
goto v___jp_1736_;
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; 
v_a_1746_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1741_, 1);
if (v_isShared_1707_ == 0)
{
lean_ctor_set_tag(v___x_1706_, 0);
lean_ctor_set(v___x_1706_, 0, v_a_1746_);
v___x_1748_ = v___x_1706_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
v_val_1737_ = v___x_1748_;
goto v___jp_1736_;
}
}
v___jp_1736_:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v_val_1737_);
v___x_1739_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1709_, v___x_1735_, v___x_1738_, v___f_1734_);
v___x_1740_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1709_, v___x_1735_, v___x_1739_, v___f_1692_);
return v___x_1740_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed(lean_object* v_failurePrefix_1751_, lean_object* v_op_1752_, lean_object* v_flags_1753_, lean_object* v_payload_1754_, lean_object* v___f_1755_, lean_object* v___f_1756_, lean_object* v___f_1757_, lean_object* v_x_1758_, lean_object* v___y_1759_){
_start:
{
uint32_t v_op_boxed_1760_; uint64_t v_flags_boxed_1761_; lean_object* v_res_1762_; 
v_op_boxed_1760_ = lean_unbox_uint32(v_op_1752_);
lean_dec(v_op_1752_);
v_flags_boxed_1761_ = lean_unbox_uint64(v_flags_1753_);
lean_dec_ref(v_flags_1753_);
v_res_1762_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(v_failurePrefix_1751_, v_op_boxed_1760_, v_flags_boxed_1761_, v_payload_1754_, v___f_1755_, v___f_1756_, v___f_1757_, v_x_1758_);
lean_dec_ref(v_failurePrefix_1751_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(lean_object* v___f_1763_, lean_object* v_x_1764_){
_start:
{
if (lean_obj_tag(v_x_1764_) == 0)
{
lean_object* v_a_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1774_; 
lean_dec_ref(v___f_1763_);
v_a_1766_ = lean_ctor_get(v_x_1764_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v_x_1764_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1768_ = v_x_1764_;
v_isShared_1769_ = v_isSharedCheck_1774_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_a_1766_);
lean_dec(v_x_1764_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1774_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1771_; 
if (v_isShared_1769_ == 0)
{
v___x_1771_ = v___x_1768_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1766_);
v___x_1771_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
lean_object* v___x_1772_; 
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
return v___x_1772_;
}
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1776_; 
v_a_1775_ = lean_ctor_get(v_x_1764_, 0);
lean_inc(v_a_1775_);
lean_dec_ref_known(v_x_1764_, 1);
v___x_1776_ = lean_apply_2(v___f_1763_, v_a_1775_, lean_box(0));
return v___x_1776_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed(lean_object* v___f_1777_, lean_object* v_x_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(v___f_1777_, v_x_1778_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_1788_, lean_object* v_key_1789_){
_start:
{
if (lean_obj_tag(v_d_1788_) == 8)
{
lean_object* v___x_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1818_; 
v___x_1790_ = l_Lasm_JS_Data_field(v_d_1788_, v_key_1789_);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_d_1788_);
if (v_isSharedCheck_1818_ == 0)
{
lean_object* v_unused_1819_; 
v_unused_1819_ = lean_ctor_get(v_d_1788_, 0);
lean_dec(v_unused_1819_);
v___x_1792_ = v_d_1788_;
v_isShared_1793_ = v_isSharedCheck_1818_;
goto v_resetjp_1791_;
}
else
{
lean_dec(v_d_1788_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1818_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
if (lean_obj_tag(v___x_1790_) == 2)
{
uint8_t v_b_1794_; lean_object* v___x_1795_; lean_object* v___x_1797_; 
v_b_1794_ = lean_ctor_get_uint8(v___x_1790_, 0);
lean_dec_ref_known(v___x_1790_, 0);
v___x_1795_ = lean_box(v_b_1794_);
if (v_isShared_1793_ == 0)
{
lean_ctor_set_tag(v___x_1792_, 1);
lean_ctor_set(v___x_1792_, 0, v___x_1795_);
v___x_1797_ = v___x_1792_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
else
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; uint8_t v___x_1809_; 
v___x_1799_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1800_ = lean_string_append(v___x_1799_, v_key_1789_);
v___x_1801_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1802_ = lean_string_append(v___x_1800_, v___x_1801_);
v___x_1803_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_1804_ = lean_string_append(v___x_1802_, v___x_1803_);
v___x_1805_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1806_ = lean_string_append(v___x_1804_, v___x_1805_);
v___x_1807_ = l_Lasm_JS_Data_describe(v___x_1790_);
v___x_1808_ = lean_string_append(v___x_1806_, v___x_1807_);
lean_dec_ref(v___x_1807_);
v___x_1809_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1813_; 
v___x_1810_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6));
v___x_1811_ = lean_string_append(v___x_1808_, v___x_1810_);
if (v_isShared_1793_ == 0)
{
lean_ctor_set_tag(v___x_1792_, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1811_);
v___x_1813_ = v___x_1792_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v___x_1811_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
return v___x_1813_;
}
}
else
{
lean_object* v___x_1816_; 
if (v_isShared_1793_ == 0)
{
lean_ctor_set_tag(v___x_1792_, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1808_);
v___x_1816_ = v___x_1792_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1808_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
}
}
else
{
lean_object* v___x_1820_; 
lean_dec(v_d_1788_);
v___x_1820_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__5));
return v___x_1820_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_1821_, lean_object* v_key_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(v_d_1821_, v_key_1822_);
lean_dec_ref(v_key_1822_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object* v_d_1827_, lean_object* v_key_1828_){
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
v___x_1841_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1842_ = lean_string_append(v___x_1841_, v_key_1828_);
v___x_1843_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1844_ = lean_string_append(v___x_1842_, v___x_1843_);
v___x_1845_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__0));
v___x_1846_ = lean_string_append(v___x_1844_, v___x_1845_);
v___x_1847_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1848_ = lean_string_append(v___x_1846_, v___x_1847_);
v___x_1849_ = l_Lasm_JS_Data_describe(v___x_1829_);
v___x_1850_ = lean_string_append(v___x_1848_, v___x_1849_);
lean_dec_ref(v___x_1849_);
v___x_1851_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__5);
if (v___x_1851_ == 0)
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1855_; 
v___x_1852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__6));
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
v___x_1862_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___closed__1));
return v___x_1862_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object* v_d_1863_, lean_object* v_key_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_d_1863_, v_key_1864_);
lean_dec_ref(v_key_1864_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(size_t v_sz_1866_, size_t v_i_1867_, lean_object* v_bs_1868_){
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
v___x_1872_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__0));
lean_inc(v_v_1871_);
v___x_1873_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Queue_metrics_spec__0_spec__1_spec__2_spec__3(v_v_1871_, v___x_1872_);
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
v___x_1883_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___closed__1));
lean_inc(v_v_1871_);
v___x_1884_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_v_1871_, v___x_1883_);
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
lean_object* v_a_1893_; lean_object* v___x_1894_; lean_object* v_bs_x27_1895_; lean_object* v___x_1896_; double v___x_1897_; size_t v___x_1898_; size_t v___x_1899_; lean_object* v___x_1900_; 
v_a_1893_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1893_);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1894_ = lean_unsigned_to_nat(0u);
v_bs_x27_1895_ = lean_array_uset(v_bs_1868_, v_i_1867_, v___x_1894_);
v___x_1896_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1896_, 0, v_a_1893_);
v___x_1897_ = lean_unbox_float(v_a_1882_);
lean_dec(v_a_1882_);
lean_ctor_set_float(v___x_1896_, sizeof(void*)*1, v___x_1897_);
v___x_1898_ = ((size_t)1ULL);
v___x_1899_ = lean_usize_add(v_i_1867_, v___x_1898_);
v___x_1900_ = lean_array_uset(v_bs_x27_1895_, v_i_1867_, v___x_1896_);
v_i_1867_ = v___x_1899_;
v_bs_1868_ = v___x_1900_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_sz_1902_, lean_object* v_i_1903_, lean_object* v_bs_1904_){
_start:
{
size_t v_sz_boxed_1905_; size_t v_i_boxed_1906_; lean_object* v_res_1907_; 
v_sz_boxed_1905_ = lean_unbox_usize(v_sz_1902_);
lean_dec(v_sz_1902_);
v_i_boxed_1906_ = lean_unbox_usize(v_i_1903_);
lean_dec(v_i_1903_);
v_res_1907_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_sz_boxed_1905_, v_i_boxed_1906_, v_bs_1904_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_1915_, lean_object* v_key_1916_){
_start:
{
if (lean_obj_tag(v_d_1915_) == 8)
{
lean_object* v___x_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1961_; 
v___x_1917_ = l_Lasm_JS_Data_field(v_d_1915_, v_key_1916_);
v_isSharedCheck_1961_ = !lean_is_exclusive(v_d_1915_);
if (v_isSharedCheck_1961_ == 0)
{
lean_object* v_unused_1962_; 
v_unused_1962_ = lean_ctor_get(v_d_1915_, 0);
lean_dec(v_unused_1962_);
v___x_1919_ = v_d_1915_;
v_isShared_1920_ = v_isSharedCheck_1961_;
goto v_resetjp_1918_;
}
else
{
lean_dec(v_d_1915_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1961_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v_a_1922_; 
if (lean_obj_tag(v___x_1917_) == 7)
{
lean_object* v_items_1947_; size_t v_sz_1948_; size_t v___x_1949_; lean_object* v___x_1950_; 
v_items_1947_ = lean_ctor_get(v___x_1917_, 0);
lean_inc_ref(v_items_1947_);
v_sz_1948_ = lean_array_size(v_items_1947_);
v___x_1949_ = ((size_t)0ULL);
v___x_1950_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_sz_1948_, v___x_1949_, v_items_1947_);
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v_a_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; uint8_t v___x_1955_; 
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
lean_inc(v_a_1951_);
lean_dec_ref_known(v___x_1950_, 1);
v___x_1952_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__3));
v___x_1953_ = lean_string_utf8_byte_size(v_a_1951_);
v___x_1954_ = lean_unsigned_to_nat(0u);
v___x_1955_ = lean_nat_dec_eq(v___x_1953_, v___x_1954_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1956_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__4));
v___x_1957_ = lean_string_append(v___x_1956_, v_a_1951_);
lean_dec(v_a_1951_);
v___x_1958_ = lean_string_append(v___x_1952_, v___x_1957_);
lean_dec_ref(v___x_1957_);
v_a_1922_ = v___x_1958_;
goto v___jp_1921_;
}
else
{
lean_dec(v_a_1951_);
v_a_1922_ = v___x_1952_;
goto v___jp_1921_;
}
}
else
{
if (lean_obj_tag(v___x_1950_) == 0)
{
lean_object* v_a_1959_; 
v_a_1959_ = lean_ctor_get(v___x_1950_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1950_, 1);
v_a_1922_ = v_a_1959_;
goto v___jp_1921_;
}
else
{
lean_dec_ref_known(v___x_1917_, 1);
lean_del_object(v___x_1919_);
return v___x_1950_;
}
}
}
else
{
lean_object* v___x_1960_; 
v___x_1960_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v_a_1922_ = v___x_1960_;
goto v___jp_1921_;
}
v___jp_1921_:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; uint8_t v___x_1935_; 
v___x_1923_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1924_ = lean_string_append(v___x_1923_, v_key_1916_);
v___x_1925_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1926_ = lean_string_append(v___x_1924_, v___x_1925_);
v___x_1927_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__0));
v___x_1928_ = lean_string_append(v___x_1926_, v___x_1927_);
v___x_1929_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1930_ = lean_string_append(v___x_1928_, v___x_1929_);
v___x_1931_ = l_Lasm_JS_Data_describe(v___x_1917_);
v___x_1932_ = lean_string_append(v___x_1930_, v___x_1931_);
lean_dec_ref(v___x_1931_);
v___x_1933_ = lean_string_utf8_byte_size(v_a_1922_);
v___x_1934_ = lean_unsigned_to_nat(0u);
v___x_1935_ = lean_nat_dec_eq(v___x_1933_, v___x_1934_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1936_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1));
v___x_1937_ = lean_string_append(v___x_1936_, v_a_1922_);
lean_dec_ref(v_a_1922_);
v___x_1938_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2));
v___x_1939_ = lean_string_append(v___x_1937_, v___x_1938_);
v___x_1940_ = lean_string_append(v___x_1932_, v___x_1939_);
lean_dec_ref(v___x_1939_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set_tag(v___x_1919_, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1940_);
v___x_1942_ = v___x_1919_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
else
{
lean_object* v___x_1945_; 
lean_dec_ref(v_a_1922_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set_tag(v___x_1919_, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1932_);
v___x_1945_ = v___x_1919_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1932_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
else
{
lean_object* v___x_1963_; 
lean_dec(v_d_1915_);
v___x_1963_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__5));
return v___x_1963_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_1964_, lean_object* v_key_1965_){
_start:
{
lean_object* v_res_1966_; 
v_res_1966_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(v_d_1964_, v_key_1965_);
lean_dec_ref(v_key_1965_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(lean_object* v_context_1967_, lean_object* v_d_1968_){
_start:
{
lean_object* v___y_1971_; lean_object* v___y_1972_; lean_object* v___y_1977_; lean_object* v_received_1978_; lean_object* v___y_1997_; lean_object* v_a_2000_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2024_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__0));
lean_inc(v_d_1968_);
v___x_2025_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(v_d_1968_, v___x_2024_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
v_a_2000_ = v_a_2026_;
goto v___jp_1999_;
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v_a_2027_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2027_);
lean_dec_ref_known(v___x_2025_, 1);
v___x_2028_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___closed__1));
lean_inc(v_d_1968_);
v___x_2029_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(v_d_1968_, v___x_2028_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; 
lean_dec(v_a_2027_);
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_a_2030_);
lean_dec_ref_known(v___x_2029_, 1);
v_a_2000_ = v_a_2030_;
goto v___jp_1999_;
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2040_; 
lean_dec(v_d_1968_);
v_a_2031_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2033_ = v___x_2029_;
v_isShared_2034_ = v_isSharedCheck_2040_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2029_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2040_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2035_; uint8_t v___x_2036_; lean_object* v___x_2038_; 
v___x_2035_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2035_, 0, v_a_2031_);
v___x_2036_ = lean_unbox(v_a_2027_);
lean_dec(v_a_2027_);
lean_ctor_set_uint8(v___x_2035_, sizeof(void*)*1, v___x_2036_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set_tag(v___x_2033_, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2035_);
v___x_2038_ = v___x_2033_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v___x_2035_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
v___jp_1970_:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1973_ = lean_string_append(v___y_1971_, v___y_1972_);
lean_dec_ref(v___y_1972_);
v___x_1974_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
v___x_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
return v___x_1975_;
}
v___jp_1976_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1979_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__0));
v___x_1980_ = lean_string_append(v___x_1979_, v_context_1967_);
v___x_1981_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__1));
v___x_1982_ = lean_string_append(v___x_1980_, v___x_1981_);
v___x_1983_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___closed__2));
v___x_1984_ = lean_string_append(v___x_1982_, v___x_1983_);
v___x_1985_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__3));
v___x_1986_ = lean_string_append(v___x_1984_, v___x_1985_);
v___x_1987_ = lean_string_append(v___x_1986_, v_received_1978_);
lean_dec_ref(v_received_1978_);
v___x_1988_ = lean_string_utf8_byte_size(v___y_1977_);
v___x_1989_ = lean_unsigned_to_nat(0u);
v___x_1990_ = lean_nat_dec_eq(v___x_1988_, v___x_1989_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1991_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__1));
v___x_1992_ = lean_string_append(v___x_1991_, v___y_1977_);
lean_dec_ref(v___y_1977_);
v___x_1993_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___closed__2));
v___x_1994_ = lean_string_append(v___x_1992_, v___x_1993_);
v___y_1971_ = v___x_1987_;
v___y_1972_ = v___x_1994_;
goto v___jp_1970_;
}
else
{
lean_object* v___x_1995_; 
lean_dec_ref(v___y_1977_);
v___x_1995_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___y_1971_ = v___x_1987_;
v___y_1972_ = v___x_1995_;
goto v___jp_1970_;
}
}
v___jp_1996_:
{
lean_object* v___x_1998_; 
v___x_1998_ = l_Lasm_JS_Data_describe(v_d_1968_);
v___y_1977_ = v___y_1997_;
v_received_1978_ = v___x_1998_;
goto v___jp_1976_;
}
v___jp_1999_:
{
if (lean_obj_tag(v_d_1968_) == 9)
{
lean_object* v_value_2001_; lean_object* v_description_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
v_value_2001_ = lean_ctor_get(v_d_1968_, 0);
v_description_2002_ = lean_ctor_get(v_d_1968_, 1);
v___x_2003_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_2004_ = lean_string_dec_eq(v_description_2002_, v___x_2003_);
if (v___x_2004_ == 0)
{
v___y_1997_ = v_a_2000_;
goto v___jp_1996_;
}
else
{
lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2021_; 
lean_inc(v_value_2001_);
v_isSharedCheck_2021_ = !lean_is_exclusive(v_d_1968_);
if (v_isSharedCheck_2021_ == 0)
{
lean_object* v_unused_2022_; lean_object* v_unused_2023_; 
v_unused_2022_ = lean_ctor_get(v_d_1968_, 1);
lean_dec(v_unused_2022_);
v_unused_2023_ = lean_ctor_get(v_d_1968_, 0);
lean_dec(v_unused_2023_);
v___x_2006_ = v_d_1968_;
v_isShared_2007_ = v_isSharedCheck_2021_;
goto v_resetjp_2005_;
}
else
{
lean_dec(v_d_1968_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2021_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
uint32_t v___x_2008_; uint64_t v___x_2009_; lean_object* v___x_2011_; 
v___x_2008_ = 206;
v___x_2009_ = 0ULL;
lean_inc(v_value_2001_);
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 1, v___x_2003_);
v___x_2011_ = v___x_2006_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_value_2001_);
lean_ctor_set(v_reuseFailAlloc_2020_, 1, v___x_2003_);
v___x_2011_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
uint32_t v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = lasm_js_value_handle(v_value_2001_);
lean_dec(v_value_2001_);
v___x_2013_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2008_, v___x_2009_, v___x_2011_, v___x_2012_);
lean_dec_ref(v___x_2011_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2014_; uint8_t v___x_2015_; 
v_a_2014_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_2013_, 1);
v___x_2015_ = lean_string_validate_utf8(v_a_2014_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
lean_dec(v_a_2014_);
v___x_2016_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__10);
v___x_2017_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2016_);
v___y_1977_ = v_a_2000_;
v_received_1978_ = v___x_2017_;
goto v___jp_1976_;
}
else
{
lean_object* v___x_2018_; 
v___x_2018_ = lean_string_from_utf8_unchecked(v_a_2014_);
v___y_1977_ = v_a_2000_;
v_received_1978_ = v___x_2018_;
goto v___jp_1976_;
}
}
else
{
lean_object* v___x_2019_; 
lean_dec_ref_known(v___x_2013_, 1);
v___x_2019_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___closed__11));
v___y_1977_ = v_a_2000_;
v_received_1978_ = v___x_2019_;
goto v___jp_1976_;
}
}
}
}
}
else
{
v___y_1997_ = v_a_2000_;
goto v___jp_1996_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3___boxed(lean_object* v_context_2041_, lean_object* v_d_2042_, lean_object* v_a_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(v_context_2041_, v_d_2042_);
lean_dec_ref(v_context_2041_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(lean_object* v_context_2045_, lean_object* v_x_2046_){
_start:
{
lean_object* v_val_2049_; 
if (lean_obj_tag(v_x_2046_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2059_; 
v_a_2051_ = lean_ctor_get(v_x_2046_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_x_2046_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2053_ = v_x_2046_;
v_isShared_2054_ = v_isSharedCheck_2059_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v_x_2046_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2059_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2057_; 
v___x_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
return v___x_2057_;
}
}
}
else
{
lean_object* v_a_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2073_; 
v_a_2060_ = lean_ctor_get(v_x_2046_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v_x_2046_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2062_ = v_x_2046_;
v_isShared_2063_ = v_isSharedCheck_2073_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_a_2060_);
lean_dec(v_x_2046_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2073_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; 
v___x_2064_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(v_context_2045_, v_a_2060_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v_a_2065_; lean_object* v___x_2067_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2065_);
lean_dec_ref_known(v___x_2064_, 1);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v_a_2065_);
v___x_2067_ = v___x_2062_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
v_val_2049_ = v___x_2067_;
goto v___jp_2048_;
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; 
v_a_2069_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2069_);
lean_dec_ref_known(v___x_2064_, 1);
if (v_isShared_2063_ == 0)
{
lean_ctor_set_tag(v___x_2062_, 0);
lean_ctor_set(v___x_2062_, 0, v_a_2069_);
v___x_2071_ = v___x_2062_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2069_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
v_val_2049_ = v___x_2071_;
goto v___jp_2048_;
}
}
}
}
v___jp_2048_:
{
lean_object* v___x_2050_; 
v___x_2050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2050_, 0, v_val_2049_);
return v___x_2050_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed(lean_object* v_context_2074_, lean_object* v_x_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(v_context_2074_, v_x_2075_);
lean_dec_ref(v_context_2074_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(lean_object* v_context_2078_, uint32_t v_op_2079_, uint64_t v_flags_2080_, lean_object* v_payload_2081_, lean_object* v_failurePrefix_2082_){
_start:
{
lean_object* v___f_2084_; lean_object* v___f_2085_; lean_object* v___f_2086_; lean_object* v___f_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___f_2090_; lean_object* v___f_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; lean_object* v_val_2095_; lean_object* v___x_2098_; 
v___f_2084_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2084_, 0, v_context_2078_);
v___f_2085_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2085_, 0, v___f_2084_);
v___f_2086_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2086_, 0, v___f_2085_);
lean_inc_ref(v_failurePrefix_2082_);
v___f_2087_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2087_, 0, v_failurePrefix_2082_);
v___x_2088_ = lean_box_uint32(v_op_2079_);
v___x_2089_ = lean_box_uint64(v_flags_2080_);
lean_inc_ref(v___f_2086_);
v___f_2090_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2090_, 0, v_failurePrefix_2082_);
lean_closure_set(v___f_2090_, 1, v___x_2088_);
lean_closure_set(v___f_2090_, 2, v___x_2089_);
lean_closure_set(v___f_2090_, 3, v_payload_2081_);
lean_closure_set(v___f_2090_, 4, v___f_2087_);
lean_closure_set(v___f_2090_, 5, v___f_2086_);
lean_closure_set(v___f_2090_, 6, v___f_2086_);
v___f_2091_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2091_, 0, v___f_2090_);
v___x_2092_ = lean_unsigned_to_nat(0u);
v___x_2093_ = 0;
v___x_2098_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2106_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2101_ = v___x_2098_;
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2098_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2104_; 
if (v_isShared_2102_ == 0)
{
lean_ctor_set_tag(v___x_2101_, 1);
v___x_2104_ = v___x_2101_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_a_2099_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
v_val_2095_ = v___x_2104_;
goto v___jp_2094_;
}
}
}
else
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2114_; 
v_a_2107_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2109_ = v___x_2098_;
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2098_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2112_; 
if (v_isShared_2110_ == 0)
{
lean_ctor_set_tag(v___x_2109_, 0);
v___x_2112_ = v___x_2109_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_a_2107_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
v_val_2095_ = v___x_2112_;
goto v___jp_2094_;
}
}
}
v___jp_2094_:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v_val_2095_);
v___x_2097_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2092_, v___x_2093_, v___x_2096_, v___f_2091_);
return v___x_2097_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___boxed(lean_object* v_context_2115_, lean_object* v_op_2116_, lean_object* v_flags_2117_, lean_object* v_payload_2118_, lean_object* v_failurePrefix_2119_, lean_object* v_a_2120_){
_start:
{
uint32_t v_op_boxed_2121_; uint64_t v_flags_boxed_2122_; lean_object* v_res_2123_; 
v_op_boxed_2121_ = lean_unbox_uint32(v_op_2116_);
lean_dec(v_op_2116_);
v_flags_boxed_2122_ = lean_unbox_uint64(v_flags_2117_);
lean_dec_ref(v_flags_2117_);
v_res_2123_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(v_context_2115_, v_op_boxed_2121_, v_flags_boxed_2122_, v_payload_2118_, v_failurePrefix_2119_);
return v_res_2123_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(uint8_t v_await_2124_, uint64_t v_extra_2125_){
_start:
{
uint64_t v___x_2126_; uint64_t v___y_2128_; 
v___x_2126_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___closed__0);
if (v_await_2124_ == 0)
{
uint64_t v___x_2131_; 
v___x_2131_ = 0ULL;
v___y_2128_ = v___x_2131_;
goto v___jp_2127_;
}
else
{
uint64_t v___x_2132_; 
v___x_2132_ = 2ULL;
v___y_2128_ = v___x_2132_;
goto v___jp_2127_;
}
v___jp_2127_:
{
uint64_t v___x_2129_; uint64_t v___x_2130_; 
v___x_2129_ = lean_uint64_lor(v___x_2126_, v___y_2128_);
v___x_2130_ = lean_uint64_lor(v___x_2129_, v_extra_2125_);
return v___x_2130_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1___boxed(lean_object* v_await_2133_, lean_object* v_extra_2134_){
_start:
{
uint8_t v_await_boxed_2135_; uint64_t v_extra_boxed_2136_; uint64_t v_res_2137_; lean_object* v_r_2138_; 
v_await_boxed_2135_ = lean_unbox(v_await_2133_);
v_extra_boxed_2136_ = lean_unbox_uint64(v_extra_2134_);
lean_dec_ref(v_extra_2134_);
v_res_2137_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(v_await_boxed_2135_, v_extra_boxed_2136_);
v_r_2138_ = lean_box_uint64(v_res_2137_);
return v_r_2138_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1(void){
_start:
{
uint64_t v___x_2140_; uint8_t v___x_2141_; uint64_t v___x_2142_; 
v___x_2140_ = 8ULL;
v___x_2141_ = 0;
v___x_2142_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(v___x_2141_, v___x_2140_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(lean_object* v_o_2143_, lean_object* v_name_2144_, lean_object* v_args_2145_){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; uint32_t v___x_2152_; uint64_t v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2147_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0___closed__0));
v___x_2148_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2148_, 0, v_o_2143_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
lean_inc_ref(v_name_2144_);
v___x_2149_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2149_, 0, v_name_2144_);
v___x_2150_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__0));
v___x_2151_ = lean_string_append(v___x_2150_, v_name_2144_);
lean_dec_ref(v_name_2144_);
v___x_2152_ = 205;
v___x_2153_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___closed__1);
v___x_2154_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2154_, 0, v_args_2145_);
v___x_2155_ = lean_unsigned_to_nat(3u);
v___x_2156_ = lean_mk_empty_array_with_capacity(v___x_2155_);
v___x_2157_ = lean_array_push(v___x_2156_, v___x_2148_);
v___x_2158_ = lean_array_push(v___x_2157_, v___x_2149_);
v___x_2159_ = lean_array_push(v___x_2158_, v___x_2154_);
v___x_2160_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
v___x_2161_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(v___x_2151_, v___x_2152_, v___x_2153_, v___x_2160_, v___x_2147_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___boxed(lean_object* v_o_2162_, lean_object* v_name_2163_, lean_object* v_args_2164_, lean_object* v___y_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_o_2162_, v_name_2163_, v_args_2164_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(lean_object* v_x_2167_){
_start:
{
if (lean_obj_tag(v_x_2167_) == 0)
{
lean_object* v___x_2168_; 
v___x_2168_ = lean_box(0);
return v___x_2168_;
}
else
{
lean_object* v_val_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2179_; 
v_val_2169_ = lean_ctor_get(v_x_2167_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v_x_2167_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2171_ = v_x_2167_;
v_isShared_2172_ = v_isSharedCheck_2179_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_val_2169_);
lean_dec(v_x_2167_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2179_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
size_t v_sz_2173_; size_t v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2177_; 
v_sz_2173_ = lean_array_size(v_val_2169_);
v___x_2174_ = ((size_t)0ULL);
v___x_2175_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2173_, v___x_2174_, v_val_2169_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set_tag(v___x_2171_, 7);
lean_ctor_set(v___x_2171_, 0, v___x_2175_);
v___x_2177_ = v___x_2171_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v___x_2175_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge(lean_object* v_self_2181_, lean_object* v_options_2182_){
_start:
{
lean_object* v_tags_2184_; lean_object* v_pathPrefixes_2185_; lean_object* v_purgeEverything_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v_tags_2184_ = lean_ctor_get(v_options_2182_, 0);
lean_inc(v_tags_2184_);
v_pathPrefixes_2185_ = lean_ctor_get(v_options_2182_, 1);
lean_inc(v_pathPrefixes_2185_);
v_purgeEverything_2186_ = lean_ctor_get(v_options_2182_, 2);
lean_inc(v_purgeEverything_2186_);
lean_dec_ref(v_options_2182_);
v___x_2187_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheContext_purge___closed__0));
v___x_2188_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0));
v___x_2189_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_tags_2184_);
v___x_2190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2188_);
lean_ctor_set(v___x_2190_, 1, v___x_2189_);
v___x_2191_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1));
v___x_2192_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_pathPrefixes_2185_);
v___x_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2191_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
v___x_2194_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2));
v___x_2195_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_purgeEverything_2186_);
lean_dec(v_purgeEverything_2186_);
v___x_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2194_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = lean_unsigned_to_nat(3u);
v___x_2198_ = lean_mk_empty_array_with_capacity(v___x_2197_);
v___x_2199_ = lean_array_push(v___x_2198_, v___x_2190_);
v___x_2200_ = lean_array_push(v___x_2199_, v___x_2193_);
v___x_2201_ = lean_array_push(v___x_2200_, v___x_2196_);
v___x_2202_ = l_Lasm_JS_Web_Support_fields(v___x_2201_);
lean_dec_ref(v___x_2201_);
v___x_2203_ = lean_unsigned_to_nat(1u);
v___x_2204_ = lean_mk_empty_array_with_capacity(v___x_2203_);
v___x_2205_ = lean_array_push(v___x_2204_, v___x_2202_);
v___x_2206_ = l_Lasm_JS_Web_Support_args(v___x_2205_);
v___x_2207_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_self_2181_, v___x_2187_, v___x_2206_);
return v___x_2207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge___boxed(lean_object* v_self_2208_, lean_object* v_options_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lasm_JS_Cloudflare_CacheContext_purge(v_self_2208_, v_options_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate(lean_object* v_self_2213_, lean_object* v_options_2214_){
_start:
{
lean_object* v_tags_2216_; lean_object* v_pathPrefixes_2217_; lean_object* v_purgeEverything_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v_tags_2216_ = lean_ctor_get(v_options_2214_, 0);
lean_inc(v_tags_2216_);
v_pathPrefixes_2217_ = lean_ctor_get(v_options_2214_, 1);
lean_inc(v_pathPrefixes_2217_);
v_purgeEverything_2218_ = lean_ctor_get(v_options_2214_, 2);
lean_inc(v_purgeEverything_2218_);
lean_dec_ref(v_options_2214_);
v___x_2219_ = ((lean_object*)(l_Lasm_JS_Cloudflare_CacheContext_invalidate___closed__0));
v___x_2220_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__0));
v___x_2221_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_tags_2216_);
v___x_2222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2220_);
lean_ctor_set(v___x_2222_, 1, v___x_2221_);
v___x_2223_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__1));
v___x_2224_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_pathPrefixes_2217_);
v___x_2225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2223_);
lean_ctor_set(v___x_2225_, 1, v___x_2224_);
v___x_2226_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0___closed__2));
v___x_2227_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_purgeEverything_2218_);
lean_dec(v_purgeEverything_2218_);
v___x_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2226_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = lean_unsigned_to_nat(3u);
v___x_2230_ = lean_mk_empty_array_with_capacity(v___x_2229_);
v___x_2231_ = lean_array_push(v___x_2230_, v___x_2222_);
v___x_2232_ = lean_array_push(v___x_2231_, v___x_2225_);
v___x_2233_ = lean_array_push(v___x_2232_, v___x_2228_);
v___x_2234_ = l_Lasm_JS_Web_Support_fields(v___x_2233_);
lean_dec_ref(v___x_2233_);
v___x_2235_ = lean_unsigned_to_nat(1u);
v___x_2236_ = lean_mk_empty_array_with_capacity(v___x_2235_);
v___x_2237_ = lean_array_push(v___x_2236_, v___x_2234_);
v___x_2238_ = l_Lasm_JS_Web_Support_args(v___x_2237_);
v___x_2239_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_self_2213_, v___x_2219_, v___x_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate___boxed(lean_object* v_self_2240_, lean_object* v_options_2241_, lean_object* v_a_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Lasm_JS_Cloudflare_CacheContext_invalidate(v_self_2240_, v_options_2241_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(lean_object* v_self_2245_){
_start:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2247_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___closed__0));
v___x_2248_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_attempts_spec__0(v_self_2245_, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___boxed(lean_object* v_self_2249_, lean_object* v_a_2250_){
_start:
{
lean_object* v_res_2251_; 
v_res_2251_ = l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(v_self_2249_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron(lean_object* v_self_2253_){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_cron___closed__0));
v___x_2256_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_Message_id_spec__0(v_self_2253_, v___x_2255_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron___boxed(lean_object* v_self_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lasm_JS_Cloudflare_ScheduledController_cron(v_self_2257_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry(lean_object* v_self_2261_){
_start:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2263_ = ((lean_object*)(l_Lasm_JS_Cloudflare_ScheduledController_noRetry___closed__0));
v___x_2264_ = lean_obj_once(&l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2, &l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2_once, _init_l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___closed__2);
v___x_2265_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Message_retry_spec__1(v_self_2261_, v___x_2263_, v___x_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry___boxed(lean_object* v_self_2266_, lean_object* v_a_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lasm_JS_Cloudflare_ScheduledController_noRetry(v_self_2266_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg(lean_object* v_inst_2274_){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2276_ = l_Lasm_JS_instFromJSData;
v___x_2277_ = ((lean_object*)(l_Lasm_JS_Cloudflare_env___redArg___closed__0));
v___x_2278_ = ((lean_object*)(l_Lasm_JS_Cloudflare_env___redArg___closed__2));
v___x_2279_ = l_Lasm_JS_Cloudflare_Support_getExport___redArg(v___x_2277_, v___x_2278_, v___x_2276_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2281_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2279_, 1);
v___x_2281_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_2274_, v_a_2280_);
return v___x_2281_;
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
lean_dec_ref(v_inst_2274_);
v_a_2282_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2279_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2279_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg___boxed(lean_object* v_inst_2290_, lean_object* v_a_2291_){
_start:
{
lean_object* v_res_2292_; 
v_res_2292_ = l_Lasm_JS_Cloudflare_env___redArg(v_inst_2290_);
return v_res_2292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env(lean_object* v_Env_2293_, lean_object* v_inst_2294_){
_start:
{
lean_object* v___x_2296_; 
v___x_2296_ = l_Lasm_JS_Cloudflare_env___redArg(v_inst_2294_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___boxed(lean_object* v_Env_2297_, lean_object* v_inst_2298_, lean_object* v_a_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lasm_JS_Cloudflare_env(v_Env_2297_, v_inst_2298_);
return v_res_2300_;
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
