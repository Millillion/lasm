// Lean compiler output
// Module: Lasm.JS.Cloudflare.Workers
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Support public import Lasm.JS.Web.Dom public import Lasm.JS.Web.Fetch
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
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
extern lean_object* l_Lasm_JS_Web_instFromJSRequest;
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Cloudflare_Support_getExport___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSExecutionContext_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExecutionContext = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExecutionContext_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSCacheContext_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSCacheContext = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCacheContext_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCacheContext;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSScheduledController_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSScheduledController = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSScheduledController_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSScheduledController;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSCloudflareAccessContext_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSCloudflareAccessContext = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSCloudflareAccessContext_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessContext;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSScheduledEvent_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSScheduledEvent = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSScheduledEvent_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSScheduledEvent;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSTracing_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSTracing = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSTracing_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracing;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSSpan_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSSpan = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSSpan_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSSpan;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSTracingEnterSpanCallback_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSTracingEnterSpanCallback = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSTracingEnterSpanCallback_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingEnterSpanCallback;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSTracingStartActiveSpanCallback_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSTracingStartActiveSpanCallback = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSTracingStartActiveSpanCallback_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingStartActiveSpanCallback;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSBooleanOrDoubleOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSBooleanOrDoubleOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSBooleanOrDoubleOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSBooleanOrDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSBooleanOrDoubleOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringBooleanOrDoubleOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringBooleanOrDoubleOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringBooleanOrDoubleOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringBooleanOrDoubleOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringBooleanOrDoubleOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTestController___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSTestController_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSTestController___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSTestController = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSTestController_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTestController___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTestController;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCloudflare;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSExportedHandlerFetchHandler_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandlerFetchHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExportedHandlerFetchHandler_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler;
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
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSExportedHandlerScheduledHandler_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandlerScheduledHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExportedHandlerScheduledHandler_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler;
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
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSExportedHandlerTestHandler_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSExportedHandlerTestHandler = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSExportedHandlerTestHandler_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExportedHandlerTestHandler;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSPagesFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSPagesFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSPagesFunction;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2EnvASSETS___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSPagesFunction2EnvASSETS_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSPagesFunction2EnvASSETS___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2EnvASSETS = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSPagesFunction2EnvASSETS_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2Env___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSPagesFunction2Env_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSPagesFunction2Env___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2Env = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSPagesFunction2Env_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSPagesFunction2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSPagesFunction2_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSPagesPluginFunction;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_exports(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_exports___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_access(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_access___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_tracing(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_tracing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_aud(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_aud___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_type(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_type___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_eventPhase(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_eventPhase___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_composed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_composed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_bubbles(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_bubbles___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_cancelable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_cancelable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_defaultPrevented(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_defaultPrevented___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_currentTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_currentTarget___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_target(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_target___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_timeStamp(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_timeStamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_isTrusted(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_isTrusted___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_NONE();
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_NONE___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_CAPTURING__PHASE();
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_CAPTURING__PHASE___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_AT__TARGET();
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_AT__TARGET___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_BUBBLING__PHASE();
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_BUBBLING__PHASE___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_scheduledTime(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_scheduledTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_cron(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_cron___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_stopImmediatePropagation(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_stopImmediatePropagation___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_preventDefault(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_preventDefault___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_stopPropagation(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_stopPropagation___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_composedPath(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_composedPath___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_waitUntil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_waitUntil___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_noRetry(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_noRetry___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_SpanClass(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_SpanClass___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_enterSpan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_enterSpan___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_startActiveSpan(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_startActiveSpan___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_startSpan(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_startSpan___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_getActiveSpan(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_getActiveSpan___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_isTraced(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_isTraced___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_spanContext(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_spanContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Span_setAttributes_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Span_setAttributes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setAttributes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setAttributes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_recordException(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_recordException___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_updateName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_updateName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setStatus(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setStatus___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_end(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_end___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSExecutionContext___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSExecutionContext(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ExecutionContext", 35, 35);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCacheContext(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CacheContext", 31, 31);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSScheduledController(void){
_start:
{
lean_object* v___f_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; 
v___f_22_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_23_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ScheduledController", 38, 38);
v___x_24_ = 0;
v___x_25_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_25_, 0, v___f_22_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set_uint8(v___x_25_, sizeof(void*)*2, v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessContext(void){
_start:
{
lean_object* v___f_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_28_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessContext", 42, 42);
v___x_29_ = 0;
v___x_30_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_30_, 0, v___f_27_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set_uint8(v___x_30_, sizeof(void*)*2, v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSScheduledEvent(void){
_start:
{
lean_object* v___f_32_; lean_object* v___x_33_; uint8_t v___x_34_; lean_object* v___x_35_; 
v___f_32_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_33_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ScheduledEvent", 33, 33);
v___x_34_ = 0;
v___x_35_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_35_, 0, v___f_32_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set_uint8(v___x_35_, sizeof(void*)*2, v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracing(void){
_start:
{
lean_object* v___f_37_; lean_object* v___x_38_; uint8_t v___x_39_; lean_object* v___x_40_; 
v___f_37_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_38_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.Tracing", 26, 26);
v___x_39_ = 0;
v___x_40_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_40_, 0, v___f_37_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
lean_ctor_set_uint8(v___x_40_, sizeof(void*)*2, v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSSpan(void){
_start:
{
lean_object* v___f_42_; lean_object* v___x_43_; uint8_t v___x_44_; lean_object* v___x_45_; 
v___f_42_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_43_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.Span", 23, 23);
v___x_44_ = 0;
v___x_45_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_45_, 0, v___f_42_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
lean_ctor_set_uint8(v___x_45_, sizeof(void*)*2, v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorIdx(uint8_t v_x_46_){
_start:
{
switch(v_x_46_)
{
case 0:
{
lean_object* v___x_47_; 
v___x_47_ = lean_unsigned_to_nat(0u);
return v___x_47_;
}
case 1:
{
lean_object* v___x_48_; 
v___x_48_ = lean_unsigned_to_nat(1u);
return v___x_48_;
}
default: 
{
lean_object* v___x_49_; 
v___x_49_ = lean_unsigned_to_nat(2u);
return v___x_49_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorIdx___boxed(lean_object* v_x_50_){
_start:
{
uint8_t v_x_boxed_51_; lean_object* v_res_52_; 
v_x_boxed_51_ = lean_unbox(v_x_50_);
v_res_52_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorIdx(v_x_boxed_51_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim___redArg(lean_object* v_k_53_){
_start:
{
lean_inc(v_k_53_);
return v_k_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim___redArg___boxed(lean_object* v_k_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim___redArg(v_k_54_);
lean_dec(v_k_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim(lean_object* v_motive_56_, lean_object* v_ctorIdx_57_, uint8_t v_t_58_, lean_object* v_h_59_, lean_object* v_k_60_){
_start:
{
lean_inc(v_k_60_);
return v_k_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim___boxed(lean_object* v_motive_61_, lean_object* v_ctorIdx_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_k_65_){
_start:
{
uint8_t v_t_boxed_66_; lean_object* v_res_67_; 
v_t_boxed_66_ = lean_unbox(v_t_63_);
v_res_67_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorElim(v_motive_61_, v_ctorIdx_62_, v_t_boxed_66_, v_h_64_, v_k_65_);
lean_dec(v_k_65_);
lean_dec(v_ctorIdx_62_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim___redArg(lean_object* v_unset_68_){
_start:
{
lean_inc(v_unset_68_);
return v_unset_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim___redArg___boxed(lean_object* v_unset_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim___redArg(v_unset_69_);
lean_dec(v_unset_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim(lean_object* v_motive_71_, uint8_t v_t_72_, lean_object* v_h_73_, lean_object* v_unset_74_){
_start:
{
lean_inc(v_unset_74_);
return v_unset_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim___boxed(lean_object* v_motive_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_unset_78_){
_start:
{
uint8_t v_t_boxed_79_; lean_object* v_res_80_; 
v_t_boxed_79_ = lean_unbox(v_t_76_);
v_res_80_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_elim(v_motive_75_, v_t_boxed_79_, v_h_77_, v_unset_78_);
lean_dec(v_unset_78_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim___redArg(lean_object* v_ok_81_){
_start:
{
lean_inc(v_ok_81_);
return v_ok_81_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim___redArg___boxed(lean_object* v_ok_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim___redArg(v_ok_82_);
lean_dec(v_ok_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim(lean_object* v_motive_84_, uint8_t v_t_85_, lean_object* v_h_86_, lean_object* v_ok_87_){
_start:
{
lean_inc(v_ok_87_);
return v_ok_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim___boxed(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_ok_91_){
_start:
{
uint8_t v_t_boxed_92_; lean_object* v_res_93_; 
v_t_boxed_92_ = lean_unbox(v_t_89_);
v_res_93_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_elim(v_motive_88_, v_t_boxed_92_, v_h_90_, v_ok_91_);
lean_dec(v_ok_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim___redArg(lean_object* v_error_94_){
_start:
{
lean_inc(v_error_94_);
return v_error_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim___redArg___boxed(lean_object* v_error_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim___redArg(v_error_95_);
lean_dec(v_error_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim(lean_object* v_motive_97_, uint8_t v_t_98_, lean_object* v_h_99_, lean_object* v_error_100_){
_start:
{
lean_inc(v_error_100_);
return v_error_100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim___boxed(lean_object* v_motive_101_, lean_object* v_t_102_, lean_object* v_h_103_, lean_object* v_error_104_){
_start:
{
uint8_t v_t_boxed_105_; lean_object* v_res_106_; 
v_t_boxed_105_ = lean_unbox(v_t_102_);
v_res_106_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_elim(v_motive_101_, v_t_boxed_105_, v_h_103_, v_error_104_);
lean_dec(v_error_104_);
return v_res_106_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq(uint8_t v_x_107_, uint8_t v_y_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_109_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorIdx(v_x_107_);
v___x_110_ = l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ctorIdx(v_y_108_);
v___x_111_ = lean_nat_dec_eq(v___x_109_, v___x_110_);
lean_dec(v___x_110_);
lean_dec(v___x_109_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq___boxed(lean_object* v_x_112_, lean_object* v_y_113_){
_start:
{
uint8_t v_x_21__boxed_114_; uint8_t v_y_22__boxed_115_; uint8_t v_res_116_; lean_object* v_r_117_; 
v_x_21__boxed_114_ = lean_unbox(v_x_112_);
v_y_22__boxed_115_ = lean_unbox(v_y_113_);
v_res_116_ = l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq(v_x_21__boxed_114_, v_y_22__boxed_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr(uint8_t v_x_119_, lean_object* v_prec_120_){
_start:
{
lean_object* v___y_122_; lean_object* v___y_130_; lean_object* v___y_138_; 
switch(v_x_119_)
{
case 0:
{
lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_145_ = lean_unsigned_to_nat(1024u);
v___x_146_ = lean_nat_dec_le(v___x_145_, v_prec_120_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(2u);
v___x_148_ = lean_nat_to_int(v___x_147_);
v___y_122_ = v___x_148_;
goto v___jp_121_;
}
else
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_to_int(v___x_149_);
v___y_122_ = v___x_150_;
goto v___jp_121_;
}
}
case 1:
{
lean_object* v___x_151_; uint8_t v___x_152_; 
v___x_151_ = lean_unsigned_to_nat(1024u);
v___x_152_ = lean_nat_dec_le(v___x_151_, v_prec_120_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(2u);
v___x_154_ = lean_nat_to_int(v___x_153_);
v___y_130_ = v___x_154_;
goto v___jp_129_;
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(1u);
v___x_156_ = lean_nat_to_int(v___x_155_);
v___y_130_ = v___x_156_;
goto v___jp_129_;
}
}
default: 
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(1024u);
v___x_158_ = lean_nat_dec_le(v___x_157_, v_prec_120_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(2u);
v___x_160_ = lean_nat_to_int(v___x_159_);
v___y_138_ = v___x_160_;
goto v___jp_137_;
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(1u);
v___x_162_ = lean_nat_to_int(v___x_161_);
v___y_138_ = v___x_162_;
goto v___jp_137_;
}
}
}
v___jp_121_:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_123_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingSpanStatusCode.unset", 46, 46);
v___x_124_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
v___x_125_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_125_, 0, v___y_122_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = 0;
v___x_127_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_127_, 0, v___x_125_);
lean_ctor_set_uint8(v___x_127_, sizeof(void*)*1, v___x_126_);
v___x_128_ = l_Repr_addAppParen(v___x_127_, v_prec_120_);
return v___x_128_;
}
v___jp_129_:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_131_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingSpanStatusCode.ok", 43, 43);
v___x_132_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
v___x_133_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_133_, 0, v___y_130_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = 0;
v___x_135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_135_, 0, v___x_133_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*1, v___x_134_);
v___x_136_ = l_Repr_addAppParen(v___x_135_, v_prec_120_);
return v___x_136_;
}
v___jp_137_:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_139_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingSpanStatusCode.error", 46, 46);
v___x_140_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_140_, 0, v___x_139_);
v___x_141_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_141_, 0, v___y_138_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
v___x_142_ = 0;
v___x_143_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_143_, 0, v___x_141_);
lean_ctor_set_uint8(v___x_143_, sizeof(void*)*1, v___x_142_);
v___x_144_ = l_Repr_addAppParen(v___x_143_, v_prec_120_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___boxed(lean_object* v_x_163_, lean_object* v_prec_164_){
_start:
{
uint8_t v_x_137__boxed_165_; lean_object* v_res_166_; 
v_x_137__boxed_165_ = lean_unbox(v_x_163_);
v_res_166_ = l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr(v_x_137__boxed_165_, v_prec_164_);
lean_dec(v_prec_164_);
return v_res_166_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_default(void){
_start:
{
uint8_t v___x_168_; 
v___x_168_ = 0;
return v___x_168_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode(void){
_start:
{
uint8_t v___x_169_; 
v___x_169_ = 0;
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0(uint8_t v_x_170_){
_start:
{
switch(v_x_170_)
{
case 0:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_mk_string_unchecked("unset", 5, 5);
v___x_172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
return v___x_172_;
}
case 1:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = lean_mk_string_unchecked("ok", 2, 2);
v___x_174_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
return v___x_174_;
}
default: 
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_mk_string_unchecked("error", 5, 5);
v___x_176_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0___boxed(lean_object* v_x_177_){
_start:
{
uint8_t v_x_39__boxed_178_; lean_object* v_res_179_; 
v_x_39__boxed_178_ = lean_unbox(v_x_177_);
v_res_179_ = l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0(v_x_39__boxed_178_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode___lam__0(lean_object* v_x_181_){
_start:
{
if (lean_obj_tag(v_x_181_) == 4)
{
lean_object* v_s_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_210_; 
v_s_185_ = lean_ctor_get(v_x_181_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v_x_181_);
if (v_isSharedCheck_210_ == 0)
{
v___x_187_ = v_x_181_;
v_isShared_188_ = v_isSharedCheck_210_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_s_185_);
lean_dec(v_x_181_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_210_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = lean_mk_string_unchecked("unset", 5, 5);
v___x_190_ = lean_string_dec_eq(v_s_185_, v___x_189_);
lean_dec_ref(v___x_189_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_mk_string_unchecked("ok", 2, 2);
v___x_192_ = lean_string_dec_eq(v_s_185_, v___x_191_);
lean_dec_ref(v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_193_ = lean_mk_string_unchecked("error", 5, 5);
v___x_194_ = lean_string_dec_eq(v_s_185_, v___x_193_);
lean_dec_ref(v___x_193_);
lean_dec_ref(v_s_185_);
if (v___x_194_ == 0)
{
lean_del_object(v___x_187_);
goto v___jp_182_;
}
else
{
uint8_t v___x_195_; lean_object* v___x_196_; lean_object* v___x_198_; 
v___x_195_ = 2;
v___x_196_ = lean_box(v___x_195_);
if (v_isShared_188_ == 0)
{
lean_ctor_set_tag(v___x_187_, 1);
lean_ctor_set(v___x_187_, 0, v___x_196_);
v___x_198_ = v___x_187_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_196_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
}
else
{
uint8_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_203_; 
lean_dec_ref(v_s_185_);
v___x_200_ = 1;
v___x_201_ = lean_box(v___x_200_);
if (v_isShared_188_ == 0)
{
lean_ctor_set_tag(v___x_187_, 1);
lean_ctor_set(v___x_187_, 0, v___x_201_);
v___x_203_ = v___x_187_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_201_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
else
{
uint8_t v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
lean_dec_ref(v_s_185_);
v___x_205_ = 0;
v___x_206_ = lean_box(v___x_205_);
if (v_isShared_188_ == 0)
{
lean_ctor_set_tag(v___x_187_, 1);
lean_ctor_set(v___x_187_, 0, v___x_206_);
v___x_208_ = v___x_187_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
else
{
lean_dec(v_x_181_);
goto v___jp_182_;
}
v___jp_182_:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_mk_string_unchecked("not a value of the enumeration", 30, 30);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode(void){
_start:
{
lean_object* v___f_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; 
v___f_211_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode___lam__0), 1, 0);
v___x_212_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingSpanStatusCode", 40, 40);
v___x_213_ = 0;
v___x_214_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_214_, 0, v___f_211_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
lean_ctor_set_uint8(v___x_214_, sizeof(void*)*2, v___x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0(lean_object* v___x_215_, lean_object* v___f_216_, lean_object* v_d_217_){
_start:
{
lean_object* v_tags_218_; lean_object* v_pathPrefixes_219_; lean_object* v_purgeEverything_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v_tags_218_ = lean_ctor_get(v_d_217_, 0);
lean_inc(v_tags_218_);
v_pathPrefixes_219_ = lean_ctor_get(v_d_217_, 1);
lean_inc(v_pathPrefixes_219_);
v_purgeEverything_220_ = lean_ctor_get(v_d_217_, 2);
lean_inc(v_purgeEverything_220_);
lean_dec_ref(v_d_217_);
v___x_221_ = lean_mk_string_unchecked("tags", 4, 4);
lean_inc_ref(v___x_215_);
v___x_222_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_215_, v_tags_218_);
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_221_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = lean_mk_string_unchecked("pathPrefixes", 12, 12);
v___x_225_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_215_, v_pathPrefixes_219_);
v___x_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_mk_string_unchecked("purgeEverything", 15, 15);
v___x_228_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_216_, v_purgeEverything_220_);
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = lean_unsigned_to_nat(3u);
v___x_231_ = lean_mk_empty_array_with_capacity(v___x_230_);
v___x_232_ = lean_array_push(v___x_231_, v___x_223_);
v___x_233_ = lean_array_push(v___x_232_, v___x_226_);
v___x_234_ = lean_array_push(v___x_233_, v___x_229_);
v___x_235_ = l_Lasm_JS_Web_Support_fields(v___x_234_);
lean_dec_ref(v___x_234_);
return v___x_235_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions(void){
_start:
{
lean_object* v___f_236_; lean_object* v___x_237_; lean_object* v___f_238_; lean_object* v___f_239_; 
v___f_236_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_237_ = l_Lasm_JS_instToJSArray___redArg(v___f_236_);
v___f_238_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_239_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0), 3, 2);
lean_closure_set(v___f_239_, 0, v___x_237_);
lean_closure_set(v___f_239_, 1, v___f_238_);
return v___f_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0(lean_object* v___x_240_, lean_object* v___x_241_, lean_object* v_d_242_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_mk_string_unchecked("code", 4, 4);
v___x_244_ = l_Lasm_JS_readField___redArg(v___x_240_, v_d_242_, v___x_243_);
lean_dec_ref(v___x_243_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
lean_dec_ref(v___x_241_);
v_a_245_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_244_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_244_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
else
{
lean_object* v_a_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v_a_253_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v___x_244_, 1);
v___x_254_ = lean_mk_string_unchecked("message", 7, 7);
v___x_255_ = l_Lasm_JS_readField___redArg(v___x_241_, v_d_242_, v___x_254_);
lean_dec_ref(v___x_254_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_dec(v_a_253_);
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
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
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_273_; 
v_a_264_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_273_ == 0)
{
v___x_266_ = v___x_255_;
v_isShared_267_ = v_isSharedCheck_273_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_255_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_273_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_268_; double v___x_269_; lean_object* v___x_271_; 
v___x_268_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_268_, 0, v_a_264_);
v___x_269_ = lean_unbox_float(v_a_253_);
lean_dec(v_a_253_);
lean_ctor_set_float(v___x_268_, sizeof(void*)*1, v___x_269_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v___x_268_);
v___x_271_ = v___x_266_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_268_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___boxed(lean_object* v___x_274_, lean_object* v___x_275_, lean_object* v_d_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0(v___x_274_, v___x_275_, v_d_276_);
lean_dec(v_d_276_);
return v_res_277_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___f_280_; lean_object* v___x_281_; uint8_t v___x_282_; lean_object* v___x_283_; 
v___x_278_ = l_Lasm_JS_instFromJSFloat;
v___x_279_ = l_Lasm_JS_instFromJSString;
v___f_280_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___boxed), 3, 2);
lean_closure_set(v___f_280_, 0, v___x_278_);
lean_closure_set(v___f_280_, 1, v___x_279_);
v___x_281_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CachePurgeError", 34, 34);
v___x_282_ = 0;
v___x_283_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_283_, 0, v___f_280_);
lean_ctor_set(v___x_283_, 1, v___x_281_);
lean_ctor_set_uint8(v___x_283_, sizeof(void*)*2, v___x_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0(lean_object* v___x_284_, lean_object* v___x_285_, lean_object* v_d_286_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_mk_string_unchecked("success", 7, 7);
v___x_288_ = l_Lasm_JS_readField___redArg(v___x_284_, v_d_286_, v___x_287_);
lean_dec_ref(v___x_287_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v___x_285_);
v_a_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_a_297_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_288_, 1);
v___x_298_ = lean_mk_string_unchecked("errors", 6, 6);
v___x_299_ = l_Lasm_JS_readField___redArg(v___x_285_, v_d_286_, v___x_298_);
lean_dec_ref(v___x_298_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec(v_a_297_);
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_317_; 
v_a_308_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_317_ == 0)
{
v___x_310_ = v___x_299_;
v_isShared_311_ = v_isSharedCheck_317_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_299_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_317_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_315_; 
v___x_312_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_312_, 0, v_a_308_);
v___x_313_ = lean_unbox(v_a_297_);
lean_dec(v_a_297_);
lean_ctor_set_uint8(v___x_312_, sizeof(void*)*1, v___x_313_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 0, v___x_312_);
v___x_315_ = v___x_310_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v___x_312_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___boxed(lean_object* v___x_318_, lean_object* v___x_319_, lean_object* v_d_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0(v___x_318_, v___x_319_, v_d_320_);
lean_dec(v_d_320_);
return v_res_321_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___f_325_; lean_object* v___x_326_; uint8_t v___x_327_; lean_object* v___x_328_; 
v___x_322_ = l_Lasm_JS_instFromJSBool;
v___x_323_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeError;
v___x_324_ = l_Lasm_JS_instFromJSArray___redArg(v___x_323_);
v___f_325_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_325_, 0, v___x_322_);
lean_closure_set(v___f_325_, 1, v___x_324_);
v___x_326_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CachePurgeResult", 35, 35);
v___x_327_ = 0;
v___x_328_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_328_, 0, v___f_325_);
lean_ctor_set(v___x_328_, 1, v___x_326_);
lean_ctor_set_uint8(v___x_328_, sizeof(void*)*2, v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0(lean_object* v___x_329_, lean_object* v_d_330_){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_mk_string_unchecked("id", 2, 2);
lean_inc_ref(v___x_329_);
v___x_332_ = l_Lasm_JS_readField___redArg(v___x_329_, v_d_330_, v___x_331_);
lean_dec_ref(v___x_331_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
lean_dec_ref(v___x_329_);
v_a_333_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v___x_332_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_332_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_a_341_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_332_, 1);
v___x_342_ = lean_mk_string_unchecked("type", 4, 4);
v___x_343_ = l_Lasm_JS_readField___redArg(v___x_329_, v_d_330_, v___x_342_);
lean_dec_ref(v___x_342_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_a_341_);
v_a_344_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_343_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_343_);
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
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_360_; 
v_a_352_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_360_ == 0)
{
v___x_354_ = v___x_343_;
v_isShared_355_ = v_isSharedCheck_360_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_343_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_360_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; lean_object* v___x_358_; 
v___x_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_356_, 0, v_a_341_);
lean_ctor_set(v___x_356_, 1, v_a_352_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 0, v___x_356_);
v___x_358_ = v___x_354_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_356_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0___boxed(lean_object* v___x_361_, lean_object* v_d_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0(v___x_361_, v_d_362_);
lean_dec(v_d_362_);
return v_res_363_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp(void){
_start:
{
lean_object* v___x_364_; lean_object* v___f_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; 
v___x_364_ = l_Lasm_JS_instFromJSString;
v___f_365_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0___boxed), 2, 1);
lean_closure_set(v___f_365_, 0, v___x_364_);
v___x_366_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessIdentityIdp", 46, 46);
v___x_367_ = 0;
v___x_368_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_368_, 0, v___f_365_);
lean_ctor_set(v___x_368_, 1, v___x_366_);
lean_ctor_set_uint8(v___x_368_, sizeof(void*)*2, v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0(lean_object* v___x_369_, lean_object* v_d_370_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_mk_string_unchecked("country", 7, 7);
v___x_372_ = l_Lasm_JS_readField___redArg(v___x_369_, v_d_370_, v___x_371_);
lean_dec_ref(v___x_371_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_372_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_372_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
else
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
v_a_381_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_372_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_372_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_a_381_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0___boxed(lean_object* v___x_389_, lean_object* v_d_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0(v___x_389_, v_d_390_);
lean_dec(v_d_390_);
return v_res_391_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo(void){
_start:
{
lean_object* v___x_392_; lean_object* v___f_393_; lean_object* v___x_394_; uint8_t v___x_395_; lean_object* v___x_396_; 
v___x_392_ = l_Lasm_JS_instFromJSString;
v___f_393_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0___boxed), 2, 1);
lean_closure_set(v___f_393_, 0, v___x_392_);
v___x_394_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessIdentityGeo", 46, 46);
v___x_395_ = 0;
v___x_396_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_396_, 0, v___f_393_);
lean_ctor_set(v___x_396_, 1, v___x_394_);
lean_ctor_set_uint8(v___x_396_, sizeof(void*)*2, v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0(lean_object* v___x_397_, lean_object* v___x_398_, lean_object* v_d_399_){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_mk_string_unchecked("id", 2, 2);
lean_inc_ref(v___x_397_);
v___x_401_ = l_Lasm_JS_readField___redArg(v___x_397_, v_d_399_, v___x_400_);
lean_dec_ref(v___x_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec_ref(v___x_398_);
lean_dec_ref(v___x_397_);
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v_a_410_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_401_, 1);
v___x_411_ = lean_mk_string_unchecked("name", 4, 4);
v___x_412_ = l_Lasm_JS_readField___redArg(v___x_397_, v_d_399_, v___x_411_);
lean_dec_ref(v___x_411_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
lean_dec(v_a_410_);
lean_dec_ref(v___x_398_);
v_a_413_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_412_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_418_; 
if (v_isShared_416_ == 0)
{
v___x_418_ = v___x_415_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_a_413_);
v___x_418_ = v_reuseFailAlloc_419_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
return v___x_418_;
}
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_a_421_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_421_);
lean_dec_ref_known(v___x_412_, 1);
v___x_422_ = lean_mk_string_unchecked("email", 5, 5);
v___x_423_ = l_Lasm_JS_readField___redArg(v___x_398_, v_d_399_, v___x_422_);
lean_dec_ref(v___x_422_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
lean_dec(v_a_421_);
lean_dec(v_a_410_);
v_a_424_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v___x_423_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_423_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_440_; 
v_a_432_ = lean_ctor_get(v___x_423_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_440_ == 0)
{
v___x_434_ = v___x_423_;
v_isShared_435_ = v_isSharedCheck_440_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_423_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_440_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_436_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_436_, 0, v_a_410_);
lean_ctor_set(v___x_436_, 1, v_a_421_);
lean_ctor_set(v___x_436_, 2, v_a_432_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v___x_436_);
v___x_438_ = v___x_434_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_436_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0___boxed(lean_object* v___x_441_, lean_object* v___x_442_, lean_object* v_d_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0(v___x_441_, v___x_442_, v_d_443_);
lean_dec(v_d_443_);
return v_res_444_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___f_447_; lean_object* v___x_448_; uint8_t v___x_449_; lean_object* v___x_450_; 
v___x_445_ = l_Lasm_JS_instFromJSString;
v___x_446_ = l_Lasm_JS_instFromJSOption___redArg(v___x_445_);
v___f_447_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0___boxed), 3, 2);
lean_closure_set(v___f_447_, 0, v___x_445_);
lean_closure_set(v___f_447_, 1, v___x_446_);
v___x_448_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessIdentityGroups", 49, 49);
v___x_449_ = 0;
v___x_450_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_450_, 0, v___f_447_);
lean_ctor_set(v___x_450_, 1, v___x_448_);
lean_ctor_set_uint8(v___x_450_, sizeof(void*)*2, v___x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0(lean_object* v___x_451_, lean_object* v___x_452_, lean_object* v___x_453_, lean_object* v___x_454_, lean_object* v___x_455_, lean_object* v___x_456_, lean_object* v___x_457_, lean_object* v___x_458_, lean_object* v_d_459_){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_mk_string_unchecked("email", 5, 5);
lean_inc_ref(v___x_451_);
v___x_461_ = l_Lasm_JS_readField___redArg(v___x_451_, v_d_459_, v___x_460_);
lean_dec_ref(v___x_460_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
lean_dec_ref(v___x_455_);
lean_dec_ref(v___x_454_);
lean_dec_ref(v___x_453_);
lean_dec_ref(v___x_452_);
lean_dec_ref(v___x_451_);
v_a_462_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_461_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_461_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_462_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
else
{
lean_object* v_a_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_a_470_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_470_);
lean_dec_ref_known(v___x_461_, 1);
v___x_471_ = lean_mk_string_unchecked("name", 4, 4);
lean_inc_ref(v___x_451_);
v___x_472_ = l_Lasm_JS_readField___redArg(v___x_451_, v_d_459_, v___x_471_);
lean_dec_ref(v___x_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
lean_dec_ref(v___x_455_);
lean_dec_ref(v___x_454_);
lean_dec_ref(v___x_453_);
lean_dec_ref(v___x_452_);
lean_dec_ref(v___x_451_);
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_a_481_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_481_);
lean_dec_ref_known(v___x_472_, 1);
v___x_482_ = lean_mk_string_unchecked("user_uuid", 9, 9);
lean_inc_ref(v___x_451_);
v___x_483_ = l_Lasm_JS_readField___redArg(v___x_451_, v_d_459_, v___x_482_);
lean_dec_ref(v___x_482_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
lean_dec_ref(v___x_455_);
lean_dec_ref(v___x_454_);
lean_dec_ref(v___x_453_);
lean_dec_ref(v___x_452_);
lean_dec_ref(v___x_451_);
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
else
{
lean_object* v_a_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_a_492_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_a_492_);
lean_dec_ref_known(v___x_483_, 1);
v___x_493_ = lean_mk_string_unchecked("account_id", 10, 10);
lean_inc_ref(v___x_451_);
v___x_494_ = l_Lasm_JS_readField___redArg(v___x_451_, v_d_459_, v___x_493_);
lean_dec_ref(v___x_493_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
lean_dec_ref(v___x_455_);
lean_dec_ref(v___x_454_);
lean_dec_ref(v___x_453_);
lean_dec_ref(v___x_452_);
lean_dec_ref(v___x_451_);
v_a_495_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_494_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_494_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v_a_503_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_503_);
lean_dec_ref_known(v___x_494_, 1);
v___x_504_ = lean_mk_string_unchecked("iat", 3, 3);
v___x_505_ = l_Lasm_JS_readField___redArg(v___x_452_, v_d_459_, v___x_504_);
lean_dec_ref(v___x_504_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
lean_dec_ref(v___x_455_);
lean_dec_ref(v___x_454_);
lean_dec_ref(v___x_453_);
lean_dec_ref(v___x_451_);
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
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
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_a_514_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_514_);
lean_dec_ref_known(v___x_505_, 1);
v___x_515_ = lean_mk_string_unchecked("ip", 2, 2);
v___x_516_ = l_Lasm_JS_readField___redArg(v___x_451_, v_d_459_, v___x_515_);
lean_dec_ref(v___x_515_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
lean_dec(v_a_514_);
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
lean_dec_ref(v___x_455_);
lean_dec_ref(v___x_454_);
lean_dec_ref(v___x_453_);
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
v___x_526_ = lean_mk_string_unchecked("amr", 3, 3);
v___x_527_ = l_Lasm_JS_readField___redArg(v___x_453_, v_d_459_, v___x_526_);
lean_dec_ref(v___x_526_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec(v_a_525_);
lean_dec(v_a_514_);
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
lean_dec_ref(v___x_455_);
lean_dec_ref(v___x_454_);
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
lean_object* v_a_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_a_536_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_527_, 1);
v___x_537_ = lean_mk_string_unchecked("idp", 3, 3);
v___x_538_ = l_Lasm_JS_readField___redArg(v___x_454_, v_d_459_, v___x_537_);
lean_dec_ref(v___x_537_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
lean_dec(v_a_536_);
lean_dec(v_a_525_);
lean_dec(v_a_514_);
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
lean_dec_ref(v___x_455_);
v_a_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_546_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_539_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
else
{
lean_object* v_a_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_a_547_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v___x_538_, 1);
v___x_548_ = lean_mk_string_unchecked("geo", 3, 3);
v___x_549_ = l_Lasm_JS_readField___redArg(v___x_455_, v_d_459_, v___x_548_);
lean_dec_ref(v___x_548_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec(v_a_547_);
lean_dec(v_a_536_);
lean_dec(v_a_525_);
lean_dec(v_a_514_);
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
lean_dec_ref(v___x_456_);
v_a_550_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_549_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_549_);
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
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_a_558_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v___x_549_, 1);
v___x_559_ = lean_mk_string_unchecked("groups", 6, 6);
v___x_560_ = l_Lasm_JS_readField___redArg(v___x_456_, v_d_459_, v___x_559_);
lean_dec_ref(v___x_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
lean_dec(v_a_558_);
lean_dec(v_a_547_);
lean_dec(v_a_536_);
lean_dec(v_a_525_);
lean_dec(v_a_514_);
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
lean_dec_ref(v___x_457_);
v_a_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
else
{
lean_object* v_a_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v_a_569_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_560_, 1);
v___x_570_ = lean_mk_string_unchecked("devicePosture", 13, 13);
v___x_571_ = l_Lasm_JS_readField___redArg(v___x_457_, v_d_459_, v___x_570_);
lean_dec_ref(v___x_570_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
lean_dec(v_a_569_);
lean_dec(v_a_558_);
lean_dec(v_a_547_);
lean_dec(v_a_536_);
lean_dec(v_a_525_);
lean_dec(v_a_514_);
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
v_a_572_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_571_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_571_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
else
{
lean_object* v_a_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_a_580_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_a_580_);
lean_dec_ref_known(v___x_571_, 1);
v___x_581_ = lean_mk_string_unchecked("is_warp", 7, 7);
lean_inc_ref(v___x_458_);
v___x_582_ = l_Lasm_JS_readField___redArg(v___x_458_, v_d_459_, v___x_581_);
lean_dec_ref(v___x_581_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
lean_dec(v_a_580_);
lean_dec(v_a_569_);
lean_dec(v_a_558_);
lean_dec(v_a_547_);
lean_dec(v_a_536_);
lean_dec(v_a_525_);
lean_dec(v_a_514_);
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
lean_dec_ref(v___x_458_);
v_a_583_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_582_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_582_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_a_591_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_582_, 1);
v___x_592_ = lean_mk_string_unchecked("is_gateway", 10, 10);
v___x_593_ = l_Lasm_JS_readField___redArg(v___x_458_, v_d_459_, v___x_592_);
lean_dec_ref(v___x_592_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec(v_a_591_);
lean_dec(v_a_580_);
lean_dec(v_a_569_);
lean_dec(v_a_558_);
lean_dec(v_a_547_);
lean_dec(v_a_536_);
lean_dec(v_a_525_);
lean_dec(v_a_514_);
lean_dec(v_a_503_);
lean_dec(v_a_492_);
lean_dec(v_a_481_);
lean_dec(v_a_470_);
v_a_594_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_593_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_593_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_610_; 
v_a_602_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_610_ == 0)
{
v___x_604_ = v___x_593_;
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_593_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_610_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_606_; lean_object* v___x_608_; 
v___x_606_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_606_, 0, v_a_470_);
lean_ctor_set(v___x_606_, 1, v_a_481_);
lean_ctor_set(v___x_606_, 2, v_a_492_);
lean_ctor_set(v___x_606_, 3, v_a_503_);
lean_ctor_set(v___x_606_, 4, v_a_514_);
lean_ctor_set(v___x_606_, 5, v_a_525_);
lean_ctor_set(v___x_606_, 6, v_a_536_);
lean_ctor_set(v___x_606_, 7, v_a_547_);
lean_ctor_set(v___x_606_, 8, v_a_558_);
lean_ctor_set(v___x_606_, 9, v_a_569_);
lean_ctor_set(v___x_606_, 10, v_a_580_);
lean_ctor_set(v___x_606_, 11, v_a_591_);
lean_ctor_set(v___x_606_, 12, v_a_602_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 0, v___x_606_);
v___x_608_ = v___x_604_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0___boxed(lean_object* v___x_611_, lean_object* v___x_612_, lean_object* v___x_613_, lean_object* v___x_614_, lean_object* v___x_615_, lean_object* v___x_616_, lean_object* v___x_617_, lean_object* v___x_618_, lean_object* v_d_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0(v___x_611_, v___x_612_, v___x_613_, v___x_614_, v___x_615_, v___x_616_, v___x_617_, v___x_618_, v_d_619_);
lean_dec(v_d_619_);
return v_res_620_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___f_639_; lean_object* v___x_640_; uint8_t v___x_641_; lean_object* v___x_642_; 
v___x_621_ = l_Lasm_JS_instFromJSString;
v___x_622_ = l_Lasm_JS_instFromJSOption___redArg(v___x_621_);
v___x_623_ = l_Lasm_JS_instFromJSFloat;
v___x_624_ = l_Lasm_JS_instFromJSOption___redArg(v___x_623_);
v___x_625_ = l_Lasm_JS_instFromJSArray___redArg(v___x_621_);
v___x_626_ = l_Lasm_JS_instFromJSOption___redArg(v___x_625_);
v___x_627_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp;
v___x_628_ = l_Lasm_JS_instFromJSOption___redArg(v___x_627_);
v___x_629_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo;
v___x_630_ = l_Lasm_JS_instFromJSOption___redArg(v___x_629_);
v___x_631_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups;
v___x_632_ = l_Lasm_JS_instFromJSArray___redArg(v___x_631_);
v___x_633_ = l_Lasm_JS_instFromJSOption___redArg(v___x_632_);
v___x_634_ = l_Lasm_JS_instFromJSData;
v___x_635_ = l_Lasm_JS_Web_instFromJSRecord___redArg(v___x_634_);
v___x_636_ = l_Lasm_JS_instFromJSOption___redArg(v___x_635_);
v___x_637_ = l_Lasm_JS_instFromJSBool;
v___x_638_ = l_Lasm_JS_instFromJSOption___redArg(v___x_637_);
v___f_639_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0___boxed), 9, 8);
lean_closure_set(v___f_639_, 0, v___x_622_);
lean_closure_set(v___f_639_, 1, v___x_624_);
lean_closure_set(v___f_639_, 2, v___x_626_);
lean_closure_set(v___f_639_, 3, v___x_628_);
lean_closure_set(v___f_639_, 4, v___x_630_);
lean_closure_set(v___f_639_, 5, v___x_633_);
lean_closure_set(v___f_639_, 6, v___x_636_);
lean_closure_set(v___f_639_, 7, v___x_638_);
v___x_640_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessIdentity", 43, 43);
v___x_641_ = 0;
v___x_642_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_642_, 0, v___f_639_);
lean_ctor_set(v___x_642_, 1, v___x_640_);
lean_ctor_set_uint8(v___x_642_, sizeof(void*)*2, v___x_641_);
return v___x_642_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracingEnterSpanCallback(void){
_start:
{
lean_object* v___f_644_; lean_object* v___x_645_; uint8_t v___x_646_; lean_object* v___x_647_; 
v___f_644_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_645_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingEnterSpanCallback", 43, 43);
v___x_646_ = 0;
v___x_647_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_647_, 0, v___f_644_);
lean_ctor_set(v___x_647_, 1, v___x_645_);
lean_ctor_set_uint8(v___x_647_, sizeof(void*)*2, v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0(lean_object* v_x_648_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v_x_648_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0___boxed(lean_object* v_x_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0(v_x_651_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1(lean_object* v_f_654_, lean_object* v_a_655_, lean_object* v___f_656_, lean_object* v_x_657_){
_start:
{
if (lean_obj_tag(v_x_657_) == 0)
{
lean_object* v___x_659_; 
lean_dec_ref(v___f_656_);
lean_dec(v_a_655_);
lean_dec_ref(v_f_654_);
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v_x_657_);
return v___x_659_;
}
else
{
lean_object* v_a_660_; lean_object* v___x_661_; uint8_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v_a_660_ = lean_ctor_get(v_x_657_, 0);
lean_inc(v_a_660_);
lean_dec_ref_known(v_x_657_, 1);
v___x_661_ = lean_unsigned_to_nat(0u);
v___x_662_ = 0;
v___x_663_ = lean_apply_3(v_f_654_, v_a_655_, v_a_660_, lean_box(0));
v___x_664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_661_, v___x_662_, v___x_663_, v___f_656_);
return v___x_664_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1___boxed(lean_object* v_f_665_, lean_object* v_a_666_, lean_object* v___f_667_, lean_object* v_x_668_, lean_object* v___y_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1(v_f_665_, v_a_666_, v___f_667_, v_x_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2(lean_object* v_f_671_, lean_object* v___f_672_, lean_object* v_args_673_, lean_object* v_x_674_){
_start:
{
if (lean_obj_tag(v_x_674_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_684_; 
lean_dec_ref(v___f_672_);
lean_dec_ref(v_f_671_);
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
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_702_; 
v_a_685_ = lean_ctor_get(v_x_674_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v_x_674_);
if (v_isSharedCheck_702_ == 0)
{
v___x_687_ = v_x_674_;
v_isShared_688_ = v_isSharedCheck_702_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v_x_674_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_702_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___f_689_; lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; lean_object* v_val_694_; lean_object* v___x_697_; lean_object* v_a_698_; lean_object* v___x_700_; 
v___f_689_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_689_, 0, v_f_671_);
lean_closure_set(v___f_689_, 1, v_a_685_);
lean_closure_set(v___f_689_, 2, v___f_672_);
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = 0;
v___x_697_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_673_, v___x_690_);
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
lean_dec_ref(v___x_697_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v_a_698_);
v___x_700_ = v___x_687_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_698_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v___jp_693_:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v_val_694_);
v___x_696_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_691_, v___x_692_, v___x_695_, v___f_689_);
return v___x_696_;
}
v_reusejp_699_:
{
v_val_694_ = v___x_700_;
goto v___jp_693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2___boxed(lean_object* v_f_703_, lean_object* v___f_704_, lean_object* v_args_705_, lean_object* v_x_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2(v_f_703_, v___f_704_, v_args_705_, v_x_706_);
lean_dec_ref(v_args_705_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0(lean_object* v_context_709_, lean_object* v_d_710_){
_start:
{
lean_object* v___y_713_; lean_object* v___y_714_; 
if (lean_obj_tag(v_d_710_) == 9)
{
lean_object* v_value_718_; lean_object* v___x_719_; 
v_value_718_ = lean_ctor_get(v_d_710_, 0);
lean_inc(v_value_718_);
lean_dec_ref_known(v_d_710_, 2);
v___x_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_719_, 0, v_value_718_);
return v___x_719_;
}
else
{
lean_object* v___x_720_; lean_object* v_received_722_; 
v___x_720_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_710_) == 9)
{
lean_object* v_value_738_; lean_object* v_description_739_; uint8_t v___x_740_; 
v_value_738_ = lean_ctor_get(v_d_710_, 0);
v_description_739_ = lean_ctor_get(v_d_710_, 1);
v___x_740_ = lean_string_dec_eq(v_description_739_, v___x_720_);
if (v___x_740_ == 0)
{
goto v___jp_736_;
}
else
{
uint32_t v___x_741_; uint64_t v___x_742_; lean_object* v___x_743_; uint32_t v___x_744_; lean_object* v___x_745_; 
lean_inc_n(v_value_738_, 2);
lean_dec_ref_known(v_d_710_, 2);
v___x_741_ = 206;
v___x_742_ = 0ULL;
lean_inc_ref(v___x_720_);
v___x_743_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_743_, 0, v_value_738_);
lean_ctor_set(v___x_743_, 1, v___x_720_);
v___x_744_ = lasm_js_value_handle(v_value_738_);
lean_dec(v_value_738_);
v___x_745_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_741_, v___x_742_, v___x_743_, v___x_744_);
lean_dec_ref_known(v___x_743_, 2);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; uint8_t v___x_747_; 
v_a_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v___x_745_, 1);
v___x_747_ = lean_string_validate_utf8(v_a_746_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
lean_dec(v_a_746_);
v___x_748_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_749_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_750_ = lean_unsigned_to_nat(193u);
v___x_751_ = lean_unsigned_to_nat(46u);
v___x_752_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_753_ = l_mkPanicMessageWithDecl(v___x_748_, v___x_749_, v___x_750_, v___x_751_, v___x_752_);
lean_dec_ref(v___x_752_);
lean_dec_ref(v___x_749_);
lean_dec_ref(v___x_748_);
v___x_754_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_753_);
v_received_722_ = v___x_754_;
goto v___jp_721_;
}
else
{
lean_object* v___x_755_; 
v___x_755_ = lean_string_from_utf8_unchecked(v_a_746_);
v_received_722_ = v___x_755_;
goto v___jp_721_;
}
}
else
{
lean_object* v___x_756_; 
lean_dec_ref_known(v___x_745_, 1);
v___x_756_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_722_ = v___x_756_;
goto v___jp_721_;
}
}
}
else
{
goto v___jp_736_;
}
v___jp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_723_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_724_ = lean_string_append(v___x_723_, v_context_709_);
v___x_725_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_726_ = lean_string_append(v___x_724_, v___x_725_);
lean_dec_ref(v___x_725_);
v___x_727_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.Span", 23, 23);
v___x_728_ = lean_string_append(v___x_726_, v___x_727_);
lean_dec_ref(v___x_727_);
v___x_729_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_730_ = lean_string_append(v___x_728_, v___x_729_);
lean_dec_ref(v___x_729_);
v___x_731_ = lean_string_append(v___x_730_, v_received_722_);
lean_dec_ref(v_received_722_);
v___x_732_ = lean_string_utf8_byte_size(v___x_720_);
v___x_733_ = lean_unsigned_to_nat(0u);
v___x_734_ = lean_nat_dec_eq(v___x_732_, v___x_733_);
if (v___x_734_ == 0)
{
lean_object* v___x_735_; 
lean_dec_ref(v___x_720_);
v___x_735_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_713_ = v___x_731_;
v___y_714_ = v___x_735_;
goto v___jp_712_;
}
else
{
v___y_713_ = v___x_731_;
v___y_714_ = v___x_720_;
goto v___jp_712_;
}
}
v___jp_736_:
{
lean_object* v___x_737_; 
v___x_737_ = l_Lasm_JS_Data_describe(v_d_710_);
v_received_722_ = v___x_737_;
goto v___jp_721_;
}
}
v___jp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_string_append(v___y_713_, v___y_714_);
v___x_716_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
v___x_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_757_, lean_object* v_d_758_, lean_object* v_a_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0(v_context_757_, v_d_758_);
lean_dec_ref(v_context_757_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(lean_object* v_args_761_, lean_object* v_i_762_){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_764_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_765_ = lean_unsigned_to_nat(1u);
v___x_766_ = lean_nat_add(v_i_762_, v___x_765_);
v___x_767_ = l_Nat_reprFast(v___x_766_);
v___x_768_ = lean_string_append(v___x_764_, v___x_767_);
lean_dec_ref(v___x_767_);
v___x_769_ = lean_array_get_size(v_args_761_);
v___x_770_ = lean_nat_dec_lt(v_i_762_, v___x_769_);
if (v___x_770_ == 0)
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = lean_box(0);
v___x_772_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0(v___x_768_, v___x_771_);
lean_dec_ref(v___x_768_);
return v___x_772_;
}
else
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_array_fget_borrowed(v_args_761_, v_i_762_);
lean_inc(v___x_773_);
v___x_774_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0(v___x_768_, v___x_773_);
lean_dec_ref(v___x_768_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0___boxed(lean_object* v_args_775_, lean_object* v_i_776_, lean_object* v_a_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(v_args_775_, v_i_776_);
lean_dec(v_i_776_);
lean_dec_ref(v_args_775_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3(lean_object* v_f_779_, lean_object* v___f_780_, lean_object* v_args_781_){
_start:
{
lean_object* v___f_783_; lean_object* v___x_784_; uint8_t v___x_785_; lean_object* v_val_787_; lean_object* v___x_790_; 
lean_inc_ref(v_args_781_);
v___f_783_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_783_, 0, v_f_779_);
lean_closure_set(v___f_783_, 1, v___f_780_);
lean_closure_set(v___f_783_, 2, v_args_781_);
v___x_784_ = lean_unsigned_to_nat(0u);
v___x_785_ = 0;
v___x_790_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(v_args_781_, v___x_784_);
lean_dec_ref(v_args_781_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_790_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_790_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
lean_ctor_set_tag(v___x_793_, 1);
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
v_val_787_ = v___x_796_;
goto v___jp_786_;
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
v_a_799_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_790_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_790_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 0);
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
v_val_787_ = v___x_804_;
goto v___jp_786_;
}
}
}
v___jp_786_:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_788_, 0, v_val_787_);
v___x_789_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_784_, v___x_785_, v___x_788_, v___f_783_);
return v___x_789_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3___boxed(lean_object* v_f_807_, lean_object* v___f_808_, lean_object* v_args_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3(v_f_807_, v___f_808_, v_args_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn(lean_object* v_f_812_){
_start:
{
lean_object* v___f_814_; lean_object* v___f_815_; lean_object* v___x_816_; 
v___f_814_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0___boxed), 2, 0);
v___f_815_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_815_, 0, v_f_812_);
lean_closure_set(v___f_815_, 1, v___f_814_);
v___x_816_ = l_Lasm_JS_Function_ofFn(v___f_815_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_818_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_a_817_);
lean_dec_ref_known(v___x_816_, 1);
v___x_818_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_a_819_);
lean_dec_ref_known(v___x_818_, 1);
v___x_820_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_821_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_819_, v___x_820_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___y_830_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v___x_821_, 1);
v___x_823_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_824_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_817_);
v___x_825_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_825_, 0, v_a_817_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = lean_mk_string_unchecked("length", 6, 6);
v___x_827_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
v___x_828_ = lean_mk_string_unchecked("value", 5, 5);
v___x_857_ = lean_unsigned_to_nat(2u);
v___x_858_ = lean_nat_to_int(v___x_857_);
v___x_859_ = lean_nat_abs(v___x_858_);
v___x_860_ = lean_cstr_to_nat("9007199254740991");
v___x_861_ = lean_nat_dec_le(v___x_859_, v___x_860_);
lean_dec(v___x_859_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
v___x_862_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_858_);
v___y_830_ = v___x_862_;
goto v___jp_829_;
}
else
{
double v___x_863_; lean_object* v___x_864_; 
v___x_863_ = l_Float_ofInt(v___x_858_);
lean_dec(v___x_858_);
v___x_864_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_864_, 0, v___x_863_);
v___y_830_ = v___x_864_;
goto v___jp_829_;
}
v___jp_829_:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_828_);
lean_ctor_set(v___x_831_, 1, v___y_830_);
v___x_832_ = lean_box(0);
v___x_833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_831_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
v___x_834_ = l_Lasm_JS_obj(v___x_833_);
v___x_835_ = lean_unsigned_to_nat(3u);
v___x_836_ = lean_mk_empty_array_with_capacity(v___x_835_);
v___x_837_ = lean_array_push(v___x_836_, v___x_825_);
v___x_838_ = lean_array_push(v___x_837_, v___x_827_);
v___x_839_ = lean_array_push(v___x_838_, v___x_834_);
v___x_840_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_822_, v___x_823_, v___x_839_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; 
v_unused_848_ = lean_ctor_get(v___x_840_, 0);
lean_dec(v_unused_848_);
v___x_842_ = v___x_840_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_dec(v___x_840_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v_a_817_);
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_817_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
else
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_856_; 
lean_dec(v_a_817_);
v_a_849_ = lean_ctor_get(v___x_840_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_856_ == 0)
{
v___x_851_ = v___x_840_;
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_840_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_854_; 
if (v_isShared_852_ == 0)
{
v___x_854_ = v___x_851_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_849_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
lean_dec(v_a_817_);
v_a_865_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_821_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_821_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
else
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
lean_dec(v_a_817_);
v_a_873_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_818_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_818_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
v_a_881_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_816_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_816_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___boxed(lean_object* v_f_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn(v_f_889_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0(lean_object* v_f_892_, lean_object* v_args_893_){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(v_args_893_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v_a_900_; lean_object* v___x_901_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = lean_unsigned_to_nat(1u);
v___x_899_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_893_, v___x_898_);
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref(v___x_899_);
v___x_901_ = lean_apply_3(v_f_892_, v_a_897_, v_a_900_, lean_box(0));
return v___x_901_;
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec_ref(v_f_892_);
v_a_902_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_896_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_896_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_910_, lean_object* v_args_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0(v_f_910_, v_args_911_);
lean_dec_ref(v_args_911_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn(lean_object* v_f_914_){
_start:
{
lean_object* v___f_916_; lean_object* v___x_917_; 
v___f_916_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_916_, 0, v_f_914_);
v___x_917_ = l_Lasm_JS_Function_ofSyncFn(v___f_916_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_919_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v___x_919_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v_a_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_920_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_919_, 1);
v___x_921_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_922_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_920_, v___x_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___y_931_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; uint8_t v___x_962_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_922_, 1);
v___x_924_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_925_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_918_);
v___x_926_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_926_, 0, v_a_918_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = lean_mk_string_unchecked("length", 6, 6);
v___x_928_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
v___x_929_ = lean_mk_string_unchecked("value", 5, 5);
v___x_958_ = lean_unsigned_to_nat(2u);
v___x_959_ = lean_nat_to_int(v___x_958_);
v___x_960_ = lean_nat_abs(v___x_959_);
v___x_961_ = lean_cstr_to_nat("9007199254740991");
v___x_962_ = lean_nat_dec_le(v___x_960_, v___x_961_);
lean_dec(v___x_960_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; 
v___x_963_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_959_);
v___y_931_ = v___x_963_;
goto v___jp_930_;
}
else
{
double v___x_964_; lean_object* v___x_965_; 
v___x_964_ = l_Float_ofInt(v___x_959_);
lean_dec(v___x_959_);
v___x_965_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_965_, 0, v___x_964_);
v___y_931_ = v___x_965_;
goto v___jp_930_;
}
v___jp_930_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v___x_929_);
lean_ctor_set(v___x_932_, 1, v___y_931_);
v___x_933_ = lean_box(0);
v___x_934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_932_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
v___x_935_ = l_Lasm_JS_obj(v___x_934_);
v___x_936_ = lean_unsigned_to_nat(3u);
v___x_937_ = lean_mk_empty_array_with_capacity(v___x_936_);
v___x_938_ = lean_array_push(v___x_937_, v___x_926_);
v___x_939_ = lean_array_push(v___x_938_, v___x_928_);
v___x_940_ = lean_array_push(v___x_939_, v___x_935_);
v___x_941_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_923_, v___x_924_, v___x_940_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_948_ == 0)
{
lean_object* v_unused_949_; 
v_unused_949_ = lean_ctor_get(v___x_941_, 0);
lean_dec(v_unused_949_);
v___x_943_ = v___x_941_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_dec(v___x_941_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v_a_918_);
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_918_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec(v_a_918_);
v_a_950_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_941_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_941_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
lean_dec(v_a_918_);
v_a_966_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_922_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_922_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
else
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
lean_dec(v_a_918_);
v_a_974_ = lean_ctor_get(v___x_919_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_919_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_919_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_919_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_974_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_a_982_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_917_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_917_);
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
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___boxed(lean_object* v_f_990_, lean_object* v_a_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn(v_f_990_);
return v_res_992_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracingStartActiveSpanCallback(void){
_start:
{
lean_object* v___f_994_; lean_object* v___x_995_; uint8_t v___x_996_; lean_object* v___x_997_; 
v___f_994_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_995_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingStartActiveSpanCallback", 49, 49);
v___x_996_ = 0;
v___x_997_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_997_, 0, v___f_994_);
lean_ctor_set(v___x_997_, 1, v___x_995_);
lean_ctor_set_uint8(v___x_997_, sizeof(void*)*2, v___x_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofFn(lean_object* v_f_998_){
_start:
{
lean_object* v___f_1000_; lean_object* v___f_1001_; lean_object* v___x_1002_; 
v___f_1000_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0___boxed), 2, 0);
v___f_1001_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1001_, 0, v_f_998_);
lean_closure_set(v___f_1001_, 1, v___f_1000_);
v___x_1002_ = l_Lasm_JS_Function_ofFn(v___f_1001_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; lean_object* v___x_1004_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_1002_, 1);
v___x_1004_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1006_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1007_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1005_, v___x_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___y_1016_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1007_, 1);
v___x_1009_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1010_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1003_);
v___x_1011_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1011_, 0, v_a_1003_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1013_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
v___x_1014_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1043_ = lean_unsigned_to_nat(2u);
v___x_1044_ = lean_nat_to_int(v___x_1043_);
v___x_1045_ = lean_nat_abs(v___x_1044_);
v___x_1046_ = lean_cstr_to_nat("9007199254740991");
v___x_1047_ = lean_nat_dec_le(v___x_1045_, v___x_1046_);
lean_dec(v___x_1045_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; 
v___x_1048_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1044_);
v___y_1016_ = v___x_1048_;
goto v___jp_1015_;
}
else
{
double v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = l_Float_ofInt(v___x_1044_);
lean_dec(v___x_1044_);
v___x_1050_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1050_, 0, v___x_1049_);
v___y_1016_ = v___x_1050_;
goto v___jp_1015_;
}
v___jp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1014_);
lean_ctor_set(v___x_1017_, 1, v___y_1016_);
v___x_1018_ = lean_box(0);
v___x_1019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1017_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = l_Lasm_JS_obj(v___x_1019_);
v___x_1021_ = lean_unsigned_to_nat(3u);
v___x_1022_ = lean_mk_empty_array_with_capacity(v___x_1021_);
v___x_1023_ = lean_array_push(v___x_1022_, v___x_1011_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_1013_);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_1020_);
v___x_1026_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1008_, v___x_1009_, v___x_1025_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1033_ == 0)
{
lean_object* v_unused_1034_; 
v_unused_1034_ = lean_ctor_get(v___x_1026_, 0);
lean_dec(v_unused_1034_);
v___x_1028_ = v___x_1026_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_dec(v___x_1026_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 0, v_a_1003_);
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1003_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v_a_1003_);
v_a_1035_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1026_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1026_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_dec(v_a_1003_);
v_a_1051_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1007_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1007_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec(v_a_1003_);
v_a_1059_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1004_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1004_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
else
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
v_a_1067_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1002_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1002_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofFn___boxed(lean_object* v_f_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofFn(v_f_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofSyncFn(lean_object* v_f_1078_){
_start:
{
lean_object* v___f_1080_; lean_object* v___x_1081_; 
v___f_1080_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1080_, 0, v_f_1078_);
v___x_1081_ = l_Lasm_JS_Function_ofSyncFn(v___f_1080_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1083_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v___x_1081_, 1);
v___x_1083_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1085_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1086_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1084_, v___x_1085_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___y_1095_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; uint8_t v___x_1126_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v___x_1086_, 1);
v___x_1088_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1089_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1082_);
v___x_1090_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1090_, 0, v_a_1082_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1092_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
v___x_1093_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1122_ = lean_unsigned_to_nat(2u);
v___x_1123_ = lean_nat_to_int(v___x_1122_);
v___x_1124_ = lean_nat_abs(v___x_1123_);
v___x_1125_ = lean_cstr_to_nat("9007199254740991");
v___x_1126_ = lean_nat_dec_le(v___x_1124_, v___x_1125_);
lean_dec(v___x_1124_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1123_);
v___y_1095_ = v___x_1127_;
goto v___jp_1094_;
}
else
{
double v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = l_Float_ofInt(v___x_1123_);
lean_dec(v___x_1123_);
v___x_1129_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1129_, 0, v___x_1128_);
v___y_1095_ = v___x_1129_;
goto v___jp_1094_;
}
v___jp_1094_:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1093_);
lean_ctor_set(v___x_1096_, 1, v___y_1095_);
v___x_1097_ = lean_box(0);
v___x_1098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1096_);
lean_ctor_set(v___x_1098_, 1, v___x_1097_);
v___x_1099_ = l_Lasm_JS_obj(v___x_1098_);
v___x_1100_ = lean_unsigned_to_nat(3u);
v___x_1101_ = lean_mk_empty_array_with_capacity(v___x_1100_);
v___x_1102_ = lean_array_push(v___x_1101_, v___x_1090_);
v___x_1103_ = lean_array_push(v___x_1102_, v___x_1092_);
v___x_1104_ = lean_array_push(v___x_1103_, v___x_1099_);
v___x_1105_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1087_, v___x_1088_, v___x_1104_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1112_ == 0)
{
lean_object* v_unused_1113_; 
v_unused_1113_ = lean_ctor_get(v___x_1105_, 0);
lean_dec(v_unused_1113_);
v___x_1107_ = v___x_1105_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_dec(v___x_1105_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v_a_1082_);
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1082_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v_a_1082_);
v_a_1114_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1105_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1105_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec(v_a_1082_);
v_a_1130_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1086_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1086_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
else
{
lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
lean_dec(v_a_1082_);
v_a_1138_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1140_ = v___x_1083_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___x_1083_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1138_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
v_a_1146_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1081_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1081_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofSyncFn___boxed(lean_object* v_f_1154_, lean_object* v_a_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofSyncFn(v_f_1154_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0(lean_object* v___x_1157_, lean_object* v___x_1158_, lean_object* v_d_1159_){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = lean_mk_string_unchecked("traceId", 7, 7);
lean_inc_ref(v___x_1157_);
v___x_1161_ = l_Lasm_JS_readField___redArg(v___x_1157_, v_d_1159_, v___x_1160_);
lean_dec_ref(v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
lean_dec_ref(v___x_1158_);
lean_dec_ref(v___x_1157_);
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1161_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1161_);
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
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v_a_1170_ = lean_ctor_get(v___x_1161_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1161_, 1);
v___x_1171_ = lean_mk_string_unchecked("spanId", 6, 6);
v___x_1172_ = l_Lasm_JS_readField___redArg(v___x_1157_, v_d_1159_, v___x_1171_);
lean_dec_ref(v___x_1171_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
lean_dec(v_a_1170_);
lean_dec_ref(v___x_1158_);
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1173_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v_a_1181_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1181_);
lean_dec_ref_known(v___x_1172_, 1);
v___x_1182_ = lean_mk_string_unchecked("traceFlags", 10, 10);
v___x_1183_ = l_Lasm_JS_readField___redArg(v___x_1158_, v_d_1159_, v___x_1182_);
lean_dec_ref(v___x_1182_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
lean_dec(v_a_1181_);
lean_dec(v_a_1170_);
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1183_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1183_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1201_; 
v_a_1192_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1194_ = v___x_1183_;
v_isShared_1195_ = v_isSharedCheck_1201_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1183_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1201_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1196_; double v___x_1197_; lean_object* v___x_1199_; 
v___x_1196_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_1196_, 0, v_a_1170_);
lean_ctor_set(v___x_1196_, 1, v_a_1181_);
v___x_1197_ = lean_unbox_float(v_a_1192_);
lean_dec(v_a_1192_);
lean_ctor_set_float(v___x_1196_, sizeof(void*)*2, v___x_1197_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 0, v___x_1196_);
v___x_1199_ = v___x_1194_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1196_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0___boxed(lean_object* v___x_1202_, lean_object* v___x_1203_, lean_object* v_d_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0(v___x_1202_, v___x_1203_, v_d_1204_);
lean_dec(v_d_1204_);
return v_res_1205_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___f_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; lean_object* v___x_1211_; 
v___x_1206_ = l_Lasm_JS_instFromJSString;
v___x_1207_ = l_Lasm_JS_instFromJSFloat;
v___f_1208_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1208_, 0, v___x_1206_);
lean_closure_set(v___f_1208_, 1, v___x_1207_);
v___x_1209_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingSpanContext", 37, 37);
v___x_1210_ = 0;
v___x_1211_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1211_, 0, v___f_1208_);
lean_ctor_set(v___x_1211_, 1, v___x_1209_);
lean_ctor_set_uint8(v___x_1211_, sizeof(void*)*2, v___x_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorIdx(lean_object* v_x_1212_){
_start:
{
switch(lean_obj_tag(v_x_1212_))
{
case 0:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_unsigned_to_nat(0u);
return v___x_1213_;
}
case 1:
{
lean_object* v___x_1214_; 
v___x_1214_ = lean_unsigned_to_nat(1u);
return v___x_1214_;
}
default: 
{
lean_object* v___x_1215_; 
v___x_1215_ = lean_unsigned_to_nat(2u);
return v___x_1215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorIdx___boxed(lean_object* v_x_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorIdx(v_x_1216_);
lean_dec_ref(v_x_1216_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(lean_object* v_t_1218_, lean_object* v_k_1219_){
_start:
{
switch(lean_obj_tag(v_t_1218_))
{
case 0:
{
uint8_t v_value_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_value_1220_ = lean_ctor_get_uint8(v_t_1218_, 0);
lean_dec_ref_known(v_t_1218_, 0);
v___x_1221_ = lean_box(v_value_1220_);
v___x_1222_ = lean_apply_1(v_k_1219_, v___x_1221_);
return v___x_1222_;
}
case 1:
{
double v_value_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v_value_1223_ = lean_ctor_get_float(v_t_1218_, 0);
lean_dec_ref_known(v_t_1218_, 0);
v___x_1224_ = lean_box_float(v_value_1223_);
v___x_1225_ = lean_apply_1(v_k_1219_, v___x_1224_);
return v___x_1225_;
}
default: 
{
lean_object* v_value_1226_; lean_object* v___x_1227_; 
v_value_1226_ = lean_ctor_get(v_t_1218_, 0);
lean_inc_ref(v_value_1226_);
lean_dec_ref_known(v_t_1218_, 1);
v___x_1227_ = lean_apply_1(v_k_1219_, v_value_1226_);
return v___x_1227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim(lean_object* v_motive_1228_, lean_object* v_ctorIdx_1229_, lean_object* v_t_1230_, lean_object* v_h_1231_, lean_object* v_k_1232_){
_start:
{
lean_object* v___x_1233_; 
v___x_1233_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1230_, v_k_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___boxed(lean_object* v_motive_1234_, lean_object* v_ctorIdx_1235_, lean_object* v_t_1236_, lean_object* v_h_1237_, lean_object* v_k_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim(v_motive_1234_, v_ctorIdx_1235_, v_t_1236_, v_h_1237_, v_k_1238_);
lean_dec(v_ctorIdx_1235_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_boolean_elim___redArg(lean_object* v_t_1240_, lean_object* v_boolean_1241_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1240_, v_boolean_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_boolean_elim(lean_object* v_motive_1243_, lean_object* v_t_1244_, lean_object* v_h_1245_, lean_object* v_boolean_1246_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1244_, v_boolean_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_double_elim___redArg(lean_object* v_t_1248_, lean_object* v_double_1249_){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1248_, v_double_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_double_elim(lean_object* v_motive_1251_, lean_object* v_t_1252_, lean_object* v_h_1253_, lean_object* v_double_1254_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1252_, v_double_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_domString_elim___redArg(lean_object* v_t_1256_, lean_object* v_domString_1257_){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1256_, v_domString_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_domString_elim(lean_object* v_motive_1259_, lean_object* v_t_1260_, lean_object* v_h_1261_, lean_object* v_domString_1262_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1260_, v_domString_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSBooleanOrDoubleOrDOMString___lam__0(lean_object* v_x_1264_){
_start:
{
switch(lean_obj_tag(v_x_1264_))
{
case 0:
{
uint8_t v_value_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
v_value_1265_ = lean_ctor_get_uint8(v_x_1264_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v_x_1264_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v_x_1264_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_dec(v_x_1264_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
lean_ctor_set_tag(v___x_1267_, 2);
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1271_, 0, v_value_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
case 1:
{
double v_value_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
v_value_1273_ = lean_ctor_get_float(v_x_1264_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v_x_1264_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1275_ = v_x_1264_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_dec(v_x_1264_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
lean_ctor_set_tag(v___x_1275_, 3);
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1279_, 0, v_value_1273_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
default: 
{
lean_object* v_value_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
v_value_1281_ = lean_ctor_get(v_x_1264_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v_x_1264_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v_x_1264_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_value_1281_);
lean_dec(v_x_1264_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
lean_ctor_set_tag(v___x_1283_, 4);
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_value_1281_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0(uint8_t v_value_1290_){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1291_, 0, v_value_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0___boxed(lean_object* v_value_1292_){
_start:
{
uint8_t v_value_boxed_1293_; lean_object* v_res_1294_; 
v_value_boxed_1293_ = lean_unbox(v_value_1292_);
v_res_1294_ = l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0(v_value_boxed_1293_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0(double v_value_1296_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_1297_, 0, v_value_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0___boxed(lean_object* v_value_1298_){
_start:
{
double v_value_boxed_1299_; lean_object* v_res_1300_; 
v_value_boxed_1299_ = lean_unbox_float(v_value_1298_);
lean_dec_ref(v_value_1298_);
v_res_1300_ = l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0(v_value_boxed_1299_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringBooleanOrDoubleOrDOMString___lam__0(lean_object* v_value_1302_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1303_, 0, v_value_1302_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString___lam__0(lean_object* v_x_1305_){
_start:
{
switch(lean_obj_tag(v_x_1305_))
{
case 2:
{
uint8_t v_b_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1314_; 
v_b_1306_ = lean_ctor_get_uint8(v_x_1305_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1305_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1308_ = v_x_1305_;
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
else
{
lean_dec(v_x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
lean_ctor_set_tag(v___x_1308_, 0);
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1313_, 0, v_b_1306_);
v___x_1311_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; 
v___x_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
return v___x_1312_;
}
}
}
case 3:
{
double v_n_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1323_; 
v_n_1315_ = lean_ctor_get_float(v_x_1305_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_x_1305_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1317_ = v_x_1305_;
v_isShared_1318_ = v_isSharedCheck_1323_;
goto v_resetjp_1316_;
}
else
{
lean_dec(v_x_1305_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1323_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
lean_ctor_set_tag(v___x_1317_, 1);
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1322_, 0, v_n_1315_);
v___x_1320_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
}
case 4:
{
lean_object* v_s_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1332_; 
v_s_1324_ = lean_ctor_get(v_x_1305_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_x_1305_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1326_ = v_x_1305_;
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_s_1324_);
lean_dec(v_x_1305_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1332_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set_tag(v___x_1326_, 2);
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_s_1324_);
v___x_1329_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1330_; 
v___x_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
return v___x_1330_;
}
}
}
default: 
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
lean_dec(v_x_1305_);
v___x_1333_ = lean_mk_string_unchecked("", 0, 0);
v___x_1334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
return v___x_1334_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString(void){
_start:
{
lean_object* v___f_1335_; lean_object* v___x_1336_; uint8_t v___x_1337_; lean_object* v___x_1338_; 
v___f_1335_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString___lam__0), 1, 0);
v___x_1336_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.BooleanOrDoubleOrDOMString", 45, 45);
v___x_1337_ = 0;
v___x_1338_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1338_, 0, v___f_1335_);
lean_ctor_set(v___x_1338_, 1, v___x_1336_);
lean_ctor_set_uint8(v___x_1338_, sizeof(void*)*2, v___x_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus___lam__0(lean_object* v___f_1339_, lean_object* v_d_1340_){
_start:
{
uint8_t v_code_1341_; lean_object* v_message_1342_; lean_object* v___x_1343_; lean_object* v___y_1345_; 
v_code_1341_ = lean_ctor_get_uint8(v_d_1340_, sizeof(void*)*1);
v_message_1342_ = lean_ctor_get(v_d_1340_, 0);
lean_inc(v_message_1342_);
lean_dec_ref(v_d_1340_);
v___x_1343_ = lean_mk_string_unchecked("code", 4, 4);
switch(v_code_1341_)
{
case 0:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1355_ = lean_mk_string_unchecked("unset", 5, 5);
v___x_1356_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
v___y_1345_ = v___x_1356_;
goto v___jp_1344_;
}
case 1:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = lean_mk_string_unchecked("ok", 2, 2);
v___x_1358_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
v___y_1345_ = v___x_1358_;
goto v___jp_1344_;
}
default: 
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = lean_mk_string_unchecked("error", 5, 5);
v___x_1360_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
v___y_1345_ = v___x_1360_;
goto v___jp_1344_;
}
}
v___jp_1344_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1343_);
lean_ctor_set(v___x_1346_, 1, v___y_1345_);
v___x_1347_ = lean_mk_string_unchecked("message", 7, 7);
v___x_1348_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1339_, v_message_1342_);
v___x_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_unsigned_to_nat(2u);
v___x_1351_ = lean_mk_empty_array_with_capacity(v___x_1350_);
v___x_1352_ = lean_array_push(v___x_1351_, v___x_1346_);
v___x_1353_ = lean_array_push(v___x_1352_, v___x_1349_);
v___x_1354_ = l_Lasm_JS_Web_Support_fields(v___x_1353_);
lean_dec_ref(v___x_1353_);
return v___x_1354_;
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus(void){
_start:
{
lean_object* v___f_1361_; lean_object* v___f_1362_; 
v___f_1361_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1362_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus___lam__0), 2, 1);
lean_closure_set(v___f_1362_, 0, v___f_1361_);
return v___f_1362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTestController___lam__0(lean_object* v_x_1363_){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1364_ = lean_unsigned_to_nat(0u);
v___x_1365_ = lean_mk_empty_array_with_capacity(v___x_1364_);
v___x_1366_ = l_Lasm_JS_Web_Support_fields(v___x_1365_);
lean_dec_ref(v___x_1365_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTestController___lam__0(lean_object* v_d_1368_){
_start:
{
if (lean_obj_tag(v_d_1368_) == 8)
{
lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1376_; 
v_isSharedCheck_1376_ = !lean_is_exclusive(v_d_1368_);
if (v_isSharedCheck_1376_ == 0)
{
lean_object* v_unused_1377_; 
v_unused_1377_ = lean_ctor_get(v_d_1368_, 0);
lean_dec(v_unused_1377_);
v___x_1370_ = v_d_1368_;
v_isShared_1371_ = v_isSharedCheck_1376_;
goto v_resetjp_1369_;
}
else
{
lean_dec(v_d_1368_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1376_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1372_ = lean_box(0);
if (v_isShared_1371_ == 0)
{
lean_ctor_set_tag(v___x_1370_, 1);
lean_ctor_set(v___x_1370_, 0, v___x_1372_);
v___x_1374_ = v___x_1370_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; 
lean_dec(v_d_1368_);
v___x_1378_ = lean_mk_string_unchecked("", 0, 0);
v___x_1379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1378_);
return v___x_1379_;
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTestController(void){
_start:
{
lean_object* v___f_1380_; lean_object* v___x_1381_; uint8_t v___x_1382_; lean_object* v___x_1383_; 
v___f_1380_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSTestController___lam__0), 1, 0);
v___x_1381_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TestController", 33, 33);
v___x_1382_ = 0;
v___x_1383_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1383_, 0, v___f_1380_);
lean_ctor_set(v___x_1383_, 1, v___x_1381_);
lean_ctor_set_uint8(v___x_1383_, sizeof(void*)*2, v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__0(lean_object* v_x_1384_){
_start:
{
lean_object* v_fst_1385_; lean_object* v_snd_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1395_; 
v_fst_1385_ = lean_ctor_get(v_x_1384_, 0);
v_snd_1386_ = lean_ctor_get(v_x_1384_, 1);
v_isSharedCheck_1395_ = !lean_is_exclusive(v_x_1384_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1388_ = v_x_1384_;
v_isShared_1389_ = v_isSharedCheck_1395_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_snd_1386_);
lean_inc(v_fst_1385_);
lean_dec(v_x_1384_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1395_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; uint8_t v___x_1391_; lean_object* v___x_1393_; 
v___x_1390_ = lean_alloc_ctor(2, 0, 1);
v___x_1391_ = lean_unbox(v_snd_1386_);
lean_dec(v_snd_1386_);
lean_ctor_set_uint8(v___x_1390_, 0, v___x_1391_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 1, v___x_1390_);
v___x_1393_ = v___x_1388_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_fst_1385_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v___x_1390_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__1(lean_object* v___f_1396_, lean_object* v_d_1397_){
_start:
{
lean_object* v___x_1398_; lean_object* v___f_1399_; lean_object* v___f_1400_; lean_object* v___f_1401_; lean_object* v___f_1402_; lean_object* v___f_1403_; lean_object* v___f_1404_; lean_object* v___f_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; size_t v_sz_1409_; size_t v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1398_ = lean_mk_string_unchecked("compatibilityFlags", 18, 18);
v___f_1399_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_1400_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_1401_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_1402_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_1403_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_1404_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_1405_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___f_1399_);
lean_ctor_set(v___x_1406_, 1, v___f_1400_);
v___x_1407_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
lean_ctor_set(v___x_1407_, 1, v___f_1401_);
lean_ctor_set(v___x_1407_, 2, v___f_1402_);
lean_ctor_set(v___x_1407_, 3, v___f_1403_);
lean_ctor_set(v___x_1407_, 4, v___f_1404_);
v___x_1408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1407_);
lean_ctor_set(v___x_1408_, 1, v___f_1405_);
v_sz_1409_ = lean_array_size(v_d_1397_);
v___x_1410_ = ((size_t)0ULL);
v___x_1411_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1408_, v___f_1396_, v_sz_1409_, v___x_1410_, v_d_1397_);
v___x_1412_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
v___x_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1398_);
lean_ctor_set(v___x_1413_, 1, v___x_1412_);
v___x_1414_ = lean_unsigned_to_nat(1u);
v___x_1415_ = lean_mk_empty_array_with_capacity(v___x_1414_);
v___x_1416_ = lean_array_push(v___x_1415_, v___x_1413_);
v___x_1417_ = l_Lasm_JS_Web_Support_fields(v___x_1416_);
lean_dec_ref(v___x_1416_);
return v___x_1417_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSCloudflare(void){
_start:
{
lean_object* v___f_1418_; lean_object* v___f_1419_; 
v___f_1418_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__0), 1, 0);
v___f_1419_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__1), 2, 1);
lean_closure_set(v___f_1419_, 0, v___f_1418_);
return v___f_1419_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler(void){
_start:
{
lean_object* v___f_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; 
v___f_1421_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_1422_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ExportedHandlerFetchHandler", 46, 46);
v___x_1423_ = 0;
v___x_1424_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1424_, 0, v___f_1421_);
lean_ctor_set(v___x_1424_, 1, v___x_1422_);
lean_ctor_set_uint8(v___x_1424_, sizeof(void*)*2, v___x_1423_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0(lean_object* v_x_1425_){
_start:
{
if (lean_obj_tag(v_x_1425_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1435_; 
v_a_1427_ = lean_ctor_get(v_x_1425_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_x_1425_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1429_ = v_x_1425_;
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v_x_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
lean_object* v___x_1433_; 
v___x_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
return v___x_1433_;
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1446_; 
v_a_1436_ = lean_ctor_get(v_x_1425_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v_x_1425_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1438_ = v_x_1425_;
v_isShared_1439_ = v_isSharedCheck_1446_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v_x_1425_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1446_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1440_ = lean_mk_string_unchecked("", 0, 0);
v___x_1441_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1441_, 0, v_a_1436_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 0, v___x_1441_);
v___x_1443_ = v___x_1438_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1444_; 
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0___boxed(lean_object* v_x_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0(v_x_1447_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1(lean_object* v_f_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v___f_1453_, lean_object* v_x_1454_){
_start:
{
if (lean_obj_tag(v_x_1454_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1464_; 
lean_dec_ref(v___f_1453_);
lean_dec(v_a_1452_);
lean_dec(v_a_1451_);
lean_dec_ref(v_f_1450_);
v_a_1456_ = lean_ctor_get(v_x_1454_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_x_1454_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1458_ = v_x_1454_;
v_isShared_1459_ = v_isSharedCheck_1464_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v_x_1454_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1464_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1456_);
v___x_1461_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v___x_1462_; 
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
return v___x_1462_;
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1466_; uint8_t v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v_a_1465_ = lean_ctor_get(v_x_1454_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v_x_1454_, 1);
v___x_1466_ = lean_unsigned_to_nat(0u);
v___x_1467_ = 0;
v___x_1468_ = lean_apply_4(v_f_1450_, v_a_1451_, v_a_1452_, v_a_1465_, lean_box(0));
v___x_1469_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1466_, v___x_1467_, v___x_1468_, v___f_1453_);
return v___x_1469_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v___f_1473_, lean_object* v_x_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1(v_f_1470_, v_a_1471_, v_a_1472_, v___f_1473_, v_x_1474_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2(lean_object* v_f_1477_, lean_object* v_a_1478_, lean_object* v___f_1479_, lean_object* v___x_1480_, lean_object* v_args_1481_, lean_object* v_x_1482_){
_start:
{
if (lean_obj_tag(v_x_1482_) == 0)
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1492_; 
lean_dec_ref(v___x_1480_);
lean_dec_ref(v___f_1479_);
lean_dec(v_a_1478_);
lean_dec_ref(v_f_1477_);
v_a_1484_ = lean_ctor_get(v_x_1482_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v_x_1482_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1486_ = v_x_1482_;
v_isShared_1487_ = v_isSharedCheck_1492_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v_x_1482_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1492_;
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
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1484_);
v___x_1489_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
lean_object* v___x_1490_; 
v___x_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
return v___x_1490_;
}
}
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1514_; 
v_a_1493_ = lean_ctor_get(v_x_1482_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_x_1482_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1495_ = v_x_1482_;
v_isShared_1496_ = v_isSharedCheck_1514_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v_x_1482_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1514_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___f_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; uint8_t v___x_1500_; lean_object* v_val_1502_; lean_object* v___x_1505_; 
v___f_1497_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_1497_, 0, v_f_1477_);
lean_closure_set(v___f_1497_, 1, v_a_1478_);
lean_closure_set(v___f_1497_, 2, v_a_1493_);
lean_closure_set(v___f_1497_, 3, v___f_1479_);
v___x_1498_ = lean_unsigned_to_nat(2u);
v___x_1499_ = lean_unsigned_to_nat(0u);
v___x_1500_ = 0;
v___x_1505_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_1480_, v_args_1481_, v___x_1498_);
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; lean_object* v___x_1508_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
if (v_isShared_1496_ == 0)
{
lean_ctor_set(v___x_1495_, 0, v_a_1506_);
v___x_1508_ = v___x_1495_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1506_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
v_val_1502_ = v___x_1508_;
goto v___jp_1501_;
}
}
else
{
lean_object* v_a_1510_; lean_object* v___x_1512_; 
v_a_1510_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1505_, 1);
if (v_isShared_1496_ == 0)
{
lean_ctor_set_tag(v___x_1495_, 0);
lean_ctor_set(v___x_1495_, 0, v_a_1510_);
v___x_1512_ = v___x_1495_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
v_val_1502_ = v___x_1512_;
goto v___jp_1501_;
}
}
v___jp_1501_:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1503_, 0, v_val_1502_);
v___x_1504_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1499_, v___x_1500_, v___x_1503_, v___f_1497_);
return v___x_1504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_1515_, lean_object* v_a_1516_, lean_object* v___f_1517_, lean_object* v___x_1518_, lean_object* v_args_1519_, lean_object* v_x_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2(v_f_1515_, v_a_1516_, v___f_1517_, v___x_1518_, v_args_1519_, v_x_1520_);
lean_dec_ref(v_args_1519_);
return v_res_1522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3(lean_object* v___f_1523_, lean_object* v_inst_1524_, lean_object* v_x_1525_){
_start:
{
if (lean_obj_tag(v_x_1525_) == 0)
{
lean_object* v___x_1527_; 
lean_dec_ref(v_inst_1524_);
lean_dec_ref(v___f_1523_);
v___x_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_x_1525_);
return v___x_1527_;
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1547_; 
v_a_1528_ = lean_ctor_get(v_x_1525_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v_x_1525_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1530_ = v_x_1525_;
v_isShared_1531_ = v_isSharedCheck_1547_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v_x_1525_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1547_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1532_; uint8_t v___x_1533_; lean_object* v_val_1535_; lean_object* v___x_1538_; 
v___x_1532_ = lean_unsigned_to_nat(0u);
v___x_1533_ = 0;
v___x_1538_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_1524_, v_a_1528_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v___x_1541_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_a_1539_);
lean_dec_ref_known(v___x_1538_, 1);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v_a_1539_);
v___x_1541_ = v___x_1530_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_a_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
v_val_1535_ = v___x_1541_;
goto v___jp_1534_;
}
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; 
v_a_1543_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_a_1543_);
lean_dec_ref_known(v___x_1538_, 1);
if (v_isShared_1531_ == 0)
{
lean_ctor_set_tag(v___x_1530_, 0);
lean_ctor_set(v___x_1530_, 0, v_a_1543_);
v___x_1545_ = v___x_1530_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1543_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
v_val_1535_ = v___x_1545_;
goto v___jp_1534_;
}
}
v___jp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1536_, 0, v_val_1535_);
v___x_1537_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1532_, v___x_1533_, v___x_1536_, v___f_1523_);
return v___x_1537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed(lean_object* v___f_1548_, lean_object* v_inst_1549_, lean_object* v_x_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3(v___f_1548_, v_inst_1549_, v_x_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4(lean_object* v_f_1553_, lean_object* v___f_1554_, lean_object* v___x_1555_, lean_object* v_args_1556_, lean_object* v_inst_1557_, lean_object* v___x_1558_, lean_object* v_x_1559_){
_start:
{
if (lean_obj_tag(v_x_1559_) == 0)
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1569_; 
lean_dec_ref(v___x_1558_);
lean_dec_ref(v_inst_1557_);
lean_dec_ref(v_args_1556_);
lean_dec_ref(v___x_1555_);
lean_dec_ref(v___f_1554_);
lean_dec_ref(v_f_1553_);
v_a_1561_ = lean_ctor_get(v_x_1559_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v_x_1559_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1563_ = v_x_1559_;
v_isShared_1564_ = v_isSharedCheck_1569_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v_x_1559_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1569_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1567_; 
v___x_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
return v___x_1567_;
}
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1592_; 
v_a_1570_ = lean_ctor_get(v_x_1559_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_x_1559_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1572_ = v_x_1559_;
v_isShared_1573_ = v_isSharedCheck_1592_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v_x_1559_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1592_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___f_1574_; lean_object* v___f_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; uint8_t v___x_1578_; lean_object* v_val_1580_; lean_object* v___x_1583_; 
lean_inc_ref(v_args_1556_);
v___f_1574_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1574_, 0, v_f_1553_);
lean_closure_set(v___f_1574_, 1, v_a_1570_);
lean_closure_set(v___f_1574_, 2, v___f_1554_);
lean_closure_set(v___f_1574_, 3, v___x_1555_);
lean_closure_set(v___f_1574_, 4, v_args_1556_);
v___f_1575_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1575_, 0, v___f_1574_);
lean_closure_set(v___f_1575_, 1, v_inst_1557_);
v___x_1576_ = lean_unsigned_to_nat(1u);
v___x_1577_ = lean_unsigned_to_nat(0u);
v___x_1578_ = 0;
v___x_1583_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_1558_, v_args_1556_, v___x_1576_);
lean_dec_ref(v_args_1556_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v___x_1586_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1583_, 1);
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 0, v_a_1584_);
v___x_1586_ = v___x_1572_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1584_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
v_val_1580_ = v___x_1586_;
goto v___jp_1579_;
}
}
else
{
lean_object* v_a_1588_; lean_object* v___x_1590_; 
v_a_1588_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1583_, 1);
if (v_isShared_1573_ == 0)
{
lean_ctor_set_tag(v___x_1572_, 0);
lean_ctor_set(v___x_1572_, 0, v_a_1588_);
v___x_1590_ = v___x_1572_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1588_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
v_val_1580_ = v___x_1590_;
goto v___jp_1579_;
}
}
v___jp_1579_:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1581_, 0, v_val_1580_);
v___x_1582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1577_, v___x_1578_, v___x_1581_, v___f_1575_);
return v___x_1582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4___boxed(lean_object* v_f_1593_, lean_object* v___f_1594_, lean_object* v___x_1595_, lean_object* v_args_1596_, lean_object* v_inst_1597_, lean_object* v___x_1598_, lean_object* v_x_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4(v_f_1593_, v___f_1594_, v___x_1595_, v_args_1596_, v_inst_1597_, v___x_1598_, v_x_1599_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5(lean_object* v_f_1602_, lean_object* v___f_1603_, lean_object* v___x_1604_, lean_object* v_inst_1605_, lean_object* v___x_1606_, lean_object* v___x_1607_, lean_object* v_args_1608_){
_start:
{
lean_object* v___f_1610_; lean_object* v___x_1611_; uint8_t v___x_1612_; lean_object* v_val_1614_; lean_object* v___x_1617_; 
lean_inc_ref(v_args_1608_);
v___f_1610_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_1610_, 0, v_f_1602_);
lean_closure_set(v___f_1610_, 1, v___f_1603_);
lean_closure_set(v___f_1610_, 2, v___x_1604_);
lean_closure_set(v___f_1610_, 3, v_args_1608_);
lean_closure_set(v___f_1610_, 4, v_inst_1605_);
lean_closure_set(v___f_1610_, 5, v___x_1606_);
v___x_1611_ = lean_unsigned_to_nat(0u);
v___x_1612_ = 0;
v___x_1617_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_1607_, v_args_1608_, v___x_1611_);
lean_dec_ref(v_args_1608_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
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
lean_ctor_set_tag(v___x_1620_, 1);
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
v_val_1614_ = v___x_1623_;
goto v___jp_1613_;
}
}
}
else
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
v_a_1626_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___x_1617_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1617_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
lean_ctor_set_tag(v___x_1628_, 0);
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
v_val_1614_ = v___x_1631_;
goto v___jp_1613_;
}
}
}
v___jp_1613_:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1615_, 0, v_val_1614_);
v___x_1616_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1611_, v___x_1612_, v___x_1615_, v___f_1610_);
return v___x_1616_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5___boxed(lean_object* v_f_1634_, lean_object* v___f_1635_, lean_object* v___x_1636_, lean_object* v_inst_1637_, lean_object* v___x_1638_, lean_object* v___x_1639_, lean_object* v_args_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5(v_f_1634_, v___f_1635_, v___x_1636_, v_inst_1637_, v___x_1638_, v___x_1639_, v_args_1640_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(lean_object* v_inst_1643_, lean_object* v_f_1644_){
_start:
{
lean_object* v___f_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___f_1650_; lean_object* v___f_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___f_1646_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___x_1647_ = l_Lasm_JS_Web_instFromJSRequest;
v___x_1648_ = l_Lasm_JS_instFromJSData;
v___x_1649_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_1650_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_1650_, 0, v_f_1644_);
lean_closure_set(v___f_1650_, 1, v___f_1646_);
lean_closure_set(v___f_1650_, 2, v___x_1649_);
lean_closure_set(v___f_1650_, 3, v_inst_1643_);
lean_closure_set(v___f_1650_, 4, v___x_1648_);
lean_closure_set(v___f_1650_, 5, v___x_1647_);
v___f_1651_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_1652_ = l_Lasm_JS_instFromJSValue;
v___x_1653_ = l_Lasm_JS_Function_ofFn(v___f_1650_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; lean_object* v___x_1655_; 
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
lean_inc(v_a_1654_);
lean_dec_ref_known(v___x_1653_, 1);
v___x_1655_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
lean_inc(v_a_1656_);
lean_dec_ref_known(v___x_1655_, 1);
v___x_1657_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1658_ = l_Lasm_JS_Value_get___redArg(v___f_1651_, v_a_1656_, v___x_1657_, v___x_1652_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_object* v_a_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___y_1667_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v_a_1659_ = lean_ctor_get(v___x_1658_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1658_, 1);
v___x_1660_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1661_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1654_);
v___x_1662_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1662_, 0, v_a_1654_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1664_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
v___x_1665_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1694_ = lean_unsigned_to_nat(3u);
v___x_1695_ = lean_nat_to_int(v___x_1694_);
v___x_1696_ = lean_nat_abs(v___x_1695_);
v___x_1697_ = lean_cstr_to_nat("9007199254740991");
v___x_1698_ = lean_nat_dec_le(v___x_1696_, v___x_1697_);
lean_dec(v___x_1696_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; 
v___x_1699_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1695_);
v___y_1667_ = v___x_1699_;
goto v___jp_1666_;
}
else
{
double v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = l_Float_ofInt(v___x_1695_);
lean_dec(v___x_1695_);
v___x_1701_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1701_, 0, v___x_1700_);
v___y_1667_ = v___x_1701_;
goto v___jp_1666_;
}
v___jp_1666_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1665_);
lean_ctor_set(v___x_1668_, 1, v___y_1667_);
v___x_1669_ = lean_box(0);
v___x_1670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1668_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = l_Lasm_JS_obj(v___x_1670_);
v___x_1672_ = lean_unsigned_to_nat(3u);
v___x_1673_ = lean_mk_empty_array_with_capacity(v___x_1672_);
v___x_1674_ = lean_array_push(v___x_1673_, v___x_1662_);
v___x_1675_ = lean_array_push(v___x_1674_, v___x_1664_);
v___x_1676_ = lean_array_push(v___x_1675_, v___x_1671_);
v___x_1677_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1659_, v___x_1660_, v___x_1676_, v___x_1652_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1684_ == 0)
{
lean_object* v_unused_1685_; 
v_unused_1685_ = lean_ctor_get(v___x_1677_, 0);
lean_dec(v_unused_1685_);
v___x_1679_ = v___x_1677_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_dec(v___x_1677_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
lean_ctor_set(v___x_1679_, 0, v_a_1654_);
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1654_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
lean_dec(v_a_1654_);
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
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec(v_a_1654_);
v_a_1702_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1658_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1658_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec(v_a_1654_);
lean_dec_ref(v___f_1651_);
v_a_1710_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1655_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1655_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
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
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_dec_ref(v___f_1651_);
v_a_1718_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1653_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1653_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___boxed(lean_object* v_inst_1726_, lean_object* v_f_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(v_inst_1726_, v_f_1727_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(lean_object* v_Env_1730_, lean_object* v_inst_1731_, lean_object* v_f_1732_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(v_inst_1731_, v_f_1732_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___boxed(lean_object* v_Env_1735_, lean_object* v_inst_1736_, lean_object* v_f_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(v_Env_1735_, v_inst_1736_, v_f_1737_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_1740_, lean_object* v___x_1741_, lean_object* v_inst_1742_, lean_object* v___x_1743_, lean_object* v_f_1744_, lean_object* v_args_1745_){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1747_ = lean_unsigned_to_nat(0u);
v___x_1748_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_1740_, v_args_1745_, v___x_1747_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = lean_unsigned_to_nat(1u);
v___x_1751_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_1741_, v_args_1745_, v___x_1750_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_object* v_a_1752_; lean_object* v___x_1753_; 
v_a_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc(v_a_1752_);
lean_dec_ref_known(v___x_1751_, 1);
v___x_1753_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_1742_, v_a_1752_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v___x_1755_ = lean_unsigned_to_nat(2u);
v___x_1756_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_1743_, v_args_1745_, v___x_1755_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; lean_object* v___x_1758_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
lean_inc(v_a_1757_);
lean_dec_ref_known(v___x_1756_, 1);
v___x_1758_ = lean_apply_4(v_f_1744_, v_a_1749_, v_a_1754_, v_a_1757_, lean_box(0));
if (lean_obj_tag(v___x_1758_) == 0)
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1768_; 
v_a_1759_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1761_ = v___x_1758_;
v_isShared_1762_ = v_isSharedCheck_1768_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1758_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1768_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1763_ = lean_mk_string_unchecked("", 0, 0);
v___x_1764_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1764_, 0, v_a_1759_);
lean_ctor_set(v___x_1764_, 1, v___x_1763_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 0, v___x_1764_);
v___x_1766_ = v___x_1761_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
v_a_1769_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1758_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1758_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec(v_a_1754_);
lean_dec(v_a_1749_);
lean_dec_ref(v_f_1744_);
v_a_1777_ = lean_ctor_get(v___x_1756_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1756_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1756_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_dec(v_a_1749_);
lean_dec_ref(v_f_1744_);
lean_dec_ref(v___x_1743_);
v_a_1785_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1753_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1753_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
else
{
lean_dec(v_a_1749_);
lean_dec_ref(v_f_1744_);
lean_dec_ref(v___x_1743_);
lean_dec_ref(v_inst_1742_);
return v___x_1751_;
}
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec_ref(v_f_1744_);
lean_dec_ref(v___x_1743_);
lean_dec_ref(v_inst_1742_);
lean_dec_ref(v___x_1741_);
v_a_1793_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1748_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1748_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_1801_, lean_object* v___x_1802_, lean_object* v_inst_1803_, lean_object* v___x_1804_, lean_object* v_f_1805_, lean_object* v_args_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(v___x_1801_, v___x_1802_, v_inst_1803_, v___x_1804_, v_f_1805_, v_args_1806_);
lean_dec_ref(v_args_1806_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(lean_object* v_inst_1809_, lean_object* v_f_1810_){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___f_1815_; lean_object* v___f_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1812_ = l_Lasm_JS_Web_instFromJSRequest;
v___x_1813_ = l_Lasm_JS_instFromJSData;
v___x_1814_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_1815_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1815_, 0, v___x_1812_);
lean_closure_set(v___f_1815_, 1, v___x_1813_);
lean_closure_set(v___f_1815_, 2, v_inst_1809_);
lean_closure_set(v___f_1815_, 3, v___x_1814_);
lean_closure_set(v___f_1815_, 4, v_f_1810_);
v___f_1816_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_1817_ = l_Lasm_JS_instFromJSValue;
v___x_1818_ = l_Lasm_JS_Function_ofSyncFn(v___f_1815_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1820_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref_known(v___x_1818_, 1);
v___x_1820_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v___x_1820_, 1);
v___x_1822_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1823_ = l_Lasm_JS_Value_get___redArg(v___f_1816_, v_a_1821_, v___x_1822_, v___x_1817_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___y_1832_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; uint8_t v___x_1863_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1826_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1819_);
v___x_1827_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1827_, 0, v_a_1819_);
lean_ctor_set(v___x_1827_, 1, v___x_1826_);
v___x_1828_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1829_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
v___x_1830_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1859_ = lean_unsigned_to_nat(3u);
v___x_1860_ = lean_nat_to_int(v___x_1859_);
v___x_1861_ = lean_nat_abs(v___x_1860_);
v___x_1862_ = lean_cstr_to_nat("9007199254740991");
v___x_1863_ = lean_nat_dec_le(v___x_1861_, v___x_1862_);
lean_dec(v___x_1861_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; 
v___x_1864_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1860_);
v___y_1832_ = v___x_1864_;
goto v___jp_1831_;
}
else
{
double v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = l_Float_ofInt(v___x_1860_);
lean_dec(v___x_1860_);
v___x_1866_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1866_, 0, v___x_1865_);
v___y_1832_ = v___x_1866_;
goto v___jp_1831_;
}
v___jp_1831_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1830_);
lean_ctor_set(v___x_1833_, 1, v___y_1832_);
v___x_1834_ = lean_box(0);
v___x_1835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1833_);
lean_ctor_set(v___x_1835_, 1, v___x_1834_);
v___x_1836_ = l_Lasm_JS_obj(v___x_1835_);
v___x_1837_ = lean_unsigned_to_nat(3u);
v___x_1838_ = lean_mk_empty_array_with_capacity(v___x_1837_);
v___x_1839_ = lean_array_push(v___x_1838_, v___x_1827_);
v___x_1840_ = lean_array_push(v___x_1839_, v___x_1829_);
v___x_1841_ = lean_array_push(v___x_1840_, v___x_1836_);
v___x_1842_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1824_, v___x_1825_, v___x_1841_, v___x_1817_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1849_ == 0)
{
lean_object* v_unused_1850_; 
v_unused_1850_ = lean_ctor_get(v___x_1842_, 0);
lean_dec(v_unused_1850_);
v___x_1844_ = v___x_1842_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_dec(v___x_1842_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
lean_ctor_set(v___x_1844_, 0, v_a_1819_);
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1819_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
lean_dec(v_a_1819_);
v_a_1851_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1842_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1842_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
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
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec(v_a_1819_);
v_a_1867_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1823_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1823_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec(v_a_1819_);
lean_dec_ref(v___f_1816_);
v_a_1875_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1820_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1820_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
else
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1890_; 
lean_dec_ref(v___f_1816_);
v_a_1883_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1885_ = v___x_1818_;
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1818_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_1891_, lean_object* v_f_1892_, lean_object* v_a_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(v_inst_1891_, v_f_1892_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(lean_object* v_Env_1895_, lean_object* v_inst_1896_, lean_object* v_f_1897_){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(v_inst_1896_, v_f_1897_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___boxed(lean_object* v_Env_1900_, lean_object* v_inst_1901_, lean_object* v_f_1902_, lean_object* v_a_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(v_Env_1900_, v_inst_1901_, v_f_1902_);
return v_res_1904_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler(void){
_start:
{
lean_object* v___f_1906_; lean_object* v___x_1907_; uint8_t v___x_1908_; lean_object* v___x_1909_; 
v___f_1906_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_1907_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ExportedHandlerScheduledHandler", 50, 50);
v___x_1908_ = 0;
v___x_1909_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1909_, 0, v___f_1906_);
lean_ctor_set(v___x_1909_, 1, v___x_1907_);
lean_ctor_set_uint8(v___x_1909_, sizeof(void*)*2, v___x_1908_);
return v___x_1909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(lean_object* v_x_1910_){
_start:
{
if (lean_obj_tag(v_x_1910_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1920_; 
v_a_1912_ = lean_ctor_get(v_x_1910_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_x_1910_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1914_ = v_x_1910_;
v_isShared_1915_ = v_isSharedCheck_1920_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v_x_1910_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1920_;
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
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
lean_object* v___x_1918_; 
v___x_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
return v___x_1918_;
}
}
}
else
{
lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1929_; 
v_isSharedCheck_1929_ = !lean_is_exclusive(v_x_1910_);
if (v_isSharedCheck_1929_ == 0)
{
lean_object* v_unused_1930_; 
v_unused_1930_ = lean_ctor_get(v_x_1910_, 0);
lean_dec(v_unused_1930_);
v___x_1922_ = v_x_1910_;
v_isShared_1923_ = v_isSharedCheck_1929_;
goto v_resetjp_1921_;
}
else
{
lean_dec(v_x_1910_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1929_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1924_; lean_object* v___x_1926_; 
v___x_1924_ = lean_box(0);
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v___x_1924_);
v___x_1926_ = v___x_1922_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1924_);
v___x_1926_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
lean_object* v___x_1927_; 
v___x_1927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
return v___x_1927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed(lean_object* v_x_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(v_x_1931_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(lean_object* v_f_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v___f_1937_, lean_object* v_x_1938_){
_start:
{
if (lean_obj_tag(v_x_1938_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1948_; 
lean_dec_ref(v___f_1937_);
lean_dec(v_a_1936_);
lean_dec(v_a_1935_);
lean_dec_ref(v_f_1934_);
v_a_1940_ = lean_ctor_get(v_x_1938_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_x_1938_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1942_ = v_x_1938_;
v_isShared_1943_ = v_isSharedCheck_1948_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v_x_1938_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1948_;
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
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
lean_object* v___x_1946_; 
v___x_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
return v___x_1946_;
}
}
}
else
{
lean_object* v_a_1949_; lean_object* v___x_1950_; uint8_t v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v_a_1949_ = lean_ctor_get(v_x_1938_, 0);
lean_inc(v_a_1949_);
lean_dec_ref_known(v_x_1938_, 1);
v___x_1950_ = lean_unsigned_to_nat(0u);
v___x_1951_ = 0;
v___x_1952_ = lean_apply_4(v_f_1934_, v_a_1935_, v_a_1936_, v_a_1949_, lean_box(0));
v___x_1953_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1950_, v___x_1951_, v___x_1952_, v___f_1937_);
return v___x_1953_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v___f_1957_, lean_object* v_x_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(v_f_1954_, v_a_1955_, v_a_1956_, v___f_1957_, v_x_1958_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(lean_object* v_f_1961_, lean_object* v_a_1962_, lean_object* v___f_1963_, lean_object* v___x_1964_, lean_object* v_args_1965_, lean_object* v_x_1966_){
_start:
{
if (lean_obj_tag(v_x_1966_) == 0)
{
lean_object* v_a_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1976_; 
lean_dec_ref(v___x_1964_);
lean_dec_ref(v___f_1963_);
lean_dec(v_a_1962_);
lean_dec_ref(v_f_1961_);
v_a_1968_ = lean_ctor_get(v_x_1966_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_x_1966_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1970_ = v_x_1966_;
v_isShared_1971_ = v_isSharedCheck_1976_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_a_1968_);
lean_dec(v_x_1966_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1976_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1973_; 
if (v_isShared_1971_ == 0)
{
v___x_1973_ = v___x_1970_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1968_);
v___x_1973_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
lean_object* v___x_1974_; 
v___x_1974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
return v___x_1974_;
}
}
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1998_; 
v_a_1977_ = lean_ctor_get(v_x_1966_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v_x_1966_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1979_ = v_x_1966_;
v_isShared_1980_ = v_isSharedCheck_1998_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v_x_1966_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1998_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___f_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; uint8_t v___x_1984_; lean_object* v_val_1986_; lean_object* v___x_1989_; 
v___f_1981_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_1981_, 0, v_f_1961_);
lean_closure_set(v___f_1981_, 1, v_a_1962_);
lean_closure_set(v___f_1981_, 2, v_a_1977_);
lean_closure_set(v___f_1981_, 3, v___f_1963_);
v___x_1982_ = lean_unsigned_to_nat(2u);
v___x_1983_ = lean_unsigned_to_nat(0u);
v___x_1984_ = 0;
v___x_1989_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_1964_, v_args_1965_, v___x_1982_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1992_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1989_, 1);
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v_a_1990_);
v___x_1992_ = v___x_1979_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1990_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
v_val_1986_ = v___x_1992_;
goto v___jp_1985_;
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; 
v_a_1994_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1994_);
lean_dec_ref_known(v___x_1989_, 1);
if (v_isShared_1980_ == 0)
{
lean_ctor_set_tag(v___x_1979_, 0);
lean_ctor_set(v___x_1979_, 0, v_a_1994_);
v___x_1996_ = v___x_1979_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1994_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
v_val_1986_ = v___x_1996_;
goto v___jp_1985_;
}
}
v___jp_1985_:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1987_, 0, v_val_1986_);
v___x_1988_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1983_, v___x_1984_, v___x_1987_, v___f_1981_);
return v___x_1988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_1999_, lean_object* v_a_2000_, lean_object* v___f_2001_, lean_object* v___x_2002_, lean_object* v_args_2003_, lean_object* v_x_2004_, lean_object* v___y_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(v_f_1999_, v_a_2000_, v___f_2001_, v___x_2002_, v_args_2003_, v_x_2004_);
lean_dec_ref(v_args_2003_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(lean_object* v_f_2007_, lean_object* v___f_2008_, lean_object* v___x_2009_, lean_object* v_args_2010_, lean_object* v_inst_2011_, lean_object* v___x_2012_, lean_object* v_x_2013_){
_start:
{
if (lean_obj_tag(v_x_2013_) == 0)
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2023_; 
lean_dec_ref(v___x_2012_);
lean_dec_ref(v_inst_2011_);
lean_dec_ref(v_args_2010_);
lean_dec_ref(v___x_2009_);
lean_dec_ref(v___f_2008_);
lean_dec_ref(v_f_2007_);
v_a_2015_ = lean_ctor_get(v_x_2013_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v_x_2013_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2017_ = v_x_2013_;
v_isShared_2018_ = v_isSharedCheck_2023_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v_x_2013_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2023_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
lean_object* v___x_2021_; 
v___x_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
return v___x_2021_;
}
}
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2046_; 
v_a_2024_ = lean_ctor_get(v_x_2013_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v_x_2013_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2026_ = v_x_2013_;
v_isShared_2027_ = v_isSharedCheck_2046_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v_x_2013_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2046_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___f_2028_; lean_object* v___f_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; uint8_t v___x_2032_; lean_object* v_val_2034_; lean_object* v___x_2037_; 
lean_inc_ref(v_args_2010_);
v___f_2028_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_2028_, 0, v_f_2007_);
lean_closure_set(v___f_2028_, 1, v_a_2024_);
lean_closure_set(v___f_2028_, 2, v___f_2008_);
lean_closure_set(v___f_2028_, 3, v___x_2009_);
lean_closure_set(v___f_2028_, 4, v_args_2010_);
v___f_2029_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2029_, 0, v___f_2028_);
lean_closure_set(v___f_2029_, 1, v_inst_2011_);
v___x_2030_ = lean_unsigned_to_nat(1u);
v___x_2031_ = lean_unsigned_to_nat(0u);
v___x_2032_ = 0;
v___x_2037_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2012_, v_args_2010_, v___x_2030_);
lean_dec_ref(v_args_2010_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2040_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2037_, 1);
if (v_isShared_2027_ == 0)
{
lean_ctor_set(v___x_2026_, 0, v_a_2038_);
v___x_2040_ = v___x_2026_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2038_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
v_val_2034_ = v___x_2040_;
goto v___jp_2033_;
}
}
else
{
lean_object* v_a_2042_; lean_object* v___x_2044_; 
v_a_2042_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2037_, 1);
if (v_isShared_2027_ == 0)
{
lean_ctor_set_tag(v___x_2026_, 0);
lean_ctor_set(v___x_2026_, 0, v_a_2042_);
v___x_2044_ = v___x_2026_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_a_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
v_val_2034_ = v___x_2044_;
goto v___jp_2033_;
}
}
v___jp_2033_:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2035_, 0, v_val_2034_);
v___x_2036_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2031_, v___x_2032_, v___x_2035_, v___f_2029_);
return v___x_2036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed(lean_object* v_f_2047_, lean_object* v___f_2048_, lean_object* v___x_2049_, lean_object* v_args_2050_, lean_object* v_inst_2051_, lean_object* v___x_2052_, lean_object* v_x_2053_, lean_object* v___y_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(v_f_2047_, v___f_2048_, v___x_2049_, v_args_2050_, v_inst_2051_, v___x_2052_, v_x_2053_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(lean_object* v_f_2056_, lean_object* v___f_2057_, lean_object* v___x_2058_, lean_object* v_inst_2059_, lean_object* v___x_2060_, lean_object* v___x_2061_, lean_object* v_args_2062_){
_start:
{
lean_object* v___f_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; lean_object* v_val_2068_; lean_object* v___x_2071_; 
lean_inc_ref(v_args_2062_);
v___f_2064_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_2064_, 0, v_f_2056_);
lean_closure_set(v___f_2064_, 1, v___f_2057_);
lean_closure_set(v___f_2064_, 2, v___x_2058_);
lean_closure_set(v___f_2064_, 3, v_args_2062_);
lean_closure_set(v___f_2064_, 4, v_inst_2059_);
lean_closure_set(v___f_2064_, 5, v___x_2060_);
v___x_2065_ = lean_unsigned_to_nat(0u);
v___x_2066_ = 0;
v___x_2071_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2061_, v_args_2062_, v___x_2065_);
lean_dec_ref(v_args_2062_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2071_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2071_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
lean_ctor_set_tag(v___x_2074_, 1);
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
v_val_2068_ = v___x_2077_;
goto v___jp_2067_;
}
}
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
v_a_2080_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2071_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2071_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
lean_ctor_set_tag(v___x_2082_, 0);
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
v_val_2068_ = v___x_2085_;
goto v___jp_2067_;
}
}
}
v___jp_2067_:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v_val_2068_);
v___x_2070_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2065_, v___x_2066_, v___x_2069_, v___f_2064_);
return v___x_2070_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed(lean_object* v_f_2088_, lean_object* v___f_2089_, lean_object* v___x_2090_, lean_object* v_inst_2091_, lean_object* v___x_2092_, lean_object* v___x_2093_, lean_object* v_args_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(v_f_2088_, v___f_2089_, v___x_2090_, v_inst_2091_, v___x_2092_, v___x_2093_, v_args_2094_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(lean_object* v_inst_2097_, lean_object* v_f_2098_){
_start:
{
lean_object* v___f_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___f_2104_; lean_object* v___f_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v___f_2100_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___x_2101_ = l_Lasm_JS_Cloudflare_instFromJSScheduledController;
v___x_2102_ = l_Lasm_JS_instFromJSData;
v___x_2103_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_2104_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_2104_, 0, v_f_2098_);
lean_closure_set(v___f_2104_, 1, v___f_2100_);
lean_closure_set(v___f_2104_, 2, v___x_2103_);
lean_closure_set(v___f_2104_, 3, v_inst_2097_);
lean_closure_set(v___f_2104_, 4, v___x_2102_);
lean_closure_set(v___f_2104_, 5, v___x_2101_);
v___f_2105_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2106_ = l_Lasm_JS_instFromJSValue;
v___x_2107_ = l_Lasm_JS_Function_ofFn(v___f_2104_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2109_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2107_, 1);
v___x_2109_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_a_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v_a_2110_ = lean_ctor_get(v___x_2109_, 0);
lean_inc(v_a_2110_);
lean_dec_ref_known(v___x_2109_, 1);
v___x_2111_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2112_ = l_Lasm_JS_Value_get___redArg(v___f_2105_, v_a_2110_, v___x_2111_, v___x_2106_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___y_2121_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; uint8_t v___x_2152_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2115_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2108_);
v___x_2116_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2116_, 0, v_a_2108_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2118_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
v___x_2119_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2148_ = lean_unsigned_to_nat(3u);
v___x_2149_ = lean_nat_to_int(v___x_2148_);
v___x_2150_ = lean_nat_abs(v___x_2149_);
v___x_2151_ = lean_cstr_to_nat("9007199254740991");
v___x_2152_ = lean_nat_dec_le(v___x_2150_, v___x_2151_);
lean_dec(v___x_2150_);
if (v___x_2152_ == 0)
{
lean_object* v___x_2153_; 
v___x_2153_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2149_);
v___y_2121_ = v___x_2153_;
goto v___jp_2120_;
}
else
{
double v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = l_Float_ofInt(v___x_2149_);
lean_dec(v___x_2149_);
v___x_2155_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2155_, 0, v___x_2154_);
v___y_2121_ = v___x_2155_;
goto v___jp_2120_;
}
v___jp_2120_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2119_);
lean_ctor_set(v___x_2122_, 1, v___y_2121_);
v___x_2123_ = lean_box(0);
v___x_2124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = l_Lasm_JS_obj(v___x_2124_);
v___x_2126_ = lean_unsigned_to_nat(3u);
v___x_2127_ = lean_mk_empty_array_with_capacity(v___x_2126_);
v___x_2128_ = lean_array_push(v___x_2127_, v___x_2116_);
v___x_2129_ = lean_array_push(v___x_2128_, v___x_2118_);
v___x_2130_ = lean_array_push(v___x_2129_, v___x_2125_);
v___x_2131_ = l_Lasm_JS_Value_callMethod___redArg(v_a_2113_, v___x_2114_, v___x_2130_, v___x_2106_);
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2138_; 
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2138_ == 0)
{
lean_object* v_unused_2139_; 
v_unused_2139_ = lean_ctor_get(v___x_2131_, 0);
lean_dec(v_unused_2139_);
v___x_2133_ = v___x_2131_;
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
else
{
lean_dec(v___x_2131_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
lean_ctor_set(v___x_2133_, 0, v_a_2108_);
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v_a_2108_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_dec(v_a_2108_);
v_a_2140_ = lean_ctor_get(v___x_2131_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2131_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2131_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec(v_a_2108_);
v_a_2156_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2112_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2112_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
lean_dec(v_a_2108_);
lean_dec_ref(v___f_2105_);
v_a_2164_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_2109_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2109_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec_ref(v___f_2105_);
v_a_2172_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2107_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2107_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___boxed(lean_object* v_inst_2180_, lean_object* v_f_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v_res_2183_; 
v_res_2183_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(v_inst_2180_, v_f_2181_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(lean_object* v_Env_2184_, lean_object* v_inst_2185_, lean_object* v_f_2186_){
_start:
{
lean_object* v___x_2188_; 
v___x_2188_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(v_inst_2185_, v_f_2186_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___boxed(lean_object* v_Env_2189_, lean_object* v_inst_2190_, lean_object* v_f_2191_, lean_object* v_a_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(v_Env_2189_, v_inst_2190_, v_f_2191_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_2194_, lean_object* v___x_2195_, lean_object* v_inst_2196_, lean_object* v___x_2197_, lean_object* v_f_2198_, lean_object* v_args_2199_){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = lean_unsigned_to_nat(0u);
v___x_2202_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2194_, v_args_2199_, v___x_2201_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2202_, 1);
v___x_2204_ = lean_unsigned_to_nat(1u);
v___x_2205_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2195_, v_args_2199_, v___x_2204_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2207_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_a_2206_);
lean_dec_ref_known(v___x_2205_, 1);
v___x_2207_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_2196_, v_a_2206_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
lean_inc(v_a_2208_);
lean_dec_ref_known(v___x_2207_, 1);
v___x_2209_ = lean_unsigned_to_nat(2u);
v___x_2210_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2197_, v_args_2199_, v___x_2209_);
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2212_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v___x_2210_, 1);
v___x_2212_ = lean_apply_4(v_f_2198_, v_a_2203_, v_a_2208_, v_a_2211_, lean_box(0));
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2220_; 
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2220_ == 0)
{
lean_object* v_unused_2221_; 
v_unused_2221_ = lean_ctor_get(v___x_2212_, 0);
lean_dec(v_unused_2221_);
v___x_2214_ = v___x_2212_;
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
else
{
lean_dec(v___x_2212_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2216_ = lean_box(0);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v___x_2216_);
v___x_2218_ = v___x_2214_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
v_a_2222_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2212_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2212_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
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
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec(v_a_2208_);
lean_dec(v_a_2203_);
lean_dec_ref(v_f_2198_);
v_a_2230_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2210_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2210_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
else
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2245_; 
lean_dec(v_a_2203_);
lean_dec_ref(v_f_2198_);
lean_dec_ref(v___x_2197_);
v_a_2238_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2240_ = v___x_2207_;
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v___x_2207_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2243_; 
if (v_isShared_2241_ == 0)
{
v___x_2243_ = v___x_2240_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_a_2238_);
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
else
{
lean_dec(v_a_2203_);
lean_dec_ref(v_f_2198_);
lean_dec_ref(v___x_2197_);
lean_dec_ref(v_inst_2196_);
return v___x_2205_;
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_dec_ref(v_f_2198_);
lean_dec_ref(v___x_2197_);
lean_dec_ref(v_inst_2196_);
lean_dec_ref(v___x_2195_);
v_a_2246_ = lean_ctor_get(v___x_2202_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2202_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2202_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_2254_, lean_object* v___x_2255_, lean_object* v_inst_2256_, lean_object* v___x_2257_, lean_object* v_f_2258_, lean_object* v_args_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(v___x_2254_, v___x_2255_, v_inst_2256_, v___x_2257_, v_f_2258_, v_args_2259_);
lean_dec_ref(v_args_2259_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(lean_object* v_inst_2262_, lean_object* v_f_2263_){
_start:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___f_2268_; lean_object* v___f_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2265_ = l_Lasm_JS_Cloudflare_instFromJSScheduledController;
v___x_2266_ = l_Lasm_JS_instFromJSData;
v___x_2267_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_2268_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2268_, 0, v___x_2265_);
lean_closure_set(v___f_2268_, 1, v___x_2266_);
lean_closure_set(v___f_2268_, 2, v_inst_2262_);
lean_closure_set(v___f_2268_, 3, v___x_2267_);
lean_closure_set(v___f_2268_, 4, v_f_2263_);
v___f_2269_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2270_ = l_Lasm_JS_instFromJSValue;
v___x_2271_ = l_Lasm_JS_Function_ofSyncFn(v___f_2268_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2273_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v___x_2273_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v_a_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v_a_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v___x_2275_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2276_ = l_Lasm_JS_Value_get___redArg(v___f_2269_, v_a_2274_, v___x_2275_, v___x_2270_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v_a_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___y_2285_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; uint8_t v___x_2316_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v___x_2276_, 1);
v___x_2278_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2279_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2272_);
v___x_2280_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2280_, 0, v_a_2272_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
v___x_2281_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2282_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
v___x_2283_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2312_ = lean_unsigned_to_nat(3u);
v___x_2313_ = lean_nat_to_int(v___x_2312_);
v___x_2314_ = lean_nat_abs(v___x_2313_);
v___x_2315_ = lean_cstr_to_nat("9007199254740991");
v___x_2316_ = lean_nat_dec_le(v___x_2314_, v___x_2315_);
lean_dec(v___x_2314_);
if (v___x_2316_ == 0)
{
lean_object* v___x_2317_; 
v___x_2317_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2313_);
v___y_2285_ = v___x_2317_;
goto v___jp_2284_;
}
else
{
double v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = l_Float_ofInt(v___x_2313_);
lean_dec(v___x_2313_);
v___x_2319_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2319_, 0, v___x_2318_);
v___y_2285_ = v___x_2319_;
goto v___jp_2284_;
}
v___jp_2284_:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___x_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2283_);
lean_ctor_set(v___x_2286_, 1, v___y_2285_);
v___x_2287_ = lean_box(0);
v___x_2288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2286_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = l_Lasm_JS_obj(v___x_2288_);
v___x_2290_ = lean_unsigned_to_nat(3u);
v___x_2291_ = lean_mk_empty_array_with_capacity(v___x_2290_);
v___x_2292_ = lean_array_push(v___x_2291_, v___x_2280_);
v___x_2293_ = lean_array_push(v___x_2292_, v___x_2282_);
v___x_2294_ = lean_array_push(v___x_2293_, v___x_2289_);
v___x_2295_ = l_Lasm_JS_Value_callMethod___redArg(v_a_2277_, v___x_2278_, v___x_2294_, v___x_2270_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2302_ == 0)
{
lean_object* v_unused_2303_; 
v_unused_2303_ = lean_ctor_get(v___x_2295_, 0);
lean_dec(v_unused_2303_);
v___x_2297_ = v___x_2295_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_dec(v___x_2295_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 0, v_a_2272_);
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_a_2272_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2311_; 
lean_dec(v_a_2272_);
v_a_2304_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2306_ = v___x_2295_;
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2295_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2304_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_dec(v_a_2272_);
v_a_2320_ = lean_ctor_get(v___x_2276_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2276_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2276_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2276_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
lean_dec(v_a_2272_);
lean_dec_ref(v___f_2269_);
v_a_2328_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v___x_2273_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2273_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_a_2328_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
}
else
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
lean_dec_ref(v___f_2269_);
v_a_2336_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2271_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2271_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2341_; 
if (v_isShared_2339_ == 0)
{
v___x_2341_ = v___x_2338_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2336_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_2344_, lean_object* v_f_2345_, lean_object* v_a_2346_){
_start:
{
lean_object* v_res_2347_; 
v_res_2347_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(v_inst_2344_, v_f_2345_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(lean_object* v_Env_2348_, lean_object* v_inst_2349_, lean_object* v_f_2350_){
_start:
{
lean_object* v___x_2352_; 
v___x_2352_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(v_inst_2349_, v_f_2350_);
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___boxed(lean_object* v_Env_2353_, lean_object* v_inst_2354_, lean_object* v_f_2355_, lean_object* v_a_2356_){
_start:
{
lean_object* v_res_2357_; 
v_res_2357_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(v_Env_2353_, v_inst_2354_, v_f_2355_);
return v_res_2357_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerTestHandler(void){
_start:
{
lean_object* v___f_2359_; lean_object* v___x_2360_; uint8_t v___x_2361_; lean_object* v___x_2362_; 
v___f_2359_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_2360_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ExportedHandlerTestHandler", 45, 45);
v___x_2361_ = 0;
v___x_2362_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2362_, 0, v___f_2359_);
lean_ctor_set(v___x_2362_, 1, v___x_2360_);
lean_ctor_set_uint8(v___x_2362_, sizeof(void*)*2, v___x_2361_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1(lean_object* v_f_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v___f_2366_, lean_object* v_x_2367_){
_start:
{
if (lean_obj_tag(v_x_2367_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2377_; 
lean_dec_ref(v___f_2366_);
lean_dec(v_a_2365_);
lean_dec_ref(v_f_2363_);
v_a_2369_ = lean_ctor_get(v_x_2367_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_x_2367_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2371_ = v_x_2367_;
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v_x_2367_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2377_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2369_);
v___x_2374_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
return v___x_2375_;
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2379_; uint8_t v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_a_2378_ = lean_ctor_get(v_x_2367_, 0);
lean_inc(v_a_2378_);
lean_dec_ref_known(v_x_2367_, 1);
v___x_2379_ = lean_unsigned_to_nat(0u);
v___x_2380_ = 0;
v___x_2381_ = lean_apply_4(v_f_2363_, v_a_2364_, v_a_2365_, v_a_2378_, lean_box(0));
v___x_2382_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2379_, v___x_2380_, v___x_2381_, v___f_2366_);
return v___x_2382_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v___f_2386_, lean_object* v_x_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1(v_f_2383_, v_a_2384_, v_a_2385_, v___f_2386_, v_x_2387_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0(lean_object* v_f_2390_, lean_object* v_a_2391_, lean_object* v___f_2392_, lean_object* v___x_2393_, lean_object* v_args_2394_, lean_object* v_x_2395_){
_start:
{
if (lean_obj_tag(v_x_2395_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2405_; 
lean_dec_ref(v___x_2393_);
lean_dec_ref(v___f_2392_);
lean_dec_ref(v_f_2390_);
v_a_2397_ = lean_ctor_get(v_x_2395_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v_x_2395_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2399_ = v_x_2395_;
v_isShared_2400_ = v_isSharedCheck_2405_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v_x_2395_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2405_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2402_; 
if (v_isShared_2400_ == 0)
{
v___x_2402_ = v___x_2399_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2397_);
v___x_2402_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
lean_object* v___x_2403_; 
v___x_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
return v___x_2403_;
}
}
}
else
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2427_; 
v_a_2406_ = lean_ctor_get(v_x_2395_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v_x_2395_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2408_ = v_x_2395_;
v_isShared_2409_ = v_isSharedCheck_2427_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v_x_2395_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2427_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___f_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; uint8_t v___x_2413_; lean_object* v_val_2415_; lean_object* v___x_2418_; 
v___f_2410_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_2410_, 0, v_f_2390_);
lean_closure_set(v___f_2410_, 1, v_a_2391_);
lean_closure_set(v___f_2410_, 2, v_a_2406_);
lean_closure_set(v___f_2410_, 3, v___f_2392_);
v___x_2411_ = lean_unsigned_to_nat(2u);
v___x_2412_ = lean_unsigned_to_nat(0u);
v___x_2413_ = 0;
v___x_2418_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2393_, v_args_2394_, v___x_2411_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_object* v_a_2419_; lean_object* v___x_2421_; 
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
lean_inc(v_a_2419_);
lean_dec_ref_known(v___x_2418_, 1);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v_a_2419_);
v___x_2421_ = v___x_2408_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v_a_2419_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
v_val_2415_ = v___x_2421_;
goto v___jp_2414_;
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; 
v_a_2423_ = lean_ctor_get(v___x_2418_, 0);
lean_inc(v_a_2423_);
lean_dec_ref_known(v___x_2418_, 1);
if (v_isShared_2409_ == 0)
{
lean_ctor_set_tag(v___x_2408_, 0);
lean_ctor_set(v___x_2408_, 0, v_a_2423_);
v___x_2425_ = v___x_2408_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
v_val_2415_ = v___x_2425_;
goto v___jp_2414_;
}
}
v___jp_2414_:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2416_, 0, v_val_2415_);
v___x_2417_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2412_, v___x_2413_, v___x_2416_, v___f_2410_);
return v___x_2417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0___boxed(lean_object* v_f_2428_, lean_object* v_a_2429_, lean_object* v___f_2430_, lean_object* v___x_2431_, lean_object* v_args_2432_, lean_object* v_x_2433_, lean_object* v___y_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0(v_f_2428_, v_a_2429_, v___f_2430_, v___x_2431_, v_args_2432_, v_x_2433_);
lean_dec_ref(v_args_2432_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3(lean_object* v_f_2436_, lean_object* v___f_2437_, lean_object* v___x_2438_, lean_object* v_args_2439_, lean_object* v_inst_2440_, lean_object* v___x_2441_, lean_object* v_x_2442_){
_start:
{
if (lean_obj_tag(v_x_2442_) == 0)
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2452_; 
lean_dec_ref(v___x_2441_);
lean_dec_ref(v_inst_2440_);
lean_dec_ref(v_args_2439_);
lean_dec_ref(v___x_2438_);
lean_dec_ref(v___f_2437_);
lean_dec_ref(v_f_2436_);
v_a_2444_ = lean_ctor_get(v_x_2442_, 0);
v_isSharedCheck_2452_ = !lean_is_exclusive(v_x_2442_);
if (v_isSharedCheck_2452_ == 0)
{
v___x_2446_ = v_x_2442_;
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v_x_2442_);
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
lean_object* v_a_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2475_; 
v_a_2453_ = lean_ctor_get(v_x_2442_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v_x_2442_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2455_ = v_x_2442_;
v_isShared_2456_ = v_isSharedCheck_2475_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_a_2453_);
lean_dec(v_x_2442_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2475_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___f_2457_; lean_object* v___f_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; lean_object* v_val_2463_; lean_object* v___x_2466_; 
lean_inc_ref(v_args_2439_);
v___f_2457_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2457_, 0, v_f_2436_);
lean_closure_set(v___f_2457_, 1, v_a_2453_);
lean_closure_set(v___f_2457_, 2, v___f_2437_);
lean_closure_set(v___f_2457_, 3, v___x_2438_);
lean_closure_set(v___f_2457_, 4, v_args_2439_);
v___f_2458_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2458_, 0, v___f_2457_);
lean_closure_set(v___f_2458_, 1, v_inst_2440_);
v___x_2459_ = lean_unsigned_to_nat(1u);
v___x_2460_ = lean_unsigned_to_nat(0u);
v___x_2461_ = 0;
v___x_2466_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2441_, v_args_2439_, v___x_2459_);
lean_dec_ref(v_args_2439_);
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_object* v_a_2467_; lean_object* v___x_2469_; 
v_a_2467_ = lean_ctor_get(v___x_2466_, 0);
lean_inc(v_a_2467_);
lean_dec_ref_known(v___x_2466_, 1);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 0, v_a_2467_);
v___x_2469_ = v___x_2455_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2467_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
v_val_2463_ = v___x_2469_;
goto v___jp_2462_;
}
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; 
v_a_2471_ = lean_ctor_get(v___x_2466_, 0);
lean_inc(v_a_2471_);
lean_dec_ref_known(v___x_2466_, 1);
if (v_isShared_2456_ == 0)
{
lean_ctor_set_tag(v___x_2455_, 0);
lean_ctor_set(v___x_2455_, 0, v_a_2471_);
v___x_2473_ = v___x_2455_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2471_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
v_val_2463_ = v___x_2473_;
goto v___jp_2462_;
}
}
v___jp_2462_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v_val_2463_);
v___x_2465_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2460_, v___x_2461_, v___x_2464_, v___f_2458_);
return v___x_2465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3___boxed(lean_object* v_f_2476_, lean_object* v___f_2477_, lean_object* v___x_2478_, lean_object* v_args_2479_, lean_object* v_inst_2480_, lean_object* v___x_2481_, lean_object* v_x_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3(v_f_2476_, v___f_2477_, v___x_2478_, v_args_2479_, v_inst_2480_, v___x_2481_, v_x_2482_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2(lean_object* v_f_2485_, lean_object* v___f_2486_, lean_object* v___x_2487_, lean_object* v_inst_2488_, lean_object* v___x_2489_, lean_object* v___x_2490_, lean_object* v_args_2491_){
_start:
{
lean_object* v___f_2493_; lean_object* v___x_2494_; uint8_t v___x_2495_; lean_object* v_val_2497_; lean_object* v___x_2500_; 
lean_inc_ref(v_args_2491_);
v___f_2493_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_2493_, 0, v_f_2485_);
lean_closure_set(v___f_2493_, 1, v___f_2486_);
lean_closure_set(v___f_2493_, 2, v___x_2487_);
lean_closure_set(v___f_2493_, 3, v_args_2491_);
lean_closure_set(v___f_2493_, 4, v_inst_2488_);
lean_closure_set(v___f_2493_, 5, v___x_2489_);
v___x_2494_ = lean_unsigned_to_nat(0u);
v___x_2495_ = 0;
v___x_2500_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2490_, v_args_2491_, v___x_2494_);
lean_dec_ref(v_args_2491_);
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2508_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2503_ = v___x_2500_;
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2500_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
lean_ctor_set_tag(v___x_2503_, 1);
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_a_2501_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
v_val_2497_ = v___x_2506_;
goto v___jp_2496_;
}
}
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2516_; 
v_a_2509_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2511_ = v___x_2500_;
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2500_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2514_; 
if (v_isShared_2512_ == 0)
{
lean_ctor_set_tag(v___x_2511_, 0);
v___x_2514_ = v___x_2511_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_a_2509_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
v_val_2497_ = v___x_2514_;
goto v___jp_2496_;
}
}
}
v___jp_2496_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2498_, 0, v_val_2497_);
v___x_2499_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2494_, v___x_2495_, v___x_2498_, v___f_2493_);
return v___x_2499_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_2517_, lean_object* v___f_2518_, lean_object* v___x_2519_, lean_object* v_inst_2520_, lean_object* v___x_2521_, lean_object* v___x_2522_, lean_object* v_args_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2(v_f_2517_, v___f_2518_, v___x_2519_, v_inst_2520_, v___x_2521_, v___x_2522_, v_args_2523_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg(lean_object* v_inst_2526_, lean_object* v_f_2527_){
_start:
{
lean_object* v___f_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___f_2533_; lean_object* v___f_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___f_2529_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___x_2530_ = l_Lasm_JS_Cloudflare_instFromJSTestController;
v___x_2531_ = l_Lasm_JS_instFromJSData;
v___x_2532_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_2533_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2___boxed), 8, 6);
lean_closure_set(v___f_2533_, 0, v_f_2527_);
lean_closure_set(v___f_2533_, 1, v___f_2529_);
lean_closure_set(v___f_2533_, 2, v___x_2532_);
lean_closure_set(v___f_2533_, 3, v_inst_2526_);
lean_closure_set(v___f_2533_, 4, v___x_2531_);
lean_closure_set(v___f_2533_, 5, v___x_2530_);
v___f_2534_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2535_ = l_Lasm_JS_instFromJSValue;
v___x_2536_ = l_Lasm_JS_Function_ofFn(v___f_2533_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; lean_object* v___x_2538_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v___x_2538_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_object* v_a_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
lean_inc(v_a_2539_);
lean_dec_ref_known(v___x_2538_, 1);
v___x_2540_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2541_ = l_Lasm_JS_Value_get___redArg(v___f_2534_, v_a_2539_, v___x_2540_, v___x_2535_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___y_2550_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; uint8_t v___x_2581_; 
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
lean_inc(v_a_2542_);
lean_dec_ref_known(v___x_2541_, 1);
v___x_2543_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2544_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2537_);
v___x_2545_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2545_, 0, v_a_2537_);
lean_ctor_set(v___x_2545_, 1, v___x_2544_);
v___x_2546_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2547_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2547_, 0, v___x_2546_);
v___x_2548_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2577_ = lean_unsigned_to_nat(3u);
v___x_2578_ = lean_nat_to_int(v___x_2577_);
v___x_2579_ = lean_nat_abs(v___x_2578_);
v___x_2580_ = lean_cstr_to_nat("9007199254740991");
v___x_2581_ = lean_nat_dec_le(v___x_2579_, v___x_2580_);
lean_dec(v___x_2579_);
if (v___x_2581_ == 0)
{
lean_object* v___x_2582_; 
v___x_2582_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2578_);
v___y_2550_ = v___x_2582_;
goto v___jp_2549_;
}
else
{
double v___x_2583_; lean_object* v___x_2584_; 
v___x_2583_ = l_Float_ofInt(v___x_2578_);
lean_dec(v___x_2578_);
v___x_2584_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2584_, 0, v___x_2583_);
v___y_2550_ = v___x_2584_;
goto v___jp_2549_;
}
v___jp_2549_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2548_);
lean_ctor_set(v___x_2551_, 1, v___y_2550_);
v___x_2552_ = lean_box(0);
v___x_2553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2551_);
lean_ctor_set(v___x_2553_, 1, v___x_2552_);
v___x_2554_ = l_Lasm_JS_obj(v___x_2553_);
v___x_2555_ = lean_unsigned_to_nat(3u);
v___x_2556_ = lean_mk_empty_array_with_capacity(v___x_2555_);
v___x_2557_ = lean_array_push(v___x_2556_, v___x_2545_);
v___x_2558_ = lean_array_push(v___x_2557_, v___x_2547_);
v___x_2559_ = lean_array_push(v___x_2558_, v___x_2554_);
v___x_2560_ = l_Lasm_JS_Value_callMethod___redArg(v_a_2542_, v___x_2543_, v___x_2559_, v___x_2535_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2567_ == 0)
{
lean_object* v_unused_2568_; 
v_unused_2568_ = lean_ctor_get(v___x_2560_, 0);
lean_dec(v_unused_2568_);
v___x_2562_ = v___x_2560_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_dec(v___x_2560_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 0, v_a_2537_);
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2537_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
lean_dec(v_a_2537_);
v_a_2569_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2560_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2560_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
}
else
{
lean_object* v_a_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2592_; 
lean_dec(v_a_2537_);
v_a_2585_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2587_ = v___x_2541_;
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_a_2585_);
lean_dec(v___x_2541_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2590_; 
if (v_isShared_2588_ == 0)
{
v___x_2590_ = v___x_2587_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_a_2585_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec(v_a_2537_);
lean_dec_ref(v___f_2534_);
v_a_2593_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2538_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2538_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_dec_ref(v___f_2534_);
v_a_2601_ = lean_ctor_get(v___x_2536_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2536_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2536_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___boxed(lean_object* v_inst_2609_, lean_object* v_f_2610_, lean_object* v_a_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg(v_inst_2609_, v_f_2610_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn(lean_object* v_Env_2613_, lean_object* v_inst_2614_, lean_object* v_f_2615_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg(v_inst_2614_, v_f_2615_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___boxed(lean_object* v_Env_2618_, lean_object* v_inst_2619_, lean_object* v_f_2620_, lean_object* v_a_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn(v_Env_2618_, v_inst_2619_, v_f_2620_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_2623_, lean_object* v___x_2624_, lean_object* v_inst_2625_, lean_object* v___x_2626_, lean_object* v_f_2627_, lean_object* v_args_2628_){
_start:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2630_ = lean_unsigned_to_nat(0u);
v___x_2631_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2623_, v_args_2628_, v___x_2630_);
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_object* v_a_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v_a_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_a_2632_);
lean_dec_ref_known(v___x_2631_, 1);
v___x_2633_ = lean_unsigned_to_nat(1u);
v___x_2634_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2624_, v_args_2628_, v___x_2633_);
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; lean_object* v___x_2636_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_a_2635_);
lean_dec_ref_known(v___x_2634_, 1);
v___x_2636_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_2625_, v_a_2635_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_a_2637_);
lean_dec_ref_known(v___x_2636_, 1);
v___x_2638_ = lean_unsigned_to_nat(2u);
v___x_2639_ = l_Lasm_JS_Web_Support_arg___redArg(v___x_2626_, v_args_2628_, v___x_2638_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2641_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2640_);
lean_dec_ref_known(v___x_2639_, 1);
v___x_2641_ = lean_apply_4(v_f_2627_, v_a_2632_, v_a_2637_, v_a_2640_, lean_box(0));
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2649_; 
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2649_ == 0)
{
lean_object* v_unused_2650_; 
v_unused_2650_ = lean_ctor_get(v___x_2641_, 0);
lean_dec(v_unused_2650_);
v___x_2643_ = v___x_2641_;
v_isShared_2644_ = v_isSharedCheck_2649_;
goto v_resetjp_2642_;
}
else
{
lean_dec(v___x_2641_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2649_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2645_; lean_object* v___x_2647_; 
v___x_2645_ = lean_box(0);
if (v_isShared_2644_ == 0)
{
lean_ctor_set(v___x_2643_, 0, v___x_2645_);
v___x_2647_ = v___x_2643_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v___x_2645_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2658_; 
v_a_2651_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2653_ = v___x_2641_;
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_dec(v___x_2641_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2658_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2656_; 
if (v_isShared_2654_ == 0)
{
v___x_2656_ = v___x_2653_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2651_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
return v___x_2656_;
}
}
}
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
lean_dec(v_a_2637_);
lean_dec(v_a_2632_);
lean_dec_ref(v_f_2627_);
v_a_2659_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2639_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2639_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
lean_dec(v_a_2632_);
lean_dec_ref(v_f_2627_);
lean_dec_ref(v___x_2626_);
v_a_2667_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2636_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2636_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
}
else
{
lean_dec(v_a_2632_);
lean_dec_ref(v_f_2627_);
lean_dec_ref(v___x_2626_);
lean_dec_ref(v_inst_2625_);
return v___x_2634_;
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
lean_dec_ref(v_f_2627_);
lean_dec_ref(v___x_2626_);
lean_dec_ref(v_inst_2625_);
lean_dec_ref(v___x_2624_);
v_a_2675_ = lean_ctor_get(v___x_2631_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2631_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2631_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2631_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_2683_, lean_object* v___x_2684_, lean_object* v_inst_2685_, lean_object* v___x_2686_, lean_object* v_f_2687_, lean_object* v_args_2688_, lean_object* v___y_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0(v___x_2683_, v___x_2684_, v_inst_2685_, v___x_2686_, v_f_2687_, v_args_2688_);
lean_dec_ref(v_args_2688_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg(lean_object* v_inst_2691_, lean_object* v_f_2692_){
_start:
{
lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___f_2697_; lean_object* v___f_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2694_ = l_Lasm_JS_Cloudflare_instFromJSTestController;
v___x_2695_ = l_Lasm_JS_instFromJSData;
v___x_2696_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_2697_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2697_, 0, v___x_2694_);
lean_closure_set(v___f_2697_, 1, v___x_2695_);
lean_closure_set(v___f_2697_, 2, v_inst_2691_);
lean_closure_set(v___f_2697_, 3, v___x_2696_);
lean_closure_set(v___f_2697_, 4, v_f_2692_);
v___f_2698_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2699_ = l_Lasm_JS_instFromJSValue;
v___x_2700_ = l_Lasm_JS_Function_ofSyncFn(v___f_2697_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2702_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2701_);
lean_dec_ref_known(v___x_2700_, 1);
v___x_2702_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v_a_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; 
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref_known(v___x_2702_, 1);
v___x_2704_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2705_ = l_Lasm_JS_Value_get___redArg(v___f_2698_, v_a_2703_, v___x_2704_, v___x_2699_);
if (lean_obj_tag(v___x_2705_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___y_2714_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; uint8_t v___x_2745_; 
v_a_2706_ = lean_ctor_get(v___x_2705_, 0);
lean_inc(v_a_2706_);
lean_dec_ref_known(v___x_2705_, 1);
v___x_2707_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2708_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2701_);
v___x_2709_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2709_, 0, v_a_2701_);
lean_ctor_set(v___x_2709_, 1, v___x_2708_);
v___x_2710_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2711_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2710_);
v___x_2712_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2741_ = lean_unsigned_to_nat(3u);
v___x_2742_ = lean_nat_to_int(v___x_2741_);
v___x_2743_ = lean_nat_abs(v___x_2742_);
v___x_2744_ = lean_cstr_to_nat("9007199254740991");
v___x_2745_ = lean_nat_dec_le(v___x_2743_, v___x_2744_);
lean_dec(v___x_2743_);
if (v___x_2745_ == 0)
{
lean_object* v___x_2746_; 
v___x_2746_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2742_);
v___y_2714_ = v___x_2746_;
goto v___jp_2713_;
}
else
{
double v___x_2747_; lean_object* v___x_2748_; 
v___x_2747_ = l_Float_ofInt(v___x_2742_);
lean_dec(v___x_2742_);
v___x_2748_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2748_, 0, v___x_2747_);
v___y_2714_ = v___x_2748_;
goto v___jp_2713_;
}
v___jp_2713_:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2712_);
lean_ctor_set(v___x_2715_, 1, v___y_2714_);
v___x_2716_ = lean_box(0);
v___x_2717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2715_);
lean_ctor_set(v___x_2717_, 1, v___x_2716_);
v___x_2718_ = l_Lasm_JS_obj(v___x_2717_);
v___x_2719_ = lean_unsigned_to_nat(3u);
v___x_2720_ = lean_mk_empty_array_with_capacity(v___x_2719_);
v___x_2721_ = lean_array_push(v___x_2720_, v___x_2709_);
v___x_2722_ = lean_array_push(v___x_2721_, v___x_2711_);
v___x_2723_ = lean_array_push(v___x_2722_, v___x_2718_);
v___x_2724_ = l_Lasm_JS_Value_callMethod___redArg(v_a_2706_, v___x_2707_, v___x_2723_, v___x_2699_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2731_ == 0)
{
lean_object* v_unused_2732_; 
v_unused_2732_ = lean_ctor_get(v___x_2724_, 0);
lean_dec(v_unused_2732_);
v___x_2726_ = v___x_2724_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_dec(v___x_2724_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 0, v_a_2701_);
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2701_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2740_; 
lean_dec(v_a_2701_);
v_a_2733_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2740_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2740_ == 0)
{
v___x_2735_ = v___x_2724_;
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2724_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2738_; 
if (v_isShared_2736_ == 0)
{
v___x_2738_ = v___x_2735_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v_a_2733_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
}
}
else
{
lean_object* v_a_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2756_; 
lean_dec(v_a_2701_);
v_a_2749_ = lean_ctor_get(v___x_2705_, 0);
v_isSharedCheck_2756_ = !lean_is_exclusive(v___x_2705_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2751_ = v___x_2705_;
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_a_2749_);
lean_dec(v___x_2705_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2754_; 
if (v_isShared_2752_ == 0)
{
v___x_2754_ = v___x_2751_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_a_2749_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
}
else
{
lean_object* v_a_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2764_; 
lean_dec(v_a_2701_);
lean_dec_ref(v___f_2698_);
v_a_2757_ = lean_ctor_get(v___x_2702_, 0);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2759_ = v___x_2702_;
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_a_2757_);
lean_dec(v___x_2702_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2762_; 
if (v_isShared_2760_ == 0)
{
v___x_2762_ = v___x_2759_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_a_2757_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
}
else
{
lean_object* v_a_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2772_; 
lean_dec_ref(v___f_2698_);
v_a_2765_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2772_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2772_ == 0)
{
v___x_2767_ = v___x_2700_;
v_isShared_2768_ = v_isSharedCheck_2772_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_a_2765_);
lean_dec(v___x_2700_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2772_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2770_; 
if (v_isShared_2768_ == 0)
{
v___x_2770_ = v___x_2767_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v_a_2765_);
v___x_2770_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
return v___x_2770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_2773_, lean_object* v_f_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg(v_inst_2773_, v_f_2774_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn(lean_object* v_Env_2777_, lean_object* v_inst_2778_, lean_object* v_f_2779_){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg(v_inst_2778_, v_f_2779_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___boxed(lean_object* v_Env_2782_, lean_object* v_inst_2783_, lean_object* v_f_2784_, lean_object* v_a_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn(v_Env_2782_, v_inst_2783_, v_f_2784_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorIdx(lean_object* v_x_2787_){
_start:
{
if (lean_obj_tag(v_x_2787_) == 0)
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_unsigned_to_nat(0u);
return v___x_2788_;
}
else
{
lean_object* v___x_2789_; 
v___x_2789_ = lean_unsigned_to_nat(1u);
return v___x_2789_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorIdx___boxed(lean_object* v_x_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorIdx(v_x_2790_);
lean_dec_ref(v_x_2790_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(lean_object* v_t_2792_, lean_object* v_k_2793_){
_start:
{
if (lean_obj_tag(v_t_2792_) == 0)
{
lean_object* v_value_2794_; lean_object* v___x_2795_; 
v_value_2794_ = lean_ctor_get(v_t_2792_, 0);
lean_inc_ref(v_value_2794_);
lean_dec_ref_known(v_t_2792_, 1);
v___x_2795_ = lean_apply_1(v_k_2793_, v_value_2794_);
return v___x_2795_;
}
else
{
double v_value_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v_value_2796_ = lean_ctor_get_float(v_t_2792_, 0);
lean_dec_ref_known(v_t_2792_, 0);
v___x_2797_ = lean_box_float(v_value_2796_);
v___x_2798_ = lean_apply_1(v_k_2793_, v___x_2797_);
return v___x_2798_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim(lean_object* v_motive_2799_, lean_object* v_ctorIdx_2800_, lean_object* v_t_2801_, lean_object* v_h_2802_, lean_object* v_k_2803_){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2801_, v_k_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___boxed(lean_object* v_motive_2805_, lean_object* v_ctorIdx_2806_, lean_object* v_t_2807_, lean_object* v_h_2808_, lean_object* v_k_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim(v_motive_2805_, v_ctorIdx_2806_, v_t_2807_, v_h_2808_, v_k_2809_);
lean_dec(v_ctorIdx_2806_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_domString_elim___redArg(lean_object* v_t_2811_, lean_object* v_domString_2812_){
_start:
{
lean_object* v___x_2813_; 
v___x_2813_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2811_, v_domString_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_domString_elim(lean_object* v_motive_2814_, lean_object* v_t_2815_, lean_object* v_h_2816_, lean_object* v_domString_2817_){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2815_, v_domString_2817_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_double_elim___redArg(lean_object* v_t_2819_, lean_object* v_double_2820_){
_start:
{
lean_object* v___x_2821_; 
v___x_2821_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2819_, v_double_2820_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_double_elim(lean_object* v_motive_2822_, lean_object* v_t_2823_, lean_object* v_h_2824_, lean_object* v_double_2825_){
_start:
{
lean_object* v___x_2826_; 
v___x_2826_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2823_, v_double_2825_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrDouble___lam__0(lean_object* v_x_2827_){
_start:
{
if (lean_obj_tag(v_x_2827_) == 0)
{
lean_object* v_value_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
v_value_2828_ = lean_ctor_get(v_x_2827_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v_x_2827_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v_x_2827_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_value_2828_);
lean_dec(v_x_2827_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
lean_ctor_set_tag(v___x_2830_, 4);
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_value_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
else
{
double v_value_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
v_value_2836_ = lean_ctor_get_float(v_x_2827_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_x_2827_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2838_ = v_x_2827_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_dec(v_x_2827_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
lean_ctor_set_tag(v___x_2838_, 3);
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2842_, 0, v_value_2836_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrDouble___lam__0(lean_object* v_value_2845_){
_start:
{
lean_object* v___x_2846_; 
v___x_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2846_, 0, v_value_2845_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0(double v_value_2848_){
_start:
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_2849_, 0, v_value_2848_);
return v___x_2849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object* v_value_2850_){
_start:
{
double v_value_boxed_2851_; lean_object* v_res_2852_; 
v_value_boxed_2851_ = lean_unbox_float(v_value_2850_);
lean_dec_ref(v_value_2850_);
v_res_2852_ = l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0(v_value_boxed_2851_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble___lam__0(lean_object* v_x_2854_){
_start:
{
switch(lean_obj_tag(v_x_2854_))
{
case 4:
{
lean_object* v_s_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2863_; 
v_s_2855_ = lean_ctor_get(v_x_2854_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v_x_2854_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2857_ = v_x_2854_;
v_isShared_2858_ = v_isSharedCheck_2863_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_s_2855_);
lean_dec(v_x_2854_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2863_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2860_; 
if (v_isShared_2858_ == 0)
{
lean_ctor_set_tag(v___x_2857_, 0);
v___x_2860_ = v___x_2857_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_s_2855_);
v___x_2860_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
lean_object* v___x_2861_; 
v___x_2861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2860_);
return v___x_2861_;
}
}
}
case 3:
{
double v_n_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2872_; 
v_n_2864_ = lean_ctor_get_float(v_x_2854_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v_x_2854_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2866_ = v_x_2854_;
v_isShared_2867_ = v_isSharedCheck_2872_;
goto v_resetjp_2865_;
}
else
{
lean_dec(v_x_2854_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2872_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2869_; 
if (v_isShared_2867_ == 0)
{
lean_ctor_set_tag(v___x_2866_, 1);
v___x_2869_ = v___x_2866_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2871_, 0, v_n_2864_);
v___x_2869_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
lean_object* v___x_2870_; 
v___x_2870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2870_, 0, v___x_2869_);
return v___x_2870_;
}
}
}
default: 
{
lean_object* v___x_2873_; lean_object* v___x_2874_; 
lean_dec(v_x_2854_);
v___x_2873_ = lean_mk_string_unchecked("", 0, 0);
v___x_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
return v___x_2874_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble(void){
_start:
{
lean_object* v___f_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; lean_object* v___x_2878_; 
v___f_2875_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble___lam__0), 1, 0);
v___x_2876_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.DOMStringOrDouble", 36, 36);
v___x_2877_ = 0;
v___x_2878_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2878_, 0, v___f_2875_);
lean_ctor_set(v___x_2878_, 1, v___x_2876_);
lean_ctor_set_uint8(v___x_2878_, sizeof(void*)*2, v___x_2877_);
return v___x_2878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException___lam__0(lean_object* v___f_2879_, lean_object* v_d_2880_){
_start:
{
lean_object* v_code_2881_; lean_object* v_name_2882_; lean_object* v_message_2883_; lean_object* v_stack_2884_; lean_object* v___x_2885_; lean_object* v___y_2887_; 
v_code_2881_ = lean_ctor_get(v_d_2880_, 0);
lean_inc_ref(v_code_2881_);
v_name_2882_ = lean_ctor_get(v_d_2880_, 1);
lean_inc(v_name_2882_);
v_message_2883_ = lean_ctor_get(v_d_2880_, 2);
lean_inc(v_message_2883_);
v_stack_2884_ = lean_ctor_get(v_d_2880_, 3);
lean_inc(v_stack_2884_);
lean_dec_ref(v_d_2880_);
v___x_2885_ = lean_mk_string_unchecked("code", 4, 4);
if (lean_obj_tag(v_code_2881_) == 0)
{
lean_object* v_value_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2912_; 
v_value_2905_ = lean_ctor_get(v_code_2881_, 0);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_code_2881_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2907_ = v_code_2881_;
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_value_2905_);
lean_dec(v_code_2881_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
lean_object* v___x_2910_; 
if (v_isShared_2908_ == 0)
{
lean_ctor_set_tag(v___x_2907_, 4);
v___x_2910_ = v___x_2907_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_value_2905_);
v___x_2910_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
v___y_2887_ = v___x_2910_;
goto v___jp_2886_;
}
}
}
else
{
double v_value_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2920_; 
v_value_2913_ = lean_ctor_get_float(v_code_2881_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v_code_2881_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2915_ = v_code_2881_;
v_isShared_2916_ = v_isSharedCheck_2920_;
goto v_resetjp_2914_;
}
else
{
lean_dec(v_code_2881_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2920_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2918_; 
if (v_isShared_2916_ == 0)
{
lean_ctor_set_tag(v___x_2915_, 3);
v___x_2918_ = v___x_2915_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2919_, 0, v_value_2913_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
v___y_2887_ = v___x_2918_;
goto v___jp_2886_;
}
}
}
v___jp_2886_:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2885_);
lean_ctor_set(v___x_2888_, 1, v___y_2887_);
v___x_2889_ = lean_mk_string_unchecked("name", 4, 4);
lean_inc_ref_n(v___f_2879_, 2);
v___x_2890_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2879_, v_name_2882_);
v___x_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2889_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
v___x_2892_ = lean_mk_string_unchecked("message", 7, 7);
v___x_2893_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2879_, v_message_2883_);
v___x_2894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2892_);
lean_ctor_set(v___x_2894_, 1, v___x_2893_);
v___x_2895_ = lean_mk_string_unchecked("stack", 5, 5);
v___x_2896_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2879_, v_stack_2884_);
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2895_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
v___x_2898_ = lean_unsigned_to_nat(4u);
v___x_2899_ = lean_mk_empty_array_with_capacity(v___x_2898_);
v___x_2900_ = lean_array_push(v___x_2899_, v___x_2888_);
v___x_2901_ = lean_array_push(v___x_2900_, v___x_2891_);
v___x_2902_ = lean_array_push(v___x_2901_, v___x_2894_);
v___x_2903_ = lean_array_push(v___x_2902_, v___x_2897_);
v___x_2904_ = l_Lasm_JS_Web_Support_fields(v___x_2903_);
lean_dec_ref(v___x_2903_);
return v___x_2904_;
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException(void){
_start:
{
lean_object* v___f_2921_; lean_object* v___f_2922_; 
v___f_2921_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_2922_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException___lam__0), 2, 1);
lean_closure_set(v___f_2922_, 0, v___f_2921_);
return v___f_2922_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSPagesFunction(void){
_start:
{
lean_object* v___f_2924_; lean_object* v___x_2925_; uint8_t v___x_2926_; lean_object* v___x_2927_; 
v___f_2924_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_2925_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.PagesFunction", 32, 32);
v___x_2926_ = 0;
v___x_2927_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2927_, 0, v___f_2924_);
lean_ctor_set(v___x_2927_, 1, v___x_2925_);
lean_ctor_set_uint8(v___x_2927_, sizeof(void*)*2, v___x_2926_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1(lean_object* v_f_2928_, lean_object* v___f_2929_, lean_object* v_x_2930_){
_start:
{
if (lean_obj_tag(v_x_2930_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2940_; 
lean_dec_ref(v___f_2929_);
lean_dec_ref(v_f_2928_);
v_a_2932_ = lean_ctor_get(v_x_2930_, 0);
v_isSharedCheck_2940_ = !lean_is_exclusive(v_x_2930_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2934_ = v_x_2930_;
v_isShared_2935_ = v_isSharedCheck_2940_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v_x_2930_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2940_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
lean_object* v___x_2938_; 
v___x_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
return v___x_2938_;
}
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2942_; uint8_t v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v_a_2941_ = lean_ctor_get(v_x_2930_, 0);
lean_inc(v_a_2941_);
lean_dec_ref_known(v_x_2930_, 1);
v___x_2942_ = lean_unsigned_to_nat(0u);
v___x_2943_ = 0;
v___x_2944_ = lean_apply_2(v_f_2928_, v_a_2941_, lean_box(0));
v___x_2945_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2942_, v___x_2943_, v___x_2944_, v___f_2929_);
return v___x_2945_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1___boxed(lean_object* v_f_2946_, lean_object* v___f_2947_, lean_object* v_x_2948_, lean_object* v___y_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1(v_f_2946_, v___f_2947_, v_x_2948_);
return v_res_2950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0(lean_object* v___f_2951_, lean_object* v_args_2952_){
_start:
{
lean_object* v___x_2954_; uint8_t v___x_2955_; lean_object* v_val_2957_; lean_object* v___x_2960_; 
v___x_2954_ = lean_unsigned_to_nat(0u);
v___x_2955_ = 0;
v___x_2960_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_2952_, v___x_2954_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v_a_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2968_; 
v_a_2961_ = lean_ctor_get(v___x_2960_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2963_ = v___x_2960_;
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_a_2961_);
lean_dec(v___x_2960_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set_tag(v___x_2963_, 1);
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2961_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
v_val_2957_ = v___x_2966_;
goto v___jp_2956_;
}
}
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
v_a_2969_ = lean_ctor_get(v___x_2960_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2971_ = v___x_2960_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2960_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
lean_ctor_set_tag(v___x_2971_, 0);
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
v_val_2957_ = v___x_2974_;
goto v___jp_2956_;
}
}
}
v___jp_2956_:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2958_, 0, v_val_2957_);
v___x_2959_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2954_, v___x_2955_, v___x_2958_, v___f_2951_);
return v___x_2959_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0___boxed(lean_object* v___f_2977_, lean_object* v_args_2978_, lean_object* v___y_2979_){
_start:
{
lean_object* v_res_2980_; 
v_res_2980_ = l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0(v___f_2977_, v_args_2978_);
lean_dec_ref(v_args_2978_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn(lean_object* v_f_2981_){
_start:
{
lean_object* v___f_2983_; lean_object* v___f_2984_; lean_object* v___f_2985_; lean_object* v___x_2986_; 
v___f_2983_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___f_2984_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2984_, 0, v_f_2981_);
lean_closure_set(v___f_2984_, 1, v___f_2983_);
v___f_2985_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2985_, 0, v___f_2984_);
v___x_2986_ = l_Lasm_JS_Function_ofFn(v___f_2985_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; lean_object* v___x_2988_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2987_);
lean_dec_ref_known(v___x_2986_, 1);
v___x_2988_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2988_, 1);
v___x_2990_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2991_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2989_, v___x_2990_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___y_3000_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; uint8_t v___x_3031_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
v___x_2993_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2994_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2987_);
v___x_2995_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2995_, 0, v_a_2987_);
lean_ctor_set(v___x_2995_, 1, v___x_2994_);
v___x_2996_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2997_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2996_);
v___x_2998_ = lean_mk_string_unchecked("value", 5, 5);
v___x_3027_ = lean_unsigned_to_nat(1u);
v___x_3028_ = lean_nat_to_int(v___x_3027_);
v___x_3029_ = lean_nat_abs(v___x_3028_);
v___x_3030_ = lean_cstr_to_nat("9007199254740991");
v___x_3031_ = lean_nat_dec_le(v___x_3029_, v___x_3030_);
lean_dec(v___x_3029_);
if (v___x_3031_ == 0)
{
lean_object* v___x_3032_; 
v___x_3032_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3028_);
v___y_3000_ = v___x_3032_;
goto v___jp_2999_;
}
else
{
double v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = l_Float_ofInt(v___x_3028_);
lean_dec(v___x_3028_);
v___x_3034_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3034_, 0, v___x_3033_);
v___y_3000_ = v___x_3034_;
goto v___jp_2999_;
}
v___jp_2999_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
v___x_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_2998_);
lean_ctor_set(v___x_3001_, 1, v___y_3000_);
v___x_3002_ = lean_box(0);
v___x_3003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3001_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v___x_3004_ = l_Lasm_JS_obj(v___x_3003_);
v___x_3005_ = lean_unsigned_to_nat(3u);
v___x_3006_ = lean_mk_empty_array_with_capacity(v___x_3005_);
v___x_3007_ = lean_array_push(v___x_3006_, v___x_2995_);
v___x_3008_ = lean_array_push(v___x_3007_, v___x_2997_);
v___x_3009_ = lean_array_push(v___x_3008_, v___x_3004_);
v___x_3010_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2992_, v___x_2993_, v___x_3009_);
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3017_ == 0)
{
lean_object* v_unused_3018_; 
v_unused_3018_ = lean_ctor_get(v___x_3010_, 0);
lean_dec(v_unused_3018_);
v___x_3012_ = v___x_3010_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_dec(v___x_3010_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
lean_ctor_set(v___x_3012_, 0, v_a_2987_);
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_2987_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
else
{
lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
lean_dec(v_a_2987_);
v_a_3019_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_3010_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_3010_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
}
}
else
{
lean_object* v_a_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3042_; 
lean_dec(v_a_2987_);
v_a_3035_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3042_ == 0)
{
v___x_3037_ = v___x_2991_;
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_a_3035_);
lean_dec(v___x_2991_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3040_; 
if (v_isShared_3038_ == 0)
{
v___x_3040_ = v___x_3037_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_a_3035_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
}
else
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3050_; 
lean_dec(v_a_2987_);
v_a_3043_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3045_ = v___x_2988_;
v_isShared_3046_ = v_isSharedCheck_3050_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_2988_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3050_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3048_; 
if (v_isShared_3046_ == 0)
{
v___x_3048_ = v___x_3045_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_a_3043_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
}
}
else
{
lean_object* v_a_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
v_a_3051_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3053_ = v___x_2986_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_a_3051_);
lean_dec(v___x_2986_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3051_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___boxed(lean_object* v_f_3059_, lean_object* v_a_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l_Lasm_JS_Cloudflare_PagesFunction_ofFn(v_f_3059_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0(lean_object* v_f_3062_, lean_object* v_args_3063_){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3065_ = lean_unsigned_to_nat(0u);
v___x_3066_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_3063_, v___x_3065_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; lean_object* v___x_3068_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
v___x_3068_ = lean_apply_2(v_f_3062_, v_a_3067_, lean_box(0));
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3076_; 
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3076_ == 0)
{
lean_object* v_unused_3077_; 
v_unused_3077_ = lean_ctor_get(v___x_3068_, 0);
lean_dec(v_unused_3077_);
v___x_3070_ = v___x_3068_;
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
else
{
lean_dec(v___x_3068_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3072_; lean_object* v___x_3074_; 
v___x_3072_ = lean_box(0);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 0, v___x_3072_);
v___x_3074_ = v___x_3070_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v___x_3072_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
else
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3085_; 
v_a_3078_ = lean_ctor_get(v___x_3068_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3080_ = v___x_3068_;
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_3068_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3083_; 
if (v_isShared_3081_ == 0)
{
v___x_3083_ = v___x_3080_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_a_3078_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec_ref(v_f_3062_);
v_a_3086_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3066_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3066_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0___boxed(lean_object* v_f_3094_, lean_object* v_args_3095_, lean_object* v___y_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0(v_f_3094_, v_args_3095_);
lean_dec_ref(v_args_3095_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn(lean_object* v_f_3098_){
_start:
{
lean_object* v___f_3100_; lean_object* v___x_3101_; 
v___f_3100_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3100_, 0, v_f_3098_);
v___x_3101_ = l_Lasm_JS_Function_ofSyncFn(v___f_3100_);
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3103_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref_known(v___x_3101_, 1);
v___x_3103_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_a_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v_a_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_a_3104_);
lean_dec_ref_known(v___x_3103_, 1);
v___x_3105_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_3106_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3104_, v___x_3105_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___y_3115_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; uint8_t v___x_3146_; 
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
lean_inc(v_a_3107_);
lean_dec_ref_known(v___x_3106_, 1);
v___x_3108_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_3109_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_3102_);
v___x_3110_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3110_, 0, v_a_3102_);
lean_ctor_set(v___x_3110_, 1, v___x_3109_);
v___x_3111_ = lean_mk_string_unchecked("length", 6, 6);
v___x_3112_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
v___x_3113_ = lean_mk_string_unchecked("value", 5, 5);
v___x_3142_ = lean_unsigned_to_nat(1u);
v___x_3143_ = lean_nat_to_int(v___x_3142_);
v___x_3144_ = lean_nat_abs(v___x_3143_);
v___x_3145_ = lean_cstr_to_nat("9007199254740991");
v___x_3146_ = lean_nat_dec_le(v___x_3144_, v___x_3145_);
lean_dec(v___x_3144_);
if (v___x_3146_ == 0)
{
lean_object* v___x_3147_; 
v___x_3147_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3143_);
v___y_3115_ = v___x_3147_;
goto v___jp_3114_;
}
else
{
double v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = l_Float_ofInt(v___x_3143_);
lean_dec(v___x_3143_);
v___x_3149_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3149_, 0, v___x_3148_);
v___y_3115_ = v___x_3149_;
goto v___jp_3114_;
}
v___jp_3114_:
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3113_);
lean_ctor_set(v___x_3116_, 1, v___y_3115_);
v___x_3117_ = lean_box(0);
v___x_3118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3116_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
v___x_3119_ = l_Lasm_JS_obj(v___x_3118_);
v___x_3120_ = lean_unsigned_to_nat(3u);
v___x_3121_ = lean_mk_empty_array_with_capacity(v___x_3120_);
v___x_3122_ = lean_array_push(v___x_3121_, v___x_3110_);
v___x_3123_ = lean_array_push(v___x_3122_, v___x_3112_);
v___x_3124_ = lean_array_push(v___x_3123_, v___x_3119_);
v___x_3125_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3107_, v___x_3108_, v___x_3124_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3132_ == 0)
{
lean_object* v_unused_3133_; 
v_unused_3133_ = lean_ctor_get(v___x_3125_, 0);
lean_dec(v_unused_3133_);
v___x_3127_ = v___x_3125_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_dec(v___x_3125_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
lean_ctor_set(v___x_3127_, 0, v_a_3102_);
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3102_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
else
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3141_; 
lean_dec(v_a_3102_);
v_a_3134_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3136_ = v___x_3125_;
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3125_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
}
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
lean_dec(v_a_3102_);
v_a_3150_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v___x_3106_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v___x_3106_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
else
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
lean_dec(v_a_3102_);
v_a_3158_ = lean_ctor_get(v___x_3103_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3103_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3103_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___x_3163_; 
if (v_isShared_3161_ == 0)
{
v___x_3163_ = v___x_3160_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v_a_3158_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
}
else
{
lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3173_; 
v_a_3166_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3168_ = v___x_3101_;
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_dec(v___x_3101_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v___x_3171_; 
if (v_isShared_3169_ == 0)
{
v___x_3171_ = v___x_3168_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3166_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
return v___x_3171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___boxed(lean_object* v_f_3174_, lean_object* v_a_3175_){
_start:
{
lean_object* v_res_3176_; 
v_res_3176_ = l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn(v_f_3174_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2EnvASSETS___lam__0(lean_object* v_d_3177_){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3178_ = lean_mk_string_unchecked("fetch", 5, 5);
v___x_3179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
lean_ctor_set(v___x_3179_, 1, v_d_3177_);
v___x_3180_ = lean_unsigned_to_nat(1u);
v___x_3181_ = lean_mk_empty_array_with_capacity(v___x_3180_);
v___x_3182_ = lean_array_push(v___x_3181_, v___x_3179_);
v___x_3183_ = l_Lasm_JS_Web_Support_fields(v___x_3182_);
lean_dec_ref(v___x_3182_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2Env___lam__0(lean_object* v_d_3185_){
_start:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3186_ = lean_mk_string_unchecked("ASSETS", 6, 6);
v___x_3187_ = lean_mk_string_unchecked("fetch", 5, 5);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3187_);
lean_ctor_set(v___x_3188_, 1, v_d_3185_);
v___x_3189_ = lean_unsigned_to_nat(1u);
v___x_3190_ = lean_mk_empty_array_with_capacity(v___x_3189_);
lean_inc_ref(v___x_3190_);
v___x_3191_ = lean_array_push(v___x_3190_, v___x_3188_);
v___x_3192_ = l_Lasm_JS_Web_Support_fields(v___x_3191_);
lean_dec_ref(v___x_3191_);
v___x_3193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3186_);
lean_ctor_set(v___x_3193_, 1, v___x_3192_);
v___x_3194_ = lean_array_push(v___x_3190_, v___x_3193_);
v___x_3195_ = l_Lasm_JS_Web_Support_fields(v___x_3194_);
lean_dec_ref(v___x_3194_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0(lean_object* v_d_3197_){
_start:
{
lean_object* v_request_3198_; lean_object* v_functionPath_3199_; lean_object* v_waitUntil_3200_; lean_object* v_passThroughOnException_3201_; lean_object* v_next_3202_; lean_object* v_env_3203_; lean_object* v_params_3204_; lean_object* v_data_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v_request_3198_ = lean_ctor_get(v_d_3197_, 0);
v_functionPath_3199_ = lean_ctor_get(v_d_3197_, 1);
v_waitUntil_3200_ = lean_ctor_get(v_d_3197_, 2);
v_passThroughOnException_3201_ = lean_ctor_get(v_d_3197_, 3);
v_next_3202_ = lean_ctor_get(v_d_3197_, 4);
v_env_3203_ = lean_ctor_get(v_d_3197_, 5);
v_params_3204_ = lean_ctor_get(v_d_3197_, 6);
v_data_3205_ = lean_ctor_get(v_d_3197_, 7);
v___x_3206_ = lean_mk_string_unchecked("request", 7, 7);
v___x_3207_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref_n(v___x_3207_, 3);
lean_inc(v_request_3198_);
v___x_3208_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3208_, 0, v_request_3198_);
lean_ctor_set(v___x_3208_, 1, v___x_3207_);
v___x_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3206_);
lean_ctor_set(v___x_3209_, 1, v___x_3208_);
v___x_3210_ = lean_mk_string_unchecked("functionPath", 12, 12);
lean_inc_ref(v_functionPath_3199_);
v___x_3211_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3211_, 0, v_functionPath_3199_);
v___x_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3210_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
v___x_3213_ = lean_mk_string_unchecked("waitUntil", 9, 9);
lean_inc(v_waitUntil_3200_);
v___x_3214_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3214_, 0, v_waitUntil_3200_);
lean_ctor_set(v___x_3214_, 1, v___x_3207_);
v___x_3215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3215_, 0, v___x_3213_);
lean_ctor_set(v___x_3215_, 1, v___x_3214_);
v___x_3216_ = lean_mk_string_unchecked("passThroughOnException", 22, 22);
lean_inc(v_passThroughOnException_3201_);
v___x_3217_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3217_, 0, v_passThroughOnException_3201_);
lean_ctor_set(v___x_3217_, 1, v___x_3207_);
v___x_3218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3216_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
v___x_3219_ = lean_mk_string_unchecked("next", 4, 4);
lean_inc(v_next_3202_);
v___x_3220_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3220_, 0, v_next_3202_);
lean_ctor_set(v___x_3220_, 1, v___x_3207_);
v___x_3221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3219_);
lean_ctor_set(v___x_3221_, 1, v___x_3220_);
v___x_3222_ = lean_mk_string_unchecked("env", 3, 3);
v___x_3223_ = lean_mk_string_unchecked("ASSETS", 6, 6);
v___x_3224_ = lean_mk_string_unchecked("fetch", 5, 5);
lean_inc(v_env_3203_);
v___x_3225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3224_);
lean_ctor_set(v___x_3225_, 1, v_env_3203_);
v___x_3226_ = lean_unsigned_to_nat(1u);
v___x_3227_ = lean_mk_empty_array_with_capacity(v___x_3226_);
lean_inc_ref(v___x_3227_);
v___x_3228_ = lean_array_push(v___x_3227_, v___x_3225_);
v___x_3229_ = l_Lasm_JS_Web_Support_fields(v___x_3228_);
lean_dec_ref(v___x_3228_);
v___x_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3223_);
lean_ctor_set(v___x_3230_, 1, v___x_3229_);
v___x_3231_ = lean_array_push(v___x_3227_, v___x_3230_);
v___x_3232_ = l_Lasm_JS_Web_Support_fields(v___x_3231_);
lean_dec_ref(v___x_3231_);
v___x_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3222_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = lean_mk_string_unchecked("params", 6, 6);
lean_inc(v_params_3204_);
v___x_3235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3234_);
lean_ctor_set(v___x_3235_, 1, v_params_3204_);
v___x_3236_ = lean_mk_string_unchecked("data", 4, 4);
lean_inc(v_data_3205_);
v___x_3237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3236_);
lean_ctor_set(v___x_3237_, 1, v_data_3205_);
v___x_3238_ = lean_unsigned_to_nat(8u);
v___x_3239_ = lean_mk_empty_array_with_capacity(v___x_3238_);
v___x_3240_ = lean_array_push(v___x_3239_, v___x_3209_);
v___x_3241_ = lean_array_push(v___x_3240_, v___x_3212_);
v___x_3242_ = lean_array_push(v___x_3241_, v___x_3215_);
v___x_3243_ = lean_array_push(v___x_3242_, v___x_3218_);
v___x_3244_ = lean_array_push(v___x_3243_, v___x_3221_);
v___x_3245_ = lean_array_push(v___x_3244_, v___x_3233_);
v___x_3246_ = lean_array_push(v___x_3245_, v___x_3235_);
v___x_3247_ = lean_array_push(v___x_3246_, v___x_3237_);
v___x_3248_ = l_Lasm_JS_Web_Support_fields(v___x_3247_);
lean_dec_ref(v___x_3247_);
return v___x_3248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0___boxed(lean_object* v_d_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0(v_d_3249_);
lean_dec_ref(v_d_3249_);
return v_res_3250_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSPagesPluginFunction(void){
_start:
{
lean_object* v___f_3253_; lean_object* v___x_3254_; uint8_t v___x_3255_; lean_object* v___x_3256_; 
v___f_3253_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_3254_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.PagesPluginFunction", 38, 38);
v___x_3255_ = 0;
v___x_3256_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3256_, 0, v___f_3253_);
lean_ctor_set(v___x_3256_, 1, v___x_3254_);
lean_ctor_set_uint8(v___x_3256_, sizeof(void*)*2, v___x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofFn(lean_object* v_f_3257_){
_start:
{
lean_object* v___f_3259_; lean_object* v___f_3260_; lean_object* v___f_3261_; lean_object* v___x_3262_; 
v___f_3259_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___f_3260_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3260_, 0, v_f_3257_);
lean_closure_set(v___f_3260_, 1, v___f_3259_);
v___f_3261_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3261_, 0, v___f_3260_);
v___x_3262_ = l_Lasm_JS_Function_ofFn(v___f_3261_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; lean_object* v___x_3264_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3262_, 1);
v___x_3264_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3264_) == 0)
{
lean_object* v_a_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; 
v_a_3265_ = lean_ctor_get(v___x_3264_, 0);
lean_inc(v_a_3265_);
lean_dec_ref_known(v___x_3264_, 1);
v___x_3266_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_3267_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3265_, v___x_3266_);
if (lean_obj_tag(v___x_3267_) == 0)
{
lean_object* v_a_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___y_3276_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; uint8_t v___x_3307_; 
v_a_3268_ = lean_ctor_get(v___x_3267_, 0);
lean_inc(v_a_3268_);
lean_dec_ref_known(v___x_3267_, 1);
v___x_3269_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_3270_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_3263_);
v___x_3271_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3271_, 0, v_a_3263_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v___x_3272_ = lean_mk_string_unchecked("length", 6, 6);
v___x_3273_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3272_);
v___x_3274_ = lean_mk_string_unchecked("value", 5, 5);
v___x_3303_ = lean_unsigned_to_nat(1u);
v___x_3304_ = lean_nat_to_int(v___x_3303_);
v___x_3305_ = lean_nat_abs(v___x_3304_);
v___x_3306_ = lean_cstr_to_nat("9007199254740991");
v___x_3307_ = lean_nat_dec_le(v___x_3305_, v___x_3306_);
lean_dec(v___x_3305_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; 
v___x_3308_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3308_, 0, v___x_3304_);
v___y_3276_ = v___x_3308_;
goto v___jp_3275_;
}
else
{
double v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = l_Float_ofInt(v___x_3304_);
lean_dec(v___x_3304_);
v___x_3310_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3310_, 0, v___x_3309_);
v___y_3276_ = v___x_3310_;
goto v___jp_3275_;
}
v___jp_3275_:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3274_);
lean_ctor_set(v___x_3277_, 1, v___y_3276_);
v___x_3278_ = lean_box(0);
v___x_3279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3277_);
lean_ctor_set(v___x_3279_, 1, v___x_3278_);
v___x_3280_ = l_Lasm_JS_obj(v___x_3279_);
v___x_3281_ = lean_unsigned_to_nat(3u);
v___x_3282_ = lean_mk_empty_array_with_capacity(v___x_3281_);
v___x_3283_ = lean_array_push(v___x_3282_, v___x_3271_);
v___x_3284_ = lean_array_push(v___x_3283_, v___x_3273_);
v___x_3285_ = lean_array_push(v___x_3284_, v___x_3280_);
v___x_3286_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3268_, v___x_3269_, v___x_3285_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3293_; 
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3293_ == 0)
{
lean_object* v_unused_3294_; 
v_unused_3294_ = lean_ctor_get(v___x_3286_, 0);
lean_dec(v_unused_3294_);
v___x_3288_ = v___x_3286_;
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
else
{
lean_dec(v___x_3286_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3293_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3291_; 
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 0, v_a_3263_);
v___x_3291_ = v___x_3288_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_a_3263_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
else
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3302_; 
lean_dec(v_a_3263_);
v_a_3295_ = lean_ctor_get(v___x_3286_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3297_ = v___x_3286_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___x_3286_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3300_; 
if (v_isShared_3298_ == 0)
{
v___x_3300_ = v___x_3297_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v_a_3295_);
v___x_3300_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
return v___x_3300_;
}
}
}
}
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
lean_dec(v_a_3263_);
v_a_3311_ = lean_ctor_get(v___x_3267_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3267_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3313_ = v___x_3267_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3267_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3311_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
lean_dec(v_a_3263_);
v_a_3319_ = lean_ctor_get(v___x_3264_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3264_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3321_ = v___x_3264_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3264_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
v_a_3327_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3262_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3262_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v_a_3327_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofFn___boxed(lean_object* v_f_3335_, lean_object* v_a_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l_Lasm_JS_Cloudflare_PagesPluginFunction_ofFn(v_f_3335_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofSyncFn(lean_object* v_f_3338_){
_start:
{
lean_object* v___f_3340_; lean_object* v___x_3341_; 
v___f_3340_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3340_, 0, v_f_3338_);
v___x_3341_ = l_Lasm_JS_Function_ofSyncFn(v___f_3340_);
if (lean_obj_tag(v___x_3341_) == 0)
{
lean_object* v_a_3342_; lean_object* v___x_3343_; 
v_a_3342_ = lean_ctor_get(v___x_3341_, 0);
lean_inc(v_a_3342_);
lean_dec_ref_known(v___x_3341_, 1);
v___x_3343_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v_a_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v_a_3344_ = lean_ctor_get(v___x_3343_, 0);
lean_inc(v_a_3344_);
lean_dec_ref_known(v___x_3343_, 1);
v___x_3345_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_3346_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3344_, v___x_3345_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___y_3355_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; uint8_t v___x_3386_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3347_);
lean_dec_ref_known(v___x_3346_, 1);
v___x_3348_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_3349_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_3342_);
v___x_3350_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3350_, 0, v_a_3342_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v___x_3351_ = lean_mk_string_unchecked("length", 6, 6);
v___x_3352_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
v___x_3353_ = lean_mk_string_unchecked("value", 5, 5);
v___x_3382_ = lean_unsigned_to_nat(1u);
v___x_3383_ = lean_nat_to_int(v___x_3382_);
v___x_3384_ = lean_nat_abs(v___x_3383_);
v___x_3385_ = lean_cstr_to_nat("9007199254740991");
v___x_3386_ = lean_nat_dec_le(v___x_3384_, v___x_3385_);
lean_dec(v___x_3384_);
if (v___x_3386_ == 0)
{
lean_object* v___x_3387_; 
v___x_3387_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3383_);
v___y_3355_ = v___x_3387_;
goto v___jp_3354_;
}
else
{
double v___x_3388_; lean_object* v___x_3389_; 
v___x_3388_ = l_Float_ofInt(v___x_3383_);
lean_dec(v___x_3383_);
v___x_3389_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3389_, 0, v___x_3388_);
v___y_3355_ = v___x_3389_;
goto v___jp_3354_;
}
v___jp_3354_:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3353_);
lean_ctor_set(v___x_3356_, 1, v___y_3355_);
v___x_3357_ = lean_box(0);
v___x_3358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3356_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = l_Lasm_JS_obj(v___x_3358_);
v___x_3360_ = lean_unsigned_to_nat(3u);
v___x_3361_ = lean_mk_empty_array_with_capacity(v___x_3360_);
v___x_3362_ = lean_array_push(v___x_3361_, v___x_3350_);
v___x_3363_ = lean_array_push(v___x_3362_, v___x_3352_);
v___x_3364_ = lean_array_push(v___x_3363_, v___x_3359_);
v___x_3365_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3347_, v___x_3348_, v___x_3364_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3372_ == 0)
{
lean_object* v_unused_3373_; 
v_unused_3373_ = lean_ctor_get(v___x_3365_, 0);
lean_dec(v_unused_3373_);
v___x_3367_ = v___x_3365_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_dec(v___x_3365_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 0, v_a_3342_);
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3342_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
else
{
lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3381_; 
lean_dec(v_a_3342_);
v_a_3374_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3376_ = v___x_3365_;
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v___x_3365_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3379_; 
if (v_isShared_3377_ == 0)
{
v___x_3379_ = v___x_3376_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_a_3374_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
}
}
else
{
lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3397_; 
lean_dec(v_a_3342_);
v_a_3390_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3392_ = v___x_3346_;
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v___x_3346_);
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
else
{
lean_object* v_a_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3405_; 
lean_dec(v_a_3342_);
v_a_3398_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3400_ = v___x_3343_;
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_a_3398_);
lean_dec(v___x_3343_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3403_; 
if (v_isShared_3401_ == 0)
{
v___x_3403_ = v___x_3400_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_a_3398_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
return v___x_3403_;
}
}
}
}
else
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
v_a_3406_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3341_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3341_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofSyncFn___boxed(lean_object* v_f_3414_, lean_object* v_a_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l_Lasm_JS_Cloudflare_PagesPluginFunction_ofSyncFn(v_f_3414_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0(lean_object* v_d_3417_){
_start:
{
lean_object* v_request_3418_; lean_object* v_functionPath_3419_; lean_object* v_waitUntil_3420_; lean_object* v_passThroughOnException_3421_; lean_object* v_next_3422_; lean_object* v_env_3423_; lean_object* v_params_3424_; lean_object* v_data_3425_; lean_object* v_pluginArgs_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; 
v_request_3418_ = lean_ctor_get(v_d_3417_, 0);
v_functionPath_3419_ = lean_ctor_get(v_d_3417_, 1);
v_waitUntil_3420_ = lean_ctor_get(v_d_3417_, 2);
v_passThroughOnException_3421_ = lean_ctor_get(v_d_3417_, 3);
v_next_3422_ = lean_ctor_get(v_d_3417_, 4);
v_env_3423_ = lean_ctor_get(v_d_3417_, 5);
v_params_3424_ = lean_ctor_get(v_d_3417_, 6);
v_data_3425_ = lean_ctor_get(v_d_3417_, 7);
v_pluginArgs_3426_ = lean_ctor_get(v_d_3417_, 8);
v___x_3427_ = lean_mk_string_unchecked("request", 7, 7);
v___x_3428_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref_n(v___x_3428_, 3);
lean_inc(v_request_3418_);
v___x_3429_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3429_, 0, v_request_3418_);
lean_ctor_set(v___x_3429_, 1, v___x_3428_);
v___x_3430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3427_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = lean_mk_string_unchecked("functionPath", 12, 12);
lean_inc_ref(v_functionPath_3419_);
v___x_3432_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3432_, 0, v_functionPath_3419_);
v___x_3433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3431_);
lean_ctor_set(v___x_3433_, 1, v___x_3432_);
v___x_3434_ = lean_mk_string_unchecked("waitUntil", 9, 9);
lean_inc(v_waitUntil_3420_);
v___x_3435_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3435_, 0, v_waitUntil_3420_);
lean_ctor_set(v___x_3435_, 1, v___x_3428_);
v___x_3436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3434_);
lean_ctor_set(v___x_3436_, 1, v___x_3435_);
v___x_3437_ = lean_mk_string_unchecked("passThroughOnException", 22, 22);
lean_inc(v_passThroughOnException_3421_);
v___x_3438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3438_, 0, v_passThroughOnException_3421_);
lean_ctor_set(v___x_3438_, 1, v___x_3428_);
v___x_3439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3437_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = lean_mk_string_unchecked("next", 4, 4);
lean_inc(v_next_3422_);
v___x_3441_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3441_, 0, v_next_3422_);
lean_ctor_set(v___x_3441_, 1, v___x_3428_);
v___x_3442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3440_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = lean_mk_string_unchecked("env", 3, 3);
v___x_3444_ = lean_mk_string_unchecked("ASSETS", 6, 6);
v___x_3445_ = lean_mk_string_unchecked("fetch", 5, 5);
lean_inc(v_env_3423_);
v___x_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
lean_ctor_set(v___x_3446_, 1, v_env_3423_);
v___x_3447_ = lean_unsigned_to_nat(1u);
v___x_3448_ = lean_mk_empty_array_with_capacity(v___x_3447_);
lean_inc_ref(v___x_3448_);
v___x_3449_ = lean_array_push(v___x_3448_, v___x_3446_);
v___x_3450_ = l_Lasm_JS_Web_Support_fields(v___x_3449_);
lean_dec_ref(v___x_3449_);
v___x_3451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3444_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = lean_array_push(v___x_3448_, v___x_3451_);
v___x_3453_ = l_Lasm_JS_Web_Support_fields(v___x_3452_);
lean_dec_ref(v___x_3452_);
v___x_3454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3443_);
lean_ctor_set(v___x_3454_, 1, v___x_3453_);
v___x_3455_ = lean_mk_string_unchecked("params", 6, 6);
lean_inc(v_params_3424_);
v___x_3456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3455_);
lean_ctor_set(v___x_3456_, 1, v_params_3424_);
v___x_3457_ = lean_mk_string_unchecked("data", 4, 4);
lean_inc(v_data_3425_);
v___x_3458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
lean_ctor_set(v___x_3458_, 1, v_data_3425_);
v___x_3459_ = lean_mk_string_unchecked("pluginArgs", 10, 10);
lean_inc(v_pluginArgs_3426_);
v___x_3460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
lean_ctor_set(v___x_3460_, 1, v_pluginArgs_3426_);
v___x_3461_ = lean_unsigned_to_nat(9u);
v___x_3462_ = lean_mk_empty_array_with_capacity(v___x_3461_);
v___x_3463_ = lean_array_push(v___x_3462_, v___x_3430_);
v___x_3464_ = lean_array_push(v___x_3463_, v___x_3433_);
v___x_3465_ = lean_array_push(v___x_3464_, v___x_3436_);
v___x_3466_ = lean_array_push(v___x_3465_, v___x_3439_);
v___x_3467_ = lean_array_push(v___x_3466_, v___x_3442_);
v___x_3468_ = lean_array_push(v___x_3467_, v___x_3454_);
v___x_3469_ = lean_array_push(v___x_3468_, v___x_3456_);
v___x_3470_ = lean_array_push(v___x_3469_, v___x_3458_);
v___x_3471_ = lean_array_push(v___x_3470_, v___x_3460_);
v___x_3472_ = l_Lasm_JS_Web_Support_fields(v___x_3471_);
lean_dec_ref(v___x_3471_);
return v___x_3472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0___boxed(lean_object* v_d_3473_){
_start:
{
lean_object* v_res_3474_; 
v_res_3474_ = l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0(v_d_3473_);
lean_dec_ref(v_d_3473_);
return v_res_3474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_exports(lean_object* v_self_3476_){
_start:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3478_ = lean_mk_string_unchecked("exports", 7, 7);
v___x_3479_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3476_, v___x_3478_);
return v___x_3479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_exports___boxed(lean_object* v_self_3480_, lean_object* v_a_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Lasm_JS_Cloudflare_ExecutionContext_exports(v_self_3480_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props(lean_object* v_self_3483_){
_start:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3485_ = lean_mk_string_unchecked("props", 5, 5);
v___x_3486_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_3483_, v___x_3485_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_props___boxed(lean_object* v_self_3487_, lean_object* v_a_3488_){
_start:
{
lean_object* v_res_3489_; 
v_res_3489_ = l_Lasm_JS_Cloudflare_ExecutionContext_props(v_self_3487_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(lean_object* v_context_3490_, lean_object* v_d_3491_){
_start:
{
lean_object* v___y_3497_; lean_object* v___y_3498_; 
switch(lean_obj_tag(v_d_3491_))
{
case 1:
{
goto v___jp_3493_;
}
case 0:
{
goto v___jp_3493_;
}
default: 
{
if (lean_obj_tag(v_d_3491_) == 9)
{
lean_object* v_value_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; 
v_value_3502_ = lean_ctor_get(v_d_3491_, 0);
lean_inc(v_value_3502_);
lean_dec_ref_known(v_d_3491_, 2);
v___x_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3503_, 0, v_value_3502_);
v___x_3504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3503_);
return v___x_3504_;
}
else
{
lean_object* v___x_3505_; lean_object* v_received_3507_; 
v___x_3505_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_3491_) == 9)
{
lean_object* v_value_3523_; lean_object* v_description_3524_; uint8_t v___x_3525_; 
v_value_3523_ = lean_ctor_get(v_d_3491_, 0);
v_description_3524_ = lean_ctor_get(v_d_3491_, 1);
v___x_3525_ = lean_string_dec_eq(v_description_3524_, v___x_3505_);
if (v___x_3525_ == 0)
{
goto v___jp_3521_;
}
else
{
uint32_t v___x_3526_; uint64_t v___x_3527_; lean_object* v___x_3528_; uint32_t v___x_3529_; lean_object* v___x_3530_; 
lean_inc_n(v_value_3523_, 2);
lean_dec_ref_known(v_d_3491_, 2);
v___x_3526_ = 206;
v___x_3527_ = 0ULL;
lean_inc_ref(v___x_3505_);
v___x_3528_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3528_, 0, v_value_3523_);
lean_ctor_set(v___x_3528_, 1, v___x_3505_);
v___x_3529_ = lasm_js_value_handle(v_value_3523_);
lean_dec(v_value_3523_);
v___x_3530_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3526_, v___x_3527_, v___x_3528_, v___x_3529_);
lean_dec_ref_known(v___x_3528_, 2);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; uint8_t v___x_3532_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3530_, 1);
v___x_3532_ = lean_string_validate_utf8(v_a_3531_);
if (v___x_3532_ == 0)
{
lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
lean_dec(v_a_3531_);
v___x_3533_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_3534_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_3535_ = lean_unsigned_to_nat(193u);
v___x_3536_ = lean_unsigned_to_nat(46u);
v___x_3537_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_3538_ = l_mkPanicMessageWithDecl(v___x_3533_, v___x_3534_, v___x_3535_, v___x_3536_, v___x_3537_);
lean_dec_ref(v___x_3537_);
lean_dec_ref(v___x_3534_);
lean_dec_ref(v___x_3533_);
v___x_3539_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3538_);
v_received_3507_ = v___x_3539_;
goto v___jp_3506_;
}
else
{
lean_object* v___x_3540_; 
v___x_3540_ = lean_string_from_utf8_unchecked(v_a_3531_);
v_received_3507_ = v___x_3540_;
goto v___jp_3506_;
}
}
else
{
lean_object* v___x_3541_; 
lean_dec_ref_known(v___x_3530_, 1);
v___x_3541_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_3507_ = v___x_3541_;
goto v___jp_3506_;
}
}
}
else
{
goto v___jp_3521_;
}
v___jp_3506_:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; uint8_t v___x_3519_; 
v___x_3508_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_3509_ = lean_string_append(v___x_3508_, v_context_3490_);
v___x_3510_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_3511_ = lean_string_append(v___x_3509_, v___x_3510_);
lean_dec_ref(v___x_3510_);
v___x_3512_ = lean_mk_string_unchecked("Option (Lasm.JS.Cloudflare.CacheContext)", 40, 40);
v___x_3513_ = lean_string_append(v___x_3511_, v___x_3512_);
lean_dec_ref(v___x_3512_);
v___x_3514_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_3515_ = lean_string_append(v___x_3513_, v___x_3514_);
lean_dec_ref(v___x_3514_);
v___x_3516_ = lean_string_append(v___x_3515_, v_received_3507_);
lean_dec_ref(v_received_3507_);
v___x_3517_ = lean_string_utf8_byte_size(v___x_3505_);
v___x_3518_ = lean_unsigned_to_nat(0u);
v___x_3519_ = lean_nat_dec_eq(v___x_3517_, v___x_3518_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; 
lean_dec_ref(v___x_3505_);
v___x_3520_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_3497_ = v___x_3516_;
v___y_3498_ = v___x_3520_;
goto v___jp_3496_;
}
else
{
v___y_3497_ = v___x_3516_;
v___y_3498_ = v___x_3505_;
goto v___jp_3496_;
}
}
v___jp_3521_:
{
lean_object* v___x_3522_; 
v___x_3522_ = l_Lasm_JS_Data_describe(v_d_3491_);
v_received_3507_ = v___x_3522_;
goto v___jp_3506_;
}
}
}
}
v___jp_3493_:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = lean_box(0);
v___x_3495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
return v___x_3495_;
}
v___jp_3496_:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = lean_string_append(v___y_3497_, v___y_3498_);
v___x_3500_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3499_);
v___x_3501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3500_);
return v___x_3501_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3542_, lean_object* v_d_3543_, lean_object* v_a_3544_){
_start:
{
lean_object* v_res_3545_; 
v_res_3545_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(v_context_3542_, v_d_3543_);
lean_dec_ref(v_context_3542_);
return v_res_3545_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(lean_object* v_context_3546_, lean_object* v_bytes_3547_){
_start:
{
lean_object* v___x_3549_; 
v___x_3549_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3547_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v_a_3550_; lean_object* v___x_3551_; 
v_a_3550_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3549_, 1);
v___x_3551_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0_spec__1(v_context_3546_, v_a_3550_);
return v___x_3551_;
}
else
{
lean_object* v_a_3552_; lean_object* v___x_3554_; uint8_t v_isShared_3555_; uint8_t v_isSharedCheck_3559_; 
v_a_3552_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3559_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3554_ = v___x_3549_;
v_isShared_3555_ = v_isSharedCheck_3559_;
goto v_resetjp_3553_;
}
else
{
lean_inc(v_a_3552_);
lean_dec(v___x_3549_);
v___x_3554_ = lean_box(0);
v_isShared_3555_ = v_isSharedCheck_3559_;
goto v_resetjp_3553_;
}
v_resetjp_3553_:
{
lean_object* v___x_3557_; 
if (v_isShared_3555_ == 0)
{
v___x_3557_ = v___x_3554_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v_a_3552_);
v___x_3557_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
return v___x_3557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0___boxed(lean_object* v_context_3560_, lean_object* v_bytes_3561_, lean_object* v_a_3562_){
_start:
{
lean_object* v_res_3563_; 
v_res_3563_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(v_context_3560_, v_bytes_3561_);
lean_dec_ref(v_bytes_3561_);
lean_dec_ref(v_context_3560_);
return v_res_3563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(lean_object* v_o_3564_, lean_object* v_key_3565_){
_start:
{
lean_object* v_k_3567_; lean_object* v___x_3568_; 
v_k_3567_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3567_, 0, v_key_3565_);
v___x_3568_ = l_Lasm_JS_Wire_encodeIO(v_k_3567_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; uint32_t v___x_3570_; uint32_t v___x_3571_; uint8_t v___x_3572_; uint64_t v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref_known(v___x_3568_, 1);
v___x_3570_ = 203;
v___x_3571_ = lasm_js_value_handle(v_o_3564_);
v___x_3572_ = 0;
v___x_3573_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3572_);
v___x_3574_ = lean_mk_string_unchecked("", 0, 0);
v___x_3575_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3575_, 0, v_o_3564_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v___x_3576_ = lean_unsigned_to_nat(2u);
v___x_3577_ = lean_mk_empty_array_with_capacity(v___x_3576_);
lean_inc_ref(v_k_3567_);
v___x_3578_ = lean_array_push(v___x_3577_, v_k_3567_);
v___x_3579_ = lean_array_push(v___x_3578_, v___x_3575_);
v___x_3580_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3579_);
v___x_3581_ = lasm_js_call(v___x_3570_, v___x_3571_, v___x_3573_, v_a_3569_, v___x_3580_);
lean_dec_ref_known(v___x_3580_, 1);
lean_dec(v_a_3569_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc(v_a_3582_);
lean_dec_ref_known(v___x_3581_, 1);
v___x_3583_ = lean_mk_string_unchecked("get ", 4, 4);
v___x_3584_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3567_);
v___x_3585_ = lean_string_append(v___x_3583_, v___x_3584_);
lean_dec_ref(v___x_3584_);
v___x_3586_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0_spec__0(v___x_3585_, v_a_3582_);
lean_dec(v_a_3582_);
lean_dec_ref(v___x_3585_);
return v___x_3586_;
}
else
{
lean_object* v_a_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3594_; 
lean_dec_ref_known(v_k_3567_, 1);
v_a_3587_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3589_ = v___x_3581_;
v_isShared_3590_ = v_isSharedCheck_3594_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_a_3587_);
lean_dec(v___x_3581_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3594_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3592_; 
if (v_isShared_3590_ == 0)
{
v___x_3592_ = v___x_3589_;
goto v_reusejp_3591_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v_a_3587_);
v___x_3592_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3591_;
}
v_reusejp_3591_:
{
return v___x_3592_;
}
}
}
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3602_; 
lean_dec_ref_known(v_k_3567_, 1);
lean_dec(v_o_3564_);
v_a_3595_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3597_ = v___x_3568_;
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v___x_3568_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3600_; 
if (v_isShared_3598_ == 0)
{
v___x_3600_ = v___x_3597_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_a_3595_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0___boxed(lean_object* v_o_3603_, lean_object* v_key_3604_, lean_object* v_a_3605_){
_start:
{
lean_object* v_res_3606_; 
v_res_3606_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(v_o_3603_, v_key_3604_);
return v_res_3606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache(lean_object* v_self_3607_){
_start:
{
lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3609_ = lean_mk_string_unchecked("cache", 5, 5);
v___x_3610_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_cache_spec__0(v_self_3607_, v___x_3609_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_cache___boxed(lean_object* v_self_3611_, lean_object* v_a_3612_){
_start:
{
lean_object* v_res_3613_; 
v_res_3613_ = l_Lasm_JS_Cloudflare_ExecutionContext_cache(v_self_3611_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0_spec__1(lean_object* v_context_3614_, lean_object* v_d_3615_){
_start:
{
lean_object* v___y_3621_; lean_object* v___y_3622_; 
switch(lean_obj_tag(v_d_3615_))
{
case 1:
{
goto v___jp_3617_;
}
case 0:
{
goto v___jp_3617_;
}
default: 
{
if (lean_obj_tag(v_d_3615_) == 9)
{
lean_object* v_value_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v_value_3626_ = lean_ctor_get(v_d_3615_, 0);
lean_inc(v_value_3626_);
lean_dec_ref_known(v_d_3615_, 2);
v___x_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3627_, 0, v_value_3626_);
v___x_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
return v___x_3628_;
}
else
{
lean_object* v___x_3629_; lean_object* v_received_3631_; 
v___x_3629_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_3615_) == 9)
{
lean_object* v_value_3647_; lean_object* v_description_3648_; uint8_t v___x_3649_; 
v_value_3647_ = lean_ctor_get(v_d_3615_, 0);
v_description_3648_ = lean_ctor_get(v_d_3615_, 1);
v___x_3649_ = lean_string_dec_eq(v_description_3648_, v___x_3629_);
if (v___x_3649_ == 0)
{
goto v___jp_3645_;
}
else
{
uint32_t v___x_3650_; uint64_t v___x_3651_; lean_object* v___x_3652_; uint32_t v___x_3653_; lean_object* v___x_3654_; 
lean_inc_n(v_value_3647_, 2);
lean_dec_ref_known(v_d_3615_, 2);
v___x_3650_ = 206;
v___x_3651_ = 0ULL;
lean_inc_ref(v___x_3629_);
v___x_3652_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3652_, 0, v_value_3647_);
lean_ctor_set(v___x_3652_, 1, v___x_3629_);
v___x_3653_ = lasm_js_value_handle(v_value_3647_);
lean_dec(v_value_3647_);
v___x_3654_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3650_, v___x_3651_, v___x_3652_, v___x_3653_);
lean_dec_ref_known(v___x_3652_, 2);
if (lean_obj_tag(v___x_3654_) == 0)
{
lean_object* v_a_3655_; uint8_t v___x_3656_; 
v_a_3655_ = lean_ctor_get(v___x_3654_, 0);
lean_inc(v_a_3655_);
lean_dec_ref_known(v___x_3654_, 1);
v___x_3656_ = lean_string_validate_utf8(v_a_3655_);
if (v___x_3656_ == 0)
{
lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
lean_dec(v_a_3655_);
v___x_3657_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_3658_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_3659_ = lean_unsigned_to_nat(193u);
v___x_3660_ = lean_unsigned_to_nat(46u);
v___x_3661_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_3662_ = l_mkPanicMessageWithDecl(v___x_3657_, v___x_3658_, v___x_3659_, v___x_3660_, v___x_3661_);
lean_dec_ref(v___x_3661_);
lean_dec_ref(v___x_3658_);
lean_dec_ref(v___x_3657_);
v___x_3663_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3662_);
v_received_3631_ = v___x_3663_;
goto v___jp_3630_;
}
else
{
lean_object* v___x_3664_; 
v___x_3664_ = lean_string_from_utf8_unchecked(v_a_3655_);
v_received_3631_ = v___x_3664_;
goto v___jp_3630_;
}
}
else
{
lean_object* v___x_3665_; 
lean_dec_ref_known(v___x_3654_, 1);
v___x_3665_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_3631_ = v___x_3665_;
goto v___jp_3630_;
}
}
}
else
{
goto v___jp_3645_;
}
v___jp_3630_:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; uint8_t v___x_3643_; 
v___x_3632_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_3633_ = lean_string_append(v___x_3632_, v_context_3614_);
v___x_3634_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_3635_ = lean_string_append(v___x_3633_, v___x_3634_);
lean_dec_ref(v___x_3634_);
v___x_3636_ = lean_mk_string_unchecked("Option (Lasm.JS.Cloudflare.CloudflareAccessContext)", 51, 51);
v___x_3637_ = lean_string_append(v___x_3635_, v___x_3636_);
lean_dec_ref(v___x_3636_);
v___x_3638_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_3639_ = lean_string_append(v___x_3637_, v___x_3638_);
lean_dec_ref(v___x_3638_);
v___x_3640_ = lean_string_append(v___x_3639_, v_received_3631_);
lean_dec_ref(v_received_3631_);
v___x_3641_ = lean_string_utf8_byte_size(v___x_3629_);
v___x_3642_ = lean_unsigned_to_nat(0u);
v___x_3643_ = lean_nat_dec_eq(v___x_3641_, v___x_3642_);
if (v___x_3643_ == 0)
{
lean_object* v___x_3644_; 
lean_dec_ref(v___x_3629_);
v___x_3644_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_3621_ = v___x_3640_;
v___y_3622_ = v___x_3644_;
goto v___jp_3620_;
}
else
{
v___y_3621_ = v___x_3640_;
v___y_3622_ = v___x_3629_;
goto v___jp_3620_;
}
}
v___jp_3645_:
{
lean_object* v___x_3646_; 
v___x_3646_ = l_Lasm_JS_Data_describe(v_d_3615_);
v_received_3631_ = v___x_3646_;
goto v___jp_3630_;
}
}
}
}
v___jp_3617_:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3618_ = lean_box(0);
v___x_3619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3618_);
return v___x_3619_;
}
v___jp_3620_:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3623_ = lean_string_append(v___y_3621_, v___y_3622_);
v___x_3624_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
v___x_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
return v___x_3625_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3666_, lean_object* v_d_3667_, lean_object* v_a_3668_){
_start:
{
lean_object* v_res_3669_; 
v_res_3669_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0_spec__1(v_context_3666_, v_d_3667_);
lean_dec_ref(v_context_3666_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0(lean_object* v_context_3670_, lean_object* v_bytes_3671_){
_start:
{
lean_object* v___x_3673_; 
v___x_3673_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3671_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref_known(v___x_3673_, 1);
v___x_3675_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0_spec__1(v_context_3670_, v_a_3674_);
return v___x_3675_;
}
else
{
lean_object* v_a_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3683_; 
v_a_3676_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3683_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3678_ = v___x_3673_;
v_isShared_3679_ = v_isSharedCheck_3683_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_a_3676_);
lean_dec(v___x_3673_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3683_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
lean_object* v___x_3681_; 
if (v_isShared_3679_ == 0)
{
v___x_3681_ = v___x_3678_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v_a_3676_);
v___x_3681_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
return v___x_3681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0___boxed(lean_object* v_context_3684_, lean_object* v_bytes_3685_, lean_object* v_a_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0(v_context_3684_, v_bytes_3685_);
lean_dec_ref(v_bytes_3685_);
lean_dec_ref(v_context_3684_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0(lean_object* v_o_3688_, lean_object* v_key_3689_){
_start:
{
lean_object* v_k_3691_; lean_object* v___x_3692_; 
v_k_3691_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_3691_, 0, v_key_3689_);
v___x_3692_ = l_Lasm_JS_Wire_encodeIO(v_k_3691_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; uint32_t v___x_3694_; uint32_t v___x_3695_; uint8_t v___x_3696_; uint64_t v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3693_);
lean_dec_ref_known(v___x_3692_, 1);
v___x_3694_ = 203;
v___x_3695_ = lasm_js_value_handle(v_o_3688_);
v___x_3696_ = 0;
v___x_3697_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_3696_);
v___x_3698_ = lean_mk_string_unchecked("", 0, 0);
v___x_3699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3699_, 0, v_o_3688_);
lean_ctor_set(v___x_3699_, 1, v___x_3698_);
v___x_3700_ = lean_unsigned_to_nat(2u);
v___x_3701_ = lean_mk_empty_array_with_capacity(v___x_3700_);
lean_inc_ref(v_k_3691_);
v___x_3702_ = lean_array_push(v___x_3701_, v_k_3691_);
v___x_3703_ = lean_array_push(v___x_3702_, v___x_3699_);
v___x_3704_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3704_, 0, v___x_3703_);
v___x_3705_ = lasm_js_call(v___x_3694_, v___x_3695_, v___x_3697_, v_a_3693_, v___x_3704_);
lean_dec_ref_known(v___x_3704_, 1);
lean_dec(v_a_3693_);
if (lean_obj_tag(v___x_3705_) == 0)
{
lean_object* v_a_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; 
v_a_3706_ = lean_ctor_get(v___x_3705_, 0);
lean_inc(v_a_3706_);
lean_dec_ref_known(v___x_3705_, 1);
v___x_3707_ = lean_mk_string_unchecked("get ", 4, 4);
v___x_3708_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_3691_);
v___x_3709_ = lean_string_append(v___x_3707_, v___x_3708_);
lean_dec_ref(v___x_3708_);
v___x_3710_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0_spec__0(v___x_3709_, v_a_3706_);
lean_dec(v_a_3706_);
lean_dec_ref(v___x_3709_);
return v___x_3710_;
}
else
{
lean_object* v_a_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3718_; 
lean_dec_ref_known(v_k_3691_, 1);
v_a_3711_ = lean_ctor_get(v___x_3705_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3705_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3713_ = v___x_3705_;
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_a_3711_);
lean_dec(v___x_3705_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v_a_3711_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
lean_dec_ref_known(v_k_3691_, 1);
lean_dec(v_o_3688_);
v_a_3719_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3692_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3692_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0___boxed(lean_object* v_o_3727_, lean_object* v_key_3728_, lean_object* v_a_3729_){
_start:
{
lean_object* v_res_3730_; 
v_res_3730_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0(v_o_3727_, v_key_3728_);
return v_res_3730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_access(lean_object* v_self_3731_){
_start:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = lean_mk_string_unchecked("access", 6, 6);
v___x_3734_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_ExecutionContext_access_spec__0(v_self_3731_, v___x_3733_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_access___boxed(lean_object* v_self_3735_, lean_object* v_a_3736_){
_start:
{
lean_object* v_res_3737_; 
v_res_3737_ = l_Lasm_JS_Cloudflare_ExecutionContext_access(v_self_3735_);
return v_res_3737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_tracing(lean_object* v_self_3738_){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; 
v___x_3740_ = lean_mk_string_unchecked("tracing", 7, 7);
v___x_3741_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3738_, v___x_3740_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3741_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3741_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
v_a_3750_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3741_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3741_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_tracing___boxed(lean_object* v_self_3758_, lean_object* v_a_3759_){
_start:
{
lean_object* v_res_3760_; 
v_res_3760_ = l_Lasm_JS_Cloudflare_ExecutionContext_tracing(v_self_3758_);
return v_res_3760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(lean_object* v_self_3761_, lean_object* v_promise_3762_){
_start:
{
lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3764_ = lean_mk_string_unchecked("waitUntil", 9, 9);
v___x_3765_ = lean_mk_string_unchecked("", 0, 0);
v___x_3766_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3766_, 0, v_promise_3762_);
lean_ctor_set(v___x_3766_, 1, v___x_3765_);
v___x_3767_ = lean_unsigned_to_nat(1u);
v___x_3768_ = lean_mk_empty_array_with_capacity(v___x_3767_);
v___x_3769_ = lean_array_push(v___x_3768_, v___x_3766_);
v___x_3770_ = l_Lasm_JS_Web_Support_args(v___x_3769_);
v___x_3771_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3761_, v___x_3764_, v___x_3770_);
return v___x_3771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil___boxed(lean_object* v_self_3772_, lean_object* v_promise_3773_, lean_object* v_a_3774_){
_start:
{
lean_object* v_res_3775_; 
v_res_3775_ = l_Lasm_JS_Cloudflare_ExecutionContext_waitUntil(v_self_3772_, v_promise_3773_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(lean_object* v_self_3776_){
_start:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3778_ = lean_mk_string_unchecked("passThroughOnException", 22, 22);
v___x_3779_ = lean_unsigned_to_nat(0u);
v___x_3780_ = lean_mk_empty_array_with_capacity(v___x_3779_);
v___x_3781_ = l_Lasm_JS_Web_Support_args(v___x_3780_);
v___x_3782_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3776_, v___x_3778_, v___x_3781_);
return v___x_3782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException___boxed(lean_object* v_self_3783_, lean_object* v_a_3784_){
_start:
{
lean_object* v_res_3785_; 
v_res_3785_ = l_Lasm_JS_Cloudflare_ExecutionContext_passThroughOnException(v_self_3783_);
return v_res_3785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort(lean_object* v_self_3786_, lean_object* v_reason_3787_){
_start:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3789_ = lean_mk_string_unchecked("abort", 5, 5);
v___x_3790_ = lean_unsigned_to_nat(1u);
v___x_3791_ = lean_mk_empty_array_with_capacity(v___x_3790_);
v___x_3792_ = lean_array_push(v___x_3791_, v_reason_3787_);
v___x_3793_ = l_Lasm_JS_Web_Support_args(v___x_3792_);
v___x_3794_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3786_, v___x_3789_, v___x_3793_);
return v___x_3794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExecutionContext_abort___boxed(lean_object* v_self_3795_, lean_object* v_reason_3796_, lean_object* v_a_3797_){
_start:
{
lean_object* v_res_3798_; 
v_res_3798_ = l_Lasm_JS_Cloudflare_ExecutionContext_abort(v_self_3795_, v_reason_3796_);
return v_res_3798_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(lean_object* v___f_3799_, lean_object* v_x_3800_){
_start:
{
if (lean_obj_tag(v_x_3800_) == 0)
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3810_; 
lean_dec_ref(v___f_3799_);
v_a_3802_ = lean_ctor_get(v_x_3800_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v_x_3800_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3804_ = v_x_3800_;
v_isShared_3805_ = v_isSharedCheck_3810_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v_x_3800_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3810_;
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
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
lean_object* v___x_3808_; 
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
return v___x_3808_;
}
}
}
else
{
lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3822_; 
v_isSharedCheck_3822_ = !lean_is_exclusive(v_x_3800_);
if (v_isSharedCheck_3822_ == 0)
{
lean_object* v_unused_3823_; 
v_unused_3823_ = lean_ctor_get(v_x_3800_, 0);
lean_dec(v_unused_3823_);
v___x_3812_ = v_x_3800_;
v_isShared_3813_ = v_isSharedCheck_3822_;
goto v_resetjp_3811_;
}
else
{
lean_dec(v_x_3800_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3822_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3814_; uint8_t v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3818_; 
v___x_3814_ = lean_unsigned_to_nat(0u);
v___x_3815_ = 0;
v___x_3816_ = lean_io_promise_new();
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 0, v___x_3816_);
v___x_3818_ = v___x_3812_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3816_);
v___x_3818_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3818_);
v___x_3820_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3814_, v___x_3815_, v___x_3819_, v___f_3799_);
return v___x_3820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed(lean_object* v___f_3824_, lean_object* v_x_3825_, lean_object* v___y_3826_){
_start:
{
lean_object* v_res_3827_; 
v_res_3827_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8(v___f_3824_, v_x_3825_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(lean_object* v_failurePrefix_3828_, lean_object* v_x_3829_){
_start:
{
if (lean_obj_tag(v_x_3829_) == 0)
{
lean_object* v_a_3831_; lean_object* v___x_3833_; uint8_t v_isShared_3834_; uint8_t v_isSharedCheck_3842_; 
v_a_3831_ = lean_ctor_get(v_x_3829_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v_x_3829_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3833_ = v_x_3829_;
v_isShared_3834_ = v_isSharedCheck_3842_;
goto v_resetjp_3832_;
}
else
{
lean_inc(v_a_3831_);
lean_dec(v_x_3829_);
v___x_3833_ = lean_box(0);
v_isShared_3834_ = v_isSharedCheck_3842_;
goto v_resetjp_3832_;
}
v_resetjp_3832_:
{
lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3839_; 
v___x_3835_ = lean_io_error_to_string(v_a_3831_);
v___x_3836_ = lean_string_append(v_failurePrefix_3828_, v___x_3835_);
lean_dec_ref(v___x_3835_);
v___x_3837_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3837_, 0, v___x_3836_);
if (v_isShared_3834_ == 0)
{
lean_ctor_set(v___x_3833_, 0, v___x_3837_);
v___x_3839_ = v___x_3833_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v___x_3837_);
v___x_3839_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3840_; 
v___x_3840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3840_, 0, v___x_3839_);
return v___x_3840_;
}
}
}
else
{
lean_object* v___x_3843_; 
lean_dec_ref(v_failurePrefix_3828_);
v___x_3843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3843_, 0, v_x_3829_);
return v___x_3843_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed(lean_object* v_failurePrefix_3844_, lean_object* v_x_3845_, lean_object* v___y_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4(v_failurePrefix_3844_, v_x_3845_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(lean_object* v___f_3848_, lean_object* v_bytes_3849_){
_start:
{
lean_object* v___x_3851_; uint8_t v___x_3852_; lean_object* v_val_3854_; lean_object* v___x_3857_; 
v___x_3851_ = lean_unsigned_to_nat(0u);
v___x_3852_ = 0;
v___x_3857_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3849_);
if (lean_obj_tag(v___x_3857_) == 0)
{
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3865_; 
v_a_3858_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3860_ = v___x_3857_;
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3857_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
lean_ctor_set_tag(v___x_3860_, 1);
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_a_3858_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
v_val_3854_ = v___x_3863_;
goto v___jp_3853_;
}
}
}
else
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3873_; 
v_a_3866_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3868_ = v___x_3857_;
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3857_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3871_; 
if (v_isShared_3869_ == 0)
{
lean_ctor_set_tag(v___x_3868_, 0);
v___x_3871_ = v___x_3868_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3866_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
v_val_3854_ = v___x_3871_;
goto v___jp_3853_;
}
}
}
v___jp_3853_:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3855_, 0, v_val_3854_);
v___x_3856_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3851_, v___x_3852_, v___x_3855_, v___f_3848_);
return v___x_3856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed(lean_object* v___f_3874_, lean_object* v_bytes_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v_res_3877_; 
v_res_3877_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1(v___f_3874_, v_bytes_3875_);
lean_dec_ref(v_bytes_3875_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(lean_object* v___f_3878_, lean_object* v_a_3879_, uint32_t v_op_3880_, uint64_t v_flags_3881_, lean_object* v_payload_3882_, lean_object* v_x_3883_){
_start:
{
if (lean_obj_tag(v_x_3883_) == 0)
{
lean_object* v___x_3885_; 
lean_dec_ref(v___f_3878_);
v___x_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3885_, 0, v_x_3883_);
return v___x_3885_;
}
else
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3906_; 
v_a_3886_ = lean_ctor_get(v_x_3883_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v_x_3883_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3888_ = v_x_3883_;
v_isShared_3889_ = v_isSharedCheck_3906_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v_x_3883_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3906_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
uint32_t v___x_3890_; lean_object* v___x_3891_; uint8_t v___x_3892_; lean_object* v_val_3894_; lean_object* v___x_3897_; 
v___x_3890_ = 0;
v___x_3891_ = lean_unsigned_to_nat(0u);
v___x_3892_ = 0;
v___x_3897_ = lasm_js_call_into(v_a_3879_, v_op_3880_, v___x_3890_, v_flags_3881_, v_a_3886_, v_payload_3882_);
lean_dec(v_a_3886_);
if (lean_obj_tag(v___x_3897_) == 0)
{
lean_object* v_a_3898_; lean_object* v___x_3900_; 
v_a_3898_ = lean_ctor_get(v___x_3897_, 0);
lean_inc(v_a_3898_);
lean_dec_ref_known(v___x_3897_, 1);
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 0, v_a_3898_);
v___x_3900_ = v___x_3888_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_a_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
v_val_3894_ = v___x_3900_;
goto v___jp_3893_;
}
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; 
v_a_3902_ = lean_ctor_get(v___x_3897_, 0);
lean_inc(v_a_3902_);
lean_dec_ref_known(v___x_3897_, 1);
if (v_isShared_3889_ == 0)
{
lean_ctor_set_tag(v___x_3888_, 0);
lean_ctor_set(v___x_3888_, 0, v_a_3902_);
v___x_3904_ = v___x_3888_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3902_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
v_val_3894_ = v___x_3904_;
goto v___jp_3893_;
}
}
v___jp_3893_:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; 
v___x_3895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3895_, 0, v_val_3894_);
v___x_3896_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3891_, v___x_3892_, v___x_3895_, v___f_3878_);
return v___x_3896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed(lean_object* v___f_3907_, lean_object* v_a_3908_, lean_object* v_op_3909_, lean_object* v_flags_3910_, lean_object* v_payload_3911_, lean_object* v_x_3912_, lean_object* v___y_3913_){
_start:
{
uint32_t v_op_boxed_3914_; uint64_t v_flags_boxed_3915_; lean_object* v_res_3916_; 
v_op_boxed_3914_ = lean_unbox_uint32(v_op_3909_);
lean_dec(v_op_3909_);
v_flags_boxed_3915_ = lean_unbox_uint64(v_flags_3910_);
lean_dec_ref(v_flags_3910_);
v_res_3916_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7(v___f_3907_, v_a_3908_, v_op_boxed_3914_, v_flags_boxed_3915_, v_payload_3911_, v_x_3912_);
lean_dec(v_payload_3911_);
lean_dec(v_a_3908_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(lean_object* v___x_3917_, uint8_t v___x_3918_, lean_object* v___f_3919_, lean_object* v_a_3920_, uint32_t v_op_3921_, uint64_t v_flags_3922_, lean_object* v_payload_3923_, lean_object* v_x_3924_){
_start:
{
lean_object* v_val_3927_; 
if (lean_obj_tag(v_x_3924_) == 0)
{
lean_object* v___x_3930_; 
lean_dec_ref(v___f_3919_);
lean_dec(v___x_3917_);
v___x_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3930_, 0, v_x_3924_);
return v___x_3930_;
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3945_; 
v_a_3931_ = lean_ctor_get(v_x_3924_, 0);
v_isSharedCheck_3945_ = !lean_is_exclusive(v_x_3924_);
if (v_isSharedCheck_3945_ == 0)
{
v___x_3933_ = v_x_3924_;
v_isShared_3934_ = v_isSharedCheck_3945_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v_x_3924_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3945_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
uint32_t v___x_3935_; lean_object* v___x_3936_; 
v___x_3935_ = 0;
v___x_3936_ = lasm_js_call_into(v_a_3920_, v_op_3921_, v___x_3935_, v_flags_3922_, v_a_3931_, v_payload_3923_);
lean_dec(v_a_3931_);
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_object* v_a_3937_; lean_object* v___x_3939_; 
v_a_3937_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_a_3937_);
lean_dec_ref_known(v___x_3936_, 1);
if (v_isShared_3934_ == 0)
{
lean_ctor_set(v___x_3933_, 0, v_a_3937_);
v___x_3939_ = v___x_3933_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v_a_3937_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
v_val_3927_ = v___x_3939_;
goto v___jp_3926_;
}
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3943_; 
v_a_3941_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v___x_3936_, 1);
if (v_isShared_3934_ == 0)
{
lean_ctor_set_tag(v___x_3933_, 0);
lean_ctor_set(v___x_3933_, 0, v_a_3941_);
v___x_3943_ = v___x_3933_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v_a_3941_);
v___x_3943_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
v_val_3927_ = v___x_3943_;
goto v___jp_3926_;
}
}
}
}
v___jp_3926_:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3928_, 0, v_val_3927_);
v___x_3929_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3917_, v___x_3918_, v___x_3928_, v___f_3919_);
return v___x_3929_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed(lean_object* v___x_3946_, lean_object* v___x_3947_, lean_object* v___f_3948_, lean_object* v_a_3949_, lean_object* v_op_3950_, lean_object* v_flags_3951_, lean_object* v_payload_3952_, lean_object* v_x_3953_, lean_object* v___y_3954_){
_start:
{
uint8_t v___x_2141__boxed_3955_; uint32_t v_op_boxed_3956_; uint64_t v_flags_boxed_3957_; lean_object* v_res_3958_; 
v___x_2141__boxed_3955_ = lean_unbox(v___x_3947_);
v_op_boxed_3956_ = lean_unbox_uint32(v_op_3950_);
lean_dec(v_op_3950_);
v_flags_boxed_3957_ = lean_unbox_uint64(v_flags_3951_);
lean_dec_ref(v_flags_3951_);
v_res_3958_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5(v___x_3946_, v___x_2141__boxed_3955_, v___f_3948_, v_a_3949_, v_op_boxed_3956_, v_flags_boxed_3957_, v_payload_3952_, v_x_3953_);
lean_dec(v_payload_3952_);
lean_dec(v_a_3949_);
return v_res_3958_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(lean_object* v_a_3959_, lean_object* v_x_3960_){
_start:
{
if (lean_obj_tag(v_x_3960_) == 0)
{
lean_object* v_a_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3970_; 
v_a_3962_ = lean_ctor_get(v_x_3960_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v_x_3960_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3964_ = v_x_3960_;
v_isShared_3965_ = v_isSharedCheck_3970_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_a_3962_);
lean_dec(v_x_3960_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3970_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v___x_3967_; 
if (v_isShared_3965_ == 0)
{
v___x_3967_ = v___x_3964_;
goto v_reusejp_3966_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3962_);
v___x_3967_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3966_;
}
v_reusejp_3966_:
{
lean_object* v___x_3968_; 
v___x_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3967_);
return v___x_3968_;
}
}
}
else
{
lean_object* v___x_3971_; 
lean_dec_ref_known(v_x_3960_, 1);
v___x_3971_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3959_);
return v___x_3971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed(lean_object* v_a_3972_, lean_object* v_x_3973_, lean_object* v___y_3974_){
_start:
{
lean_object* v_res_3975_; 
v_res_3975_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3(v_a_3972_, v_x_3973_);
lean_dec(v_a_3972_);
return v_res_3975_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(lean_object* v_failurePrefix_3976_, uint32_t v_op_3977_, uint64_t v_flags_3978_, lean_object* v_payload_3979_, lean_object* v___f_3980_, lean_object* v___f_3981_, lean_object* v___f_3982_, lean_object* v_x_3983_){
_start:
{
if (lean_obj_tag(v_x_3983_) == 0)
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3993_; 
lean_dec_ref(v___f_3982_);
lean_dec_ref(v___f_3981_);
lean_dec_ref(v___f_3980_);
lean_dec(v_payload_3979_);
v_a_3985_ = lean_ctor_get(v_x_3983_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v_x_3983_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3987_ = v_x_3983_;
v_isShared_3988_ = v_isSharedCheck_3993_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v_x_3983_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3993_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
lean_object* v___x_3991_; 
v___x_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3991_, 0, v___x_3990_);
return v___x_3991_;
}
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4040_; 
v_a_3994_ = lean_ctor_get(v_x_3983_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v_x_3983_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_3996_ = v_x_3983_;
v_isShared_3997_ = v_isSharedCheck_4040_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v_x_3983_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4040_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; uint8_t v___x_4000_; 
v___x_3998_ = lean_string_utf8_byte_size(v_failurePrefix_3976_);
v___x_3999_ = lean_unsigned_to_nat(0u);
v___x_4000_ = lean_nat_dec_eq(v___x_3998_, v___x_3999_);
if (v___x_4000_ == 0)
{
lean_object* v___f_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___f_4005_; lean_object* v_val_4007_; lean_object* v___x_4012_; 
lean_dec_ref(v___f_3982_);
lean_inc(v_a_3994_);
v___f_4001_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4001_, 0, v_a_3994_);
v___x_4002_ = lean_box(v___x_4000_);
v___x_4003_ = lean_box_uint32(v_op_3977_);
v___x_4004_ = lean_box_uint64(v_flags_3978_);
lean_inc(v_payload_3979_);
v___f_4005_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4005_, 0, v___x_3999_);
lean_closure_set(v___f_4005_, 1, v___x_4002_);
lean_closure_set(v___f_4005_, 2, v___f_4001_);
lean_closure_set(v___f_4005_, 3, v_a_3994_);
lean_closure_set(v___f_4005_, 4, v___x_4003_);
lean_closure_set(v___f_4005_, 5, v___x_4004_);
lean_closure_set(v___f_4005_, 6, v_payload_3979_);
v___x_4012_ = l_Lasm_JS_Wire_encodeIO(v_payload_3979_);
lean_dec(v_payload_3979_);
if (lean_obj_tag(v___x_4012_) == 0)
{
lean_object* v_a_4013_; lean_object* v___x_4015_; 
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4013_);
lean_dec_ref_known(v___x_4012_, 1);
if (v_isShared_3997_ == 0)
{
lean_ctor_set(v___x_3996_, 0, v_a_4013_);
v___x_4015_ = v___x_3996_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4013_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
v_val_4007_ = v___x_4015_;
goto v___jp_4006_;
}
}
else
{
lean_object* v_a_4017_; lean_object* v___x_4019_; 
v_a_4017_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4017_);
lean_dec_ref_known(v___x_4012_, 1);
if (v_isShared_3997_ == 0)
{
lean_ctor_set_tag(v___x_3996_, 0);
lean_ctor_set(v___x_3996_, 0, v_a_4017_);
v___x_4019_ = v___x_3996_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_a_4017_);
v___x_4019_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
v_val_4007_ = v___x_4019_;
goto v___jp_4006_;
}
}
v___jp_4006_:
{
lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v___x_4008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4008_, 0, v_val_4007_);
v___x_4009_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3999_, v___x_4000_, v___x_4008_, v___f_4005_);
v___x_4010_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3999_, v___x_4000_, v___x_4009_, v___f_3980_);
v___x_4011_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3999_, v___x_4000_, v___x_4010_, v___f_3981_);
return v___x_4011_;
}
}
else
{
lean_object* v___f_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___f_4024_; uint8_t v___x_4025_; lean_object* v_val_4027_; lean_object* v___x_4031_; 
lean_dec_ref(v___f_3981_);
lean_dec_ref(v___f_3980_);
lean_inc(v_a_3994_);
v___f_4021_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4021_, 0, v_a_3994_);
v___x_4022_ = lean_box_uint32(v_op_3977_);
v___x_4023_ = lean_box_uint64(v_flags_3978_);
lean_inc(v_payload_3979_);
v___f_4024_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4024_, 0, v___f_4021_);
lean_closure_set(v___f_4024_, 1, v_a_3994_);
lean_closure_set(v___f_4024_, 2, v___x_4022_);
lean_closure_set(v___f_4024_, 3, v___x_4023_);
lean_closure_set(v___f_4024_, 4, v_payload_3979_);
v___x_4025_ = 0;
v___x_4031_ = l_Lasm_JS_Wire_encodeIO(v_payload_3979_);
lean_dec(v_payload_3979_);
if (lean_obj_tag(v___x_4031_) == 0)
{
lean_object* v_a_4032_; lean_object* v___x_4034_; 
v_a_4032_ = lean_ctor_get(v___x_4031_, 0);
lean_inc(v_a_4032_);
lean_dec_ref_known(v___x_4031_, 1);
if (v_isShared_3997_ == 0)
{
lean_ctor_set(v___x_3996_, 0, v_a_4032_);
v___x_4034_ = v___x_3996_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v_a_4032_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
v_val_4027_ = v___x_4034_;
goto v___jp_4026_;
}
}
else
{
lean_object* v_a_4036_; lean_object* v___x_4038_; 
v_a_4036_ = lean_ctor_get(v___x_4031_, 0);
lean_inc(v_a_4036_);
lean_dec_ref_known(v___x_4031_, 1);
if (v_isShared_3997_ == 0)
{
lean_ctor_set_tag(v___x_3996_, 0);
lean_ctor_set(v___x_3996_, 0, v_a_4036_);
v___x_4038_ = v___x_3996_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_a_4036_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
v_val_4027_ = v___x_4038_;
goto v___jp_4026_;
}
}
v___jp_4026_:
{
lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; 
v___x_4028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4028_, 0, v_val_4027_);
v___x_4029_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3999_, v___x_4025_, v___x_4028_, v___f_4024_);
v___x_4030_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3999_, v___x_4025_, v___x_4029_, v___f_3982_);
return v___x_4030_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed(lean_object* v_failurePrefix_4041_, lean_object* v_op_4042_, lean_object* v_flags_4043_, lean_object* v_payload_4044_, lean_object* v___f_4045_, lean_object* v___f_4046_, lean_object* v___f_4047_, lean_object* v_x_4048_, lean_object* v___y_4049_){
_start:
{
uint32_t v_op_boxed_4050_; uint64_t v_flags_boxed_4051_; lean_object* v_res_4052_; 
v_op_boxed_4050_ = lean_unbox_uint32(v_op_4042_);
lean_dec(v_op_4042_);
v_flags_boxed_4051_ = lean_unbox_uint64(v_flags_4043_);
lean_dec_ref(v_flags_4043_);
v_res_4052_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6(v_failurePrefix_4041_, v_op_boxed_4050_, v_flags_boxed_4051_, v_payload_4044_, v___f_4045_, v___f_4046_, v___f_4047_, v_x_4048_);
lean_dec_ref(v_failurePrefix_4041_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(lean_object* v___f_4053_, lean_object* v_x_4054_){
_start:
{
if (lean_obj_tag(v_x_4054_) == 0)
{
lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4064_; 
lean_dec_ref(v___f_4053_);
v_a_4056_ = lean_ctor_get(v_x_4054_, 0);
v_isSharedCheck_4064_ = !lean_is_exclusive(v_x_4054_);
if (v_isSharedCheck_4064_ == 0)
{
v___x_4058_ = v_x_4054_;
v_isShared_4059_ = v_isSharedCheck_4064_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v_x_4054_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4064_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4061_; 
if (v_isShared_4059_ == 0)
{
v___x_4061_ = v___x_4058_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v_a_4056_);
v___x_4061_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
lean_object* v___x_4062_; 
v___x_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4061_);
return v___x_4062_;
}
}
}
else
{
lean_object* v_a_4065_; lean_object* v___x_4066_; 
v_a_4065_ = lean_ctor_get(v_x_4054_, 0);
lean_inc(v_a_4065_);
lean_dec_ref_known(v_x_4054_, 1);
v___x_4066_ = lean_apply_2(v___f_4053_, v_a_4065_, lean_box(0));
return v___x_4066_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed(lean_object* v___f_4067_, lean_object* v_x_4068_, lean_object* v___y_4069_){
_start:
{
lean_object* v_res_4070_; 
v_res_4070_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2(v___f_4067_, v_x_4068_);
return v_res_4070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(lean_object* v_d_4071_, lean_object* v_key_4072_){
_start:
{
if (lean_obj_tag(v_d_4071_) == 8)
{
lean_object* v___x_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4104_; 
v___x_4073_ = l_Lasm_JS_Data_field(v_d_4071_, v_key_4072_);
v_isSharedCheck_4104_ = !lean_is_exclusive(v_d_4071_);
if (v_isSharedCheck_4104_ == 0)
{
lean_object* v_unused_4105_; 
v_unused_4105_ = lean_ctor_get(v_d_4071_, 0);
lean_dec(v_unused_4105_);
v___x_4075_ = v_d_4071_;
v_isShared_4076_ = v_isSharedCheck_4104_;
goto v_resetjp_4074_;
}
else
{
lean_dec(v_d_4071_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4104_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
if (lean_obj_tag(v___x_4073_) == 2)
{
uint8_t v_b_4077_; lean_object* v___x_4078_; lean_object* v___x_4080_; 
v_b_4077_ = lean_ctor_get_uint8(v___x_4073_, 0);
lean_dec_ref_known(v___x_4073_, 0);
v___x_4078_ = lean_box(v_b_4077_);
if (v_isShared_4076_ == 0)
{
lean_ctor_set_tag(v___x_4075_, 1);
lean_ctor_set(v___x_4075_, 0, v___x_4078_);
v___x_4080_ = v___x_4075_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v___x_4078_);
v___x_4080_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
return v___x_4080_;
}
}
else
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; uint8_t v___x_4095_; 
v___x_4082_ = lean_mk_string_unchecked("", 0, 0);
v___x_4083_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4084_ = lean_string_append(v___x_4083_, v_key_4072_);
v___x_4085_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4086_ = lean_string_append(v___x_4084_, v___x_4085_);
lean_dec_ref(v___x_4085_);
v___x_4087_ = lean_mk_string_unchecked("Bool", 4, 4);
v___x_4088_ = lean_string_append(v___x_4086_, v___x_4087_);
lean_dec_ref(v___x_4087_);
v___x_4089_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4090_ = lean_string_append(v___x_4088_, v___x_4089_);
lean_dec_ref(v___x_4089_);
v___x_4091_ = l_Lasm_JS_Data_describe(v___x_4073_);
v___x_4092_ = lean_string_append(v___x_4090_, v___x_4091_);
lean_dec_ref(v___x_4091_);
v___x_4093_ = lean_string_utf8_byte_size(v___x_4082_);
lean_dec_ref(v___x_4082_);
v___x_4094_ = lean_unsigned_to_nat(0u);
v___x_4095_ = lean_nat_dec_eq(v___x_4093_, v___x_4094_);
if (v___x_4095_ == 0)
{
lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4099_; 
v___x_4096_ = lean_mk_string_unchecked(" ()", 3, 3);
v___x_4097_ = lean_string_append(v___x_4092_, v___x_4096_);
lean_dec_ref(v___x_4096_);
if (v_isShared_4076_ == 0)
{
lean_ctor_set_tag(v___x_4075_, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4097_);
v___x_4099_ = v___x_4075_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v___x_4097_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
else
{
lean_object* v___x_4102_; 
if (v_isShared_4076_ == 0)
{
lean_ctor_set_tag(v___x_4075_, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4092_);
v___x_4102_ = v___x_4075_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v___x_4092_);
v___x_4102_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
return v___x_4102_;
}
}
}
}
}
else
{
lean_object* v___x_4106_; lean_object* v___x_4107_; 
lean_dec(v_d_4071_);
v___x_4106_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4106_);
return v___x_4107_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_d_4108_, lean_object* v_key_4109_){
_start:
{
lean_object* v_res_4110_; 
v_res_4110_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(v_d_4108_, v_key_4109_);
lean_dec_ref(v_key_4109_);
return v_res_4110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object* v_d_4111_, lean_object* v_key_4112_){
_start:
{
if (lean_obj_tag(v_d_4111_) == 8)
{
lean_object* v___x_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4144_; 
v___x_4113_ = l_Lasm_JS_Data_field(v_d_4111_, v_key_4112_);
v_isSharedCheck_4144_ = !lean_is_exclusive(v_d_4111_);
if (v_isSharedCheck_4144_ == 0)
{
lean_object* v_unused_4145_; 
v_unused_4145_ = lean_ctor_get(v_d_4111_, 0);
lean_dec(v_unused_4145_);
v___x_4115_ = v_d_4111_;
v_isShared_4116_ = v_isSharedCheck_4144_;
goto v_resetjp_4114_;
}
else
{
lean_dec(v_d_4111_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4144_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
if (lean_obj_tag(v___x_4113_) == 3)
{
double v_n_4117_; lean_object* v___x_4118_; lean_object* v___x_4120_; 
v_n_4117_ = lean_ctor_get_float(v___x_4113_, 0);
lean_dec_ref_known(v___x_4113_, 0);
v___x_4118_ = lean_box_float(v_n_4117_);
if (v_isShared_4116_ == 0)
{
lean_ctor_set_tag(v___x_4115_, 1);
lean_ctor_set(v___x_4115_, 0, v___x_4118_);
v___x_4120_ = v___x_4115_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4118_);
v___x_4120_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
return v___x_4120_;
}
}
else
{
lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; uint8_t v___x_4135_; 
v___x_4122_ = lean_mk_string_unchecked("", 0, 0);
v___x_4123_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4124_ = lean_string_append(v___x_4123_, v_key_4112_);
v___x_4125_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4126_ = lean_string_append(v___x_4124_, v___x_4125_);
lean_dec_ref(v___x_4125_);
v___x_4127_ = lean_mk_string_unchecked("Float", 5, 5);
v___x_4128_ = lean_string_append(v___x_4126_, v___x_4127_);
lean_dec_ref(v___x_4127_);
v___x_4129_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4130_ = lean_string_append(v___x_4128_, v___x_4129_);
lean_dec_ref(v___x_4129_);
v___x_4131_ = l_Lasm_JS_Data_describe(v___x_4113_);
v___x_4132_ = lean_string_append(v___x_4130_, v___x_4131_);
lean_dec_ref(v___x_4131_);
v___x_4133_ = lean_string_utf8_byte_size(v___x_4122_);
lean_dec_ref(v___x_4122_);
v___x_4134_ = lean_unsigned_to_nat(0u);
v___x_4135_ = lean_nat_dec_eq(v___x_4133_, v___x_4134_);
if (v___x_4135_ == 0)
{
lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4139_; 
v___x_4136_ = lean_mk_string_unchecked(" ()", 3, 3);
v___x_4137_ = lean_string_append(v___x_4132_, v___x_4136_);
lean_dec_ref(v___x_4136_);
if (v_isShared_4116_ == 0)
{
lean_ctor_set_tag(v___x_4115_, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4137_);
v___x_4139_ = v___x_4115_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v___x_4137_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
else
{
lean_object* v___x_4142_; 
if (v_isShared_4116_ == 0)
{
lean_ctor_set_tag(v___x_4115_, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4132_);
v___x_4142_ = v___x_4115_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v___x_4132_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
}
}
else
{
lean_object* v___x_4146_; lean_object* v___x_4147_; 
lean_dec(v_d_4111_);
v___x_4146_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4146_);
return v___x_4147_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6___boxed(lean_object* v_d_4148_, lean_object* v_key_4149_){
_start:
{
lean_object* v_res_4150_; 
v_res_4150_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_d_4148_, v_key_4149_);
lean_dec_ref(v_key_4149_);
return v_res_4150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(lean_object* v_d_4151_, lean_object* v_key_4152_){
_start:
{
if (lean_obj_tag(v_d_4151_) == 8)
{
lean_object* v___x_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4187_; 
v___x_4153_ = l_Lasm_JS_Data_field(v_d_4151_, v_key_4152_);
v_isSharedCheck_4187_ = !lean_is_exclusive(v_d_4151_);
if (v_isSharedCheck_4187_ == 0)
{
lean_object* v_unused_4188_; 
v_unused_4188_ = lean_ctor_get(v_d_4151_, 0);
lean_dec(v_unused_4188_);
v___x_4155_ = v_d_4151_;
v_isShared_4156_ = v_isSharedCheck_4187_;
goto v_resetjp_4154_;
}
else
{
lean_dec(v_d_4151_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4187_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
if (lean_obj_tag(v___x_4153_) == 4)
{
lean_object* v_s_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4164_; 
lean_del_object(v___x_4155_);
v_s_4157_ = lean_ctor_get(v___x_4153_, 0);
v_isSharedCheck_4164_ = !lean_is_exclusive(v___x_4153_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4159_ = v___x_4153_;
v_isShared_4160_ = v_isSharedCheck_4164_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_s_4157_);
lean_dec(v___x_4153_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4164_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4162_; 
if (v_isShared_4160_ == 0)
{
lean_ctor_set_tag(v___x_4159_, 1);
v___x_4162_ = v___x_4159_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v_s_4157_);
v___x_4162_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
return v___x_4162_;
}
}
}
else
{
lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; uint8_t v___x_4178_; 
v___x_4165_ = lean_mk_string_unchecked("", 0, 0);
v___x_4166_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4167_ = lean_string_append(v___x_4166_, v_key_4152_);
v___x_4168_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4169_ = lean_string_append(v___x_4167_, v___x_4168_);
lean_dec_ref(v___x_4168_);
v___x_4170_ = lean_mk_string_unchecked("String", 6, 6);
v___x_4171_ = lean_string_append(v___x_4169_, v___x_4170_);
lean_dec_ref(v___x_4170_);
v___x_4172_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4173_ = lean_string_append(v___x_4171_, v___x_4172_);
lean_dec_ref(v___x_4172_);
v___x_4174_ = l_Lasm_JS_Data_describe(v___x_4153_);
v___x_4175_ = lean_string_append(v___x_4173_, v___x_4174_);
lean_dec_ref(v___x_4174_);
v___x_4176_ = lean_string_utf8_byte_size(v___x_4165_);
lean_dec_ref(v___x_4165_);
v___x_4177_ = lean_unsigned_to_nat(0u);
v___x_4178_ = lean_nat_dec_eq(v___x_4176_, v___x_4177_);
if (v___x_4178_ == 0)
{
lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4182_; 
v___x_4179_ = lean_mk_string_unchecked(" ()", 3, 3);
v___x_4180_ = lean_string_append(v___x_4175_, v___x_4179_);
lean_dec_ref(v___x_4179_);
if (v_isShared_4156_ == 0)
{
lean_ctor_set_tag(v___x_4155_, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4180_);
v___x_4182_ = v___x_4155_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v___x_4180_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
else
{
lean_object* v___x_4185_; 
if (v_isShared_4156_ == 0)
{
lean_ctor_set_tag(v___x_4155_, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4175_);
v___x_4185_ = v___x_4155_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v___x_4175_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
}
}
else
{
lean_object* v___x_4189_; lean_object* v___x_4190_; 
lean_dec(v_d_4151_);
v___x_4189_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4190_, 0, v___x_4189_);
return v___x_4190_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_d_4191_, lean_object* v_key_4192_){
_start:
{
lean_object* v_res_4193_; 
v_res_4193_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_d_4191_, v_key_4192_);
lean_dec_ref(v_key_4192_);
return v_res_4193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__8(size_t v_sz_4194_, size_t v_i_4195_, lean_object* v_bs_4196_){
_start:
{
uint8_t v___x_4197_; 
v___x_4197_ = lean_usize_dec_lt(v_i_4195_, v_sz_4194_);
if (v___x_4197_ == 0)
{
lean_object* v___x_4198_; 
v___x_4198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4198_, 0, v_bs_4196_);
return v___x_4198_;
}
else
{
lean_object* v_v_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; 
v_v_4199_ = lean_array_uget_borrowed(v_bs_4196_, v_i_4195_);
v___x_4200_ = lean_mk_string_unchecked("code", 4, 4);
lean_inc(v_v_4199_);
v___x_4201_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_v_4199_, v___x_4200_);
lean_dec_ref(v___x_4200_);
if (lean_obj_tag(v___x_4201_) == 0)
{
lean_object* v_a_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4209_; 
lean_dec_ref(v_bs_4196_);
v_a_4202_ = lean_ctor_get(v___x_4201_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4204_ = v___x_4201_;
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_a_4202_);
lean_dec(v___x_4201_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4207_; 
if (v_isShared_4205_ == 0)
{
v___x_4207_ = v___x_4204_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v_a_4202_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
return v___x_4207_;
}
}
}
else
{
lean_object* v_a_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; 
v_a_4210_ = lean_ctor_get(v___x_4201_, 0);
lean_inc(v_a_4210_);
lean_dec_ref_known(v___x_4201_, 1);
v___x_4211_ = lean_mk_string_unchecked("message", 7, 7);
lean_inc(v_v_4199_);
v___x_4212_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_v_4199_, v___x_4211_);
lean_dec_ref(v___x_4211_);
if (lean_obj_tag(v___x_4212_) == 0)
{
lean_object* v_a_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4220_; 
lean_dec(v_a_4210_);
lean_dec_ref(v_bs_4196_);
v_a_4213_ = lean_ctor_get(v___x_4212_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v___x_4212_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4215_ = v___x_4212_;
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_a_4213_);
lean_dec(v___x_4212_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v___x_4218_; 
if (v_isShared_4216_ == 0)
{
v___x_4218_ = v___x_4215_;
goto v_reusejp_4217_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v_a_4213_);
v___x_4218_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4217_;
}
v_reusejp_4217_:
{
return v___x_4218_;
}
}
}
else
{
lean_object* v_a_4221_; lean_object* v___x_4222_; lean_object* v_bs_x27_4223_; lean_object* v___x_4224_; double v___x_4225_; size_t v___x_4226_; size_t v___x_4227_; lean_object* v___x_4228_; 
v_a_4221_ = lean_ctor_get(v___x_4212_, 0);
lean_inc(v_a_4221_);
lean_dec_ref_known(v___x_4212_, 1);
v___x_4222_ = lean_unsigned_to_nat(0u);
v_bs_x27_4223_ = lean_array_uset(v_bs_4196_, v_i_4195_, v___x_4222_);
v___x_4224_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4224_, 0, v_a_4221_);
v___x_4225_ = lean_unbox_float(v_a_4210_);
lean_dec(v_a_4210_);
lean_ctor_set_float(v___x_4224_, sizeof(void*)*1, v___x_4225_);
v___x_4226_ = ((size_t)1ULL);
v___x_4227_ = lean_usize_add(v_i_4195_, v___x_4226_);
v___x_4228_ = lean_array_uset(v_bs_x27_4223_, v_i_4195_, v___x_4224_);
v_i_4195_ = v___x_4227_;
v_bs_4196_ = v___x_4228_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_sz_4230_, lean_object* v_i_4231_, lean_object* v_bs_4232_){
_start:
{
size_t v_sz_boxed_4233_; size_t v_i_boxed_4234_; lean_object* v_res_4235_; 
v_sz_boxed_4233_ = lean_unbox_usize(v_sz_4230_);
lean_dec(v_sz_4230_);
v_i_boxed_4234_ = lean_unbox_usize(v_i_4231_);
lean_dec(v_i_4231_);
v_res_4235_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__8(v_sz_boxed_4233_, v_i_boxed_4234_, v_bs_4232_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(lean_object* v_d_4236_, lean_object* v_key_4237_){
_start:
{
if (lean_obj_tag(v_d_4236_) == 8)
{
lean_object* v___x_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4282_; 
v___x_4238_ = l_Lasm_JS_Data_field(v_d_4236_, v_key_4237_);
v_isSharedCheck_4282_ = !lean_is_exclusive(v_d_4236_);
if (v_isSharedCheck_4282_ == 0)
{
lean_object* v_unused_4283_; 
v_unused_4283_ = lean_ctor_get(v_d_4236_, 0);
lean_dec(v_unused_4283_);
v___x_4240_ = v_d_4236_;
v_isShared_4241_ = v_isSharedCheck_4282_;
goto v_resetjp_4239_;
}
else
{
lean_dec(v_d_4236_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4282_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
lean_object* v_a_4243_; 
if (lean_obj_tag(v___x_4238_) == 7)
{
lean_object* v_items_4268_; size_t v_sz_4269_; size_t v___x_4270_; lean_object* v___x_4271_; 
v_items_4268_ = lean_ctor_get(v___x_4238_, 0);
lean_inc_ref(v_items_4268_);
v_sz_4269_ = lean_array_size(v_items_4268_);
v___x_4270_ = ((size_t)0ULL);
v___x_4271_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__8(v_sz_4269_, v___x_4270_, v_items_4268_);
if (lean_obj_tag(v___x_4271_) == 0)
{
lean_object* v_a_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; uint8_t v___x_4276_; 
v_a_4272_ = lean_ctor_get(v___x_4271_, 0);
lean_inc(v_a_4272_);
lean_dec_ref_known(v___x_4271_, 1);
v___x_4273_ = lean_mk_string_unchecked("an element is not Lasm.JS.Cloudflare.CachePurgeError", 52, 52);
v___x_4274_ = lean_string_utf8_byte_size(v_a_4272_);
v___x_4275_ = lean_unsigned_to_nat(0u);
v___x_4276_ = lean_nat_dec_eq(v___x_4274_, v___x_4275_);
if (v___x_4276_ == 0)
{
lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; 
v___x_4277_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_4278_ = lean_string_append(v___x_4277_, v_a_4272_);
lean_dec(v_a_4272_);
v___x_4279_ = lean_string_append(v___x_4273_, v___x_4278_);
lean_dec_ref(v___x_4278_);
v_a_4243_ = v___x_4279_;
goto v___jp_4242_;
}
else
{
lean_dec(v_a_4272_);
v_a_4243_ = v___x_4273_;
goto v___jp_4242_;
}
}
else
{
if (lean_obj_tag(v___x_4271_) == 0)
{
lean_object* v_a_4280_; 
v_a_4280_ = lean_ctor_get(v___x_4271_, 0);
lean_inc(v_a_4280_);
lean_dec_ref_known(v___x_4271_, 1);
v_a_4243_ = v_a_4280_;
goto v___jp_4242_;
}
else
{
lean_dec_ref_known(v___x_4238_, 1);
lean_del_object(v___x_4240_);
return v___x_4271_;
}
}
}
else
{
lean_object* v___x_4281_; 
v___x_4281_ = lean_mk_string_unchecked("", 0, 0);
v_a_4243_ = v___x_4281_;
goto v___jp_4242_;
}
v___jp_4242_:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; uint8_t v___x_4256_; 
v___x_4244_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4245_ = lean_string_append(v___x_4244_, v_key_4237_);
v___x_4246_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4247_ = lean_string_append(v___x_4245_, v___x_4246_);
lean_dec_ref(v___x_4246_);
v___x_4248_ = lean_mk_string_unchecked("Array (Lasm.JS.Cloudflare.CachePurgeError)", 42, 42);
v___x_4249_ = lean_string_append(v___x_4247_, v___x_4248_);
lean_dec_ref(v___x_4248_);
v___x_4250_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4251_ = lean_string_append(v___x_4249_, v___x_4250_);
lean_dec_ref(v___x_4250_);
v___x_4252_ = l_Lasm_JS_Data_describe(v___x_4238_);
v___x_4253_ = lean_string_append(v___x_4251_, v___x_4252_);
lean_dec_ref(v___x_4252_);
v___x_4254_ = lean_string_utf8_byte_size(v_a_4243_);
v___x_4255_ = lean_unsigned_to_nat(0u);
v___x_4256_ = lean_nat_dec_eq(v___x_4254_, v___x_4255_);
if (v___x_4256_ == 0)
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4263_; 
v___x_4257_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_4258_ = lean_string_append(v___x_4257_, v_a_4243_);
lean_dec_ref(v_a_4243_);
v___x_4259_ = lean_mk_string_unchecked(")", 1, 1);
v___x_4260_ = lean_string_append(v___x_4258_, v___x_4259_);
lean_dec_ref(v___x_4259_);
v___x_4261_ = lean_string_append(v___x_4253_, v___x_4260_);
lean_dec_ref(v___x_4260_);
if (v_isShared_4241_ == 0)
{
lean_ctor_set_tag(v___x_4240_, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4261_);
v___x_4263_ = v___x_4240_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v___x_4261_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
return v___x_4263_;
}
}
else
{
lean_object* v___x_4266_; 
lean_dec_ref(v_a_4243_);
if (v_isShared_4241_ == 0)
{
lean_ctor_set_tag(v___x_4240_, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4253_);
v___x_4266_ = v___x_4240_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v___x_4253_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
}
}
else
{
lean_object* v___x_4284_; lean_object* v___x_4285_; 
lean_dec(v_d_4236_);
v___x_4284_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4284_);
return v___x_4285_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_d_4286_, lean_object* v_key_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(v_d_4286_, v_key_4287_);
lean_dec_ref(v_key_4287_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(lean_object* v_context_4289_, lean_object* v_d_4290_){
_start:
{
lean_object* v___y_4293_; lean_object* v___y_4294_; lean_object* v___y_4299_; lean_object* v_received_4300_; lean_object* v___y_4319_; lean_object* v_a_4322_; lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___x_4351_ = lean_mk_string_unchecked("success", 7, 7);
lean_inc(v_d_4290_);
v___x_4352_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__4(v_d_4290_, v___x_4351_);
lean_dec_ref(v___x_4351_);
if (lean_obj_tag(v___x_4352_) == 0)
{
lean_object* v_a_4353_; 
v_a_4353_ = lean_ctor_get(v___x_4352_, 0);
lean_inc(v_a_4353_);
lean_dec_ref_known(v___x_4352_, 1);
v_a_4322_ = v_a_4353_;
goto v___jp_4321_;
}
else
{
lean_object* v_a_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; 
v_a_4354_ = lean_ctor_get(v___x_4352_, 0);
lean_inc(v_a_4354_);
lean_dec_ref_known(v___x_4352_, 1);
v___x_4355_ = lean_mk_string_unchecked("errors", 6, 6);
lean_inc(v_d_4290_);
v___x_4356_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5(v_d_4290_, v___x_4355_);
lean_dec_ref(v___x_4355_);
if (lean_obj_tag(v___x_4356_) == 0)
{
lean_object* v_a_4357_; 
lean_dec(v_a_4354_);
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
lean_inc(v_a_4357_);
lean_dec_ref_known(v___x_4356_, 1);
v_a_4322_ = v_a_4357_;
goto v___jp_4321_;
}
else
{
lean_object* v_a_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4367_; 
lean_dec(v_d_4290_);
v_a_4358_ = lean_ctor_get(v___x_4356_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4356_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4360_ = v___x_4356_;
v_isShared_4361_ = v_isSharedCheck_4367_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_a_4358_);
lean_dec(v___x_4356_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4367_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4362_; uint8_t v___x_4363_; lean_object* v___x_4365_; 
v___x_4362_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4362_, 0, v_a_4358_);
v___x_4363_ = lean_unbox(v_a_4354_);
lean_dec(v_a_4354_);
lean_ctor_set_uint8(v___x_4362_, sizeof(void*)*1, v___x_4363_);
if (v_isShared_4361_ == 0)
{
lean_ctor_set_tag(v___x_4360_, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4362_);
v___x_4365_ = v___x_4360_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v___x_4362_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
return v___x_4365_;
}
}
}
}
v___jp_4292_:
{
lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; 
v___x_4295_ = lean_string_append(v___y_4293_, v___y_4294_);
lean_dec_ref(v___y_4294_);
v___x_4296_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4296_, 0, v___x_4295_);
v___x_4297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
return v___x_4297_;
}
v___jp_4298_:
{
lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; uint8_t v___x_4312_; 
v___x_4301_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_4302_ = lean_string_append(v___x_4301_, v_context_4289_);
v___x_4303_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_4304_ = lean_string_append(v___x_4302_, v___x_4303_);
lean_dec_ref(v___x_4303_);
v___x_4305_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CachePurgeResult", 35, 35);
v___x_4306_ = lean_string_append(v___x_4304_, v___x_4305_);
lean_dec_ref(v___x_4305_);
v___x_4307_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_4308_ = lean_string_append(v___x_4306_, v___x_4307_);
lean_dec_ref(v___x_4307_);
v___x_4309_ = lean_string_append(v___x_4308_, v_received_4300_);
lean_dec_ref(v_received_4300_);
v___x_4310_ = lean_string_utf8_byte_size(v___y_4299_);
v___x_4311_ = lean_unsigned_to_nat(0u);
v___x_4312_ = lean_nat_dec_eq(v___x_4310_, v___x_4311_);
if (v___x_4312_ == 0)
{
lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
v___x_4313_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_4314_ = lean_string_append(v___x_4313_, v___y_4299_);
lean_dec_ref(v___y_4299_);
v___x_4315_ = lean_mk_string_unchecked(")", 1, 1);
v___x_4316_ = lean_string_append(v___x_4314_, v___x_4315_);
lean_dec_ref(v___x_4315_);
v___y_4293_ = v___x_4309_;
v___y_4294_ = v___x_4316_;
goto v___jp_4292_;
}
else
{
lean_object* v___x_4317_; 
lean_dec_ref(v___y_4299_);
v___x_4317_ = lean_mk_string_unchecked("", 0, 0);
v___y_4293_ = v___x_4309_;
v___y_4294_ = v___x_4317_;
goto v___jp_4292_;
}
}
v___jp_4318_:
{
lean_object* v___x_4320_; 
v___x_4320_ = l_Lasm_JS_Data_describe(v_d_4290_);
v___y_4299_ = v___y_4319_;
v_received_4300_ = v___x_4320_;
goto v___jp_4298_;
}
v___jp_4321_:
{
if (lean_obj_tag(v_d_4290_) == 9)
{
lean_object* v_value_4323_; lean_object* v_description_4324_; lean_object* v___x_4325_; uint8_t v___x_4326_; 
v_value_4323_ = lean_ctor_get(v_d_4290_, 0);
v_description_4324_ = lean_ctor_get(v_d_4290_, 1);
v___x_4325_ = lean_mk_string_unchecked("", 0, 0);
v___x_4326_ = lean_string_dec_eq(v_description_4324_, v___x_4325_);
if (v___x_4326_ == 0)
{
lean_dec_ref(v___x_4325_);
v___y_4319_ = v_a_4322_;
goto v___jp_4318_;
}
else
{
lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4348_; 
lean_inc(v_value_4323_);
v_isSharedCheck_4348_ = !lean_is_exclusive(v_d_4290_);
if (v_isSharedCheck_4348_ == 0)
{
lean_object* v_unused_4349_; lean_object* v_unused_4350_; 
v_unused_4349_ = lean_ctor_get(v_d_4290_, 1);
lean_dec(v_unused_4349_);
v_unused_4350_ = lean_ctor_get(v_d_4290_, 0);
lean_dec(v_unused_4350_);
v___x_4328_ = v_d_4290_;
v_isShared_4329_ = v_isSharedCheck_4348_;
goto v_resetjp_4327_;
}
else
{
lean_dec(v_d_4290_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4348_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
uint32_t v___x_4330_; uint64_t v___x_4331_; lean_object* v___x_4333_; 
v___x_4330_ = 206;
v___x_4331_ = 0ULL;
lean_inc(v_value_4323_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 1, v___x_4325_);
v___x_4333_ = v___x_4328_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v_value_4323_);
lean_ctor_set(v_reuseFailAlloc_4347_, 1, v___x_4325_);
v___x_4333_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
uint32_t v___x_4334_; lean_object* v___x_4335_; 
v___x_4334_ = lasm_js_value_handle(v_value_4323_);
lean_dec(v_value_4323_);
v___x_4335_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4330_, v___x_4331_, v___x_4333_, v___x_4334_);
lean_dec_ref(v___x_4333_);
if (lean_obj_tag(v___x_4335_) == 0)
{
lean_object* v_a_4336_; uint8_t v___x_4337_; 
v_a_4336_ = lean_ctor_get(v___x_4335_, 0);
lean_inc(v_a_4336_);
lean_dec_ref_known(v___x_4335_, 1);
v___x_4337_ = lean_string_validate_utf8(v_a_4336_);
if (v___x_4337_ == 0)
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
lean_dec(v_a_4336_);
v___x_4338_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_4339_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_4340_ = lean_unsigned_to_nat(193u);
v___x_4341_ = lean_unsigned_to_nat(46u);
v___x_4342_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_4343_ = l_mkPanicMessageWithDecl(v___x_4338_, v___x_4339_, v___x_4340_, v___x_4341_, v___x_4342_);
lean_dec_ref(v___x_4342_);
lean_dec_ref(v___x_4339_);
lean_dec_ref(v___x_4338_);
v___x_4344_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4343_);
v___y_4299_ = v_a_4322_;
v_received_4300_ = v___x_4344_;
goto v___jp_4298_;
}
else
{
lean_object* v___x_4345_; 
v___x_4345_ = lean_string_from_utf8_unchecked(v_a_4336_);
v___y_4299_ = v_a_4322_;
v_received_4300_ = v___x_4345_;
goto v___jp_4298_;
}
}
else
{
lean_object* v___x_4346_; 
lean_dec_ref_known(v___x_4335_, 1);
v___x_4346_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v___y_4299_ = v_a_4322_;
v_received_4300_ = v___x_4346_;
goto v___jp_4298_;
}
}
}
}
}
else
{
v___y_4319_ = v_a_4322_;
goto v___jp_4318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3___boxed(lean_object* v_context_4368_, lean_object* v_d_4369_, lean_object* v_a_4370_){
_start:
{
lean_object* v_res_4371_; 
v_res_4371_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(v_context_4368_, v_d_4369_);
lean_dec_ref(v_context_4368_);
return v_res_4371_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(lean_object* v_context_4372_, lean_object* v_x_4373_){
_start:
{
lean_object* v_val_4376_; 
if (lean_obj_tag(v_x_4373_) == 0)
{
lean_object* v_a_4378_; lean_object* v___x_4380_; uint8_t v_isShared_4381_; uint8_t v_isSharedCheck_4386_; 
v_a_4378_ = lean_ctor_get(v_x_4373_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v_x_4373_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4380_ = v_x_4373_;
v_isShared_4381_ = v_isSharedCheck_4386_;
goto v_resetjp_4379_;
}
else
{
lean_inc(v_a_4378_);
lean_dec(v_x_4373_);
v___x_4380_ = lean_box(0);
v_isShared_4381_ = v_isSharedCheck_4386_;
goto v_resetjp_4379_;
}
v_resetjp_4379_:
{
lean_object* v___x_4383_; 
if (v_isShared_4381_ == 0)
{
v___x_4383_ = v___x_4380_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_a_4378_);
v___x_4383_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
lean_object* v___x_4384_; 
v___x_4384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4384_, 0, v___x_4383_);
return v___x_4384_;
}
}
}
else
{
lean_object* v_a_4387_; lean_object* v___x_4389_; uint8_t v_isShared_4390_; uint8_t v_isSharedCheck_4400_; 
v_a_4387_ = lean_ctor_get(v_x_4373_, 0);
v_isSharedCheck_4400_ = !lean_is_exclusive(v_x_4373_);
if (v_isSharedCheck_4400_ == 0)
{
v___x_4389_ = v_x_4373_;
v_isShared_4390_ = v_isSharedCheck_4400_;
goto v_resetjp_4388_;
}
else
{
lean_inc(v_a_4387_);
lean_dec(v_x_4373_);
v___x_4389_ = lean_box(0);
v_isShared_4390_ = v_isSharedCheck_4400_;
goto v_resetjp_4388_;
}
v_resetjp_4388_:
{
lean_object* v___x_4391_; 
v___x_4391_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3(v_context_4372_, v_a_4387_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; lean_object* v___x_4394_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4392_);
lean_dec_ref_known(v___x_4391_, 1);
if (v_isShared_4390_ == 0)
{
lean_ctor_set(v___x_4389_, 0, v_a_4392_);
v___x_4394_ = v___x_4389_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v_a_4392_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
v_val_4376_ = v___x_4394_;
goto v___jp_4375_;
}
}
else
{
lean_object* v_a_4396_; lean_object* v___x_4398_; 
v_a_4396_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4396_);
lean_dec_ref_known(v___x_4391_, 1);
if (v_isShared_4390_ == 0)
{
lean_ctor_set_tag(v___x_4389_, 0);
lean_ctor_set(v___x_4389_, 0, v_a_4396_);
v___x_4398_ = v___x_4389_;
goto v_reusejp_4397_;
}
else
{
lean_object* v_reuseFailAlloc_4399_; 
v_reuseFailAlloc_4399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4399_, 0, v_a_4396_);
v___x_4398_ = v_reuseFailAlloc_4399_;
goto v_reusejp_4397_;
}
v_reusejp_4397_:
{
v_val_4376_ = v___x_4398_;
goto v___jp_4375_;
}
}
}
}
v___jp_4375_:
{
lean_object* v___x_4377_; 
v___x_4377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4377_, 0, v_val_4376_);
return v___x_4377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed(lean_object* v_context_4401_, lean_object* v_x_4402_, lean_object* v___y_4403_){
_start:
{
lean_object* v_res_4404_; 
v_res_4404_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0(v_context_4401_, v_x_4402_);
lean_dec_ref(v_context_4401_);
return v_res_4404_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(lean_object* v_context_4405_, uint32_t v_op_4406_, uint64_t v_flags_4407_, lean_object* v_payload_4408_, lean_object* v_failurePrefix_4409_){
_start:
{
lean_object* v___f_4411_; lean_object* v___f_4412_; lean_object* v___f_4413_; lean_object* v___f_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___f_4417_; lean_object* v___f_4418_; lean_object* v___x_4419_; uint8_t v___x_4420_; lean_object* v_val_4422_; lean_object* v___x_4425_; 
v___f_4411_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4411_, 0, v_context_4405_);
v___f_4412_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4412_, 0, v___f_4411_);
v___f_4413_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4413_, 0, v___f_4412_);
lean_inc_ref(v_failurePrefix_4409_);
v___f_4414_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4414_, 0, v_failurePrefix_4409_);
v___x_4415_ = lean_box_uint32(v_op_4406_);
v___x_4416_ = lean_box_uint64(v_flags_4407_);
lean_inc_ref(v___f_4413_);
v___f_4417_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4417_, 0, v_failurePrefix_4409_);
lean_closure_set(v___f_4417_, 1, v___x_4415_);
lean_closure_set(v___f_4417_, 2, v___x_4416_);
lean_closure_set(v___f_4417_, 3, v_payload_4408_);
lean_closure_set(v___f_4417_, 4, v___f_4414_);
lean_closure_set(v___f_4417_, 5, v___f_4413_);
lean_closure_set(v___f_4417_, 6, v___f_4413_);
v___f_4418_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4418_, 0, v___f_4417_);
v___x_4419_ = lean_unsigned_to_nat(0u);
v___x_4420_ = 0;
v___x_4425_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4425_) == 0)
{
lean_object* v_a_4426_; lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4433_; 
v_a_4426_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4428_ = v___x_4425_;
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
else
{
lean_inc(v_a_4426_);
lean_dec(v___x_4425_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
lean_object* v___x_4431_; 
if (v_isShared_4429_ == 0)
{
lean_ctor_set_tag(v___x_4428_, 1);
v___x_4431_ = v___x_4428_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_a_4426_);
v___x_4431_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
v_val_4422_ = v___x_4431_;
goto v___jp_4421_;
}
}
}
else
{
lean_object* v_a_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4441_; 
v_a_4434_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4441_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4441_ == 0)
{
v___x_4436_ = v___x_4425_;
v_isShared_4437_ = v_isSharedCheck_4441_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_a_4434_);
lean_dec(v___x_4425_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4441_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v___x_4439_; 
if (v_isShared_4437_ == 0)
{
lean_ctor_set_tag(v___x_4436_, 0);
v___x_4439_ = v___x_4436_;
goto v_reusejp_4438_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v_a_4434_);
v___x_4439_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4438_;
}
v_reusejp_4438_:
{
v_val_4422_ = v___x_4439_;
goto v___jp_4421_;
}
}
}
v___jp_4421_:
{
lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4423_, 0, v_val_4422_);
v___x_4424_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4419_, v___x_4420_, v___x_4423_, v___f_4418_);
return v___x_4424_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2___boxed(lean_object* v_context_4442_, lean_object* v_op_4443_, lean_object* v_flags_4444_, lean_object* v_payload_4445_, lean_object* v_failurePrefix_4446_, lean_object* v_a_4447_){
_start:
{
uint32_t v_op_boxed_4448_; uint64_t v_flags_boxed_4449_; lean_object* v_res_4450_; 
v_op_boxed_4448_ = lean_unbox_uint32(v_op_4443_);
lean_dec(v_op_4443_);
v_flags_boxed_4449_ = lean_unbox_uint64(v_flags_4444_);
lean_dec_ref(v_flags_4444_);
v_res_4450_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(v_context_4442_, v_op_boxed_4448_, v_flags_boxed_4449_, v_payload_4445_, v_failurePrefix_4446_);
return v_res_4450_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(uint8_t v_await_4451_, uint64_t v_extra_4452_){
_start:
{
uint8_t v___x_4453_; uint64_t v___x_4454_; uint64_t v___y_4456_; 
v___x_4453_ = 0;
v___x_4454_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_4453_);
if (v_await_4451_ == 0)
{
uint64_t v___x_4459_; 
v___x_4459_ = 0ULL;
v___y_4456_ = v___x_4459_;
goto v___jp_4455_;
}
else
{
uint64_t v___x_4460_; 
v___x_4460_ = 2ULL;
v___y_4456_ = v___x_4460_;
goto v___jp_4455_;
}
v___jp_4455_:
{
uint64_t v___x_4457_; uint64_t v___x_4458_; 
v___x_4457_ = lean_uint64_lor(v___x_4454_, v___y_4456_);
v___x_4458_ = lean_uint64_lor(v___x_4457_, v_extra_4452_);
return v___x_4458_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1___boxed(lean_object* v_await_4461_, lean_object* v_extra_4462_){
_start:
{
uint8_t v_await_boxed_4463_; uint64_t v_extra_boxed_4464_; uint64_t v_res_4465_; lean_object* v_r_4466_; 
v_await_boxed_4463_ = lean_unbox(v_await_4461_);
v_extra_boxed_4464_ = lean_unbox_uint64(v_extra_4462_);
lean_dec_ref(v_extra_4462_);
v_res_4465_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(v_await_boxed_4463_, v_extra_boxed_4464_);
v_r_4466_ = lean_box_uint64(v_res_4465_);
return v_r_4466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(lean_object* v_o_4467_, lean_object* v_name_4468_, lean_object* v_args_4469_){
_start:
{
lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; uint64_t v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; uint32_t v___x_4477_; uint8_t v___x_4478_; uint64_t v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; 
v___x_4471_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref(v___x_4471_);
v___x_4472_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4472_, 0, v_o_4467_);
lean_ctor_set(v___x_4472_, 1, v___x_4471_);
lean_inc_ref(v_name_4468_);
v___x_4473_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4473_, 0, v_name_4468_);
v___x_4474_ = 8ULL;
v___x_4475_ = lean_mk_string_unchecked("method ", 7, 7);
v___x_4476_ = lean_string_append(v___x_4475_, v_name_4468_);
lean_dec_ref(v_name_4468_);
v___x_4477_ = 205;
v___x_4478_ = 0;
v___x_4479_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__1(v___x_4478_, v___x_4474_);
v___x_4480_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4480_, 0, v_args_4469_);
v___x_4481_ = lean_unsigned_to_nat(3u);
v___x_4482_ = lean_mk_empty_array_with_capacity(v___x_4481_);
v___x_4483_ = lean_array_push(v___x_4482_, v___x_4472_);
v___x_4484_ = lean_array_push(v___x_4483_, v___x_4473_);
v___x_4485_ = lean_array_push(v___x_4484_, v___x_4480_);
v___x_4486_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4485_);
v___x_4487_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2(v___x_4476_, v___x_4477_, v___x_4479_, v___x_4486_, v___x_4471_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1___boxed(lean_object* v_o_4488_, lean_object* v_name_4489_, lean_object* v_args_4490_, lean_object* v___y_4491_){
_start:
{
lean_object* v_res_4492_; 
v_res_4492_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_o_4488_, v_name_4489_, v_args_4490_);
return v_res_4492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(lean_object* v_x_4493_){
_start:
{
if (lean_obj_tag(v_x_4493_) == 0)
{
lean_object* v___x_4494_; 
v___x_4494_ = lean_box(0);
return v___x_4494_;
}
else
{
lean_object* v_val_4495_; lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4505_; 
v_val_4495_ = lean_ctor_get(v_x_4493_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v_x_4493_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4497_ = v_x_4493_;
v_isShared_4498_ = v_isSharedCheck_4505_;
goto v_resetjp_4496_;
}
else
{
lean_inc(v_val_4495_);
lean_dec(v_x_4493_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4505_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
size_t v_sz_4499_; size_t v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4503_; 
v_sz_4499_ = lean_array_size(v_val_4495_);
v___x_4500_ = ((size_t)0ULL);
v___x_4501_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_4499_, v___x_4500_, v_val_4495_);
if (v_isShared_4498_ == 0)
{
lean_ctor_set_tag(v___x_4497_, 7);
lean_ctor_set(v___x_4497_, 0, v___x_4501_);
v___x_4503_ = v___x_4497_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v___x_4501_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge(lean_object* v_self_4506_, lean_object* v_options_4507_){
_start:
{
lean_object* v_tags_4509_; lean_object* v_pathPrefixes_4510_; lean_object* v_purgeEverything_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v_tags_4509_ = lean_ctor_get(v_options_4507_, 0);
lean_inc(v_tags_4509_);
v_pathPrefixes_4510_ = lean_ctor_get(v_options_4507_, 1);
lean_inc(v_pathPrefixes_4510_);
v_purgeEverything_4511_ = lean_ctor_get(v_options_4507_, 2);
lean_inc(v_purgeEverything_4511_);
lean_dec_ref(v_options_4507_);
v___x_4512_ = lean_mk_string_unchecked("purge", 5, 5);
v___x_4513_ = lean_mk_string_unchecked("tags", 4, 4);
v___x_4514_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_tags_4509_);
v___x_4515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4513_);
lean_ctor_set(v___x_4515_, 1, v___x_4514_);
v___x_4516_ = lean_mk_string_unchecked("pathPrefixes", 12, 12);
v___x_4517_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_pathPrefixes_4510_);
v___x_4518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4516_);
lean_ctor_set(v___x_4518_, 1, v___x_4517_);
v___x_4519_ = lean_mk_string_unchecked("purgeEverything", 15, 15);
v___x_4520_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_purgeEverything_4511_);
lean_dec(v_purgeEverything_4511_);
v___x_4521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4519_);
lean_ctor_set(v___x_4521_, 1, v___x_4520_);
v___x_4522_ = lean_unsigned_to_nat(3u);
v___x_4523_ = lean_mk_empty_array_with_capacity(v___x_4522_);
v___x_4524_ = lean_array_push(v___x_4523_, v___x_4515_);
v___x_4525_ = lean_array_push(v___x_4524_, v___x_4518_);
v___x_4526_ = lean_array_push(v___x_4525_, v___x_4521_);
v___x_4527_ = l_Lasm_JS_Web_Support_fields(v___x_4526_);
lean_dec_ref(v___x_4526_);
v___x_4528_ = lean_unsigned_to_nat(1u);
v___x_4529_ = lean_mk_empty_array_with_capacity(v___x_4528_);
v___x_4530_ = lean_array_push(v___x_4529_, v___x_4527_);
v___x_4531_ = l_Lasm_JS_Web_Support_args(v___x_4530_);
v___x_4532_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_self_4506_, v___x_4512_, v___x_4531_);
return v___x_4532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_purge___boxed(lean_object* v_self_4533_, lean_object* v_options_4534_, lean_object* v_a_4535_){
_start:
{
lean_object* v_res_4536_; 
v_res_4536_ = l_Lasm_JS_Cloudflare_CacheContext_purge(v_self_4533_, v_options_4534_);
return v_res_4536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate(lean_object* v_self_4537_, lean_object* v_options_4538_){
_start:
{
lean_object* v_tags_4540_; lean_object* v_pathPrefixes_4541_; lean_object* v_purgeEverything_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; 
v_tags_4540_ = lean_ctor_get(v_options_4538_, 0);
lean_inc(v_tags_4540_);
v_pathPrefixes_4541_ = lean_ctor_get(v_options_4538_, 1);
lean_inc(v_pathPrefixes_4541_);
v_purgeEverything_4542_ = lean_ctor_get(v_options_4538_, 2);
lean_inc(v_purgeEverything_4542_);
lean_dec_ref(v_options_4538_);
v___x_4543_ = lean_mk_string_unchecked("invalidate", 10, 10);
v___x_4544_ = lean_mk_string_unchecked("tags", 4, 4);
v___x_4545_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_tags_4540_);
v___x_4546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4546_, 0, v___x_4544_);
lean_ctor_set(v___x_4546_, 1, v___x_4545_);
v___x_4547_ = lean_mk_string_unchecked("pathPrefixes", 12, 12);
v___x_4548_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__0(v_pathPrefixes_4541_);
v___x_4549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4549_, 0, v___x_4547_);
lean_ctor_set(v___x_4549_, 1, v___x_4548_);
v___x_4550_ = lean_mk_string_unchecked("purgeEverything", 15, 15);
v___x_4551_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_purgeEverything_4542_);
lean_dec(v_purgeEverything_4542_);
v___x_4552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4552_, 0, v___x_4550_);
lean_ctor_set(v___x_4552_, 1, v___x_4551_);
v___x_4553_ = lean_unsigned_to_nat(3u);
v___x_4554_ = lean_mk_empty_array_with_capacity(v___x_4553_);
v___x_4555_ = lean_array_push(v___x_4554_, v___x_4546_);
v___x_4556_ = lean_array_push(v___x_4555_, v___x_4549_);
v___x_4557_ = lean_array_push(v___x_4556_, v___x_4552_);
v___x_4558_ = l_Lasm_JS_Web_Support_fields(v___x_4557_);
lean_dec_ref(v___x_4557_);
v___x_4559_ = lean_unsigned_to_nat(1u);
v___x_4560_ = lean_mk_empty_array_with_capacity(v___x_4559_);
v___x_4561_ = lean_array_push(v___x_4560_, v___x_4558_);
v___x_4562_ = l_Lasm_JS_Web_Support_args(v___x_4561_);
v___x_4563_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1(v_self_4537_, v___x_4543_, v___x_4562_);
return v___x_4563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CacheContext_invalidate___boxed(lean_object* v_self_4564_, lean_object* v_options_4565_, lean_object* v_a_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l_Lasm_JS_Cloudflare_CacheContext_invalidate(v_self_4564_, v_options_4565_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(lean_object* v_self_4568_){
_start:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4570_ = lean_mk_string_unchecked("scheduledTime", 13, 13);
v___x_4571_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_4568_, v___x_4570_);
return v___x_4571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime___boxed(lean_object* v_self_4572_, lean_object* v_a_4573_){
_start:
{
lean_object* v_res_4574_; 
v_res_4574_ = l_Lasm_JS_Cloudflare_ScheduledController_scheduledTime(v_self_4572_);
return v_res_4574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron(lean_object* v_self_4575_){
_start:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; 
v___x_4577_ = lean_mk_string_unchecked("cron", 4, 4);
v___x_4578_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4575_, v___x_4577_);
return v___x_4578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_cron___boxed(lean_object* v_self_4579_, lean_object* v_a_4580_){
_start:
{
lean_object* v_res_4581_; 
v_res_4581_ = l_Lasm_JS_Cloudflare_ScheduledController_cron(v_self_4579_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry(lean_object* v_self_4582_){
_start:
{
lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; 
v___x_4584_ = lean_mk_string_unchecked("noRetry", 7, 7);
v___x_4585_ = lean_unsigned_to_nat(0u);
v___x_4586_ = lean_mk_empty_array_with_capacity(v___x_4585_);
v___x_4587_ = l_Lasm_JS_Web_Support_args(v___x_4586_);
v___x_4588_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4582_, v___x_4584_, v___x_4587_);
return v___x_4588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledController_noRetry___boxed(lean_object* v_self_4589_, lean_object* v_a_4590_){
_start:
{
lean_object* v_res_4591_; 
v_res_4591_ = l_Lasm_JS_Cloudflare_ScheduledController_noRetry(v_self_4589_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_aud(lean_object* v_self_4592_){
_start:
{
lean_object* v___x_4594_; lean_object* v___x_4595_; 
v___x_4594_ = lean_mk_string_unchecked("aud", 3, 3);
v___x_4595_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_4592_, v___x_4594_);
return v___x_4595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_aud___boxed(lean_object* v_self_4596_, lean_object* v_a_4597_){
_start:
{
lean_object* v_res_4598_; 
v_res_4598_ = l_Lasm_JS_Cloudflare_CloudflareAccessContext_aud(v_self_4596_);
return v_res_4598_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6_spec__7(size_t v_sz_4599_, size_t v_i_4600_, lean_object* v_bs_4601_){
_start:
{
uint8_t v___x_4602_; 
v___x_4602_ = lean_usize_dec_lt(v_i_4600_, v_sz_4599_);
if (v___x_4602_ == 0)
{
lean_object* v___x_4603_; 
v___x_4603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4603_, 0, v_bs_4601_);
return v___x_4603_;
}
else
{
lean_object* v_v_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; 
v_v_4604_ = lean_array_uget_borrowed(v_bs_4601_, v_i_4600_);
v___x_4605_ = lean_mk_string_unchecked("id", 2, 2);
lean_inc(v_v_4604_);
v___x_4606_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_v_4604_, v___x_4605_);
lean_dec_ref(v___x_4605_);
if (lean_obj_tag(v___x_4606_) == 0)
{
lean_object* v_a_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4614_; 
lean_dec_ref(v_bs_4601_);
v_a_4607_ = lean_ctor_get(v___x_4606_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4606_);
if (v_isSharedCheck_4614_ == 0)
{
v___x_4609_ = v___x_4606_;
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_a_4607_);
lean_dec(v___x_4606_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4612_; 
if (v_isShared_4610_ == 0)
{
v___x_4612_ = v___x_4609_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_a_4607_);
v___x_4612_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
return v___x_4612_;
}
}
}
else
{
lean_object* v_a_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; 
v_a_4615_ = lean_ctor_get(v___x_4606_, 0);
lean_inc(v_a_4615_);
lean_dec_ref_known(v___x_4606_, 1);
v___x_4616_ = lean_mk_string_unchecked("name", 4, 4);
lean_inc(v_v_4604_);
v___x_4617_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_v_4604_, v___x_4616_);
lean_dec_ref(v___x_4616_);
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_object* v_a_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4625_; 
lean_dec(v_a_4615_);
lean_dec_ref(v_bs_4601_);
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
v___x_4623_ = v___x_4620_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4618_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
return v___x_4623_;
}
}
}
else
{
lean_object* v_a_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; 
v_a_4626_ = lean_ctor_get(v___x_4617_, 0);
lean_inc(v_a_4626_);
lean_dec_ref_known(v___x_4617_, 1);
v___x_4627_ = lean_mk_string_unchecked("email", 5, 5);
lean_inc(v_v_4604_);
v___x_4628_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_v_4604_, v___x_4627_);
lean_dec_ref(v___x_4627_);
if (lean_obj_tag(v___x_4628_) == 0)
{
lean_object* v_a_4629_; lean_object* v___x_4631_; uint8_t v_isShared_4632_; uint8_t v_isSharedCheck_4636_; 
lean_dec(v_a_4626_);
lean_dec(v_a_4615_);
lean_dec_ref(v_bs_4601_);
v_a_4629_ = lean_ctor_get(v___x_4628_, 0);
v_isSharedCheck_4636_ = !lean_is_exclusive(v___x_4628_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4631_ = v___x_4628_;
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
else
{
lean_inc(v_a_4629_);
lean_dec(v___x_4628_);
v___x_4631_ = lean_box(0);
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
v_resetjp_4630_:
{
lean_object* v___x_4634_; 
if (v_isShared_4632_ == 0)
{
v___x_4634_ = v___x_4631_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_a_4629_);
v___x_4634_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
return v___x_4634_;
}
}
}
else
{
lean_object* v_a_4637_; lean_object* v___x_4638_; lean_object* v_bs_x27_4639_; lean_object* v___x_4640_; size_t v___x_4641_; size_t v___x_4642_; lean_object* v___x_4643_; 
v_a_4637_ = lean_ctor_get(v___x_4628_, 0);
lean_inc(v_a_4637_);
lean_dec_ref_known(v___x_4628_, 1);
v___x_4638_ = lean_unsigned_to_nat(0u);
v_bs_x27_4639_ = lean_array_uset(v_bs_4601_, v_i_4600_, v___x_4638_);
v___x_4640_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4640_, 0, v_a_4615_);
lean_ctor_set(v___x_4640_, 1, v_a_4626_);
lean_ctor_set(v___x_4640_, 2, v_a_4637_);
v___x_4641_ = ((size_t)1ULL);
v___x_4642_ = lean_usize_add(v_i_4600_, v___x_4641_);
v___x_4643_ = lean_array_uset(v_bs_x27_4639_, v_i_4600_, v___x_4640_);
v_i_4600_ = v___x_4642_;
v_bs_4601_ = v___x_4643_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6_spec__7___boxed(lean_object* v_sz_4645_, lean_object* v_i_4646_, lean_object* v_bs_4647_){
_start:
{
size_t v_sz_boxed_4648_; size_t v_i_boxed_4649_; lean_object* v_res_4650_; 
v_sz_boxed_4648_ = lean_unbox_usize(v_sz_4645_);
lean_dec(v_sz_4645_);
v_i_boxed_4649_ = lean_unbox_usize(v_i_4646_);
lean_dec(v_i_4646_);
v_res_4650_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6_spec__7(v_sz_boxed_4648_, v_i_boxed_4649_, v_bs_4647_);
return v_res_4650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6(lean_object* v_d_4651_, lean_object* v_key_4652_){
_start:
{
if (lean_obj_tag(v_d_4651_) == 8)
{
lean_object* v___x_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4709_; 
v___x_4656_ = l_Lasm_JS_Data_field(v_d_4651_, v_key_4652_);
v_isSharedCheck_4709_ = !lean_is_exclusive(v_d_4651_);
if (v_isSharedCheck_4709_ == 0)
{
lean_object* v_unused_4710_; 
v_unused_4710_ = lean_ctor_get(v_d_4651_, 0);
lean_dec(v_unused_4710_);
v___x_4658_ = v_d_4651_;
v_isShared_4659_ = v_isSharedCheck_4709_;
goto v_resetjp_4657_;
}
else
{
lean_dec(v_d_4651_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4709_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v_a_4661_; 
switch(lean_obj_tag(v___x_4656_))
{
case 1:
{
lean_del_object(v___x_4658_);
goto v___jp_4653_;
}
case 0:
{
lean_del_object(v___x_4658_);
goto v___jp_4653_;
}
default: 
{
if (lean_obj_tag(v___x_4656_) == 7)
{
lean_object* v_items_4686_; size_t v_sz_4687_; size_t v___x_4688_; lean_object* v___x_4689_; 
v_items_4686_ = lean_ctor_get(v___x_4656_, 0);
lean_inc_ref(v_items_4686_);
v_sz_4687_ = lean_array_size(v_items_4686_);
v___x_4688_ = ((size_t)0ULL);
v___x_4689_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6_spec__7(v_sz_4687_, v___x_4688_, v_items_4686_);
if (lean_obj_tag(v___x_4689_) == 0)
{
lean_object* v_a_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; uint8_t v___x_4694_; 
v_a_4690_ = lean_ctor_get(v___x_4689_, 0);
lean_inc(v_a_4690_);
lean_dec_ref_known(v___x_4689_, 1);
v___x_4691_ = lean_mk_string_unchecked("an element is not Lasm.JS.Cloudflare.CloudflareAccessIdentityGroups", 67, 67);
v___x_4692_ = lean_string_utf8_byte_size(v_a_4690_);
v___x_4693_ = lean_unsigned_to_nat(0u);
v___x_4694_ = lean_nat_dec_eq(v___x_4692_, v___x_4693_);
if (v___x_4694_ == 0)
{
lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; 
v___x_4695_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_4696_ = lean_string_append(v___x_4695_, v_a_4690_);
lean_dec(v_a_4690_);
v___x_4697_ = lean_string_append(v___x_4691_, v___x_4696_);
lean_dec_ref(v___x_4696_);
v_a_4661_ = v___x_4697_;
goto v___jp_4660_;
}
else
{
lean_dec(v_a_4690_);
v_a_4661_ = v___x_4691_;
goto v___jp_4660_;
}
}
else
{
if (lean_obj_tag(v___x_4689_) == 0)
{
lean_object* v_a_4698_; 
v_a_4698_ = lean_ctor_get(v___x_4689_, 0);
lean_inc(v_a_4698_);
lean_dec_ref_known(v___x_4689_, 1);
v_a_4661_ = v_a_4698_;
goto v___jp_4660_;
}
else
{
lean_object* v_a_4699_; lean_object* v___x_4701_; uint8_t v_isShared_4702_; uint8_t v_isSharedCheck_4707_; 
lean_dec_ref_known(v___x_4656_, 1);
lean_del_object(v___x_4658_);
v_a_4699_ = lean_ctor_get(v___x_4689_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4689_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4701_ = v___x_4689_;
v_isShared_4702_ = v_isSharedCheck_4707_;
goto v_resetjp_4700_;
}
else
{
lean_inc(v_a_4699_);
lean_dec(v___x_4689_);
v___x_4701_ = lean_box(0);
v_isShared_4702_ = v_isSharedCheck_4707_;
goto v_resetjp_4700_;
}
v_resetjp_4700_:
{
lean_object* v___x_4703_; lean_object* v___x_4705_; 
v___x_4703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4703_, 0, v_a_4699_);
if (v_isShared_4702_ == 0)
{
lean_ctor_set(v___x_4701_, 0, v___x_4703_);
v___x_4705_ = v___x_4701_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v___x_4703_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
return v___x_4705_;
}
}
}
}
}
else
{
lean_object* v___x_4708_; 
v___x_4708_ = lean_mk_string_unchecked("", 0, 0);
v_a_4661_ = v___x_4708_;
goto v___jp_4660_;
}
}
}
v___jp_4660_:
{
lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; uint8_t v___x_4674_; 
v___x_4662_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4663_ = lean_string_append(v___x_4662_, v_key_4652_);
v___x_4664_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4665_ = lean_string_append(v___x_4663_, v___x_4664_);
lean_dec_ref(v___x_4664_);
v___x_4666_ = lean_mk_string_unchecked("Option (Array (Lasm.JS.Cloudflare.CloudflareAccessIdentityGroups))", 66, 66);
v___x_4667_ = lean_string_append(v___x_4665_, v___x_4666_);
lean_dec_ref(v___x_4666_);
v___x_4668_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4669_ = lean_string_append(v___x_4667_, v___x_4668_);
lean_dec_ref(v___x_4668_);
v___x_4670_ = l_Lasm_JS_Data_describe(v___x_4656_);
v___x_4671_ = lean_string_append(v___x_4669_, v___x_4670_);
lean_dec_ref(v___x_4670_);
v___x_4672_ = lean_string_utf8_byte_size(v_a_4661_);
v___x_4673_ = lean_unsigned_to_nat(0u);
v___x_4674_ = lean_nat_dec_eq(v___x_4672_, v___x_4673_);
if (v___x_4674_ == 0)
{
lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4681_; 
v___x_4675_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_4676_ = lean_string_append(v___x_4675_, v_a_4661_);
lean_dec_ref(v_a_4661_);
v___x_4677_ = lean_mk_string_unchecked(")", 1, 1);
v___x_4678_ = lean_string_append(v___x_4676_, v___x_4677_);
lean_dec_ref(v___x_4677_);
v___x_4679_ = lean_string_append(v___x_4671_, v___x_4678_);
lean_dec_ref(v___x_4678_);
if (v_isShared_4659_ == 0)
{
lean_ctor_set_tag(v___x_4658_, 0);
lean_ctor_set(v___x_4658_, 0, v___x_4679_);
v___x_4681_ = v___x_4658_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v___x_4679_);
v___x_4681_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
return v___x_4681_;
}
}
else
{
lean_object* v___x_4684_; 
lean_dec_ref(v_a_4661_);
if (v_isShared_4659_ == 0)
{
lean_ctor_set_tag(v___x_4658_, 0);
lean_ctor_set(v___x_4658_, 0, v___x_4671_);
v___x_4684_ = v___x_4658_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v___x_4671_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
return v___x_4684_;
}
}
}
}
}
else
{
lean_object* v___x_4711_; lean_object* v___x_4712_; 
lean_dec(v_d_4651_);
v___x_4711_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4712_, 0, v___x_4711_);
return v___x_4712_;
}
v___jp_4653_:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4654_ = lean_box(0);
v___x_4655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4654_);
return v___x_4655_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6___boxed(lean_object* v_d_4713_, lean_object* v_key_4714_){
_start:
{
lean_object* v_res_4715_; 
v_res_4715_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6(v_d_4713_, v_key_4714_);
lean_dec_ref(v_key_4714_);
return v_res_4715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__5(lean_object* v_d_4716_, lean_object* v_key_4717_){
_start:
{
if (lean_obj_tag(v_d_4716_) == 8)
{
lean_object* v___x_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4767_; 
v___x_4721_ = l_Lasm_JS_Data_field(v_d_4716_, v_key_4717_);
v_isSharedCheck_4767_ = !lean_is_exclusive(v_d_4716_);
if (v_isSharedCheck_4767_ == 0)
{
lean_object* v_unused_4768_; 
v_unused_4768_ = lean_ctor_get(v_d_4716_, 0);
lean_dec(v_unused_4768_);
v___x_4723_ = v_d_4716_;
v_isShared_4724_ = v_isSharedCheck_4767_;
goto v_resetjp_4722_;
}
else
{
lean_dec(v_d_4716_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4767_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
switch(lean_obj_tag(v___x_4721_))
{
case 1:
{
lean_del_object(v___x_4723_);
goto v___jp_4718_;
}
case 0:
{
lean_del_object(v___x_4723_);
goto v___jp_4718_;
}
default: 
{
lean_object* v___x_4725_; lean_object* v___x_4726_; 
v___x_4725_ = lean_mk_string_unchecked("country", 7, 7);
lean_inc(v___x_4721_);
v___x_4726_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v___x_4721_, v___x_4725_);
lean_dec_ref(v___x_4725_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4755_; 
lean_del_object(v___x_4723_);
v_a_4727_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4755_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4755_ == 0)
{
v___x_4729_ = v___x_4726_;
v_isShared_4730_ = v_isSharedCheck_4755_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4726_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4755_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; uint8_t v___x_4743_; 
v___x_4731_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4732_ = lean_string_append(v___x_4731_, v_key_4717_);
v___x_4733_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4734_ = lean_string_append(v___x_4732_, v___x_4733_);
lean_dec_ref(v___x_4733_);
v___x_4735_ = lean_mk_string_unchecked("Option (Lasm.JS.Cloudflare.CloudflareAccessIdentityGeo)", 55, 55);
v___x_4736_ = lean_string_append(v___x_4734_, v___x_4735_);
lean_dec_ref(v___x_4735_);
v___x_4737_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4738_ = lean_string_append(v___x_4736_, v___x_4737_);
lean_dec_ref(v___x_4737_);
v___x_4739_ = l_Lasm_JS_Data_describe(v___x_4721_);
v___x_4740_ = lean_string_append(v___x_4738_, v___x_4739_);
lean_dec_ref(v___x_4739_);
v___x_4741_ = lean_string_utf8_byte_size(v_a_4727_);
v___x_4742_ = lean_unsigned_to_nat(0u);
v___x_4743_ = lean_nat_dec_eq(v___x_4741_, v___x_4742_);
if (v___x_4743_ == 0)
{
lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4750_; 
v___x_4744_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_4745_ = lean_string_append(v___x_4744_, v_a_4727_);
lean_dec(v_a_4727_);
v___x_4746_ = lean_mk_string_unchecked(")", 1, 1);
v___x_4747_ = lean_string_append(v___x_4745_, v___x_4746_);
lean_dec_ref(v___x_4746_);
v___x_4748_ = lean_string_append(v___x_4740_, v___x_4747_);
lean_dec_ref(v___x_4747_);
if (v_isShared_4730_ == 0)
{
lean_ctor_set(v___x_4729_, 0, v___x_4748_);
v___x_4750_ = v___x_4729_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v___x_4748_);
v___x_4750_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
return v___x_4750_;
}
}
else
{
lean_object* v___x_4753_; 
lean_dec(v_a_4727_);
if (v_isShared_4730_ == 0)
{
lean_ctor_set(v___x_4729_, 0, v___x_4740_);
v___x_4753_ = v___x_4729_;
goto v_reusejp_4752_;
}
else
{
lean_object* v_reuseFailAlloc_4754_; 
v_reuseFailAlloc_4754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4754_, 0, v___x_4740_);
v___x_4753_ = v_reuseFailAlloc_4754_;
goto v_reusejp_4752_;
}
v_reusejp_4752_:
{
return v___x_4753_;
}
}
}
}
else
{
lean_object* v_a_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4766_; 
lean_dec(v___x_4721_);
v_a_4756_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4766_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4766_ == 0)
{
v___x_4758_ = v___x_4726_;
v_isShared_4759_ = v_isSharedCheck_4766_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_a_4756_);
lean_dec(v___x_4726_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4766_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v___x_4761_; 
if (v_isShared_4724_ == 0)
{
lean_ctor_set_tag(v___x_4723_, 1);
lean_ctor_set(v___x_4723_, 0, v_a_4756_);
v___x_4761_ = v___x_4723_;
goto v_reusejp_4760_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v_a_4756_);
v___x_4761_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4760_;
}
v_reusejp_4760_:
{
lean_object* v___x_4763_; 
if (v_isShared_4759_ == 0)
{
lean_ctor_set(v___x_4758_, 0, v___x_4761_);
v___x_4763_ = v___x_4758_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4764_; 
v_reuseFailAlloc_4764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4764_, 0, v___x_4761_);
v___x_4763_ = v_reuseFailAlloc_4764_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
return v___x_4763_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_4769_; lean_object* v___x_4770_; 
lean_dec(v_d_4716_);
v___x_4769_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4770_, 0, v___x_4769_);
return v___x_4770_;
}
v___jp_4718_:
{
lean_object* v___x_4719_; lean_object* v___x_4720_; 
v___x_4719_ = lean_box(0);
v___x_4720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4719_);
return v___x_4720_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_d_4771_, lean_object* v_key_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__5(v_d_4771_, v_key_4772_);
lean_dec_ref(v_key_4772_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__3(lean_object* v_d_4774_, lean_object* v_key_4775_){
_start:
{
if (lean_obj_tag(v_d_4774_) == 8)
{
lean_object* v___x_4779_; lean_object* v___x_4781_; uint8_t v_isShared_4782_; uint8_t v_isSharedCheck_4832_; 
v___x_4779_ = l_Lasm_JS_Data_field(v_d_4774_, v_key_4775_);
v_isSharedCheck_4832_ = !lean_is_exclusive(v_d_4774_);
if (v_isSharedCheck_4832_ == 0)
{
lean_object* v_unused_4833_; 
v_unused_4833_ = lean_ctor_get(v_d_4774_, 0);
lean_dec(v_unused_4833_);
v___x_4781_ = v_d_4774_;
v_isShared_4782_ = v_isSharedCheck_4832_;
goto v_resetjp_4780_;
}
else
{
lean_dec(v_d_4774_);
v___x_4781_ = lean_box(0);
v_isShared_4782_ = v_isSharedCheck_4832_;
goto v_resetjp_4780_;
}
v_resetjp_4780_:
{
lean_object* v_a_4784_; 
switch(lean_obj_tag(v___x_4779_))
{
case 1:
{
lean_del_object(v___x_4781_);
goto v___jp_4776_;
}
case 0:
{
lean_del_object(v___x_4781_);
goto v___jp_4776_;
}
default: 
{
if (lean_obj_tag(v___x_4779_) == 7)
{
lean_object* v_items_4809_; size_t v_sz_4810_; size_t v___x_4811_; lean_object* v___x_4812_; 
v_items_4809_ = lean_ctor_get(v___x_4779_, 0);
lean_inc_ref(v_items_4809_);
v_sz_4810_ = lean_array_size(v_items_4809_);
v___x_4811_ = ((size_t)0ULL);
v___x_4812_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_getAll_spec__0_spec__1_spec__2_spec__3(v_sz_4810_, v___x_4811_, v_items_4809_);
if (lean_obj_tag(v___x_4812_) == 0)
{
lean_object* v_a_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; uint8_t v___x_4817_; 
v_a_4813_ = lean_ctor_get(v___x_4812_, 0);
lean_inc(v_a_4813_);
lean_dec_ref_known(v___x_4812_, 1);
v___x_4814_ = lean_mk_string_unchecked("an element is not String", 24, 24);
v___x_4815_ = lean_string_utf8_byte_size(v_a_4813_);
v___x_4816_ = lean_unsigned_to_nat(0u);
v___x_4817_ = lean_nat_dec_eq(v___x_4815_, v___x_4816_);
if (v___x_4817_ == 0)
{
lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; 
v___x_4818_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_4819_ = lean_string_append(v___x_4818_, v_a_4813_);
lean_dec(v_a_4813_);
v___x_4820_ = lean_string_append(v___x_4814_, v___x_4819_);
lean_dec_ref(v___x_4819_);
v_a_4784_ = v___x_4820_;
goto v___jp_4783_;
}
else
{
lean_dec(v_a_4813_);
v_a_4784_ = v___x_4814_;
goto v___jp_4783_;
}
}
else
{
if (lean_obj_tag(v___x_4812_) == 0)
{
lean_object* v_a_4821_; 
v_a_4821_ = lean_ctor_get(v___x_4812_, 0);
lean_inc(v_a_4821_);
lean_dec_ref_known(v___x_4812_, 1);
v_a_4784_ = v_a_4821_;
goto v___jp_4783_;
}
else
{
lean_object* v_a_4822_; lean_object* v___x_4824_; uint8_t v_isShared_4825_; uint8_t v_isSharedCheck_4830_; 
lean_dec_ref_known(v___x_4779_, 1);
lean_del_object(v___x_4781_);
v_a_4822_ = lean_ctor_get(v___x_4812_, 0);
v_isSharedCheck_4830_ = !lean_is_exclusive(v___x_4812_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4824_ = v___x_4812_;
v_isShared_4825_ = v_isSharedCheck_4830_;
goto v_resetjp_4823_;
}
else
{
lean_inc(v_a_4822_);
lean_dec(v___x_4812_);
v___x_4824_ = lean_box(0);
v_isShared_4825_ = v_isSharedCheck_4830_;
goto v_resetjp_4823_;
}
v_resetjp_4823_:
{
lean_object* v___x_4826_; lean_object* v___x_4828_; 
v___x_4826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4826_, 0, v_a_4822_);
if (v_isShared_4825_ == 0)
{
lean_ctor_set(v___x_4824_, 0, v___x_4826_);
v___x_4828_ = v___x_4824_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4829_; 
v_reuseFailAlloc_4829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4829_, 0, v___x_4826_);
v___x_4828_ = v_reuseFailAlloc_4829_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
return v___x_4828_;
}
}
}
}
}
else
{
lean_object* v___x_4831_; 
v___x_4831_ = lean_mk_string_unchecked("", 0, 0);
v_a_4784_ = v___x_4831_;
goto v___jp_4783_;
}
}
}
v___jp_4783_:
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; uint8_t v___x_4797_; 
v___x_4785_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4786_ = lean_string_append(v___x_4785_, v_key_4775_);
v___x_4787_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4788_ = lean_string_append(v___x_4786_, v___x_4787_);
lean_dec_ref(v___x_4787_);
v___x_4789_ = lean_mk_string_unchecked("Option (Array (String))", 23, 23);
v___x_4790_ = lean_string_append(v___x_4788_, v___x_4789_);
lean_dec_ref(v___x_4789_);
v___x_4791_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4792_ = lean_string_append(v___x_4790_, v___x_4791_);
lean_dec_ref(v___x_4791_);
v___x_4793_ = l_Lasm_JS_Data_describe(v___x_4779_);
v___x_4794_ = lean_string_append(v___x_4792_, v___x_4793_);
lean_dec_ref(v___x_4793_);
v___x_4795_ = lean_string_utf8_byte_size(v_a_4784_);
v___x_4796_ = lean_unsigned_to_nat(0u);
v___x_4797_ = lean_nat_dec_eq(v___x_4795_, v___x_4796_);
if (v___x_4797_ == 0)
{
lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4804_; 
v___x_4798_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_4799_ = lean_string_append(v___x_4798_, v_a_4784_);
lean_dec_ref(v_a_4784_);
v___x_4800_ = lean_mk_string_unchecked(")", 1, 1);
v___x_4801_ = lean_string_append(v___x_4799_, v___x_4800_);
lean_dec_ref(v___x_4800_);
v___x_4802_ = lean_string_append(v___x_4794_, v___x_4801_);
lean_dec_ref(v___x_4801_);
if (v_isShared_4782_ == 0)
{
lean_ctor_set_tag(v___x_4781_, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4802_);
v___x_4804_ = v___x_4781_;
goto v_reusejp_4803_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v___x_4802_);
v___x_4804_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4803_;
}
v_reusejp_4803_:
{
return v___x_4804_;
}
}
else
{
lean_object* v___x_4807_; 
lean_dec_ref(v_a_4784_);
if (v_isShared_4782_ == 0)
{
lean_ctor_set_tag(v___x_4781_, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4794_);
v___x_4807_ = v___x_4781_;
goto v_reusejp_4806_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v___x_4794_);
v___x_4807_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4806_;
}
v_reusejp_4806_:
{
return v___x_4807_;
}
}
}
}
}
else
{
lean_object* v___x_4834_; lean_object* v___x_4835_; 
lean_dec(v_d_4774_);
v___x_4834_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4835_, 0, v___x_4834_);
return v___x_4835_;
}
v___jp_4776_:
{
lean_object* v___x_4777_; lean_object* v___x_4778_; 
v___x_4777_ = lean_box(0);
v___x_4778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4778_, 0, v___x_4777_);
return v___x_4778_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_d_4836_, lean_object* v_key_4837_){
_start:
{
lean_object* v_res_4838_; 
v_res_4838_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__3(v_d_4836_, v_key_4837_);
lean_dec_ref(v_key_4837_);
return v_res_4838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__2(lean_object* v_d_4839_, lean_object* v_key_4840_){
_start:
{
if (lean_obj_tag(v_d_4839_) == 8)
{
lean_object* v___x_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4876_; 
v___x_4844_ = l_Lasm_JS_Data_field(v_d_4839_, v_key_4840_);
v_isSharedCheck_4876_ = !lean_is_exclusive(v_d_4839_);
if (v_isSharedCheck_4876_ == 0)
{
lean_object* v_unused_4877_; 
v_unused_4877_ = lean_ctor_get(v_d_4839_, 0);
lean_dec(v_unused_4877_);
v___x_4846_ = v_d_4839_;
v_isShared_4847_ = v_isSharedCheck_4876_;
goto v_resetjp_4845_;
}
else
{
lean_dec(v_d_4839_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4876_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
switch(lean_obj_tag(v___x_4844_))
{
case 1:
{
lean_del_object(v___x_4846_);
goto v___jp_4841_;
}
case 0:
{
lean_del_object(v___x_4846_);
goto v___jp_4841_;
}
default: 
{
if (lean_obj_tag(v___x_4844_) == 3)
{
double v_n_4848_; lean_object* v___x_4849_; lean_object* v___x_4851_; 
v_n_4848_ = lean_ctor_get_float(v___x_4844_, 0);
lean_dec_ref_known(v___x_4844_, 0);
v___x_4849_ = lean_box_float(v_n_4848_);
if (v_isShared_4847_ == 0)
{
lean_ctor_set_tag(v___x_4846_, 1);
lean_ctor_set(v___x_4846_, 0, v___x_4849_);
v___x_4851_ = v___x_4846_;
goto v_reusejp_4850_;
}
else
{
lean_object* v_reuseFailAlloc_4853_; 
v_reuseFailAlloc_4853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4853_, 0, v___x_4849_);
v___x_4851_ = v_reuseFailAlloc_4853_;
goto v_reusejp_4850_;
}
v_reusejp_4850_:
{
lean_object* v___x_4852_; 
v___x_4852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4852_, 0, v___x_4851_);
return v___x_4852_;
}
}
else
{
lean_object* v___x_4854_; lean_object* v___x_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; uint8_t v___x_4867_; 
v___x_4854_ = lean_mk_string_unchecked("", 0, 0);
v___x_4855_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4856_ = lean_string_append(v___x_4855_, v_key_4840_);
v___x_4857_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4858_ = lean_string_append(v___x_4856_, v___x_4857_);
lean_dec_ref(v___x_4857_);
v___x_4859_ = lean_mk_string_unchecked("Option (Float)", 14, 14);
v___x_4860_ = lean_string_append(v___x_4858_, v___x_4859_);
lean_dec_ref(v___x_4859_);
v___x_4861_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4862_ = lean_string_append(v___x_4860_, v___x_4861_);
lean_dec_ref(v___x_4861_);
v___x_4863_ = l_Lasm_JS_Data_describe(v___x_4844_);
v___x_4864_ = lean_string_append(v___x_4862_, v___x_4863_);
lean_dec_ref(v___x_4863_);
v___x_4865_ = lean_string_utf8_byte_size(v___x_4854_);
lean_dec_ref(v___x_4854_);
v___x_4866_ = lean_unsigned_to_nat(0u);
v___x_4867_ = lean_nat_dec_eq(v___x_4865_, v___x_4866_);
if (v___x_4867_ == 0)
{
lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4871_; 
v___x_4868_ = lean_mk_string_unchecked(" ()", 3, 3);
v___x_4869_ = lean_string_append(v___x_4864_, v___x_4868_);
lean_dec_ref(v___x_4868_);
if (v_isShared_4847_ == 0)
{
lean_ctor_set_tag(v___x_4846_, 0);
lean_ctor_set(v___x_4846_, 0, v___x_4869_);
v___x_4871_ = v___x_4846_;
goto v_reusejp_4870_;
}
else
{
lean_object* v_reuseFailAlloc_4872_; 
v_reuseFailAlloc_4872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4872_, 0, v___x_4869_);
v___x_4871_ = v_reuseFailAlloc_4872_;
goto v_reusejp_4870_;
}
v_reusejp_4870_:
{
return v___x_4871_;
}
}
else
{
lean_object* v___x_4874_; 
if (v_isShared_4847_ == 0)
{
lean_ctor_set_tag(v___x_4846_, 0);
lean_ctor_set(v___x_4846_, 0, v___x_4864_);
v___x_4874_ = v___x_4846_;
goto v_reusejp_4873_;
}
else
{
lean_object* v_reuseFailAlloc_4875_; 
v_reuseFailAlloc_4875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4875_, 0, v___x_4864_);
v___x_4874_ = v_reuseFailAlloc_4875_;
goto v_reusejp_4873_;
}
v_reusejp_4873_:
{
return v___x_4874_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4878_; lean_object* v___x_4879_; 
lean_dec(v_d_4839_);
v___x_4878_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4879_, 0, v___x_4878_);
return v___x_4879_;
}
v___jp_4841_:
{
lean_object* v___x_4842_; lean_object* v___x_4843_; 
v___x_4842_ = lean_box(0);
v___x_4843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4843_, 0, v___x_4842_);
return v___x_4843_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_d_4880_, lean_object* v_key_4881_){
_start:
{
lean_object* v_res_4882_; 
v_res_4882_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__2(v_d_4880_, v_key_4881_);
lean_dec_ref(v_key_4881_);
return v_res_4882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7_spec__9(size_t v_sz_4883_, size_t v_i_4884_, lean_object* v_bs_4885_){
_start:
{
uint8_t v___x_4886_; 
v___x_4886_ = lean_usize_dec_lt(v_i_4884_, v_sz_4883_);
if (v___x_4886_ == 0)
{
lean_object* v___x_4887_; 
v___x_4887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4887_, 0, v_bs_4885_);
return v___x_4887_;
}
else
{
lean_object* v_v_4888_; lean_object* v___x_4889_; lean_object* v_bs_x27_4890_; size_t v___x_4891_; size_t v___x_4892_; lean_object* v___x_4893_; 
v_v_4888_ = lean_array_uget(v_bs_4885_, v_i_4884_);
v___x_4889_ = lean_unsigned_to_nat(0u);
v_bs_x27_4890_ = lean_array_uset(v_bs_4885_, v_i_4884_, v___x_4889_);
v___x_4891_ = ((size_t)1ULL);
v___x_4892_ = lean_usize_add(v_i_4884_, v___x_4891_);
v___x_4893_ = lean_array_uset(v_bs_x27_4890_, v_i_4884_, v_v_4888_);
v_i_4884_ = v___x_4892_;
v_bs_4885_ = v___x_4893_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7_spec__9___boxed(lean_object* v_sz_4895_, lean_object* v_i_4896_, lean_object* v_bs_4897_){
_start:
{
size_t v_sz_boxed_4898_; size_t v_i_boxed_4899_; lean_object* v_res_4900_; 
v_sz_boxed_4898_ = lean_unbox_usize(v_sz_4895_);
lean_dec(v_sz_4895_);
v_i_boxed_4899_ = lean_unbox_usize(v_i_4896_);
lean_dec(v_i_4896_);
v_res_4900_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7_spec__9(v_sz_boxed_4898_, v_i_boxed_4899_, v_bs_4897_);
return v_res_4900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7(lean_object* v_d_4901_, lean_object* v_key_4902_){
_start:
{
if (lean_obj_tag(v_d_4901_) == 8)
{
lean_object* v___x_4906_; lean_object* v___x_4908_; uint8_t v_isShared_4909_; uint8_t v_isSharedCheck_4951_; 
v___x_4906_ = l_Lasm_JS_Data_field(v_d_4901_, v_key_4902_);
v_isSharedCheck_4951_ = !lean_is_exclusive(v_d_4901_);
if (v_isSharedCheck_4951_ == 0)
{
lean_object* v_unused_4952_; 
v_unused_4952_ = lean_ctor_get(v_d_4901_, 0);
lean_dec(v_unused_4952_);
v___x_4908_ = v_d_4901_;
v_isShared_4909_ = v_isSharedCheck_4951_;
goto v_resetjp_4907_;
}
else
{
lean_dec(v_d_4901_);
v___x_4908_ = lean_box(0);
v_isShared_4909_ = v_isSharedCheck_4951_;
goto v_resetjp_4907_;
}
v_resetjp_4907_:
{
lean_object* v_a_4911_; 
switch(lean_obj_tag(v___x_4906_))
{
case 1:
{
lean_del_object(v___x_4908_);
goto v___jp_4903_;
}
case 0:
{
lean_del_object(v___x_4908_);
goto v___jp_4903_;
}
default: 
{
if (lean_obj_tag(v___x_4906_) == 8)
{
lean_object* v_fields_4936_; size_t v_sz_4937_; size_t v___x_4938_; lean_object* v___x_4939_; 
v_fields_4936_ = lean_ctor_get(v___x_4906_, 0);
lean_inc_ref(v_fields_4936_);
v_sz_4937_ = lean_array_size(v_fields_4936_);
v___x_4938_ = ((size_t)0ULL);
v___x_4939_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7_spec__9(v_sz_4937_, v___x_4938_, v_fields_4936_);
if (lean_obj_tag(v___x_4939_) == 0)
{
lean_object* v_a_4940_; 
v_a_4940_ = lean_ctor_get(v___x_4939_, 0);
lean_inc(v_a_4940_);
lean_dec_ref_known(v___x_4939_, 1);
v_a_4911_ = v_a_4940_;
goto v___jp_4910_;
}
else
{
lean_object* v_a_4941_; lean_object* v___x_4943_; uint8_t v_isShared_4944_; uint8_t v_isSharedCheck_4949_; 
lean_dec_ref_known(v___x_4906_, 1);
lean_del_object(v___x_4908_);
v_a_4941_ = lean_ctor_get(v___x_4939_, 0);
v_isSharedCheck_4949_ = !lean_is_exclusive(v___x_4939_);
if (v_isSharedCheck_4949_ == 0)
{
v___x_4943_ = v___x_4939_;
v_isShared_4944_ = v_isSharedCheck_4949_;
goto v_resetjp_4942_;
}
else
{
lean_inc(v_a_4941_);
lean_dec(v___x_4939_);
v___x_4943_ = lean_box(0);
v_isShared_4944_ = v_isSharedCheck_4949_;
goto v_resetjp_4942_;
}
v_resetjp_4942_:
{
lean_object* v___x_4945_; lean_object* v___x_4947_; 
v___x_4945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4945_, 0, v_a_4941_);
if (v_isShared_4944_ == 0)
{
lean_ctor_set(v___x_4943_, 0, v___x_4945_);
v___x_4947_ = v___x_4943_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v___x_4945_);
v___x_4947_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
return v___x_4947_;
}
}
}
}
else
{
lean_object* v___x_4950_; 
v___x_4950_ = lean_mk_string_unchecked("", 0, 0);
v_a_4911_ = v___x_4950_;
goto v___jp_4910_;
}
}
}
v___jp_4910_:
{
lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; uint8_t v___x_4924_; 
v___x_4912_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4913_ = lean_string_append(v___x_4912_, v_key_4902_);
v___x_4914_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4915_ = lean_string_append(v___x_4913_, v___x_4914_);
lean_dec_ref(v___x_4914_);
v___x_4916_ = lean_mk_string_unchecked("Option (Lasm.JS.Web.Record (Lasm.JS.Data))", 42, 42);
v___x_4917_ = lean_string_append(v___x_4915_, v___x_4916_);
lean_dec_ref(v___x_4916_);
v___x_4918_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4919_ = lean_string_append(v___x_4917_, v___x_4918_);
lean_dec_ref(v___x_4918_);
v___x_4920_ = l_Lasm_JS_Data_describe(v___x_4906_);
v___x_4921_ = lean_string_append(v___x_4919_, v___x_4920_);
lean_dec_ref(v___x_4920_);
v___x_4922_ = lean_string_utf8_byte_size(v_a_4911_);
v___x_4923_ = lean_unsigned_to_nat(0u);
v___x_4924_ = lean_nat_dec_eq(v___x_4922_, v___x_4923_);
if (v___x_4924_ == 0)
{
lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4931_; 
v___x_4925_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_4926_ = lean_string_append(v___x_4925_, v_a_4911_);
lean_dec_ref(v_a_4911_);
v___x_4927_ = lean_mk_string_unchecked(")", 1, 1);
v___x_4928_ = lean_string_append(v___x_4926_, v___x_4927_);
lean_dec_ref(v___x_4927_);
v___x_4929_ = lean_string_append(v___x_4921_, v___x_4928_);
lean_dec_ref(v___x_4928_);
if (v_isShared_4909_ == 0)
{
lean_ctor_set_tag(v___x_4908_, 0);
lean_ctor_set(v___x_4908_, 0, v___x_4929_);
v___x_4931_ = v___x_4908_;
goto v_reusejp_4930_;
}
else
{
lean_object* v_reuseFailAlloc_4932_; 
v_reuseFailAlloc_4932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4932_, 0, v___x_4929_);
v___x_4931_ = v_reuseFailAlloc_4932_;
goto v_reusejp_4930_;
}
v_reusejp_4930_:
{
return v___x_4931_;
}
}
else
{
lean_object* v___x_4934_; 
lean_dec_ref(v_a_4911_);
if (v_isShared_4909_ == 0)
{
lean_ctor_set_tag(v___x_4908_, 0);
lean_ctor_set(v___x_4908_, 0, v___x_4921_);
v___x_4934_ = v___x_4908_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v___x_4921_);
v___x_4934_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
return v___x_4934_;
}
}
}
}
}
else
{
lean_object* v___x_4953_; lean_object* v___x_4954_; 
lean_dec(v_d_4901_);
v___x_4953_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_4954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4954_, 0, v___x_4953_);
return v___x_4954_;
}
v___jp_4903_:
{
lean_object* v___x_4904_; lean_object* v___x_4905_; 
v___x_4904_ = lean_box(0);
v___x_4905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4905_, 0, v___x_4904_);
return v___x_4905_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7___boxed(lean_object* v_d_4955_, lean_object* v_key_4956_){
_start:
{
lean_object* v_res_4957_; 
v_res_4957_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7(v_d_4955_, v_key_4956_);
lean_dec_ref(v_key_4956_);
return v_res_4957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__4(lean_object* v_d_4958_, lean_object* v_key_4959_){
_start:
{
if (lean_obj_tag(v_d_4958_) == 8)
{
lean_object* v___x_4963_; lean_object* v___x_4965_; uint8_t v_isShared_4966_; uint8_t v_isSharedCheck_5016_; 
v___x_4963_ = l_Lasm_JS_Data_field(v_d_4958_, v_key_4959_);
v_isSharedCheck_5016_ = !lean_is_exclusive(v_d_4958_);
if (v_isSharedCheck_5016_ == 0)
{
lean_object* v_unused_5017_; 
v_unused_5017_ = lean_ctor_get(v_d_4958_, 0);
lean_dec(v_unused_5017_);
v___x_4965_ = v_d_4958_;
v_isShared_4966_ = v_isSharedCheck_5016_;
goto v_resetjp_4964_;
}
else
{
lean_dec(v_d_4958_);
v___x_4965_ = lean_box(0);
v_isShared_4966_ = v_isSharedCheck_5016_;
goto v_resetjp_4964_;
}
v_resetjp_4964_:
{
lean_object* v_a_4968_; 
switch(lean_obj_tag(v___x_4963_))
{
case 1:
{
lean_del_object(v___x_4965_);
goto v___jp_4960_;
}
case 0:
{
lean_del_object(v___x_4965_);
goto v___jp_4960_;
}
default: 
{
lean_object* v___x_4993_; lean_object* v___x_4994_; 
v___x_4993_ = lean_mk_string_unchecked("id", 2, 2);
lean_inc(v___x_4963_);
v___x_4994_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v___x_4963_, v___x_4993_);
lean_dec_ref(v___x_4993_);
if (lean_obj_tag(v___x_4994_) == 0)
{
lean_object* v_a_4995_; 
v_a_4995_ = lean_ctor_get(v___x_4994_, 0);
lean_inc(v_a_4995_);
lean_dec_ref_known(v___x_4994_, 1);
v_a_4968_ = v_a_4995_;
goto v___jp_4967_;
}
else
{
lean_object* v_a_4996_; lean_object* v___x_4998_; uint8_t v_isShared_4999_; uint8_t v_isSharedCheck_5015_; 
v_a_4996_ = lean_ctor_get(v___x_4994_, 0);
v_isSharedCheck_5015_ = !lean_is_exclusive(v___x_4994_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_4998_ = v___x_4994_;
v_isShared_4999_ = v_isSharedCheck_5015_;
goto v_resetjp_4997_;
}
else
{
lean_inc(v_a_4996_);
lean_dec(v___x_4994_);
v___x_4998_ = lean_box(0);
v_isShared_4999_ = v_isSharedCheck_5015_;
goto v_resetjp_4997_;
}
v_resetjp_4997_:
{
lean_object* v___x_5000_; lean_object* v___x_5001_; 
v___x_5000_ = lean_mk_string_unchecked("type", 4, 4);
lean_inc(v___x_4963_);
v___x_5001_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v___x_4963_, v___x_5000_);
lean_dec_ref(v___x_5000_);
if (lean_obj_tag(v___x_5001_) == 0)
{
lean_object* v_a_5002_; 
lean_del_object(v___x_4998_);
lean_dec(v_a_4996_);
v_a_5002_ = lean_ctor_get(v___x_5001_, 0);
lean_inc(v_a_5002_);
lean_dec_ref_known(v___x_5001_, 1);
v_a_4968_ = v_a_5002_;
goto v___jp_4967_;
}
else
{
lean_object* v_a_5003_; lean_object* v___x_5005_; uint8_t v_isShared_5006_; uint8_t v_isSharedCheck_5014_; 
lean_del_object(v___x_4965_);
lean_dec(v___x_4963_);
v_a_5003_ = lean_ctor_get(v___x_5001_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v___x_5001_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_5005_ = v___x_5001_;
v_isShared_5006_ = v_isSharedCheck_5014_;
goto v_resetjp_5004_;
}
else
{
lean_inc(v_a_5003_);
lean_dec(v___x_5001_);
v___x_5005_ = lean_box(0);
v_isShared_5006_ = v_isSharedCheck_5014_;
goto v_resetjp_5004_;
}
v_resetjp_5004_:
{
lean_object* v___x_5007_; lean_object* v___x_5009_; 
v___x_5007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5007_, 0, v_a_4996_);
lean_ctor_set(v___x_5007_, 1, v_a_5003_);
if (v_isShared_4999_ == 0)
{
lean_ctor_set(v___x_4998_, 0, v___x_5007_);
v___x_5009_ = v___x_4998_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v___x_5007_);
v___x_5009_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
lean_object* v___x_5011_; 
if (v_isShared_5006_ == 0)
{
lean_ctor_set(v___x_5005_, 0, v___x_5009_);
v___x_5011_ = v___x_5005_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v___x_5009_);
v___x_5011_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
return v___x_5011_;
}
}
}
}
}
}
}
}
v___jp_4967_:
{
lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; uint8_t v___x_4981_; 
v___x_4969_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_4970_ = lean_string_append(v___x_4969_, v_key_4959_);
v___x_4971_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_4972_ = lean_string_append(v___x_4970_, v___x_4971_);
lean_dec_ref(v___x_4971_);
v___x_4973_ = lean_mk_string_unchecked("Option (Lasm.JS.Cloudflare.CloudflareAccessIdentityIdp)", 55, 55);
v___x_4974_ = lean_string_append(v___x_4972_, v___x_4973_);
lean_dec_ref(v___x_4973_);
v___x_4975_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_4976_ = lean_string_append(v___x_4974_, v___x_4975_);
lean_dec_ref(v___x_4975_);
v___x_4977_ = l_Lasm_JS_Data_describe(v___x_4963_);
v___x_4978_ = lean_string_append(v___x_4976_, v___x_4977_);
lean_dec_ref(v___x_4977_);
v___x_4979_ = lean_string_utf8_byte_size(v_a_4968_);
v___x_4980_ = lean_unsigned_to_nat(0u);
v___x_4981_ = lean_nat_dec_eq(v___x_4979_, v___x_4980_);
if (v___x_4981_ == 0)
{
lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4988_; 
v___x_4982_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_4983_ = lean_string_append(v___x_4982_, v_a_4968_);
lean_dec_ref(v_a_4968_);
v___x_4984_ = lean_mk_string_unchecked(")", 1, 1);
v___x_4985_ = lean_string_append(v___x_4983_, v___x_4984_);
lean_dec_ref(v___x_4984_);
v___x_4986_ = lean_string_append(v___x_4978_, v___x_4985_);
lean_dec_ref(v___x_4985_);
if (v_isShared_4966_ == 0)
{
lean_ctor_set_tag(v___x_4965_, 0);
lean_ctor_set(v___x_4965_, 0, v___x_4986_);
v___x_4988_ = v___x_4965_;
goto v_reusejp_4987_;
}
else
{
lean_object* v_reuseFailAlloc_4989_; 
v_reuseFailAlloc_4989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4989_, 0, v___x_4986_);
v___x_4988_ = v_reuseFailAlloc_4989_;
goto v_reusejp_4987_;
}
v_reusejp_4987_:
{
return v___x_4988_;
}
}
else
{
lean_object* v___x_4991_; 
lean_dec_ref(v_a_4968_);
if (v_isShared_4966_ == 0)
{
lean_ctor_set_tag(v___x_4965_, 0);
lean_ctor_set(v___x_4965_, 0, v___x_4978_);
v___x_4991_ = v___x_4965_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v___x_4978_);
v___x_4991_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4990_;
}
v_reusejp_4990_:
{
return v___x_4991_;
}
}
}
}
}
else
{
lean_object* v___x_5018_; lean_object* v___x_5019_; 
lean_dec(v_d_4958_);
v___x_5018_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_5019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5019_, 0, v___x_5018_);
return v___x_5019_;
}
v___jp_4960_:
{
lean_object* v___x_4961_; lean_object* v___x_4962_; 
v___x_4961_ = lean_box(0);
v___x_4962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4962_, 0, v___x_4961_);
return v___x_4962_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_d_5020_, lean_object* v_key_5021_){
_start:
{
lean_object* v_res_5022_; 
v_res_5022_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__4(v_d_5020_, v_key_5021_);
lean_dec_ref(v_key_5021_);
return v_res_5022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1(lean_object* v_context_5023_, lean_object* v_d_5024_){
_start:
{
lean_object* v___y_5030_; lean_object* v___y_5031_; lean_object* v___y_5036_; lean_object* v_received_5037_; lean_object* v___y_5056_; lean_object* v_a_5059_; 
switch(lean_obj_tag(v_d_5024_))
{
case 1:
{
goto v___jp_5026_;
}
case 0:
{
goto v___jp_5026_;
}
default: 
{
lean_object* v___x_5088_; lean_object* v___x_5089_; 
v___x_5088_ = lean_mk_string_unchecked("email", 5, 5);
lean_inc(v_d_5024_);
v___x_5089_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_5024_, v___x_5088_);
lean_dec_ref(v___x_5088_);
if (lean_obj_tag(v___x_5089_) == 0)
{
lean_object* v_a_5090_; 
v_a_5090_ = lean_ctor_get(v___x_5089_, 0);
lean_inc(v_a_5090_);
lean_dec_ref_known(v___x_5089_, 1);
v_a_5059_ = v_a_5090_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; 
v_a_5091_ = lean_ctor_get(v___x_5089_, 0);
lean_inc(v_a_5091_);
lean_dec_ref_known(v___x_5089_, 1);
v___x_5092_ = lean_mk_string_unchecked("name", 4, 4);
lean_inc(v_d_5024_);
v___x_5093_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_5024_, v___x_5092_);
lean_dec_ref(v___x_5092_);
if (lean_obj_tag(v___x_5093_) == 0)
{
lean_object* v_a_5094_; 
lean_dec(v_a_5091_);
v_a_5094_ = lean_ctor_get(v___x_5093_, 0);
lean_inc(v_a_5094_);
lean_dec_ref_known(v___x_5093_, 1);
v_a_5059_ = v_a_5094_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; 
v_a_5095_ = lean_ctor_get(v___x_5093_, 0);
lean_inc(v_a_5095_);
lean_dec_ref_known(v___x_5093_, 1);
v___x_5096_ = lean_mk_string_unchecked("user_uuid", 9, 9);
lean_inc(v_d_5024_);
v___x_5097_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_5024_, v___x_5096_);
lean_dec_ref(v___x_5096_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v_a_5098_; 
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5098_ = lean_ctor_get(v___x_5097_, 0);
lean_inc(v_a_5098_);
lean_dec_ref_known(v___x_5097_, 1);
v_a_5059_ = v_a_5098_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; 
v_a_5099_ = lean_ctor_get(v___x_5097_, 0);
lean_inc(v_a_5099_);
lean_dec_ref_known(v___x_5097_, 1);
v___x_5100_ = lean_mk_string_unchecked("account_id", 10, 10);
lean_inc(v_d_5024_);
v___x_5101_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_5024_, v___x_5100_);
lean_dec_ref(v___x_5100_);
if (lean_obj_tag(v___x_5101_) == 0)
{
lean_object* v_a_5102_; 
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5102_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5102_);
lean_dec_ref_known(v___x_5101_, 1);
v_a_5059_ = v_a_5102_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v_a_5103_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5103_);
lean_dec_ref_known(v___x_5101_, 1);
v___x_5104_ = lean_mk_string_unchecked("iat", 3, 3);
lean_inc(v_d_5024_);
v___x_5105_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__2(v_d_5024_, v___x_5104_);
lean_dec_ref(v___x_5104_);
if (lean_obj_tag(v___x_5105_) == 0)
{
lean_object* v_a_5106_; 
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5106_ = lean_ctor_get(v___x_5105_, 0);
lean_inc(v_a_5106_);
lean_dec_ref_known(v___x_5105_, 1);
v_a_5059_ = v_a_5106_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; 
v_a_5107_ = lean_ctor_get(v___x_5105_, 0);
lean_inc(v_a_5107_);
lean_dec_ref_known(v___x_5105_, 1);
v___x_5108_ = lean_mk_string_unchecked("ip", 2, 2);
lean_inc(v_d_5024_);
v___x_5109_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_5024_, v___x_5108_);
lean_dec_ref(v___x_5108_);
if (lean_obj_tag(v___x_5109_) == 0)
{
lean_object* v_a_5110_; 
lean_dec(v_a_5107_);
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5110_ = lean_ctor_get(v___x_5109_, 0);
lean_inc(v_a_5110_);
lean_dec_ref_known(v___x_5109_, 1);
v_a_5059_ = v_a_5110_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; 
v_a_5111_ = lean_ctor_get(v___x_5109_, 0);
lean_inc(v_a_5111_);
lean_dec_ref_known(v___x_5109_, 1);
v___x_5112_ = lean_mk_string_unchecked("amr", 3, 3);
lean_inc(v_d_5024_);
v___x_5113_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__3(v_d_5024_, v___x_5112_);
lean_dec_ref(v___x_5112_);
if (lean_obj_tag(v___x_5113_) == 0)
{
lean_object* v_a_5114_; 
lean_dec(v_a_5111_);
lean_dec(v_a_5107_);
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5114_ = lean_ctor_get(v___x_5113_, 0);
lean_inc(v_a_5114_);
lean_dec_ref_known(v___x_5113_, 1);
v_a_5059_ = v_a_5114_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; 
v_a_5115_ = lean_ctor_get(v___x_5113_, 0);
lean_inc(v_a_5115_);
lean_dec_ref_known(v___x_5113_, 1);
v___x_5116_ = lean_mk_string_unchecked("idp", 3, 3);
lean_inc(v_d_5024_);
v___x_5117_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__4(v_d_5024_, v___x_5116_);
lean_dec_ref(v___x_5116_);
if (lean_obj_tag(v___x_5117_) == 0)
{
lean_object* v_a_5118_; 
lean_dec(v_a_5115_);
lean_dec(v_a_5111_);
lean_dec(v_a_5107_);
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5118_ = lean_ctor_get(v___x_5117_, 0);
lean_inc(v_a_5118_);
lean_dec_ref_known(v___x_5117_, 1);
v_a_5059_ = v_a_5118_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; 
v_a_5119_ = lean_ctor_get(v___x_5117_, 0);
lean_inc(v_a_5119_);
lean_dec_ref_known(v___x_5117_, 1);
v___x_5120_ = lean_mk_string_unchecked("geo", 3, 3);
lean_inc(v_d_5024_);
v___x_5121_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__5(v_d_5024_, v___x_5120_);
lean_dec_ref(v___x_5120_);
if (lean_obj_tag(v___x_5121_) == 0)
{
lean_object* v_a_5122_; 
lean_dec(v_a_5119_);
lean_dec(v_a_5115_);
lean_dec(v_a_5111_);
lean_dec(v_a_5107_);
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5122_ = lean_ctor_get(v___x_5121_, 0);
lean_inc(v_a_5122_);
lean_dec_ref_known(v___x_5121_, 1);
v_a_5059_ = v_a_5122_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; 
v_a_5123_ = lean_ctor_get(v___x_5121_, 0);
lean_inc(v_a_5123_);
lean_dec_ref_known(v___x_5121_, 1);
v___x_5124_ = lean_mk_string_unchecked("groups", 6, 6);
lean_inc(v_d_5024_);
v___x_5125_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__6(v_d_5024_, v___x_5124_);
lean_dec_ref(v___x_5124_);
if (lean_obj_tag(v___x_5125_) == 0)
{
lean_object* v_a_5126_; 
lean_dec(v_a_5123_);
lean_dec(v_a_5119_);
lean_dec(v_a_5115_);
lean_dec(v_a_5111_);
lean_dec(v_a_5107_);
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5126_ = lean_ctor_get(v___x_5125_, 0);
lean_inc(v_a_5126_);
lean_dec_ref_known(v___x_5125_, 1);
v_a_5059_ = v_a_5126_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; 
v_a_5127_ = lean_ctor_get(v___x_5125_, 0);
lean_inc(v_a_5127_);
lean_dec_ref_known(v___x_5125_, 1);
v___x_5128_ = lean_mk_string_unchecked("devicePosture", 13, 13);
lean_inc(v_d_5024_);
v___x_5129_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1_spec__7(v_d_5024_, v___x_5128_);
lean_dec_ref(v___x_5128_);
if (lean_obj_tag(v___x_5129_) == 0)
{
lean_object* v_a_5130_; 
lean_dec(v_a_5127_);
lean_dec(v_a_5123_);
lean_dec(v_a_5119_);
lean_dec(v_a_5115_);
lean_dec(v_a_5111_);
lean_dec(v_a_5107_);
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5130_ = lean_ctor_get(v___x_5129_, 0);
lean_inc(v_a_5130_);
lean_dec_ref_known(v___x_5129_, 1);
v_a_5059_ = v_a_5130_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; 
v_a_5131_ = lean_ctor_get(v___x_5129_, 0);
lean_inc(v_a_5131_);
lean_dec_ref_known(v___x_5129_, 1);
v___x_5132_ = lean_mk_string_unchecked("is_warp", 7, 7);
lean_inc(v_d_5024_);
v___x_5133_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_5024_, v___x_5132_);
lean_dec_ref(v___x_5132_);
if (lean_obj_tag(v___x_5133_) == 0)
{
lean_object* v_a_5134_; 
lean_dec(v_a_5131_);
lean_dec(v_a_5127_);
lean_dec(v_a_5123_);
lean_dec(v_a_5119_);
lean_dec(v_a_5115_);
lean_dec(v_a_5111_);
lean_dec(v_a_5107_);
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5134_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_a_5134_);
lean_dec_ref_known(v___x_5133_, 1);
v_a_5059_ = v_a_5134_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5154_; 
v_a_5135_ = lean_ctor_get(v___x_5133_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v___x_5133_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5137_ = v___x_5133_;
v_isShared_5138_ = v_isSharedCheck_5154_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_a_5135_);
lean_dec(v___x_5133_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5154_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___x_5139_; lean_object* v___x_5140_; 
v___x_5139_ = lean_mk_string_unchecked("is_gateway", 10, 10);
lean_inc(v_d_5024_);
v___x_5140_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_5024_, v___x_5139_);
lean_dec_ref(v___x_5139_);
if (lean_obj_tag(v___x_5140_) == 0)
{
lean_object* v_a_5141_; 
lean_del_object(v___x_5137_);
lean_dec(v_a_5135_);
lean_dec(v_a_5131_);
lean_dec(v_a_5127_);
lean_dec(v_a_5123_);
lean_dec(v_a_5119_);
lean_dec(v_a_5115_);
lean_dec(v_a_5111_);
lean_dec(v_a_5107_);
lean_dec(v_a_5103_);
lean_dec(v_a_5099_);
lean_dec(v_a_5095_);
lean_dec(v_a_5091_);
v_a_5141_ = lean_ctor_get(v___x_5140_, 0);
lean_inc(v_a_5141_);
lean_dec_ref_known(v___x_5140_, 1);
v_a_5059_ = v_a_5141_;
goto v___jp_5058_;
}
else
{
lean_object* v_a_5142_; lean_object* v___x_5144_; uint8_t v_isShared_5145_; uint8_t v_isSharedCheck_5153_; 
lean_dec(v_d_5024_);
v_a_5142_ = lean_ctor_get(v___x_5140_, 0);
v_isSharedCheck_5153_ = !lean_is_exclusive(v___x_5140_);
if (v_isSharedCheck_5153_ == 0)
{
v___x_5144_ = v___x_5140_;
v_isShared_5145_ = v_isSharedCheck_5153_;
goto v_resetjp_5143_;
}
else
{
lean_inc(v_a_5142_);
lean_dec(v___x_5140_);
v___x_5144_ = lean_box(0);
v_isShared_5145_ = v_isSharedCheck_5153_;
goto v_resetjp_5143_;
}
v_resetjp_5143_:
{
lean_object* v___x_5146_; lean_object* v___x_5148_; 
v___x_5146_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_5146_, 0, v_a_5091_);
lean_ctor_set(v___x_5146_, 1, v_a_5095_);
lean_ctor_set(v___x_5146_, 2, v_a_5099_);
lean_ctor_set(v___x_5146_, 3, v_a_5103_);
lean_ctor_set(v___x_5146_, 4, v_a_5107_);
lean_ctor_set(v___x_5146_, 5, v_a_5111_);
lean_ctor_set(v___x_5146_, 6, v_a_5115_);
lean_ctor_set(v___x_5146_, 7, v_a_5119_);
lean_ctor_set(v___x_5146_, 8, v_a_5123_);
lean_ctor_set(v___x_5146_, 9, v_a_5127_);
lean_ctor_set(v___x_5146_, 10, v_a_5131_);
lean_ctor_set(v___x_5146_, 11, v_a_5135_);
lean_ctor_set(v___x_5146_, 12, v_a_5142_);
if (v_isShared_5145_ == 0)
{
lean_ctor_set(v___x_5144_, 0, v___x_5146_);
v___x_5148_ = v___x_5144_;
goto v_reusejp_5147_;
}
else
{
lean_object* v_reuseFailAlloc_5152_; 
v_reuseFailAlloc_5152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5152_, 0, v___x_5146_);
v___x_5148_ = v_reuseFailAlloc_5152_;
goto v_reusejp_5147_;
}
v_reusejp_5147_:
{
lean_object* v___x_5150_; 
if (v_isShared_5138_ == 0)
{
lean_ctor_set_tag(v___x_5137_, 0);
lean_ctor_set(v___x_5137_, 0, v___x_5148_);
v___x_5150_ = v___x_5137_;
goto v_reusejp_5149_;
}
else
{
lean_object* v_reuseFailAlloc_5151_; 
v_reuseFailAlloc_5151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5151_, 0, v___x_5148_);
v___x_5150_ = v_reuseFailAlloc_5151_;
goto v_reusejp_5149_;
}
v_reusejp_5149_:
{
return v___x_5150_;
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
}
}
}
v___jp_5026_:
{
lean_object* v___x_5027_; lean_object* v___x_5028_; 
v___x_5027_ = lean_box(0);
v___x_5028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5028_, 0, v___x_5027_);
return v___x_5028_;
}
v___jp_5029_:
{
lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; 
v___x_5032_ = lean_string_append(v___y_5030_, v___y_5031_);
lean_dec_ref(v___y_5031_);
v___x_5033_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5033_, 0, v___x_5032_);
v___x_5034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5034_, 0, v___x_5033_);
return v___x_5034_;
}
v___jp_5035_:
{
lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; uint8_t v___x_5049_; 
v___x_5038_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_5039_ = lean_string_append(v___x_5038_, v_context_5023_);
v___x_5040_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_5041_ = lean_string_append(v___x_5039_, v___x_5040_);
lean_dec_ref(v___x_5040_);
v___x_5042_ = lean_mk_string_unchecked("Option (Lasm.JS.Cloudflare.CloudflareAccessIdentity)", 52, 52);
v___x_5043_ = lean_string_append(v___x_5041_, v___x_5042_);
lean_dec_ref(v___x_5042_);
v___x_5044_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_5045_ = lean_string_append(v___x_5043_, v___x_5044_);
lean_dec_ref(v___x_5044_);
v___x_5046_ = lean_string_append(v___x_5045_, v_received_5037_);
lean_dec_ref(v_received_5037_);
v___x_5047_ = lean_string_utf8_byte_size(v___y_5036_);
v___x_5048_ = lean_unsigned_to_nat(0u);
v___x_5049_ = lean_nat_dec_eq(v___x_5047_, v___x_5048_);
if (v___x_5049_ == 0)
{
lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; 
v___x_5050_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_5051_ = lean_string_append(v___x_5050_, v___y_5036_);
lean_dec_ref(v___y_5036_);
v___x_5052_ = lean_mk_string_unchecked(")", 1, 1);
v___x_5053_ = lean_string_append(v___x_5051_, v___x_5052_);
lean_dec_ref(v___x_5052_);
v___y_5030_ = v___x_5046_;
v___y_5031_ = v___x_5053_;
goto v___jp_5029_;
}
else
{
lean_object* v___x_5054_; 
lean_dec_ref(v___y_5036_);
v___x_5054_ = lean_mk_string_unchecked("", 0, 0);
v___y_5030_ = v___x_5046_;
v___y_5031_ = v___x_5054_;
goto v___jp_5029_;
}
}
v___jp_5055_:
{
lean_object* v___x_5057_; 
v___x_5057_ = l_Lasm_JS_Data_describe(v_d_5024_);
v___y_5036_ = v___y_5056_;
v_received_5037_ = v___x_5057_;
goto v___jp_5035_;
}
v___jp_5058_:
{
if (lean_obj_tag(v_d_5024_) == 9)
{
lean_object* v_value_5060_; lean_object* v_description_5061_; lean_object* v___x_5062_; uint8_t v___x_5063_; 
v_value_5060_ = lean_ctor_get(v_d_5024_, 0);
v_description_5061_ = lean_ctor_get(v_d_5024_, 1);
v___x_5062_ = lean_mk_string_unchecked("", 0, 0);
v___x_5063_ = lean_string_dec_eq(v_description_5061_, v___x_5062_);
if (v___x_5063_ == 0)
{
lean_dec_ref(v___x_5062_);
v___y_5056_ = v_a_5059_;
goto v___jp_5055_;
}
else
{
lean_object* v___x_5065_; uint8_t v_isShared_5066_; uint8_t v_isSharedCheck_5085_; 
lean_inc(v_value_5060_);
v_isSharedCheck_5085_ = !lean_is_exclusive(v_d_5024_);
if (v_isSharedCheck_5085_ == 0)
{
lean_object* v_unused_5086_; lean_object* v_unused_5087_; 
v_unused_5086_ = lean_ctor_get(v_d_5024_, 1);
lean_dec(v_unused_5086_);
v_unused_5087_ = lean_ctor_get(v_d_5024_, 0);
lean_dec(v_unused_5087_);
v___x_5065_ = v_d_5024_;
v_isShared_5066_ = v_isSharedCheck_5085_;
goto v_resetjp_5064_;
}
else
{
lean_dec(v_d_5024_);
v___x_5065_ = lean_box(0);
v_isShared_5066_ = v_isSharedCheck_5085_;
goto v_resetjp_5064_;
}
v_resetjp_5064_:
{
uint32_t v___x_5067_; uint64_t v___x_5068_; lean_object* v___x_5070_; 
v___x_5067_ = 206;
v___x_5068_ = 0ULL;
lean_inc(v_value_5060_);
if (v_isShared_5066_ == 0)
{
lean_ctor_set(v___x_5065_, 1, v___x_5062_);
v___x_5070_ = v___x_5065_;
goto v_reusejp_5069_;
}
else
{
lean_object* v_reuseFailAlloc_5084_; 
v_reuseFailAlloc_5084_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5084_, 0, v_value_5060_);
lean_ctor_set(v_reuseFailAlloc_5084_, 1, v___x_5062_);
v___x_5070_ = v_reuseFailAlloc_5084_;
goto v_reusejp_5069_;
}
v_reusejp_5069_:
{
uint32_t v___x_5071_; lean_object* v___x_5072_; 
v___x_5071_ = lasm_js_value_handle(v_value_5060_);
lean_dec(v_value_5060_);
v___x_5072_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5067_, v___x_5068_, v___x_5070_, v___x_5071_);
lean_dec_ref(v___x_5070_);
if (lean_obj_tag(v___x_5072_) == 0)
{
lean_object* v_a_5073_; uint8_t v___x_5074_; 
v_a_5073_ = lean_ctor_get(v___x_5072_, 0);
lean_inc(v_a_5073_);
lean_dec_ref_known(v___x_5072_, 1);
v___x_5074_ = lean_string_validate_utf8(v_a_5073_);
if (v___x_5074_ == 0)
{
lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; 
lean_dec(v_a_5073_);
v___x_5075_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_5076_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_5077_ = lean_unsigned_to_nat(193u);
v___x_5078_ = lean_unsigned_to_nat(46u);
v___x_5079_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_5080_ = l_mkPanicMessageWithDecl(v___x_5075_, v___x_5076_, v___x_5077_, v___x_5078_, v___x_5079_);
lean_dec_ref(v___x_5079_);
lean_dec_ref(v___x_5076_);
lean_dec_ref(v___x_5075_);
v___x_5081_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5080_);
v___y_5036_ = v_a_5059_;
v_received_5037_ = v___x_5081_;
goto v___jp_5035_;
}
else
{
lean_object* v___x_5082_; 
v___x_5082_ = lean_string_from_utf8_unchecked(v_a_5073_);
v___y_5036_ = v_a_5059_;
v_received_5037_ = v___x_5082_;
goto v___jp_5035_;
}
}
else
{
lean_object* v___x_5083_; 
lean_dec_ref_known(v___x_5072_, 1);
v___x_5083_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v___y_5036_ = v_a_5059_;
v_received_5037_ = v___x_5083_;
goto v___jp_5035_;
}
}
}
}
}
else
{
v___y_5056_ = v_a_5059_;
goto v___jp_5055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5155_, lean_object* v_d_5156_, lean_object* v_a_5157_){
_start:
{
lean_object* v_res_5158_; 
v_res_5158_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1(v_context_5155_, v_d_5156_);
lean_dec_ref(v_context_5155_);
return v_res_5158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0(lean_object* v_b_5159_, lean_object* v_args_5160_, uint8_t v_await_5161_){
_start:
{
uint64_t v___y_5164_; uint64_t v___y_5165_; uint8_t v___x_5208_; uint64_t v___x_5209_; uint64_t v___y_5211_; 
v___x_5208_ = 0;
v___x_5209_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_5208_);
if (v_await_5161_ == 0)
{
uint64_t v___x_5216_; 
v___x_5216_ = 0ULL;
v___y_5211_ = v___x_5216_;
goto v___jp_5210_;
}
else
{
uint64_t v___x_5217_; 
v___x_5217_ = 2ULL;
v___y_5211_ = v___x_5217_;
goto v___jp_5210_;
}
v___jp_5163_:
{
uint64_t v_flags_5166_; uint32_t v___x_5167_; lean_object* v___x_5168_; uint32_t v___x_5169_; lean_object* v___x_5170_; 
v_flags_5166_ = lean_uint64_lor(v___y_5164_, v___y_5165_);
v___x_5167_ = 214;
v___x_5168_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5159_, v_args_5160_);
v___x_5169_ = 0;
v___x_5170_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5167_, v_flags_5166_, v___x_5168_, v___x_5169_);
lean_dec(v___x_5168_);
if (lean_obj_tag(v___x_5170_) == 0)
{
if (lean_obj_tag(v___x_5170_) == 0)
{
lean_object* v_a_5171_; lean_object* v___x_5172_; 
v_a_5171_ = lean_ctor_get(v___x_5170_, 0);
lean_inc(v_a_5171_);
lean_dec_ref_known(v___x_5170_, 1);
v___x_5172_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5171_);
lean_dec(v_a_5171_);
if (lean_obj_tag(v___x_5172_) == 0)
{
lean_object* v_a_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; 
v_a_5173_ = lean_ctor_get(v___x_5172_, 0);
lean_inc(v_a_5173_);
lean_dec_ref_known(v___x_5172_, 1);
v___x_5174_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5159_);
v___x_5175_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0_spec__1(v___x_5174_, v_a_5173_);
lean_dec_ref(v___x_5174_);
return v___x_5175_;
}
else
{
lean_object* v_a_5176_; lean_object* v___x_5178_; uint8_t v_isShared_5179_; uint8_t v_isSharedCheck_5183_; 
v_a_5176_ = lean_ctor_get(v___x_5172_, 0);
v_isSharedCheck_5183_ = !lean_is_exclusive(v___x_5172_);
if (v_isSharedCheck_5183_ == 0)
{
v___x_5178_ = v___x_5172_;
v_isShared_5179_ = v_isSharedCheck_5183_;
goto v_resetjp_5177_;
}
else
{
lean_inc(v_a_5176_);
lean_dec(v___x_5172_);
v___x_5178_ = lean_box(0);
v_isShared_5179_ = v_isSharedCheck_5183_;
goto v_resetjp_5177_;
}
v_resetjp_5177_:
{
lean_object* v___x_5181_; 
if (v_isShared_5179_ == 0)
{
v___x_5181_ = v___x_5178_;
goto v_reusejp_5180_;
}
else
{
lean_object* v_reuseFailAlloc_5182_; 
v_reuseFailAlloc_5182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5182_, 0, v_a_5176_);
v___x_5181_ = v_reuseFailAlloc_5182_;
goto v_reusejp_5180_;
}
v_reusejp_5180_:
{
return v___x_5181_;
}
}
}
}
else
{
lean_object* v_a_5184_; lean_object* v___x_5186_; uint8_t v_isShared_5187_; uint8_t v_isSharedCheck_5191_; 
v_a_5184_ = lean_ctor_get(v___x_5170_, 0);
v_isSharedCheck_5191_ = !lean_is_exclusive(v___x_5170_);
if (v_isSharedCheck_5191_ == 0)
{
v___x_5186_ = v___x_5170_;
v_isShared_5187_ = v_isSharedCheck_5191_;
goto v_resetjp_5185_;
}
else
{
lean_inc(v_a_5184_);
lean_dec(v___x_5170_);
v___x_5186_ = lean_box(0);
v_isShared_5187_ = v_isSharedCheck_5191_;
goto v_resetjp_5185_;
}
v_resetjp_5185_:
{
lean_object* v___x_5189_; 
if (v_isShared_5187_ == 0)
{
lean_ctor_set_tag(v___x_5186_, 1);
v___x_5189_ = v___x_5186_;
goto v_reusejp_5188_;
}
else
{
lean_object* v_reuseFailAlloc_5190_; 
v_reuseFailAlloc_5190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5190_, 0, v_a_5184_);
v___x_5189_ = v_reuseFailAlloc_5190_;
goto v_reusejp_5188_;
}
v_reusejp_5188_:
{
return v___x_5189_;
}
}
}
}
else
{
lean_object* v_a_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5207_; 
v_a_5192_ = lean_ctor_get(v___x_5170_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v___x_5170_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5194_ = v___x_5170_;
v_isShared_5195_ = v_isSharedCheck_5207_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_a_5192_);
lean_dec(v___x_5170_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5207_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5205_; 
v___x_5196_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_5197_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5159_);
v___x_5198_ = lean_string_append(v___x_5196_, v___x_5197_);
lean_dec_ref(v___x_5197_);
v___x_5199_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_5200_ = lean_string_append(v___x_5198_, v___x_5199_);
lean_dec_ref(v___x_5199_);
v___x_5201_ = lean_io_error_to_string(v_a_5192_);
v___x_5202_ = lean_string_append(v___x_5200_, v___x_5201_);
lean_dec_ref(v___x_5201_);
v___x_5203_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5203_, 0, v___x_5202_);
if (v_isShared_5195_ == 0)
{
lean_ctor_set(v___x_5194_, 0, v___x_5203_);
v___x_5205_ = v___x_5194_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v___x_5203_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
return v___x_5205_;
}
}
}
}
v___jp_5210_:
{
uint8_t v_construct_5212_; uint64_t v___x_5213_; 
v_construct_5212_ = lean_ctor_get_uint8(v_b_5159_, sizeof(void*)*4);
v___x_5213_ = lean_uint64_lor(v___x_5209_, v___y_5211_);
if (v_construct_5212_ == 0)
{
uint64_t v___x_5214_; 
v___x_5214_ = 0ULL;
v___y_5164_ = v___x_5213_;
v___y_5165_ = v___x_5214_;
goto v___jp_5163_;
}
else
{
uint64_t v___x_5215_; 
v___x_5215_ = 4ULL;
v___y_5164_ = v___x_5213_;
v___y_5165_ = v___x_5215_;
goto v___jp_5163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0___boxed(lean_object* v_b_5218_, lean_object* v_args_5219_, lean_object* v_await_5220_, lean_object* v_a_5221_){
_start:
{
uint8_t v_await_boxed_5222_; lean_object* v_res_5223_; 
v_await_boxed_5222_ = lean_unbox(v_await_5220_);
v_res_5223_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0(v_b_5218_, v_args_5219_, v_await_boxed_5222_);
lean_dec_ref(v_b_5218_);
return v_res_5223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0(lean_object* v_v_5224_){
_start:
{
lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; uint8_t v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; 
v___x_5226_ = lean_mk_string_unchecked("Lasm.JS.Web.Support.cloneAs", 27, 27);
v___x_5227_ = lean_mk_string_unchecked("globalThis", 10, 10);
v___x_5228_ = lean_mk_string_unchecked("structuredClone", 15, 15);
v___x_5229_ = 0;
v___x_5230_ = lean_unsigned_to_nat(1u);
v___x_5231_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_5231_, 0, v___x_5226_);
lean_ctor_set(v___x_5231_, 1, v___x_5227_);
lean_ctor_set(v___x_5231_, 2, v___x_5228_);
lean_ctor_set(v___x_5231_, 3, v___x_5230_);
lean_ctor_set_uint8(v___x_5231_, sizeof(void*)*4, v___x_5229_);
v___x_5232_ = lean_mk_string_unchecked("", 0, 0);
v___x_5233_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5233_, 0, v_v_5224_);
lean_ctor_set(v___x_5233_, 1, v___x_5232_);
v___x_5234_ = lean_mk_empty_array_with_capacity(v___x_5230_);
v___x_5235_ = lean_array_push(v___x_5234_, v___x_5233_);
v___x_5236_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0_spec__0(v___x_5231_, v___x_5235_, v___x_5229_);
lean_dec_ref_known(v___x_5231_, 4);
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0___boxed(lean_object* v_v_5237_, lean_object* v_a_5238_){
_start:
{
lean_object* v_res_5239_; 
v_res_5239_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0(v_v_5237_);
return v_res_5239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity___lam__0(lean_object* v_x_5240_){
_start:
{
lean_object* v_val_5243_; 
if (lean_obj_tag(v_x_5240_) == 0)
{
lean_object* v_a_5245_; lean_object* v___x_5247_; uint8_t v_isShared_5248_; uint8_t v_isSharedCheck_5253_; 
v_a_5245_ = lean_ctor_get(v_x_5240_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v_x_5240_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5247_ = v_x_5240_;
v_isShared_5248_ = v_isSharedCheck_5253_;
goto v_resetjp_5246_;
}
else
{
lean_inc(v_a_5245_);
lean_dec(v_x_5240_);
v___x_5247_ = lean_box(0);
v_isShared_5248_ = v_isSharedCheck_5253_;
goto v_resetjp_5246_;
}
v_resetjp_5246_:
{
lean_object* v___x_5250_; 
if (v_isShared_5248_ == 0)
{
v___x_5250_ = v___x_5247_;
goto v_reusejp_5249_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v_a_5245_);
v___x_5250_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5249_;
}
v_reusejp_5249_:
{
lean_object* v___x_5251_; 
v___x_5251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5251_, 0, v___x_5250_);
return v___x_5251_;
}
}
}
else
{
lean_object* v_a_5254_; lean_object* v___x_5256_; uint8_t v_isShared_5257_; uint8_t v_isSharedCheck_5267_; 
v_a_5254_ = lean_ctor_get(v_x_5240_, 0);
v_isSharedCheck_5267_ = !lean_is_exclusive(v_x_5240_);
if (v_isSharedCheck_5267_ == 0)
{
v___x_5256_ = v_x_5240_;
v_isShared_5257_ = v_isSharedCheck_5267_;
goto v_resetjp_5255_;
}
else
{
lean_inc(v_a_5254_);
lean_dec(v_x_5240_);
v___x_5256_ = lean_box(0);
v_isShared_5257_ = v_isSharedCheck_5267_;
goto v_resetjp_5255_;
}
v_resetjp_5255_:
{
lean_object* v___x_5258_; 
v___x_5258_ = l_Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity_spec__0(v_a_5254_);
if (lean_obj_tag(v___x_5258_) == 0)
{
lean_object* v_a_5259_; lean_object* v___x_5261_; 
v_a_5259_ = lean_ctor_get(v___x_5258_, 0);
lean_inc(v_a_5259_);
lean_dec_ref_known(v___x_5258_, 1);
if (v_isShared_5257_ == 0)
{
lean_ctor_set(v___x_5256_, 0, v_a_5259_);
v___x_5261_ = v___x_5256_;
goto v_reusejp_5260_;
}
else
{
lean_object* v_reuseFailAlloc_5262_; 
v_reuseFailAlloc_5262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5262_, 0, v_a_5259_);
v___x_5261_ = v_reuseFailAlloc_5262_;
goto v_reusejp_5260_;
}
v_reusejp_5260_:
{
v_val_5243_ = v___x_5261_;
goto v___jp_5242_;
}
}
else
{
lean_object* v_a_5263_; lean_object* v___x_5265_; 
v_a_5263_ = lean_ctor_get(v___x_5258_, 0);
lean_inc(v_a_5263_);
lean_dec_ref_known(v___x_5258_, 1);
if (v_isShared_5257_ == 0)
{
lean_ctor_set_tag(v___x_5256_, 0);
lean_ctor_set(v___x_5256_, 0, v_a_5263_);
v___x_5265_ = v___x_5256_;
goto v_reusejp_5264_;
}
else
{
lean_object* v_reuseFailAlloc_5266_; 
v_reuseFailAlloc_5266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5266_, 0, v_a_5263_);
v___x_5265_ = v_reuseFailAlloc_5266_;
goto v_reusejp_5264_;
}
v_reusejp_5264_:
{
v_val_5243_ = v___x_5265_;
goto v___jp_5242_;
}
}
}
}
v___jp_5242_:
{
lean_object* v___x_5244_; 
v___x_5244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5244_, 0, v_val_5243_);
return v___x_5244_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity___lam__0___boxed(lean_object* v_x_5268_, lean_object* v___y_5269_){
_start:
{
lean_object* v_res_5270_; 
v_res_5270_ = l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity___lam__0(v_x_5268_);
return v_res_5270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity(lean_object* v_self_5271_){
_start:
{
lean_object* v___f_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; uint8_t v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; 
v___f_5273_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity___lam__0___boxed), 2, 0);
v___x_5274_ = lean_mk_string_unchecked("getIdentity", 11, 11);
v___x_5275_ = lean_unsigned_to_nat(0u);
v___x_5276_ = lean_mk_empty_array_with_capacity(v___x_5275_);
v___x_5277_ = l_Lasm_JS_Web_Support_args(v___x_5276_);
v___x_5278_ = 0;
v___x_5279_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_5271_, v___x_5274_, v___x_5277_);
v___x_5280_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5275_, v___x_5278_, v___x_5279_, v___f_5273_);
return v___x_5280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity___boxed(lean_object* v_self_5281_, lean_object* v_a_5282_){
_start:
{
lean_object* v_res_5283_; 
v_res_5283_ = l_Lasm_JS_Cloudflare_CloudflareAccessContext_getIdentity(v_self_5281_);
return v_res_5283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_type(lean_object* v_self_5284_){
_start:
{
lean_object* v___x_5286_; lean_object* v___x_5287_; 
v___x_5286_ = lean_mk_string_unchecked("type", 4, 4);
v___x_5287_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_5284_, v___x_5286_);
return v___x_5287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_type___boxed(lean_object* v_self_5288_, lean_object* v_a_5289_){
_start:
{
lean_object* v_res_5290_; 
v_res_5290_ = l_Lasm_JS_Cloudflare_ScheduledEvent_type(v_self_5288_);
return v_res_5290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_eventPhase(lean_object* v_self_5291_){
_start:
{
lean_object* v___x_5293_; lean_object* v___x_5294_; 
v___x_5293_ = lean_mk_string_unchecked("eventPhase", 10, 10);
v___x_5294_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5291_, v___x_5293_);
return v___x_5294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_eventPhase___boxed(lean_object* v_self_5295_, lean_object* v_a_5296_){
_start:
{
lean_object* v_res_5297_; 
v_res_5297_ = l_Lasm_JS_Cloudflare_ScheduledEvent_eventPhase(v_self_5295_);
return v_res_5297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_composed(lean_object* v_self_5298_){
_start:
{
lean_object* v___x_5300_; lean_object* v___x_5301_; 
v___x_5300_ = lean_mk_string_unchecked("composed", 8, 8);
v___x_5301_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_5298_, v___x_5300_);
return v___x_5301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_composed___boxed(lean_object* v_self_5302_, lean_object* v_a_5303_){
_start:
{
lean_object* v_res_5304_; 
v_res_5304_ = l_Lasm_JS_Cloudflare_ScheduledEvent_composed(v_self_5302_);
return v_res_5304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_bubbles(lean_object* v_self_5305_){
_start:
{
lean_object* v___x_5307_; lean_object* v___x_5308_; 
v___x_5307_ = lean_mk_string_unchecked("bubbles", 7, 7);
v___x_5308_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_5305_, v___x_5307_);
return v___x_5308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_bubbles___boxed(lean_object* v_self_5309_, lean_object* v_a_5310_){
_start:
{
lean_object* v_res_5311_; 
v_res_5311_ = l_Lasm_JS_Cloudflare_ScheduledEvent_bubbles(v_self_5309_);
return v_res_5311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_cancelable(lean_object* v_self_5312_){
_start:
{
lean_object* v___x_5314_; lean_object* v___x_5315_; 
v___x_5314_ = lean_mk_string_unchecked("cancelable", 10, 10);
v___x_5315_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_5312_, v___x_5314_);
return v___x_5315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_cancelable___boxed(lean_object* v_self_5316_, lean_object* v_a_5317_){
_start:
{
lean_object* v_res_5318_; 
v_res_5318_ = l_Lasm_JS_Cloudflare_ScheduledEvent_cancelable(v_self_5316_);
return v_res_5318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_defaultPrevented(lean_object* v_self_5319_){
_start:
{
lean_object* v___x_5321_; lean_object* v___x_5322_; 
v___x_5321_ = lean_mk_string_unchecked("defaultPrevented", 16, 16);
v___x_5322_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_5319_, v___x_5321_);
return v___x_5322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_defaultPrevented___boxed(lean_object* v_self_5323_, lean_object* v_a_5324_){
_start:
{
lean_object* v_res_5325_; 
v_res_5325_ = l_Lasm_JS_Cloudflare_ScheduledEvent_defaultPrevented(v_self_5323_);
return v_res_5325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_currentTarget(lean_object* v_self_5326_){
_start:
{
lean_object* v___x_5328_; lean_object* v___x_5329_; 
v___x_5328_ = lean_mk_string_unchecked("currentTarget", 13, 13);
v___x_5329_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_5326_, v___x_5328_);
return v___x_5329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_currentTarget___boxed(lean_object* v_self_5330_, lean_object* v_a_5331_){
_start:
{
lean_object* v_res_5332_; 
v_res_5332_ = l_Lasm_JS_Cloudflare_ScheduledEvent_currentTarget(v_self_5330_);
return v_res_5332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_target(lean_object* v_self_5333_){
_start:
{
lean_object* v___x_5335_; lean_object* v___x_5336_; 
v___x_5335_ = lean_mk_string_unchecked("target", 6, 6);
v___x_5336_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_5333_, v___x_5335_);
return v___x_5336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_target___boxed(lean_object* v_self_5337_, lean_object* v_a_5338_){
_start:
{
lean_object* v_res_5339_; 
v_res_5339_ = l_Lasm_JS_Cloudflare_ScheduledEvent_target(v_self_5337_);
return v_res_5339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_timeStamp(lean_object* v_self_5340_){
_start:
{
lean_object* v___x_5342_; lean_object* v___x_5343_; 
v___x_5342_ = lean_mk_string_unchecked("timeStamp", 9, 9);
v___x_5343_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5340_, v___x_5342_);
return v___x_5343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_timeStamp___boxed(lean_object* v_self_5344_, lean_object* v_a_5345_){
_start:
{
lean_object* v_res_5346_; 
v_res_5346_ = l_Lasm_JS_Cloudflare_ScheduledEvent_timeStamp(v_self_5344_);
return v_res_5346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_isTrusted(lean_object* v_self_5347_){
_start:
{
lean_object* v___x_5349_; lean_object* v___x_5350_; 
v___x_5349_ = lean_mk_string_unchecked("isTrusted", 9, 9);
v___x_5350_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_5347_, v___x_5349_);
return v___x_5350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_isTrusted___boxed(lean_object* v_self_5351_, lean_object* v_a_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l_Lasm_JS_Cloudflare_ScheduledEvent_isTrusted(v_self_5351_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0_spec__0(lean_object* v_o_5354_, lean_object* v_a_5355_){
_start:
{
if (lean_obj_tag(v_a_5355_) == 0)
{
lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; 
lean_dec(v_o_5354_);
v___x_5357_ = lean_mk_string_unchecked("Lasm.JS.Web: empty global path", 30, 30);
v___x_5358_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5358_, 0, v___x_5357_);
v___x_5359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5359_, 0, v___x_5358_);
return v___x_5359_;
}
else
{
lean_object* v_tail_5360_; 
v_tail_5360_ = lean_ctor_get(v_a_5355_, 1);
if (lean_obj_tag(v_tail_5360_) == 0)
{
lean_object* v_head_5361_; lean_object* v___x_5362_; 
v_head_5361_ = lean_ctor_get(v_a_5355_, 0);
lean_inc(v_head_5361_);
lean_dec_ref_known(v_a_5355_, 2);
v___x_5362_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_o_5354_, v_head_5361_);
return v___x_5362_;
}
else
{
lean_object* v_head_5363_; lean_object* v___x_5364_; 
lean_inc(v_tail_5360_);
v_head_5363_ = lean_ctor_get(v_a_5355_, 0);
lean_inc(v_head_5363_);
lean_dec_ref_known(v_a_5355_, 2);
v___x_5364_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_5354_, v_head_5363_);
if (lean_obj_tag(v___x_5364_) == 0)
{
lean_object* v_a_5365_; 
v_a_5365_ = lean_ctor_get(v___x_5364_, 0);
lean_inc(v_a_5365_);
lean_dec_ref_known(v___x_5364_, 1);
v_o_5354_ = v_a_5365_;
v_a_5355_ = v_tail_5360_;
goto _start;
}
else
{
lean_object* v_a_5367_; lean_object* v___x_5369_; uint8_t v_isShared_5370_; uint8_t v_isSharedCheck_5374_; 
lean_dec(v_tail_5360_);
v_a_5367_ = lean_ctor_get(v___x_5364_, 0);
v_isSharedCheck_5374_ = !lean_is_exclusive(v___x_5364_);
if (v_isSharedCheck_5374_ == 0)
{
v___x_5369_ = v___x_5364_;
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
else
{
lean_inc(v_a_5367_);
lean_dec(v___x_5364_);
v___x_5369_ = lean_box(0);
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
v_resetjp_5368_:
{
lean_object* v___x_5372_; 
if (v_isShared_5370_ == 0)
{
v___x_5372_ = v___x_5369_;
goto v_reusejp_5371_;
}
else
{
lean_object* v_reuseFailAlloc_5373_; 
v_reuseFailAlloc_5373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5373_, 0, v_a_5367_);
v___x_5372_ = v_reuseFailAlloc_5373_;
goto v_reusejp_5371_;
}
v_reusejp_5371_:
{
return v___x_5372_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0_spec__0___boxed(lean_object* v_o_5375_, lean_object* v_a_5376_, lean_object* v_a_5377_){
_start:
{
lean_object* v_res_5378_; 
v_res_5378_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0_spec__0(v_o_5375_, v_a_5376_);
return v_res_5378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0(lean_object* v_path_5379_){
_start:
{
lean_object* v___x_5381_; 
v___x_5381_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5381_) == 0)
{
lean_object* v_a_5382_; lean_object* v___x_5383_; 
v_a_5382_ = lean_ctor_get(v___x_5381_, 0);
lean_inc(v_a_5382_);
lean_dec_ref_known(v___x_5381_, 1);
v___x_5383_ = l_Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0_spec__0(v_a_5382_, v_path_5379_);
return v___x_5383_;
}
else
{
lean_object* v_a_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5391_; 
lean_dec(v_path_5379_);
v_a_5384_ = lean_ctor_get(v___x_5381_, 0);
v_isSharedCheck_5391_ = !lean_is_exclusive(v___x_5381_);
if (v_isSharedCheck_5391_ == 0)
{
v___x_5386_ = v___x_5381_;
v_isShared_5387_ = v_isSharedCheck_5391_;
goto v_resetjp_5385_;
}
else
{
lean_inc(v_a_5384_);
lean_dec(v___x_5381_);
v___x_5386_ = lean_box(0);
v_isShared_5387_ = v_isSharedCheck_5391_;
goto v_resetjp_5385_;
}
v_resetjp_5385_:
{
lean_object* v___x_5389_; 
if (v_isShared_5387_ == 0)
{
v___x_5389_ = v___x_5386_;
goto v_reusejp_5388_;
}
else
{
lean_object* v_reuseFailAlloc_5390_; 
v_reuseFailAlloc_5390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5390_, 0, v_a_5384_);
v___x_5389_ = v_reuseFailAlloc_5390_;
goto v_reusejp_5388_;
}
v_reusejp_5388_:
{
return v___x_5389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0___boxed(lean_object* v_path_5392_, lean_object* v_a_5393_){
_start:
{
lean_object* v_res_5394_; 
v_res_5394_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0(v_path_5392_);
return v_res_5394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_NONE(){
_start:
{
lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; 
v___x_5396_ = lean_mk_string_unchecked("Cloudflare_ScheduledEvent", 25, 25);
v___x_5397_ = lean_mk_string_unchecked("NONE", 4, 4);
v___x_5398_ = lean_box(0);
v___x_5399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5399_, 0, v___x_5397_);
lean_ctor_set(v___x_5399_, 1, v___x_5398_);
v___x_5400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5400_, 0, v___x_5396_);
lean_ctor_set(v___x_5400_, 1, v___x_5399_);
v___x_5401_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0(v___x_5400_);
return v___x_5401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_NONE___boxed(lean_object* v_a_5402_){
_start:
{
lean_object* v_res_5403_; 
v_res_5403_ = l_Lasm_JS_Cloudflare_ScheduledEvent_NONE();
return v_res_5403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_CAPTURING__PHASE(){
_start:
{
lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; 
v___x_5405_ = lean_mk_string_unchecked("Cloudflare_ScheduledEvent", 25, 25);
v___x_5406_ = lean_mk_string_unchecked("CAPTURING_PHASE", 15, 15);
v___x_5407_ = lean_box(0);
v___x_5408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5408_, 0, v___x_5406_);
lean_ctor_set(v___x_5408_, 1, v___x_5407_);
v___x_5409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5409_, 0, v___x_5405_);
lean_ctor_set(v___x_5409_, 1, v___x_5408_);
v___x_5410_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0(v___x_5409_);
return v___x_5410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_CAPTURING__PHASE___boxed(lean_object* v_a_5411_){
_start:
{
lean_object* v_res_5412_; 
v_res_5412_ = l_Lasm_JS_Cloudflare_ScheduledEvent_CAPTURING__PHASE();
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_AT__TARGET(){
_start:
{
lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; 
v___x_5414_ = lean_mk_string_unchecked("Cloudflare_ScheduledEvent", 25, 25);
v___x_5415_ = lean_mk_string_unchecked("AT_TARGET", 9, 9);
v___x_5416_ = lean_box(0);
v___x_5417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5417_, 0, v___x_5415_);
lean_ctor_set(v___x_5417_, 1, v___x_5416_);
v___x_5418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5418_, 0, v___x_5414_);
lean_ctor_set(v___x_5418_, 1, v___x_5417_);
v___x_5419_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0(v___x_5418_);
return v___x_5419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_AT__TARGET___boxed(lean_object* v_a_5420_){
_start:
{
lean_object* v_res_5421_; 
v_res_5421_ = l_Lasm_JS_Cloudflare_ScheduledEvent_AT__TARGET();
return v_res_5421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_BUBBLING__PHASE(){
_start:
{
lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; 
v___x_5423_ = lean_mk_string_unchecked("Cloudflare_ScheduledEvent", 25, 25);
v___x_5424_ = lean_mk_string_unchecked("BUBBLING_PHASE", 14, 14);
v___x_5425_ = lean_box(0);
v___x_5426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5426_, 0, v___x_5424_);
lean_ctor_set(v___x_5426_, 1, v___x_5425_);
v___x_5427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5427_, 0, v___x_5423_);
lean_ctor_set(v___x_5427_, 1, v___x_5426_);
v___x_5428_ = l_Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Cloudflare_ScheduledEvent_NONE_spec__0(v___x_5427_);
return v___x_5428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_BUBBLING__PHASE___boxed(lean_object* v_a_5429_){
_start:
{
lean_object* v_res_5430_; 
v_res_5430_ = l_Lasm_JS_Cloudflare_ScheduledEvent_BUBBLING__PHASE();
return v_res_5430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_scheduledTime(lean_object* v_self_5431_){
_start:
{
lean_object* v___x_5433_; lean_object* v___x_5434_; 
v___x_5433_ = lean_mk_string_unchecked("scheduledTime", 13, 13);
v___x_5434_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5431_, v___x_5433_);
return v___x_5434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_scheduledTime___boxed(lean_object* v_self_5435_, lean_object* v_a_5436_){
_start:
{
lean_object* v_res_5437_; 
v_res_5437_ = l_Lasm_JS_Cloudflare_ScheduledEvent_scheduledTime(v_self_5435_);
return v_res_5437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_cron(lean_object* v_self_5438_){
_start:
{
lean_object* v___x_5440_; lean_object* v___x_5441_; 
v___x_5440_ = lean_mk_string_unchecked("cron", 4, 4);
v___x_5441_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_5438_, v___x_5440_);
return v___x_5441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_cron___boxed(lean_object* v_self_5442_, lean_object* v_a_5443_){
_start:
{
lean_object* v_res_5444_; 
v_res_5444_ = l_Lasm_JS_Cloudflare_ScheduledEvent_cron(v_self_5442_);
return v_res_5444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_stopImmediatePropagation(lean_object* v_self_5445_){
_start:
{
lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; 
v___x_5447_ = lean_mk_string_unchecked("stopImmediatePropagation", 24, 24);
v___x_5448_ = lean_unsigned_to_nat(0u);
v___x_5449_ = lean_mk_empty_array_with_capacity(v___x_5448_);
v___x_5450_ = l_Lasm_JS_Web_Support_args(v___x_5449_);
v___x_5451_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5445_, v___x_5447_, v___x_5450_);
return v___x_5451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_stopImmediatePropagation___boxed(lean_object* v_self_5452_, lean_object* v_a_5453_){
_start:
{
lean_object* v_res_5454_; 
v_res_5454_ = l_Lasm_JS_Cloudflare_ScheduledEvent_stopImmediatePropagation(v_self_5452_);
return v_res_5454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_preventDefault(lean_object* v_self_5455_){
_start:
{
lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; 
v___x_5457_ = lean_mk_string_unchecked("preventDefault", 14, 14);
v___x_5458_ = lean_unsigned_to_nat(0u);
v___x_5459_ = lean_mk_empty_array_with_capacity(v___x_5458_);
v___x_5460_ = l_Lasm_JS_Web_Support_args(v___x_5459_);
v___x_5461_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5455_, v___x_5457_, v___x_5460_);
return v___x_5461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_preventDefault___boxed(lean_object* v_self_5462_, lean_object* v_a_5463_){
_start:
{
lean_object* v_res_5464_; 
v_res_5464_ = l_Lasm_JS_Cloudflare_ScheduledEvent_preventDefault(v_self_5462_);
return v_res_5464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_stopPropagation(lean_object* v_self_5465_){
_start:
{
lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; 
v___x_5467_ = lean_mk_string_unchecked("stopPropagation", 15, 15);
v___x_5468_ = lean_unsigned_to_nat(0u);
v___x_5469_ = lean_mk_empty_array_with_capacity(v___x_5468_);
v___x_5470_ = l_Lasm_JS_Web_Support_args(v___x_5469_);
v___x_5471_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5465_, v___x_5467_, v___x_5470_);
return v___x_5471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_stopPropagation___boxed(lean_object* v_self_5472_, lean_object* v_a_5473_){
_start:
{
lean_object* v_res_5474_; 
v_res_5474_ = l_Lasm_JS_Cloudflare_ScheduledEvent_stopPropagation(v_self_5472_);
return v_res_5474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_composedPath(lean_object* v_self_5475_){
_start:
{
lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; 
v___x_5477_ = lean_mk_string_unchecked("composedPath", 12, 12);
v___x_5478_ = lean_unsigned_to_nat(0u);
v___x_5479_ = lean_mk_empty_array_with_capacity(v___x_5478_);
v___x_5480_ = l_Lasm_JS_Web_Support_args(v___x_5479_);
v___x_5481_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(v_self_5475_, v___x_5477_, v___x_5480_);
return v___x_5481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_composedPath___boxed(lean_object* v_self_5482_, lean_object* v_a_5483_){
_start:
{
lean_object* v_res_5484_; 
v_res_5484_ = l_Lasm_JS_Cloudflare_ScheduledEvent_composedPath(v_self_5482_);
return v_res_5484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_waitUntil(lean_object* v_self_5485_, lean_object* v_promise_5486_){
_start:
{
lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; 
v___x_5488_ = lean_mk_string_unchecked("waitUntil", 9, 9);
v___x_5489_ = lean_mk_string_unchecked("", 0, 0);
v___x_5490_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5490_, 0, v_promise_5486_);
lean_ctor_set(v___x_5490_, 1, v___x_5489_);
v___x_5491_ = lean_unsigned_to_nat(1u);
v___x_5492_ = lean_mk_empty_array_with_capacity(v___x_5491_);
v___x_5493_ = lean_array_push(v___x_5492_, v___x_5490_);
v___x_5494_ = l_Lasm_JS_Web_Support_args(v___x_5493_);
v___x_5495_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5485_, v___x_5488_, v___x_5494_);
return v___x_5495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_waitUntil___boxed(lean_object* v_self_5496_, lean_object* v_promise_5497_, lean_object* v_a_5498_){
_start:
{
lean_object* v_res_5499_; 
v_res_5499_ = l_Lasm_JS_Cloudflare_ScheduledEvent_waitUntil(v_self_5496_, v_promise_5497_);
return v_res_5499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_noRetry(lean_object* v_self_5500_){
_start:
{
lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; 
v___x_5502_ = lean_mk_string_unchecked("noRetry", 7, 7);
v___x_5503_ = lean_unsigned_to_nat(0u);
v___x_5504_ = lean_mk_empty_array_with_capacity(v___x_5503_);
v___x_5505_ = l_Lasm_JS_Web_Support_args(v___x_5504_);
v___x_5506_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5500_, v___x_5502_, v___x_5505_);
return v___x_5506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ScheduledEvent_noRetry___boxed(lean_object* v_self_5507_, lean_object* v_a_5508_){
_start:
{
lean_object* v_res_5509_; 
v_res_5509_ = l_Lasm_JS_Cloudflare_ScheduledEvent_noRetry(v_self_5507_);
return v_res_5509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_SpanClass(lean_object* v_self_5510_){
_start:
{
lean_object* v___x_5512_; lean_object* v___x_5513_; 
v___x_5512_ = lean_mk_string_unchecked("Span", 4, 4);
v___x_5513_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_5510_, v___x_5512_);
return v___x_5513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_SpanClass___boxed(lean_object* v_self_5514_, lean_object* v_a_5515_){
_start:
{
lean_object* v_res_5516_; 
v_res_5516_ = l_Lasm_JS_Cloudflare_Tracing_SpanClass(v_self_5514_);
return v_res_5516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__0(size_t v_sz_5517_, size_t v_i_5518_, lean_object* v_bs_5519_){
_start:
{
uint8_t v___x_5520_; 
v___x_5520_ = lean_usize_dec_lt(v_i_5518_, v_sz_5517_);
if (v___x_5520_ == 0)
{
return v_bs_5519_;
}
else
{
lean_object* v_v_5521_; lean_object* v___x_5522_; lean_object* v_bs_x27_5523_; size_t v___x_5524_; size_t v___x_5525_; lean_object* v___x_5526_; 
v_v_5521_ = lean_array_uget(v_bs_5519_, v_i_5518_);
v___x_5522_ = lean_unsigned_to_nat(0u);
v_bs_x27_5523_ = lean_array_uset(v_bs_5519_, v_i_5518_, v___x_5522_);
v___x_5524_ = ((size_t)1ULL);
v___x_5525_ = lean_usize_add(v_i_5518_, v___x_5524_);
v___x_5526_ = lean_array_uset(v_bs_x27_5523_, v_i_5518_, v_v_5521_);
v_i_5518_ = v___x_5525_;
v_bs_5519_ = v___x_5526_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__0___boxed(lean_object* v_sz_5528_, lean_object* v_i_5529_, lean_object* v_bs_5530_){
_start:
{
size_t v_sz_boxed_5531_; size_t v_i_boxed_5532_; lean_object* v_res_5533_; 
v_sz_boxed_5531_ = lean_unbox_usize(v_sz_5528_);
lean_dec(v_sz_5528_);
v_i_boxed_5532_ = lean_unbox_usize(v_i_5529_);
lean_dec(v_i_5529_);
v_res_5533_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__0(v_sz_boxed_5531_, v_i_boxed_5532_, v_bs_5530_);
return v_res_5533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__1(lean_object* v_o_5534_, lean_object* v_name_5535_, lean_object* v_args_5536_){
_start:
{
lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; uint8_t v___x_5541_; uint64_t v___x_5542_; uint64_t v___x_5543_; lean_object* v___x_5544_; 
v___x_5538_ = lean_mk_string_unchecked("", 0, 0);
v___x_5539_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5539_, 0, v_o_5534_);
lean_ctor_set(v___x_5539_, 1, v___x_5538_);
v___x_5540_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5540_, 0, v_name_5535_);
v___x_5541_ = 0;
v___x_5542_ = 8ULL;
v___x_5543_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0_spec__0(v___x_5541_, v___x_5542_);
v___x_5544_ = l_Lasm_JS_Value_invokeRaw(v___x_5539_, v___x_5540_, v_args_5536_, v___x_5543_);
if (lean_obj_tag(v___x_5544_) == 0)
{
lean_object* v_a_5545_; lean_object* v___x_5546_; 
v_a_5545_ = lean_ctor_get(v___x_5544_, 0);
lean_inc(v_a_5545_);
lean_dec_ref_known(v___x_5544_, 1);
v___x_5546_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_5545_);
lean_dec(v_a_5545_);
return v___x_5546_;
}
else
{
lean_object* v_a_5547_; lean_object* v___x_5549_; uint8_t v_isShared_5550_; uint8_t v_isSharedCheck_5554_; 
v_a_5547_ = lean_ctor_get(v___x_5544_, 0);
v_isSharedCheck_5554_ = !lean_is_exclusive(v___x_5544_);
if (v_isSharedCheck_5554_ == 0)
{
v___x_5549_ = v___x_5544_;
v_isShared_5550_ = v_isSharedCheck_5554_;
goto v_resetjp_5548_;
}
else
{
lean_inc(v_a_5547_);
lean_dec(v___x_5544_);
v___x_5549_ = lean_box(0);
v_isShared_5550_ = v_isSharedCheck_5554_;
goto v_resetjp_5548_;
}
v_resetjp_5548_:
{
lean_object* v___x_5552_; 
if (v_isShared_5550_ == 0)
{
v___x_5552_ = v___x_5549_;
goto v_reusejp_5551_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v_a_5547_);
v___x_5552_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5551_;
}
v_reusejp_5551_:
{
return v___x_5552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__1___boxed(lean_object* v_o_5555_, lean_object* v_name_5556_, lean_object* v_args_5557_, lean_object* v_a_5558_){
_start:
{
lean_object* v_res_5559_; 
v_res_5559_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__1(v_o_5555_, v_name_5556_, v_args_5557_);
return v_res_5559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_enterSpan(lean_object* v_self_5560_, lean_object* v_name_5561_, lean_object* v_callback_5562_, lean_object* v_args_5563_){
_start:
{
lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; size_t v_sz_5573_; size_t v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; 
v___x_5565_ = lean_mk_string_unchecked("enterSpan", 9, 9);
v___x_5566_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5566_, 0, v_name_5561_);
v___x_5567_ = lean_mk_string_unchecked("", 0, 0);
v___x_5568_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5568_, 0, v_callback_5562_);
lean_ctor_set(v___x_5568_, 1, v___x_5567_);
v___x_5569_ = lean_unsigned_to_nat(2u);
v___x_5570_ = lean_mk_empty_array_with_capacity(v___x_5569_);
v___x_5571_ = lean_array_push(v___x_5570_, v___x_5566_);
v___x_5572_ = lean_array_push(v___x_5571_, v___x_5568_);
v_sz_5573_ = lean_array_size(v_args_5563_);
v___x_5574_ = ((size_t)0ULL);
v___x_5575_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__0(v_sz_5573_, v___x_5574_, v_args_5563_);
v___x_5576_ = l_Lasm_JS_Web_Support_argsWith(v___x_5572_, v___x_5575_);
lean_dec_ref(v___x_5575_);
v___x_5577_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__1(v_self_5560_, v___x_5565_, v___x_5576_);
return v___x_5577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_enterSpan___boxed(lean_object* v_self_5578_, lean_object* v_name_5579_, lean_object* v_callback_5580_, lean_object* v_args_5581_, lean_object* v_a_5582_){
_start:
{
lean_object* v_res_5583_; 
v_res_5583_ = l_Lasm_JS_Cloudflare_Tracing_enterSpan(v_self_5578_, v_name_5579_, v_callback_5580_, v_args_5581_);
return v_res_5583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_startActiveSpan(lean_object* v_self_5584_, lean_object* v_name_5585_, lean_object* v_callback_5586_, lean_object* v_args_5587_){
_start:
{
lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; size_t v_sz_5597_; size_t v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; 
v___x_5589_ = lean_mk_string_unchecked("startActiveSpan", 15, 15);
v___x_5590_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5590_, 0, v_name_5585_);
v___x_5591_ = lean_mk_string_unchecked("", 0, 0);
v___x_5592_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5592_, 0, v_callback_5586_);
lean_ctor_set(v___x_5592_, 1, v___x_5591_);
v___x_5593_ = lean_unsigned_to_nat(2u);
v___x_5594_ = lean_mk_empty_array_with_capacity(v___x_5593_);
v___x_5595_ = lean_array_push(v___x_5594_, v___x_5590_);
v___x_5596_ = lean_array_push(v___x_5595_, v___x_5592_);
v_sz_5597_ = lean_array_size(v_args_5587_);
v___x_5598_ = ((size_t)0ULL);
v___x_5599_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__0(v_sz_5597_, v___x_5598_, v_args_5587_);
v___x_5600_ = l_Lasm_JS_Web_Support_argsWith(v___x_5596_, v___x_5599_);
lean_dec_ref(v___x_5599_);
v___x_5601_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_enterSpan_spec__1(v_self_5584_, v___x_5589_, v___x_5600_);
return v___x_5601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_startActiveSpan___boxed(lean_object* v_self_5602_, lean_object* v_name_5603_, lean_object* v_callback_5604_, lean_object* v_args_5605_, lean_object* v_a_5606_){
_start:
{
lean_object* v_res_5607_; 
v_res_5607_ = l_Lasm_JS_Cloudflare_Tracing_startActiveSpan(v_self_5602_, v_name_5603_, v_callback_5604_, v_args_5605_);
return v_res_5607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_startSpan(lean_object* v_self_5608_, lean_object* v_name_5609_){
_start:
{
lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; 
v___x_5611_ = lean_mk_string_unchecked("startSpan", 9, 9);
v___x_5612_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5612_, 0, v_name_5609_);
v___x_5613_ = lean_unsigned_to_nat(1u);
v___x_5614_ = lean_mk_empty_array_with_capacity(v___x_5613_);
v___x_5615_ = lean_array_push(v___x_5614_, v___x_5612_);
v___x_5616_ = l_Lasm_JS_Web_Support_args(v___x_5615_);
v___x_5617_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5608_, v___x_5611_, v___x_5616_);
if (lean_obj_tag(v___x_5617_) == 0)
{
lean_object* v_a_5618_; lean_object* v___x_5620_; uint8_t v_isShared_5621_; uint8_t v_isSharedCheck_5625_; 
v_a_5618_ = lean_ctor_get(v___x_5617_, 0);
v_isSharedCheck_5625_ = !lean_is_exclusive(v___x_5617_);
if (v_isSharedCheck_5625_ == 0)
{
v___x_5620_ = v___x_5617_;
v_isShared_5621_ = v_isSharedCheck_5625_;
goto v_resetjp_5619_;
}
else
{
lean_inc(v_a_5618_);
lean_dec(v___x_5617_);
v___x_5620_ = lean_box(0);
v_isShared_5621_ = v_isSharedCheck_5625_;
goto v_resetjp_5619_;
}
v_resetjp_5619_:
{
lean_object* v___x_5623_; 
if (v_isShared_5621_ == 0)
{
v___x_5623_ = v___x_5620_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v_a_5618_);
v___x_5623_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
return v___x_5623_;
}
}
}
else
{
lean_object* v_a_5626_; lean_object* v___x_5628_; uint8_t v_isShared_5629_; uint8_t v_isSharedCheck_5633_; 
v_a_5626_ = lean_ctor_get(v___x_5617_, 0);
v_isSharedCheck_5633_ = !lean_is_exclusive(v___x_5617_);
if (v_isSharedCheck_5633_ == 0)
{
v___x_5628_ = v___x_5617_;
v_isShared_5629_ = v_isSharedCheck_5633_;
goto v_resetjp_5627_;
}
else
{
lean_inc(v_a_5626_);
lean_dec(v___x_5617_);
v___x_5628_ = lean_box(0);
v_isShared_5629_ = v_isSharedCheck_5633_;
goto v_resetjp_5627_;
}
v_resetjp_5627_:
{
lean_object* v___x_5631_; 
if (v_isShared_5629_ == 0)
{
v___x_5631_ = v___x_5628_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5632_; 
v_reuseFailAlloc_5632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5632_, 0, v_a_5626_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_startSpan___boxed(lean_object* v_self_5634_, lean_object* v_name_5635_, lean_object* v_a_5636_){
_start:
{
lean_object* v_res_5637_; 
v_res_5637_ = l_Lasm_JS_Cloudflare_Tracing_startSpan(v_self_5634_, v_name_5635_);
return v_res_5637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1_spec__2(lean_object* v_context_5638_, lean_object* v_d_5639_){
_start:
{
lean_object* v___y_5645_; lean_object* v___y_5646_; 
switch(lean_obj_tag(v_d_5639_))
{
case 1:
{
goto v___jp_5641_;
}
case 0:
{
goto v___jp_5641_;
}
default: 
{
if (lean_obj_tag(v_d_5639_) == 9)
{
lean_object* v_value_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; 
v_value_5650_ = lean_ctor_get(v_d_5639_, 0);
lean_inc(v_value_5650_);
lean_dec_ref_known(v_d_5639_, 2);
v___x_5651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5651_, 0, v_value_5650_);
v___x_5652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5652_, 0, v___x_5651_);
return v___x_5652_;
}
else
{
lean_object* v___x_5653_; lean_object* v_received_5655_; 
v___x_5653_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_5639_) == 9)
{
lean_object* v_value_5671_; lean_object* v_description_5672_; uint8_t v___x_5673_; 
v_value_5671_ = lean_ctor_get(v_d_5639_, 0);
v_description_5672_ = lean_ctor_get(v_d_5639_, 1);
v___x_5673_ = lean_string_dec_eq(v_description_5672_, v___x_5653_);
if (v___x_5673_ == 0)
{
goto v___jp_5669_;
}
else
{
uint32_t v___x_5674_; uint64_t v___x_5675_; lean_object* v___x_5676_; uint32_t v___x_5677_; lean_object* v___x_5678_; 
lean_inc_n(v_value_5671_, 2);
lean_dec_ref_known(v_d_5639_, 2);
v___x_5674_ = 206;
v___x_5675_ = 0ULL;
lean_inc_ref(v___x_5653_);
v___x_5676_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5676_, 0, v_value_5671_);
lean_ctor_set(v___x_5676_, 1, v___x_5653_);
v___x_5677_ = lasm_js_value_handle(v_value_5671_);
lean_dec(v_value_5671_);
v___x_5678_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5674_, v___x_5675_, v___x_5676_, v___x_5677_);
lean_dec_ref_known(v___x_5676_, 2);
if (lean_obj_tag(v___x_5678_) == 0)
{
lean_object* v_a_5679_; uint8_t v___x_5680_; 
v_a_5679_ = lean_ctor_get(v___x_5678_, 0);
lean_inc(v_a_5679_);
lean_dec_ref_known(v___x_5678_, 1);
v___x_5680_ = lean_string_validate_utf8(v_a_5679_);
if (v___x_5680_ == 0)
{
lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; 
lean_dec(v_a_5679_);
v___x_5681_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_5682_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_5683_ = lean_unsigned_to_nat(193u);
v___x_5684_ = lean_unsigned_to_nat(46u);
v___x_5685_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_5686_ = l_mkPanicMessageWithDecl(v___x_5681_, v___x_5682_, v___x_5683_, v___x_5684_, v___x_5685_);
lean_dec_ref(v___x_5685_);
lean_dec_ref(v___x_5682_);
lean_dec_ref(v___x_5681_);
v___x_5687_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5686_);
v_received_5655_ = v___x_5687_;
goto v___jp_5654_;
}
else
{
lean_object* v___x_5688_; 
v___x_5688_ = lean_string_from_utf8_unchecked(v_a_5679_);
v_received_5655_ = v___x_5688_;
goto v___jp_5654_;
}
}
else
{
lean_object* v___x_5689_; 
lean_dec_ref_known(v___x_5678_, 1);
v___x_5689_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_5655_ = v___x_5689_;
goto v___jp_5654_;
}
}
}
else
{
goto v___jp_5669_;
}
v___jp_5654_:
{
lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; uint8_t v___x_5667_; 
v___x_5656_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_5657_ = lean_string_append(v___x_5656_, v_context_5638_);
v___x_5658_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_5659_ = lean_string_append(v___x_5657_, v___x_5658_);
lean_dec_ref(v___x_5658_);
v___x_5660_ = lean_mk_string_unchecked("Option (Lasm.JS.Cloudflare.Span)", 32, 32);
v___x_5661_ = lean_string_append(v___x_5659_, v___x_5660_);
lean_dec_ref(v___x_5660_);
v___x_5662_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_5663_ = lean_string_append(v___x_5661_, v___x_5662_);
lean_dec_ref(v___x_5662_);
v___x_5664_ = lean_string_append(v___x_5663_, v_received_5655_);
lean_dec_ref(v_received_5655_);
v___x_5665_ = lean_string_utf8_byte_size(v___x_5653_);
v___x_5666_ = lean_unsigned_to_nat(0u);
v___x_5667_ = lean_nat_dec_eq(v___x_5665_, v___x_5666_);
if (v___x_5667_ == 0)
{
lean_object* v___x_5668_; 
lean_dec_ref(v___x_5653_);
v___x_5668_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_5645_ = v___x_5664_;
v___y_5646_ = v___x_5668_;
goto v___jp_5644_;
}
else
{
v___y_5645_ = v___x_5664_;
v___y_5646_ = v___x_5653_;
goto v___jp_5644_;
}
}
v___jp_5669_:
{
lean_object* v___x_5670_; 
v___x_5670_ = l_Lasm_JS_Data_describe(v_d_5639_);
v_received_5655_ = v___x_5670_;
goto v___jp_5654_;
}
}
}
}
v___jp_5641_:
{
lean_object* v___x_5642_; lean_object* v___x_5643_; 
v___x_5642_ = lean_box(0);
v___x_5643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5643_, 0, v___x_5642_);
return v___x_5643_;
}
v___jp_5644_:
{
lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; 
v___x_5647_ = lean_string_append(v___y_5645_, v___y_5646_);
v___x_5648_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5648_, 0, v___x_5647_);
v___x_5649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5649_, 0, v___x_5648_);
return v___x_5649_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1_spec__2___boxed(lean_object* v_context_5690_, lean_object* v_d_5691_, lean_object* v_a_5692_){
_start:
{
lean_object* v_res_5693_; 
v_res_5693_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1_spec__2(v_context_5690_, v_d_5691_);
lean_dec_ref(v_context_5690_);
return v_res_5693_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1(lean_object* v_context_5694_, lean_object* v_bytes_5695_){
_start:
{
lean_object* v___x_5697_; 
v___x_5697_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5695_);
if (lean_obj_tag(v___x_5697_) == 0)
{
lean_object* v_a_5698_; lean_object* v___x_5699_; 
v_a_5698_ = lean_ctor_get(v___x_5697_, 0);
lean_inc(v_a_5698_);
lean_dec_ref_known(v___x_5697_, 1);
v___x_5699_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1_spec__2(v_context_5694_, v_a_5698_);
return v___x_5699_;
}
else
{
lean_object* v_a_5700_; lean_object* v___x_5702_; uint8_t v_isShared_5703_; uint8_t v_isSharedCheck_5707_; 
v_a_5700_ = lean_ctor_get(v___x_5697_, 0);
v_isSharedCheck_5707_ = !lean_is_exclusive(v___x_5697_);
if (v_isSharedCheck_5707_ == 0)
{
v___x_5702_ = v___x_5697_;
v_isShared_5703_ = v_isSharedCheck_5707_;
goto v_resetjp_5701_;
}
else
{
lean_inc(v_a_5700_);
lean_dec(v___x_5697_);
v___x_5702_ = lean_box(0);
v_isShared_5703_ = v_isSharedCheck_5707_;
goto v_resetjp_5701_;
}
v_resetjp_5701_:
{
lean_object* v___x_5705_; 
if (v_isShared_5703_ == 0)
{
v___x_5705_ = v___x_5702_;
goto v_reusejp_5704_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v_a_5700_);
v___x_5705_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5704_;
}
v_reusejp_5704_:
{
return v___x_5705_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1___boxed(lean_object* v_context_5708_, lean_object* v_bytes_5709_, lean_object* v_a_5710_){
_start:
{
lean_object* v_res_5711_; 
v_res_5711_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1(v_context_5708_, v_bytes_5709_);
lean_dec_ref(v_bytes_5709_);
lean_dec_ref(v_context_5708_);
return v_res_5711_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__0(uint8_t v_await_5712_, uint64_t v_extra_5713_){
_start:
{
uint8_t v___x_5714_; uint64_t v___x_5715_; uint64_t v___y_5717_; 
v___x_5714_ = 0;
v___x_5715_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_5714_);
if (v_await_5712_ == 0)
{
uint64_t v___x_5720_; 
v___x_5720_ = 0ULL;
v___y_5717_ = v___x_5720_;
goto v___jp_5716_;
}
else
{
uint64_t v___x_5721_; 
v___x_5721_ = 2ULL;
v___y_5717_ = v___x_5721_;
goto v___jp_5716_;
}
v___jp_5716_:
{
uint64_t v___x_5718_; uint64_t v___x_5719_; 
v___x_5718_ = lean_uint64_lor(v___x_5715_, v___y_5717_);
v___x_5719_ = lean_uint64_lor(v___x_5718_, v_extra_5713_);
return v___x_5719_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__0___boxed(lean_object* v_await_5722_, lean_object* v_extra_5723_){
_start:
{
uint8_t v_await_boxed_5724_; uint64_t v_extra_boxed_5725_; uint64_t v_res_5726_; lean_object* v_r_5727_; 
v_await_boxed_5724_ = lean_unbox(v_await_5722_);
v_extra_boxed_5725_ = lean_unbox_uint64(v_extra_5723_);
lean_dec_ref(v_extra_5723_);
v_res_5726_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__0(v_await_boxed_5724_, v_extra_boxed_5725_);
v_r_5727_ = lean_box_uint64(v_res_5726_);
return v_r_5727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0(lean_object* v_o_5728_, lean_object* v_name_5729_, lean_object* v_args_5730_){
_start:
{
lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; uint8_t v___x_5735_; uint64_t v___x_5736_; uint64_t v___x_5737_; lean_object* v___x_5738_; 
v___x_5732_ = lean_mk_string_unchecked("", 0, 0);
v___x_5733_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5733_, 0, v_o_5728_);
lean_ctor_set(v___x_5733_, 1, v___x_5732_);
lean_inc_ref(v_name_5729_);
v___x_5734_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5734_, 0, v_name_5729_);
v___x_5735_ = 0;
v___x_5736_ = 8ULL;
v___x_5737_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__0(v___x_5735_, v___x_5736_);
v___x_5738_ = l_Lasm_JS_Value_invokeRaw(v___x_5733_, v___x_5734_, v_args_5730_, v___x_5737_);
if (lean_obj_tag(v___x_5738_) == 0)
{
lean_object* v_a_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; 
v_a_5739_ = lean_ctor_get(v___x_5738_, 0);
lean_inc(v_a_5739_);
lean_dec_ref_known(v___x_5738_, 1);
v___x_5740_ = lean_mk_string_unchecked("method ", 7, 7);
v___x_5741_ = lean_string_append(v___x_5740_, v_name_5729_);
lean_dec_ref(v_name_5729_);
v___x_5742_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0_spec__1(v___x_5741_, v_a_5739_);
lean_dec(v_a_5739_);
lean_dec_ref(v___x_5741_);
return v___x_5742_;
}
else
{
lean_object* v_a_5743_; lean_object* v___x_5745_; uint8_t v_isShared_5746_; uint8_t v_isSharedCheck_5750_; 
lean_dec_ref(v_name_5729_);
v_a_5743_ = lean_ctor_get(v___x_5738_, 0);
v_isSharedCheck_5750_ = !lean_is_exclusive(v___x_5738_);
if (v_isSharedCheck_5750_ == 0)
{
v___x_5745_ = v___x_5738_;
v_isShared_5746_ = v_isSharedCheck_5750_;
goto v_resetjp_5744_;
}
else
{
lean_inc(v_a_5743_);
lean_dec(v___x_5738_);
v___x_5745_ = lean_box(0);
v_isShared_5746_ = v_isSharedCheck_5750_;
goto v_resetjp_5744_;
}
v_resetjp_5744_:
{
lean_object* v___x_5748_; 
if (v_isShared_5746_ == 0)
{
v___x_5748_ = v___x_5745_;
goto v_reusejp_5747_;
}
else
{
lean_object* v_reuseFailAlloc_5749_; 
v_reuseFailAlloc_5749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5749_, 0, v_a_5743_);
v___x_5748_ = v_reuseFailAlloc_5749_;
goto v_reusejp_5747_;
}
v_reusejp_5747_:
{
return v___x_5748_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0___boxed(lean_object* v_o_5751_, lean_object* v_name_5752_, lean_object* v_args_5753_, lean_object* v_a_5754_){
_start:
{
lean_object* v_res_5755_; 
v_res_5755_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0(v_o_5751_, v_name_5752_, v_args_5753_);
return v_res_5755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_getActiveSpan(lean_object* v_self_5756_){
_start:
{
lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; 
v___x_5758_ = lean_mk_string_unchecked("getActiveSpan", 13, 13);
v___x_5759_ = lean_unsigned_to_nat(0u);
v___x_5760_ = lean_mk_empty_array_with_capacity(v___x_5759_);
v___x_5761_ = l_Lasm_JS_Web_Support_args(v___x_5760_);
v___x_5762_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Tracing_getActiveSpan_spec__0(v_self_5756_, v___x_5758_, v___x_5761_);
return v___x_5762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Tracing_getActiveSpan___boxed(lean_object* v_self_5763_, lean_object* v_a_5764_){
_start:
{
lean_object* v_res_5765_; 
v_res_5765_ = l_Lasm_JS_Cloudflare_Tracing_getActiveSpan(v_self_5763_);
return v_res_5765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_isTraced(lean_object* v_self_5766_){
_start:
{
lean_object* v___x_5768_; lean_object* v___x_5769_; 
v___x_5768_ = lean_mk_string_unchecked("isTraced", 8, 8);
v___x_5769_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_5766_, v___x_5768_);
return v___x_5769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_isTraced___boxed(lean_object* v_self_5770_, lean_object* v_a_5771_){
_start:
{
lean_object* v_res_5772_; 
v_res_5772_ = l_Lasm_JS_Cloudflare_Span_isTraced(v_self_5770_);
return v_res_5772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1_spec__2(lean_object* v_context_5773_, lean_object* v_d_5774_){
_start:
{
lean_object* v___y_5777_; lean_object* v___y_5778_; lean_object* v___y_5783_; lean_object* v_received_5784_; lean_object* v___y_5803_; lean_object* v_a_5806_; lean_object* v___x_5835_; lean_object* v___x_5836_; 
v___x_5835_ = lean_mk_string_unchecked("traceId", 7, 7);
lean_inc(v_d_5774_);
v___x_5836_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_d_5774_, v___x_5835_);
lean_dec_ref(v___x_5835_);
if (lean_obj_tag(v___x_5836_) == 0)
{
lean_object* v_a_5837_; 
v_a_5837_ = lean_ctor_get(v___x_5836_, 0);
lean_inc(v_a_5837_);
lean_dec_ref_known(v___x_5836_, 1);
v_a_5806_ = v_a_5837_;
goto v___jp_5805_;
}
else
{
lean_object* v_a_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; 
v_a_5838_ = lean_ctor_get(v___x_5836_, 0);
lean_inc(v_a_5838_);
lean_dec_ref_known(v___x_5836_, 1);
v___x_5839_ = lean_mk_string_unchecked("spanId", 6, 6);
lean_inc(v_d_5774_);
v___x_5840_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__7(v_d_5774_, v___x_5839_);
lean_dec_ref(v___x_5839_);
if (lean_obj_tag(v___x_5840_) == 0)
{
lean_object* v_a_5841_; 
lean_dec(v_a_5838_);
v_a_5841_ = lean_ctor_get(v___x_5840_, 0);
lean_inc(v_a_5841_);
lean_dec_ref_known(v___x_5840_, 1);
v_a_5806_ = v_a_5841_;
goto v___jp_5805_;
}
else
{
lean_object* v_a_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; 
v_a_5842_ = lean_ctor_get(v___x_5840_, 0);
lean_inc(v_a_5842_);
lean_dec_ref_known(v___x_5840_, 1);
v___x_5843_ = lean_mk_string_unchecked("traceFlags", 10, 10);
lean_inc(v_d_5774_);
v___x_5844_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_CacheContext_purge_spec__1_spec__2_spec__3_spec__5_spec__6(v_d_5774_, v___x_5843_);
lean_dec_ref(v___x_5843_);
if (lean_obj_tag(v___x_5844_) == 0)
{
lean_object* v_a_5845_; 
lean_dec(v_a_5842_);
lean_dec(v_a_5838_);
v_a_5845_ = lean_ctor_get(v___x_5844_, 0);
lean_inc(v_a_5845_);
lean_dec_ref_known(v___x_5844_, 1);
v_a_5806_ = v_a_5845_;
goto v___jp_5805_;
}
else
{
lean_object* v_a_5846_; lean_object* v___x_5848_; uint8_t v_isShared_5849_; uint8_t v_isSharedCheck_5855_; 
lean_dec(v_d_5774_);
v_a_5846_ = lean_ctor_get(v___x_5844_, 0);
v_isSharedCheck_5855_ = !lean_is_exclusive(v___x_5844_);
if (v_isSharedCheck_5855_ == 0)
{
v___x_5848_ = v___x_5844_;
v_isShared_5849_ = v_isSharedCheck_5855_;
goto v_resetjp_5847_;
}
else
{
lean_inc(v_a_5846_);
lean_dec(v___x_5844_);
v___x_5848_ = lean_box(0);
v_isShared_5849_ = v_isSharedCheck_5855_;
goto v_resetjp_5847_;
}
v_resetjp_5847_:
{
lean_object* v___x_5850_; double v___x_5851_; lean_object* v___x_5853_; 
v___x_5850_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_5850_, 0, v_a_5838_);
lean_ctor_set(v___x_5850_, 1, v_a_5842_);
v___x_5851_ = lean_unbox_float(v_a_5846_);
lean_dec(v_a_5846_);
lean_ctor_set_float(v___x_5850_, sizeof(void*)*2, v___x_5851_);
if (v_isShared_5849_ == 0)
{
lean_ctor_set_tag(v___x_5848_, 0);
lean_ctor_set(v___x_5848_, 0, v___x_5850_);
v___x_5853_ = v___x_5848_;
goto v_reusejp_5852_;
}
else
{
lean_object* v_reuseFailAlloc_5854_; 
v_reuseFailAlloc_5854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5854_, 0, v___x_5850_);
v___x_5853_ = v_reuseFailAlloc_5854_;
goto v_reusejp_5852_;
}
v_reusejp_5852_:
{
return v___x_5853_;
}
}
}
}
}
v___jp_5776_:
{
lean_object* v___x_5779_; lean_object* v___x_5780_; lean_object* v___x_5781_; 
v___x_5779_ = lean_string_append(v___y_5777_, v___y_5778_);
lean_dec_ref(v___y_5778_);
v___x_5780_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5780_, 0, v___x_5779_);
v___x_5781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5781_, 0, v___x_5780_);
return v___x_5781_;
}
v___jp_5782_:
{
lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; lean_object* v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; uint8_t v___x_5796_; 
v___x_5785_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_5786_ = lean_string_append(v___x_5785_, v_context_5773_);
v___x_5787_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_5788_ = lean_string_append(v___x_5786_, v___x_5787_);
lean_dec_ref(v___x_5787_);
v___x_5789_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingSpanContext", 37, 37);
v___x_5790_ = lean_string_append(v___x_5788_, v___x_5789_);
lean_dec_ref(v___x_5789_);
v___x_5791_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_5792_ = lean_string_append(v___x_5790_, v___x_5791_);
lean_dec_ref(v___x_5791_);
v___x_5793_ = lean_string_append(v___x_5792_, v_received_5784_);
lean_dec_ref(v_received_5784_);
v___x_5794_ = lean_string_utf8_byte_size(v___y_5783_);
v___x_5795_ = lean_unsigned_to_nat(0u);
v___x_5796_ = lean_nat_dec_eq(v___x_5794_, v___x_5795_);
if (v___x_5796_ == 0)
{
lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; 
v___x_5797_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_5798_ = lean_string_append(v___x_5797_, v___y_5783_);
lean_dec_ref(v___y_5783_);
v___x_5799_ = lean_mk_string_unchecked(")", 1, 1);
v___x_5800_ = lean_string_append(v___x_5798_, v___x_5799_);
lean_dec_ref(v___x_5799_);
v___y_5777_ = v___x_5793_;
v___y_5778_ = v___x_5800_;
goto v___jp_5776_;
}
else
{
lean_object* v___x_5801_; 
lean_dec_ref(v___y_5783_);
v___x_5801_ = lean_mk_string_unchecked("", 0, 0);
v___y_5777_ = v___x_5793_;
v___y_5778_ = v___x_5801_;
goto v___jp_5776_;
}
}
v___jp_5802_:
{
lean_object* v___x_5804_; 
v___x_5804_ = l_Lasm_JS_Data_describe(v_d_5774_);
v___y_5783_ = v___y_5803_;
v_received_5784_ = v___x_5804_;
goto v___jp_5782_;
}
v___jp_5805_:
{
if (lean_obj_tag(v_d_5774_) == 9)
{
lean_object* v_value_5807_; lean_object* v_description_5808_; lean_object* v___x_5809_; uint8_t v___x_5810_; 
v_value_5807_ = lean_ctor_get(v_d_5774_, 0);
v_description_5808_ = lean_ctor_get(v_d_5774_, 1);
v___x_5809_ = lean_mk_string_unchecked("", 0, 0);
v___x_5810_ = lean_string_dec_eq(v_description_5808_, v___x_5809_);
if (v___x_5810_ == 0)
{
lean_dec_ref(v___x_5809_);
v___y_5803_ = v_a_5806_;
goto v___jp_5802_;
}
else
{
lean_object* v___x_5812_; uint8_t v_isShared_5813_; uint8_t v_isSharedCheck_5832_; 
lean_inc(v_value_5807_);
v_isSharedCheck_5832_ = !lean_is_exclusive(v_d_5774_);
if (v_isSharedCheck_5832_ == 0)
{
lean_object* v_unused_5833_; lean_object* v_unused_5834_; 
v_unused_5833_ = lean_ctor_get(v_d_5774_, 1);
lean_dec(v_unused_5833_);
v_unused_5834_ = lean_ctor_get(v_d_5774_, 0);
lean_dec(v_unused_5834_);
v___x_5812_ = v_d_5774_;
v_isShared_5813_ = v_isSharedCheck_5832_;
goto v_resetjp_5811_;
}
else
{
lean_dec(v_d_5774_);
v___x_5812_ = lean_box(0);
v_isShared_5813_ = v_isSharedCheck_5832_;
goto v_resetjp_5811_;
}
v_resetjp_5811_:
{
uint32_t v___x_5814_; uint64_t v___x_5815_; lean_object* v___x_5817_; 
v___x_5814_ = 206;
v___x_5815_ = 0ULL;
lean_inc(v_value_5807_);
if (v_isShared_5813_ == 0)
{
lean_ctor_set(v___x_5812_, 1, v___x_5809_);
v___x_5817_ = v___x_5812_;
goto v_reusejp_5816_;
}
else
{
lean_object* v_reuseFailAlloc_5831_; 
v_reuseFailAlloc_5831_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5831_, 0, v_value_5807_);
lean_ctor_set(v_reuseFailAlloc_5831_, 1, v___x_5809_);
v___x_5817_ = v_reuseFailAlloc_5831_;
goto v_reusejp_5816_;
}
v_reusejp_5816_:
{
uint32_t v___x_5818_; lean_object* v___x_5819_; 
v___x_5818_ = lasm_js_value_handle(v_value_5807_);
lean_dec(v_value_5807_);
v___x_5819_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5814_, v___x_5815_, v___x_5817_, v___x_5818_);
lean_dec_ref(v___x_5817_);
if (lean_obj_tag(v___x_5819_) == 0)
{
lean_object* v_a_5820_; uint8_t v___x_5821_; 
v_a_5820_ = lean_ctor_get(v___x_5819_, 0);
lean_inc(v_a_5820_);
lean_dec_ref_known(v___x_5819_, 1);
v___x_5821_ = lean_string_validate_utf8(v_a_5820_);
if (v___x_5821_ == 0)
{
lean_object* v___x_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5828_; 
lean_dec(v_a_5820_);
v___x_5822_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_5823_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_5824_ = lean_unsigned_to_nat(193u);
v___x_5825_ = lean_unsigned_to_nat(46u);
v___x_5826_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_5827_ = l_mkPanicMessageWithDecl(v___x_5822_, v___x_5823_, v___x_5824_, v___x_5825_, v___x_5826_);
lean_dec_ref(v___x_5826_);
lean_dec_ref(v___x_5823_);
lean_dec_ref(v___x_5822_);
v___x_5828_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5827_);
v___y_5783_ = v_a_5806_;
v_received_5784_ = v___x_5828_;
goto v___jp_5782_;
}
else
{
lean_object* v___x_5829_; 
v___x_5829_ = lean_string_from_utf8_unchecked(v_a_5820_);
v___y_5783_ = v_a_5806_;
v_received_5784_ = v___x_5829_;
goto v___jp_5782_;
}
}
else
{
lean_object* v___x_5830_; 
lean_dec_ref_known(v___x_5819_, 1);
v___x_5830_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v___y_5783_ = v_a_5806_;
v_received_5784_ = v___x_5830_;
goto v___jp_5782_;
}
}
}
}
}
else
{
v___y_5803_ = v_a_5806_;
goto v___jp_5802_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1_spec__2___boxed(lean_object* v_context_5856_, lean_object* v_d_5857_, lean_object* v_a_5858_){
_start:
{
lean_object* v_res_5859_; 
v_res_5859_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1_spec__2(v_context_5856_, v_d_5857_);
lean_dec_ref(v_context_5856_);
return v_res_5859_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1(lean_object* v_context_5860_, lean_object* v_bytes_5861_){
_start:
{
lean_object* v___x_5863_; 
v___x_5863_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5861_);
if (lean_obj_tag(v___x_5863_) == 0)
{
lean_object* v_a_5864_; lean_object* v___x_5865_; 
v_a_5864_ = lean_ctor_get(v___x_5863_, 0);
lean_inc(v_a_5864_);
lean_dec_ref_known(v___x_5863_, 1);
v___x_5865_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1_spec__2(v_context_5860_, v_a_5864_);
return v___x_5865_;
}
else
{
lean_object* v_a_5866_; lean_object* v___x_5868_; uint8_t v_isShared_5869_; uint8_t v_isSharedCheck_5873_; 
v_a_5866_ = lean_ctor_get(v___x_5863_, 0);
v_isSharedCheck_5873_ = !lean_is_exclusive(v___x_5863_);
if (v_isSharedCheck_5873_ == 0)
{
v___x_5868_ = v___x_5863_;
v_isShared_5869_ = v_isSharedCheck_5873_;
goto v_resetjp_5867_;
}
else
{
lean_inc(v_a_5866_);
lean_dec(v___x_5863_);
v___x_5868_ = lean_box(0);
v_isShared_5869_ = v_isSharedCheck_5873_;
goto v_resetjp_5867_;
}
v_resetjp_5867_:
{
lean_object* v___x_5871_; 
if (v_isShared_5869_ == 0)
{
v___x_5871_ = v___x_5868_;
goto v_reusejp_5870_;
}
else
{
lean_object* v_reuseFailAlloc_5872_; 
v_reuseFailAlloc_5872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5872_, 0, v_a_5866_);
v___x_5871_ = v_reuseFailAlloc_5872_;
goto v_reusejp_5870_;
}
v_reusejp_5870_:
{
return v___x_5871_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1___boxed(lean_object* v_context_5874_, lean_object* v_bytes_5875_, lean_object* v_a_5876_){
_start:
{
lean_object* v_res_5877_; 
v_res_5877_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1(v_context_5874_, v_bytes_5875_);
lean_dec_ref(v_bytes_5875_);
lean_dec_ref(v_context_5874_);
return v_res_5877_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__0(uint8_t v_await_5878_, uint64_t v_extra_5879_){
_start:
{
uint8_t v___x_5880_; uint64_t v___x_5881_; uint64_t v___y_5883_; 
v___x_5880_ = 0;
v___x_5881_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_5880_);
if (v_await_5878_ == 0)
{
uint64_t v___x_5886_; 
v___x_5886_ = 0ULL;
v___y_5883_ = v___x_5886_;
goto v___jp_5882_;
}
else
{
uint64_t v___x_5887_; 
v___x_5887_ = 2ULL;
v___y_5883_ = v___x_5887_;
goto v___jp_5882_;
}
v___jp_5882_:
{
uint64_t v___x_5884_; uint64_t v___x_5885_; 
v___x_5884_ = lean_uint64_lor(v___x_5881_, v___y_5883_);
v___x_5885_ = lean_uint64_lor(v___x_5884_, v_extra_5879_);
return v___x_5885_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__0___boxed(lean_object* v_await_5888_, lean_object* v_extra_5889_){
_start:
{
uint8_t v_await_boxed_5890_; uint64_t v_extra_boxed_5891_; uint64_t v_res_5892_; lean_object* v_r_5893_; 
v_await_boxed_5890_ = lean_unbox(v_await_5888_);
v_extra_boxed_5891_ = lean_unbox_uint64(v_extra_5889_);
lean_dec_ref(v_extra_5889_);
v_res_5892_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__0(v_await_boxed_5890_, v_extra_boxed_5891_);
v_r_5893_ = lean_box_uint64(v_res_5892_);
return v_r_5893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0(lean_object* v_o_5894_, lean_object* v_name_5895_, lean_object* v_args_5896_){
_start:
{
lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; uint8_t v___x_5901_; uint64_t v___x_5902_; uint64_t v___x_5903_; lean_object* v___x_5904_; 
v___x_5898_ = lean_mk_string_unchecked("", 0, 0);
v___x_5899_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5899_, 0, v_o_5894_);
lean_ctor_set(v___x_5899_, 1, v___x_5898_);
lean_inc_ref(v_name_5895_);
v___x_5900_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5900_, 0, v_name_5895_);
v___x_5901_ = 0;
v___x_5902_ = 8ULL;
v___x_5903_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__0(v___x_5901_, v___x_5902_);
v___x_5904_ = l_Lasm_JS_Value_invokeRaw(v___x_5899_, v___x_5900_, v_args_5896_, v___x_5903_);
if (lean_obj_tag(v___x_5904_) == 0)
{
lean_object* v_a_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; 
v_a_5905_ = lean_ctor_get(v___x_5904_, 0);
lean_inc(v_a_5905_);
lean_dec_ref_known(v___x_5904_, 1);
v___x_5906_ = lean_mk_string_unchecked("method ", 7, 7);
v___x_5907_ = lean_string_append(v___x_5906_, v_name_5895_);
lean_dec_ref(v_name_5895_);
v___x_5908_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0_spec__1(v___x_5907_, v_a_5905_);
lean_dec(v_a_5905_);
lean_dec_ref(v___x_5907_);
return v___x_5908_;
}
else
{
lean_object* v_a_5909_; lean_object* v___x_5911_; uint8_t v_isShared_5912_; uint8_t v_isSharedCheck_5916_; 
lean_dec_ref(v_name_5895_);
v_a_5909_ = lean_ctor_get(v___x_5904_, 0);
v_isSharedCheck_5916_ = !lean_is_exclusive(v___x_5904_);
if (v_isSharedCheck_5916_ == 0)
{
v___x_5911_ = v___x_5904_;
v_isShared_5912_ = v_isSharedCheck_5916_;
goto v_resetjp_5910_;
}
else
{
lean_inc(v_a_5909_);
lean_dec(v___x_5904_);
v___x_5911_ = lean_box(0);
v_isShared_5912_ = v_isSharedCheck_5916_;
goto v_resetjp_5910_;
}
v_resetjp_5910_:
{
lean_object* v___x_5914_; 
if (v_isShared_5912_ == 0)
{
v___x_5914_ = v___x_5911_;
goto v_reusejp_5913_;
}
else
{
lean_object* v_reuseFailAlloc_5915_; 
v_reuseFailAlloc_5915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5915_, 0, v_a_5909_);
v___x_5914_ = v_reuseFailAlloc_5915_;
goto v_reusejp_5913_;
}
v_reusejp_5913_:
{
return v___x_5914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0___boxed(lean_object* v_o_5917_, lean_object* v_name_5918_, lean_object* v_args_5919_, lean_object* v_a_5920_){
_start:
{
lean_object* v_res_5921_; 
v_res_5921_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0(v_o_5917_, v_name_5918_, v_args_5919_);
return v_res_5921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_spanContext(lean_object* v_self_5922_){
_start:
{
lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; 
v___x_5924_ = lean_mk_string_unchecked("spanContext", 11, 11);
v___x_5925_ = lean_unsigned_to_nat(0u);
v___x_5926_ = lean_mk_empty_array_with_capacity(v___x_5925_);
v___x_5927_ = l_Lasm_JS_Web_Support_args(v___x_5926_);
v___x_5928_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_Span_spanContext_spec__0(v_self_5922_, v___x_5924_, v___x_5927_);
return v___x_5928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_spanContext___boxed(lean_object* v_self_5929_, lean_object* v_a_5930_){
_start:
{
lean_object* v_res_5931_; 
v_res_5931_ = l_Lasm_JS_Cloudflare_Span_spanContext(v_self_5929_);
return v_res_5931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setAttribute(lean_object* v_self_5932_, lean_object* v_key_5933_, lean_object* v_value_5934_){
_start:
{
lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___y_5939_; 
v___x_5936_ = lean_mk_string_unchecked("setAttribute", 12, 12);
v___x_5937_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5937_, 0, v_key_5933_);
switch(lean_obj_tag(v_value_5934_))
{
case 0:
{
uint8_t v_value_5962_; lean_object* v___x_5964_; uint8_t v_isShared_5965_; uint8_t v_isSharedCheck_5969_; 
v_value_5962_ = lean_ctor_get_uint8(v_value_5934_, 0);
v_isSharedCheck_5969_ = !lean_is_exclusive(v_value_5934_);
if (v_isSharedCheck_5969_ == 0)
{
v___x_5964_ = v_value_5934_;
v_isShared_5965_ = v_isSharedCheck_5969_;
goto v_resetjp_5963_;
}
else
{
lean_dec(v_value_5934_);
v___x_5964_ = lean_box(0);
v_isShared_5965_ = v_isSharedCheck_5969_;
goto v_resetjp_5963_;
}
v_resetjp_5963_:
{
lean_object* v___x_5967_; 
if (v_isShared_5965_ == 0)
{
lean_ctor_set_tag(v___x_5964_, 2);
v___x_5967_ = v___x_5964_;
goto v_reusejp_5966_;
}
else
{
lean_object* v_reuseFailAlloc_5968_; 
v_reuseFailAlloc_5968_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_5968_, 0, v_value_5962_);
v___x_5967_ = v_reuseFailAlloc_5968_;
goto v_reusejp_5966_;
}
v_reusejp_5966_:
{
v___y_5939_ = v___x_5967_;
goto v___jp_5938_;
}
}
}
case 1:
{
double v_value_5970_; lean_object* v___x_5972_; uint8_t v_isShared_5973_; uint8_t v_isSharedCheck_5977_; 
v_value_5970_ = lean_ctor_get_float(v_value_5934_, 0);
v_isSharedCheck_5977_ = !lean_is_exclusive(v_value_5934_);
if (v_isSharedCheck_5977_ == 0)
{
v___x_5972_ = v_value_5934_;
v_isShared_5973_ = v_isSharedCheck_5977_;
goto v_resetjp_5971_;
}
else
{
lean_dec(v_value_5934_);
v___x_5972_ = lean_box(0);
v_isShared_5973_ = v_isSharedCheck_5977_;
goto v_resetjp_5971_;
}
v_resetjp_5971_:
{
lean_object* v___x_5975_; 
if (v_isShared_5973_ == 0)
{
lean_ctor_set_tag(v___x_5972_, 3);
v___x_5975_ = v___x_5972_;
goto v_reusejp_5974_;
}
else
{
lean_object* v_reuseFailAlloc_5976_; 
v_reuseFailAlloc_5976_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_5976_, 0, v_value_5970_);
v___x_5975_ = v_reuseFailAlloc_5976_;
goto v_reusejp_5974_;
}
v_reusejp_5974_:
{
v___y_5939_ = v___x_5975_;
goto v___jp_5938_;
}
}
}
default: 
{
lean_object* v_value_5978_; lean_object* v___x_5980_; uint8_t v_isShared_5981_; uint8_t v_isSharedCheck_5985_; 
v_value_5978_ = lean_ctor_get(v_value_5934_, 0);
v_isSharedCheck_5985_ = !lean_is_exclusive(v_value_5934_);
if (v_isSharedCheck_5985_ == 0)
{
v___x_5980_ = v_value_5934_;
v_isShared_5981_ = v_isSharedCheck_5985_;
goto v_resetjp_5979_;
}
else
{
lean_inc(v_value_5978_);
lean_dec(v_value_5934_);
v___x_5980_ = lean_box(0);
v_isShared_5981_ = v_isSharedCheck_5985_;
goto v_resetjp_5979_;
}
v_resetjp_5979_:
{
lean_object* v___x_5983_; 
if (v_isShared_5981_ == 0)
{
lean_ctor_set_tag(v___x_5980_, 4);
v___x_5983_ = v___x_5980_;
goto v_reusejp_5982_;
}
else
{
lean_object* v_reuseFailAlloc_5984_; 
v_reuseFailAlloc_5984_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5984_, 0, v_value_5978_);
v___x_5983_ = v_reuseFailAlloc_5984_;
goto v_reusejp_5982_;
}
v_reusejp_5982_:
{
v___y_5939_ = v___x_5983_;
goto v___jp_5938_;
}
}
}
}
v___jp_5938_:
{
lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; 
v___x_5940_ = lean_unsigned_to_nat(2u);
v___x_5941_ = lean_mk_empty_array_with_capacity(v___x_5940_);
v___x_5942_ = lean_array_push(v___x_5941_, v___x_5937_);
v___x_5943_ = lean_array_push(v___x_5942_, v___y_5939_);
v___x_5944_ = l_Lasm_JS_Web_Support_args(v___x_5943_);
v___x_5945_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_5932_, v___x_5936_, v___x_5944_);
if (lean_obj_tag(v___x_5945_) == 0)
{
lean_object* v_a_5946_; lean_object* v___x_5948_; uint8_t v_isShared_5949_; uint8_t v_isSharedCheck_5953_; 
v_a_5946_ = lean_ctor_get(v___x_5945_, 0);
v_isSharedCheck_5953_ = !lean_is_exclusive(v___x_5945_);
if (v_isSharedCheck_5953_ == 0)
{
v___x_5948_ = v___x_5945_;
v_isShared_5949_ = v_isSharedCheck_5953_;
goto v_resetjp_5947_;
}
else
{
lean_inc(v_a_5946_);
lean_dec(v___x_5945_);
v___x_5948_ = lean_box(0);
v_isShared_5949_ = v_isSharedCheck_5953_;
goto v_resetjp_5947_;
}
v_resetjp_5947_:
{
lean_object* v___x_5951_; 
if (v_isShared_5949_ == 0)
{
v___x_5951_ = v___x_5948_;
goto v_reusejp_5950_;
}
else
{
lean_object* v_reuseFailAlloc_5952_; 
v_reuseFailAlloc_5952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5952_, 0, v_a_5946_);
v___x_5951_ = v_reuseFailAlloc_5952_;
goto v_reusejp_5950_;
}
v_reusejp_5950_:
{
return v___x_5951_;
}
}
}
else
{
lean_object* v_a_5954_; lean_object* v___x_5956_; uint8_t v_isShared_5957_; uint8_t v_isSharedCheck_5961_; 
v_a_5954_ = lean_ctor_get(v___x_5945_, 0);
v_isSharedCheck_5961_ = !lean_is_exclusive(v___x_5945_);
if (v_isSharedCheck_5961_ == 0)
{
v___x_5956_ = v___x_5945_;
v_isShared_5957_ = v_isSharedCheck_5961_;
goto v_resetjp_5955_;
}
else
{
lean_inc(v_a_5954_);
lean_dec(v___x_5945_);
v___x_5956_ = lean_box(0);
v_isShared_5957_ = v_isSharedCheck_5961_;
goto v_resetjp_5955_;
}
v_resetjp_5955_:
{
lean_object* v___x_5959_; 
if (v_isShared_5957_ == 0)
{
v___x_5959_ = v___x_5956_;
goto v_reusejp_5958_;
}
else
{
lean_object* v_reuseFailAlloc_5960_; 
v_reuseFailAlloc_5960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5960_, 0, v_a_5954_);
v___x_5959_ = v_reuseFailAlloc_5960_;
goto v_reusejp_5958_;
}
v_reusejp_5958_:
{
return v___x_5959_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setAttribute___boxed(lean_object* v_self_5986_, lean_object* v_key_5987_, lean_object* v_value_5988_, lean_object* v_a_5989_){
_start:
{
lean_object* v_res_5990_; 
v_res_5990_ = l_Lasm_JS_Cloudflare_Span_setAttribute(v_self_5986_, v_key_5987_, v_value_5988_);
return v_res_5990_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Span_setAttributes_spec__0(size_t v_sz_5991_, size_t v_i_5992_, lean_object* v_bs_5993_){
_start:
{
uint8_t v___x_5994_; 
v___x_5994_ = lean_usize_dec_lt(v_i_5992_, v_sz_5991_);
if (v___x_5994_ == 0)
{
return v_bs_5993_;
}
else
{
lean_object* v_v_5995_; lean_object* v_fst_5996_; lean_object* v_snd_5997_; lean_object* v___x_5999_; uint8_t v_isShared_6000_; uint8_t v_isSharedCheck_6047_; 
v_v_5995_ = lean_array_uget(v_bs_5993_, v_i_5992_);
v_fst_5996_ = lean_ctor_get(v_v_5995_, 0);
v_snd_5997_ = lean_ctor_get(v_v_5995_, 1);
v_isSharedCheck_6047_ = !lean_is_exclusive(v_v_5995_);
if (v_isSharedCheck_6047_ == 0)
{
v___x_5999_ = v_v_5995_;
v_isShared_6000_ = v_isSharedCheck_6047_;
goto v_resetjp_5998_;
}
else
{
lean_inc(v_snd_5997_);
lean_inc(v_fst_5996_);
lean_dec(v_v_5995_);
v___x_5999_ = lean_box(0);
v_isShared_6000_ = v_isSharedCheck_6047_;
goto v_resetjp_5998_;
}
v_resetjp_5998_:
{
lean_object* v___x_6001_; lean_object* v_bs_x27_6002_; lean_object* v___y_6004_; 
v___x_6001_ = lean_unsigned_to_nat(0u);
v_bs_x27_6002_ = lean_array_uset(v_bs_5993_, v_i_5992_, v___x_6001_);
if (lean_obj_tag(v_snd_5997_) == 0)
{
lean_object* v___x_6009_; lean_object* v___x_6011_; 
v___x_6009_ = lean_box(1);
if (v_isShared_6000_ == 0)
{
lean_ctor_set(v___x_5999_, 1, v___x_6009_);
v___x_6011_ = v___x_5999_;
goto v_reusejp_6010_;
}
else
{
lean_object* v_reuseFailAlloc_6012_; 
v_reuseFailAlloc_6012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6012_, 0, v_fst_5996_);
lean_ctor_set(v_reuseFailAlloc_6012_, 1, v___x_6009_);
v___x_6011_ = v_reuseFailAlloc_6012_;
goto v_reusejp_6010_;
}
v_reusejp_6010_:
{
v___y_6004_ = v___x_6011_;
goto v___jp_6003_;
}
}
else
{
lean_object* v_val_6013_; 
v_val_6013_ = lean_ctor_get(v_snd_5997_, 0);
lean_inc(v_val_6013_);
lean_dec_ref_known(v_snd_5997_, 1);
switch(lean_obj_tag(v_val_6013_))
{
case 0:
{
uint8_t v_value_6014_; lean_object* v___x_6016_; uint8_t v_isShared_6017_; uint8_t v_isSharedCheck_6024_; 
v_value_6014_ = lean_ctor_get_uint8(v_val_6013_, 0);
v_isSharedCheck_6024_ = !lean_is_exclusive(v_val_6013_);
if (v_isSharedCheck_6024_ == 0)
{
v___x_6016_ = v_val_6013_;
v_isShared_6017_ = v_isSharedCheck_6024_;
goto v_resetjp_6015_;
}
else
{
lean_dec(v_val_6013_);
v___x_6016_ = lean_box(0);
v_isShared_6017_ = v_isSharedCheck_6024_;
goto v_resetjp_6015_;
}
v_resetjp_6015_:
{
lean_object* v___x_6019_; 
if (v_isShared_6017_ == 0)
{
lean_ctor_set_tag(v___x_6016_, 2);
v___x_6019_ = v___x_6016_;
goto v_reusejp_6018_;
}
else
{
lean_object* v_reuseFailAlloc_6023_; 
v_reuseFailAlloc_6023_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_6023_, 0, v_value_6014_);
v___x_6019_ = v_reuseFailAlloc_6023_;
goto v_reusejp_6018_;
}
v_reusejp_6018_:
{
lean_object* v___x_6021_; 
if (v_isShared_6000_ == 0)
{
lean_ctor_set(v___x_5999_, 1, v___x_6019_);
v___x_6021_ = v___x_5999_;
goto v_reusejp_6020_;
}
else
{
lean_object* v_reuseFailAlloc_6022_; 
v_reuseFailAlloc_6022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6022_, 0, v_fst_5996_);
lean_ctor_set(v_reuseFailAlloc_6022_, 1, v___x_6019_);
v___x_6021_ = v_reuseFailAlloc_6022_;
goto v_reusejp_6020_;
}
v_reusejp_6020_:
{
v___y_6004_ = v___x_6021_;
goto v___jp_6003_;
}
}
}
}
case 1:
{
double v_value_6025_; lean_object* v___x_6027_; uint8_t v_isShared_6028_; uint8_t v_isSharedCheck_6035_; 
v_value_6025_ = lean_ctor_get_float(v_val_6013_, 0);
v_isSharedCheck_6035_ = !lean_is_exclusive(v_val_6013_);
if (v_isSharedCheck_6035_ == 0)
{
v___x_6027_ = v_val_6013_;
v_isShared_6028_ = v_isSharedCheck_6035_;
goto v_resetjp_6026_;
}
else
{
lean_dec(v_val_6013_);
v___x_6027_ = lean_box(0);
v_isShared_6028_ = v_isSharedCheck_6035_;
goto v_resetjp_6026_;
}
v_resetjp_6026_:
{
lean_object* v___x_6030_; 
if (v_isShared_6028_ == 0)
{
lean_ctor_set_tag(v___x_6027_, 3);
v___x_6030_ = v___x_6027_;
goto v_reusejp_6029_;
}
else
{
lean_object* v_reuseFailAlloc_6034_; 
v_reuseFailAlloc_6034_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_6034_, 0, v_value_6025_);
v___x_6030_ = v_reuseFailAlloc_6034_;
goto v_reusejp_6029_;
}
v_reusejp_6029_:
{
lean_object* v___x_6032_; 
if (v_isShared_6000_ == 0)
{
lean_ctor_set(v___x_5999_, 1, v___x_6030_);
v___x_6032_ = v___x_5999_;
goto v_reusejp_6031_;
}
else
{
lean_object* v_reuseFailAlloc_6033_; 
v_reuseFailAlloc_6033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6033_, 0, v_fst_5996_);
lean_ctor_set(v_reuseFailAlloc_6033_, 1, v___x_6030_);
v___x_6032_ = v_reuseFailAlloc_6033_;
goto v_reusejp_6031_;
}
v_reusejp_6031_:
{
v___y_6004_ = v___x_6032_;
goto v___jp_6003_;
}
}
}
}
default: 
{
lean_object* v_value_6036_; lean_object* v___x_6038_; uint8_t v_isShared_6039_; uint8_t v_isSharedCheck_6046_; 
v_value_6036_ = lean_ctor_get(v_val_6013_, 0);
v_isSharedCheck_6046_ = !lean_is_exclusive(v_val_6013_);
if (v_isSharedCheck_6046_ == 0)
{
v___x_6038_ = v_val_6013_;
v_isShared_6039_ = v_isSharedCheck_6046_;
goto v_resetjp_6037_;
}
else
{
lean_inc(v_value_6036_);
lean_dec(v_val_6013_);
v___x_6038_ = lean_box(0);
v_isShared_6039_ = v_isSharedCheck_6046_;
goto v_resetjp_6037_;
}
v_resetjp_6037_:
{
lean_object* v___x_6041_; 
if (v_isShared_6039_ == 0)
{
lean_ctor_set_tag(v___x_6038_, 4);
v___x_6041_ = v___x_6038_;
goto v_reusejp_6040_;
}
else
{
lean_object* v_reuseFailAlloc_6045_; 
v_reuseFailAlloc_6045_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6045_, 0, v_value_6036_);
v___x_6041_ = v_reuseFailAlloc_6045_;
goto v_reusejp_6040_;
}
v_reusejp_6040_:
{
lean_object* v___x_6043_; 
if (v_isShared_6000_ == 0)
{
lean_ctor_set(v___x_5999_, 1, v___x_6041_);
v___x_6043_ = v___x_5999_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6044_, 0, v_fst_5996_);
lean_ctor_set(v_reuseFailAlloc_6044_, 1, v___x_6041_);
v___x_6043_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
v___y_6004_ = v___x_6043_;
goto v___jp_6003_;
}
}
}
}
}
}
v___jp_6003_:
{
size_t v___x_6005_; size_t v___x_6006_; lean_object* v___x_6007_; 
v___x_6005_ = ((size_t)1ULL);
v___x_6006_ = lean_usize_add(v_i_5992_, v___x_6005_);
v___x_6007_ = lean_array_uset(v_bs_x27_6002_, v_i_5992_, v___y_6004_);
v_i_5992_ = v___x_6006_;
v_bs_5993_ = v___x_6007_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Span_setAttributes_spec__0___boxed(lean_object* v_sz_6048_, lean_object* v_i_6049_, lean_object* v_bs_6050_){
_start:
{
size_t v_sz_boxed_6051_; size_t v_i_boxed_6052_; lean_object* v_res_6053_; 
v_sz_boxed_6051_ = lean_unbox_usize(v_sz_6048_);
lean_dec(v_sz_6048_);
v_i_boxed_6052_ = lean_unbox_usize(v_i_6049_);
lean_dec(v_i_6049_);
v_res_6053_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Span_setAttributes_spec__0(v_sz_boxed_6051_, v_i_boxed_6052_, v_bs_6050_);
return v_res_6053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setAttributes(lean_object* v_self_6054_, lean_object* v_attributes_6055_){
_start:
{
lean_object* v___x_6057_; size_t v_sz_6058_; size_t v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; 
v___x_6057_ = lean_mk_string_unchecked("setAttributes", 13, 13);
v_sz_6058_ = lean_array_size(v_attributes_6055_);
v___x_6059_ = ((size_t)0ULL);
v___x_6060_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_Span_setAttributes_spec__0(v_sz_6058_, v___x_6059_, v_attributes_6055_);
v___x_6061_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_6061_, 0, v___x_6060_);
v___x_6062_ = lean_unsigned_to_nat(1u);
v___x_6063_ = lean_mk_empty_array_with_capacity(v___x_6062_);
v___x_6064_ = lean_array_push(v___x_6063_, v___x_6061_);
v___x_6065_ = l_Lasm_JS_Web_Support_args(v___x_6064_);
v___x_6066_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_6054_, v___x_6057_, v___x_6065_);
if (lean_obj_tag(v___x_6066_) == 0)
{
lean_object* v_a_6067_; lean_object* v___x_6069_; uint8_t v_isShared_6070_; uint8_t v_isSharedCheck_6074_; 
v_a_6067_ = lean_ctor_get(v___x_6066_, 0);
v_isSharedCheck_6074_ = !lean_is_exclusive(v___x_6066_);
if (v_isSharedCheck_6074_ == 0)
{
v___x_6069_ = v___x_6066_;
v_isShared_6070_ = v_isSharedCheck_6074_;
goto v_resetjp_6068_;
}
else
{
lean_inc(v_a_6067_);
lean_dec(v___x_6066_);
v___x_6069_ = lean_box(0);
v_isShared_6070_ = v_isSharedCheck_6074_;
goto v_resetjp_6068_;
}
v_resetjp_6068_:
{
lean_object* v___x_6072_; 
if (v_isShared_6070_ == 0)
{
v___x_6072_ = v___x_6069_;
goto v_reusejp_6071_;
}
else
{
lean_object* v_reuseFailAlloc_6073_; 
v_reuseFailAlloc_6073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6073_, 0, v_a_6067_);
v___x_6072_ = v_reuseFailAlloc_6073_;
goto v_reusejp_6071_;
}
v_reusejp_6071_:
{
return v___x_6072_;
}
}
}
else
{
lean_object* v_a_6075_; lean_object* v___x_6077_; uint8_t v_isShared_6078_; uint8_t v_isSharedCheck_6082_; 
v_a_6075_ = lean_ctor_get(v___x_6066_, 0);
v_isSharedCheck_6082_ = !lean_is_exclusive(v___x_6066_);
if (v_isSharedCheck_6082_ == 0)
{
v___x_6077_ = v___x_6066_;
v_isShared_6078_ = v_isSharedCheck_6082_;
goto v_resetjp_6076_;
}
else
{
lean_inc(v_a_6075_);
lean_dec(v___x_6066_);
v___x_6077_ = lean_box(0);
v_isShared_6078_ = v_isSharedCheck_6082_;
goto v_resetjp_6076_;
}
v_resetjp_6076_:
{
lean_object* v___x_6080_; 
if (v_isShared_6078_ == 0)
{
v___x_6080_ = v___x_6077_;
goto v_reusejp_6079_;
}
else
{
lean_object* v_reuseFailAlloc_6081_; 
v_reuseFailAlloc_6081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6081_, 0, v_a_6075_);
v___x_6080_ = v_reuseFailAlloc_6081_;
goto v_reusejp_6079_;
}
v_reusejp_6079_:
{
return v___x_6080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setAttributes___boxed(lean_object* v_self_6083_, lean_object* v_attributes_6084_, lean_object* v_a_6085_){
_start:
{
lean_object* v_res_6086_; 
v_res_6086_ = l_Lasm_JS_Cloudflare_Span_setAttributes(v_self_6083_, v_attributes_6084_);
return v_res_6086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_recordException(lean_object* v_self_6087_, lean_object* v_exception_6088_){
_start:
{
lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; 
v___x_6090_ = lean_mk_string_unchecked("recordException", 15, 15);
v___x_6091_ = lean_unsigned_to_nat(1u);
v___x_6092_ = lean_mk_empty_array_with_capacity(v___x_6091_);
v___x_6093_ = lean_array_push(v___x_6092_, v_exception_6088_);
v___x_6094_ = l_Lasm_JS_Web_Support_args(v___x_6093_);
v___x_6095_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_6087_, v___x_6090_, v___x_6094_);
return v___x_6095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_recordException___boxed(lean_object* v_self_6096_, lean_object* v_exception_6097_, lean_object* v_a_6098_){
_start:
{
lean_object* v_res_6099_; 
v_res_6099_ = l_Lasm_JS_Cloudflare_Span_recordException(v_self_6096_, v_exception_6097_);
return v_res_6099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_updateName(lean_object* v_self_6100_, lean_object* v_name_6101_){
_start:
{
lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; 
v___x_6103_ = lean_mk_string_unchecked("updateName", 10, 10);
v___x_6104_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6104_, 0, v_name_6101_);
v___x_6105_ = lean_unsigned_to_nat(1u);
v___x_6106_ = lean_mk_empty_array_with_capacity(v___x_6105_);
v___x_6107_ = lean_array_push(v___x_6106_, v___x_6104_);
v___x_6108_ = l_Lasm_JS_Web_Support_args(v___x_6107_);
v___x_6109_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_6100_, v___x_6103_, v___x_6108_);
if (lean_obj_tag(v___x_6109_) == 0)
{
lean_object* v_a_6110_; lean_object* v___x_6112_; uint8_t v_isShared_6113_; uint8_t v_isSharedCheck_6117_; 
v_a_6110_ = lean_ctor_get(v___x_6109_, 0);
v_isSharedCheck_6117_ = !lean_is_exclusive(v___x_6109_);
if (v_isSharedCheck_6117_ == 0)
{
v___x_6112_ = v___x_6109_;
v_isShared_6113_ = v_isSharedCheck_6117_;
goto v_resetjp_6111_;
}
else
{
lean_inc(v_a_6110_);
lean_dec(v___x_6109_);
v___x_6112_ = lean_box(0);
v_isShared_6113_ = v_isSharedCheck_6117_;
goto v_resetjp_6111_;
}
v_resetjp_6111_:
{
lean_object* v___x_6115_; 
if (v_isShared_6113_ == 0)
{
v___x_6115_ = v___x_6112_;
goto v_reusejp_6114_;
}
else
{
lean_object* v_reuseFailAlloc_6116_; 
v_reuseFailAlloc_6116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6116_, 0, v_a_6110_);
v___x_6115_ = v_reuseFailAlloc_6116_;
goto v_reusejp_6114_;
}
v_reusejp_6114_:
{
return v___x_6115_;
}
}
}
else
{
lean_object* v_a_6118_; lean_object* v___x_6120_; uint8_t v_isShared_6121_; uint8_t v_isSharedCheck_6125_; 
v_a_6118_ = lean_ctor_get(v___x_6109_, 0);
v_isSharedCheck_6125_ = !lean_is_exclusive(v___x_6109_);
if (v_isSharedCheck_6125_ == 0)
{
v___x_6120_ = v___x_6109_;
v_isShared_6121_ = v_isSharedCheck_6125_;
goto v_resetjp_6119_;
}
else
{
lean_inc(v_a_6118_);
lean_dec(v___x_6109_);
v___x_6120_ = lean_box(0);
v_isShared_6121_ = v_isSharedCheck_6125_;
goto v_resetjp_6119_;
}
v_resetjp_6119_:
{
lean_object* v___x_6123_; 
if (v_isShared_6121_ == 0)
{
v___x_6123_ = v___x_6120_;
goto v_reusejp_6122_;
}
else
{
lean_object* v_reuseFailAlloc_6124_; 
v_reuseFailAlloc_6124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6124_, 0, v_a_6118_);
v___x_6123_ = v_reuseFailAlloc_6124_;
goto v_reusejp_6122_;
}
v_reusejp_6122_:
{
return v___x_6123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_updateName___boxed(lean_object* v_self_6126_, lean_object* v_name_6127_, lean_object* v_a_6128_){
_start:
{
lean_object* v_res_6129_; 
v_res_6129_ = l_Lasm_JS_Cloudflare_Span_updateName(v_self_6126_, v_name_6127_);
return v_res_6129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setStatus(lean_object* v_self_6130_, lean_object* v_status_6131_){
_start:
{
uint8_t v_code_6133_; lean_object* v_message_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___y_6138_; 
v_code_6133_ = lean_ctor_get_uint8(v_status_6131_, sizeof(void*)*1);
v_message_6134_ = lean_ctor_get(v_status_6131_, 0);
lean_inc(v_message_6134_);
lean_dec_ref(v_status_6131_);
v___x_6135_ = lean_mk_string_unchecked("setStatus", 9, 9);
v___x_6136_ = lean_mk_string_unchecked("code", 4, 4);
switch(v_code_6133_)
{
case 0:
{
lean_object* v___x_6169_; lean_object* v___x_6170_; 
v___x_6169_ = lean_mk_string_unchecked("unset", 5, 5);
v___x_6170_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6170_, 0, v___x_6169_);
v___y_6138_ = v___x_6170_;
goto v___jp_6137_;
}
case 1:
{
lean_object* v___x_6171_; lean_object* v___x_6172_; 
v___x_6171_ = lean_mk_string_unchecked("ok", 2, 2);
v___x_6172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6172_, 0, v___x_6171_);
v___y_6138_ = v___x_6172_;
goto v___jp_6137_;
}
default: 
{
lean_object* v___x_6173_; lean_object* v___x_6174_; 
v___x_6173_ = lean_mk_string_unchecked("error", 5, 5);
v___x_6174_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6174_, 0, v___x_6173_);
v___y_6138_ = v___x_6174_;
goto v___jp_6137_;
}
}
v___jp_6137_:
{
lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; 
v___x_6139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6139_, 0, v___x_6136_);
lean_ctor_set(v___x_6139_, 1, v___y_6138_);
v___x_6140_ = lean_mk_string_unchecked("message", 7, 7);
v___x_6141_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_6134_);
v___x_6142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6142_, 0, v___x_6140_);
lean_ctor_set(v___x_6142_, 1, v___x_6141_);
v___x_6143_ = lean_unsigned_to_nat(2u);
v___x_6144_ = lean_mk_empty_array_with_capacity(v___x_6143_);
v___x_6145_ = lean_array_push(v___x_6144_, v___x_6139_);
v___x_6146_ = lean_array_push(v___x_6145_, v___x_6142_);
v___x_6147_ = l_Lasm_JS_Web_Support_fields(v___x_6146_);
lean_dec_ref(v___x_6146_);
v___x_6148_ = lean_unsigned_to_nat(1u);
v___x_6149_ = lean_mk_empty_array_with_capacity(v___x_6148_);
v___x_6150_ = lean_array_push(v___x_6149_, v___x_6147_);
v___x_6151_ = l_Lasm_JS_Web_Support_args(v___x_6150_);
v___x_6152_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_6130_, v___x_6135_, v___x_6151_);
if (lean_obj_tag(v___x_6152_) == 0)
{
lean_object* v_a_6153_; lean_object* v___x_6155_; uint8_t v_isShared_6156_; uint8_t v_isSharedCheck_6160_; 
v_a_6153_ = lean_ctor_get(v___x_6152_, 0);
v_isSharedCheck_6160_ = !lean_is_exclusive(v___x_6152_);
if (v_isSharedCheck_6160_ == 0)
{
v___x_6155_ = v___x_6152_;
v_isShared_6156_ = v_isSharedCheck_6160_;
goto v_resetjp_6154_;
}
else
{
lean_inc(v_a_6153_);
lean_dec(v___x_6152_);
v___x_6155_ = lean_box(0);
v_isShared_6156_ = v_isSharedCheck_6160_;
goto v_resetjp_6154_;
}
v_resetjp_6154_:
{
lean_object* v___x_6158_; 
if (v_isShared_6156_ == 0)
{
v___x_6158_ = v___x_6155_;
goto v_reusejp_6157_;
}
else
{
lean_object* v_reuseFailAlloc_6159_; 
v_reuseFailAlloc_6159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6159_, 0, v_a_6153_);
v___x_6158_ = v_reuseFailAlloc_6159_;
goto v_reusejp_6157_;
}
v_reusejp_6157_:
{
return v___x_6158_;
}
}
}
else
{
lean_object* v_a_6161_; lean_object* v___x_6163_; uint8_t v_isShared_6164_; uint8_t v_isSharedCheck_6168_; 
v_a_6161_ = lean_ctor_get(v___x_6152_, 0);
v_isSharedCheck_6168_ = !lean_is_exclusive(v___x_6152_);
if (v_isSharedCheck_6168_ == 0)
{
v___x_6163_ = v___x_6152_;
v_isShared_6164_ = v_isSharedCheck_6168_;
goto v_resetjp_6162_;
}
else
{
lean_inc(v_a_6161_);
lean_dec(v___x_6152_);
v___x_6163_ = lean_box(0);
v_isShared_6164_ = v_isSharedCheck_6168_;
goto v_resetjp_6162_;
}
v_resetjp_6162_:
{
lean_object* v___x_6166_; 
if (v_isShared_6164_ == 0)
{
v___x_6166_ = v___x_6163_;
goto v_reusejp_6165_;
}
else
{
lean_object* v_reuseFailAlloc_6167_; 
v_reuseFailAlloc_6167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6167_, 0, v_a_6161_);
v___x_6166_ = v_reuseFailAlloc_6167_;
goto v_reusejp_6165_;
}
v_reusejp_6165_:
{
return v___x_6166_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_setStatus___boxed(lean_object* v_self_6175_, lean_object* v_status_6176_, lean_object* v_a_6177_){
_start:
{
lean_object* v_res_6178_; 
v_res_6178_ = l_Lasm_JS_Cloudflare_Span_setStatus(v_self_6175_, v_status_6176_);
return v_res_6178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_end(lean_object* v_self_6179_){
_start:
{
lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; 
v___x_6181_ = lean_mk_string_unchecked("end", 3, 3);
v___x_6182_ = lean_unsigned_to_nat(0u);
v___x_6183_ = lean_mk_empty_array_with_capacity(v___x_6182_);
v___x_6184_ = l_Lasm_JS_Web_Support_args(v___x_6183_);
v___x_6185_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_6179_, v___x_6181_, v___x_6184_);
return v___x_6185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Span_end___boxed(lean_object* v_self_6186_, lean_object* v_a_6187_){
_start:
{
lean_object* v_res_6188_; 
v_res_6188_ = l_Lasm_JS_Cloudflare_Span_end(v_self_6186_);
return v_res_6188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg(lean_object* v_inst_6189_){
_start:
{
lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; 
v___x_6191_ = l_Lasm_JS_instFromJSData;
v___x_6192_ = lean_mk_string_unchecked("cloudflare:workers", 18, 18);
v___x_6193_ = lean_mk_string_unchecked("env", 3, 3);
v___x_6194_ = lean_box(0);
v___x_6195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6195_, 0, v___x_6193_);
lean_ctor_set(v___x_6195_, 1, v___x_6194_);
v___x_6196_ = l_Lasm_JS_Cloudflare_Support_getExport___redArg(v___x_6192_, v___x_6195_, v___x_6191_);
if (lean_obj_tag(v___x_6196_) == 0)
{
lean_object* v_a_6197_; lean_object* v___x_6198_; 
v_a_6197_ = lean_ctor_get(v___x_6196_, 0);
lean_inc(v_a_6197_);
lean_dec_ref_known(v___x_6196_, 1);
v___x_6198_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_6189_, v_a_6197_);
return v___x_6198_;
}
else
{
lean_object* v_a_6199_; lean_object* v___x_6201_; uint8_t v_isShared_6202_; uint8_t v_isSharedCheck_6206_; 
lean_dec_ref(v_inst_6189_);
v_a_6199_ = lean_ctor_get(v___x_6196_, 0);
v_isSharedCheck_6206_ = !lean_is_exclusive(v___x_6196_);
if (v_isSharedCheck_6206_ == 0)
{
v___x_6201_ = v___x_6196_;
v_isShared_6202_ = v_isSharedCheck_6206_;
goto v_resetjp_6200_;
}
else
{
lean_inc(v_a_6199_);
lean_dec(v___x_6196_);
v___x_6201_ = lean_box(0);
v_isShared_6202_ = v_isSharedCheck_6206_;
goto v_resetjp_6200_;
}
v_resetjp_6200_:
{
lean_object* v___x_6204_; 
if (v_isShared_6202_ == 0)
{
v___x_6204_ = v___x_6201_;
goto v_reusejp_6203_;
}
else
{
lean_object* v_reuseFailAlloc_6205_; 
v_reuseFailAlloc_6205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6205_, 0, v_a_6199_);
v___x_6204_ = v_reuseFailAlloc_6205_;
goto v_reusejp_6203_;
}
v_reusejp_6203_:
{
return v___x_6204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___redArg___boxed(lean_object* v_inst_6207_, lean_object* v_a_6208_){
_start:
{
lean_object* v_res_6209_; 
v_res_6209_ = l_Lasm_JS_Cloudflare_env___redArg(v_inst_6207_);
return v_res_6209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env(lean_object* v_Env_6210_, lean_object* v_inst_6211_){
_start:
{
lean_object* v___x_6213_; 
v___x_6213_ = l_Lasm_JS_Cloudflare_env___redArg(v_inst_6211_);
return v___x_6213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_env___boxed(lean_object* v_Env_6214_, lean_object* v_inst_6215_, lean_object* v_a_6216_){
_start:
{
lean_object* v_res_6217_; 
v_res_6217_ = l_Lasm_JS_Cloudflare_env(v_Env_6214_, v_inst_6215_);
return v_res_6217_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
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
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Cloudflare_instFromJSExecutionContext = _init_l_Lasm_JS_Cloudflare_instFromJSExecutionContext();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSExecutionContext);
l_Lasm_JS_Cloudflare_instFromJSCacheContext = _init_l_Lasm_JS_Cloudflare_instFromJSCacheContext();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCacheContext);
l_Lasm_JS_Cloudflare_instFromJSScheduledController = _init_l_Lasm_JS_Cloudflare_instFromJSScheduledController();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSScheduledController);
l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessContext = _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessContext();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessContext);
l_Lasm_JS_Cloudflare_instFromJSScheduledEvent = _init_l_Lasm_JS_Cloudflare_instFromJSScheduledEvent();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSScheduledEvent);
l_Lasm_JS_Cloudflare_instFromJSTracing = _init_l_Lasm_JS_Cloudflare_instFromJSTracing();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSTracing);
l_Lasm_JS_Cloudflare_instFromJSSpan = _init_l_Lasm_JS_Cloudflare_instFromJSSpan();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSSpan);
l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_default = _init_l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_default();
l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode = _init_l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode();
l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode = _init_l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode);
l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions = _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions);
l_Lasm_JS_Cloudflare_instFromJSCachePurgeError = _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError);
l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult = _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult);
l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp = _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp);
l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo = _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo);
l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups = _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups);
l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity = _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity);
l_Lasm_JS_Cloudflare_instFromJSTracingEnterSpanCallback = _init_l_Lasm_JS_Cloudflare_instFromJSTracingEnterSpanCallback();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSTracingEnterSpanCallback);
l_Lasm_JS_Cloudflare_instFromJSTracingStartActiveSpanCallback = _init_l_Lasm_JS_Cloudflare_instFromJSTracingStartActiveSpanCallback();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSTracingStartActiveSpanCallback);
l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext = _init_l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext);
l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString = _init_l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString);
l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus = _init_l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus);
l_Lasm_JS_Cloudflare_instFromJSTestController = _init_l_Lasm_JS_Cloudflare_instFromJSTestController();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSTestController);
l_Lasm_JS_Cloudflare_instToJSCloudflare = _init_l_Lasm_JS_Cloudflare_instToJSCloudflare();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instToJSCloudflare);
l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler = _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler);
l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler = _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler);
l_Lasm_JS_Cloudflare_instFromJSExportedHandlerTestHandler = _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerTestHandler();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSExportedHandlerTestHandler);
l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble = _init_l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble);
l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException = _init_l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException);
l_Lasm_JS_Cloudflare_instFromJSPagesFunction = _init_l_Lasm_JS_Cloudflare_instFromJSPagesFunction();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSPagesFunction);
l_Lasm_JS_Cloudflare_instFromJSPagesPluginFunction = _init_l_Lasm_JS_Cloudflare_instFromJSPagesPluginFunction();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instFromJSPagesPluginFunction);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
